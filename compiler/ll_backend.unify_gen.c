/*
** Automatically generated from `unify_gen.m'
** by the Mercury compiler,
** version 13.05.1, configured for x86_64-apple-darwin12.3.0.
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


/* :- module ll_backend.unify_gen. */
/* :- implementation. */

/*
INIT mercury__ll_backend__unify_gen__init
ENDINIT
*/

#include "ll_backend.unify_gen.mih"


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
#include "counter.mih"
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
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
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
#include "backend_libs.arg_pack.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.proc_label.mih"
#include "backend_libs.rtti.mih"
#include "backend_libs.type_class_info.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_code_util.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
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
#include "ll_backend.code_info.mih"
#include "ll_backend.code_util.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.prog_rep.mih"
#include "ll_backend.prog_rep_tables.mih"
#include "ll_backend.stack_layout.mih"
#include "ll_backend.trace_gen.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 159 "ll_backend.unify_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__unify_gen__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__const_struct__type_ctor_info_const_struct_0;

#line 162 "ll_backend.unify_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__unify_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_typed_rval_0;

#line 165 "ll_backend.unify_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__unify_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 168 "ll_backend.unify_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 171 "ll_backend.unify_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

#line 174 "ll_backend.unify_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0;

#line 177 "ll_backend.unify_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_cell_arg_0;

#line 180 "ll_backend.unify_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0;

#line 183 "ll_backend.unify_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_needs_update_0;

#line 186 "ll_backend.unify_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__list__pti_list_1__plain_ll_backend__unify_gen__type_ctor_info_field_addr_0;

#line 189 "ll_backend.unify_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 192 "ll_backend.unify_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__unify_gen__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_ll_backend__llds__type_ctor_info_typed_rval_0;

#line 195 "ll_backend.unify_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_typed_rval_0;

#line 198 "ll_backend.unify_gen.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__unify_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ll_backend__llds__type_ctor_info_typed_rval_0;

#line 201 "ll_backend.unify_gen.c"
static const MR_PseudoTypeInfo ll_backend__unify_gen__ll_backend__unify_gen__field_types_field_addr_0_0[2];

#line 204 "ll_backend.unify_gen.c"
static const MR_ConstString ll_backend__unify_gen__ll_backend__unify_gen__field_names_field_addr_0_0[2];

#line 207 "ll_backend.unify_gen.c"
static const MR_DuFunctorDesc ll_backend__unify_gen__ll_backend__unify_gen__du_functor_desc_field_addr_0_0;

#line 210 "ll_backend.unify_gen.c"
static const MR_DuFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__du_stag_ordered_field_addr_0_0[1];

#line 213 "ll_backend.unify_gen.c"
static const MR_DuPtagLayout ll_backend__unify_gen__ll_backend__unify_gen__du_ptag_ordered_field_addr_0[1];

#line 216 "ll_backend.unify_gen.c"
static const MR_DuFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__du_name_ordered_field_addr_0[1];

#line 219 "ll_backend.unify_gen.c"
static const MR_Integer ll_backend__unify_gen__ll_backend__unify_gen__functor_number_map_field_addr_0[1];

#line 222 "ll_backend.unify_gen.c"
static const MR_EnumFunctorDesc ll_backend__unify_gen__ll_backend__unify_gen__enum_functor_desc_test_sense_0_0;

#line 225 "ll_backend.unify_gen.c"
static const MR_EnumFunctorDesc ll_backend__unify_gen__ll_backend__unify_gen__enum_functor_desc_test_sense_0_1;

#line 228 "ll_backend.unify_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__enum_value_ordered_test_sense_0[2];

#line 231 "ll_backend.unify_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__enum_name_ordered_test_sense_0[2];

#line 234 "ll_backend.unify_gen.c"
static const MR_Integer ll_backend__unify_gen__ll_backend__unify_gen__functor_number_map_test_sense_0[2];

#line 237 "ll_backend.unify_gen.c"
static const MR_PseudoTypeInfo ll_backend__unify_gen__ll_backend__unify_gen__field_types_uni_val_0_0[1];

#line 240 "ll_backend.unify_gen.c"
static const MR_DuFunctorDesc ll_backend__unify_gen__ll_backend__unify_gen__du_functor_desc_uni_val_0_0;

#line 243 "ll_backend.unify_gen.c"
static const MR_PseudoTypeInfo ll_backend__unify_gen__ll_backend__unify_gen__field_types_uni_val_0_1[2];

#line 246 "ll_backend.unify_gen.c"
static const MR_DuFunctorDesc ll_backend__unify_gen__ll_backend__unify_gen__du_functor_desc_uni_val_0_1;

#line 249 "ll_backend.unify_gen.c"
static const MR_DuFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__du_stag_ordered_uni_val_0_0[1];

#line 252 "ll_backend.unify_gen.c"
static const MR_DuFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__du_stag_ordered_uni_val_0_1[1];

#line 255 "ll_backend.unify_gen.c"
static const MR_DuPtagLayout ll_backend__unify_gen__ll_backend__unify_gen__du_ptag_ordered_uni_val_0[2];

#line 258 "ll_backend.unify_gen.c"
static const MR_DuFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__du_name_ordered_uni_val_0[2];

#line 261 "ll_backend.unify_gen.c"
static const MR_Integer ll_backend__unify_gen__ll_backend__unify_gen__functor_number_map_uni_val_0[2];

#line 264 "ll_backend.unify_gen.c"
static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____active_ground_term_map_0_0_10001(
#line 267 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
#line 269 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_2);

#line 272 "ll_backend.unify_gen.c"
static void MR_CALL 
ll_backend__unify_gen____Compare____active_ground_term_map_0_0_10001(
#line 275 "ll_backend.unify_gen.c"
  MR_Box * ll_backend__unify_gen__wrapper_arg_1,
#line 277 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
#line 279 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_3);

#line 282 "ll_backend.unify_gen.c"
static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____field_addr_0_0_10001(
#line 285 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
#line 287 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_2);

#line 290 "ll_backend.unify_gen.c"
static void MR_CALL 
ll_backend__unify_gen____Compare____field_addr_0_0_10001(
#line 293 "ll_backend.unify_gen.c"
  MR_Box * ll_backend__unify_gen__wrapper_arg_1,
#line 295 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
#line 297 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_3);

#line 300 "ll_backend.unify_gen.c"
static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____test_sense_0_0_10001(
#line 303 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
#line 305 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_2);

#line 308 "ll_backend.unify_gen.c"
static void MR_CALL 
ll_backend__unify_gen____Compare____test_sense_0_0_10001(
#line 311 "ll_backend.unify_gen.c"
  MR_Box * ll_backend__unify_gen__wrapper_arg_1,
#line 313 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
#line 315 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_3);

#line 318 "ll_backend.unify_gen.c"
static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____uni_val_0_0_10001(
#line 321 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
#line 323 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_2);

#line 326 "ll_backend.unify_gen.c"
static void MR_CALL 
ll_backend__unify_gen____Compare____uni_val_0_0_10001(
#line 329 "ll_backend.unify_gen.c"
  MR_Box * ll_backend__unify_gen__wrapper_arg_1,
#line 331 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
#line 333 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_3);

#line 1825 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_95_115_116_114_117_99_116_95_97_114_103_95_116_97_103_95_95_91_49_44_32_51_93_95_48_6_p_0_1(
#line 1825 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg);

#line 1809 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_95_115_116_114_117_99_116_95_97_114_103_95_116_97_103_95_95_91_49_44_32_51_93_95_48_6_p_0(
#line 1809 "unify_gen.m"
  MR_Word ll_backend__unify_gen__UnboxedFloats_8,
#line 1809 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConsTag_10,
#line 1809 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ArgWidth_11,
#line 1809 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__TypedRval_12);

#line 1693 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_95_115_116_114_117_99_116_95_114_118_97_108_95_95_91_52_93_95_48_10_p_0(
#line 1693 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ModuleInfo_11,
#line 1693 "unify_gen.m"
  MR_Word ll_backend__unify_gen__UnboxedFloats_12,
#line 1693 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConstStructMap_13,
#line 1693 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConsTag_15,
#line 1693 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConstArgs_16,
#line 1693 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConsArgWidths_17,
#line 1693 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__TypedRval_18,
#line 1693 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_70,
#line 1693 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_71);

#line 1264 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_9_p_0(
#line 1264 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Var_10,
#line 1264 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Args_12,
#line 1264 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Modes_13,
#line 1264 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ArgWidths_14,
#line 1264 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Tag_15,
#line 1264 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_16,
#line 1264 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_62,
#line 1264 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_63);

#line 706 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_p_0(
#line 706 "unify_gen.m"
  MR_Word ll_backend__unify_gen__PredId_10,
#line 706 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__ProcId_11,
#line 706 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Var_13,
#line 706 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Args_14,
#line 706 "unify_gen.m"
  MR_Word ll_backend__unify_gen__GoalInfo_15,
#line 706 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_16,
#line 706 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_96,
#line 706 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_97);

#line 344 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_97_119_95_116_97_103_95_116_101_115_116_95_95_91_50_93_95_48_11_p_0(
#line 344 "unify_gen.m"
  MR_Word ll_backend__unify_gen__VarRval_12,
#line 344 "unify_gen.m"
  MR_String ll_backend__unify_gen__VarName_14,
#line 344 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConsId_15,
#line 344 "unify_gen.m"
  MR_Word ll_backend__unify_gen__MaybeConsTag_16,
#line 344 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CheaperTagTest_17,
#line 344 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Sense_18,
#line 344 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__ElseLabel_19,
#line 344 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_20,
#line 344 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_33,
#line 344 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_34);

#line 307 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_97_119_95_116_97_103_95_116_101_115_116_95_99_97_115_101_95_95_91_50_93_95_48_11_p_0_2(
#line 307 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg,
#line 307 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
#line 307 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_2);

#line 302 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_97_119_95_116_97_103_95_116_101_115_116_95_99_97_115_101_95_95_91_50_93_95_48_11_p_0_1(
#line 302 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg,
#line 302 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
#line 302 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_2,
#line 302 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_3);

#line 2172 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__shift_combine_arg__2172__1_2_p_0(
#line 2172 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__Shift_10,
#line 2172 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__HeadVar__2_39);

#line 2002 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_ground_term_conjunct_tag__2002__1_2_p_0(
#line 2002 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Lang_21,
#line 2002 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_119);

#line 1825 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_const_struct_arg_tag__1825__1_2_p_0(
#line 1825 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Lang_17,
#line 1825 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_71);

#line 623 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__623__1_2_p_0(
#line 623 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Args_15,
#line 623 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_143);

#line 649 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__649__1_2_p_0(
#line 649 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Args_15,
#line 649 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_120);

#line 674 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__674__1_2_p_0(
#line 674 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Args_15,
#line 674 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_100);

#line 682 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__682__1_2_p_0(
#line 682 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Args_15,
#line 682 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_93);

#line 542 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__542__1_2_p_0(
#line 542 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Lang_26,
#line 542 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_191);

#line 658 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__658__1_2_p_0(
#line 658 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Args_15,
#line 658 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_110);

#line 697 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__697__1_2_p_0(
#line 697 "unify_gen.m"
  MR_Word ll_backend__unify_gen__MaybeSize_20,
#line 697 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_86);

#line 695 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__695__1_2_p_0(
#line 695 "unify_gen.m"
  MR_Word ll_backend__unify_gen__TakeAddr_19,
#line 695 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_81);

#line 632 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__632__1_2_p_0(
#line 632 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Args_15,
#line 632 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_132);

#line 482 "unify_gen.m"
static MR_Word MR_CALL 
ll_backend__unify_gen__IntroducedFrom__func__raw_tag_test__482__1_3_f_0(
#line 482 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Rval_4,
#line 482 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_48,
#line 482 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__3_49);

#line 413 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__raw_tag_test__413__1_2_p_0(
#line 413 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ForeignLang_10,
#line 413 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_113);

#line 221 "unify_gen.m"
static MR_Word MR_CALL 
ll_backend__unify_gen__IntroducedFrom__func__get_cons_arg_widths__221__1_1_f_0(
#line 221 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__1_21);

#line 107 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen____Compare____uni_val_0_0(
#line 107 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__HeadVar__1_1,
#line 107 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_2,
#line 107 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__3_3);

#line 107 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____uni_val_0_0(
#line 107 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__1_1,
#line 107 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_2);

#line 113 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen____Compare____field_addr_0_0(
#line 113 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__HeadVar__1_1,
#line 113 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_2,
#line 113 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__3_3);

#line 113 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____field_addr_0_0(
#line 113 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__1_1,
#line 113 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_2);

#line 1907 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen____Compare____active_ground_term_map_0_0(
#line 1907 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__HeadVar__1_1,
#line 1907 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_2,
#line 1907 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__3_3);

#line 1907 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____active_ground_term_map_0_0(
#line 1907 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__1_1,
#line 1907 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_2);

#line 2242 "unify_gen.m"
static MR_Word MR_CALL 
ll_backend__unify_gen__bitwise_or_cell_arg_2_f_0(
#line 2242 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CellArgA_4,
#line 2242 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CellArgB_5);

#line 2237 "unify_gen.m"
static MR_Word MR_CALL 
ll_backend__unify_gen__right_shift_rval_2_f_0(
#line 2237 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Rval_4,
#line 2237 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__Shift_5);

#line 2219 "unify_gen.m"
static MR_Word MR_CALL 
ll_backend__unify_gen__maybe_left_shift_rval_2_f_0(
#line 2219 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Rval_4,
#line 2219 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__Shift_5);

#line 2199 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__shift_combine_rval_type_8_p_0(
#line 2199 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ArgA_9,
#line 2199 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__Shift_10,
#line 2199 "unify_gen.m"
  MR_Word ll_backend__unify_gen__MaybeArgB_11,
#line 2199 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__FinalArg_12);

#line 2172 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__shift_combine_arg_8_p_0_1(
#line 2172 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg);

#line 2137 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__shift_combine_arg_8_p_0(
#line 2137 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CellArgA_9,
#line 2137 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__Shift_10,
#line 2137 "unify_gen.m"
  MR_Word ll_backend__unify_gen__MaybeCellArgB_11,
#line 2137 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__FinalCellArg_12,
#line 2137 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_Code_0_28,
#line 2137 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_Code_29,
#line 2137 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_30,
#line 2137 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_31);

#line 2133 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__pack_ground_term_args_3_p_0_1(
#line 2133 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg,
#line 2133 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
#line 2133 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
#line 2133 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_3,
#line 2133 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_4,
#line 2133 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_5,
#line 2133 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_6,
#line 2133 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_7,
#line 2133 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_8);

#line 2129 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__pack_ground_term_args_3_p_0(
#line 2129 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Widths_4,
#line 2129 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_TypedRvals_0_8,
#line 2129 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_TypedRvals_9);

#line 2112 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_ground_term_arg_5_p_0(
#line 2112 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Var_6,
#line 2112 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConsArgWidth_7,
#line 2112 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__TypedRval_8,
#line 2112 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_12,
#line 2112 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_13);

#line 2109 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_ground_term_args_5_p_0_1(
#line 2109 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg,
#line 2109 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
#line 2109 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
#line 2109 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_3,
#line 2109 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_4,
#line 2109 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_5);

#line 2104 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_ground_term_args_5_p_0(
#line 2104 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Vars_6,
#line 2104 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConsArgWidths_7,
#line 2104 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__TypedRvals_8,
#line 2104 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_10,
#line 2104 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_11);

#line 2002 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__generate_ground_term_conjunct_tag_9_p_0_1(
#line 2002 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg);

#line 1984 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_ground_term_conjunct_tag_9_p_0(
#line 1984 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Var_10,
#line 1984 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConsTag_11,
#line 1984 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Args_12,
#line 1984 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConsArgWidths_13,
#line 1984 "unify_gen.m"
  MR_Word ll_backend__unify_gen__UnboxedFloats_14,
#line 1984 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_67,
#line 1984 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_68,
#line 1984 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_69,
#line 1984 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_70);

#line 1949 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_ground_term_conjuncts_7_p_0(
#line 1949 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__1_1,
#line 1949 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_2,
#line 1949 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__3_3,
#line 1949 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_4,
#line 1949 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_5,
#line 1949 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_6,
#line 1949 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_7);

#line 1893 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__det_single_arg_width_2_p_0(
#line 1893 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ArgWidths_3,
#line 1893 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__ArgWidth_4);

#line 1793 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_const_struct_arg_6_p_0(
#line 1793 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ModuleInfo_7,
#line 1793 "unify_gen.m"
  MR_Word ll_backend__unify_gen__UnboxedFloats_8,
#line 1793 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConstStructMap_9,
#line 1793 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConstArg_10,
#line 1793 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ArgWidth_11,
#line 1793 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__TypedRval_12);

#line 1789 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_const_struct_args_6_p_0_1(
#line 1789 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg,
#line 1789 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
#line 1789 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
#line 1789 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_3);

#line 1783 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_const_struct_args_6_p_0(
#line 1783 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ModuleInfo_7,
#line 1783 "unify_gen.m"
  MR_Word ll_backend__unify_gen__UnboxedFloats_8,
#line 1783 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConstStructMap_9,
#line 1783 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConstArgs_10,
#line 1783 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ArgWidths_11,
#line 1783 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__TypedRvals_12);

#line 1679 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_const_struct_7_p_0(
#line 1679 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ModuleInfo_8,
#line 1679 "unify_gen.m"
  MR_Word ll_backend__unify_gen__UnboxedFloats_9,
#line 1679 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__3_3,
#line 1679 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_ConstStructMap_0_21,
#line 1679 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_ConstStructMap_22,
#line 1679 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_23,
#line 1679 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_24);

#line 1614 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_direct_arg_deconstruct_8_p_0(
#line 1614 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Var_9,
#line 1614 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Arg_10,
#line 1614 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__Ptag_11,
#line 1614 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Mode_12,
#line 1614 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Type_13,
#line 1614 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_14,
#line 1614 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_23,
#line 1614 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_24);

#line 1568 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_direct_arg_construct_8_p_0(
#line 1568 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Var_9,
#line 1568 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Arg_10,
#line 1568 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__Ptag_11,
#line 1568 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Mode_12,
#line 1568 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Type_13,
#line 1568 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_14,
#line 1568 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_23,
#line 1568 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_24);

#line 1556 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__field_offset_pair_3_p_0(
#line 1556 "unify_gen.m"
  MR_Word ll_backend__unify_gen__LvalA_4,
#line 1556 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__LvalA_2,
#line 1556 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__LvalB_5);

#line 1466 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_sub_assign_5_p_0(
#line 1466 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Left_6,
#line 1466 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Right_7,
#line 1466 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_8,
#line 1466 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_38,
#line 1466 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_39);

#line 1426 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_sub_unify_7_p_0(
#line 1426 "unify_gen.m"
  MR_Word ll_backend__unify_gen__L_8,
#line 1426 "unify_gen.m"
  MR_Word ll_backend__unify_gen__R_9,
#line 1426 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Mode_10,
#line 1426 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Type_11,
#line 1426 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_12,
#line 1426 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_21,
#line 1426 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_22);

#line 1412 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__generate_unify_args_2_7_p_0(
#line 1412 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__1_1,
#line 1412 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_2,
#line 1412 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__3_3,
#line 1412 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__4_4,
#line 1412 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__HeadVar__5_5,
#line 1412 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_6,
#line 1412 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_7);

#line 1401 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_unify_args_7_p_0(
#line 1401 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Ls_8,
#line 1401 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Rs_9,
#line 1401 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Ms_10,
#line 1401 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Ts_11,
#line 1401 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_12,
#line 1401 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_15,
#line 1401 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_16);

#line 1379 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_semi_deconstruction_8_p_0(
#line 1379 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Var_9,
#line 1379 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Tag_10,
#line 1379 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Args_11,
#line 1379 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Modes_12,
#line 1379 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ArgWidths_13,
#line 1379 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_14,
#line 1379 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_24,
#line 1379 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_25);

#line 1254 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_det_deconstruction_8_p_0(
#line 1254 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Var_9,
#line 1254 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Cons_10,
#line 1254 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Args_11,
#line 1254 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Modes_12,
#line 1254 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ArgWidths_13,
#line 1254 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_14,
#line 1254 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_18,
#line 1254 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_19);

#line 1215 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__make_fields_and_argvars_7_p_0(
#line 1215 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__1_1,
#line 1215 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_2,
#line 1215 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Rval_3,
#line 1215 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__PrevOffset0_4,
#line 1215 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__TagNum_5,
#line 1215 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__HeadVar__6_6,
#line 1215 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__HeadVar__7_7);

#line 1202 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__var_types_3_p_0(
#line 1202 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CI_4,
#line 1202 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Vars_5,
#line 1202 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Types_6);

#line 1186 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_field_take_address_assigns_6_p_0(
#line 1186 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__1_1,
#line 1186 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CellVar_2,
#line 1186 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__CellPtag_3,
#line 1186 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__HeadVar__4_4,
#line 1186 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_5,
#line 1186 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_6);

#line 1167 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_field_addr_5_p_0(
#line 1167 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CellArg_6,
#line 1167 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__ArgOffset_7,
#line 1167 "unify_gen.m"
  MR_Integer * ll_backend__unify_gen__NextOffset_8,
#line 1167 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_RevFieldAddrs_0_16,
#line 1167 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_RevFieldAddrs_17);

#line 1146 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__maybe_add_alloc_site_info_6_p_0(
#line 1146 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Context_7,
#line 1146 "unify_gen.m"
  MR_String ll_backend__unify_gen__VarTypeMsg_8,
#line 1146 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__Size_9,
#line 1146 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__MaybeAllocId_10,
#line 1146 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_15,
#line 1146 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_16);

#line 1164 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__construct_cell_10_p_0_1(
#line 1164 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg,
#line 1164 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
#line 1164 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
#line 1164 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_3,
#line 1164 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_4,
#line 1164 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_5);

#line 1102 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__construct_cell_10_p_0(
#line 1102 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Var_11,
#line 1102 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__Ptag_12,
#line 1102 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CellArgs_13,
#line 1102 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HowToConstruct_14,
#line 1102 "unify_gen.m"
  MR_Word ll_backend__unify_gen__MaybeSize_15,
#line 1102 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Context_16,
#line 1102 "unify_gen.m"
  MR_Word ll_backend__unify_gen__MayUseAtomic_17,
#line 1102 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_18,
#line 1102 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_32,
#line 1102 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_33);

#line 1093 "unify_gen.m"
static MR_Word MR_CALL 
ll_backend__unify_gen__condense_needs_updates_1_f_0(
#line 1093 "unify_gen.m"
  MR_Word ll_backend__unify_gen__NeedsUpdatess_3);

#line 1088 "unify_gen.m"
static MR_Box MR_CALL 
ll_backend__unify_gen__pack_how_to_construct_3_p_0_1(
#line 1088 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg,
#line 1088 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_1);

#line 1072 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__pack_how_to_construct_3_p_0(
#line 1072 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ArgWidths_4,
#line 1072 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_HowToConstruct_0_14,
#line 1072 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_HowToConstruct_15);

#line 1069 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__pack_cell_rvals_6_p_0_1(
#line 1069 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg,
#line 1069 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
#line 1069 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
#line 1069 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_3,
#line 1069 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_4,
#line 1069 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_5,
#line 1069 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_6,
#line 1069 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_7,
#line 1069 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_8);

#line 1064 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__pack_cell_rvals_6_p_0(
#line 1064 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ArgWidths_7,
#line 1064 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CellArgs0_8,
#line 1064 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__CellArgs_9,
#line 1064 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_10,
#line 1064 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_12,
#line 1064 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_13);

#line 1051 "unify_gen.m"
static MR_Word MR_CALL 
ll_backend__unify_gen__initial_may_use_atomic_1_f_0(
#line 1051 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ModuleInfo_3);

#line 1001 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__generate_cons_args_2_10_p_0(
#line 1001 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__1_1,
#line 1001 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_2,
#line 1001 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__3_3,
#line 1001 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__4_4,
#line 1001 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__HeadVar__5_5,
#line 1001 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__6_6,
#line 1001 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__7_7,
#line 1001 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__HeadVar__8_8,
#line 1001 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_0_9,
#line 1001 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_10);

#line 978 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_cons_args_8_p_0(
#line 978 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Vars_9,
#line 978 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Types_10,
#line 978 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Modes_11,
#line 978 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Widths_12,
#line 978 "unify_gen.m"
  MR_Word ll_backend__unify_gen__TakeAddr_13,
#line 978 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CI_14,
#line 978 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_Args_19,
#line 978 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_20);

#line 936 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_pred_args_8_p_0(
#line 936 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CI_1,
#line 936 "unify_gen.m"
  MR_Word ll_backend__unify_gen__VarTypes_2,
#line 936 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__3_3,
#line 936 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__4_4,
#line 936 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__HeadVar__5_5,
#line 936 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__HeadVar__6_6,
#line 936 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_0_7,
#line 936 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_8);

#line 905 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_extra_closure_args_6_p_0(
#line 905 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__1_1,
#line 905 "unify_gen.m"
  MR_Word ll_backend__unify_gen__LoopCounter_2,
#line 905 "unify_gen.m"
  MR_Word ll_backend__unify_gen__NewClosure_3,
#line 905 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__HeadVar__4_4,
#line 905 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_5,
#line 905 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_6);

#line 623 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_12_p_0_9(
#line 623 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg);

#line 649 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_12_p_0_8(
#line 649 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg);

#line 674 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_12_p_0_7(
#line 674 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg);

#line 682 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_12_p_0_6(
#line 682 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg);

#line 542 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_12_p_0_5(
#line 542 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg);

#line 658 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_12_p_0_4(
#line 658 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg);

#line 697 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_12_p_0_3(
#line 697 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg);

#line 695 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_12_p_0_2(
#line 695 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg);

#line 632 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_12_p_0_1(
#line 632 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg);

#line 524 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_construction_2_12_p_0(
#line 524 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConsTag_13,
#line 524 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Var_14,
#line 524 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Args_15,
#line 524 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Modes_16,
#line 524 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ArgWidths_17,
#line 524 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HowToConstruct0_18,
#line 524 "unify_gen.m"
  MR_Word ll_backend__unify_gen__TakeAddr_19,
#line 524 "unify_gen.m"
  MR_Word ll_backend__unify_gen__MaybeSize_20,
#line 524 "unify_gen.m"
  MR_Word ll_backend__unify_gen__GoalInfo_21,
#line 524 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_22,
#line 524 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_75,
#line 524 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_76);

#line 511 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_construction_12_p_0(
#line 511 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Var_13,
#line 511 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConsId_14,
#line 511 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Args_15,
#line 511 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Modes_16,
#line 511 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ArgWidths_17,
#line 511 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HowToConstruct_18,
#line 511 "unify_gen.m"
  MR_Word ll_backend__unify_gen__TakeAddr_19,
#line 511 "unify_gen.m"
  MR_Word ll_backend__unify_gen__MaybeSize_20,
#line 511 "unify_gen.m"
  MR_Word ll_backend__unify_gen__GoalInfo_21,
#line 511 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_22,
#line 511 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_26,
#line 511 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_27);

#line 492 "unify_gen.m"
static MR_Word MR_CALL 
ll_backend__unify_gen__generate_reserved_address_1_f_0(
#line 492 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__1_1);

#line 482 "unify_gen.m"
static MR_Box MR_CALL 
ll_backend__unify_gen__raw_tag_test_3_p_0_2(
#line 482 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg,
#line 482 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
#line 482 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_2);

#line 413 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__raw_tag_test_3_p_0_1(
#line 413 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg);

#line 399 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__raw_tag_test_3_p_0(
#line 399 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Rval_4,
#line 399 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConsTag_5,
#line 399 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__TestRval_6);

#line 322 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__disjoin_tag_tests_3_p_0(
#line 322 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CurTestRval_4,
#line 322 "unify_gen.m"
  MR_Word ll_backend__unify_gen__OtherTestRvals_5,
#line 322 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__TestRval_6);

#line 263 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_test_5_p_0(
#line 263 "unify_gen.m"
  MR_Word ll_backend__unify_gen__VarA_6,
#line 263 "unify_gen.m"
  MR_Word ll_backend__unify_gen__VarB_7,
#line 263 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_8,
#line 263 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_18,
#line 263 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_19);

#line 221 "unify_gen.m"
static MR_Box MR_CALL 
ll_backend__unify_gen__get_cons_arg_widths_4_p_0_1(
#line 221 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg,
#line 221 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_1);

#line 212 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__get_cons_arg_widths_4_p_0(
#line 212 "unify_gen.m"
  MR_Word ll_backend__unify_gen__TypeInfo_for_T_41,
#line 212 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ModuleInfo_5,
#line 212 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConsId_6,
#line 212 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Args_7,
#line 212 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__AllArgWidths_8);

#line 1675 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_const_structs_4_p_0_1(
#line 1675 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg,
#line 1675 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
#line 1675 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
#line 1675 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_3,
#line 1675 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_4,
#line 1675 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_5);

#line 184 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_unification_6_p_0_1(
#line 184 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg,
#line 184 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
#line 184 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
#line 184 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_3);


static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_1[14][2];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_2[11][3];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_3[3][6];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_4[1][10];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_5[7][5];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_6[6][1];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_7[1][7];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_8[2][11];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_9[2][8];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_10[1][9];




static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_1[14][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__unify_gen_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_term_size_value_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__unify_gen__ll_backend__unify_gen__type_ctor_info_field_addr_0))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__unify_gen_scalar_common_6[0])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__unify_gen_scalar_common_6[1])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__unify_gen_scalar_common_6[3])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__unify_gen_scalar_common_6[4])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__unify_gen_scalar_common_6[5]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_2[11][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__unify_gen_scalar_common_1[0])),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[0])),
    ((MR_Box) (ll_backend__unify_gen__generate_unification_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ll_backend__unify_gen_scalar_common_5[0])),
    ((MR_Box) (ll_backend__unify_gen__get_cons_arg_widths_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ll_backend__unify_gen_scalar_common_8[0])),
    ((MR_Box) (ll_backend__unify_gen__pack_cell_rvals_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ll_backend__unify_gen_scalar_common_5[5])),
    ((MR_Box) (ll_backend__unify_gen__pack_how_to_construct_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ll_backend__unify_gen_scalar_common_9[0])),
    ((MR_Box) (ll_backend__unify_gen__construct_cell_10_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ll_backend__unify_gen_scalar_common_9[1])),
    ((MR_Box) (ll_backend__unify_gen__generate_ground_term_args_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&ll_backend__unify_gen_scalar_common_8[1])),
    ((MR_Box) (ll_backend__unify_gen__pack_ground_term_args_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[1])),
    ((MR_Box) (ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_97_119_95_116_97_103_95_116_101_115_116_95_99_97_115_101_95_95_91_50_93_95_48_11_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_3[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_0)),
    ((MR_Box) (&ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0))
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_4[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_have_unboxed_floats_0)),
    ((MR_Box) (&ll_backend__unify_gen__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__const_struct__type_ctor_info_const_struct_0)),
    ((MR_Box) (&ll_backend__unify_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_typed_rval_0)),
    ((MR_Box) (&ll_backend__unify_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_typed_rval_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0))
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_5[7][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__unify_gen__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__unify_gen__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__unify_gen__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__unify_gen__list__pti_list_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__unify_gen__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0)),
    ((MR_Box) (&ll_backend__unify_gen__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__unify_gen__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_needs_update_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_6[6][1] = {
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
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[8])))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "build new closure from old closure"))
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_7[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_reserved_address_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0))
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_8[2][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_cell_arg_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__unify_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_cell_arg_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_cell_arg_0)),
    ((MR_Box) (&ll_backend__unify_gen__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0)),
    ((MR_Box) (&ll_backend__unify_gen__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0)),
    ((MR_Box) (&ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_0)),
    ((MR_Box) (&ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__unify_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_typed_rval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_9[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_cell_arg_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__unify_gen__list__pti_list_1__plain_ll_backend__unify_gen__type_ctor_info_field_addr_0)),
    ((MR_Box) (&ll_backend__unify_gen__list__pti_list_1__plain_ll_backend__unify_gen__type_ctor_info_field_addr_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ll_backend__unify_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0)),
    ((MR_Box) (&ll_backend__unify_gen__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_ll_backend__llds__type_ctor_info_typed_rval_0)),
    ((MR_Box) (&ll_backend__unify_gen__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_ll_backend__llds__type_ctor_info_typed_rval_0))
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_10[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_have_unboxed_floats_0)),
    ((MR_Box) (&ll_backend__unify_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_typed_rval_0)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "array.mh"
#include "array.mh"



#line 1925 "ll_backend.unify_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__unify_gen__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__const_struct__type_ctor_info_const_struct_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0
  }
};

#line 1934 "ll_backend.unify_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__unify_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_typed_rval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0
  }
};

#line 1943 "ll_backend.unify_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__unify_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1951 "ll_backend.unify_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__unify_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1959 "ll_backend.unify_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1967 "ll_backend.unify_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_term_size_value_0
  }
};

#line 1975 "ll_backend.unify_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_cell_arg_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_cell_arg_0
  }
};

#line 1983 "ll_backend.unify_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

#line 1991 "ll_backend.unify_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_needs_update_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0
  }
};

#line 1999 "ll_backend.unify_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__list__pti_list_1__plain_ll_backend__unify_gen__type_ctor_info_field_addr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__unify_gen__ll_backend__unify_gen__type_ctor_info_field_addr_0
  }
};

#line 2007 "ll_backend.unify_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2015 "ll_backend.unify_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__unify_gen__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_ll_backend__llds__type_ctor_info_typed_rval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__unify_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0
  }
};

#line 2024 "ll_backend.unify_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_typed_rval_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0
  }
};

#line 2032 "ll_backend.unify_gen.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__unify_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ll_backend__llds__type_ctor_info_typed_rval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__unify_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0
  }
};

#line 2041 "ll_backend.unify_gen.c"
const MR_TypeCtorInfo_Struct ll_backend__unify_gen__ll_backend__unify_gen__type_ctor_info_active_ground_term_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__unify_gen____Unify____active_ground_term_map_0_0_10001)),
  ((MR_Box) (ll_backend__unify_gen____Compare____active_ground_term_map_0_0_10001)),
  (MR_String) "ll_backend.unify_gen",
  (MR_String) "active_ground_term_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &ll_backend__unify_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ll_backend__llds__type_ctor_info_typed_rval_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2062 "ll_backend.unify_gen.c"
static const MR_PseudoTypeInfo ll_backend__unify_gen__ll_backend__unify_gen__field_types_field_addr_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__unify_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2068 "ll_backend.unify_gen.c"
static const MR_ConstString ll_backend__unify_gen__ll_backend__unify_gen__field_names_field_addr_0_0[2] = {
  (MR_String) "fa_offset",
  (MR_String) "fa_var"
};

#line 2074 "ll_backend.unify_gen.c"
static const MR_DuFunctorDesc ll_backend__unify_gen__ll_backend__unify_gen__du_functor_desc_field_addr_0_0 = {
  (MR_String) "field_addr",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__unify_gen__ll_backend__unify_gen__field_types_field_addr_0_0,
  ll_backend__unify_gen__ll_backend__unify_gen__field_names_field_addr_0_0,
  NULL,
  NULL
};

#line 2089 "ll_backend.unify_gen.c"
static const MR_DuFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__du_stag_ordered_field_addr_0_0[1] = {
  &ll_backend__unify_gen__ll_backend__unify_gen__du_functor_desc_field_addr_0_0
};

#line 2094 "ll_backend.unify_gen.c"
static const MR_DuPtagLayout ll_backend__unify_gen__ll_backend__unify_gen__du_ptag_ordered_field_addr_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__unify_gen__ll_backend__unify_gen__du_stag_ordered_field_addr_0_0
  }
};

#line 2103 "ll_backend.unify_gen.c"
static const MR_DuFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__du_name_ordered_field_addr_0[1] = {
  &ll_backend__unify_gen__ll_backend__unify_gen__du_functor_desc_field_addr_0_0
};

#line 2108 "ll_backend.unify_gen.c"
static const MR_Integer ll_backend__unify_gen__ll_backend__unify_gen__functor_number_map_field_addr_0[1] = {
  (MR_Integer) 0
};

#line 2113 "ll_backend.unify_gen.c"
const MR_TypeCtorInfo_Struct ll_backend__unify_gen__ll_backend__unify_gen__type_ctor_info_field_addr_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__unify_gen____Unify____field_addr_0_0_10001)),
  ((MR_Box) (ll_backend__unify_gen____Compare____field_addr_0_0_10001)),
  (MR_String) "ll_backend.unify_gen",
  (MR_String) "field_addr",
  {
    ll_backend__unify_gen__ll_backend__unify_gen__du_name_ordered_field_addr_0
  },
  {
    ll_backend__unify_gen__ll_backend__unify_gen__du_ptag_ordered_field_addr_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__unify_gen__ll_backend__unify_gen__functor_number_map_field_addr_0
};

#line 2134 "ll_backend.unify_gen.c"
static const MR_EnumFunctorDesc ll_backend__unify_gen__ll_backend__unify_gen__enum_functor_desc_test_sense_0_0 = {
  (MR_String) "branch_on_success",
  (MR_Integer) 0
};

#line 2140 "ll_backend.unify_gen.c"
static const MR_EnumFunctorDesc ll_backend__unify_gen__ll_backend__unify_gen__enum_functor_desc_test_sense_0_1 = {
  (MR_String) "branch_on_failure",
  (MR_Integer) 1
};

#line 2146 "ll_backend.unify_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__enum_value_ordered_test_sense_0[2] = {
  &ll_backend__unify_gen__ll_backend__unify_gen__enum_functor_desc_test_sense_0_0,
  &ll_backend__unify_gen__ll_backend__unify_gen__enum_functor_desc_test_sense_0_1
};

#line 2152 "ll_backend.unify_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__enum_name_ordered_test_sense_0[2] = {
  &ll_backend__unify_gen__ll_backend__unify_gen__enum_functor_desc_test_sense_0_1,
  &ll_backend__unify_gen__ll_backend__unify_gen__enum_functor_desc_test_sense_0_0
};

#line 2158 "ll_backend.unify_gen.c"
static const MR_Integer ll_backend__unify_gen__ll_backend__unify_gen__functor_number_map_test_sense_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2164 "ll_backend.unify_gen.c"
const MR_TypeCtorInfo_Struct ll_backend__unify_gen__ll_backend__unify_gen__type_ctor_info_test_sense_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__unify_gen____Unify____test_sense_0_0_10001)),
  ((MR_Box) (ll_backend__unify_gen____Compare____test_sense_0_0_10001)),
  (MR_String) "ll_backend.unify_gen",
  (MR_String) "test_sense",
  {
    ll_backend__unify_gen__ll_backend__unify_gen__enum_name_ordered_test_sense_0
  },
  {
    ll_backend__unify_gen__ll_backend__unify_gen__enum_value_ordered_test_sense_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__unify_gen__ll_backend__unify_gen__functor_number_map_test_sense_0
};

#line 2185 "ll_backend.unify_gen.c"
static const MR_PseudoTypeInfo ll_backend__unify_gen__ll_backend__unify_gen__field_types_uni_val_0_0[1] = {
  (MR_PseudoTypeInfo) &ll_backend__unify_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2190 "ll_backend.unify_gen.c"
static const MR_DuFunctorDesc ll_backend__unify_gen__ll_backend__unify_gen__du_functor_desc_uni_val_0_0 = {
  (MR_String) "ref",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__unify_gen__ll_backend__unify_gen__field_types_uni_val_0_0,
  NULL,
  NULL,
  NULL
};

#line 2205 "ll_backend.unify_gen.c"
static const MR_PseudoTypeInfo ll_backend__unify_gen__ll_backend__unify_gen__field_types_uni_val_0_1[2] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0
};

#line 2211 "ll_backend.unify_gen.c"
static const MR_DuFunctorDesc ll_backend__unify_gen__ll_backend__unify_gen__du_functor_desc_uni_val_0_1 = {
  (MR_String) "lval",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  ll_backend__unify_gen__ll_backend__unify_gen__field_types_uni_val_0_1,
  NULL,
  NULL,
  NULL
};

#line 2226 "ll_backend.unify_gen.c"
static const MR_DuFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__du_stag_ordered_uni_val_0_0[1] = {
  &ll_backend__unify_gen__ll_backend__unify_gen__du_functor_desc_uni_val_0_0
};

#line 2231 "ll_backend.unify_gen.c"
static const MR_DuFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__du_stag_ordered_uni_val_0_1[1] = {
  &ll_backend__unify_gen__ll_backend__unify_gen__du_functor_desc_uni_val_0_1
};

#line 2236 "ll_backend.unify_gen.c"
static const MR_DuPtagLayout ll_backend__unify_gen__ll_backend__unify_gen__du_ptag_ordered_uni_val_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__unify_gen__ll_backend__unify_gen__du_stag_ordered_uni_val_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__unify_gen__ll_backend__unify_gen__du_stag_ordered_uni_val_0_1
  }
};

#line 2250 "ll_backend.unify_gen.c"
static const MR_DuFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__du_name_ordered_uni_val_0[2] = {
  &ll_backend__unify_gen__ll_backend__unify_gen__du_functor_desc_uni_val_0_1,
  &ll_backend__unify_gen__ll_backend__unify_gen__du_functor_desc_uni_val_0_0
};

#line 2256 "ll_backend.unify_gen.c"
static const MR_Integer ll_backend__unify_gen__ll_backend__unify_gen__functor_number_map_uni_val_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2262 "ll_backend.unify_gen.c"
const MR_TypeCtorInfo_Struct ll_backend__unify_gen__ll_backend__unify_gen__type_ctor_info_uni_val_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__unify_gen____Unify____uni_val_0_0_10001)),
  ((MR_Box) (ll_backend__unify_gen____Compare____uni_val_0_0_10001)),
  (MR_String) "ll_backend.unify_gen",
  (MR_String) "uni_val",
  {
    ll_backend__unify_gen__ll_backend__unify_gen__du_name_ordered_uni_val_0
  },
  {
    ll_backend__unify_gen__ll_backend__unify_gen__du_ptag_ordered_uni_val_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__unify_gen__ll_backend__unify_gen__functor_number_map_uni_val_0
};

#line 2283 "ll_backend.unify_gen.c"
static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____active_ground_term_map_0_0_10001(
#line 2286 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
#line 2288 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_2)
#line 2290 "ll_backend.unify_gen.c"
{
#line 2292 "ll_backend.unify_gen.c"
  {
#line 2294 "ll_backend.unify_gen.c"
    MR_bool ll_backend__unify_gen__succeeded;

#line 2297 "ll_backend.unify_gen.c"
    {
#line 2299 "ll_backend.unify_gen.c"
      ll_backend__unify_gen__succeeded = ll_backend__unify_gen____Unify____active_ground_term_map_0_0(((MR_Word) ll_backend__unify_gen__wrapper_arg_1), ((MR_Word) ll_backend__unify_gen__wrapper_arg_2));
    }
#line 2302 "ll_backend.unify_gen.c"
    return ll_backend__unify_gen__succeeded;
#line 2304 "ll_backend.unify_gen.c"
  }
#line 2306 "ll_backend.unify_gen.c"
}

#line 2309 "ll_backend.unify_gen.c"
static void MR_CALL 
ll_backend__unify_gen____Compare____active_ground_term_map_0_0_10001(
#line 2312 "ll_backend.unify_gen.c"
  MR_Box * ll_backend__unify_gen__wrapper_arg_1,
#line 2314 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
#line 2316 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_3)
#line 2318 "ll_backend.unify_gen.c"
{
#line 2320 "ll_backend.unify_gen.c"
  {
#line 2322 "ll_backend.unify_gen.c"
    MR_Word ll_backend__unify_gen__conv0_HeadVar__1_1;

#line 2325 "ll_backend.unify_gen.c"
    {
#line 2327 "ll_backend.unify_gen.c"
      ll_backend__unify_gen____Compare____active_ground_term_map_0_0(&ll_backend__unify_gen__conv0_HeadVar__1_1, ((MR_Word) ll_backend__unify_gen__wrapper_arg_2), ((MR_Word) ll_backend__unify_gen__wrapper_arg_3));
    }
#line 2330 "ll_backend.unify_gen.c"
    *ll_backend__unify_gen__wrapper_arg_1 = ((MR_Box) (ll_backend__unify_gen__conv0_HeadVar__1_1));
#line 2332 "ll_backend.unify_gen.c"
  }
#line 2334 "ll_backend.unify_gen.c"
}

#line 2337 "ll_backend.unify_gen.c"
static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____field_addr_0_0_10001(
#line 2340 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
#line 2342 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_2)
#line 2344 "ll_backend.unify_gen.c"
{
#line 2346 "ll_backend.unify_gen.c"
  {
#line 2348 "ll_backend.unify_gen.c"
    MR_bool ll_backend__unify_gen__succeeded;

#line 2351 "ll_backend.unify_gen.c"
    {
#line 2353 "ll_backend.unify_gen.c"
      ll_backend__unify_gen__succeeded = ll_backend__unify_gen____Unify____field_addr_0_0(((MR_Word) ll_backend__unify_gen__wrapper_arg_1), ((MR_Word) ll_backend__unify_gen__wrapper_arg_2));
    }
#line 2356 "ll_backend.unify_gen.c"
    return ll_backend__unify_gen__succeeded;
#line 2358 "ll_backend.unify_gen.c"
  }
#line 2360 "ll_backend.unify_gen.c"
}

#line 2363 "ll_backend.unify_gen.c"
static void MR_CALL 
ll_backend__unify_gen____Compare____field_addr_0_0_10001(
#line 2366 "ll_backend.unify_gen.c"
  MR_Box * ll_backend__unify_gen__wrapper_arg_1,
#line 2368 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
#line 2370 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_3)
#line 2372 "ll_backend.unify_gen.c"
{
#line 2374 "ll_backend.unify_gen.c"
  {
#line 2376 "ll_backend.unify_gen.c"
    MR_Word ll_backend__unify_gen__conv0_HeadVar__1_1;

#line 2379 "ll_backend.unify_gen.c"
    {
#line 2381 "ll_backend.unify_gen.c"
      ll_backend__unify_gen____Compare____field_addr_0_0(&ll_backend__unify_gen__conv0_HeadVar__1_1, ((MR_Word) ll_backend__unify_gen__wrapper_arg_2), ((MR_Word) ll_backend__unify_gen__wrapper_arg_3));
    }
#line 2384 "ll_backend.unify_gen.c"
    *ll_backend__unify_gen__wrapper_arg_1 = ((MR_Box) (ll_backend__unify_gen__conv0_HeadVar__1_1));
#line 2386 "ll_backend.unify_gen.c"
  }
#line 2388 "ll_backend.unify_gen.c"
}

#line 2391 "ll_backend.unify_gen.c"
static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____test_sense_0_0_10001(
#line 2394 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
#line 2396 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_2)
#line 2398 "ll_backend.unify_gen.c"
{
#line 2400 "ll_backend.unify_gen.c"
  {
#line 2402 "ll_backend.unify_gen.c"
    MR_bool ll_backend__unify_gen__succeeded;

#line 2405 "ll_backend.unify_gen.c"
    {
#line 2407 "ll_backend.unify_gen.c"
      ll_backend__unify_gen__succeeded = ll_backend__unify_gen____Unify____test_sense_0_0(((MR_Word) ll_backend__unify_gen__wrapper_arg_1), ((MR_Word) ll_backend__unify_gen__wrapper_arg_2));
    }
#line 2410 "ll_backend.unify_gen.c"
    return ll_backend__unify_gen__succeeded;
#line 2412 "ll_backend.unify_gen.c"
  }
#line 2414 "ll_backend.unify_gen.c"
}

#line 2417 "ll_backend.unify_gen.c"
static void MR_CALL 
ll_backend__unify_gen____Compare____test_sense_0_0_10001(
#line 2420 "ll_backend.unify_gen.c"
  MR_Box * ll_backend__unify_gen__wrapper_arg_1,
#line 2422 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
#line 2424 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_3)
#line 2426 "ll_backend.unify_gen.c"
{
#line 2428 "ll_backend.unify_gen.c"
  {
#line 2430 "ll_backend.unify_gen.c"
    MR_Word ll_backend__unify_gen__conv0_HeadVar__1_1;

#line 2433 "ll_backend.unify_gen.c"
    {
#line 2435 "ll_backend.unify_gen.c"
      ll_backend__unify_gen____Compare____test_sense_0_0(&ll_backend__unify_gen__conv0_HeadVar__1_1, ((MR_Word) ll_backend__unify_gen__wrapper_arg_2), ((MR_Word) ll_backend__unify_gen__wrapper_arg_3));
    }
#line 2438 "ll_backend.unify_gen.c"
    *ll_backend__unify_gen__wrapper_arg_1 = ((MR_Box) (ll_backend__unify_gen__conv0_HeadVar__1_1));
#line 2440 "ll_backend.unify_gen.c"
  }
#line 2442 "ll_backend.unify_gen.c"
}

#line 2445 "ll_backend.unify_gen.c"
static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____uni_val_0_0_10001(
#line 2448 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
#line 2450 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_2)
#line 2452 "ll_backend.unify_gen.c"
{
#line 2454 "ll_backend.unify_gen.c"
  {
#line 2456 "ll_backend.unify_gen.c"
    MR_bool ll_backend__unify_gen__succeeded;

#line 2459 "ll_backend.unify_gen.c"
    {
#line 2461 "ll_backend.unify_gen.c"
      ll_backend__unify_gen__succeeded = ll_backend__unify_gen____Unify____uni_val_0_0(((MR_Word) ll_backend__unify_gen__wrapper_arg_1), ((MR_Word) ll_backend__unify_gen__wrapper_arg_2));
    }
#line 2464 "ll_backend.unify_gen.c"
    return ll_backend__unify_gen__succeeded;
#line 2466 "ll_backend.unify_gen.c"
  }
#line 2468 "ll_backend.unify_gen.c"
}

#line 2471 "ll_backend.unify_gen.c"
static void MR_CALL 
ll_backend__unify_gen____Compare____uni_val_0_0_10001(
#line 2474 "ll_backend.unify_gen.c"
  MR_Box * ll_backend__unify_gen__wrapper_arg_1,
#line 2476 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
#line 2478 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_3)
#line 2480 "ll_backend.unify_gen.c"
{
#line 2482 "ll_backend.unify_gen.c"
  {
#line 2484 "ll_backend.unify_gen.c"
    MR_Word ll_backend__unify_gen__conv0_HeadVar__1_1;

#line 2487 "ll_backend.unify_gen.c"
    {
#line 2489 "ll_backend.unify_gen.c"
      ll_backend__unify_gen____Compare____uni_val_0_0(&ll_backend__unify_gen__conv0_HeadVar__1_1, ((MR_Word) ll_backend__unify_gen__wrapper_arg_2), ((MR_Word) ll_backend__unify_gen__wrapper_arg_3));
    }
#line 2492 "ll_backend.unify_gen.c"
    *ll_backend__unify_gen__wrapper_arg_1 = ((MR_Box) (ll_backend__unify_gen__conv0_HeadVar__1_1));
#line 2494 "ll_backend.unify_gen.c"
  }
#line 2496 "ll_backend.unify_gen.c"
}

#line 1825 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_95_115_116_114_117_99_116_95_97_114_103_95_116_97_103_95_95_91_49_44_32_51_93_95_48_6_p_0_1(
#line 1825 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg)
#line 1825 "unify_gen.m"
{
#line 1825 "unify_gen.m"
  {
#line 1825 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 1825 "unify_gen.m"
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;

#line 1825 "unify_gen.m"
    {
#line 1825 "unify_gen.m"
      return ll_backend__unify_gen__succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_const_struct_arg_tag__1825__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 4))));
    }
#line 1825 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 1825 "unify_gen.m"
  }
#line 1825 "unify_gen.m"
}

#line 1809 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_95_115_116_114_117_99_116_95_97_114_103_95_116_97_103_95_95_91_49_44_32_51_93_95_48_6_p_0(
#line 1809 "unify_gen.m"
  MR_Word ll_backend__unify_gen__UnboxedFloats_8,
#line 1809 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConsTag_10,
#line 1809 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ArgWidth_11,
#line 1809 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__TypedRval_12)
#line 1809 "unify_gen.m"
{
#line 1845 "unify_gen.m"
  while (MR_TRUE)
#line 1845 "unify_gen.m"
    {
#line 1845 "unify_gen.m"
      /* tailcall optimized into a loop */
#line 1845 "unify_gen.m"
      {
#line 1845 "unify_gen.m"
        MR_bool ll_backend__unify_gen__succeeded;

#line 1845 "unify_gen.m"
        if (((MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_10)) == (MR_mktag((MR_Integer) 2))))
#line 1845 "unify_gen.m"
          {
#line 1845 "unify_gen.m"
            MR_Word ll_backend__unify_gen__Const_14;
#line 1845 "unify_gen.m"
            MR_Word ll_backend__unify_gen__Type_15;
#line 1845 "unify_gen.m"
            MR_Float ll_backend__unify_gen__Float_19 = MR_unbox_float((MR_hl_field(MR_mktag(2), ll_backend__unify_gen__ConsTag_10, (MR_Integer) 0)));
#line 1845 "unify_gen.m"
            MR_Word ll_backend__unify_gen__V_73_73;

#line 1831 "unify_gen.m"
            {
#line 1831 "unify_gen.m"
              ll_backend__unify_gen__Const_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1831 "unify_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Const_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1831 "unify_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Const_14, 1) = MR_box_float(ll_backend__unify_gen__Float_19);
#line 1831 "unify_gen.m"
            }
#line 1835 "unify_gen.m"
            if ((ll_backend__unify_gen__UnboxedFloats_8 == (MR_Integer) 1))
#line 1841 "unify_gen.m"
              {
#line 1839 "unify_gen.m"
                ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__ArgWidth_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1841 "unify_gen.m"
                if (ll_backend__unify_gen__succeeded)
#line 1840 "unify_gen.m"
                  ll_backend__unify_gen__Type_15 = (MR_Integer) 9;
#line 1841 "unify_gen.m"
                else
#line 1842 "unify_gen.m"
                  ll_backend__unify_gen__Type_15 = (MR_Integer) 11;
#line 1841 "unify_gen.m"
              }
#line 1835 "unify_gen.m"
            else
#line 1834 "unify_gen.m"
              ll_backend__unify_gen__Type_15 = (MR_Integer) 9;
#line 1846 "unify_gen.m"
            {
#line 1846 "unify_gen.m"
              ll_backend__unify_gen__V_73_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1846 "unify_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_73_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1846 "unify_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_73_73, 1) = ((MR_Box) (ll_backend__unify_gen__Const_14));
#line 1846 "unify_gen.m"
            }
#line 1846 "unify_gen.m"
            {
#line 1846 "unify_gen.m"
              MR_Word base;
#line 1846 "unify_gen.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1846 "unify_gen.m"
              *ll_backend__unify_gen__TypedRval_12 = base;
#line 1846 "unify_gen.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__unify_gen__V_73_73));
#line 1846 "unify_gen.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__unify_gen__Type_15));
#line 1846 "unify_gen.m"
            }
#line 1845 "unify_gen.m"
          }
#line 1845 "unify_gen.m"
        else
#line 1845 "unify_gen.m"
          if (((MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_10)) == (MR_mktag((MR_Integer) 1))))
#line 1845 "unify_gen.m"
            {
#line 1845 "unify_gen.m"
              MR_String ll_backend__unify_gen__String_13 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ConsTag_10, (MR_Integer) 0)));
#line 1845 "unify_gen.m"
              MR_Word ll_backend__unify_gen__Const_89;
#line 1845 "unify_gen.m"
              MR_Word ll_backend__unify_gen__V_91_91;

#line 1817 "unify_gen.m"
              {
#line 1817 "unify_gen.m"
                ll_backend__unify_gen__Const_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1817 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Const_89, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1817 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Const_89, 1) = ((MR_Box) (ll_backend__unify_gen__String_13));
#line 1817 "unify_gen.m"
              }
#line 1846 "unify_gen.m"
              {
#line 1846 "unify_gen.m"
                ll_backend__unify_gen__V_91_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1846 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_91_91, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1846 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_91_91, 1) = ((MR_Box) (ll_backend__unify_gen__Const_89));
#line 1846 "unify_gen.m"
              }
#line 1846 "unify_gen.m"
              {
#line 1846 "unify_gen.m"
                MR_Word base;
#line 1846 "unify_gen.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1846 "unify_gen.m"
                *ll_backend__unify_gen__TypedRval_12 = base;
#line 1846 "unify_gen.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__unify_gen__V_91_91));
#line 1846 "unify_gen.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 10));
#line 1846 "unify_gen.m"
              }
#line 1845 "unify_gen.m"
            }
#line 1845 "unify_gen.m"
          else
#line 1845 "unify_gen.m"
            if (((((MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_10, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1869 "unify_gen.m"
              {
#line 1869 "unify_gen.m"
                MR_Word ll_backend__unify_gen__ClassId_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_10, (MR_Integer) 2)));
#line 1869 "unify_gen.m"
                MR_String ll_backend__unify_gen__Instance_32 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_10, (MR_Integer) 3)));
#line 1869 "unify_gen.m"
                MR_Word ll_backend__unify_gen__TCName_33;
#line 1869 "unify_gen.m"
                MR_Word ll_backend__unify_gen__V_54_54;
#line 1869 "unify_gen.m"
                MR_Word ll_backend__unify_gen__V_55_55;
#line 1869 "unify_gen.m"
                MR_Word ll_backend__unify_gen__V_56_56;
#line 1869 "unify_gen.m"
                MR_Word ll_backend__unify_gen__Rval_79;
#line 1869 "unify_gen.m"
                MR_Word ll_backend__unify_gen__ModuleName_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_10, (MR_Integer) 1)));
#line 1869 "unify_gen.m"
                MR_Word ll_backend__unify_gen__DataId_81;

#line 1870 "unify_gen.m"
                {
#line 1870 "unify_gen.m"
                  ll_backend__unify_gen__TCName_33 = backend_libs__type_class_info__generate_class_name_1_f_0(ll_backend__unify_gen__ClassId_31);
                }
#line 1871 "unify_gen.m"
                {
#line 1871 "unify_gen.m"
                  ll_backend__unify_gen__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1871 "unify_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_55_55, 0) = ((MR_Box) (ll_backend__unify_gen__ModuleName_80));
#line 1871 "unify_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_55_55, 1) = ((MR_Box) (ll_backend__unify_gen__Instance_32));
#line 1871 "unify_gen.m"
                }
#line 1871 "unify_gen.m"
                {
#line 1871 "unify_gen.m"
                  ll_backend__unify_gen__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1871 "unify_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_54_54, 0) = ((MR_Box) (ll_backend__unify_gen__TCName_33));
#line 1871 "unify_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_54_54, 1) = ((MR_Box) (ll_backend__unify_gen__V_55_55));
#line 1871 "unify_gen.m"
                }
#line 1871 "unify_gen.m"
                {
#line 1871 "unify_gen.m"
                  ll_backend__unify_gen__DataId_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1871 "unify_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__unify_gen__DataId_81, 0) = ((MR_Box) (ll_backend__unify_gen__V_54_54));
#line 1871 "unify_gen.m"
                }
#line 1873 "unify_gen.m"
                {
#line 1873 "unify_gen.m"
                  ll_backend__unify_gen__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1873 "unify_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1873 "unify_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_56_56, 1) = ((MR_Box) (ll_backend__unify_gen__DataId_81));
#line 1873 "unify_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_56_56, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1873 "unify_gen.m"
                }
#line 1873 "unify_gen.m"
                {
#line 1873 "unify_gen.m"
                  ll_backend__unify_gen__Rval_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1873 "unify_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Rval_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1873 "unify_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Rval_79, 1) = ((MR_Box) (ll_backend__unify_gen__V_56_56));
#line 1873 "unify_gen.m"
                }
#line 1875 "unify_gen.m"
                {
#line 1875 "unify_gen.m"
                  MR_Word base;
#line 1875 "unify_gen.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1875 "unify_gen.m"
                  *ll_backend__unify_gen__TypedRval_12 = base;
#line 1875 "unify_gen.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__unify_gen__Rval_79));
#line 1875 "unify_gen.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 11));
#line 1875 "unify_gen.m"
                }
#line 1869 "unify_gen.m"
              }
#line 1845 "unify_gen.m"
            else
#line 1845 "unify_gen.m"
              if (((((MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_10, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1845 "unify_gen.m"
                {
#line 1845 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__Lang_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_10, (MR_Integer) 1)));
#line 1845 "unify_gen.m"
                  MR_String ll_backend__unify_gen__Val_18 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_10, (MR_Integer) 2)));
#line 1845 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_67_67;
#line 1845 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__Const_83;
#line 1845 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_85_85;

#line 1825 "unify_gen.m"
                  {
#line 1825 "unify_gen.m"
                    ll_backend__unify_gen__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1825 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_67_67, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_5[1]));
#line 1825 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_67_67, 1) = ((MR_Box) (ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_95_115_116_114_117_99_116_95_97_114_103_95_116_97_103_95_95_91_49_44_32_51_93_95_48_6_p_0_1));
#line 1825 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_67_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1825 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_67_67, 3) = ((MR_Box) (ll_backend__unify_gen__Lang_17));
#line 1825 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_67_67, 4) = ((MR_Box) ((MR_Integer) 0));
#line 1825 "unify_gen.m"
                  }
#line 1825 "unify_gen.m"
                  {
#line 1825 "unify_gen.m"
                    mercury__require__expect_4_p_0(ll_backend__unify_gen__V_67_67, (MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_const_struct_arg_tag\'/6", (MR_String) "foreign_tag for language other than C");
                  }
#line 1827 "unify_gen.m"
                  {
#line 1827 "unify_gen.m"
                    ll_backend__unify_gen__Const_83 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1827 "unify_gen.m"
                    MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Const_83, 0) = ((MR_Box) (ll_backend__unify_gen__Val_18));
#line 1827 "unify_gen.m"
                    MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Const_83, 1) = ((MR_Box) ((MR_Integer) 7));
#line 1827 "unify_gen.m"
                  }
#line 1846 "unify_gen.m"
                  {
#line 1846 "unify_gen.m"
                    ll_backend__unify_gen__V_85_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1846 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_85_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1846 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_85_85, 1) = ((MR_Box) (ll_backend__unify_gen__Const_83));
#line 1846 "unify_gen.m"
                  }
#line 1846 "unify_gen.m"
                  {
#line 1846 "unify_gen.m"
                    MR_Word base;
#line 1846 "unify_gen.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1846 "unify_gen.m"
                    *ll_backend__unify_gen__TypedRval_12 = base;
#line 1846 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__unify_gen__V_85_85));
#line 1846 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 7));
#line 1846 "unify_gen.m"
                  }
#line 1845 "unify_gen.m"
                }
#line 1845 "unify_gen.m"
              else
#line 1845 "unify_gen.m"
                if (((((MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_10, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1845 "unify_gen.m"
                  {
#line 1845 "unify_gen.m"
                    MR_Integer ll_backend__unify_gen__Int_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_10, (MR_Integer) 1)));
#line 1845 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__Const_86;
#line 1845 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__V_88_88;

#line 1821 "unify_gen.m"
                    {
#line 1821 "unify_gen.m"
                      ll_backend__unify_gen__Const_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1821 "unify_gen.m"
                      MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Const_86, 0) = ((MR_Box) (ll_backend__unify_gen__Int_16));
#line 1821 "unify_gen.m"
                    }
#line 1846 "unify_gen.m"
                    {
#line 1846 "unify_gen.m"
                      ll_backend__unify_gen__V_88_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1846 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_88_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1846 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_88_88, 1) = ((MR_Box) (ll_backend__unify_gen__Const_86));
#line 1846 "unify_gen.m"
                    }
#line 1846 "unify_gen.m"
                    {
#line 1846 "unify_gen.m"
                      MR_Word base;
#line 1846 "unify_gen.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1846 "unify_gen.m"
                      *ll_backend__unify_gen__TypedRval_12 = base;
#line 1846 "unify_gen.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__unify_gen__V_88_88));
#line 1846 "unify_gen.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 7));
#line 1846 "unify_gen.m"
                    }
#line 1845 "unify_gen.m"
                  }
#line 1845 "unify_gen.m"
                else
#line 1845 "unify_gen.m"
                  if (((((MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_10, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 1852 "unify_gen.m"
                    {
#line 1852 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__RA_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_10, (MR_Integer) 1)));
#line 1852 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__Type_74;
#line 1852 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__Rval_75;

#line 1853 "unify_gen.m"
                      {
#line 1853 "unify_gen.m"
                        ll_backend__unify_gen__Rval_75 = ll_backend__unify_gen__generate_reserved_address_1_f_0(ll_backend__unify_gen__RA_23);
                      }
#line 1854 "unify_gen.m"
                      {
#line 1854 "unify_gen.m"
                        ll_backend__llds__rval_type_2_p_0(ll_backend__unify_gen__Rval_75, &ll_backend__unify_gen__Type_74);
                      }
#line 1855 "unify_gen.m"
                      {
#line 1855 "unify_gen.m"
                        MR_Word base;
#line 1855 "unify_gen.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1855 "unify_gen.m"
                        *ll_backend__unify_gen__TypedRval_12 = base;
#line 1855 "unify_gen.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__unify_gen__Rval_75));
#line 1855 "unify_gen.m"
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__unify_gen__Type_74));
#line 1855 "unify_gen.m"
                      }
#line 1852 "unify_gen.m"
                    }
#line 1845 "unify_gen.m"
                  else
#line 1845 "unify_gen.m"
                    if (((((MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_10, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 1848 "unify_gen.m"
                      {
#line 1848 "unify_gen.m"
                        MR_Integer ll_backend__unify_gen__Ptag_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_10, (MR_Integer) 1)));
#line 1848 "unify_gen.m"
                        MR_Integer ll_backend__unify_gen__Stag_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_10, (MR_Integer) 2)));
#line 1848 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__Rval_22;
#line 1848 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__V_62_62;
#line 1848 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__V_64_64;
#line 1848 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__V_65_65;

#line 1849 "unify_gen.m"
                        {
#line 1849 "unify_gen.m"
                          ll_backend__unify_gen__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1849 "unify_gen.m"
                          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_65_65, 0) = ((MR_Box) (ll_backend__unify_gen__Stag_21));
#line 1849 "unify_gen.m"
                        }
#line 1849 "unify_gen.m"
                        {
#line 1849 "unify_gen.m"
                          ll_backend__unify_gen__V_64_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1849 "unify_gen.m"
                          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_64_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1849 "unify_gen.m"
                          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_64_64, 1) = ((MR_Box) (ll_backend__unify_gen__V_65_65));
#line 1849 "unify_gen.m"
                        }
#line 1849 "unify_gen.m"
                        {
#line 1849 "unify_gen.m"
                          ll_backend__unify_gen__V_62_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1849 "unify_gen.m"
                          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_62_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1849 "unify_gen.m"
                          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_62_62, 1) = ((MR_Box) ((MR_Integer) 4));
#line 1849 "unify_gen.m"
                          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_62_62, 2) = ((MR_Box) (ll_backend__unify_gen__V_64_64));
#line 1849 "unify_gen.m"
                        }
#line 1849 "unify_gen.m"
                        {
#line 1849 "unify_gen.m"
                          ll_backend__unify_gen__Rval_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1849 "unify_gen.m"
                          MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Rval_22, 0) = ((MR_Box) (ll_backend__unify_gen__Ptag_20));
#line 1849 "unify_gen.m"
                          MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Rval_22, 1) = ((MR_Box) (ll_backend__unify_gen__V_62_62));
#line 1849 "unify_gen.m"
                        }
#line 1850 "unify_gen.m"
                        {
#line 1850 "unify_gen.m"
                          MR_Word base;
#line 1850 "unify_gen.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1850 "unify_gen.m"
                          *ll_backend__unify_gen__TypedRval_12 = base;
#line 1850 "unify_gen.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__unify_gen__Rval_22));
#line 1850 "unify_gen.m"
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 11));
#line 1850 "unify_gen.m"
                        }
#line 1848 "unify_gen.m"
                      }
#line 1845 "unify_gen.m"
                    else
#line 1845 "unify_gen.m"
                      if (((((MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_10, (MR_Integer) 0)))) == (MR_Integer) 16))))
#line 1857 "unify_gen.m"
                        {
#line 1857 "unify_gen.m"
                          MR_Word ll_backend__unify_gen__ActualConsTag_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_10, (MR_Integer) 2)));
#line 1857 "unify_gen.m"
                          MR_Word ll_backend__unify_gen__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_10, (MR_Integer) 1)));

#line 1858 "unify_gen.m"
                          /* direct tailcall eliminated */
#line 1858 "unify_gen.m"
                          {
#line 1858 "unify_gen.m"
                            MR_Word ll_backend__unify_gen__ConsTag__tmp_copy_10 = ll_backend__unify_gen__ActualConsTag_25;

#line 1858 "unify_gen.m"
                            ll_backend__unify_gen__ConsTag_10 = ll_backend__unify_gen__ConsTag__tmp_copy_10;
#line 1858 "unify_gen.m"
                          }
#line 1858 "unify_gen.m"
                          continue;
#line 1857 "unify_gen.m"
                        }
#line 1845 "unify_gen.m"
                      else
#line 1845 "unify_gen.m"
                        if (((((MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_10, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1861 "unify_gen.m"
                          {
#line 1861 "unify_gen.m"
                            MR_Word ll_backend__unify_gen__ModuleName_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_10, (MR_Integer) 1)));
#line 1861 "unify_gen.m"
                            MR_String ll_backend__unify_gen__TypeName_27 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_10, (MR_Integer) 2)));
#line 1861 "unify_gen.m"
                            MR_Integer ll_backend__unify_gen__TypeArity_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_10, (MR_Integer) 3)));
#line 1861 "unify_gen.m"
                            MR_Word ll_backend__unify_gen__RttiTypeCtor_29;
#line 1861 "unify_gen.m"
                            MR_Word ll_backend__unify_gen__DataId_30;
#line 1861 "unify_gen.m"
                            MR_Word ll_backend__unify_gen__V_58_58;
#line 1861 "unify_gen.m"
                            MR_Word ll_backend__unify_gen__V_60_60;
#line 1861 "unify_gen.m"
                            MR_Word ll_backend__unify_gen__Rval_77;

#line 1862 "unify_gen.m"
                            {
#line 1862 "unify_gen.m"
                              ll_backend__unify_gen__RttiTypeCtor_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1862 "unify_gen.m"
                              MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiTypeCtor_29, 0) = ((MR_Box) (ll_backend__unify_gen__ModuleName_26));
#line 1862 "unify_gen.m"
                              MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiTypeCtor_29, 1) = ((MR_Box) (ll_backend__unify_gen__TypeName_27));
#line 1862 "unify_gen.m"
                              MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiTypeCtor_29, 2) = ((MR_Box) (ll_backend__unify_gen__TypeArity_28));
#line 1862 "unify_gen.m"
                            }
#line 1863 "unify_gen.m"
                            {
#line 1863 "unify_gen.m"
                              ll_backend__unify_gen__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1863 "unify_gen.m"
                              MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_58_58, 0) = ((MR_Box) (ll_backend__unify_gen__RttiTypeCtor_29));
#line 1863 "unify_gen.m"
                              MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
#line 1863 "unify_gen.m"
                            }
#line 1863 "unify_gen.m"
                            {
#line 1863 "unify_gen.m"
                              ll_backend__unify_gen__DataId_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1863 "unify_gen.m"
                              MR_hl_field(MR_mktag(0), ll_backend__unify_gen__DataId_30, 0) = ((MR_Box) (ll_backend__unify_gen__V_58_58));
#line 1863 "unify_gen.m"
                            }
#line 1865 "unify_gen.m"
                            {
#line 1865 "unify_gen.m"
                              ll_backend__unify_gen__V_60_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1865 "unify_gen.m"
                              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_60_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1865 "unify_gen.m"
                              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_60_60, 1) = ((MR_Box) (ll_backend__unify_gen__DataId_30));
#line 1865 "unify_gen.m"
                              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_60_60, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1865 "unify_gen.m"
                            }
#line 1865 "unify_gen.m"
                            {
#line 1865 "unify_gen.m"
                              ll_backend__unify_gen__Rval_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1865 "unify_gen.m"
                              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Rval_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1865 "unify_gen.m"
                              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Rval_77, 1) = ((MR_Box) (ll_backend__unify_gen__V_60_60));
#line 1865 "unify_gen.m"
                            }
#line 1867 "unify_gen.m"
                            {
#line 1867 "unify_gen.m"
                              MR_Word base;
#line 1867 "unify_gen.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1867 "unify_gen.m"
                              *ll_backend__unify_gen__TypedRval_12 = base;
#line 1867 "unify_gen.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__unify_gen__Rval_77));
#line 1867 "unify_gen.m"
                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 11));
#line 1867 "unify_gen.m"
                            }
#line 1861 "unify_gen.m"
                          }
#line 1845 "unify_gen.m"
                        else
#line 1889 "unify_gen.m"
                          {
#line 1890 "unify_gen.m"
                            {
#line 1890 "unify_gen.m"
                              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_const_struct_arg_tag\'/6", (MR_String) "unexpected tag");
#line 1890 "unify_gen.m"
                              return;
                            }
#line 1889 "unify_gen.m"
                          }
#line 1845 "unify_gen.m"
      }
#line 1845 "unify_gen.m"
      break;
#line 1845 "unify_gen.m"
    }
#line 1809 "unify_gen.m"
}

#line 1693 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_95_115_116_114_117_99_116_95_114_118_97_108_95_95_91_52_93_95_48_10_p_0(
#line 1693 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ModuleInfo_11,
#line 1693 "unify_gen.m"
  MR_Word ll_backend__unify_gen__UnboxedFloats_12,
#line 1693 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConstStructMap_13,
#line 1693 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConsTag_15,
#line 1693 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConstArgs_16,
#line 1693 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConsArgWidths_17,
#line 1693 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__TypedRval_18,
#line 1693 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_70,
#line 1693 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_71)
#line 1693 "unify_gen.m"
{
#line 1702 "unify_gen.m"
  while (MR_TRUE)
#line 1702 "unify_gen.m"
    {
#line 1702 "unify_gen.m"
      /* tailcall optimized into a loop */
#line 1702 "unify_gen.m"
      {
#line 1702 "unify_gen.m"
        MR_bool ll_backend__unify_gen__succeeded;

#line 1702 "unify_gen.m"
        if ((ll_backend__unify_gen__ConsTag_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1707 "unify_gen.m"
          {
#line 1714 "unify_gen.m"
            if ((ll_backend__unify_gen__ConstArgs_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1717 "unify_gen.m"
              {
#line 1718 "unify_gen.m"
                {
#line 1718 "unify_gen.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_const_struct_rval\'/10", (MR_String) "no_tag arity != 1");
#line 1718 "unify_gen.m"
                  return;
                }
#line 1717 "unify_gen.m"
              }
#line 1714 "unify_gen.m"
            else
#line 1714 "unify_gen.m"
              {
#line 1714 "unify_gen.m"
                MR_Word ll_backend__unify_gen__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ConstArgs_16, (MR_Integer) 1)));
#line 1714 "unify_gen.m"
                MR_Word ll_backend__unify_gen__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ConstArgs_16, (MR_Integer) 0)));

#line 1714 "unify_gen.m"
                if ((ll_backend__unify_gen__V_137_137 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1709 "unify_gen.m"
                  {
#line 1709 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__ConsArgWidth_23;

#line 1710 "unify_gen.m"
                    {
#line 1710 "unify_gen.m"
                      ll_backend__unify_gen__det_single_arg_width_2_p_0(ll_backend__unify_gen__ConsArgWidths_17, &ll_backend__unify_gen__ConsArgWidth_23);
                    }
#line 1711 "unify_gen.m"
                    {
#line 1711 "unify_gen.m"
                      ll_backend__unify_gen__generate_const_struct_arg_6_p_0(ll_backend__unify_gen__ModuleInfo_11, ll_backend__unify_gen__UnboxedFloats_12, ll_backend__unify_gen__ConstStructMap_13, ll_backend__unify_gen__V_138_138, ll_backend__unify_gen__ConsArgWidth_23, ll_backend__unify_gen__TypedRval_18);
                    }
#line 1709 "unify_gen.m"
                  }
#line 1714 "unify_gen.m"
                else
#line 1717 "unify_gen.m"
                  {
#line 1718 "unify_gen.m"
                    {
#line 1718 "unify_gen.m"
                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_const_struct_rval\'/10", (MR_String) "no_tag arity != 1");
#line 1718 "unify_gen.m"
                      return;
                    }
#line 1717 "unify_gen.m"
                  }
#line 1714 "unify_gen.m"
              }
#line 1718 "unify_gen.m"
            *ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_71 = ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_70;
#line 1707 "unify_gen.m"
          }
#line 1702 "unify_gen.m"
        else
#line 1702 "unify_gen.m"
          if ((ll_backend__unify_gen__ConsTag_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1742 "unify_gen.m"
            {
#line 1742 "unify_gen.m"
              MR_Word ll_backend__unify_gen__ArgTypedRvals_35;
#line 1742 "unify_gen.m"
              MR_Word ll_backend__unify_gen__PackArgTypedRvals_36;
#line 1742 "unify_gen.m"
              MR_Word ll_backend__unify_gen__DataAddr_37;
#line 1742 "unify_gen.m"
              MR_Word ll_backend__unify_gen__CellPtrConst_39;
#line 1742 "unify_gen.m"
              MR_Word ll_backend__unify_gen__V_82_82;
#line 1742 "unify_gen.m"
              MR_Word ll_backend__unify_gen__Rval_106;

#line 1743 "unify_gen.m"
              {
#line 1743 "unify_gen.m"
                ll_backend__unify_gen__generate_const_struct_args_6_p_0(ll_backend__unify_gen__ModuleInfo_11, ll_backend__unify_gen__UnboxedFloats_12, ll_backend__unify_gen__ConstStructMap_13, ll_backend__unify_gen__ConstArgs_16, ll_backend__unify_gen__ConsArgWidths_17, &ll_backend__unify_gen__ArgTypedRvals_35);
              }
#line 1745 "unify_gen.m"
              {
#line 1745 "unify_gen.m"
                ll_backend__unify_gen__pack_ground_term_args_3_p_0(ll_backend__unify_gen__ConsArgWidths_17, ll_backend__unify_gen__ArgTypedRvals_35, &ll_backend__unify_gen__PackArgTypedRvals_36);
              }
#line 1746 "unify_gen.m"
              {
#line 1746 "unify_gen.m"
                ll_backend__global_data__add_scalar_static_cell_4_p_0(ll_backend__unify_gen__PackArgTypedRvals_36, &ll_backend__unify_gen__DataAddr_37, ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_70, ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_71);
              }
#line 1748 "unify_gen.m"
              {
#line 1748 "unify_gen.m"
                ll_backend__unify_gen__V_82_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1748 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_82_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1748 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_82_82, 1) = ((MR_Box) (ll_backend__unify_gen__DataAddr_37));
#line 1748 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_82_82, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1748 "unify_gen.m"
              }
#line 1748 "unify_gen.m"
              {
#line 1748 "unify_gen.m"
                ll_backend__unify_gen__CellPtrConst_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1748 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__CellPtrConst_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1748 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__CellPtrConst_39, 1) = ((MR_Box) (ll_backend__unify_gen__V_82_82));
#line 1748 "unify_gen.m"
              }
#line 1749 "unify_gen.m"
              {
#line 1749 "unify_gen.m"
                ll_backend__unify_gen__Rval_106 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1749 "unify_gen.m"
                MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Rval_106, 0) = ((MR_Box) ((MR_Integer) 0));
#line 1749 "unify_gen.m"
                MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Rval_106, 1) = ((MR_Box) (ll_backend__unify_gen__CellPtrConst_39));
#line 1749 "unify_gen.m"
              }
#line 1750 "unify_gen.m"
              {
#line 1750 "unify_gen.m"
                MR_Word base;
#line 1750 "unify_gen.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1750 "unify_gen.m"
                *ll_backend__unify_gen__TypedRval_18 = base;
#line 1750 "unify_gen.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__unify_gen__Rval_106));
#line 1750 "unify_gen.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 11));
#line 1750 "unify_gen.m"
              }
#line 1742 "unify_gen.m"
            }
#line 1702 "unify_gen.m"
          else
#line 1702 "unify_gen.m"
            if (((((MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 1721 "unify_gen.m"
              {
#line 1721 "unify_gen.m"
                MR_Integer ll_backend__unify_gen__Ptag_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 1)));

#line 1730 "unify_gen.m"
                if ((ll_backend__unify_gen__ConstArgs_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1733 "unify_gen.m"
                  {
#line 1734 "unify_gen.m"
                    {
#line 1734 "unify_gen.m"
                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_const_struct_rval\'/10", (MR_String) "direct_arg_tag: arity != 1");
#line 1734 "unify_gen.m"
                      return;
                    }
#line 1733 "unify_gen.m"
                  }
#line 1730 "unify_gen.m"
                else
#line 1730 "unify_gen.m"
                  {
#line 1730 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ConstArgs_16, (MR_Integer) 1)));
#line 1730 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ConstArgs_16, (MR_Integer) 0)));

#line 1730 "unify_gen.m"
                    if ((ll_backend__unify_gen__V_135_135 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1723 "unify_gen.m"
                      {
#line 1723 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__ArgRval_29;
#line 1723 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__Rval_31;
#line 1723 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__ConsArgWidth_97;
#line 1723 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__ArgTypedRval_98;
#line 1727 "unify_gen.m"
                        MR_Word ll_backend__unify_gen___RvalType_30;

#line 1724 "unify_gen.m"
                        {
#line 1724 "unify_gen.m"
                          ll_backend__unify_gen__det_single_arg_width_2_p_0(ll_backend__unify_gen__ConsArgWidths_17, &ll_backend__unify_gen__ConsArgWidth_97);
                        }
#line 1725 "unify_gen.m"
                        {
#line 1725 "unify_gen.m"
                          ll_backend__unify_gen__generate_const_struct_arg_6_p_0(ll_backend__unify_gen__ModuleInfo_11, ll_backend__unify_gen__UnboxedFloats_12, ll_backend__unify_gen__ConstStructMap_13, ll_backend__unify_gen__V_136_136, ll_backend__unify_gen__ConsArgWidth_97, &ll_backend__unify_gen__ArgTypedRval_98);
                        }
#line 1727 "unify_gen.m"
                        ll_backend__unify_gen__ArgRval_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ArgTypedRval_98, (MR_Integer) 0)));
#line 1727 "unify_gen.m"
                        ll_backend__unify_gen___RvalType_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ArgTypedRval_98, (MR_Integer) 1)));
#line 1728 "unify_gen.m"
                        {
#line 1728 "unify_gen.m"
                          ll_backend__unify_gen__Rval_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1728 "unify_gen.m"
                          MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Rval_31, 0) = ((MR_Box) (ll_backend__unify_gen__Ptag_28));
#line 1728 "unify_gen.m"
                          MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Rval_31, 1) = ((MR_Box) (ll_backend__unify_gen__ArgRval_29));
#line 1728 "unify_gen.m"
                        }
#line 1729 "unify_gen.m"
                        {
#line 1729 "unify_gen.m"
                          MR_Word base;
#line 1729 "unify_gen.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1729 "unify_gen.m"
                          *ll_backend__unify_gen__TypedRval_18 = base;
#line 1729 "unify_gen.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__unify_gen__Rval_31));
#line 1729 "unify_gen.m"
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 11));
#line 1729 "unify_gen.m"
                        }
#line 1723 "unify_gen.m"
                      }
#line 1730 "unify_gen.m"
                    else
#line 1733 "unify_gen.m"
                      {
#line 1734 "unify_gen.m"
                        {
#line 1734 "unify_gen.m"
                          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_const_struct_rval\'/10", (MR_String) "direct_arg_tag: arity != 1");
#line 1734 "unify_gen.m"
                          return;
                        }
#line 1733 "unify_gen.m"
                      }
#line 1730 "unify_gen.m"
                  }
#line 1734 "unify_gen.m"
                *ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_71 = ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_70;
#line 1721 "unify_gen.m"
              }
#line 1702 "unify_gen.m"
            else
#line 1702 "unify_gen.m"
              if (((((MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 1752 "unify_gen.m"
                {
#line 1752 "unify_gen.m"
                  MR_Integer ll_backend__unify_gen__Stag_40 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 2)));
#line 1752 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__StagTypedRval_41;
#line 1752 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__AllTypedRvals_42;
#line 1752 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_75_75;
#line 1752 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_76_76;
#line 1752 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_79_79;
#line 1752 "unify_gen.m"
                  MR_Integer ll_backend__unify_gen__Ptag_107 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 1)));
#line 1752 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__Rval_108;
#line 1752 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__ArgTypedRvals_109;
#line 1752 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__PackArgTypedRvals_110;
#line 1752 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__DataAddr_111;
#line 1752 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__CellPtrConst_113;

#line 1753 "unify_gen.m"
                  {
#line 1753 "unify_gen.m"
                    ll_backend__unify_gen__generate_const_struct_args_6_p_0(ll_backend__unify_gen__ModuleInfo_11, ll_backend__unify_gen__UnboxedFloats_12, ll_backend__unify_gen__ConstStructMap_13, ll_backend__unify_gen__ConstArgs_16, ll_backend__unify_gen__ConsArgWidths_17, &ll_backend__unify_gen__ArgTypedRvals_109);
                  }
#line 1755 "unify_gen.m"
                  {
#line 1755 "unify_gen.m"
                    ll_backend__unify_gen__pack_ground_term_args_3_p_0(ll_backend__unify_gen__ConsArgWidths_17, ll_backend__unify_gen__ArgTypedRvals_109, &ll_backend__unify_gen__PackArgTypedRvals_110);
                  }
#line 1756 "unify_gen.m"
                  {
#line 1756 "unify_gen.m"
                    ll_backend__unify_gen__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1756 "unify_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_76_76, 0) = ((MR_Box) (ll_backend__unify_gen__Stag_40));
#line 1756 "unify_gen.m"
                  }
#line 1756 "unify_gen.m"
                  {
#line 1756 "unify_gen.m"
                    ll_backend__unify_gen__V_75_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1756 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_75_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1756 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_75_75, 1) = ((MR_Box) (ll_backend__unify_gen__V_76_76));
#line 1756 "unify_gen.m"
                  }
#line 1756 "unify_gen.m"
                  {
#line 1756 "unify_gen.m"
                    ll_backend__unify_gen__StagTypedRval_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1756 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__StagTypedRval_41, 0) = ((MR_Box) (ll_backend__unify_gen__V_75_75));
#line 1756 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__StagTypedRval_41, 1) = ((MR_Box) ((MR_Integer) 7));
#line 1756 "unify_gen.m"
                  }
#line 1757 "unify_gen.m"
                  {
#line 1757 "unify_gen.m"
                    ll_backend__unify_gen__AllTypedRvals_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1757 "unify_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__AllTypedRvals_42, 0) = ((MR_Box) (ll_backend__unify_gen__StagTypedRval_41));
#line 1757 "unify_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__AllTypedRvals_42, 1) = ((MR_Box) (ll_backend__unify_gen__PackArgTypedRvals_110));
#line 1757 "unify_gen.m"
                  }
#line 1758 "unify_gen.m"
                  {
#line 1758 "unify_gen.m"
                    ll_backend__global_data__add_scalar_static_cell_4_p_0(ll_backend__unify_gen__AllTypedRvals_42, &ll_backend__unify_gen__DataAddr_111, ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_70, ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_71);
                  }
#line 1760 "unify_gen.m"
                  {
#line 1760 "unify_gen.m"
                    ll_backend__unify_gen__V_79_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1760 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_79_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1760 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_79_79, 1) = ((MR_Box) (ll_backend__unify_gen__DataAddr_111));
#line 1760 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_79_79, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1760 "unify_gen.m"
                  }
#line 1760 "unify_gen.m"
                  {
#line 1760 "unify_gen.m"
                    ll_backend__unify_gen__CellPtrConst_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1760 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__CellPtrConst_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1760 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__CellPtrConst_113, 1) = ((MR_Box) (ll_backend__unify_gen__V_79_79));
#line 1760 "unify_gen.m"
                  }
#line 1761 "unify_gen.m"
                  {
#line 1761 "unify_gen.m"
                    ll_backend__unify_gen__Rval_108 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1761 "unify_gen.m"
                    MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Rval_108, 0) = ((MR_Box) (ll_backend__unify_gen__Ptag_107));
#line 1761 "unify_gen.m"
                    MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Rval_108, 1) = ((MR_Box) (ll_backend__unify_gen__CellPtrConst_113));
#line 1761 "unify_gen.m"
                  }
#line 1762 "unify_gen.m"
                  {
#line 1762 "unify_gen.m"
                    MR_Word base;
#line 1762 "unify_gen.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1762 "unify_gen.m"
                    *ll_backend__unify_gen__TypedRval_18 = base;
#line 1762 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__unify_gen__Rval_108));
#line 1762 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 11));
#line 1762 "unify_gen.m"
                  }
#line 1752 "unify_gen.m"
                }
#line 1702 "unify_gen.m"
              else
#line 1702 "unify_gen.m"
                if (((((MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 0)))) == (MR_Integer) 16))))
#line 1702 "unify_gen.m"
                  {
#line 1702 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__ActualConsTag_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 2)));
#line 1702 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 1)));

#line 1703 "unify_gen.m"
                    /* direct tailcall eliminated */
#line 1703 "unify_gen.m"
                    {
#line 1703 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__ConsTag__tmp_copy_15 = ll_backend__unify_gen__ActualConsTag_21;

#line 1703 "unify_gen.m"
                      ll_backend__unify_gen__ConsTag_15 = ll_backend__unify_gen__ConsTag__tmp_copy_15;
#line 1703 "unify_gen.m"
                    }
#line 1703 "unify_gen.m"
                    continue;
#line 1702 "unify_gen.m"
                  }
#line 1702 "unify_gen.m"
                else
#line 1702 "unify_gen.m"
                  if (((((MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 1742 "unify_gen.m"
                    {
#line 1742 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__ArgTypedRvals_126;
#line 1742 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__PackArgTypedRvals_127;
#line 1742 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__DataAddr_128;
#line 1742 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__CellPtrConst_130;
#line 1742 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__V_131_131;
#line 1742 "unify_gen.m"
                      MR_Integer ll_backend__unify_gen__Ptag_133 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 1)));
#line 1742 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__Rval_134;

#line 1743 "unify_gen.m"
                      {
#line 1743 "unify_gen.m"
                        ll_backend__unify_gen__generate_const_struct_args_6_p_0(ll_backend__unify_gen__ModuleInfo_11, ll_backend__unify_gen__UnboxedFloats_12, ll_backend__unify_gen__ConstStructMap_13, ll_backend__unify_gen__ConstArgs_16, ll_backend__unify_gen__ConsArgWidths_17, &ll_backend__unify_gen__ArgTypedRvals_126);
                      }
#line 1745 "unify_gen.m"
                      {
#line 1745 "unify_gen.m"
                        ll_backend__unify_gen__pack_ground_term_args_3_p_0(ll_backend__unify_gen__ConsArgWidths_17, ll_backend__unify_gen__ArgTypedRvals_126, &ll_backend__unify_gen__PackArgTypedRvals_127);
                      }
#line 1746 "unify_gen.m"
                      {
#line 1746 "unify_gen.m"
                        ll_backend__global_data__add_scalar_static_cell_4_p_0(ll_backend__unify_gen__PackArgTypedRvals_127, &ll_backend__unify_gen__DataAddr_128, ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_70, ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_71);
                      }
#line 1748 "unify_gen.m"
                      {
#line 1748 "unify_gen.m"
                        ll_backend__unify_gen__V_131_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1748 "unify_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_131_131, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1748 "unify_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_131_131, 1) = ((MR_Box) (ll_backend__unify_gen__DataAddr_128));
#line 1748 "unify_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_131_131, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1748 "unify_gen.m"
                      }
#line 1748 "unify_gen.m"
                      {
#line 1748 "unify_gen.m"
                        ll_backend__unify_gen__CellPtrConst_130 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1748 "unify_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__unify_gen__CellPtrConst_130, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1748 "unify_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__unify_gen__CellPtrConst_130, 1) = ((MR_Box) (ll_backend__unify_gen__V_131_131));
#line 1748 "unify_gen.m"
                      }
#line 1749 "unify_gen.m"
                      {
#line 1749 "unify_gen.m"
                        ll_backend__unify_gen__Rval_134 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1749 "unify_gen.m"
                        MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Rval_134, 0) = ((MR_Box) (ll_backend__unify_gen__Ptag_133));
#line 1749 "unify_gen.m"
                        MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Rval_134, 1) = ((MR_Box) (ll_backend__unify_gen__CellPtrConst_130));
#line 1749 "unify_gen.m"
                      }
#line 1750 "unify_gen.m"
                      {
#line 1750 "unify_gen.m"
                        MR_Word base;
#line 1750 "unify_gen.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1750 "unify_gen.m"
                        *ll_backend__unify_gen__TypedRval_18 = base;
#line 1750 "unify_gen.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__unify_gen__Rval_134));
#line 1750 "unify_gen.m"
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 11));
#line 1750 "unify_gen.m"
                      }
#line 1742 "unify_gen.m"
                    }
#line 1702 "unify_gen.m"
                  else
#line 1779 "unify_gen.m"
                    {
#line 1780 "unify_gen.m"
                      {
#line 1780 "unify_gen.m"
                        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_const_struct_rval\'/10", (MR_String) "unexpected tag");
#line 1780 "unify_gen.m"
                        return;
                      }
#line 1779 "unify_gen.m"
                    }
#line 1702 "unify_gen.m"
      }
#line 1702 "unify_gen.m"
      break;
#line 1702 "unify_gen.m"
    }
#line 1693 "unify_gen.m"
}

#line 1264 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_9_p_0(
#line 1264 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Var_10,
#line 1264 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Args_12,
#line 1264 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Modes_13,
#line 1264 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ArgWidths_14,
#line 1264 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Tag_15,
#line 1264 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_16,
#line 1264 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_62,
#line 1264 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_63)
#line 1264 "unify_gen.m"
{
#line 1284 "unify_gen.m"
  while (MR_TRUE)
#line 1284 "unify_gen.m"
    {
#line 1284 "unify_gen.m"
      /* tailcall optimized into a loop */
#line 1284 "unify_gen.m"
      {
#line 1284 "unify_gen.m"
        MR_bool ll_backend__unify_gen__succeeded;

#line 1284 "unify_gen.m"
        if ((ll_backend__unify_gen__Tag_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1329 "unify_gen.m"
          {
#line 1329 "unify_gen.m"
            MR_Word ll_backend__unify_gen__Arg_45;
#line 1329 "unify_gen.m"
            MR_Word ll_backend__unify_gen__Mode_46;
#line 1301 "unify_gen.m"
            MR_Word ll_backend__unify_gen__V_79_79;
#line 1301 "unify_gen.m"
            MR_Word ll_backend__unify_gen__V_80_80;
#line 1301 "unify_gen.m"
            MR_Word ll_backend__unify_gen__V_81_81;
#line 1303 "unify_gen.m"
            MR_Word ll_backend__unify_gen___ArgWidth_47;

#line 1301 "unify_gen.m"
            ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__Args_12)) == (MR_mktag((MR_Integer) 1)));
#line 1301 "unify_gen.m"
            if (ll_backend__unify_gen__succeeded)
#line 1301 "unify_gen.m"
              {
#line 1301 "unify_gen.m"
                ll_backend__unify_gen__Arg_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Args_12, (MR_Integer) 0)));
#line 1301 "unify_gen.m"
                ll_backend__unify_gen__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Args_12, (MR_Integer) 1)));
#line 1301 "unify_gen.m"
                ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__V_79_79 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1301 "unify_gen.m"
                if (ll_backend__unify_gen__succeeded)
#line 1301 "unify_gen.m"
                  {
#line 1302 "unify_gen.m"
                    ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__Modes_13)) == (MR_mktag((MR_Integer) 1)));
#line 1302 "unify_gen.m"
                    if (ll_backend__unify_gen__succeeded)
#line 1302 "unify_gen.m"
                      {
#line 1302 "unify_gen.m"
                        ll_backend__unify_gen__Mode_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Modes_13, (MR_Integer) 0)));
#line 1302 "unify_gen.m"
                        ll_backend__unify_gen__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Modes_13, (MR_Integer) 1)));
#line 1302 "unify_gen.m"
                        ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__V_80_80 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1301 "unify_gen.m"
                        if (ll_backend__unify_gen__succeeded)
#line 1301 "unify_gen.m"
                          {
#line 1303 "unify_gen.m"
                            ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__ArgWidths_14)) == (MR_mktag((MR_Integer) 1)));
#line 1303 "unify_gen.m"
                            if (ll_backend__unify_gen__succeeded)
#line 1303 "unify_gen.m"
                              {
#line 1303 "unify_gen.m"
                                ll_backend__unify_gen___ArgWidth_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ArgWidths_14, (MR_Integer) 0)));
#line 1303 "unify_gen.m"
                                ll_backend__unify_gen__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ArgWidths_14, (MR_Integer) 1)));
#line 1303 "unify_gen.m"
                                ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__V_81_81 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1303 "unify_gen.m"
                              }
#line 1301 "unify_gen.m"
                          }
#line 1302 "unify_gen.m"
                      }
#line 1301 "unify_gen.m"
                  }
#line 1301 "unify_gen.m"
              }
#line 1329 "unify_gen.m"
            if (ll_backend__unify_gen__succeeded)
#line 1305 "unify_gen.m"
              {
#line 1305 "unify_gen.m"
                MR_Word ll_backend__unify_gen__VarType_48;
#line 1305 "unify_gen.m"
                MR_Word ll_backend__unify_gen__ModuleInfo_49;
#line 1305 "unify_gen.m"
                MR_Word ll_backend__unify_gen__IsDummy_50;

#line 1305 "unify_gen.m"
                {
#line 1305 "unify_gen.m"
                  ll_backend__unify_gen__VarType_48 = ll_backend__code_info__variable_type_2_f_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_62, ll_backend__unify_gen__Var_10);
                }
#line 1306 "unify_gen.m"
                {
#line 1306 "unify_gen.m"
                  ll_backend__code_info__get_module_info_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_62, &ll_backend__unify_gen__ModuleInfo_49);
                }
#line 1307 "unify_gen.m"
                {
#line 1307 "unify_gen.m"
                  ll_backend__unify_gen__IsDummy_50 = check_hlds__type_util__check_dummy_type_2_f_0(ll_backend__unify_gen__ModuleInfo_49, ll_backend__unify_gen__VarType_48);
                }
#line 1323 "unify_gen.m"
                if ((ll_backend__unify_gen__IsDummy_50 == (MR_Integer) 0))
#line 1309 "unify_gen.m"
                  {
#line 1317 "unify_gen.m"
                    {
#line 1317 "unify_gen.m"
                      ll_backend__unify_gen__succeeded = ll_backend__code_info__variable_is_forward_live_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_62, ll_backend__unify_gen__Arg_45);
                    }
#line 1319 "unify_gen.m"
                    if (ll_backend__unify_gen__succeeded)
#line 1318 "unify_gen.m"
                      {
#line 1318 "unify_gen.m"
                        {
#line 1318 "unify_gen.m"
                          ll_backend__code_info__assign_const_to_var_4_p_0(ll_backend__unify_gen__Arg_45, (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[8]), ll_backend__unify_gen__STATE_VARIABLE_CI_0_62, ll_backend__unify_gen__STATE_VARIABLE_CI_63);
                        }
#line 1318 "unify_gen.m"
                      }
#line 1319 "unify_gen.m"
                    else
#line 1318 "unify_gen.m"
                      *ll_backend__unify_gen__STATE_VARIABLE_CI_63 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_62;
#line 1322 "unify_gen.m"
                    {
#line 1322 "unify_gen.m"
                      *ll_backend__unify_gen__Code_16 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                    }
#line 1309 "unify_gen.m"
                  }
#line 1323 "unify_gen.m"
                else
#line 1324 "unify_gen.m"
                  {
#line 1324 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__ArgType_51;
#line 1324 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__V_82_82;
#line 1324 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__V_83_83;

#line 1325 "unify_gen.m"
                    {
#line 1325 "unify_gen.m"
                      ll_backend__unify_gen__ArgType_51 = ll_backend__code_info__variable_type_2_f_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_62, ll_backend__unify_gen__Arg_45);
                    }
#line 1326 "unify_gen.m"
                    {
#line 1326 "unify_gen.m"
                      ll_backend__unify_gen__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1326 "unify_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_82_82, 0) = ((MR_Box) (ll_backend__unify_gen__Var_10));
#line 1326 "unify_gen.m"
                    }
#line 1326 "unify_gen.m"
                    {
#line 1326 "unify_gen.m"
                      ll_backend__unify_gen__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1326 "unify_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_83_83, 0) = ((MR_Box) (ll_backend__unify_gen__Arg_45));
#line 1326 "unify_gen.m"
                    }
#line 1326 "unify_gen.m"
                    {
#line 1326 "unify_gen.m"
                      ll_backend__unify_gen__generate_sub_unify_7_p_0(ll_backend__unify_gen__V_82_82, ll_backend__unify_gen__V_83_83, ll_backend__unify_gen__Mode_46, ll_backend__unify_gen__ArgType_51, ll_backend__unify_gen__Code_16, ll_backend__unify_gen__STATE_VARIABLE_CI_0_62, ll_backend__unify_gen__STATE_VARIABLE_CI_63);
#line 1326 "unify_gen.m"
                      return;
                    }
#line 1324 "unify_gen.m"
                  }
#line 1305 "unify_gen.m"
              }
#line 1329 "unify_gen.m"
            else
#line 1330 "unify_gen.m"
              {
#line 1330 "unify_gen.m"
                {
#line 1330 "unify_gen.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_det_deconstruction_2\'/9", (MR_String) "no_tag: arity != 1");
#line 1330 "unify_gen.m"
                  return;
                }
#line 1330 "unify_gen.m"
              }
#line 1329 "unify_gen.m"
          }
#line 1284 "unify_gen.m"
        else
#line 1284 "unify_gen.m"
          if ((ll_backend__unify_gen__Tag_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1333 "unify_gen.m"
            {
#line 1335 "unify_gen.m"
              /* direct tailcall eliminated */
#line 1335 "unify_gen.m"
              {
#line 1335 "unify_gen.m"
                ll_backend__unify_gen__Tag_15 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[13]);
#line 1335 "unify_gen.m"
              }
#line 1335 "unify_gen.m"
              continue;
#line 1333 "unify_gen.m"
            }
#line 1284 "unify_gen.m"
          else
#line 1284 "unify_gen.m"
            if (((((MR_tag((MR_Word) ll_backend__unify_gen__Tag_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Tag_15, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 1345 "unify_gen.m"
              {
#line 1345 "unify_gen.m"
                MR_Integer ll_backend__unify_gen__Ptag_108 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Tag_15, (MR_Integer) 1)));
#line 1354 "unify_gen.m"
                MR_Word ll_backend__unify_gen__Arg_104;
#line 1354 "unify_gen.m"
                MR_Word ll_backend__unify_gen__Mode_105;
#line 1347 "unify_gen.m"
                MR_Word ll_backend__unify_gen__V_67_67;
#line 1347 "unify_gen.m"
                MR_Word ll_backend__unify_gen__V_68_68;
#line 1347 "unify_gen.m"
                MR_Word ll_backend__unify_gen__V_69_69;
#line 1349 "unify_gen.m"
                MR_Word ll_backend__unify_gen__V_57_57;

#line 1347 "unify_gen.m"
                ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__Args_12)) == (MR_mktag((MR_Integer) 1)));
#line 1347 "unify_gen.m"
                if (ll_backend__unify_gen__succeeded)
#line 1347 "unify_gen.m"
                  {
#line 1347 "unify_gen.m"
                    ll_backend__unify_gen__Arg_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Args_12, (MR_Integer) 0)));
#line 1347 "unify_gen.m"
                    ll_backend__unify_gen__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Args_12, (MR_Integer) 1)));
#line 1347 "unify_gen.m"
                    ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__V_67_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1347 "unify_gen.m"
                    if (ll_backend__unify_gen__succeeded)
#line 1347 "unify_gen.m"
                      {
#line 1348 "unify_gen.m"
                        ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__Modes_13)) == (MR_mktag((MR_Integer) 1)));
#line 1348 "unify_gen.m"
                        if (ll_backend__unify_gen__succeeded)
#line 1348 "unify_gen.m"
                          {
#line 1348 "unify_gen.m"
                            ll_backend__unify_gen__Mode_105 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Modes_13, (MR_Integer) 0)));
#line 1348 "unify_gen.m"
                            ll_backend__unify_gen__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Modes_13, (MR_Integer) 1)));
#line 1348 "unify_gen.m"
                            ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__V_68_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1347 "unify_gen.m"
                            if (ll_backend__unify_gen__succeeded)
#line 1347 "unify_gen.m"
                              {
#line 1349 "unify_gen.m"
                                ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__ArgWidths_14)) == (MR_mktag((MR_Integer) 1)));
#line 1349 "unify_gen.m"
                                if (ll_backend__unify_gen__succeeded)
#line 1349 "unify_gen.m"
                                  {
#line 1349 "unify_gen.m"
                                    ll_backend__unify_gen__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ArgWidths_14, (MR_Integer) 0)));
#line 1349 "unify_gen.m"
                                    ll_backend__unify_gen__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ArgWidths_14, (MR_Integer) 1)));
#line 1349 "unify_gen.m"
                                    ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__V_69_69 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1349 "unify_gen.m"
                                  }
#line 1347 "unify_gen.m"
                              }
#line 1348 "unify_gen.m"
                          }
#line 1347 "unify_gen.m"
                      }
#line 1347 "unify_gen.m"
                  }
#line 1354 "unify_gen.m"
                if (ll_backend__unify_gen__succeeded)
#line 1351 "unify_gen.m"
                  {
#line 1351 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__Type_58;

#line 1351 "unify_gen.m"
                    {
#line 1351 "unify_gen.m"
                      ll_backend__unify_gen__Type_58 = ll_backend__code_info__variable_type_2_f_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_62, ll_backend__unify_gen__Arg_104);
                    }
#line 1352 "unify_gen.m"
                    {
#line 1352 "unify_gen.m"
                      ll_backend__unify_gen__generate_direct_arg_deconstruct_8_p_0(ll_backend__unify_gen__Var_10, ll_backend__unify_gen__Arg_104, ll_backend__unify_gen__Ptag_108, ll_backend__unify_gen__Mode_105, ll_backend__unify_gen__Type_58, ll_backend__unify_gen__Code_16, ll_backend__unify_gen__STATE_VARIABLE_CI_0_62, ll_backend__unify_gen__STATE_VARIABLE_CI_63);
#line 1352 "unify_gen.m"
                      return;
                    }
#line 1351 "unify_gen.m"
                  }
#line 1354 "unify_gen.m"
                else
#line 1355 "unify_gen.m"
                  {
#line 1355 "unify_gen.m"
                    {
#line 1355 "unify_gen.m"
                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_det_deconstruction_2\'/9", (MR_String) "direct_arg_tag: arity != 1");
#line 1355 "unify_gen.m"
                      return;
                    }
#line 1355 "unify_gen.m"
                  }
#line 1345 "unify_gen.m"
              }
#line 1284 "unify_gen.m"
            else
#line 1284 "unify_gen.m"
              if (((((MR_tag((MR_Word) ll_backend__unify_gen__Tag_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Tag_15, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1293 "unify_gen.m"
                {
#line 1294 "unify_gen.m"
                  {
#line 1294 "unify_gen.m"
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_det_deconstruction_2\'/9", (MR_String) "ground_term_const_tag");
#line 1294 "unify_gen.m"
                    return;
                  }
#line 1293 "unify_gen.m"
                }
#line 1284 "unify_gen.m"
              else
#line 1284 "unify_gen.m"
                if (((((MR_tag((MR_Word) ll_backend__unify_gen__Tag_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Tag_15, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 1358 "unify_gen.m"
                  {
#line 1358 "unify_gen.m"
                    MR_Integer ll_backend__unify_gen__Ptag_109 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Tag_15, (MR_Integer) 1)));
#line 1358 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__Rval_110;
#line 1358 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__Fields_111;
#line 1358 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__ArgVars_112;
#line 1358 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__ArgTypes_113;
#line 1358 "unify_gen.m"
                    MR_Integer ll_backend__unify_gen___Sectag1_59 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Tag_15, (MR_Integer) 2)));

#line 1359 "unify_gen.m"
                    {
#line 1359 "unify_gen.m"
                      ll_backend__unify_gen__Rval_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1359 "unify_gen.m"
                      MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Rval_110, 0) = ((MR_Box) (ll_backend__unify_gen__Var_10));
#line 1359 "unify_gen.m"
                    }
#line 1360 "unify_gen.m"
                    {
#line 1360 "unify_gen.m"
                      ll_backend__unify_gen__make_fields_and_argvars_7_p_0(ll_backend__unify_gen__Args_12, ll_backend__unify_gen__ArgWidths_14, ll_backend__unify_gen__Rval_110, (MR_Integer) 0, ll_backend__unify_gen__Ptag_109, &ll_backend__unify_gen__Fields_111, &ll_backend__unify_gen__ArgVars_112);
                    }
#line 1362 "unify_gen.m"
                    {
#line 1362 "unify_gen.m"
                      ll_backend__unify_gen__var_types_3_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_62, ll_backend__unify_gen__Args_12, &ll_backend__unify_gen__ArgTypes_113);
                    }
#line 1363 "unify_gen.m"
                    {
#line 1363 "unify_gen.m"
                      ll_backend__unify_gen__generate_unify_args_7_p_0(ll_backend__unify_gen__Fields_111, ll_backend__unify_gen__ArgVars_112, ll_backend__unify_gen__Modes_13, ll_backend__unify_gen__ArgTypes_113, ll_backend__unify_gen__Code_16, ll_backend__unify_gen__STATE_VARIABLE_CI_0_62, ll_backend__unify_gen__STATE_VARIABLE_CI_63);
#line 1363 "unify_gen.m"
                      return;
                    }
#line 1358 "unify_gen.m"
                  }
#line 1284 "unify_gen.m"
                else
#line 1284 "unify_gen.m"
                  if (((((MR_tag((MR_Word) ll_backend__unify_gen__Tag_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Tag_15, (MR_Integer) 0)))) == (MR_Integer) 16))))
#line 1368 "unify_gen.m"
                    {
#line 1368 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__ThisTag_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Tag_15, (MR_Integer) 2)));
#line 1368 "unify_gen.m"
                      MR_Word ll_backend__unify_gen___RAs_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Tag_15, (MR_Integer) 1)));

#line 1369 "unify_gen.m"
                      /* direct tailcall eliminated */
#line 1369 "unify_gen.m"
                      {
#line 1369 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__Tag__tmp_copy_15 = ll_backend__unify_gen__ThisTag_61;

#line 1369 "unify_gen.m"
                        ll_backend__unify_gen__Tag_15 = ll_backend__unify_gen__Tag__tmp_copy_15;
#line 1369 "unify_gen.m"
                      }
#line 1369 "unify_gen.m"
                      continue;
#line 1368 "unify_gen.m"
                    }
#line 1284 "unify_gen.m"
                  else
#line 1284 "unify_gen.m"
                    if (((((MR_tag((MR_Word) ll_backend__unify_gen__Tag_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Tag_15, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 1296 "unify_gen.m"
                      {
#line 1297 "unify_gen.m"
                        {
#line 1297 "unify_gen.m"
                          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_det_deconstruction_2\'/9", (MR_String) "table_io_decl_tag");
#line 1297 "unify_gen.m"
                          return;
                        }
#line 1296 "unify_gen.m"
                      }
#line 1284 "unify_gen.m"
                    else
#line 1284 "unify_gen.m"
                      if (((((MR_tag((MR_Word) ll_backend__unify_gen__Tag_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Tag_15, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1287 "unify_gen.m"
                        {
#line 1288 "unify_gen.m"
                          {
#line 1288 "unify_gen.m"
                            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_det_deconstruction_2\'/9", (MR_String) "type_info_const_tag");
#line 1288 "unify_gen.m"
                            return;
                          }
#line 1287 "unify_gen.m"
                        }
#line 1284 "unify_gen.m"
                      else
#line 1284 "unify_gen.m"
                        if (((((MR_tag((MR_Word) ll_backend__unify_gen__Tag_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Tag_15, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1290 "unify_gen.m"
                          {
#line 1291 "unify_gen.m"
                            {
#line 1291 "unify_gen.m"
                              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_det_deconstruction_2\'/9", (MR_String) "typeclass_info_const_tag");
#line 1291 "unify_gen.m"
                              return;
                            }
#line 1290 "unify_gen.m"
                          }
#line 1284 "unify_gen.m"
                        else
#line 1284 "unify_gen.m"
                          if (((((MR_tag((MR_Word) ll_backend__unify_gen__Tag_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Tag_15, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 1338 "unify_gen.m"
                            {
#line 1338 "unify_gen.m"
                              MR_Integer ll_backend__unify_gen__Ptag_52 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Tag_15, (MR_Integer) 1)));
#line 1338 "unify_gen.m"
                              MR_Word ll_backend__unify_gen__Rval_53;
#line 1338 "unify_gen.m"
                              MR_Word ll_backend__unify_gen__Fields_54;
#line 1338 "unify_gen.m"
                              MR_Word ll_backend__unify_gen__ArgVars_55;
#line 1338 "unify_gen.m"
                              MR_Word ll_backend__unify_gen__ArgTypes_56;

#line 1339 "unify_gen.m"
                              {
#line 1339 "unify_gen.m"
                                ll_backend__unify_gen__Rval_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1339 "unify_gen.m"
                                MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Rval_53, 0) = ((MR_Box) (ll_backend__unify_gen__Var_10));
#line 1339 "unify_gen.m"
                              }
#line 1340 "unify_gen.m"
                              {
#line 1340 "unify_gen.m"
                                ll_backend__unify_gen__make_fields_and_argvars_7_p_0(ll_backend__unify_gen__Args_12, ll_backend__unify_gen__ArgWidths_14, ll_backend__unify_gen__Rval_53, (MR_Integer) -1, ll_backend__unify_gen__Ptag_52, &ll_backend__unify_gen__Fields_54, &ll_backend__unify_gen__ArgVars_55);
                              }
#line 1342 "unify_gen.m"
                              {
#line 1342 "unify_gen.m"
                                ll_backend__unify_gen__var_types_3_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_62, ll_backend__unify_gen__Args_12, &ll_backend__unify_gen__ArgTypes_56);
                              }
#line 1343 "unify_gen.m"
                              {
#line 1343 "unify_gen.m"
                                ll_backend__unify_gen__generate_unify_args_7_p_0(ll_backend__unify_gen__Fields_54, ll_backend__unify_gen__ArgVars_55, ll_backend__unify_gen__Modes_13, ll_backend__unify_gen__ArgTypes_56, ll_backend__unify_gen__Code_16, ll_backend__unify_gen__STATE_VARIABLE_CI_0_62, ll_backend__unify_gen__STATE_VARIABLE_CI_63);
#line 1343 "unify_gen.m"
                                return;
                              }
#line 1338 "unify_gen.m"
                            }
#line 1284 "unify_gen.m"
                          else
#line 1284 "unify_gen.m"
                            {
#line 1285 "unify_gen.m"
                              {
#line 1285 "unify_gen.m"
                                *ll_backend__unify_gen__Code_16 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                              }
#line 1285 "unify_gen.m"
                              *ll_backend__unify_gen__STATE_VARIABLE_CI_63 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_62;
#line 1284 "unify_gen.m"
                            }
#line 1284 "unify_gen.m"
      }
#line 1284 "unify_gen.m"
      break;
#line 1284 "unify_gen.m"
    }
#line 1264 "unify_gen.m"
}

#line 706 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_p_0(
#line 706 "unify_gen.m"
  MR_Word ll_backend__unify_gen__PredId_10,
#line 706 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__ProcId_11,
#line 706 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Var_13,
#line 706 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Args_14,
#line 706 "unify_gen.m"
  MR_Word ll_backend__unify_gen__GoalInfo_15,
#line 706 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_16,
#line 706 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_96,
#line 706 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_97)
#line 706 "unify_gen.m"
{
#line 710 "unify_gen.m"
  {
#line 710 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 710 "unify_gen.m"
    MR_Word ll_backend__unify_gen__ModuleInfo_18;
#line 710 "unify_gen.m"
    MR_Word ll_backend__unify_gen__Preds_19;
#line 710 "unify_gen.m"
    MR_Word ll_backend__unify_gen__PredInfo_20;
#line 710 "unify_gen.m"
    MR_Word ll_backend__unify_gen__Procs_21;
#line 710 "unify_gen.m"
    MR_Word ll_backend__unify_gen__ProcInfo_22;
#line 710 "unify_gen.m"
    MR_Word ll_backend__unify_gen__ProcInfoGoal_23;
#line 710 "unify_gen.m"
    MR_Word ll_backend__unify_gen__CodeModel_24;
#line 710 "unify_gen.m"
    MR_Word ll_backend__unify_gen__ProcHeadVars_25;
#line 713 "unify_gen.m"
    MR_Box ll_backend__unify_gen__conv0_PredInfo_20;
#line 715 "unify_gen.m"
    MR_Box ll_backend__unify_gen__conv1_ProcInfo_22;
#line 853 "unify_gen.m"
    MR_Word ll_backend__unify_gen__CallPred_26;
#line 853 "unify_gen.m"
    MR_Word ll_backend__unify_gen__CallArgs_27;
#line 745 "unify_gen.m"
    MR_Word ll_backend__unify_gen__TypeInfo_282_282;
#line 745 "unify_gen.m"
    MR_Word ll_backend__unify_gen__TypeInfo_283_283;
#line 745 "unify_gen.m"
    MR_Word ll_backend__unify_gen__ProcPred_28;
#line 745 "unify_gen.m"
    MR_Word ll_backend__unify_gen__ProcArgs_29;
#line 745 "unify_gen.m"
    MR_Word ll_backend__unify_gen__CallDeterminism_35;
#line 745 "unify_gen.m"
    MR_Word ll_backend__unify_gen__CallCodeModel_37;
#line 745 "unify_gen.m"
    MR_Word ll_backend__unify_gen__Globals_38;
#line 745 "unify_gen.m"
    MR_Word ll_backend__unify_gen__Deep_39;
#line 745 "unify_gen.m"
    MR_Word ll_backend__unify_gen__UseFloatRegs_40;
#line 745 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_98_98;
#line 745 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_99_99;
#line 745 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_100_100;
#line 745 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_101_101;
#line 745 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_280_280;
#line 745 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_281_281;
#line 748 "unify_gen.m"
    MR_Word ll_backend__unify_gen___GoalInfo_36;
#line 748 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_33_33;
#line 748 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_34_34;
#line 748 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_30_30;
#line 748 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_31_31;
#line 748 "unify_gen.m"
    MR_Integer ll_backend__unify_gen__V_32_32;

#line 711 "unify_gen.m"
    {
#line 711 "unify_gen.m"
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_96, &ll_backend__unify_gen__ModuleInfo_18);
    }
#line 712 "unify_gen.m"
    {
#line 712 "unify_gen.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(ll_backend__unify_gen__ModuleInfo_18, &ll_backend__unify_gen__Preds_19);
    }
#line 713 "unify_gen.m"
    {
#line 713 "unify_gen.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, ll_backend__unify_gen__Preds_19, ((MR_Box) (ll_backend__unify_gen__PredId_10)), &ll_backend__unify_gen__conv0_PredInfo_20);
    }
#line 713 "unify_gen.m"
    ll_backend__unify_gen__PredInfo_20 = ((MR_Word) ll_backend__unify_gen__conv0_PredInfo_20);
#line 714 "unify_gen.m"
    {
#line 714 "unify_gen.m"
      hlds__hlds_pred__pred_info_get_procedures_2_p_0(ll_backend__unify_gen__PredInfo_20, &ll_backend__unify_gen__Procs_21);
    }
#line 715 "unify_gen.m"
    {
#line 715 "unify_gen.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, ll_backend__unify_gen__Procs_21, ((MR_Box) (ll_backend__unify_gen__ProcId_11)), &ll_backend__unify_gen__conv1_ProcInfo_22);
    }
#line 715 "unify_gen.m"
    ll_backend__unify_gen__ProcInfo_22 = ((MR_Word) ll_backend__unify_gen__conv1_ProcInfo_22);
#line 741 "unify_gen.m"
    {
#line 741 "unify_gen.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(ll_backend__unify_gen__ProcInfo_22, &ll_backend__unify_gen__ProcInfoGoal_23);
    }
#line 742 "unify_gen.m"
    {
#line 742 "unify_gen.m"
      ll_backend__unify_gen__CodeModel_24 = hlds__code_model__proc_info_interface_code_model_1_f_0(ll_backend__unify_gen__ProcInfo_22);
    }
#line 743 "unify_gen.m"
    {
#line 743 "unify_gen.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ll_backend__unify_gen__ProcInfo_22, &ll_backend__unify_gen__ProcHeadVars_25);
    }
#line 746 "unify_gen.m"
    ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__Args_14)) == (MR_mktag((MR_Integer) 1)));
#line 746 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 746 "unify_gen.m"
      {
#line 746 "unify_gen.m"
        ll_backend__unify_gen__CallPred_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Args_14, (MR_Integer) 0)));
#line 746 "unify_gen.m"
        ll_backend__unify_gen__CallArgs_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Args_14, (MR_Integer) 1)));
#line 747 "unify_gen.m"
        ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__ProcHeadVars_25)) == (MR_mktag((MR_Integer) 1)));
#line 747 "unify_gen.m"
        if (ll_backend__unify_gen__succeeded)
#line 747 "unify_gen.m"
          {
#line 747 "unify_gen.m"
            ll_backend__unify_gen__ProcPred_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ProcHeadVars_25, (MR_Integer) 0)));
#line 747 "unify_gen.m"
            ll_backend__unify_gen__ProcArgs_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ProcHeadVars_25, (MR_Integer) 1)));
#line 748 "unify_gen.m"
            ll_backend__unify_gen__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ProcInfoGoal_23, (MR_Integer) 0)));
#line 748 "unify_gen.m"
            ll_backend__unify_gen___GoalInfo_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ProcInfoGoal_23, (MR_Integer) 1)));
#line 748 "unify_gen.m"
            ll_backend__unify_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__unify_gen__V_98_98)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_98_98, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 748 "unify_gen.m"
            if (ll_backend__unify_gen__succeeded)
#line 748 "unify_gen.m"
              {
#line 748 "unify_gen.m"
                ll_backend__unify_gen__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_98_98, (MR_Integer) 1)));
#line 748 "unify_gen.m"
                ll_backend__unify_gen__V_280_280 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_98_98, (MR_Integer) 2)));
#line 748 "unify_gen.m"
                ll_backend__unify_gen__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_98_98, (MR_Integer) 3)));
#line 748 "unify_gen.m"
                ll_backend__unify_gen__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_98_98, (MR_Integer) 4)));
#line 748 "unify_gen.m"
                ll_backend__unify_gen__CallDeterminism_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_98_98, (MR_Integer) 5)));
#line 4407 "ll_backend.unify_gen.c"
                ll_backend__unify_gen__TypeInfo_282_282 = (MR_Word) &ll_backend__unify_gen_scalar_common_1[1];
#line 748 "unify_gen.m"
                {
#line 748 "unify_gen.m"
                  ll_backend__unify_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__unify_gen__TypeInfo_282_282, ((MR_Box) (ll_backend__unify_gen__ProcArgs_29)), ((MR_Box) (ll_backend__unify_gen__V_280_280)));
                }
#line 745 "unify_gen.m"
                if (ll_backend__unify_gen__succeeded)
#line 745 "unify_gen.m"
                  {
#line 748 "unify_gen.m"
                    ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__V_99_99)) == (MR_mktag((MR_Integer) 0)));
#line 748 "unify_gen.m"
                    if (ll_backend__unify_gen__succeeded)
#line 748 "unify_gen.m"
                      {
#line 748 "unify_gen.m"
                        ll_backend__unify_gen__V_281_281 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_99_99, (MR_Integer) 0)));
#line 748 "unify_gen.m"
                        ll_backend__unify_gen__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_99_99, (MR_Integer) 1)));
#line 748 "unify_gen.m"
                        ll_backend__unify_gen__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_99_99, (MR_Integer) 2)));
#line 748 "unify_gen.m"
                        ll_backend__unify_gen__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_99_99, (MR_Integer) 3)));
#line 4432 "ll_backend.unify_gen.c"
                        ll_backend__unify_gen__TypeInfo_283_283 = (MR_Word) &ll_backend__unify_gen_scalar_common_1[0];
#line 748 "unify_gen.m"
                        {
#line 748 "unify_gen.m"
                          ll_backend__unify_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__unify_gen__TypeInfo_283_283, ((MR_Box) (ll_backend__unify_gen__ProcPred_28)), ((MR_Box) (ll_backend__unify_gen__V_281_281)));
                        }
#line 745 "unify_gen.m"
                        if (ll_backend__unify_gen__succeeded)
#line 745 "unify_gen.m"
                          {
#line 750 "unify_gen.m"
                            {
#line 750 "unify_gen.m"
                              hlds__code_model__determinism_to_code_model_2_p_0(ll_backend__unify_gen__CallDeterminism_35, &ll_backend__unify_gen__CallCodeModel_37);
                            }
#line 756 "unify_gen.m"
                            ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__CodeModel_24 == ll_backend__unify_gen__CallCodeModel_37);
#line 757 "unify_gen.m"
                            if (!(ll_backend__unify_gen__succeeded))
#line 758 "unify_gen.m"
                              {
#line 758 "unify_gen.m"
                                ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__CodeModel_24 == (MR_Integer) 2);
#line 758 "unify_gen.m"
                                if (ll_backend__unify_gen__succeeded)
#line 759 "unify_gen.m"
                                  ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__CallCodeModel_37 == (MR_Integer) 0);
#line 758 "unify_gen.m"
                              }
#line 745 "unify_gen.m"
                            if (ll_backend__unify_gen__succeeded)
#line 745 "unify_gen.m"
                              {
#line 763 "unify_gen.m"
                                {
#line 763 "unify_gen.m"
                                  hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__unify_gen__ModuleInfo_18, &ll_backend__unify_gen__Globals_38);
                                }
#line 764 "unify_gen.m"
                                ll_backend__unify_gen__V_100_100 = (MR_Integer) 191;
#line 764 "unify_gen.m"
                                {
#line 764 "unify_gen.m"
                                  libs__globals__lookup_bool_option_3_p_0(ll_backend__unify_gen__Globals_38, ll_backend__unify_gen__V_100_100, &ll_backend__unify_gen__Deep_39);
                                }
#line 765 "unify_gen.m"
                                ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__Deep_39 == (MR_Integer) 0);
#line 745 "unify_gen.m"
                                if (ll_backend__unify_gen__succeeded)
#line 745 "unify_gen.m"
                                  {
#line 769 "unify_gen.m"
                                    ll_backend__unify_gen__V_101_101 = (MR_Integer) 249;
#line 769 "unify_gen.m"
                                    {
#line 769 "unify_gen.m"
                                      libs__globals__lookup_bool_option_3_p_0(ll_backend__unify_gen__Globals_38, ll_backend__unify_gen__V_101_101, &ll_backend__unify_gen__UseFloatRegs_40);
                                    }
#line 770 "unify_gen.m"
                                    ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__UseFloatRegs_40 == (MR_Integer) 0);
#line 745 "unify_gen.m"
                                  }
#line 745 "unify_gen.m"
                              }
#line 745 "unify_gen.m"
                          }
#line 748 "unify_gen.m"
                      }
#line 745 "unify_gen.m"
                  }
#line 748 "unify_gen.m"
              }
#line 747 "unify_gen.m"
          }
#line 746 "unify_gen.m"
      }
#line 853 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 777 "unify_gen.m"
      if ((ll_backend__unify_gen__CallArgs_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 773 "unify_gen.m"
        {
#line 775 "unify_gen.m"
          {
#line 775 "unify_gen.m"
            ll_backend__code_info__assign_var_to_var_4_p_0(ll_backend__unify_gen__Var_13, ll_backend__unify_gen__CallPred_26, ll_backend__unify_gen__STATE_VARIABLE_CI_0_96, ll_backend__unify_gen__STATE_VARIABLE_CI_97);
          }
#line 776 "unify_gen.m"
          {
#line 776 "unify_gen.m"
            *ll_backend__unify_gen__Code_16 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
          }
#line 773 "unify_gen.m"
        }
#line 777 "unify_gen.m"
      else
#line 778 "unify_gen.m"
        {
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__TypeCtorInfo_278_278;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__LoopStart_43;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__LoopTest_44;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__LoopCounter_45;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__NumOldArgs_46;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__NewClosure_47;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__Zero_48;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__One_49;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__Two_50;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__Three_51;
#line 778 "unify_gen.m"
          MR_Integer ll_backend__unify_gen__NumNewArgs_52;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__NumNewArgs_Rval_53;
#line 778 "unify_gen.m"
          MR_Integer ll_backend__unify_gen__NumNewArgsPlusThree_54;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__NumNewArgsPlusThree_Rval_55;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__OldClosureCode_56;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__OldClosure_57;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__Context_58;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__MaybeAllocId_59;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__NewClosureCode_61;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__ExtraArgsCode_62;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__AssignCode_63;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_102_102;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_103_103;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_105_105;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_107_107;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_109_109;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_118_118;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_120_120;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_121_121;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_123_123;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_124_124;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_129_129;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_130_130;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_131_131;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_132_132;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_133_133;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_134_134;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_137_137;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_138_138;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_139_139;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_142_142;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_144_144;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_148_148;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_149_149;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_150_150;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_151_151;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_154_154;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_155_155;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_156_156;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_160_160;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_161_161;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_162_162;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_163_163;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_167_167;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_168_168;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_172_172;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_173_173;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_174_174;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_175_175;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_179_179;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_183_183;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_184_184;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_185_185;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_186_186;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_190_190;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_191_191;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_192_192;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_194_194;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_195_195;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_196_196;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_197_197;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_199_199;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_200_200;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_201_201;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_203_203;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_204_204;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_205_205;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_206_206;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_210_210;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_211_211;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_212_212;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_217_217;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_218_218;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_219_219;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_220_220;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_224_224;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_225_225;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_226_226;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_228_228;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_229_229;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_230_230;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_231_231;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_235_235;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_238_238;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_239_239;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_240_240;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_241_241;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_243_243;
#line 778 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_244_244;

#line 779 "unify_gen.m"
          {
#line 779 "unify_gen.m"
            ll_backend__code_info__get_next_label_3_p_0(&ll_backend__unify_gen__LoopStart_43, ll_backend__unify_gen__STATE_VARIABLE_CI_0_96, &ll_backend__unify_gen__STATE_VARIABLE_CI_102_102);
          }
#line 780 "unify_gen.m"
          {
#line 780 "unify_gen.m"
            ll_backend__code_info__get_next_label_3_p_0(&ll_backend__unify_gen__LoopTest_44, ll_backend__unify_gen__STATE_VARIABLE_CI_102_102, &ll_backend__unify_gen__STATE_VARIABLE_CI_103_103);
          }
#line 781 "unify_gen.m"
          {
#line 781 "unify_gen.m"
            ll_backend__code_info__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__unify_gen__LoopCounter_45, ll_backend__unify_gen__STATE_VARIABLE_CI_103_103, &ll_backend__unify_gen__STATE_VARIABLE_CI_105_105);
          }
#line 782 "unify_gen.m"
          {
#line 782 "unify_gen.m"
            ll_backend__code_info__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__unify_gen__NumOldArgs_46, ll_backend__unify_gen__STATE_VARIABLE_CI_105_105, &ll_backend__unify_gen__STATE_VARIABLE_CI_107_107);
          }
#line 783 "unify_gen.m"
          {
#line 783 "unify_gen.m"
            ll_backend__code_info__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__unify_gen__NewClosure_47, ll_backend__unify_gen__STATE_VARIABLE_CI_107_107, &ll_backend__unify_gen__STATE_VARIABLE_CI_109_109);
          }
#line 784 "unify_gen.m"
          ll_backend__unify_gen__Zero_48 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[8]);
#line 785 "unify_gen.m"
          ll_backend__unify_gen__One_49 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[9]);
#line 786 "unify_gen.m"
          ll_backend__unify_gen__Two_50 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[10]);
#line 787 "unify_gen.m"
          ll_backend__unify_gen__Three_51 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[11]);
#line 788 "unify_gen.m"
          {
#line 788 "unify_gen.m"
            mercury__list__length_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], ll_backend__unify_gen__CallArgs_27, &ll_backend__unify_gen__NumNewArgs_52);
          }
#line 789 "unify_gen.m"
          {
#line 789 "unify_gen.m"
            ll_backend__unify_gen__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 789 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_118_118, 0) = ((MR_Box) (ll_backend__unify_gen__NumNewArgs_52));
#line 789 "unify_gen.m"
          }
#line 789 "unify_gen.m"
          {
#line 789 "unify_gen.m"
            ll_backend__unify_gen__NumNewArgs_Rval_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 789 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__NumNewArgs_Rval_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 789 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__NumNewArgs_Rval_53, 1) = ((MR_Box) (ll_backend__unify_gen__V_118_118));
#line 789 "unify_gen.m"
          }
#line 790 "unify_gen.m"
          ll_backend__unify_gen__NumNewArgsPlusThree_54 = (ll_backend__unify_gen__NumNewArgs_52 + (MR_Integer) 3);
#line 791 "unify_gen.m"
          {
#line 791 "unify_gen.m"
            ll_backend__unify_gen__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 791 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_120_120, 0) = ((MR_Box) (ll_backend__unify_gen__NumNewArgsPlusThree_54));
#line 791 "unify_gen.m"
          }
#line 791 "unify_gen.m"
          {
#line 791 "unify_gen.m"
            ll_backend__unify_gen__NumNewArgsPlusThree_Rval_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 791 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__NumNewArgsPlusThree_Rval_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 791 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__NumNewArgsPlusThree_Rval_55, 1) = ((MR_Box) (ll_backend__unify_gen__V_120_120));
#line 791 "unify_gen.m"
          }
#line 792 "unify_gen.m"
          {
#line 792 "unify_gen.m"
            ll_backend__code_info__produce_variable_5_p_0(ll_backend__unify_gen__CallPred_26, &ll_backend__unify_gen__OldClosureCode_56, &ll_backend__unify_gen__OldClosure_57, ll_backend__unify_gen__STATE_VARIABLE_CI_109_109, &ll_backend__unify_gen__STATE_VARIABLE_CI_121_121);
          }
#line 793 "unify_gen.m"
          {
#line 793 "unify_gen.m"
            ll_backend__unify_gen__Context_58 = hlds__hlds_goal__goal_info_get_context_1_f_0(ll_backend__unify_gen__GoalInfo_15);
          }
#line 794 "unify_gen.m"
          {
#line 794 "unify_gen.m"
            ll_backend__unify_gen__maybe_add_alloc_site_info_6_p_0(ll_backend__unify_gen__Context_58, (MR_String) "closure", ll_backend__unify_gen__NumNewArgsPlusThree_54, &ll_backend__unify_gen__MaybeAllocId_59, ll_backend__unify_gen__STATE_VARIABLE_CI_121_121, &ll_backend__unify_gen__STATE_VARIABLE_CI_123_123);
          }
#line 4821 "ll_backend.unify_gen.c"
          ll_backend__unify_gen__TypeCtorInfo_278_278 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 801 "unify_gen.m"
          ll_backend__unify_gen__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__unify_gen_scalar_common_6[0]);
#line 801 "unify_gen.m"
          {
#line 801 "unify_gen.m"
            ll_backend__unify_gen__V_133_133 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 801 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_133_133, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 801 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_133_133, 1) = ((MR_Box) (ll_backend__unify_gen__V_134_134));
#line 801 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_133_133, 2) = ((MR_Box) (ll_backend__unify_gen__OldClosure_57));
#line 801 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_133_133, 3) = ((MR_Box) (ll_backend__unify_gen__Two_50));
#line 801 "unify_gen.m"
          }
#line 801 "unify_gen.m"
          {
#line 801 "unify_gen.m"
            ll_backend__unify_gen__V_132_132 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 801 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_132_132, 0) = ((MR_Box) (ll_backend__unify_gen__V_133_133));
#line 801 "unify_gen.m"
          }
#line 800 "unify_gen.m"
          {
#line 800 "unify_gen.m"
            ll_backend__unify_gen__V_131_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 800 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_131_131, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 800 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_131_131, 1) = ((MR_Box) (ll_backend__unify_gen__NumOldArgs_46));
#line 800 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_131_131, 2) = ((MR_Box) (ll_backend__unify_gen__V_132_132));
#line 800 "unify_gen.m"
          }
#line 802 "unify_gen.m"
          {
#line 802 "unify_gen.m"
            ll_backend__unify_gen__V_130_130 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 802 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_130_130, 0) = ((MR_Box) (ll_backend__unify_gen__V_131_131));
#line 802 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_130_130, 1) = ((MR_Box) ((MR_String) "get number of arguments"));
#line 802 "unify_gen.m"
          }
#line 804 "unify_gen.m"
          {
#line 804 "unify_gen.m"
            ll_backend__unify_gen__V_144_144 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 804 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_144_144, 0) = ((MR_Box) (ll_backend__unify_gen__NumOldArgs_46));
#line 804 "unify_gen.m"
          }
#line 803 "unify_gen.m"
          {
#line 803 "unify_gen.m"
            ll_backend__unify_gen__V_142_142 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 803 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_142_142, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 803 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_142_142, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 803 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_142_142, 2) = ((MR_Box) (ll_backend__unify_gen__V_144_144));
#line 803 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_142_142, 3) = ((MR_Box) (ll_backend__unify_gen__NumNewArgsPlusThree_Rval_55));
#line 803 "unify_gen.m"
          }
#line 803 "unify_gen.m"
          {
#line 803 "unify_gen.m"
            ll_backend__unify_gen__V_139_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL));
#line 803 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_139_139, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 803 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_139_139, 1) = ((MR_Box) (ll_backend__unify_gen__NewClosure_47));
#line 803 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_139_139, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 803 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_139_139, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 803 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_139_139, 4) = ((MR_Box) (ll_backend__unify_gen__V_142_142));
#line 803 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_139_139, 5) = ((MR_Box) (ll_backend__unify_gen__MaybeAllocId_59));
#line 803 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_139_139, 6) = ((MR_Box) ((MR_Integer) 1));
#line 803 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_139_139, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 803 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_139_139, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 803 "unify_gen.m"
          }
#line 806 "unify_gen.m"
          {
#line 806 "unify_gen.m"
            ll_backend__unify_gen__V_138_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 806 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_138_138, 0) = ((MR_Box) (ll_backend__unify_gen__V_139_139));
#line 806 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_138_138, 1) = ((MR_Box) ((MR_String) "allocate new closure"));
#line 806 "unify_gen.m"
          }
#line 807 "unify_gen.m"
          {
#line 807 "unify_gen.m"
            ll_backend__unify_gen__V_154_154 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 807 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_154_154, 0) = ((MR_Box) (ll_backend__unify_gen__NewClosure_47));
#line 807 "unify_gen.m"
          }
#line 807 "unify_gen.m"
          {
#line 807 "unify_gen.m"
            ll_backend__unify_gen__V_151_151 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 807 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_151_151, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 807 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_151_151, 1) = ((MR_Box) (ll_backend__unify_gen__V_134_134));
#line 807 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_151_151, 2) = ((MR_Box) (ll_backend__unify_gen__V_154_154));
#line 807 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_151_151, 3) = ((MR_Box) (ll_backend__unify_gen__Zero_48));
#line 807 "unify_gen.m"
          }
#line 808 "unify_gen.m"
          {
#line 808 "unify_gen.m"
            ll_backend__unify_gen__V_156_156 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 808 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_156_156, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 808 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_156_156, 1) = ((MR_Box) (ll_backend__unify_gen__V_134_134));
#line 808 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_156_156, 2) = ((MR_Box) (ll_backend__unify_gen__OldClosure_57));
#line 808 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_156_156, 3) = ((MR_Box) (ll_backend__unify_gen__Zero_48));
#line 808 "unify_gen.m"
          }
#line 807 "unify_gen.m"
          {
#line 807 "unify_gen.m"
            ll_backend__unify_gen__V_155_155 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 807 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_155_155, 0) = ((MR_Box) (ll_backend__unify_gen__V_156_156));
#line 807 "unify_gen.m"
          }
#line 807 "unify_gen.m"
          {
#line 807 "unify_gen.m"
            ll_backend__unify_gen__V_150_150 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 807 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_150_150, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 807 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_150_150, 1) = ((MR_Box) (ll_backend__unify_gen__V_151_151));
#line 807 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_150_150, 2) = ((MR_Box) (ll_backend__unify_gen__V_155_155));
#line 807 "unify_gen.m"
          }
#line 809 "unify_gen.m"
          {
#line 809 "unify_gen.m"
            ll_backend__unify_gen__V_149_149 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 809 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_149_149, 0) = ((MR_Box) (ll_backend__unify_gen__V_150_150));
#line 809 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_149_149, 1) = ((MR_Box) ((MR_String) "set closure layout structure"));
#line 809 "unify_gen.m"
          }
#line 810 "unify_gen.m"
          {
#line 810 "unify_gen.m"
            ll_backend__unify_gen__V_163_163 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 810 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_163_163, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 810 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_163_163, 1) = ((MR_Box) (ll_backend__unify_gen__V_134_134));
#line 810 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_163_163, 2) = ((MR_Box) (ll_backend__unify_gen__V_154_154));
#line 810 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_163_163, 3) = ((MR_Box) (ll_backend__unify_gen__One_49));
#line 810 "unify_gen.m"
          }
#line 811 "unify_gen.m"
          {
#line 811 "unify_gen.m"
            ll_backend__unify_gen__V_168_168 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 811 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_168_168, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 811 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_168_168, 1) = ((MR_Box) (ll_backend__unify_gen__V_134_134));
#line 811 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_168_168, 2) = ((MR_Box) (ll_backend__unify_gen__OldClosure_57));
#line 811 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_168_168, 3) = ((MR_Box) (ll_backend__unify_gen__One_49));
#line 811 "unify_gen.m"
          }
#line 810 "unify_gen.m"
          {
#line 810 "unify_gen.m"
            ll_backend__unify_gen__V_167_167 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 810 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_167_167, 0) = ((MR_Box) (ll_backend__unify_gen__V_168_168));
#line 810 "unify_gen.m"
          }
#line 810 "unify_gen.m"
          {
#line 810 "unify_gen.m"
            ll_backend__unify_gen__V_162_162 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 810 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_162_162, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 810 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_162_162, 1) = ((MR_Box) (ll_backend__unify_gen__V_163_163));
#line 810 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_162_162, 2) = ((MR_Box) (ll_backend__unify_gen__V_167_167));
#line 810 "unify_gen.m"
          }
#line 812 "unify_gen.m"
          {
#line 812 "unify_gen.m"
            ll_backend__unify_gen__V_161_161 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 812 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_161_161, 0) = ((MR_Box) (ll_backend__unify_gen__V_162_162));
#line 812 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_161_161, 1) = ((MR_Box) ((MR_String) "set closure code pointer"));
#line 812 "unify_gen.m"
          }
#line 813 "unify_gen.m"
          {
#line 813 "unify_gen.m"
            ll_backend__unify_gen__V_175_175 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 813 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_175_175, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 813 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_175_175, 1) = ((MR_Box) (ll_backend__unify_gen__V_134_134));
#line 813 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_175_175, 2) = ((MR_Box) (ll_backend__unify_gen__V_154_154));
#line 813 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_175_175, 3) = ((MR_Box) (ll_backend__unify_gen__Two_50));
#line 813 "unify_gen.m"
          }
#line 813 "unify_gen.m"
          {
#line 813 "unify_gen.m"
            ll_backend__unify_gen__V_179_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 813 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_179_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 813 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_179_179, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 813 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_179_179, 2) = ((MR_Box) (ll_backend__unify_gen__V_144_144));
#line 813 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_179_179, 3) = ((MR_Box) (ll_backend__unify_gen__NumNewArgs_Rval_53));
#line 813 "unify_gen.m"
          }
#line 813 "unify_gen.m"
          {
#line 813 "unify_gen.m"
            ll_backend__unify_gen__V_174_174 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 813 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_174_174, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 813 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_174_174, 1) = ((MR_Box) (ll_backend__unify_gen__V_175_175));
#line 813 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_174_174, 2) = ((MR_Box) (ll_backend__unify_gen__V_179_179));
#line 813 "unify_gen.m"
          }
#line 815 "unify_gen.m"
          {
#line 815 "unify_gen.m"
            ll_backend__unify_gen__V_173_173 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 815 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_173_173, 0) = ((MR_Box) (ll_backend__unify_gen__V_174_174));
#line 815 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_173_173, 1) = ((MR_Box) ((MR_String) "set new number of arguments"));
#line 815 "unify_gen.m"
          }
#line 817 "unify_gen.m"
          {
#line 817 "unify_gen.m"
            ll_backend__unify_gen__V_186_186 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 817 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_186_186, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 817 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_186_186, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 817 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_186_186, 2) = ((MR_Box) (ll_backend__unify_gen__V_144_144));
#line 817 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_186_186, 3) = ((MR_Box) (ll_backend__unify_gen__Three_51));
#line 817 "unify_gen.m"
          }
#line 816 "unify_gen.m"
          {
#line 816 "unify_gen.m"
            ll_backend__unify_gen__V_185_185 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 816 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_185_185, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 816 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_185_185, 1) = ((MR_Box) (ll_backend__unify_gen__NumOldArgs_46));
#line 816 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_185_185, 2) = ((MR_Box) (ll_backend__unify_gen__V_186_186));
#line 816 "unify_gen.m"
          }
#line 819 "unify_gen.m"
          {
#line 819 "unify_gen.m"
            ll_backend__unify_gen__V_184_184 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 819 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_184_184, 0) = ((MR_Box) (ll_backend__unify_gen__V_185_185));
#line 819 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_184_184, 1) = ((MR_Box) ((MR_String) "set up loop limit"));
#line 819 "unify_gen.m"
          }
#line 820 "unify_gen.m"
          {
#line 820 "unify_gen.m"
            ll_backend__unify_gen__V_192_192 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 820 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_192_192, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 820 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_192_192, 1) = ((MR_Box) (ll_backend__unify_gen__LoopCounter_45));
#line 820 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_192_192, 2) = ((MR_Box) (ll_backend__unify_gen__Three_51));
#line 820 "unify_gen.m"
          }
#line 821 "unify_gen.m"
          {
#line 821 "unify_gen.m"
            ll_backend__unify_gen__V_191_191 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 821 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_191_191, 0) = ((MR_Box) (ll_backend__unify_gen__V_192_192));
#line 821 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_191_191, 1) = ((MR_Box) ((MR_String) "initialize loop counter"));
#line 821 "unify_gen.m"
          }
#line 825 "unify_gen.m"
          {
#line 825 "unify_gen.m"
            ll_backend__unify_gen__V_197_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 825 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_197_197, 0) = ((MR_Box) (ll_backend__unify_gen__LoopTest_44));
#line 825 "unify_gen.m"
          }
#line 825 "unify_gen.m"
          {
#line 825 "unify_gen.m"
            ll_backend__unify_gen__V_196_196 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 825 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_196_196, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 825 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_196_196, 1) = ((MR_Box) (ll_backend__unify_gen__V_197_197));
#line 825 "unify_gen.m"
          }
#line 826 "unify_gen.m"
          {
#line 826 "unify_gen.m"
            ll_backend__unify_gen__V_195_195 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 826 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_195_195, 0) = ((MR_Box) (ll_backend__unify_gen__V_196_196));
#line 826 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_195_195, 1) = ((MR_Box) ((MR_String) "enter the copy loop at the conceptual top"));
#line 826 "unify_gen.m"
          }
#line 827 "unify_gen.m"
          {
#line 827 "unify_gen.m"
            ll_backend__unify_gen__V_201_201 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 827 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_201_201, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 827 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_201_201, 1) = ((MR_Box) (ll_backend__unify_gen__LoopStart_43));
#line 827 "unify_gen.m"
          }
#line 828 "unify_gen.m"
          {
#line 828 "unify_gen.m"
            ll_backend__unify_gen__V_200_200 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 828 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_200_200, 0) = ((MR_Box) (ll_backend__unify_gen__V_201_201));
#line 828 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_200_200, 1) = ((MR_Box) ((MR_String) "start of loop, nofulljump"));
#line 828 "unify_gen.m"
          }
#line 830 "unify_gen.m"
          {
#line 830 "unify_gen.m"
            ll_backend__unify_gen__V_210_210 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 830 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_210_210, 0) = ((MR_Box) (ll_backend__unify_gen__LoopCounter_45));
#line 830 "unify_gen.m"
          }
#line 830 "unify_gen.m"
          {
#line 830 "unify_gen.m"
            ll_backend__unify_gen__V_206_206 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 830 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_206_206, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 830 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_206_206, 1) = ((MR_Box) (ll_backend__unify_gen__V_134_134));
#line 830 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_206_206, 2) = ((MR_Box) (ll_backend__unify_gen__V_154_154));
#line 830 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_206_206, 3) = ((MR_Box) (ll_backend__unify_gen__V_210_210));
#line 830 "unify_gen.m"
          }
#line 831 "unify_gen.m"
          {
#line 831 "unify_gen.m"
            ll_backend__unify_gen__V_212_212 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 831 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_212_212, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 831 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_212_212, 1) = ((MR_Box) (ll_backend__unify_gen__V_134_134));
#line 831 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_212_212, 2) = ((MR_Box) (ll_backend__unify_gen__OldClosure_57));
#line 831 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_212_212, 3) = ((MR_Box) (ll_backend__unify_gen__V_210_210));
#line 831 "unify_gen.m"
          }
#line 830 "unify_gen.m"
          {
#line 830 "unify_gen.m"
            ll_backend__unify_gen__V_211_211 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 830 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_211_211, 0) = ((MR_Box) (ll_backend__unify_gen__V_212_212));
#line 830 "unify_gen.m"
          }
#line 829 "unify_gen.m"
          {
#line 829 "unify_gen.m"
            ll_backend__unify_gen__V_205_205 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 829 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_205_205, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 829 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_205_205, 1) = ((MR_Box) (ll_backend__unify_gen__V_206_206));
#line 829 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_205_205, 2) = ((MR_Box) (ll_backend__unify_gen__V_211_211));
#line 829 "unify_gen.m"
          }
#line 832 "unify_gen.m"
          {
#line 832 "unify_gen.m"
            ll_backend__unify_gen__V_204_204 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 832 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_204_204, 0) = ((MR_Box) (ll_backend__unify_gen__V_205_205));
#line 832 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_204_204, 1) = ((MR_Box) ((MR_String) "copy old hidden argument"));
#line 832 "unify_gen.m"
          }
#line 834 "unify_gen.m"
          {
#line 834 "unify_gen.m"
            ll_backend__unify_gen__V_220_220 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 834 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_220_220, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 834 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_220_220, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 834 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_220_220, 2) = ((MR_Box) (ll_backend__unify_gen__V_210_210));
#line 834 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_220_220, 3) = ((MR_Box) (ll_backend__unify_gen__One_49));
#line 834 "unify_gen.m"
          }
#line 833 "unify_gen.m"
          {
#line 833 "unify_gen.m"
            ll_backend__unify_gen__V_219_219 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 833 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_219_219, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 833 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_219_219, 1) = ((MR_Box) (ll_backend__unify_gen__LoopCounter_45));
#line 833 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_219_219, 2) = ((MR_Box) (ll_backend__unify_gen__V_220_220));
#line 833 "unify_gen.m"
          }
#line 836 "unify_gen.m"
          {
#line 836 "unify_gen.m"
            ll_backend__unify_gen__V_218_218 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 836 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_218_218, 0) = ((MR_Box) (ll_backend__unify_gen__V_219_219));
#line 836 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_218_218, 1) = ((MR_Box) ((MR_String) "increment loop counter"));
#line 836 "unify_gen.m"
          }
#line 837 "unify_gen.m"
          {
#line 837 "unify_gen.m"
            ll_backend__unify_gen__V_226_226 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 837 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_226_226, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 837 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_226_226, 1) = ((MR_Box) (ll_backend__unify_gen__LoopTest_44));
#line 837 "unify_gen.m"
          }
#line 838 "unify_gen.m"
          {
#line 838 "unify_gen.m"
            ll_backend__unify_gen__V_225_225 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 838 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_225_225, 0) = ((MR_Box) (ll_backend__unify_gen__V_226_226));
#line 838 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_225_225, 1) = ((MR_Box) ((MR_String) "do we have more old arguments to copy\? nofulljump"));
#line 838 "unify_gen.m"
          }
#line 840 "unify_gen.m"
          {
#line 840 "unify_gen.m"
            ll_backend__unify_gen__V_231_231 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 840 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_231_231, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 840 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_231_231, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 22))));
#line 840 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_231_231, 2) = ((MR_Box) (ll_backend__unify_gen__V_210_210));
#line 840 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_231_231, 3) = ((MR_Box) (ll_backend__unify_gen__V_144_144));
#line 840 "unify_gen.m"
          }
#line 840 "unify_gen.m"
          {
#line 840 "unify_gen.m"
            ll_backend__unify_gen__V_235_235 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 840 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_235_235, 0) = ((MR_Box) (ll_backend__unify_gen__LoopStart_43));
#line 840 "unify_gen.m"
          }
#line 839 "unify_gen.m"
          {
#line 839 "unify_gen.m"
            ll_backend__unify_gen__V_230_230 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 839 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_230_230, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 839 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_230_230, 1) = ((MR_Box) (ll_backend__unify_gen__V_231_231));
#line 839 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_230_230, 2) = ((MR_Box) (ll_backend__unify_gen__V_235_235));
#line 839 "unify_gen.m"
          }
#line 843 "unify_gen.m"
          {
#line 843 "unify_gen.m"
            ll_backend__unify_gen__V_229_229 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 843 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_229_229, 0) = ((MR_Box) (ll_backend__unify_gen__V_230_230));
#line 843 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_229_229, 1) = ((MR_Box) ((MR_String) "repeat the loop\?"));
#line 843 "unify_gen.m"
          }
#line 838 "unify_gen.m"
          {
#line 838 "unify_gen.m"
            ll_backend__unify_gen__V_228_228 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 838 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_228_228, 0) = ((MR_Box) (ll_backend__unify_gen__V_229_229));
#line 838 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_228_228, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 838 "unify_gen.m"
          }
#line 836 "unify_gen.m"
          {
#line 836 "unify_gen.m"
            ll_backend__unify_gen__V_224_224 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 836 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_224_224, 0) = ((MR_Box) (ll_backend__unify_gen__V_225_225));
#line 836 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_224_224, 1) = ((MR_Box) (ll_backend__unify_gen__V_228_228));
#line 836 "unify_gen.m"
          }
#line 832 "unify_gen.m"
          {
#line 832 "unify_gen.m"
            ll_backend__unify_gen__V_217_217 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 832 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_217_217, 0) = ((MR_Box) (ll_backend__unify_gen__V_218_218));
#line 832 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_217_217, 1) = ((MR_Box) (ll_backend__unify_gen__V_224_224));
#line 832 "unify_gen.m"
          }
#line 828 "unify_gen.m"
          {
#line 828 "unify_gen.m"
            ll_backend__unify_gen__V_203_203 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 828 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_203_203, 0) = ((MR_Box) (ll_backend__unify_gen__V_204_204));
#line 828 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_203_203, 1) = ((MR_Box) (ll_backend__unify_gen__V_217_217));
#line 828 "unify_gen.m"
          }
#line 826 "unify_gen.m"
          {
#line 826 "unify_gen.m"
            ll_backend__unify_gen__V_199_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 826 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_199_199, 0) = ((MR_Box) (ll_backend__unify_gen__V_200_200));
#line 826 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_199_199, 1) = ((MR_Box) (ll_backend__unify_gen__V_203_203));
#line 826 "unify_gen.m"
          }
#line 821 "unify_gen.m"
          {
#line 821 "unify_gen.m"
            ll_backend__unify_gen__V_194_194 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 821 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_194_194, 0) = ((MR_Box) (ll_backend__unify_gen__V_195_195));
#line 821 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_194_194, 1) = ((MR_Box) (ll_backend__unify_gen__V_199_199));
#line 821 "unify_gen.m"
          }
#line 819 "unify_gen.m"
          {
#line 819 "unify_gen.m"
            ll_backend__unify_gen__V_190_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 819 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_190_190, 0) = ((MR_Box) (ll_backend__unify_gen__V_191_191));
#line 819 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_190_190, 1) = ((MR_Box) (ll_backend__unify_gen__V_194_194));
#line 819 "unify_gen.m"
          }
#line 815 "unify_gen.m"
          {
#line 815 "unify_gen.m"
            ll_backend__unify_gen__V_183_183 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 815 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_183_183, 0) = ((MR_Box) (ll_backend__unify_gen__V_184_184));
#line 815 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_183_183, 1) = ((MR_Box) (ll_backend__unify_gen__V_190_190));
#line 815 "unify_gen.m"
          }
#line 812 "unify_gen.m"
          {
#line 812 "unify_gen.m"
            ll_backend__unify_gen__V_172_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 812 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_172_172, 0) = ((MR_Box) (ll_backend__unify_gen__V_173_173));
#line 812 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_172_172, 1) = ((MR_Box) (ll_backend__unify_gen__V_183_183));
#line 812 "unify_gen.m"
          }
#line 809 "unify_gen.m"
          {
#line 809 "unify_gen.m"
            ll_backend__unify_gen__V_160_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 809 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_160_160, 0) = ((MR_Box) (ll_backend__unify_gen__V_161_161));
#line 809 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_160_160, 1) = ((MR_Box) (ll_backend__unify_gen__V_172_172));
#line 809 "unify_gen.m"
          }
#line 806 "unify_gen.m"
          {
#line 806 "unify_gen.m"
            ll_backend__unify_gen__V_148_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 806 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_148_148, 0) = ((MR_Box) (ll_backend__unify_gen__V_149_149));
#line 806 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_148_148, 1) = ((MR_Box) (ll_backend__unify_gen__V_160_160));
#line 806 "unify_gen.m"
          }
#line 802 "unify_gen.m"
          {
#line 802 "unify_gen.m"
            ll_backend__unify_gen__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 802 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_137_137, 0) = ((MR_Box) (ll_backend__unify_gen__V_138_138));
#line 802 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_137_137, 1) = ((MR_Box) (ll_backend__unify_gen__V_148_148));
#line 802 "unify_gen.m"
          }
#line 799 "unify_gen.m"
          {
#line 799 "unify_gen.m"
            ll_backend__unify_gen__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 799 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_129_129, 0) = ((MR_Box) (ll_backend__unify_gen__V_130_130));
#line 799 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_129_129, 1) = ((MR_Box) (ll_backend__unify_gen__V_137_137));
#line 799 "unify_gen.m"
          }
#line 798 "unify_gen.m"
          {
#line 798 "unify_gen.m"
            ll_backend__unify_gen__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 798 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_124_124, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_1[12]));
#line 798 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_124_124, 1) = ((MR_Box) (ll_backend__unify_gen__V_129_129));
#line 798 "unify_gen.m"
          }
#line 798 "unify_gen.m"
          {
#line 798 "unify_gen.m"
            ll_backend__unify_gen__NewClosureCode_61 = mercury__cord__from_list_1_f_0(ll_backend__unify_gen__TypeCtorInfo_278_278, ll_backend__unify_gen__V_124_124);
          }
#line 844 "unify_gen.m"
          {
#line 844 "unify_gen.m"
            ll_backend__unify_gen__generate_extra_closure_args_6_p_0(ll_backend__unify_gen__CallArgs_27, ll_backend__unify_gen__LoopCounter_45, ll_backend__unify_gen__NewClosure_47, &ll_backend__unify_gen__ExtraArgsCode_62, ll_backend__unify_gen__STATE_VARIABLE_CI_123_123, &ll_backend__unify_gen__STATE_VARIABLE_CI_238_238);
          }
#line 846 "unify_gen.m"
          {
#line 846 "unify_gen.m"
            ll_backend__code_info__release_reg_3_p_0(ll_backend__unify_gen__LoopCounter_45, ll_backend__unify_gen__STATE_VARIABLE_CI_238_238, &ll_backend__unify_gen__STATE_VARIABLE_CI_239_239);
          }
#line 847 "unify_gen.m"
          {
#line 847 "unify_gen.m"
            ll_backend__code_info__release_reg_3_p_0(ll_backend__unify_gen__NumOldArgs_46, ll_backend__unify_gen__STATE_VARIABLE_CI_239_239, &ll_backend__unify_gen__STATE_VARIABLE_CI_240_240);
          }
#line 848 "unify_gen.m"
          {
#line 848 "unify_gen.m"
            ll_backend__code_info__release_reg_3_p_0(ll_backend__unify_gen__NewClosure_47, ll_backend__unify_gen__STATE_VARIABLE_CI_240_240, &ll_backend__unify_gen__STATE_VARIABLE_CI_241_241);
          }
#line 849 "unify_gen.m"
          {
#line 849 "unify_gen.m"
            ll_backend__code_info__assign_lval_to_var_5_p_0(ll_backend__unify_gen__Var_13, ll_backend__unify_gen__NewClosure_47, &ll_backend__unify_gen__AssignCode_63, ll_backend__unify_gen__STATE_VARIABLE_CI_241_241, ll_backend__unify_gen__STATE_VARIABLE_CI_97);
          }
#line 850 "unify_gen.m"
          {
#line 850 "unify_gen.m"
            ll_backend__unify_gen__V_244_244 = mercury__cord__f_43_43_2_f_0(ll_backend__unify_gen__TypeCtorInfo_278_278, ll_backend__unify_gen__ExtraArgsCode_62, ll_backend__unify_gen__AssignCode_63);
          }
#line 850 "unify_gen.m"
          {
#line 850 "unify_gen.m"
            ll_backend__unify_gen__V_243_243 = mercury__cord__f_43_43_2_f_0(ll_backend__unify_gen__TypeCtorInfo_278_278, ll_backend__unify_gen__NewClosureCode_61, ll_backend__unify_gen__V_244_244);
          }
#line 850 "unify_gen.m"
          {
#line 850 "unify_gen.m"
            *ll_backend__unify_gen__Code_16 = mercury__cord__f_43_43_2_f_0(ll_backend__unify_gen__TypeCtorInfo_278_278, ll_backend__unify_gen__OldClosureCode_56, ll_backend__unify_gen__V_243_243);
          }
#line 778 "unify_gen.m"
        }
#line 853 "unify_gen.m"
    else
#line 854 "unify_gen.m"
      {
#line 854 "unify_gen.m"
        MR_Word ll_backend__unify_gen__TypeCtorInfo_279_279;
#line 854 "unify_gen.m"
        MR_Word ll_backend__unify_gen__CodeAddr_64;
#line 854 "unify_gen.m"
        MR_Word ll_backend__unify_gen__ProcLabel_65;
#line 854 "unify_gen.m"
        MR_Word ll_backend__unify_gen__CodeAddrRval_66;
#line 854 "unify_gen.m"
        MR_Word ll_backend__unify_gen__ClosureInfo_67;
#line 854 "unify_gen.m"
        MR_Word ll_backend__unify_gen__ModuleName_68;
#line 854 "unify_gen.m"
        MR_String ll_backend__unify_gen__FileName_69;
#line 854 "unify_gen.m"
        MR_Integer ll_backend__unify_gen__LineNumber_70;
#line 854 "unify_gen.m"
        MR_Word ll_backend__unify_gen__GoalId_71;
#line 854 "unify_gen.m"
        MR_Integer ll_backend__unify_gen__GoalIdNum_72;
#line 854 "unify_gen.m"
        MR_String ll_backend__unify_gen__GoalIdStr_73;
#line 854 "unify_gen.m"
        MR_Word ll_backend__unify_gen__CallerProcLabel_74;
#line 854 "unify_gen.m"
        MR_Integer ll_backend__unify_gen__SeqNo_75;
#line 854 "unify_gen.m"
        MR_Word ll_backend__unify_gen__StaticCellInfo0_76;
#line 854 "unify_gen.m"
        MR_Word ll_backend__unify_gen__PredOrigin_77;
#line 854 "unify_gen.m"
        MR_Word ll_backend__unify_gen__StaticCellInfo_78;
#line 854 "unify_gen.m"
        MR_Word ll_backend__unify_gen__ClosureLayoutTypedRvals_79;
#line 854 "unify_gen.m"
        MR_Word ll_backend__unify_gen__Data_80;
#line 854 "unify_gen.m"
        MR_Word ll_backend__unify_gen__ClosureDataAddr_81;
#line 854 "unify_gen.m"
        MR_Word ll_backend__unify_gen__ClosureLayoutRval_82;
#line 854 "unify_gen.m"
        MR_Word ll_backend__unify_gen__ArgInfo_83;
#line 854 "unify_gen.m"
        MR_Word ll_backend__unify_gen__VarTypes_84;
#line 854 "unify_gen.m"
        MR_Word ll_backend__unify_gen__MayUseAtomic0_85;
#line 854 "unify_gen.m"
        MR_Word ll_backend__unify_gen__ArgsR_86;
#line 854 "unify_gen.m"
        MR_Word ll_backend__unify_gen__ArgsF_87;
#line 854 "unify_gen.m"
        MR_Word ll_backend__unify_gen__MayUseAtomic_88;
#line 854 "unify_gen.m"
        MR_Integer ll_backend__unify_gen__NumArgsR_89;
#line 854 "unify_gen.m"
        MR_Integer ll_backend__unify_gen__NumArgsF_90;
#line 854 "unify_gen.m"
        MR_Integer ll_backend__unify_gen__NumArgsRF_91;
#line 854 "unify_gen.m"
        MR_Word ll_backend__unify_gen__ArgsRF_92;
#line 854 "unify_gen.m"
        MR_Word ll_backend__unify_gen__Vector_93;
#line 854 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_247_247;
#line 854 "unify_gen.m"
        MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_248_248;
#line 854 "unify_gen.m"
        MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_249_249;
#line 854 "unify_gen.m"
        MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_250_250;
#line 854 "unify_gen.m"
        MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_251_251;
#line 854 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_252_252;
#line 854 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_254_254;
#line 854 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_256_256;
#line 854 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_257_257;
#line 854 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_259_259;
#line 854 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_260_260;
#line 854 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_261_261;
#line 854 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_262_262;
#line 854 "unify_gen.m"
        MR_Integer ll_backend__unify_gen__V_265_265;
#line 854 "unify_gen.m"
        MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_266_266;
#line 854 "unify_gen.m"
        MR_Word ll_backend__unify_gen__Context_270;
#line 854 "unify_gen.m"
        MR_Word ll_backend__unify_gen__MaybeAllocId_271;

#line 854 "unify_gen.m"
        {
#line 854 "unify_gen.m"
          ll_backend__unify_gen__CodeAddr_64 = ll_backend__code_info__make_proc_entry_label_5_f_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_96, ll_backend__unify_gen__ModuleInfo_18, ll_backend__unify_gen__PredId_10, ll_backend__unify_gen__ProcId_11, (MR_Integer) 0);
        }
#line 855 "unify_gen.m"
        {
#line 855 "unify_gen.m"
          ll_backend__unify_gen__ProcLabel_65 = ll_backend__code_util__extract_proc_label_from_code_addr_1_f_0(ll_backend__unify_gen__CodeAddr_64);
        }
#line 856 "unify_gen.m"
        {
#line 856 "unify_gen.m"
          ll_backend__unify_gen__V_247_247 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 856 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_247_247, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 856 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_247_247, 1) = ((MR_Box) (ll_backend__unify_gen__CodeAddr_64));
#line 856 "unify_gen.m"
        }
#line 856 "unify_gen.m"
        {
#line 856 "unify_gen.m"
          ll_backend__unify_gen__CodeAddrRval_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 856 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__CodeAddrRval_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 856 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__CodeAddrRval_66, 1) = ((MR_Box) (ll_backend__unify_gen__V_247_247));
#line 856 "unify_gen.m"
        }
#line 857 "unify_gen.m"
        {
#line 857 "unify_gen.m"
          ll_backend__continuation_info__generate_closure_layout_4_p_0(ll_backend__unify_gen__ModuleInfo_18, ll_backend__unify_gen__PredId_10, ll_backend__unify_gen__ProcId_11, &ll_backend__unify_gen__ClosureInfo_67);
        }
#line 859 "unify_gen.m"
        {
#line 859 "unify_gen.m"
          hlds__hlds_module__module_info_get_name_2_p_0(ll_backend__unify_gen__ModuleInfo_18, &ll_backend__unify_gen__ModuleName_68);
        }
#line 860 "unify_gen.m"
        {
#line 860 "unify_gen.m"
          ll_backend__unify_gen__Context_270 = hlds__hlds_goal__goal_info_get_context_1_f_0(ll_backend__unify_gen__GoalInfo_15);
        }
#line 861 "unify_gen.m"
        {
#line 861 "unify_gen.m"
          mercury__term__context_file_2_p_0(ll_backend__unify_gen__Context_270, &ll_backend__unify_gen__FileName_69);
        }
#line 862 "unify_gen.m"
        {
#line 862 "unify_gen.m"
          mercury__term__context_line_2_p_0(ll_backend__unify_gen__Context_270, &ll_backend__unify_gen__LineNumber_70);
        }
#line 863 "unify_gen.m"
        {
#line 863 "unify_gen.m"
          ll_backend__unify_gen__GoalId_71 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(ll_backend__unify_gen__GoalInfo_15);
        }
#line 864 "unify_gen.m"
        ll_backend__unify_gen__GoalIdNum_72 = (MR_Integer) ll_backend__unify_gen__GoalId_71;
#line 865 "unify_gen.m"
        {
#line 865 "unify_gen.m"
          ll_backend__unify_gen__GoalIdStr_73 = mercury__string__int_to_string_1_f_0(ll_backend__unify_gen__GoalIdNum_72);
        }
#line 866 "unify_gen.m"
        {
#line 866 "unify_gen.m"
          ll_backend__code_info__get_cur_proc_label_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_96, &ll_backend__unify_gen__CallerProcLabel_74);
        }
#line 867 "unify_gen.m"
        {
#line 867 "unify_gen.m"
          ll_backend__code_info__get_next_closure_seq_no_3_p_0(&ll_backend__unify_gen__SeqNo_75, ll_backend__unify_gen__STATE_VARIABLE_CI_0_96, &ll_backend__unify_gen__STATE_VARIABLE_CI_248_248);
        }
#line 868 "unify_gen.m"
        {
#line 868 "unify_gen.m"
          ll_backend__code_info__get_static_cell_info_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_248_248, &ll_backend__unify_gen__StaticCellInfo0_76);
        }
#line 869 "unify_gen.m"
        {
#line 869 "unify_gen.m"
          hlds__hlds_pred__pred_info_get_origin_2_p_0(ll_backend__unify_gen__PredInfo_20, &ll_backend__unify_gen__PredOrigin_77);
        }
#line 870 "unify_gen.m"
        {
#line 870 "unify_gen.m"
          ll_backend__stack_layout__construct_closure_layout_13_p_0(ll_backend__unify_gen__CallerProcLabel_74, ll_backend__unify_gen__SeqNo_75, ll_backend__unify_gen__ClosureInfo_67, ll_backend__unify_gen__ProcLabel_65, ll_backend__unify_gen__ModuleName_68, ll_backend__unify_gen__FileName_69, ll_backend__unify_gen__LineNumber_70, ll_backend__unify_gen__PredOrigin_77, ll_backend__unify_gen__GoalIdStr_73, ll_backend__unify_gen__StaticCellInfo0_76, &ll_backend__unify_gen__StaticCellInfo_78, &ll_backend__unify_gen__ClosureLayoutTypedRvals_79, &ll_backend__unify_gen__Data_80);
        }
#line 874 "unify_gen.m"
        {
#line 874 "unify_gen.m"
          ll_backend__code_info__set_static_cell_info_3_p_0(ll_backend__unify_gen__StaticCellInfo_78, ll_backend__unify_gen__STATE_VARIABLE_CI_248_248, &ll_backend__unify_gen__STATE_VARIABLE_CI_249_249);
        }
#line 875 "unify_gen.m"
        {
#line 875 "unify_gen.m"
          ll_backend__code_info__add_closure_layout_3_p_0(ll_backend__unify_gen__Data_80, ll_backend__unify_gen__STATE_VARIABLE_CI_249_249, &ll_backend__unify_gen__STATE_VARIABLE_CI_250_250);
        }
#line 878 "unify_gen.m"
        {
#line 878 "unify_gen.m"
          ll_backend__code_info__add_scalar_static_cell_4_p_0(ll_backend__unify_gen__ClosureLayoutTypedRvals_79, &ll_backend__unify_gen__ClosureDataAddr_81, ll_backend__unify_gen__STATE_VARIABLE_CI_250_250, &ll_backend__unify_gen__STATE_VARIABLE_CI_251_251);
        }
#line 879 "unify_gen.m"
        {
#line 879 "unify_gen.m"
          ll_backend__unify_gen__V_252_252 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 879 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_252_252, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 879 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_252_252, 1) = ((MR_Box) (ll_backend__unify_gen__ClosureDataAddr_81));
#line 879 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_252_252, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 879 "unify_gen.m"
        }
#line 879 "unify_gen.m"
        {
#line 879 "unify_gen.m"
          ll_backend__unify_gen__ClosureLayoutRval_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 879 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ClosureLayoutRval_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 879 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ClosureLayoutRval_82, 1) = ((MR_Box) (ll_backend__unify_gen__V_252_252));
#line 879 "unify_gen.m"
        }
#line 880 "unify_gen.m"
        {
#line 880 "unify_gen.m"
          hlds__hlds_pred__proc_info_arg_info_2_p_0(ll_backend__unify_gen__ProcInfo_22, &ll_backend__unify_gen__ArgInfo_83);
        }
#line 881 "unify_gen.m"
        {
#line 881 "unify_gen.m"
          ll_backend__unify_gen__VarTypes_84 = ll_backend__code_info__get_var_types_1_f_0(ll_backend__unify_gen__STATE_VARIABLE_CI_251_251);
        }
#line 882 "unify_gen.m"
        {
#line 882 "unify_gen.m"
          ll_backend__unify_gen__MayUseAtomic0_85 = ll_backend__unify_gen__initial_may_use_atomic_1_f_0(ll_backend__unify_gen__ModuleInfo_18);
        }
#line 883 "unify_gen.m"
        {
#line 883 "unify_gen.m"
          ll_backend__unify_gen__generate_pred_args_8_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_251_251, ll_backend__unify_gen__VarTypes_84, ll_backend__unify_gen__Args_14, ll_backend__unify_gen__ArgInfo_83, &ll_backend__unify_gen__ArgsR_86, &ll_backend__unify_gen__ArgsF_87, ll_backend__unify_gen__MayUseAtomic0_85, &ll_backend__unify_gen__MayUseAtomic_88);
        }
#line 5808 "ll_backend.unify_gen.c"
        ll_backend__unify_gen__TypeCtorInfo_279_279 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_cell_arg_0;
#line 885 "unify_gen.m"
        {
#line 885 "unify_gen.m"
          mercury__list__length_2_p_0(ll_backend__unify_gen__TypeCtorInfo_279_279, ll_backend__unify_gen__ArgsR_86, &ll_backend__unify_gen__NumArgsR_89);
        }
#line 886 "unify_gen.m"
        {
#line 886 "unify_gen.m"
          mercury__list__length_2_p_0(ll_backend__unify_gen__TypeCtorInfo_279_279, ll_backend__unify_gen__ArgsF_87, &ll_backend__unify_gen__NumArgsF_90);
        }
#line 887 "unify_gen.m"
        {
#line 887 "unify_gen.m"
          ll_backend__unify_gen__NumArgsRF_91 = ll_backend__code_util__encode_num_generic_call_vars_2_f_0(ll_backend__unify_gen__NumArgsR_89, ll_backend__unify_gen__NumArgsF_90);
        }
#line 888 "unify_gen.m"
        {
#line 888 "unify_gen.m"
          mercury__list__append_3_p_1(ll_backend__unify_gen__TypeCtorInfo_279_279, ll_backend__unify_gen__ArgsR_86, ll_backend__unify_gen__ArgsF_87, &ll_backend__unify_gen__ArgsRF_92);
        }
#line 890 "unify_gen.m"
        {
#line 890 "unify_gen.m"
          ll_backend__unify_gen__V_254_254 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 890 "unify_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_254_254, 0) = ((MR_Box) (ll_backend__unify_gen__ClosureLayoutRval_82));
#line 890 "unify_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_254_254, 1) = ((MR_Box) ((MR_Integer) 0));
#line 890 "unify_gen.m"
        }
#line 891 "unify_gen.m"
        {
#line 891 "unify_gen.m"
          ll_backend__unify_gen__V_257_257 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 891 "unify_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_257_257, 0) = ((MR_Box) (ll_backend__unify_gen__CodeAddrRval_66));
#line 891 "unify_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_257_257, 1) = ((MR_Box) ((MR_Integer) 0));
#line 891 "unify_gen.m"
        }
#line 892 "unify_gen.m"
        {
#line 892 "unify_gen.m"
          ll_backend__unify_gen__V_262_262 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 892 "unify_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_262_262, 0) = ((MR_Box) (ll_backend__unify_gen__NumArgsRF_91));
#line 892 "unify_gen.m"
        }
#line 892 "unify_gen.m"
        {
#line 892 "unify_gen.m"
          ll_backend__unify_gen__V_261_261 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 892 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_261_261, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 892 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_261_261, 1) = ((MR_Box) (ll_backend__unify_gen__V_262_262));
#line 892 "unify_gen.m"
        }
#line 893 "unify_gen.m"
        {
#line 893 "unify_gen.m"
          ll_backend__unify_gen__V_260_260 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 893 "unify_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_260_260, 0) = ((MR_Box) (ll_backend__unify_gen__V_261_261));
#line 893 "unify_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_260_260, 1) = ((MR_Box) ((MR_Integer) 0));
#line 893 "unify_gen.m"
        }
#line 891 "unify_gen.m"
        {
#line 891 "unify_gen.m"
          ll_backend__unify_gen__V_259_259 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 891 "unify_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_259_259, 0) = ((MR_Box) (ll_backend__unify_gen__V_260_260));
#line 891 "unify_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_259_259, 1) = ((MR_Box) (ll_backend__unify_gen__ArgsRF_92));
#line 891 "unify_gen.m"
        }
#line 890 "unify_gen.m"
        {
#line 890 "unify_gen.m"
          ll_backend__unify_gen__V_256_256 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 890 "unify_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_256_256, 0) = ((MR_Box) (ll_backend__unify_gen__V_257_257));
#line 890 "unify_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_256_256, 1) = ((MR_Box) (ll_backend__unify_gen__V_259_259));
#line 890 "unify_gen.m"
        }
#line 889 "unify_gen.m"
        {
#line 889 "unify_gen.m"
          ll_backend__unify_gen__Vector_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 889 "unify_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Vector_93, 0) = ((MR_Box) (ll_backend__unify_gen__V_254_254));
#line 889 "unify_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Vector_93, 1) = ((MR_Box) (ll_backend__unify_gen__V_256_256));
#line 889 "unify_gen.m"
        }
#line 899 "unify_gen.m"
        {
#line 899 "unify_gen.m"
          ll_backend__unify_gen__V_265_265 = mercury__list__length_1_f_0(ll_backend__unify_gen__TypeCtorInfo_279_279, ll_backend__unify_gen__Vector_93);
        }
#line 899 "unify_gen.m"
        {
#line 899 "unify_gen.m"
          ll_backend__unify_gen__maybe_add_alloc_site_info_6_p_0(ll_backend__unify_gen__Context_270, (MR_String) "closure", ll_backend__unify_gen__V_265_265, &ll_backend__unify_gen__MaybeAllocId_271, ll_backend__unify_gen__STATE_VARIABLE_CI_251_251, &ll_backend__unify_gen__STATE_VARIABLE_CI_266_266);
        }
#line 901 "unify_gen.m"
        {
#line 901 "unify_gen.m"
          ll_backend__code_info__assign_cell_to_var_11_p_0(ll_backend__unify_gen__Var_13, (MR_Integer) 0, (MR_Integer) 0, ll_backend__unify_gen__Vector_93, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__unify_gen__MaybeAllocId_271, ll_backend__unify_gen__MayUseAtomic_88, ll_backend__unify_gen__Code_16, ll_backend__unify_gen__STATE_VARIABLE_CI_266_266, ll_backend__unify_gen__STATE_VARIABLE_CI_97);
#line 901 "unify_gen.m"
          return;
        }
#line 854 "unify_gen.m"
      }
#line 710 "unify_gen.m"
  }
#line 706 "unify_gen.m"
}

#line 344 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_97_119_95_116_97_103_95_116_101_115_116_95_95_91_50_93_95_48_11_p_0(
#line 344 "unify_gen.m"
  MR_Word ll_backend__unify_gen__VarRval_12,
#line 344 "unify_gen.m"
  MR_String ll_backend__unify_gen__VarName_14,
#line 344 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConsId_15,
#line 344 "unify_gen.m"
  MR_Word ll_backend__unify_gen__MaybeConsTag_16,
#line 344 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CheaperTagTest_17,
#line 344 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Sense_18,
#line 344 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__ElseLabel_19,
#line 344 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_20,
#line 344 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_33,
#line 344 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_34)
#line 344 "unify_gen.m"
{
#line 350 "unify_gen.m"
  {
#line 350 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 350 "unify_gen.m"
    MR_String ll_backend__unify_gen__ConsIdName_22;
#line 350 "unify_gen.m"
    MR_String ll_backend__unify_gen__Comment_27;
#line 350 "unify_gen.m"
    MR_Word ll_backend__unify_gen__TestRval_29;
#line 350 "unify_gen.m"
    MR_Word ll_backend__unify_gen__TheRval_32;
#line 350 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_46_46;
#line 350 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_47_47;
#line 350 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_48_48;
#line 365 "unify_gen.m"
    MR_Word ll_backend__unify_gen__CheapConsTag_26;
#line 358 "unify_gen.m"
    MR_Word ll_backend__unify_gen__ExpensiveConsId_23;
#line 357 "unify_gen.m"
    MR_Word ll_backend__unify_gen___ExpensiveConsTag_24;
#line 357 "unify_gen.m"
    MR_Word ll_backend__unify_gen___CheapConsId_25;

#line 351 "unify_gen.m"
    {
#line 351 "unify_gen.m"
      ll_backend__unify_gen__ConsIdName_22 = hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_f_0(ll_backend__unify_gen__ConsId_15);
    }
#line 357 "unify_gen.m"
    ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__CheaperTagTest_17)) == (MR_mktag((MR_Integer) 1)));
#line 357 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 357 "unify_gen.m"
      {
#line 357 "unify_gen.m"
        ll_backend__unify_gen__ExpensiveConsId_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CheaperTagTest_17, (MR_Integer) 0)));
#line 357 "unify_gen.m"
        ll_backend__unify_gen___ExpensiveConsTag_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CheaperTagTest_17, (MR_Integer) 1)));
#line 357 "unify_gen.m"
        ll_backend__unify_gen___CheapConsId_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CheaperTagTest_17, (MR_Integer) 2)));
#line 357 "unify_gen.m"
        ll_backend__unify_gen__CheapConsTag_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CheaperTagTest_17, (MR_Integer) 3)));
#line 359 "unify_gen.m"
        {
#line 359 "unify_gen.m"
          ll_backend__unify_gen__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ll_backend__unify_gen__ConsId_15, ll_backend__unify_gen__ExpensiveConsId_23);
        }
#line 357 "unify_gen.m"
      }
#line 365 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 362 "unify_gen.m"
      {
#line 362 "unify_gen.m"
        MR_Word ll_backend__unify_gen__NegTestRval_28;
#line 362 "unify_gen.m"
        MR_String ll_backend__unify_gen__V_35_35;
#line 362 "unify_gen.m"
        MR_String ll_backend__unify_gen__V_36_36;
#line 362 "unify_gen.m"
        MR_String ll_backend__unify_gen__V_37_37;
#line 362 "unify_gen.m"
        MR_String ll_backend__unify_gen__V_39_39;

#line 392 "unify_gen.m"
        if ((ll_backend__unify_gen__Sense_18 == (MR_Integer) 1))
#line 394 "unify_gen.m"
          ll_backend__unify_gen__V_35_35 = (MR_String) "branch away unless ";
#line 392 "unify_gen.m"
        else
#line 392 "unify_gen.m"
          ll_backend__unify_gen__V_35_35 = (MR_String) "branch away if ";
#line 362 "unify_gen.m"
        {
#line 362 "unify_gen.m"
          ll_backend__unify_gen__V_39_39 = mercury__string__f_43_43_2_f_0(ll_backend__unify_gen__ConsIdName_22, (MR_String) " (inverted test)");
        }
#line 361 "unify_gen.m"
        {
#line 361 "unify_gen.m"
          ll_backend__unify_gen__V_37_37 = mercury__string__f_43_43_2_f_0((MR_String) " has functor ", ll_backend__unify_gen__V_39_39);
        }
#line 361 "unify_gen.m"
        {
#line 361 "unify_gen.m"
          ll_backend__unify_gen__V_36_36 = mercury__string__f_43_43_2_f_0(ll_backend__unify_gen__VarName_14, ll_backend__unify_gen__V_37_37);
        }
#line 361 "unify_gen.m"
        {
#line 361 "unify_gen.m"
          ll_backend__unify_gen__Comment_27 = mercury__string__f_43_43_2_f_0(ll_backend__unify_gen__V_35_35, ll_backend__unify_gen__V_36_36);
        }
#line 363 "unify_gen.m"
        {
#line 363 "unify_gen.m"
          ll_backend__unify_gen__raw_tag_test_3_p_0(ll_backend__unify_gen__VarRval_12, ll_backend__unify_gen__CheapConsTag_26, &ll_backend__unify_gen__NegTestRval_28);
        }
#line 364 "unify_gen.m"
        {
#line 364 "unify_gen.m"
          ll_backend__code_util__neg_rval_2_p_0(ll_backend__unify_gen__NegTestRval_28, &ll_backend__unify_gen__TestRval_29);
        }
#line 362 "unify_gen.m"
      }
#line 365 "unify_gen.m"
    else
#line 367 "unify_gen.m"
      {
#line 367 "unify_gen.m"
        MR_Word ll_backend__unify_gen__ConsTag_30;
#line 367 "unify_gen.m"
        MR_String ll_backend__unify_gen__V_41_41;
#line 367 "unify_gen.m"
        MR_String ll_backend__unify_gen__V_42_42;
#line 367 "unify_gen.m"
        MR_String ll_backend__unify_gen__V_43_43;

#line 392 "unify_gen.m"
        if ((ll_backend__unify_gen__Sense_18 == (MR_Integer) 1))
#line 394 "unify_gen.m"
          ll_backend__unify_gen__V_41_41 = (MR_String) "branch away unless ";
#line 392 "unify_gen.m"
        else
#line 392 "unify_gen.m"
          ll_backend__unify_gen__V_41_41 = (MR_String) "branch away if ";
#line 366 "unify_gen.m"
        {
#line 366 "unify_gen.m"
          ll_backend__unify_gen__V_43_43 = mercury__string__f_43_43_2_f_0((MR_String) " has functor ", ll_backend__unify_gen__ConsIdName_22);
        }
#line 366 "unify_gen.m"
        {
#line 366 "unify_gen.m"
          ll_backend__unify_gen__V_42_42 = mercury__string__f_43_43_2_f_0(ll_backend__unify_gen__VarName_14, ll_backend__unify_gen__V_43_43);
        }
#line 366 "unify_gen.m"
        {
#line 366 "unify_gen.m"
          ll_backend__unify_gen__Comment_27 = mercury__string__f_43_43_2_f_0(ll_backend__unify_gen__V_41_41, ll_backend__unify_gen__V_42_42);
        }
#line 371 "unify_gen.m"
        if ((ll_backend__unify_gen__MaybeConsTag_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 372 "unify_gen.m"
          {
#line 372 "unify_gen.m"
            MR_Word ll_backend__unify_gen__ModuleInfo_31;

#line 373 "unify_gen.m"
            {
#line 373 "unify_gen.m"
              ll_backend__code_info__get_module_info_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_33, &ll_backend__unify_gen__ModuleInfo_31);
            }
#line 374 "unify_gen.m"
            {
#line 374 "unify_gen.m"
              ll_backend__unify_gen__ConsTag_30 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ll_backend__unify_gen__ModuleInfo_31, ll_backend__unify_gen__ConsId_15);
            }
#line 372 "unify_gen.m"
          }
#line 371 "unify_gen.m"
        else
#line 369 "unify_gen.m"
          ll_backend__unify_gen__ConsTag_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__MaybeConsTag_16, (MR_Integer) 0)));
#line 376 "unify_gen.m"
        {
#line 376 "unify_gen.m"
          ll_backend__unify_gen__raw_tag_test_3_p_0(ll_backend__unify_gen__VarRval_12, ll_backend__unify_gen__ConsTag_30, &ll_backend__unify_gen__TestRval_29);
        }
#line 367 "unify_gen.m"
      }
#line 378 "unify_gen.m"
    {
#line 378 "unify_gen.m"
      ll_backend__code_info__get_next_label_3_p_0(ll_backend__unify_gen__ElseLabel_19, ll_backend__unify_gen__STATE_VARIABLE_CI_0_33, ll_backend__unify_gen__STATE_VARIABLE_CI_34);
    }
#line 382 "unify_gen.m"
    if ((ll_backend__unify_gen__Sense_18 == (MR_Integer) 1))
#line 384 "unify_gen.m"
      {
#line 384 "unify_gen.m"
        ll_backend__code_util__neg_rval_2_p_0(ll_backend__unify_gen__TestRval_29, &ll_backend__unify_gen__TheRval_32);
      }
#line 382 "unify_gen.m"
    else
#line 381 "unify_gen.m"
      ll_backend__unify_gen__TheRval_32 = ll_backend__unify_gen__TestRval_29;
#line 387 "unify_gen.m"
    {
#line 387 "unify_gen.m"
      ll_backend__unify_gen__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 387 "unify_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_48_48, 0) = ((MR_Box) (*ll_backend__unify_gen__ElseLabel_19));
#line 387 "unify_gen.m"
    }
#line 387 "unify_gen.m"
    {
#line 387 "unify_gen.m"
      ll_backend__unify_gen__V_47_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 387 "unify_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_47_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 387 "unify_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_47_47, 1) = ((MR_Box) (ll_backend__unify_gen__TheRval_32));
#line 387 "unify_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_47_47, 2) = ((MR_Box) (ll_backend__unify_gen__V_48_48));
#line 387 "unify_gen.m"
    }
#line 386 "unify_gen.m"
    {
#line 386 "unify_gen.m"
      ll_backend__unify_gen__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 386 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_46_46, 0) = ((MR_Box) (ll_backend__unify_gen__V_47_47));
#line 386 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_46_46, 1) = ((MR_Box) (ll_backend__unify_gen__Comment_27));
#line 386 "unify_gen.m"
    }
#line 386 "unify_gen.m"
    {
#line 386 "unify_gen.m"
      *ll_backend__unify_gen__Code_20 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__unify_gen__V_46_46)));
    }
#line 350 "unify_gen.m"
  }
#line 344 "unify_gen.m"
}

#line 307 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_97_119_95_116_97_103_95_116_101_115_116_95_99_97_115_101_95_95_91_50_93_95_48_11_p_0_2(
#line 307 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg,
#line 307 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
#line 307 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_2)
#line 307 "unify_gen.m"
{
#line 307 "unify_gen.m"
  {
#line 307 "unify_gen.m"
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;
#line 307 "unify_gen.m"
    MR_Word ll_backend__unify_gen__conv2_TestRval_6;

#line 307 "unify_gen.m"
    {
#line 307 "unify_gen.m"
      ll_backend__unify_gen__raw_tag_test_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__unify_gen__wrapper_arg_1), &ll_backend__unify_gen__conv2_TestRval_6);
    }
#line 307 "unify_gen.m"
    *ll_backend__unify_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__unify_gen__conv2_TestRval_6));
#line 307 "unify_gen.m"
  }
#line 307 "unify_gen.m"
}

#line 302 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_97_119_95_116_97_103_95_116_101_115_116_95_99_97_115_101_95_95_91_50_93_95_48_11_p_0_1(
#line 302 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg,
#line 302 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
#line 302 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_2,
#line 302 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_3)
#line 302 "unify_gen.m"
{
#line 302 "unify_gen.m"
  {
#line 302 "unify_gen.m"
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;
#line 302 "unify_gen.m"
    MR_String ll_backend__unify_gen__conv1_HeadVar__2_2;
#line 302 "unify_gen.m"
    MR_Word ll_backend__unify_gen__conv0_HeadVar__3_3;

#line 302 "unify_gen.m"
    {
#line 302 "unify_gen.m"
      hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_p_0(((MR_Word) ll_backend__unify_gen__wrapper_arg_1), &ll_backend__unify_gen__conv1_HeadVar__2_2, &ll_backend__unify_gen__conv0_HeadVar__3_3);
    }
#line 302 "unify_gen.m"
    *ll_backend__unify_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__unify_gen__conv1_HeadVar__2_2));
#line 302 "unify_gen.m"
    *ll_backend__unify_gen__wrapper_arg_3 = ((MR_Box) (ll_backend__unify_gen__conv0_HeadVar__3_3));
#line 302 "unify_gen.m"
  }
#line 302 "unify_gen.m"
}

#line 48 "unify_gen.m"
void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_97_119_95_116_97_103_95_116_101_115_116_95_99_97_115_101_95_95_91_50_93_95_48_11_p_0(
#line 48 "unify_gen.m"
  MR_Word ll_backend__unify_gen__VarRval_12,
#line 48 "unify_gen.m"
  MR_String ll_backend__unify_gen__VarName_14,
#line 48 "unify_gen.m"
  MR_Word ll_backend__unify_gen__MainTaggedConsId_15,
#line 48 "unify_gen.m"
  MR_Word ll_backend__unify_gen__OtherTaggedConsIds_16,
#line 48 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CheaperTagTest_17,
#line 48 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Sense_18,
#line 48 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__ElseLabel_19,
#line 48 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_20,
#line 48 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_34,
#line 48 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_35)
#line 48 "unify_gen.m"
{
#line 293 "unify_gen.m"
  {
#line 293 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;

#line 293 "unify_gen.m"
    if ((ll_backend__unify_gen__OtherTaggedConsIds_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 293 "unify_gen.m"
      {
#line 293 "unify_gen.m"
        MR_Word ll_backend__unify_gen__MainConsId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__MainTaggedConsId_15, (MR_Integer) 0)));
#line 293 "unify_gen.m"
        MR_Word ll_backend__unify_gen__MainConsTag_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__MainTaggedConsId_15, (MR_Integer) 1)));
#line 293 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_44_44;

#line 295 "unify_gen.m"
        {
#line 295 "unify_gen.m"
          ll_backend__unify_gen__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 295 "unify_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_44_44, 0) = ((MR_Box) (ll_backend__unify_gen__MainConsTag_23));
#line 295 "unify_gen.m"
        }
#line 295 "unify_gen.m"
        {
#line 295 "unify_gen.m"
          ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_97_119_95_116_97_103_95_116_101_115_116_95_95_91_50_93_95_48_11_p_0(ll_backend__unify_gen__VarRval_12, ll_backend__unify_gen__VarName_14, ll_backend__unify_gen__MainConsId_22, ll_backend__unify_gen__V_44_44, ll_backend__unify_gen__CheaperTagTest_17, ll_backend__unify_gen__Sense_18, ll_backend__unify_gen__ElseLabel_19, ll_backend__unify_gen__Code_20, ll_backend__unify_gen__STATE_VARIABLE_CI_0_34, ll_backend__unify_gen__STATE_VARIABLE_CI_35);
#line 295 "unify_gen.m"
          return;
        }
#line 293 "unify_gen.m"
      }
#line 293 "unify_gen.m"
    else
#line 299 "unify_gen.m"
      {
#line 299 "unify_gen.m"
        MR_Word ll_backend__unify_gen__TypeCtorInfo_52_52;
#line 299 "unify_gen.m"
        MR_String ll_backend__unify_gen__MainConsName_26;
#line 299 "unify_gen.m"
        MR_Word ll_backend__unify_gen__OtherConsNames_27;
#line 299 "unify_gen.m"
        MR_Word ll_backend__unify_gen__OtherConsTags_28;
#line 299 "unify_gen.m"
        MR_String ll_backend__unify_gen__Comment_29;
#line 299 "unify_gen.m"
        MR_Word ll_backend__unify_gen__MainTagTestRval_30;
#line 299 "unify_gen.m"
        MR_Word ll_backend__unify_gen__OtherTagTestRvals_31;
#line 299 "unify_gen.m"
        MR_Word ll_backend__unify_gen__TestRval_32;
#line 299 "unify_gen.m"
        MR_Word ll_backend__unify_gen__TheRval_33;
#line 299 "unify_gen.m"
        MR_String ll_backend__unify_gen__V_37_37;
#line 299 "unify_gen.m"
        MR_String ll_backend__unify_gen__V_38_38;
#line 299 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_39_39;
#line 299 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_41_41;
#line 299 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_42_42;
#line 299 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_43_43;
#line 299 "unify_gen.m"
        MR_Word ll_backend__unify_gen__MainConsTag_46;

#line 301 "unify_gen.m"
        {
#line 301 "unify_gen.m"
          hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_p_0(ll_backend__unify_gen__MainTaggedConsId_15, &ll_backend__unify_gen__MainConsName_26, &ll_backend__unify_gen__MainConsTag_46);
        }
#line 6353 "ll_backend.unify_gen.c"
        ll_backend__unify_gen__TypeCtorInfo_52_52 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
#line 302 "unify_gen.m"
        {
#line 302 "unify_gen.m"
          mercury__list__map2_4_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ll_backend__unify_gen__TypeCtorInfo_52_52, (MR_Word) &ll_backend__unify_gen_scalar_common_2[10], ll_backend__unify_gen__OtherTaggedConsIds_16, &ll_backend__unify_gen__OtherConsNames_27, &ll_backend__unify_gen__OtherConsTags_28);
        }
#line 304 "unify_gen.m"
        {
#line 304 "unify_gen.m"
          ll_backend__unify_gen__V_38_38 = hlds__hlds_out__hlds_out_goal__case_comment_3_f_0(ll_backend__unify_gen__VarName_14, ll_backend__unify_gen__MainConsName_26, ll_backend__unify_gen__OtherConsNames_27);
        }
#line 306 "unify_gen.m"
        {
#line 306 "unify_gen.m"
          ll_backend__unify_gen__raw_tag_test_3_p_0(ll_backend__unify_gen__VarRval_12, ll_backend__unify_gen__MainConsTag_46, &ll_backend__unify_gen__MainTagTestRval_30);
        }
#line 307 "unify_gen.m"
        {
#line 307 "unify_gen.m"
          ll_backend__unify_gen__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 307 "unify_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_39_39, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[2]));
#line 307 "unify_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_39_39, 1) = ((MR_Box) (ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_97_119_95_116_97_103_95_116_101_115_116_95_99_97_115_101_95_95_91_50_93_95_48_11_p_0_2));
#line 307 "unify_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_39_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 307 "unify_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_39_39, 3) = ((MR_Box) (ll_backend__unify_gen__VarRval_12));
#line 307 "unify_gen.m"
        }
#line 307 "unify_gen.m"
        {
#line 307 "unify_gen.m"
          mercury__list__map_3_p_0(ll_backend__unify_gen__TypeCtorInfo_52_52, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ll_backend__unify_gen__V_39_39, ll_backend__unify_gen__OtherConsTags_28, &ll_backend__unify_gen__OtherTagTestRvals_31);
        }
#line 308 "unify_gen.m"
        {
#line 308 "unify_gen.m"
          ll_backend__unify_gen__disjoin_tag_tests_3_p_0(ll_backend__unify_gen__MainTagTestRval_30, ll_backend__unify_gen__OtherTagTestRvals_31, &ll_backend__unify_gen__TestRval_32);
        }
#line 309 "unify_gen.m"
        {
#line 309 "unify_gen.m"
          ll_backend__code_info__get_next_label_3_p_0(ll_backend__unify_gen__ElseLabel_19, ll_backend__unify_gen__STATE_VARIABLE_CI_0_34, ll_backend__unify_gen__STATE_VARIABLE_CI_35);
        }
#line 6399 "ll_backend.unify_gen.c"
        if ((ll_backend__unify_gen__Sense_18 == (MR_Integer) 1))
#line 6401 "ll_backend.unify_gen.c"
          {
#line 394 "unify_gen.m"
            ll_backend__unify_gen__V_37_37 = (MR_String) "branch away unless ";
#line 315 "unify_gen.m"
            {
#line 315 "unify_gen.m"
              ll_backend__code_util__neg_rval_2_p_0(ll_backend__unify_gen__TestRval_32, &ll_backend__unify_gen__TheRval_33);
            }
#line 6410 "ll_backend.unify_gen.c"
          }
#line 6412 "ll_backend.unify_gen.c"
        else
#line 6414 "ll_backend.unify_gen.c"
          {
#line 392 "unify_gen.m"
            ll_backend__unify_gen__V_37_37 = (MR_String) "branch away if ";
#line 312 "unify_gen.m"
            ll_backend__unify_gen__TheRval_33 = ll_backend__unify_gen__TestRval_32;
#line 6420 "ll_backend.unify_gen.c"
          }
#line 304 "unify_gen.m"
        {
#line 304 "unify_gen.m"
          ll_backend__unify_gen__Comment_29 = mercury__string__f_43_43_2_f_0(ll_backend__unify_gen__V_37_37, ll_backend__unify_gen__V_38_38);
        }
#line 318 "unify_gen.m"
        {
#line 318 "unify_gen.m"
          ll_backend__unify_gen__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 318 "unify_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_43_43, 0) = ((MR_Box) (*ll_backend__unify_gen__ElseLabel_19));
#line 318 "unify_gen.m"
        }
#line 318 "unify_gen.m"
        {
#line 318 "unify_gen.m"
          ll_backend__unify_gen__V_42_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 318 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_42_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 318 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_42_42, 1) = ((MR_Box) (ll_backend__unify_gen__TheRval_33));
#line 318 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_42_42, 2) = ((MR_Box) (ll_backend__unify_gen__V_43_43));
#line 318 "unify_gen.m"
        }
#line 317 "unify_gen.m"
        {
#line 317 "unify_gen.m"
          ll_backend__unify_gen__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 317 "unify_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_41_41, 0) = ((MR_Box) (ll_backend__unify_gen__V_42_42));
#line 317 "unify_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_41_41, 1) = ((MR_Box) (ll_backend__unify_gen__Comment_29));
#line 317 "unify_gen.m"
        }
#line 317 "unify_gen.m"
        {
#line 317 "unify_gen.m"
          *ll_backend__unify_gen__Code_20 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__unify_gen__V_41_41)));
        }
#line 299 "unify_gen.m"
      }
#line 293 "unify_gen.m"
  }
#line 48 "unify_gen.m"
}

#line 2172 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__shift_combine_arg__2172__1_2_p_0(
#line 2172 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__Shift_10,
#line 2172 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__HeadVar__2_39)
#line 2172 "unify_gen.m"
{
#line 2172 "unify_gen.m"
  {
#line 2172 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__Shift_10 == ll_backend__unify_gen__HeadVar__2_39);

#line 2172 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 2172 "unify_gen.m"
  }
#line 2172 "unify_gen.m"
}

#line 2002 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_ground_term_conjunct_tag__2002__1_2_p_0(
#line 2002 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Lang_21,
#line 2002 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_119)
#line 2002 "unify_gen.m"
{
#line 2002 "unify_gen.m"
  {
#line 2002 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__Lang_21 == ll_backend__unify_gen__HeadVar__2_119);

#line 2002 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 2002 "unify_gen.m"
  }
#line 2002 "unify_gen.m"
}

#line 1825 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_const_struct_arg_tag__1825__1_2_p_0(
#line 1825 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Lang_17,
#line 1825 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_71)
#line 1825 "unify_gen.m"
{
#line 1825 "unify_gen.m"
  {
#line 1825 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__Lang_17 == ll_backend__unify_gen__HeadVar__2_71);

#line 1825 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 1825 "unify_gen.m"
  }
#line 1825 "unify_gen.m"
}

#line 623 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__623__1_2_p_0(
#line 623 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Args_15,
#line 623 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_143)
#line 623 "unify_gen.m"
{
#line 623 "unify_gen.m"
  {
#line 623 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;

#line 623 "unify_gen.m"
    {
#line 623 "unify_gen.m"
      return ll_backend__unify_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[1], ((MR_Box) (ll_backend__unify_gen__Args_15)), ((MR_Box) (ll_backend__unify_gen__HeadVar__2_143)));
    }
#line 623 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 623 "unify_gen.m"
  }
#line 623 "unify_gen.m"
}

#line 649 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__649__1_2_p_0(
#line 649 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Args_15,
#line 649 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_120)
#line 649 "unify_gen.m"
{
#line 649 "unify_gen.m"
  {
#line 649 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;

#line 649 "unify_gen.m"
    {
#line 649 "unify_gen.m"
      return ll_backend__unify_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[1], ((MR_Box) (ll_backend__unify_gen__Args_15)), ((MR_Box) (ll_backend__unify_gen__HeadVar__2_120)));
    }
#line 649 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 649 "unify_gen.m"
  }
#line 649 "unify_gen.m"
}

#line 674 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__674__1_2_p_0(
#line 674 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Args_15,
#line 674 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_100)
#line 674 "unify_gen.m"
{
#line 674 "unify_gen.m"
  {
#line 674 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;

#line 674 "unify_gen.m"
    {
#line 674 "unify_gen.m"
      return ll_backend__unify_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[1], ((MR_Box) (ll_backend__unify_gen__Args_15)), ((MR_Box) (ll_backend__unify_gen__HeadVar__2_100)));
    }
#line 674 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 674 "unify_gen.m"
  }
#line 674 "unify_gen.m"
}

#line 682 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__682__1_2_p_0(
#line 682 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Args_15,
#line 682 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_93)
#line 682 "unify_gen.m"
{
#line 682 "unify_gen.m"
  {
#line 682 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;

#line 682 "unify_gen.m"
    {
#line 682 "unify_gen.m"
      return ll_backend__unify_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[1], ((MR_Box) (ll_backend__unify_gen__Args_15)), ((MR_Box) (ll_backend__unify_gen__HeadVar__2_93)));
    }
#line 682 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 682 "unify_gen.m"
  }
#line 682 "unify_gen.m"
}

#line 542 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__542__1_2_p_0(
#line 542 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Lang_26,
#line 542 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_191)
#line 542 "unify_gen.m"
{
#line 542 "unify_gen.m"
  {
#line 542 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__Lang_26 == ll_backend__unify_gen__HeadVar__2_191);

#line 542 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 542 "unify_gen.m"
  }
#line 542 "unify_gen.m"
}

#line 658 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__658__1_2_p_0(
#line 658 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Args_15,
#line 658 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_110)
#line 658 "unify_gen.m"
{
#line 658 "unify_gen.m"
  {
#line 658 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;

#line 658 "unify_gen.m"
    {
#line 658 "unify_gen.m"
      return ll_backend__unify_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[1], ((MR_Box) (ll_backend__unify_gen__Args_15)), ((MR_Box) (ll_backend__unify_gen__HeadVar__2_110)));
    }
#line 658 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 658 "unify_gen.m"
  }
#line 658 "unify_gen.m"
}

#line 697 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__697__1_2_p_0(
#line 697 "unify_gen.m"
  MR_Word ll_backend__unify_gen__MaybeSize_20,
#line 697 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_86)
#line 697 "unify_gen.m"
{
#line 697 "unify_gen.m"
  {
#line 697 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;

#line 697 "unify_gen.m"
    {
#line 697 "unify_gen.m"
      return ll_backend__unify_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[3], ((MR_Box) (ll_backend__unify_gen__MaybeSize_20)), ((MR_Box) (ll_backend__unify_gen__HeadVar__2_86)));
    }
#line 697 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 697 "unify_gen.m"
  }
#line 697 "unify_gen.m"
}

#line 695 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__695__1_2_p_0(
#line 695 "unify_gen.m"
  MR_Word ll_backend__unify_gen__TakeAddr_19,
#line 695 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_81)
#line 695 "unify_gen.m"
{
#line 695 "unify_gen.m"
  {
#line 695 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;

#line 695 "unify_gen.m"
    {
#line 695 "unify_gen.m"
      return ll_backend__unify_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[2], ((MR_Box) (ll_backend__unify_gen__TakeAddr_19)), ((MR_Box) (ll_backend__unify_gen__HeadVar__2_81)));
    }
#line 695 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 695 "unify_gen.m"
  }
#line 695 "unify_gen.m"
}

#line 632 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__632__1_2_p_0(
#line 632 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Args_15,
#line 632 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_132)
#line 632 "unify_gen.m"
{
#line 632 "unify_gen.m"
  {
#line 632 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;

#line 632 "unify_gen.m"
    {
#line 632 "unify_gen.m"
      return ll_backend__unify_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[1], ((MR_Box) (ll_backend__unify_gen__Args_15)), ((MR_Box) (ll_backend__unify_gen__HeadVar__2_132)));
    }
#line 632 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 632 "unify_gen.m"
  }
#line 632 "unify_gen.m"
}

#line 482 "unify_gen.m"
static MR_Word MR_CALL 
ll_backend__unify_gen__IntroducedFrom__func__raw_tag_test__482__1_3_f_0(
#line 482 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Rval_4,
#line 482 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_48,
#line 482 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__3_49)
#line 482 "unify_gen.m"
{
#line 482 "unify_gen.m"
  {
#line 482 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 482 "unify_gen.m"
    MR_Word ll_backend__unify_gen__HeadVar__4_50;
#line 482 "unify_gen.m"
    MR_Word ll_backend__unify_gen__EqualRA_46;
#line 482 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_51_51;
#line 482 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_53_53;

#line 483 "unify_gen.m"
    {
#line 483 "unify_gen.m"
      ll_backend__unify_gen__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 483 "unify_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_51_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
#line 483 "unify_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_51_51, 1) = ((MR_Box) (ll_backend__unify_gen__HeadVar__2_48));
#line 483 "unify_gen.m"
    }
#line 483 "unify_gen.m"
    {
#line 483 "unify_gen.m"
      ll_backend__unify_gen__raw_tag_test_3_p_0(ll_backend__unify_gen__Rval_4, ll_backend__unify_gen__V_51_51, &ll_backend__unify_gen__EqualRA_46);
    }
#line 484 "unify_gen.m"
    {
#line 484 "unify_gen.m"
      ll_backend__unify_gen__V_53_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 484 "unify_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_53_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 484 "unify_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_53_53, 1) = ((MR_Box) ((MR_Integer) 7));
#line 484 "unify_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_53_53, 2) = ((MR_Box) (ll_backend__unify_gen__EqualRA_46));
#line 484 "unify_gen.m"
    }
#line 484 "unify_gen.m"
    {
#line 484 "unify_gen.m"
      ll_backend__unify_gen__HeadVar__4_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 484 "unify_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__HeadVar__4_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 484 "unify_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__HeadVar__4_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
#line 484 "unify_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__HeadVar__4_50, 2) = ((MR_Box) (ll_backend__unify_gen__V_53_53));
#line 484 "unify_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__HeadVar__4_50, 3) = ((MR_Box) (ll_backend__unify_gen__HeadVar__3_49));
#line 484 "unify_gen.m"
    }
#line 482 "unify_gen.m"
    return ll_backend__unify_gen__HeadVar__4_50;
#line 482 "unify_gen.m"
  }
#line 482 "unify_gen.m"
}

#line 413 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__raw_tag_test__413__1_2_p_0(
#line 413 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ForeignLang_10,
#line 413 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_113)
#line 413 "unify_gen.m"
{
#line 413 "unify_gen.m"
  {
#line 413 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__ForeignLang_10 == ll_backend__unify_gen__HeadVar__2_113);

#line 413 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 413 "unify_gen.m"
  }
#line 413 "unify_gen.m"
}

#line 221 "unify_gen.m"
static MR_Word MR_CALL 
ll_backend__unify_gen__IntroducedFrom__func__get_cons_arg_widths__221__1_1_f_0(
#line 221 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__1_21)
#line 221 "unify_gen.m"
{
#line 221 "unify_gen.m"
  {
#line 221 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 221 "unify_gen.m"
    MR_Word ll_backend__unify_gen__HeadVar__2_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__HeadVar__1_21, (MR_Integer) 2)));
#line 221 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__HeadVar__1_21, (MR_Integer) 0)));
#line 221 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__HeadVar__1_21, (MR_Integer) 1)));
#line 221 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__HeadVar__1_21, (MR_Integer) 3)));

#line 221 "unify_gen.m"
    return ll_backend__unify_gen__HeadVar__2_22;
#line 221 "unify_gen.m"
  }
#line 221 "unify_gen.m"
}

#line 107 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen____Compare____uni_val_0_0(
#line 107 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__HeadVar__1_1,
#line 107 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_2,
#line 107 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__3_3)
#line 107 "unify_gen.m"
{
#line 107 "unify_gen.m"
  {
#line 107 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 107 "unify_gen.m"
    MR_Integer ll_backend__unify_gen__CastX_17 = (MR_Integer) ll_backend__unify_gen__HeadVar__2_2;
#line 107 "unify_gen.m"
    MR_Integer ll_backend__unify_gen__CastY_18 = (MR_Integer) ll_backend__unify_gen__HeadVar__3_3;

#line 107 "unify_gen.m"
    ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__CastX_17 == ll_backend__unify_gen__CastY_18);
#line 107 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 6905 "ll_backend.unify_gen.c"
      *ll_backend__unify_gen__HeadVar__1_1 = (MR_Integer) 0;
#line 107 "unify_gen.m"
    else
#line 107 "unify_gen.m"
      if (((MR_tag((MR_Word) ll_backend__unify_gen__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 107 "unify_gen.m"
        {
#line 107 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 107 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__2_2, (MR_Integer) 0)));

#line 107 "unify_gen.m"
          if (((MR_tag((MR_Word) ll_backend__unify_gen__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 107 "unify_gen.m"
            {
#line 107 "unify_gen.m"
              MR_Word ll_backend__unify_gen__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__3_3, (MR_Integer) 0)));
#line 107 "unify_gen.m"
              MR_Word ll_backend__unify_gen__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__3_3, (MR_Integer) 1)));
#line 107 "unify_gen.m"
              MR_Word ll_backend__unify_gen__V_16_16;

#line 107 "unify_gen.m"
              {
#line 107 "unify_gen.m"
                ll_backend__llds____Compare____lval_0_0(&ll_backend__unify_gen__V_16_16, ll_backend__unify_gen__V_23_23, ll_backend__unify_gen__V_14_14);
              }
#line 6934 "ll_backend.unify_gen.c"
              ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__V_16_16 == (MR_Integer) 0);
#line 107 "unify_gen.m"
              ll_backend__unify_gen__succeeded = !(ll_backend__unify_gen__succeeded);
#line 107 "unify_gen.m"
              if (ll_backend__unify_gen__succeeded)
#line 107 "unify_gen.m"
                *ll_backend__unify_gen__HeadVar__1_1 = ll_backend__unify_gen__V_16_16;
#line 107 "unify_gen.m"
              else
#line 107 "unify_gen.m"
                {
#line 107 "unify_gen.m"
                  parse_tree__prog_data____Compare____arg_width_0_0(ll_backend__unify_gen__HeadVar__1_1, ll_backend__unify_gen__V_22_22, ll_backend__unify_gen__V_15_15);
#line 107 "unify_gen.m"
                  return;
                }
#line 107 "unify_gen.m"
            }
#line 107 "unify_gen.m"
          else
#line 6955 "ll_backend.unify_gen.c"
            *ll_backend__unify_gen__HeadVar__1_1 = (MR_Integer) 2;
#line 107 "unify_gen.m"
        }
#line 107 "unify_gen.m"
      else
#line 107 "unify_gen.m"
        {
#line 107 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__HeadVar__2_2, (MR_Integer) 0)));

#line 107 "unify_gen.m"
          if (((MR_tag((MR_Word) ll_backend__unify_gen__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6968 "ll_backend.unify_gen.c"
            *ll_backend__unify_gen__HeadVar__1_1 = (MR_Integer) 1;
#line 107 "unify_gen.m"
          else
#line 107 "unify_gen.m"
            {
#line 107 "unify_gen.m"
              MR_Word ll_backend__unify_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__HeadVar__3_3, (MR_Integer) 0)));

#line 107 "unify_gen.m"
              {
#line 107 "unify_gen.m"
                mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], ll_backend__unify_gen__HeadVar__1_1, ((MR_Box) (ll_backend__unify_gen__V_24_24)), ((MR_Box) (ll_backend__unify_gen__V_5_5)));
#line 107 "unify_gen.m"
                return;
              }
#line 107 "unify_gen.m"
            }
#line 107 "unify_gen.m"
        }
#line 107 "unify_gen.m"
  }
#line 107 "unify_gen.m"
}

#line 107 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____uni_val_0_0(
#line 107 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__1_1,
#line 107 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_2)
#line 107 "unify_gen.m"
{
#line 107 "unify_gen.m"
  {
#line 107 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 107 "unify_gen.m"
    MR_Integer ll_backend__unify_gen__CastX_9 = (MR_Integer) ll_backend__unify_gen__HeadVar__1_1;
#line 107 "unify_gen.m"
    MR_Integer ll_backend__unify_gen__CastY_10 = (MR_Integer) ll_backend__unify_gen__HeadVar__2_2;

#line 107 "unify_gen.m"
    ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__CastX_9 == ll_backend__unify_gen__CastY_10);
#line 107 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 107 "unify_gen.m"
      ll_backend__unify_gen__succeeded = MR_TRUE;
#line 107 "unify_gen.m"
    else
#line 107 "unify_gen.m"
      if (((MR_tag((MR_Word) ll_backend__unify_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 107 "unify_gen.m"
        {
#line 107 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 107 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 107 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_7_7;
#line 107 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_8_8;

#line 107 "unify_gen.m"
          ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 107 "unify_gen.m"
          if (ll_backend__unify_gen__succeeded)
#line 107 "unify_gen.m"
            {
#line 107 "unify_gen.m"
              ll_backend__unify_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 107 "unify_gen.m"
              ll_backend__unify_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 7042 "ll_backend.unify_gen.c"
              {
#line 7044 "ll_backend.unify_gen.c"
                ll_backend__unify_gen__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__unify_gen__V_5_5, ll_backend__unify_gen__V_7_7);
              }
#line 107 "unify_gen.m"
              if (ll_backend__unify_gen__succeeded)
#line 7049 "ll_backend.unify_gen.c"
                {
#line 7051 "ll_backend.unify_gen.c"
                  return ll_backend__unify_gen__succeeded = parse_tree__prog_data____Unify____arg_width_0_0(ll_backend__unify_gen__V_6_6, ll_backend__unify_gen__V_8_8);
                }
#line 107 "unify_gen.m"
            }
#line 107 "unify_gen.m"
        }
#line 107 "unify_gen.m"
      else
#line 107 "unify_gen.m"
        {
#line 107 "unify_gen.m"
          MR_Word ll_backend__unify_gen__TypeInfo_13_13;
#line 107 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 107 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_4_4;

#line 107 "unify_gen.m"
          ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 107 "unify_gen.m"
          if (ll_backend__unify_gen__succeeded)
#line 107 "unify_gen.m"
            {
#line 107 "unify_gen.m"
              ll_backend__unify_gen__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 7077 "ll_backend.unify_gen.c"
              ll_backend__unify_gen__TypeInfo_13_13 = (MR_Word) &ll_backend__unify_gen_scalar_common_1[0];
#line 7079 "ll_backend.unify_gen.c"
              {
#line 7081 "ll_backend.unify_gen.c"
                return ll_backend__unify_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__unify_gen__TypeInfo_13_13, ((MR_Box) (ll_backend__unify_gen__V_3_3)), ((MR_Box) (ll_backend__unify_gen__V_4_4)));
              }
#line 107 "unify_gen.m"
            }
#line 107 "unify_gen.m"
        }
#line 107 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 107 "unify_gen.m"
  }
#line 107 "unify_gen.m"
}

#line 37 "unify_gen.m"
void MR_CALL 
ll_backend__unify_gen____Compare____test_sense_0_0(
#line 37 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__HeadVar__1_1,
#line 37 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_2,
#line 37 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__3_3)
#line 37 "unify_gen.m"
{
#line 37 "unify_gen.m"
  {
#line 37 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 37 "unify_gen.m"
    MR_Integer ll_backend__unify_gen__Cast_HeadVar1_4 = (MR_Integer) ll_backend__unify_gen__HeadVar__2_2;
#line 37 "unify_gen.m"
    MR_Integer ll_backend__unify_gen__Cast_HeadVar2_5 = (MR_Integer) ll_backend__unify_gen__HeadVar__3_3;

#line 37 "unify_gen.m"
    {
#line 37 "unify_gen.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__unify_gen__HeadVar__1_1, ll_backend__unify_gen__Cast_HeadVar1_4, ll_backend__unify_gen__Cast_HeadVar2_5);
#line 37 "unify_gen.m"
      return;
    }
#line 37 "unify_gen.m"
  }
#line 37 "unify_gen.m"
}

#line 37 "unify_gen.m"
MR_bool MR_CALL 
ll_backend__unify_gen____Unify____test_sense_0_0(
#line 37 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_1,
#line 37 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_2)
#line 37 "unify_gen.m"
{
#line 7136 "ll_backend.unify_gen.c"
  {
#line 7138 "ll_backend.unify_gen.c"
    MR_bool ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__HeadVar__2_1 == ll_backend__unify_gen__HeadVar__2_2);

#line 7141 "ll_backend.unify_gen.c"
    return ll_backend__unify_gen__succeeded;
#line 7143 "ll_backend.unify_gen.c"
  }
#line 37 "unify_gen.m"
}

#line 113 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen____Compare____field_addr_0_0(
#line 113 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__HeadVar__1_1,
#line 113 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_2,
#line 113 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__3_3)
#line 113 "unify_gen.m"
{
#line 113 "unify_gen.m"
  {
#line 113 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 113 "unify_gen.m"
    MR_Integer ll_backend__unify_gen__CastX_9 = (MR_Integer) ll_backend__unify_gen__HeadVar__2_2;
#line 113 "unify_gen.m"
    MR_Integer ll_backend__unify_gen__CastY_10 = (MR_Integer) ll_backend__unify_gen__HeadVar__3_3;

#line 113 "unify_gen.m"
    ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__CastX_9 == ll_backend__unify_gen__CastY_10);
#line 113 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 7172 "ll_backend.unify_gen.c"
      *ll_backend__unify_gen__HeadVar__1_1 = (MR_Integer) 0;
#line 113 "unify_gen.m"
    else
#line 113 "unify_gen.m"
      {
#line 113 "unify_gen.m"
        MR_Integer ll_backend__unify_gen__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 113 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 113 "unify_gen.m"
        MR_Integer ll_backend__unify_gen__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__HeadVar__3_3, (MR_Integer) 0)));
#line 113 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__HeadVar__3_3, (MR_Integer) 1)));
#line 113 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_8_8;

#line 113 "unify_gen.m"
        {
#line 113 "unify_gen.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__unify_gen__V_8_8, ll_backend__unify_gen__V_4_4, ll_backend__unify_gen__V_6_6);
        }
#line 7194 "ll_backend.unify_gen.c"
        ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__V_8_8 == (MR_Integer) 0);
#line 113 "unify_gen.m"
        ll_backend__unify_gen__succeeded = !(ll_backend__unify_gen__succeeded);
#line 113 "unify_gen.m"
        if (ll_backend__unify_gen__succeeded)
#line 113 "unify_gen.m"
          *ll_backend__unify_gen__HeadVar__1_1 = ll_backend__unify_gen__V_8_8;
#line 113 "unify_gen.m"
        else
#line 113 "unify_gen.m"
          {
#line 113 "unify_gen.m"
            {
#line 113 "unify_gen.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], ll_backend__unify_gen__HeadVar__1_1, ((MR_Box) (ll_backend__unify_gen__V_5_5)), ((MR_Box) (ll_backend__unify_gen__V_7_7)));
#line 113 "unify_gen.m"
              return;
            }
#line 113 "unify_gen.m"
          }
#line 113 "unify_gen.m"
      }
#line 113 "unify_gen.m"
  }
#line 113 "unify_gen.m"
}

#line 113 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____field_addr_0_0(
#line 113 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__1_1,
#line 113 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_2)
#line 113 "unify_gen.m"
{
#line 113 "unify_gen.m"
  {
#line 113 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 113 "unify_gen.m"
    MR_Integer ll_backend__unify_gen__CastX_7 = (MR_Integer) ll_backend__unify_gen__HeadVar__1_1;
#line 113 "unify_gen.m"
    MR_Integer ll_backend__unify_gen__CastY_8 = (MR_Integer) ll_backend__unify_gen__HeadVar__2_2;

#line 113 "unify_gen.m"
    ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__CastX_7 == ll_backend__unify_gen__CastY_8);
#line 113 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 113 "unify_gen.m"
      ll_backend__unify_gen__succeeded = MR_TRUE;
#line 113 "unify_gen.m"
    else
#line 113 "unify_gen.m"
      {
#line 113 "unify_gen.m"
        MR_Word ll_backend__unify_gen__TypeInfo_9_9;
#line 113 "unify_gen.m"
        MR_Integer ll_backend__unify_gen__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 113 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 113 "unify_gen.m"
        MR_Integer ll_backend__unify_gen__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 113 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__HeadVar__2_2, (MR_Integer) 1)));

#line 7261 "ll_backend.unify_gen.c"
        ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__V_3_3 == ll_backend__unify_gen__V_5_5);
#line 113 "unify_gen.m"
        if (ll_backend__unify_gen__succeeded)
#line 113 "unify_gen.m"
          {
#line 7267 "ll_backend.unify_gen.c"
            ll_backend__unify_gen__TypeInfo_9_9 = (MR_Word) &ll_backend__unify_gen_scalar_common_1[0];
#line 7269 "ll_backend.unify_gen.c"
            {
#line 7271 "ll_backend.unify_gen.c"
              return ll_backend__unify_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__unify_gen__TypeInfo_9_9, ((MR_Box) (ll_backend__unify_gen__V_4_4)), ((MR_Box) (ll_backend__unify_gen__V_6_6)));
            }
#line 113 "unify_gen.m"
          }
#line 113 "unify_gen.m"
      }
#line 113 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 113 "unify_gen.m"
  }
#line 113 "unify_gen.m"
}

#line 1907 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen____Compare____active_ground_term_map_0_0(
#line 1907 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__HeadVar__1_1,
#line 1907 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_2,
#line 1907 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__3_3)
#line 1907 "unify_gen.m"
{
#line 1907 "unify_gen.m"
  {
#line 1907 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 1907 "unify_gen.m"
    MR_Word ll_backend__unify_gen__Cast_HeadVar1_4 = ll_backend__unify_gen__HeadVar__2_2;
#line 1907 "unify_gen.m"
    MR_Word ll_backend__unify_gen__Cast_HeadVar2_5 = ll_backend__unify_gen__HeadVar__3_3;

#line 1907 "unify_gen.m"
    {
#line 1907 "unify_gen.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_2[2], ll_backend__unify_gen__HeadVar__1_1, ((MR_Box) (ll_backend__unify_gen__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__unify_gen__Cast_HeadVar2_5)));
#line 1907 "unify_gen.m"
      return;
    }
#line 1907 "unify_gen.m"
  }
#line 1907 "unify_gen.m"
}

#line 1907 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____active_ground_term_map_0_0(
#line 1907 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__1_1,
#line 1907 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_2)
#line 1907 "unify_gen.m"
{
#line 1907 "unify_gen.m"
  {
#line 1907 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 1907 "unify_gen.m"
    MR_Word ll_backend__unify_gen__Cast_HeadVar1_3 = ll_backend__unify_gen__HeadVar__1_1;
#line 1907 "unify_gen.m"
    MR_Word ll_backend__unify_gen__Cast_HeadVar2_4 = ll_backend__unify_gen__HeadVar__2_2;

#line 1907 "unify_gen.m"
    {
#line 1907 "unify_gen.m"
      return ll_backend__unify_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_2[2], ((MR_Box) (ll_backend__unify_gen__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__unify_gen__Cast_HeadVar2_4)));
    }
#line 1907 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 1907 "unify_gen.m"
  }
#line 1907 "unify_gen.m"
}

#line 2242 "unify_gen.m"
static MR_Word MR_CALL 
ll_backend__unify_gen__bitwise_or_cell_arg_2_f_0(
#line 2242 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CellArgA_4,
#line 2242 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CellArgB_5)
#line 2242 "unify_gen.m"
{
#line 2247 "unify_gen.m"
  {
#line 2247 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 2247 "unify_gen.m"
    MR_Word ll_backend__unify_gen__CellArg_6;
#line 2247 "unify_gen.m"
    MR_Word ll_backend__unify_gen__CellArgPrime_7;

#line 2256 "unify_gen.m"
    if ((ll_backend__unify_gen__CellArgA_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2256 "unify_gen.m"
      if ((ll_backend__unify_gen__CellArgB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2270 "unify_gen.m"
        {
#line 2270 "unify_gen.m"
          ll_backend__unify_gen__CellArgPrime_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2270 "unify_gen.m"
          ll_backend__unify_gen__succeeded = MR_TRUE;
#line 2270 "unify_gen.m"
        }
#line 2256 "unify_gen.m"
      else
#line 2256 "unify_gen.m"
        if (((MR_tag((MR_Word) ll_backend__unify_gen__CellArgB_5)) == (MR_mktag((MR_Integer) 1))))
#line 2266 "unify_gen.m"
          {
#line 2266 "unify_gen.m"
            MR_Word ll_backend__unify_gen__Rval_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArgB_5, (MR_Integer) 0)));
#line 2267 "unify_gen.m"
            MR_Word ll_backend__unify_gen__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArgB_5, (MR_Integer) 1)));

#line 2268 "unify_gen.m"
            {
#line 2268 "unify_gen.m"
              ll_backend__unify_gen__CellArgPrime_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2268 "unify_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArgPrime_7, 0) = ((MR_Box) (ll_backend__unify_gen__Rval_26));
#line 2268 "unify_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArgPrime_7, 1) = ((MR_Box) ((MR_Integer) 1));
#line 2268 "unify_gen.m"
            }
#line 2266 "unify_gen.m"
            ll_backend__unify_gen__succeeded = MR_TRUE;
#line 2266 "unify_gen.m"
          }
#line 2256 "unify_gen.m"
        else
#line 2256 "unify_gen.m"
          ll_backend__unify_gen__succeeded = MR_FALSE;
#line 2256 "unify_gen.m"
    else
#line 2256 "unify_gen.m"
      if (((MR_tag((MR_Word) ll_backend__unify_gen__CellArgA_4)) == (MR_mktag((MR_Integer) 1))))
#line 2256 "unify_gen.m"
        {
#line 2256 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArgA_4, (MR_Integer) 1)));
#line 2256 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArgA_4, (MR_Integer) 0)));

#line 2256 "unify_gen.m"
          if ((ll_backend__unify_gen__CellArgB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2262 "unify_gen.m"
            {
#line 2264 "unify_gen.m"
              {
#line 2264 "unify_gen.m"
                ll_backend__unify_gen__CellArgPrime_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2264 "unify_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArgPrime_7, 0) = ((MR_Box) (ll_backend__unify_gen__V_28_28));
#line 2264 "unify_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArgPrime_7, 1) = ((MR_Box) ((MR_Integer) 1));
#line 2264 "unify_gen.m"
              }
#line 2262 "unify_gen.m"
              ll_backend__unify_gen__succeeded = MR_TRUE;
#line 2262 "unify_gen.m"
            }
#line 2256 "unify_gen.m"
          else
#line 2256 "unify_gen.m"
            if (((MR_tag((MR_Word) ll_backend__unify_gen__CellArgB_5)) == (MR_mktag((MR_Integer) 1))))
#line 2256 "unify_gen.m"
              {
#line 2256 "unify_gen.m"
                MR_Word ll_backend__unify_gen__RvalB_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArgB_5, (MR_Integer) 0)));
#line 2256 "unify_gen.m"
                MR_Word ll_backend__unify_gen__CompletenessB_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArgB_5, (MR_Integer) 1)));
#line 2256 "unify_gen.m"
                MR_Word ll_backend__unify_gen__Expr_18;
#line 2256 "unify_gen.m"
                MR_Word ll_backend__unify_gen__Completeness_19;

#line 2258 "unify_gen.m"
                {
#line 2258 "unify_gen.m"
                  ll_backend__unify_gen__Expr_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2258 "unify_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Expr_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2258 "unify_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Expr_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
#line 2258 "unify_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Expr_18, 2) = ((MR_Box) (ll_backend__unify_gen__V_28_28));
#line 2258 "unify_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Expr_18, 3) = ((MR_Box) (ll_backend__unify_gen__RvalB_16));
#line 2258 "unify_gen.m"
                }
#line 2277 "unify_gen.m"
                if ((ll_backend__unify_gen__V_27_27 == (MR_Integer) 0))
#line 2277 "unify_gen.m"
                  if ((ll_backend__unify_gen__CompletenessB_17 == (MR_Integer) 0))
#line 2277 "unify_gen.m"
                    ll_backend__unify_gen__Completeness_19 = (MR_Integer) 0;
#line 2277 "unify_gen.m"
                  else
#line 2279 "unify_gen.m"
                    ll_backend__unify_gen__Completeness_19 = (MR_Integer) 1;
#line 2277 "unify_gen.m"
                else
#line 2277 "unify_gen.m"
                  if ((ll_backend__unify_gen__CompletenessB_17 == (MR_Integer) 0))
#line 2278 "unify_gen.m"
                    ll_backend__unify_gen__Completeness_19 = (MR_Integer) 1;
#line 2277 "unify_gen.m"
                  else
#line 2280 "unify_gen.m"
                    ll_backend__unify_gen__Completeness_19 = (MR_Integer) 1;
#line 2260 "unify_gen.m"
                {
#line 2260 "unify_gen.m"
                  ll_backend__unify_gen__CellArgPrime_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2260 "unify_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArgPrime_7, 0) = ((MR_Box) (ll_backend__unify_gen__Expr_18));
#line 2260 "unify_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArgPrime_7, 1) = ((MR_Box) (ll_backend__unify_gen__Completeness_19));
#line 2260 "unify_gen.m"
                }
#line 2256 "unify_gen.m"
                ll_backend__unify_gen__succeeded = MR_TRUE;
#line 2256 "unify_gen.m"
              }
#line 2256 "unify_gen.m"
            else
#line 2256 "unify_gen.m"
              ll_backend__unify_gen__succeeded = MR_FALSE;
#line 2256 "unify_gen.m"
        }
#line 2256 "unify_gen.m"
      else
#line 2256 "unify_gen.m"
        ll_backend__unify_gen__succeeded = MR_FALSE;
#line 2247 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 2246 "unify_gen.m"
      ll_backend__unify_gen__CellArg_6 = ll_backend__unify_gen__CellArgPrime_7;
#line 2247 "unify_gen.m"
    else
#line 2248 "unify_gen.m"
      {
#line 2248 "unify_gen.m"
        {
#line 2248 "unify_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "function \140ll_backend.unify_gen.bitwise_or_cell_arg\'/2", (MR_String) "invalid combination");
        }
#line 2248 "unify_gen.m"
      }
#line 2247 "unify_gen.m"
    return ll_backend__unify_gen__CellArg_6;
#line 2247 "unify_gen.m"
  }
#line 2242 "unify_gen.m"
}

#line 2237 "unify_gen.m"
static MR_Word MR_CALL 
ll_backend__unify_gen__right_shift_rval_2_f_0(
#line 2237 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Rval_4,
#line 2237 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__Shift_5)
#line 2237 "unify_gen.m"
{
#line 2239 "unify_gen.m"
  {
#line 2239 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 2239 "unify_gen.m"
    MR_Word ll_backend__unify_gen__HeadVar__3_3;
#line 2239 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_7_7;
#line 2239 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_8_8;

#line 2240 "unify_gen.m"
    {
#line 2240 "unify_gen.m"
      ll_backend__unify_gen__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2240 "unify_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_8_8, 0) = ((MR_Box) (ll_backend__unify_gen__Shift_5));
#line 2240 "unify_gen.m"
    }
#line 2240 "unify_gen.m"
    {
#line 2240 "unify_gen.m"
      ll_backend__unify_gen__V_7_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2240 "unify_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_7_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2240 "unify_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_7_7, 1) = ((MR_Box) (ll_backend__unify_gen__V_8_8));
#line 2240 "unify_gen.m"
    }
#line 2239 "unify_gen.m"
    {
#line 2239 "unify_gen.m"
      ll_backend__unify_gen__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2239 "unify_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2239 "unify_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 2239 "unify_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__HeadVar__3_3, 2) = ((MR_Box) (ll_backend__unify_gen__Rval_4));
#line 2239 "unify_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__HeadVar__3_3, 3) = ((MR_Box) (ll_backend__unify_gen__V_7_7));
#line 2239 "unify_gen.m"
    }
#line 2239 "unify_gen.m"
    return ll_backend__unify_gen__HeadVar__3_3;
#line 2239 "unify_gen.m"
  }
#line 2237 "unify_gen.m"
}

#line 2219 "unify_gen.m"
static MR_Word MR_CALL 
ll_backend__unify_gen__maybe_left_shift_rval_2_f_0(
#line 2219 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Rval_4,
#line 2219 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__Shift_5)
#line 2219 "unify_gen.m"
{
#line 2221 "unify_gen.m"
  {
#line 2221 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__Shift_5 == (MR_Integer) 0);
#line 2221 "unify_gen.m"
    MR_Word ll_backend__unify_gen__HeadVar__3_3;

#line 2221 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 2221 "unify_gen.m"
      ll_backend__unify_gen__HeadVar__3_3 = ll_backend__unify_gen__Rval_4;
#line 2221 "unify_gen.m"
    else
#line 2225 "unify_gen.m"
      {
#line 2225 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_7_7;
#line 2225 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_8_8;

#line 2225 "unify_gen.m"
        {
#line 2225 "unify_gen.m"
          ll_backend__unify_gen__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2225 "unify_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_8_8, 0) = ((MR_Box) (ll_backend__unify_gen__Shift_5));
#line 2225 "unify_gen.m"
        }
#line 2225 "unify_gen.m"
        {
#line 2225 "unify_gen.m"
          ll_backend__unify_gen__V_7_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2225 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_7_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2225 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_7_7, 1) = ((MR_Box) (ll_backend__unify_gen__V_8_8));
#line 2225 "unify_gen.m"
        }
#line 2221 "unify_gen.m"
        {
#line 2221 "unify_gen.m"
          ll_backend__unify_gen__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2221 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2221 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 2221 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__HeadVar__3_3, 2) = ((MR_Box) (ll_backend__unify_gen__Rval_4));
#line 2221 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__HeadVar__3_3, 3) = ((MR_Box) (ll_backend__unify_gen__V_7_7));
#line 2221 "unify_gen.m"
        }
#line 2225 "unify_gen.m"
      }
#line 2221 "unify_gen.m"
    return ll_backend__unify_gen__HeadVar__3_3;
#line 2221 "unify_gen.m"
  }
#line 2219 "unify_gen.m"
}

#line 2199 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__shift_combine_rval_type_8_p_0(
#line 2199 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ArgA_9,
#line 2199 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__Shift_10,
#line 2199 "unify_gen.m"
  MR_Word ll_backend__unify_gen__MaybeArgB_11,
#line 2199 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__FinalArg_12)
#line 2199 "unify_gen.m"
{
#line 2203 "unify_gen.m"
  {
#line 2203 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__Shift_10 == (MR_Integer) 0);
#line 2203 "unify_gen.m"
    MR_Word ll_backend__unify_gen__RvalA_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ArgA_9, (MR_Integer) 0)));
#line 2203 "unify_gen.m"
    MR_Word ll_backend__unify_gen__TypeA_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ArgA_9, (MR_Integer) 1)));
#line 2203 "unify_gen.m"
    MR_Word ll_backend__unify_gen__ShiftRvalA_17;
#line 2203 "unify_gen.m"
    MR_Word ll_backend__unify_gen__FinalRval_20;

#line 2221 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 2221 "unify_gen.m"
      ll_backend__unify_gen__ShiftRvalA_17 = ll_backend__unify_gen__RvalA_15;
#line 2221 "unify_gen.m"
    else
#line 2225 "unify_gen.m"
      {
#line 2225 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_33_33;
#line 2225 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_34_34;

#line 2225 "unify_gen.m"
        {
#line 2225 "unify_gen.m"
          ll_backend__unify_gen__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2225 "unify_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_34_34, 0) = ((MR_Box) (ll_backend__unify_gen__Shift_10));
#line 2225 "unify_gen.m"
        }
#line 2225 "unify_gen.m"
        {
#line 2225 "unify_gen.m"
          ll_backend__unify_gen__V_33_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2225 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_33_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2225 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_33_33, 1) = ((MR_Box) (ll_backend__unify_gen__V_34_34));
#line 2225 "unify_gen.m"
        }
#line 2221 "unify_gen.m"
        {
#line 2221 "unify_gen.m"
          ll_backend__unify_gen__ShiftRvalA_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2221 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ShiftRvalA_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2221 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ShiftRvalA_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 2221 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ShiftRvalA_17, 2) = ((MR_Box) (ll_backend__unify_gen__RvalA_15));
#line 2221 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ShiftRvalA_17, 3) = ((MR_Box) (ll_backend__unify_gen__V_33_33));
#line 2221 "unify_gen.m"
        }
#line 2225 "unify_gen.m"
      }
#line 2213 "unify_gen.m"
    if ((ll_backend__unify_gen__MaybeArgB_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2215 "unify_gen.m"
      ll_backend__unify_gen__FinalRval_20 = ll_backend__unify_gen__ShiftRvalA_17;
#line 2213 "unify_gen.m"
    else
#line 2207 "unify_gen.m"
      {
#line 2207 "unify_gen.m"
        MR_Word ll_backend__unify_gen__RvalB_18;
#line 2207 "unify_gen.m"
        MR_Word ll_backend__unify_gen__TypeB_19;
#line 2207 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__MaybeArgB_11, (MR_Integer) 0)));

#line 2207 "unify_gen.m"
        ll_backend__unify_gen__RvalB_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_25_25, (MR_Integer) 0)));
#line 2207 "unify_gen.m"
        ll_backend__unify_gen__TypeB_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_25_25, (MR_Integer) 1)));
#line 2208 "unify_gen.m"
        ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__TypeA_16 == ll_backend__unify_gen__TypeB_19);
#line 2210 "unify_gen.m"
        if (ll_backend__unify_gen__succeeded)
#line 2209 "unify_gen.m"
          {
#line 2209 "unify_gen.m"
            {
#line 2209 "unify_gen.m"
              ll_backend__unify_gen__FinalRval_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2209 "unify_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__FinalRval_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2209 "unify_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__FinalRval_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
#line 2209 "unify_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__FinalRval_20, 2) = ((MR_Box) (ll_backend__unify_gen__ShiftRvalA_17));
#line 2209 "unify_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__FinalRval_20, 3) = ((MR_Box) (ll_backend__unify_gen__RvalB_18));
#line 2209 "unify_gen.m"
            }
#line 2209 "unify_gen.m"
          }
#line 2210 "unify_gen.m"
        else
#line 2211 "unify_gen.m"
          {
#line 2211 "unify_gen.m"
            {
#line 2211 "unify_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.shift_combine_rval_type\'/8", (MR_String) "mismatched llds_types");
#line 2211 "unify_gen.m"
              return;
            }
#line 2211 "unify_gen.m"
          }
#line 2207 "unify_gen.m"
      }
#line 2217 "unify_gen.m"
    {
#line 2217 "unify_gen.m"
      MR_Word base;
#line 2217 "unify_gen.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2217 "unify_gen.m"
      *ll_backend__unify_gen__FinalArg_12 = base;
#line 2217 "unify_gen.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__unify_gen__FinalRval_20));
#line 2217 "unify_gen.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__unify_gen__TypeA_16));
#line 2217 "unify_gen.m"
    }
#line 2203 "unify_gen.m"
  }
#line 2199 "unify_gen.m"
}

#line 2172 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__shift_combine_arg_8_p_0_1(
#line 2172 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg)
#line 2172 "unify_gen.m"
{
#line 2172 "unify_gen.m"
  {
#line 2172 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 2172 "unify_gen.m"
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;

#line 2172 "unify_gen.m"
    {
#line 2172 "unify_gen.m"
      return ll_backend__unify_gen__succeeded = ll_backend__unify_gen__IntroducedFrom__pred__shift_combine_arg__2172__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 4))));
    }
#line 2172 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 2172 "unify_gen.m"
  }
#line 2172 "unify_gen.m"
}

#line 2137 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__shift_combine_arg_8_p_0(
#line 2137 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CellArgA_9,
#line 2137 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__Shift_10,
#line 2137 "unify_gen.m"
  MR_Word ll_backend__unify_gen__MaybeCellArgB_11,
#line 2137 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__FinalCellArg_12,
#line 2137 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_Code_0_28,
#line 2137 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_Code_29,
#line 2137 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_30,
#line 2137 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_31)
#line 2137 "unify_gen.m"
{
#line 2147 "unify_gen.m"
  {
#line 2147 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__Shift_10 == (MR_Integer) 0);

#line 2143 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 2144 "unify_gen.m"
      ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__MaybeCellArgB_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2147 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 2146 "unify_gen.m"
      {
#line 2146 "unify_gen.m"
        *ll_backend__unify_gen__FinalCellArg_12 = ll_backend__unify_gen__CellArgA_9;
#line 2146 "unify_gen.m"
        *ll_backend__unify_gen__STATE_VARIABLE_CI_31 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_30;
#line 2146 "unify_gen.m"
        *ll_backend__unify_gen__STATE_VARIABLE_Code_29 = ll_backend__unify_gen__STATE_VARIABLE_Code_0_28;
#line 2146 "unify_gen.m"
      }
#line 2147 "unify_gen.m"
    else
#line 2189 "unify_gen.m"
      {
#line 2189 "unify_gen.m"
        MR_Word ll_backend__unify_gen__ShiftCellArgA_19;

#line 2170 "unify_gen.m"
        if ((ll_backend__unify_gen__CellArgA_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2184 "unify_gen.m"
          {
#line 2185 "unify_gen.m"
            ll_backend__unify_gen__ShiftCellArgA_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2185 "unify_gen.m"
            *ll_backend__unify_gen__STATE_VARIABLE_Code_29 = ll_backend__unify_gen__STATE_VARIABLE_Code_0_28;
#line 2185 "unify_gen.m"
            *ll_backend__unify_gen__STATE_VARIABLE_CI_31 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_30;
#line 2184 "unify_gen.m"
          }
#line 2170 "unify_gen.m"
        else
#line 2170 "unify_gen.m"
          if (((MR_tag((MR_Word) ll_backend__unify_gen__CellArgA_9)) == (MR_mktag((MR_Integer) 2))))
#line 2171 "unify_gen.m"
            {
#line 2171 "unify_gen.m"
              MR_Word ll_backend__unify_gen__V_35_35;
#line 2171 "unify_gen.m"
              MR_Word ll_backend__unify_gen__RvalA_60 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__unify_gen__CellArgA_9, (MR_Integer) 0)));
#line 2178 "unify_gen.m"
              MR_Word ll_backend__unify_gen__Var_57;

#line 2172 "unify_gen.m"
              {
#line 2172 "unify_gen.m"
                ll_backend__unify_gen__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 2172 "unify_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_35_35, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_5[6]));
#line 2172 "unify_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_35_35, 1) = ((MR_Box) (ll_backend__unify_gen__shift_combine_arg_8_p_0_1));
#line 2172 "unify_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2172 "unify_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_35_35, 3) = ((MR_Box) (ll_backend__unify_gen__Shift_10));
#line 2172 "unify_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_35_35, 4) = ((MR_Box) ((MR_Integer) 0));
#line 2172 "unify_gen.m"
              }
#line 2172 "unify_gen.m"
              {
#line 2172 "unify_gen.m"
                mercury__require__expect_4_p_0(ll_backend__unify_gen__V_35_35, (MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.shift_combine_arg\'/8", (MR_String) "double word rval cannot be shifted");
              }
#line 2174 "unify_gen.m"
              ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__RvalA_60)) == (MR_mktag((MR_Integer) 1)));
#line 2174 "unify_gen.m"
              if (ll_backend__unify_gen__succeeded)
#line 2174 "unify_gen.m"
                {
#line 2174 "unify_gen.m"
                  ll_backend__unify_gen__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__RvalA_60, (MR_Integer) 0)));
#line 2175 "unify_gen.m"
                  {
#line 2175 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__VarCode_55;
#line 2175 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__VarRval_56;

#line 2175 "unify_gen.m"
                    {
#line 2175 "unify_gen.m"
                      ll_backend__code_info__produce_variable_5_p_0(ll_backend__unify_gen__Var_57, &ll_backend__unify_gen__VarCode_55, &ll_backend__unify_gen__VarRval_56, ll_backend__unify_gen__STATE_VARIABLE_CI_0_30, ll_backend__unify_gen__STATE_VARIABLE_CI_31);
                    }
#line 2176 "unify_gen.m"
                    {
#line 2176 "unify_gen.m"
                      ll_backend__unify_gen__ShiftCellArgA_19 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2176 "unify_gen.m"
                      MR_hl_field(MR_mktag(2), ll_backend__unify_gen__ShiftCellArgA_19, 0) = ((MR_Box) (ll_backend__unify_gen__VarRval_56));
#line 2176 "unify_gen.m"
                    }
#line 2177 "unify_gen.m"
                    {
#line 2177 "unify_gen.m"
                      *ll_backend__unify_gen__STATE_VARIABLE_Code_29 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__unify_gen__STATE_VARIABLE_Code_0_28, ll_backend__unify_gen__VarCode_55);
                    }
#line 2175 "unify_gen.m"
                  }
#line 2174 "unify_gen.m"
                }
#line 2174 "unify_gen.m"
              else
#line 2180 "unify_gen.m"
                {
#line 2178 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_42_42;
#line 2178 "unify_gen.m"
                  MR_Float ll_backend__unify_gen__V_24_24;

#line 2178 "unify_gen.m"
                  ll_backend__unify_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__unify_gen__RvalA_60)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__RvalA_60, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 2178 "unify_gen.m"
                  if (ll_backend__unify_gen__succeeded)
#line 2178 "unify_gen.m"
                    {
#line 2178 "unify_gen.m"
                      ll_backend__unify_gen__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__RvalA_60, (MR_Integer) 1)));
#line 2178 "unify_gen.m"
                      ll_backend__unify_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__unify_gen__V_42_42)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_42_42, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 2178 "unify_gen.m"
                      if (ll_backend__unify_gen__succeeded)
#line 2178 "unify_gen.m"
                        ll_backend__unify_gen__V_24_24 = MR_unbox_float((MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_42_42, (MR_Integer) 1)));
#line 2178 "unify_gen.m"
                    }
#line 2180 "unify_gen.m"
                  if (ll_backend__unify_gen__succeeded)
#line 2179 "unify_gen.m"
                    ll_backend__unify_gen__ShiftCellArgA_19 = ll_backend__unify_gen__CellArgA_9;
#line 2180 "unify_gen.m"
                  else
#line 2181 "unify_gen.m"
                    {
#line 2181 "unify_gen.m"
                      {
#line 2181 "unify_gen.m"
                        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.shift_combine_arg\'/8", (MR_String) "non-var or float argument");
#line 2181 "unify_gen.m"
                        return;
                      }
#line 2181 "unify_gen.m"
                    }
#line 2181 "unify_gen.m"
                  *ll_backend__unify_gen__STATE_VARIABLE_CI_31 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_30;
#line 2181 "unify_gen.m"
                  *ll_backend__unify_gen__STATE_VARIABLE_Code_29 = ll_backend__unify_gen__STATE_VARIABLE_Code_0_28;
#line 2180 "unify_gen.m"
                }
#line 2171 "unify_gen.m"
            }
#line 2170 "unify_gen.m"
          else
#line 2170 "unify_gen.m"
            if (((MR_tag((MR_Word) ll_backend__unify_gen__CellArgA_9)) == (MR_mktag((MR_Integer) 1))))
#line 2149 "unify_gen.m"
              {
#line 2149 "unify_gen.m"
                MR_Word ll_backend__unify_gen__RvalA_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArgA_9, (MR_Integer) 0)));
#line 2149 "unify_gen.m"
                MR_Word ll_backend__unify_gen__Completeness_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArgA_9, (MR_Integer) 1)));
#line 2163 "unify_gen.m"
                MR_Word ll_backend__unify_gen__Var_17;

#line 2150 "unify_gen.m"
                ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__RvalA_15)) == (MR_mktag((MR_Integer) 1)));
#line 2150 "unify_gen.m"
                if (ll_backend__unify_gen__succeeded)
#line 2150 "unify_gen.m"
                  {
#line 2150 "unify_gen.m"
                    ll_backend__unify_gen__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__RvalA_15, (MR_Integer) 0)));
#line 2151 "unify_gen.m"
                    {
#line 2151 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__IsDummy_18;

#line 2151 "unify_gen.m"
                      {
#line 2151 "unify_gen.m"
                        ll_backend__unify_gen__IsDummy_18 = ll_backend__code_info__variable_is_of_dummy_type_2_f_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_30, ll_backend__unify_gen__Var_17);
                      }
#line 2155 "unify_gen.m"
                      if ((ll_backend__unify_gen__IsDummy_18 == (MR_Integer) 0))
#line 2153 "unify_gen.m"
                        {
#line 2154 "unify_gen.m"
                          ll_backend__unify_gen__ShiftCellArgA_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2154 "unify_gen.m"
                          *ll_backend__unify_gen__STATE_VARIABLE_Code_29 = ll_backend__unify_gen__STATE_VARIABLE_Code_0_28;
#line 2154 "unify_gen.m"
                          *ll_backend__unify_gen__STATE_VARIABLE_CI_31 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_30;
#line 2153 "unify_gen.m"
                        }
#line 2155 "unify_gen.m"
                      else
#line 2156 "unify_gen.m"
                        {
#line 2156 "unify_gen.m"
                          MR_Word ll_backend__unify_gen__VarCode_20;
#line 2156 "unify_gen.m"
                          MR_Word ll_backend__unify_gen__VarRval_21;
#line 2156 "unify_gen.m"
                          MR_Word ll_backend__unify_gen__V_47_47;

#line 2157 "unify_gen.m"
                          {
#line 2157 "unify_gen.m"
                            ll_backend__code_info__produce_variable_5_p_0(ll_backend__unify_gen__Var_17, &ll_backend__unify_gen__VarCode_20, &ll_backend__unify_gen__VarRval_21, ll_backend__unify_gen__STATE_VARIABLE_CI_0_30, ll_backend__unify_gen__STATE_VARIABLE_CI_31);
                          }
#line 2222 "unify_gen.m"
                          ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__Shift_10 == (MR_Integer) 0);
#line 2221 "unify_gen.m"
                          if (ll_backend__unify_gen__succeeded)
#line 2221 "unify_gen.m"
                            ll_backend__unify_gen__V_47_47 = ll_backend__unify_gen__VarRval_21;
#line 2221 "unify_gen.m"
                          else
#line 2225 "unify_gen.m"
                            {
#line 2225 "unify_gen.m"
                              MR_Word ll_backend__unify_gen__V_70_70;
#line 2225 "unify_gen.m"
                              MR_Word ll_backend__unify_gen__V_71_71;

#line 2225 "unify_gen.m"
                              {
#line 2225 "unify_gen.m"
                                ll_backend__unify_gen__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2225 "unify_gen.m"
                                MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_71_71, 0) = ((MR_Box) (ll_backend__unify_gen__Shift_10));
#line 2225 "unify_gen.m"
                              }
#line 2225 "unify_gen.m"
                              {
#line 2225 "unify_gen.m"
                                ll_backend__unify_gen__V_70_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2225 "unify_gen.m"
                                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_70_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2225 "unify_gen.m"
                                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_70_70, 1) = ((MR_Box) (ll_backend__unify_gen__V_71_71));
#line 2225 "unify_gen.m"
                              }
#line 2221 "unify_gen.m"
                              {
#line 2221 "unify_gen.m"
                                ll_backend__unify_gen__V_47_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2221 "unify_gen.m"
                                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_47_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2221 "unify_gen.m"
                                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 2221 "unify_gen.m"
                                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_47_47, 2) = ((MR_Box) (ll_backend__unify_gen__VarRval_21));
#line 2221 "unify_gen.m"
                                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_47_47, 3) = ((MR_Box) (ll_backend__unify_gen__V_70_70));
#line 2221 "unify_gen.m"
                              }
#line 2225 "unify_gen.m"
                            }
#line 2158 "unify_gen.m"
                          {
#line 2158 "unify_gen.m"
                            ll_backend__unify_gen__ShiftCellArgA_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2158 "unify_gen.m"
                            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ShiftCellArgA_19, 0) = ((MR_Box) (ll_backend__unify_gen__V_47_47));
#line 2158 "unify_gen.m"
                            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ShiftCellArgA_19, 1) = ((MR_Box) (ll_backend__unify_gen__Completeness_16));
#line 2158 "unify_gen.m"
                          }
#line 2161 "unify_gen.m"
                          {
#line 2161 "unify_gen.m"
                            *ll_backend__unify_gen__STATE_VARIABLE_Code_29 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__unify_gen__STATE_VARIABLE_Code_0_28, ll_backend__unify_gen__VarCode_20);
                          }
#line 2156 "unify_gen.m"
                        }
#line 2151 "unify_gen.m"
                    }
#line 2150 "unify_gen.m"
                  }
#line 2150 "unify_gen.m"
                else
#line 2167 "unify_gen.m"
                  {
#line 2167 "unify_gen.m"
                    MR_Integer ll_backend__unify_gen__Int_22;
#line 2163 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__V_49_49;

#line 2163 "unify_gen.m"
                    ll_backend__unify_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__unify_gen__RvalA_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__RvalA_15, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 2163 "unify_gen.m"
                    if (ll_backend__unify_gen__succeeded)
#line 2163 "unify_gen.m"
                      {
#line 2163 "unify_gen.m"
                        ll_backend__unify_gen__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__RvalA_15, (MR_Integer) 1)));
#line 2163 "unify_gen.m"
                        ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__V_49_49)) == (MR_mktag((MR_Integer) 1)));
#line 2163 "unify_gen.m"
                        if (ll_backend__unify_gen__succeeded)
#line 2163 "unify_gen.m"
                          ll_backend__unify_gen__Int_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_49_49, (MR_Integer) 0)));
#line 2163 "unify_gen.m"
                      }
#line 2167 "unify_gen.m"
                    if (ll_backend__unify_gen__succeeded)
#line 2164 "unify_gen.m"
                      {
#line 2164 "unify_gen.m"
                        MR_Integer ll_backend__unify_gen__NewInt_23;
#line 2164 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__V_50_50;
#line 2164 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__V_51_51;

#line 2231 "unify_gen.m"
                        ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__Shift_10 == (MR_Integer) 0);
#line 2230 "unify_gen.m"
                        if (ll_backend__unify_gen__succeeded)
#line 2230 "unify_gen.m"
                          ll_backend__unify_gen__NewInt_23 = ll_backend__unify_gen__Int_22;
#line 2230 "unify_gen.m"
                        else
#line 2230 "unify_gen.m"
                          {
#line 2230 "unify_gen.m"
                            ll_backend__unify_gen__NewInt_23 = mercury__int__f_60_60_2_f_0(ll_backend__unify_gen__Int_22, ll_backend__unify_gen__Shift_10);
                          }
#line 2165 "unify_gen.m"
                        {
#line 2165 "unify_gen.m"
                          ll_backend__unify_gen__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2165 "unify_gen.m"
                          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_51_51, 0) = ((MR_Box) (ll_backend__unify_gen__NewInt_23));
#line 2165 "unify_gen.m"
                        }
#line 2165 "unify_gen.m"
                        {
#line 2165 "unify_gen.m"
                          ll_backend__unify_gen__V_50_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2165 "unify_gen.m"
                          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_50_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2165 "unify_gen.m"
                          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_50_50, 1) = ((MR_Box) (ll_backend__unify_gen__V_51_51));
#line 2165 "unify_gen.m"
                        }
#line 2165 "unify_gen.m"
                        {
#line 2165 "unify_gen.m"
                          ll_backend__unify_gen__ShiftCellArgA_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2165 "unify_gen.m"
                          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ShiftCellArgA_19, 0) = ((MR_Box) (ll_backend__unify_gen__V_50_50));
#line 2165 "unify_gen.m"
                          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ShiftCellArgA_19, 1) = ((MR_Box) (ll_backend__unify_gen__Completeness_16));
#line 2165 "unify_gen.m"
                        }
#line 2164 "unify_gen.m"
                      }
#line 2167 "unify_gen.m"
                    else
#line 2168 "unify_gen.m"
                      {
#line 2168 "unify_gen.m"
                        {
#line 2168 "unify_gen.m"
                          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.shift_combine_arg\'/8", (MR_String) "non-var or int argument");
#line 2168 "unify_gen.m"
                          return;
                        }
#line 2168 "unify_gen.m"
                      }
#line 2168 "unify_gen.m"
                    *ll_backend__unify_gen__STATE_VARIABLE_CI_31 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_30;
#line 2168 "unify_gen.m"
                    *ll_backend__unify_gen__STATE_VARIABLE_Code_29 = ll_backend__unify_gen__STATE_VARIABLE_Code_0_28;
#line 2167 "unify_gen.m"
                  }
#line 2149 "unify_gen.m"
              }
#line 2170 "unify_gen.m"
            else
#line 2187 "unify_gen.m"
              {
#line 2188 "unify_gen.m"
                {
#line 2188 "unify_gen.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.shift_combine_arg\'/8", (MR_String) "cell_arg_take_addr");
#line 2188 "unify_gen.m"
                  return;
                }
#line 2187 "unify_gen.m"
              }
#line 2193 "unify_gen.m"
        if ((ll_backend__unify_gen__MaybeCellArgB_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2195 "unify_gen.m"
          *ll_backend__unify_gen__FinalCellArg_12 = ll_backend__unify_gen__ShiftCellArgA_19;
#line 2193 "unify_gen.m"
        else
#line 2191 "unify_gen.m"
          {
#line 2191 "unify_gen.m"
            MR_Word ll_backend__unify_gen__CellArgB_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__MaybeCellArgB_11, (MR_Integer) 0)));

#line 2192 "unify_gen.m"
            {
#line 2192 "unify_gen.m"
              *ll_backend__unify_gen__FinalCellArg_12 = ll_backend__unify_gen__bitwise_or_cell_arg_2_f_0(ll_backend__unify_gen__ShiftCellArgA_19, ll_backend__unify_gen__CellArgB_27);
            }
#line 2191 "unify_gen.m"
          }
#line 2189 "unify_gen.m"
      }
#line 2147 "unify_gen.m"
  }
#line 2137 "unify_gen.m"
}

#line 2133 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__pack_ground_term_args_3_p_0_1(
#line 2133 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg,
#line 2133 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
#line 2133 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
#line 2133 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_3,
#line 2133 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_4,
#line 2133 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_5,
#line 2133 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_6,
#line 2133 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_7,
#line 2133 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_8)
#line 2133 "unify_gen.m"
{
#line 2133 "unify_gen.m"
  {
#line 2133 "unify_gen.m"
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;
#line 2133 "unify_gen.m"
    MR_Word ll_backend__unify_gen__conv0_FinalArg_12;

#line 2133 "unify_gen.m"
    {
#line 2133 "unify_gen.m"
      ll_backend__unify_gen__shift_combine_rval_type_8_p_0(((MR_Word) ll_backend__unify_gen__wrapper_arg_1), ((MR_Integer) ll_backend__unify_gen__wrapper_arg_2), ((MR_Word) ll_backend__unify_gen__wrapper_arg_3), &ll_backend__unify_gen__conv0_FinalArg_12);
    }
#line 2133 "unify_gen.m"
    *ll_backend__unify_gen__wrapper_arg_4 = ((MR_Box) (ll_backend__unify_gen__conv0_FinalArg_12));
#line 2133 "unify_gen.m"
  }
#line 2133 "unify_gen.m"
}

#line 2129 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__pack_ground_term_args_3_p_0(
#line 2129 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Widths_4,
#line 2129 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_TypedRvals_0_8,
#line 2129 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_TypedRvals_9)
#line 2129 "unify_gen.m"
{
#line 2132 "unify_gen.m"
  {
#line 2132 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 2132 "unify_gen.m"
    MR_Word ll_backend__unify_gen__TypeCtorInfo_23_23;
#line 2133 "unify_gen.m"
    MR_Box ll_backend__unify_gen__conv2_V_6_6;
#line 2133 "unify_gen.m"
    MR_Box ll_backend__unify_gen__conv1_V_7_7;

#line 2133 "unify_gen.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 2133 "unify_gen.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 8350 "ll_backend.unify_gen.c"
    ll_backend__unify_gen__TypeCtorInfo_23_23 = (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0;
#line 2133 "unify_gen.m"
    {
#line 2133 "unify_gen.m"
      backend_libs__arg_pack__pack_args_8_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ll_backend__unify_gen__TypeCtorInfo_23_23, ll_backend__unify_gen__TypeCtorInfo_23_23, (MR_Word) &ll_backend__unify_gen_scalar_common_2[9], ll_backend__unify_gen__Widths_4, ll_backend__unify_gen__STATE_VARIABLE_TypedRvals_0_8, ll_backend__unify_gen__STATE_VARIABLE_TypedRvals_9, ((MR_Box) ((MR_Integer) 0)), &ll_backend__unify_gen__conv2_V_6_6, ((MR_Box) ((MR_Integer) 0)), &ll_backend__unify_gen__conv1_V_7_7);
    }
#line 2132 "unify_gen.m"
  }
#line 2129 "unify_gen.m"
}

#line 2112 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_ground_term_arg_5_p_0(
#line 2112 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Var_6,
#line 2112 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConsArgWidth_7,
#line 2112 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__TypedRval_8,
#line 2112 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_12,
#line 2112 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_13)
#line 2112 "unify_gen.m"
{
#line 2116 "unify_gen.m"
  {
#line 2116 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 2116 "unify_gen.m"
    MR_Word ll_backend__unify_gen__TypedRval0_10;
#line 2117 "unify_gen.m"
    MR_Box ll_backend__unify_gen__conv0_TypedRval0_10;
#line 2125 "unify_gen.m"
    MR_Word ll_backend__unify_gen__Rval_11;
#line 2121 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_15_15;

#line 2117 "unify_gen.m"
    {
#line 2117 "unify_gen.m"
      mercury__map__det_remove_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ((MR_Box) (ll_backend__unify_gen__Var_6)), &ll_backend__unify_gen__conv0_TypedRval0_10, ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_12, ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_13);
    }
#line 2117 "unify_gen.m"
    ll_backend__unify_gen__TypedRval0_10 = ((MR_Word) ll_backend__unify_gen__conv0_TypedRval0_10);
#line 2121 "unify_gen.m"
    ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__ConsArgWidth_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 2121 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 2121 "unify_gen.m"
      {
#line 2122 "unify_gen.m"
        ll_backend__unify_gen__Rval_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__TypedRval0_10, (MR_Integer) 0)));
#line 2122 "unify_gen.m"
        ll_backend__unify_gen__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__TypedRval0_10, (MR_Integer) 1)));
#line 2122 "unify_gen.m"
        ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__V_15_15 == (MR_Integer) 11);
#line 2121 "unify_gen.m"
      }
#line 2125 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 2124 "unify_gen.m"
      {
#line 2124 "unify_gen.m"
        {
#line 2124 "unify_gen.m"
          MR_Word base;
#line 2124 "unify_gen.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2124 "unify_gen.m"
          *ll_backend__unify_gen__TypedRval_8 = base;
#line 2124 "unify_gen.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__unify_gen__Rval_11));
#line 2124 "unify_gen.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 9));
#line 2124 "unify_gen.m"
        }
#line 2124 "unify_gen.m"
      }
#line 2125 "unify_gen.m"
    else
#line 2126 "unify_gen.m"
      *ll_backend__unify_gen__TypedRval_8 = ll_backend__unify_gen__TypedRval0_10;
#line 2116 "unify_gen.m"
  }
#line 2112 "unify_gen.m"
}

#line 2109 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_ground_term_args_5_p_0_1(
#line 2109 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg,
#line 2109 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
#line 2109 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
#line 2109 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_3,
#line 2109 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_4,
#line 2109 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_5)
#line 2109 "unify_gen.m"
{
#line 2109 "unify_gen.m"
  {
#line 2109 "unify_gen.m"
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;
#line 2109 "unify_gen.m"
    MR_Word ll_backend__unify_gen__conv1_TypedRval_8;
#line 2109 "unify_gen.m"
    MR_Word ll_backend__unify_gen__conv0_STATE_VARIABLE_ActiveMap_13;

#line 2109 "unify_gen.m"
    {
#line 2109 "unify_gen.m"
      ll_backend__unify_gen__generate_ground_term_arg_5_p_0(((MR_Word) ll_backend__unify_gen__wrapper_arg_1), ((MR_Word) ll_backend__unify_gen__wrapper_arg_2), &ll_backend__unify_gen__conv1_TypedRval_8, ((MR_Word) ll_backend__unify_gen__wrapper_arg_4), &ll_backend__unify_gen__conv0_STATE_VARIABLE_ActiveMap_13);
    }
#line 2109 "unify_gen.m"
    *ll_backend__unify_gen__wrapper_arg_3 = ((MR_Box) (ll_backend__unify_gen__conv1_TypedRval_8));
#line 2109 "unify_gen.m"
    *ll_backend__unify_gen__wrapper_arg_5 = ((MR_Box) (ll_backend__unify_gen__conv0_STATE_VARIABLE_ActiveMap_13));
#line 2109 "unify_gen.m"
  }
#line 2109 "unify_gen.m"
}

#line 2104 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_ground_term_args_5_p_0(
#line 2104 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Vars_6,
#line 2104 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConsArgWidths_7,
#line 2104 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__TypedRvals_8,
#line 2104 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_10,
#line 2104 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_11)
#line 2104 "unify_gen.m"
{
#line 2108 "unify_gen.m"
  {
#line 2108 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 2109 "unify_gen.m"
    MR_Box ll_backend__unify_gen__conv2_STATE_VARIABLE_ActiveMap_11;

#line 2109 "unify_gen.m"
    {
#line 2109 "unify_gen.m"
      mercury__list__map_corresponding_foldl_6_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, (MR_Word) &ll_backend__unify_gen_scalar_common_2[2], (MR_Word) &ll_backend__unify_gen_scalar_common_2[8], ll_backend__unify_gen__Vars_6, ll_backend__unify_gen__ConsArgWidths_7, ll_backend__unify_gen__TypedRvals_8, ((MR_Box) (ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_10)), &ll_backend__unify_gen__conv2_STATE_VARIABLE_ActiveMap_11);
    }
#line 2109 "unify_gen.m"
    *ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_11 = ((MR_Word) ll_backend__unify_gen__conv2_STATE_VARIABLE_ActiveMap_11);
#line 2108 "unify_gen.m"
  }
#line 2104 "unify_gen.m"
}

#line 2002 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__generate_ground_term_conjunct_tag_9_p_0_1(
#line 2002 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg)
#line 2002 "unify_gen.m"
{
#line 2002 "unify_gen.m"
  {
#line 2002 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 2002 "unify_gen.m"
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;

#line 2002 "unify_gen.m"
    {
#line 2002 "unify_gen.m"
      return ll_backend__unify_gen__succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_ground_term_conjunct_tag__2002__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 4))));
    }
#line 2002 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 2002 "unify_gen.m"
  }
#line 2002 "unify_gen.m"
}

#line 1984 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_ground_term_conjunct_tag_9_p_0(
#line 1984 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Var_10,
#line 1984 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConsTag_11,
#line 1984 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Args_12,
#line 1984 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConsArgWidths_13,
#line 1984 "unify_gen.m"
  MR_Word ll_backend__unify_gen__UnboxedFloats_14,
#line 1984 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_67,
#line 1984 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_68,
#line 1984 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_69,
#line 1984 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_70)
#line 1984 "unify_gen.m"
{
#line 2016 "unify_gen.m"
  while (MR_TRUE)
#line 2016 "unify_gen.m"
    {
#line 2016 "unify_gen.m"
      /* tailcall optimized into a loop */
#line 2016 "unify_gen.m"
      {
#line 2016 "unify_gen.m"
        MR_bool ll_backend__unify_gen__succeeded;

#line 2016 "unify_gen.m"
        if ((ll_backend__unify_gen__ConsTag_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 2035 "unify_gen.m"
          {
#line 2039 "unify_gen.m"
            if ((ll_backend__unify_gen__Args_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2037 "unify_gen.m"
              {
#line 2038 "unify_gen.m"
                {
#line 2038 "unify_gen.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term_conjunct_tag\'/9", (MR_String) "no_tag arity != 1");
#line 2038 "unify_gen.m"
                  return;
                }
#line 2037 "unify_gen.m"
              }
#line 2039 "unify_gen.m"
            else
#line 2039 "unify_gen.m"
              {
#line 2039 "unify_gen.m"
                MR_Word ll_backend__unify_gen__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Args_12, (MR_Integer) 1)));
#line 2039 "unify_gen.m"
                MR_Word ll_backend__unify_gen__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Args_12, (MR_Integer) 0)));

#line 2039 "unify_gen.m"
                if ((ll_backend__unify_gen__V_205_205 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2040 "unify_gen.m"
                  {
#line 2040 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__TypeInfo_158_158 = (MR_Word) &ll_backend__unify_gen_scalar_common_1[0];
#line 2040 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__TypeCtorInfo_159_159 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0;
#line 2040 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_101_101;
#line 2040 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__RvalType_126;
#line 2041 "unify_gen.m"
                    MR_Box ll_backend__unify_gen__conv0_RvalType_126;

#line 2041 "unify_gen.m"
                    {
#line 2041 "unify_gen.m"
                      mercury__map__det_remove_4_p_0(ll_backend__unify_gen__TypeInfo_158_158, ll_backend__unify_gen__TypeCtorInfo_159_159, ((MR_Box) (ll_backend__unify_gen__V_206_206)), &ll_backend__unify_gen__conv0_RvalType_126, ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_69, &ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_101_101);
                    }
#line 2041 "unify_gen.m"
                    ll_backend__unify_gen__RvalType_126 = ((MR_Word) ll_backend__unify_gen__conv0_RvalType_126);
#line 2042 "unify_gen.m"
                    {
#line 2042 "unify_gen.m"
                      mercury__map__det_insert_4_p_0(ll_backend__unify_gen__TypeInfo_158_158, ll_backend__unify_gen__TypeCtorInfo_159_159, ((MR_Box) (ll_backend__unify_gen__Var_10)), ((MR_Box) (ll_backend__unify_gen__RvalType_126)), ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_101_101, ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_70);
                    }
#line 2040 "unify_gen.m"
                  }
#line 2039 "unify_gen.m"
                else
#line 2044 "unify_gen.m"
                  {
#line 2045 "unify_gen.m"
                    {
#line 2045 "unify_gen.m"
                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term_conjunct_tag\'/9", (MR_String) "no_tag arity != 1");
#line 2045 "unify_gen.m"
                      return;
                    }
#line 2044 "unify_gen.m"
                  }
#line 2039 "unify_gen.m"
              }
#line 2045 "unify_gen.m"
            *ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_68 = ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_67;
#line 2035 "unify_gen.m"
          }
#line 2016 "unify_gen.m"
        else
#line 2016 "unify_gen.m"
          if ((ll_backend__unify_gen__ConsTag_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2053 "unify_gen.m"
            {
#line 2053 "unify_gen.m"
              MR_Word ll_backend__unify_gen__ArgTypedRvals_36;
#line 2053 "unify_gen.m"
              MR_Word ll_backend__unify_gen__PackArgTypedRvals_37;
#line 2053 "unify_gen.m"
              MR_Word ll_backend__unify_gen__DataAddr_38;
#line 2053 "unify_gen.m"
              MR_Word ll_backend__unify_gen__CellPtrConst_40;
#line 2053 "unify_gen.m"
              MR_Word ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_91_91;
#line 2053 "unify_gen.m"
              MR_Word ll_backend__unify_gen__V_93_93;
#line 2053 "unify_gen.m"
              MR_Word ll_backend__unify_gen__ActiveGroundTerm_129;
#line 2053 "unify_gen.m"
              MR_Word ll_backend__unify_gen__Rval_131;

#line 2054 "unify_gen.m"
              {
#line 2054 "unify_gen.m"
                ll_backend__unify_gen__generate_ground_term_args_5_p_0(ll_backend__unify_gen__Args_12, ll_backend__unify_gen__ConsArgWidths_13, &ll_backend__unify_gen__ArgTypedRvals_36, ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_69, &ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_91_91);
              }
#line 2056 "unify_gen.m"
              {
#line 2056 "unify_gen.m"
                ll_backend__unify_gen__pack_ground_term_args_3_p_0(ll_backend__unify_gen__ConsArgWidths_13, ll_backend__unify_gen__ArgTypedRvals_36, &ll_backend__unify_gen__PackArgTypedRvals_37);
              }
#line 2057 "unify_gen.m"
              {
#line 2057 "unify_gen.m"
                ll_backend__global_data__add_scalar_static_cell_4_p_0(ll_backend__unify_gen__PackArgTypedRvals_37, &ll_backend__unify_gen__DataAddr_38, ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_67, ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_68);
              }
#line 2059 "unify_gen.m"
              {
#line 2059 "unify_gen.m"
                ll_backend__unify_gen__V_93_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 2059 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_93_93, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 2059 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_93_93, 1) = ((MR_Box) (ll_backend__unify_gen__DataAddr_38));
#line 2059 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_93_93, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2059 "unify_gen.m"
              }
#line 2059 "unify_gen.m"
              {
#line 2059 "unify_gen.m"
                ll_backend__unify_gen__CellPtrConst_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2059 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__CellPtrConst_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2059 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__CellPtrConst_40, 1) = ((MR_Box) (ll_backend__unify_gen__V_93_93));
#line 2059 "unify_gen.m"
              }
#line 2060 "unify_gen.m"
              {
#line 2060 "unify_gen.m"
                ll_backend__unify_gen__Rval_131 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2060 "unify_gen.m"
                MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Rval_131, 0) = ((MR_Box) ((MR_Integer) 0));
#line 2060 "unify_gen.m"
                MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Rval_131, 1) = ((MR_Box) (ll_backend__unify_gen__CellPtrConst_40));
#line 2060 "unify_gen.m"
              }
#line 2061 "unify_gen.m"
              {
#line 2061 "unify_gen.m"
                ll_backend__unify_gen__ActiveGroundTerm_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2061 "unify_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_129, 0) = ((MR_Box) (ll_backend__unify_gen__Rval_131));
#line 2061 "unify_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_129, 1) = ((MR_Box) ((MR_Integer) 11));
#line 2061 "unify_gen.m"
              }
#line 2062 "unify_gen.m"
              {
#line 2062 "unify_gen.m"
                mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ((MR_Box) (ll_backend__unify_gen__Var_10)), ((MR_Box) (ll_backend__unify_gen__ActiveGroundTerm_129)), ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_91_91, ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_70);
#line 2062 "unify_gen.m"
                return;
              }
#line 2053 "unify_gen.m"
            }
#line 2016 "unify_gen.m"
          else
#line 2016 "unify_gen.m"
            if (((MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_11)) == (MR_mktag((MR_Integer) 2))))
#line 2016 "unify_gen.m"
              {
#line 2016 "unify_gen.m"
                MR_Word ll_backend__unify_gen__Const_18;
#line 2016 "unify_gen.m"
                MR_Word ll_backend__unify_gen__Type_19;
#line 2016 "unify_gen.m"
                MR_Float ll_backend__unify_gen__Float_23 = MR_unbox_float((MR_hl_field(MR_mktag(2), ll_backend__unify_gen__ConsTag_11, (MR_Integer) 0)));
#line 2016 "unify_gen.m"
                MR_Word ll_backend__unify_gen__ActiveGroundTerm_24;
#line 2016 "unify_gen.m"
                MR_Word ll_backend__unify_gen__V_121_121;

#line 2008 "unify_gen.m"
                {
#line 2008 "unify_gen.m"
                  ll_backend__unify_gen__Const_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2008 "unify_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Const_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 2008 "unify_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Const_18, 1) = MR_box_float(ll_backend__unify_gen__Float_23);
#line 2008 "unify_gen.m"
                }
#line 2012 "unify_gen.m"
                if ((ll_backend__unify_gen__UnboxedFloats_14 == (MR_Integer) 1))
#line 2013 "unify_gen.m"
                  ll_backend__unify_gen__Type_19 = (MR_Integer) 11;
#line 2012 "unify_gen.m"
                else
#line 2010 "unify_gen.m"
                  ll_backend__unify_gen__Type_19 = (MR_Integer) 9;
#line 2017 "unify_gen.m"
                {
#line 2017 "unify_gen.m"
                  ll_backend__unify_gen__V_121_121 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2017 "unify_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_121_121, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2017 "unify_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_121_121, 1) = ((MR_Box) (ll_backend__unify_gen__Const_18));
#line 2017 "unify_gen.m"
                }
#line 2017 "unify_gen.m"
                {
#line 2017 "unify_gen.m"
                  ll_backend__unify_gen__ActiveGroundTerm_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2017 "unify_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_24, 0) = ((MR_Box) (ll_backend__unify_gen__V_121_121));
#line 2017 "unify_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_24, 1) = ((MR_Box) (ll_backend__unify_gen__Type_19));
#line 2017 "unify_gen.m"
                }
#line 2018 "unify_gen.m"
                {
#line 2018 "unify_gen.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ((MR_Box) (ll_backend__unify_gen__Var_10)), ((MR_Box) (ll_backend__unify_gen__ActiveGroundTerm_24)), ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_69, ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_70);
                }
#line 2018 "unify_gen.m"
                *ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_68 = ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_67;
#line 2016 "unify_gen.m"
              }
#line 2016 "unify_gen.m"
            else
#line 2016 "unify_gen.m"
              if (((MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_11)) == (MR_mktag((MR_Integer) 1))))
#line 2016 "unify_gen.m"
                {
#line 2016 "unify_gen.m"
                  MR_String ll_backend__unify_gen__String_17 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ConsTag_11, (MR_Integer) 0)));
#line 2016 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__Const_184;
#line 2016 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__ActiveGroundTerm_186;
#line 2016 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_187_187;

#line 1994 "unify_gen.m"
                  {
#line 1994 "unify_gen.m"
                    ll_backend__unify_gen__Const_184 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1994 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Const_184, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1994 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Const_184, 1) = ((MR_Box) (ll_backend__unify_gen__String_17));
#line 1994 "unify_gen.m"
                  }
#line 2017 "unify_gen.m"
                  {
#line 2017 "unify_gen.m"
                    ll_backend__unify_gen__V_187_187 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2017 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_187_187, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2017 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_187_187, 1) = ((MR_Box) (ll_backend__unify_gen__Const_184));
#line 2017 "unify_gen.m"
                  }
#line 2017 "unify_gen.m"
                  {
#line 2017 "unify_gen.m"
                    ll_backend__unify_gen__ActiveGroundTerm_186 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2017 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_186, 0) = ((MR_Box) (ll_backend__unify_gen__V_187_187));
#line 2017 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_186, 1) = ((MR_Box) ((MR_Integer) 10));
#line 2017 "unify_gen.m"
                  }
#line 2018 "unify_gen.m"
                  {
#line 2018 "unify_gen.m"
                    mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ((MR_Box) (ll_backend__unify_gen__Var_10)), ((MR_Box) (ll_backend__unify_gen__ActiveGroundTerm_186)), ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_69, ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_70);
                  }
#line 2018 "unify_gen.m"
                  *ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_68 = ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_67;
#line 2016 "unify_gen.m"
                }
#line 2016 "unify_gen.m"
              else
#line 2016 "unify_gen.m"
                if (((((MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_11, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 2064 "unify_gen.m"
                  {
#line 2064 "unify_gen.m"
                    MR_Integer ll_backend__unify_gen__Ptag_139 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_11, (MR_Integer) 1)));

#line 2071 "unify_gen.m"
                    if ((ll_backend__unify_gen__Args_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2074 "unify_gen.m"
                      {
#line 2075 "unify_gen.m"
                        {
#line 2075 "unify_gen.m"
                          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term_conjunct_tag\'/9", (MR_String) "direct_arg_tag: arity != 1");
#line 2075 "unify_gen.m"
                          return;
                        }
#line 2074 "unify_gen.m"
                      }
#line 2071 "unify_gen.m"
                    else
#line 2071 "unify_gen.m"
                      {
#line 2071 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Args_12, (MR_Integer) 1)));
#line 2071 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Args_12, (MR_Integer) 0)));

#line 2071 "unify_gen.m"
                        if ((ll_backend__unify_gen__V_203_203 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2066 "unify_gen.m"
                          {
#line 2066 "unify_gen.m"
                            MR_Word ll_backend__unify_gen__TypeInfo_162_162 = (MR_Word) &ll_backend__unify_gen_scalar_common_1[0];
#line 2066 "unify_gen.m"
                            MR_Word ll_backend__unify_gen__TypeCtorInfo_163_163 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0;
#line 2066 "unify_gen.m"
                            MR_Word ll_backend__unify_gen__ArgRval_41;
#line 2066 "unify_gen.m"
                            MR_Word ll_backend__unify_gen__V_87_87;
#line 2066 "unify_gen.m"
                            MR_Word ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_88_88;
#line 2066 "unify_gen.m"
                            MR_Word ll_backend__unify_gen__ActiveGroundTerm_132;
#line 2066 "unify_gen.m"
                            MR_Word ll_backend__unify_gen__Rval_133;
#line 2067 "unify_gen.m"
                            MR_Box ll_backend__unify_gen__conv1_V_87_87;
#line 2067 "unify_gen.m"
                            MR_Word ll_backend__unify_gen___RvalType_42;

#line 2067 "unify_gen.m"
                            {
#line 2067 "unify_gen.m"
                              mercury__map__det_remove_4_p_0(ll_backend__unify_gen__TypeInfo_162_162, ll_backend__unify_gen__TypeCtorInfo_163_163, ((MR_Box) (ll_backend__unify_gen__V_204_204)), &ll_backend__unify_gen__conv1_V_87_87, ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_69, &ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_88_88);
                            }
#line 2067 "unify_gen.m"
                            ll_backend__unify_gen__V_87_87 = ((MR_Word) ll_backend__unify_gen__conv1_V_87_87);
#line 2067 "unify_gen.m"
                            ll_backend__unify_gen__ArgRval_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_87_87, (MR_Integer) 0)));
#line 2067 "unify_gen.m"
                            ll_backend__unify_gen___RvalType_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_87_87, (MR_Integer) 1)));
#line 2068 "unify_gen.m"
                            {
#line 2068 "unify_gen.m"
                              ll_backend__unify_gen__Rval_133 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2068 "unify_gen.m"
                              MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Rval_133, 0) = ((MR_Box) (ll_backend__unify_gen__Ptag_139));
#line 2068 "unify_gen.m"
                              MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Rval_133, 1) = ((MR_Box) (ll_backend__unify_gen__ArgRval_41));
#line 2068 "unify_gen.m"
                            }
#line 2069 "unify_gen.m"
                            {
#line 2069 "unify_gen.m"
                              ll_backend__unify_gen__ActiveGroundTerm_132 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2069 "unify_gen.m"
                              MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_132, 0) = ((MR_Box) (ll_backend__unify_gen__Rval_133));
#line 2069 "unify_gen.m"
                              MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_132, 1) = ((MR_Box) ((MR_Integer) 11));
#line 2069 "unify_gen.m"
                            }
#line 2070 "unify_gen.m"
                            {
#line 2070 "unify_gen.m"
                              mercury__map__det_insert_4_p_0(ll_backend__unify_gen__TypeInfo_162_162, ll_backend__unify_gen__TypeCtorInfo_163_163, ((MR_Box) (ll_backend__unify_gen__Var_10)), ((MR_Box) (ll_backend__unify_gen__ActiveGroundTerm_132)), ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_88_88, ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_70);
                            }
#line 2066 "unify_gen.m"
                          }
#line 2071 "unify_gen.m"
                        else
#line 2074 "unify_gen.m"
                          {
#line 2075 "unify_gen.m"
                            {
#line 2075 "unify_gen.m"
                              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term_conjunct_tag\'/9", (MR_String) "direct_arg_tag: arity != 1");
#line 2075 "unify_gen.m"
                              return;
                            }
#line 2074 "unify_gen.m"
                          }
#line 2071 "unify_gen.m"
                      }
#line 2075 "unify_gen.m"
                    *ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_68 = ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_67;
#line 2064 "unify_gen.m"
                  }
#line 2016 "unify_gen.m"
                else
#line 2016 "unify_gen.m"
                  if (((((MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_11, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2016 "unify_gen.m"
                    {
#line 2016 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__Lang_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_11, (MR_Integer) 1)));
#line 2016 "unify_gen.m"
                      MR_String ll_backend__unify_gen__Val_22 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_11, (MR_Integer) 2)));
#line 2016 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__V_115_115;
#line 2016 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__Const_172;
#line 2016 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__ActiveGroundTerm_174;
#line 2016 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__V_175_175;

#line 2002 "unify_gen.m"
                      {
#line 2002 "unify_gen.m"
                        ll_backend__unify_gen__V_115_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 2002 "unify_gen.m"
                        MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_115_115, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_5[1]));
#line 2002 "unify_gen.m"
                        MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_115_115, 1) = ((MR_Box) (ll_backend__unify_gen__generate_ground_term_conjunct_tag_9_p_0_1));
#line 2002 "unify_gen.m"
                        MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_115_115, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2002 "unify_gen.m"
                        MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_115_115, 3) = ((MR_Box) (ll_backend__unify_gen__Lang_21));
#line 2002 "unify_gen.m"
                        MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_115_115, 4) = ((MR_Box) ((MR_Integer) 0));
#line 2002 "unify_gen.m"
                      }
#line 2002 "unify_gen.m"
                      {
#line 2002 "unify_gen.m"
                        mercury__require__expect_4_p_0(ll_backend__unify_gen__V_115_115, (MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term_conjunct_tag\'/9", (MR_String) "foreign_tag for language other than C");
                      }
#line 2004 "unify_gen.m"
                      {
#line 2004 "unify_gen.m"
                        ll_backend__unify_gen__Const_172 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2004 "unify_gen.m"
                        MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Const_172, 0) = ((MR_Box) (ll_backend__unify_gen__Val_22));
#line 2004 "unify_gen.m"
                        MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Const_172, 1) = ((MR_Box) ((MR_Integer) 7));
#line 2004 "unify_gen.m"
                      }
#line 2017 "unify_gen.m"
                      {
#line 2017 "unify_gen.m"
                        ll_backend__unify_gen__V_175_175 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2017 "unify_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_175_175, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2017 "unify_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_175_175, 1) = ((MR_Box) (ll_backend__unify_gen__Const_172));
#line 2017 "unify_gen.m"
                      }
#line 2017 "unify_gen.m"
                      {
#line 2017 "unify_gen.m"
                        ll_backend__unify_gen__ActiveGroundTerm_174 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2017 "unify_gen.m"
                        MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_174, 0) = ((MR_Box) (ll_backend__unify_gen__V_175_175));
#line 2017 "unify_gen.m"
                        MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_174, 1) = ((MR_Box) ((MR_Integer) 7));
#line 2017 "unify_gen.m"
                      }
#line 2018 "unify_gen.m"
                      {
#line 2018 "unify_gen.m"
                        mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ((MR_Box) (ll_backend__unify_gen__Var_10)), ((MR_Box) (ll_backend__unify_gen__ActiveGroundTerm_174)), ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_69, ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_70);
                      }
#line 2018 "unify_gen.m"
                      *ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_68 = ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_67;
#line 2016 "unify_gen.m"
                    }
#line 2016 "unify_gen.m"
                  else
#line 2016 "unify_gen.m"
                    if (((((MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_11, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2016 "unify_gen.m"
                      {
#line 2016 "unify_gen.m"
                        MR_Integer ll_backend__unify_gen__Int_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_11, (MR_Integer) 1)));
#line 2016 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__Const_178;
#line 2016 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__ActiveGroundTerm_180;
#line 2016 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__V_181_181;

#line 1998 "unify_gen.m"
                        {
#line 1998 "unify_gen.m"
                          ll_backend__unify_gen__Const_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1998 "unify_gen.m"
                          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Const_178, 0) = ((MR_Box) (ll_backend__unify_gen__Int_20));
#line 1998 "unify_gen.m"
                        }
#line 2017 "unify_gen.m"
                        {
#line 2017 "unify_gen.m"
                          ll_backend__unify_gen__V_181_181 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2017 "unify_gen.m"
                          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_181_181, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2017 "unify_gen.m"
                          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_181_181, 1) = ((MR_Box) (ll_backend__unify_gen__Const_178));
#line 2017 "unify_gen.m"
                        }
#line 2017 "unify_gen.m"
                        {
#line 2017 "unify_gen.m"
                          ll_backend__unify_gen__ActiveGroundTerm_180 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2017 "unify_gen.m"
                          MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_180, 0) = ((MR_Box) (ll_backend__unify_gen__V_181_181));
#line 2017 "unify_gen.m"
                          MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_180, 1) = ((MR_Box) ((MR_Integer) 7));
#line 2017 "unify_gen.m"
                        }
#line 2018 "unify_gen.m"
                        {
#line 2018 "unify_gen.m"
                          mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ((MR_Box) (ll_backend__unify_gen__Var_10)), ((MR_Box) (ll_backend__unify_gen__ActiveGroundTerm_180)), ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_69, ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_70);
                        }
#line 2018 "unify_gen.m"
                        *ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_68 = ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_67;
#line 2016 "unify_gen.m"
                      }
#line 2016 "unify_gen.m"
                    else
#line 2016 "unify_gen.m"
                      if (((((MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_11, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 2025 "unify_gen.m"
                        {
#line 2025 "unify_gen.m"
                          MR_Word ll_backend__unify_gen__RA_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_11, (MR_Integer) 1)));
#line 2025 "unify_gen.m"
                          MR_Word ll_backend__unify_gen__RvalType_29;
#line 2025 "unify_gen.m"
                          MR_Word ll_backend__unify_gen__ActiveGroundTerm_124;
#line 2025 "unify_gen.m"
                          MR_Word ll_backend__unify_gen__Rval_125;

#line 2026 "unify_gen.m"
                          {
#line 2026 "unify_gen.m"
                            ll_backend__unify_gen__Rval_125 = ll_backend__unify_gen__generate_reserved_address_1_f_0(ll_backend__unify_gen__RA_28);
                          }
#line 2027 "unify_gen.m"
                          {
#line 2027 "unify_gen.m"
                            ll_backend__llds__rval_type_2_p_0(ll_backend__unify_gen__Rval_125, &ll_backend__unify_gen__RvalType_29);
                          }
#line 2028 "unify_gen.m"
                          {
#line 2028 "unify_gen.m"
                            ll_backend__unify_gen__ActiveGroundTerm_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2028 "unify_gen.m"
                            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_124, 0) = ((MR_Box) (ll_backend__unify_gen__Rval_125));
#line 2028 "unify_gen.m"
                            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_124, 1) = ((MR_Box) (ll_backend__unify_gen__RvalType_29));
#line 2028 "unify_gen.m"
                          }
#line 2029 "unify_gen.m"
                          {
#line 2029 "unify_gen.m"
                            mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ((MR_Box) (ll_backend__unify_gen__Var_10)), ((MR_Box) (ll_backend__unify_gen__ActiveGroundTerm_124)), ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_69, ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_70);
                          }
#line 2029 "unify_gen.m"
                          *ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_68 = ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_67;
#line 2025 "unify_gen.m"
                        }
#line 2016 "unify_gen.m"
                      else
#line 2016 "unify_gen.m"
                        if (((((MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_11, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 2020 "unify_gen.m"
                          {
#line 2020 "unify_gen.m"
                            MR_Integer ll_backend__unify_gen__Ptag_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_11, (MR_Integer) 1)));
#line 2020 "unify_gen.m"
                            MR_Integer ll_backend__unify_gen__Stag_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_11, (MR_Integer) 2)));
#line 2020 "unify_gen.m"
                            MR_Word ll_backend__unify_gen__Rval_27;
#line 2020 "unify_gen.m"
                            MR_Word ll_backend__unify_gen__V_109_109;
#line 2020 "unify_gen.m"
                            MR_Word ll_backend__unify_gen__V_111_111;
#line 2020 "unify_gen.m"
                            MR_Word ll_backend__unify_gen__V_112_112;
#line 2020 "unify_gen.m"
                            MR_Word ll_backend__unify_gen__ActiveGroundTerm_123;

#line 2021 "unify_gen.m"
                            {
#line 2021 "unify_gen.m"
                              ll_backend__unify_gen__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2021 "unify_gen.m"
                              MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_112_112, 0) = ((MR_Box) (ll_backend__unify_gen__Stag_26));
#line 2021 "unify_gen.m"
                            }
#line 2021 "unify_gen.m"
                            {
#line 2021 "unify_gen.m"
                              ll_backend__unify_gen__V_111_111 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2021 "unify_gen.m"
                              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_111_111, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2021 "unify_gen.m"
                              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_111_111, 1) = ((MR_Box) (ll_backend__unify_gen__V_112_112));
#line 2021 "unify_gen.m"
                            }
#line 2021 "unify_gen.m"
                            {
#line 2021 "unify_gen.m"
                              ll_backend__unify_gen__V_109_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 2021 "unify_gen.m"
                              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_109_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2021 "unify_gen.m"
                              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_109_109, 1) = ((MR_Box) ((MR_Integer) 4));
#line 2021 "unify_gen.m"
                              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_109_109, 2) = ((MR_Box) (ll_backend__unify_gen__V_111_111));
#line 2021 "unify_gen.m"
                            }
#line 2021 "unify_gen.m"
                            {
#line 2021 "unify_gen.m"
                              ll_backend__unify_gen__Rval_27 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2021 "unify_gen.m"
                              MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Rval_27, 0) = ((MR_Box) (ll_backend__unify_gen__Ptag_25));
#line 2021 "unify_gen.m"
                              MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Rval_27, 1) = ((MR_Box) (ll_backend__unify_gen__V_109_109));
#line 2021 "unify_gen.m"
                            }
#line 2022 "unify_gen.m"
                            {
#line 2022 "unify_gen.m"
                              ll_backend__unify_gen__ActiveGroundTerm_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2022 "unify_gen.m"
                              MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_123, 0) = ((MR_Box) (ll_backend__unify_gen__Rval_27));
#line 2022 "unify_gen.m"
                              MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_123, 1) = ((MR_Box) ((MR_Integer) 11));
#line 2022 "unify_gen.m"
                            }
#line 2023 "unify_gen.m"
                            {
#line 2023 "unify_gen.m"
                              mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ((MR_Box) (ll_backend__unify_gen__Var_10)), ((MR_Box) (ll_backend__unify_gen__ActiveGroundTerm_123)), ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_69, ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_70);
                            }
#line 2023 "unify_gen.m"
                            *ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_68 = ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_67;
#line 2020 "unify_gen.m"
                          }
#line 2016 "unify_gen.m"
                        else
#line 2016 "unify_gen.m"
                          if (((((MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_11, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 2078 "unify_gen.m"
                            {
#line 2078 "unify_gen.m"
                              MR_Word ll_backend__unify_gen__StagTypedRval_46;
#line 2078 "unify_gen.m"
                              MR_Word ll_backend__unify_gen__AllTypedRvals_47;
#line 2078 "unify_gen.m"
                              MR_Word ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_74_74;
#line 2078 "unify_gen.m"
                              MR_Word ll_backend__unify_gen__V_75_75;
#line 2078 "unify_gen.m"
                              MR_Word ll_backend__unify_gen__V_76_76;
#line 2078 "unify_gen.m"
                              MR_Word ll_backend__unify_gen__V_79_79;
#line 2078 "unify_gen.m"
                              MR_Word ll_backend__unify_gen__ActiveGroundTerm_142;
#line 2078 "unify_gen.m"
                              MR_Integer ll_backend__unify_gen__Ptag_143 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_11, (MR_Integer) 1)));
#line 2078 "unify_gen.m"
                              MR_Integer ll_backend__unify_gen__Stag_144 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_11, (MR_Integer) 2)));
#line 2078 "unify_gen.m"
                              MR_Word ll_backend__unify_gen__Rval_145;
#line 2078 "unify_gen.m"
                              MR_Word ll_backend__unify_gen__ArgTypedRvals_146;
#line 2078 "unify_gen.m"
                              MR_Word ll_backend__unify_gen__PackArgTypedRvals_147;
#line 2078 "unify_gen.m"
                              MR_Word ll_backend__unify_gen__DataAddr_148;
#line 2078 "unify_gen.m"
                              MR_Word ll_backend__unify_gen__CellPtrConst_150;

#line 2079 "unify_gen.m"
                              {
#line 2079 "unify_gen.m"
                                ll_backend__unify_gen__generate_ground_term_args_5_p_0(ll_backend__unify_gen__Args_12, ll_backend__unify_gen__ConsArgWidths_13, &ll_backend__unify_gen__ArgTypedRvals_146, ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_69, &ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_74_74);
                              }
#line 2081 "unify_gen.m"
                              {
#line 2081 "unify_gen.m"
                                ll_backend__unify_gen__pack_ground_term_args_3_p_0(ll_backend__unify_gen__ConsArgWidths_13, ll_backend__unify_gen__ArgTypedRvals_146, &ll_backend__unify_gen__PackArgTypedRvals_147);
                              }
#line 2082 "unify_gen.m"
                              {
#line 2082 "unify_gen.m"
                                ll_backend__unify_gen__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2082 "unify_gen.m"
                                MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_76_76, 0) = ((MR_Box) (ll_backend__unify_gen__Stag_144));
#line 2082 "unify_gen.m"
                              }
#line 2082 "unify_gen.m"
                              {
#line 2082 "unify_gen.m"
                                ll_backend__unify_gen__V_75_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2082 "unify_gen.m"
                                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_75_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2082 "unify_gen.m"
                                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_75_75, 1) = ((MR_Box) (ll_backend__unify_gen__V_76_76));
#line 2082 "unify_gen.m"
                              }
#line 2082 "unify_gen.m"
                              {
#line 2082 "unify_gen.m"
                                ll_backend__unify_gen__StagTypedRval_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2082 "unify_gen.m"
                                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__StagTypedRval_46, 0) = ((MR_Box) (ll_backend__unify_gen__V_75_75));
#line 2082 "unify_gen.m"
                                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__StagTypedRval_46, 1) = ((MR_Box) ((MR_Integer) 7));
#line 2082 "unify_gen.m"
                              }
#line 2083 "unify_gen.m"
                              {
#line 2083 "unify_gen.m"
                                ll_backend__unify_gen__AllTypedRvals_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2083 "unify_gen.m"
                                MR_hl_field(MR_mktag(1), ll_backend__unify_gen__AllTypedRvals_47, 0) = ((MR_Box) (ll_backend__unify_gen__StagTypedRval_46));
#line 2083 "unify_gen.m"
                                MR_hl_field(MR_mktag(1), ll_backend__unify_gen__AllTypedRvals_47, 1) = ((MR_Box) (ll_backend__unify_gen__PackArgTypedRvals_147));
#line 2083 "unify_gen.m"
                              }
#line 2084 "unify_gen.m"
                              {
#line 2084 "unify_gen.m"
                                ll_backend__global_data__add_scalar_static_cell_4_p_0(ll_backend__unify_gen__AllTypedRvals_47, &ll_backend__unify_gen__DataAddr_148, ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_67, ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_68);
                              }
#line 2086 "unify_gen.m"
                              {
#line 2086 "unify_gen.m"
                                ll_backend__unify_gen__V_79_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 2086 "unify_gen.m"
                                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_79_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 2086 "unify_gen.m"
                                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_79_79, 1) = ((MR_Box) (ll_backend__unify_gen__DataAddr_148));
#line 2086 "unify_gen.m"
                                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_79_79, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2086 "unify_gen.m"
                              }
#line 2086 "unify_gen.m"
                              {
#line 2086 "unify_gen.m"
                                ll_backend__unify_gen__CellPtrConst_150 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2086 "unify_gen.m"
                                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__CellPtrConst_150, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2086 "unify_gen.m"
                                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__CellPtrConst_150, 1) = ((MR_Box) (ll_backend__unify_gen__V_79_79));
#line 2086 "unify_gen.m"
                              }
#line 2087 "unify_gen.m"
                              {
#line 2087 "unify_gen.m"
                                ll_backend__unify_gen__Rval_145 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2087 "unify_gen.m"
                                MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Rval_145, 0) = ((MR_Box) (ll_backend__unify_gen__Ptag_143));
#line 2087 "unify_gen.m"
                                MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Rval_145, 1) = ((MR_Box) (ll_backend__unify_gen__CellPtrConst_150));
#line 2087 "unify_gen.m"
                              }
#line 2088 "unify_gen.m"
                              {
#line 2088 "unify_gen.m"
                                ll_backend__unify_gen__ActiveGroundTerm_142 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2088 "unify_gen.m"
                                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_142, 0) = ((MR_Box) (ll_backend__unify_gen__Rval_145));
#line 2088 "unify_gen.m"
                                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_142, 1) = ((MR_Box) ((MR_Integer) 11));
#line 2088 "unify_gen.m"
                              }
#line 2089 "unify_gen.m"
                              {
#line 2089 "unify_gen.m"
                                mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ((MR_Box) (ll_backend__unify_gen__Var_10)), ((MR_Box) (ll_backend__unify_gen__ActiveGroundTerm_142)), ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_74_74, ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_70);
#line 2089 "unify_gen.m"
                                return;
                              }
#line 2078 "unify_gen.m"
                            }
#line 2016 "unify_gen.m"
                          else
#line 2016 "unify_gen.m"
                            if (((((MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_11, (MR_Integer) 0)))) == (MR_Integer) 16))))
#line 2031 "unify_gen.m"
                              {
#line 2031 "unify_gen.m"
                                MR_Word ll_backend__unify_gen__ActualConsTag_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_11, (MR_Integer) 2)));
#line 2031 "unify_gen.m"
                                MR_Word ll_backend__unify_gen__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_11, (MR_Integer) 1)));

#line 2032 "unify_gen.m"
                                /* direct tailcall eliminated */
#line 2032 "unify_gen.m"
                                {
#line 2032 "unify_gen.m"
                                  MR_Word ll_backend__unify_gen__ConsTag__tmp_copy_11 = ll_backend__unify_gen__ActualConsTag_31;

#line 2032 "unify_gen.m"
                                  ll_backend__unify_gen__ConsTag_11 = ll_backend__unify_gen__ConsTag__tmp_copy_11;
#line 2032 "unify_gen.m"
                                }
#line 2032 "unify_gen.m"
                                continue;
#line 2031 "unify_gen.m"
                              }
#line 2016 "unify_gen.m"
                            else
#line 2016 "unify_gen.m"
                              if (((((MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_11, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 2053 "unify_gen.m"
                                {
#line 2053 "unify_gen.m"
                                  MR_Word ll_backend__unify_gen__ArgTypedRvals_190;
#line 2053 "unify_gen.m"
                                  MR_Word ll_backend__unify_gen__PackArgTypedRvals_191;
#line 2053 "unify_gen.m"
                                  MR_Word ll_backend__unify_gen__DataAddr_192;
#line 2053 "unify_gen.m"
                                  MR_Word ll_backend__unify_gen__CellPtrConst_194;
#line 2053 "unify_gen.m"
                                  MR_Word ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_91_195;
#line 2053 "unify_gen.m"
                                  MR_Word ll_backend__unify_gen__V_196_196;
#line 2053 "unify_gen.m"
                                  MR_Word ll_backend__unify_gen__ActiveGroundTerm_198;
#line 2053 "unify_gen.m"
                                  MR_Integer ll_backend__unify_gen__Ptag_199 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_11, (MR_Integer) 1)));
#line 2053 "unify_gen.m"
                                  MR_Word ll_backend__unify_gen__Rval_200;

#line 2054 "unify_gen.m"
                                  {
#line 2054 "unify_gen.m"
                                    ll_backend__unify_gen__generate_ground_term_args_5_p_0(ll_backend__unify_gen__Args_12, ll_backend__unify_gen__ConsArgWidths_13, &ll_backend__unify_gen__ArgTypedRvals_190, ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_69, &ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_91_195);
                                  }
#line 2056 "unify_gen.m"
                                  {
#line 2056 "unify_gen.m"
                                    ll_backend__unify_gen__pack_ground_term_args_3_p_0(ll_backend__unify_gen__ConsArgWidths_13, ll_backend__unify_gen__ArgTypedRvals_190, &ll_backend__unify_gen__PackArgTypedRvals_191);
                                  }
#line 2057 "unify_gen.m"
                                  {
#line 2057 "unify_gen.m"
                                    ll_backend__global_data__add_scalar_static_cell_4_p_0(ll_backend__unify_gen__PackArgTypedRvals_191, &ll_backend__unify_gen__DataAddr_192, ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_67, ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_68);
                                  }
#line 2059 "unify_gen.m"
                                  {
#line 2059 "unify_gen.m"
                                    ll_backend__unify_gen__V_196_196 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 2059 "unify_gen.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_196_196, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 2059 "unify_gen.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_196_196, 1) = ((MR_Box) (ll_backend__unify_gen__DataAddr_192));
#line 2059 "unify_gen.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_196_196, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2059 "unify_gen.m"
                                  }
#line 2059 "unify_gen.m"
                                  {
#line 2059 "unify_gen.m"
                                    ll_backend__unify_gen__CellPtrConst_194 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2059 "unify_gen.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__CellPtrConst_194, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2059 "unify_gen.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__CellPtrConst_194, 1) = ((MR_Box) (ll_backend__unify_gen__V_196_196));
#line 2059 "unify_gen.m"
                                  }
#line 2060 "unify_gen.m"
                                  {
#line 2060 "unify_gen.m"
                                    ll_backend__unify_gen__Rval_200 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2060 "unify_gen.m"
                                    MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Rval_200, 0) = ((MR_Box) (ll_backend__unify_gen__Ptag_199));
#line 2060 "unify_gen.m"
                                    MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Rval_200, 1) = ((MR_Box) (ll_backend__unify_gen__CellPtrConst_194));
#line 2060 "unify_gen.m"
                                  }
#line 2061 "unify_gen.m"
                                  {
#line 2061 "unify_gen.m"
                                    ll_backend__unify_gen__ActiveGroundTerm_198 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2061 "unify_gen.m"
                                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_198, 0) = ((MR_Box) (ll_backend__unify_gen__Rval_200));
#line 2061 "unify_gen.m"
                                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_198, 1) = ((MR_Box) ((MR_Integer) 11));
#line 2061 "unify_gen.m"
                                  }
#line 2062 "unify_gen.m"
                                  {
#line 2062 "unify_gen.m"
                                    mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ((MR_Box) (ll_backend__unify_gen__Var_10)), ((MR_Box) (ll_backend__unify_gen__ActiveGroundTerm_198)), ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_91_195, ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_70);
#line 2062 "unify_gen.m"
                                    return;
                                  }
#line 2053 "unify_gen.m"
                                }
#line 2016 "unify_gen.m"
                              else
#line 2100 "unify_gen.m"
                                {
#line 2101 "unify_gen.m"
                                  {
#line 2101 "unify_gen.m"
                                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term_conjunct_tag\'/9", (MR_String) "unexpected tag");
#line 2101 "unify_gen.m"
                                    return;
                                  }
#line 2100 "unify_gen.m"
                                }
#line 2016 "unify_gen.m"
      }
#line 2016 "unify_gen.m"
      break;
#line 2016 "unify_gen.m"
    }
#line 1984 "unify_gen.m"
}

#line 1949 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_ground_term_conjuncts_7_p_0(
#line 1949 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__1_1,
#line 1949 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_2,
#line 1949 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__3_3,
#line 1949 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_4,
#line 1949 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_5,
#line 1949 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_6,
#line 1949 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_7)
#line 1949 "unify_gen.m"
{
#line 1954 "unify_gen.m"
  while (MR_TRUE)
#line 1954 "unify_gen.m"
    {
#line 1954 "unify_gen.m"
      /* tailcall optimized into a loop */
#line 1954 "unify_gen.m"
      {
#line 1954 "unify_gen.m"
        MR_bool ll_backend__unify_gen__succeeded;

#line 1954 "unify_gen.m"
        if ((ll_backend__unify_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1954 "unify_gen.m"
          {
#line 1954 "unify_gen.m"
            *ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_7 = ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_6;
#line 1954 "unify_gen.m"
            *ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_5 = ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_4;
#line 1954 "unify_gen.m"
          }
#line 1954 "unify_gen.m"
        else
#line 1957 "unify_gen.m"
          {
#line 1957 "unify_gen.m"
            MR_Word ll_backend__unify_gen__Goal_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 1957 "unify_gen.m"
            MR_Word ll_backend__unify_gen__Goals_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 1957 "unify_gen.m"
            MR_Word ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_26_26;
#line 1957 "unify_gen.m"
            MR_Word ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_27_27;
#line 1957 "unify_gen.m"
            MR_Word ll_backend__unify_gen__GoalExpr_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Goal_17, (MR_Integer) 0)));
#line 1970 "unify_gen.m"
            MR_Word ll_backend__unify_gen___GoalInfo_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Goal_17, (MR_Integer) 1)));
#line 1980 "unify_gen.m"
            MR_Word ll_backend__unify_gen__Var_46;
#line 1980 "unify_gen.m"
            MR_Word ll_backend__unify_gen__ConsId_47;
#line 1980 "unify_gen.m"
            MR_Word ll_backend__unify_gen__Args_48;
#line 1972 "unify_gen.m"
            MR_Word ll_backend__unify_gen__Unify_44;
#line 1972 "unify_gen.m"
            MR_Word ll_backend__unify_gen__SubInfo_52;
#line 1972 "unify_gen.m"
            MR_Word ll_backend__unify_gen__V_41_41;
#line 1972 "unify_gen.m"
            MR_Word ll_backend__unify_gen__V_42_42;
#line 1972 "unify_gen.m"
            MR_Word ll_backend__unify_gen__V_43_43;
#line 1972 "unify_gen.m"
            MR_Word ll_backend__unify_gen__V_45_45;
#line 1973 "unify_gen.m"
            MR_Word ll_backend__unify_gen__V_49_49;
#line 1973 "unify_gen.m"
            MR_Word ll_backend__unify_gen__V_50_50;
#line 1973 "unify_gen.m"
            MR_Word ll_backend__unify_gen__V_51_51;

#line 1972 "unify_gen.m"
            ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__GoalExpr_39)) == (MR_mktag((MR_Integer) 1)));
#line 1972 "unify_gen.m"
            if (ll_backend__unify_gen__succeeded)
#line 1972 "unify_gen.m"
              {
#line 1972 "unify_gen.m"
                ll_backend__unify_gen__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__GoalExpr_39, (MR_Integer) 0)));
#line 1972 "unify_gen.m"
                ll_backend__unify_gen__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__GoalExpr_39, (MR_Integer) 1)));
#line 1972 "unify_gen.m"
                ll_backend__unify_gen__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__GoalExpr_39, (MR_Integer) 2)));
#line 1972 "unify_gen.m"
                ll_backend__unify_gen__Unify_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__GoalExpr_39, (MR_Integer) 3)));
#line 1972 "unify_gen.m"
                ll_backend__unify_gen__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__GoalExpr_39, (MR_Integer) 4)));
#line 1973 "unify_gen.m"
                ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__Unify_44)) == (MR_mktag((MR_Integer) 0)));
#line 1973 "unify_gen.m"
                if (ll_backend__unify_gen__succeeded)
#line 1973 "unify_gen.m"
                  {
#line 1973 "unify_gen.m"
                    ll_backend__unify_gen__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Unify_44, (MR_Integer) 0)));
#line 1973 "unify_gen.m"
                    ll_backend__unify_gen__ConsId_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Unify_44, (MR_Integer) 1)));
#line 1973 "unify_gen.m"
                    ll_backend__unify_gen__Args_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Unify_44, (MR_Integer) 2)));
#line 1973 "unify_gen.m"
                    ll_backend__unify_gen__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Unify_44, (MR_Integer) 3)));
#line 1973 "unify_gen.m"
                    ll_backend__unify_gen__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Unify_44, (MR_Integer) 4)));
#line 1973 "unify_gen.m"
                    ll_backend__unify_gen__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Unify_44, (MR_Integer) 5)));
#line 1973 "unify_gen.m"
                    ll_backend__unify_gen__SubInfo_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Unify_44, (MR_Integer) 6)));
#line 1974 "unify_gen.m"
                    ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__SubInfo_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1973 "unify_gen.m"
                  }
#line 1972 "unify_gen.m"
              }
#line 1980 "unify_gen.m"
            if (ll_backend__unify_gen__succeeded)
#line 1976 "unify_gen.m"
              {
#line 1976 "unify_gen.m"
                MR_Word ll_backend__unify_gen__ConsTag_53;
#line 1976 "unify_gen.m"
                MR_Word ll_backend__unify_gen__ConsArgWidths_54;

#line 1976 "unify_gen.m"
                {
#line 1976 "unify_gen.m"
                  ll_backend__unify_gen__ConsTag_53 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ll_backend__unify_gen__HeadVar__1_1, ll_backend__unify_gen__ConsId_47);
                }
#line 1977 "unify_gen.m"
                {
#line 1977 "unify_gen.m"
                  ll_backend__unify_gen__get_cons_arg_widths_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], ll_backend__unify_gen__HeadVar__1_1, ll_backend__unify_gen__ConsId_47, ll_backend__unify_gen__Args_48, &ll_backend__unify_gen__ConsArgWidths_54);
                }
#line 1978 "unify_gen.m"
                {
#line 1978 "unify_gen.m"
                  ll_backend__unify_gen__generate_ground_term_conjunct_tag_9_p_0(ll_backend__unify_gen__Var_46, ll_backend__unify_gen__ConsTag_53, ll_backend__unify_gen__Args_48, ll_backend__unify_gen__ConsArgWidths_54, ll_backend__unify_gen__HeadVar__3_3, ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_4, &ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_26_26, ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_6, &ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_27_27);
                }
#line 1976 "unify_gen.m"
              }
#line 1980 "unify_gen.m"
            else
#line 1981 "unify_gen.m"
              {
#line 1981 "unify_gen.m"
                {
#line 1981 "unify_gen.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term_conjunct\'/7", (MR_String) "malformed goal");
#line 1981 "unify_gen.m"
                  return;
                }
#line 1981 "unify_gen.m"
              }
#line 1960 "unify_gen.m"
            /* direct tailcall eliminated */
#line 1960 "unify_gen.m"
            {
#line 1960 "unify_gen.m"
              MR_Word ll_backend__unify_gen__HeadVar__2__tmp_copy_2 = ll_backend__unify_gen__Goals_18;
#line 1960 "unify_gen.m"
              MR_Word ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0__tmp_copy_4 = ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_26_26;
#line 1960 "unify_gen.m"
              MR_Word ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0__tmp_copy_6 = ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_27_27;

#line 1960 "unify_gen.m"
              ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_6 = ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0__tmp_copy_6;
#line 1960 "unify_gen.m"
              ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_4 = ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0__tmp_copy_4;
#line 1960 "unify_gen.m"
              ll_backend__unify_gen__HeadVar__2_2 = ll_backend__unify_gen__HeadVar__2__tmp_copy_2;
#line 1960 "unify_gen.m"
            }
#line 1960 "unify_gen.m"
            continue;
#line 1957 "unify_gen.m"
          }
#line 1954 "unify_gen.m"
      }
#line 1954 "unify_gen.m"
      break;
#line 1954 "unify_gen.m"
    }
#line 1949 "unify_gen.m"
}

#line 1893 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__det_single_arg_width_2_p_0(
#line 1893 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ArgWidths_3,
#line 1893 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__ArgWidth_4)
#line 1893 "unify_gen.m"
{
#line 1897 "unify_gen.m"
  {
#line 1897 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;

#line 1897 "unify_gen.m"
    if ((ll_backend__unify_gen__ArgWidths_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1901 "unify_gen.m"
      {
#line 1902 "unify_gen.m"
        {
#line 1902 "unify_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.det_single_arg_width\'/2", (MR_String) "unexpected arg_width list");
#line 1902 "unify_gen.m"
          return;
        }
#line 1901 "unify_gen.m"
      }
#line 1897 "unify_gen.m"
    else
#line 1897 "unify_gen.m"
      {
#line 1897 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ArgWidths_3, (MR_Integer) 1)));
#line 1897 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ArgWidths_3, (MR_Integer) 0)));

#line 1897 "unify_gen.m"
        if ((ll_backend__unify_gen__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1897 "unify_gen.m"
          *ll_backend__unify_gen__ArgWidth_4 = ll_backend__unify_gen__V_20_20;
#line 1897 "unify_gen.m"
        else
#line 1901 "unify_gen.m"
          {
#line 1902 "unify_gen.m"
            {
#line 1902 "unify_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.det_single_arg_width\'/2", (MR_String) "unexpected arg_width list");
#line 1902 "unify_gen.m"
              return;
            }
#line 1901 "unify_gen.m"
          }
#line 1897 "unify_gen.m"
      }
#line 1897 "unify_gen.m"
  }
#line 1893 "unify_gen.m"
}

#line 1793 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_const_struct_arg_6_p_0(
#line 1793 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ModuleInfo_7,
#line 1793 "unify_gen.m"
  MR_Word ll_backend__unify_gen__UnboxedFloats_8,
#line 1793 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConstStructMap_9,
#line 1793 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConstArg_10,
#line 1793 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ArgWidth_11,
#line 1793 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__TypedRval_12)
#line 1793 "unify_gen.m"
{
#line 1800 "unify_gen.m"
  {
#line 1800 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;

#line 1800 "unify_gen.m"
    if (((MR_tag((MR_Word) ll_backend__unify_gen__ConstArg_10)) == (MR_mktag((MR_Integer) 0))))
#line 1800 "unify_gen.m"
      {
#line 1800 "unify_gen.m"
        MR_Integer ll_backend__unify_gen__ConstNum_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ConstArg_10, (MR_Integer) 0)));
#line 1801 "unify_gen.m"
        MR_Box ll_backend__unify_gen__conv0_TypedRval_12;

#line 1801 "unify_gen.m"
        {
#line 1801 "unify_gen.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ll_backend__unify_gen__ConstStructMap_9, ll_backend__unify_gen__ConstNum_13, &ll_backend__unify_gen__conv0_TypedRval_12);
        }
#line 1801 "unify_gen.m"
        *ll_backend__unify_gen__TypedRval_12 = ((MR_Word) ll_backend__unify_gen__conv0_TypedRval_12);
#line 1800 "unify_gen.m"
      }
#line 1800 "unify_gen.m"
    else
#line 1803 "unify_gen.m"
      {
#line 1803 "unify_gen.m"
        MR_Word ll_backend__unify_gen__ConsId_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ConstArg_10, (MR_Integer) 0)));
#line 1803 "unify_gen.m"
        MR_Word ll_backend__unify_gen__ConsTag_16;
#line 1803 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ConstArg_10, (MR_Integer) 1)));

#line 1804 "unify_gen.m"
        {
#line 1804 "unify_gen.m"
          ll_backend__unify_gen__ConsTag_16 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ll_backend__unify_gen__ModuleInfo_7, ll_backend__unify_gen__ConsId_14);
        }
#line 1805 "unify_gen.m"
        {
#line 1805 "unify_gen.m"
          ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_95_115_116_114_117_99_116_95_97_114_103_95_116_97_103_95_95_91_49_44_32_51_93_95_48_6_p_0(ll_backend__unify_gen__UnboxedFloats_8, ll_backend__unify_gen__ConsTag_16, ll_backend__unify_gen__ArgWidth_11, ll_backend__unify_gen__TypedRval_12);
#line 1805 "unify_gen.m"
          return;
        }
#line 1803 "unify_gen.m"
      }
#line 1800 "unify_gen.m"
  }
#line 1793 "unify_gen.m"
}

#line 1789 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_const_struct_args_6_p_0_1(
#line 1789 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg,
#line 1789 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
#line 1789 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
#line 1789 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_3)
#line 1789 "unify_gen.m"
{
#line 1789 "unify_gen.m"
  {
#line 1789 "unify_gen.m"
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;
#line 1789 "unify_gen.m"
    MR_Word ll_backend__unify_gen__conv0_TypedRval_12;

#line 1789 "unify_gen.m"
    {
#line 1789 "unify_gen.m"
      ll_backend__unify_gen__generate_const_struct_arg_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 5))), ((MR_Word) ll_backend__unify_gen__wrapper_arg_1), ((MR_Word) ll_backend__unify_gen__wrapper_arg_2), &ll_backend__unify_gen__conv0_TypedRval_12);
    }
#line 1789 "unify_gen.m"
    *ll_backend__unify_gen__wrapper_arg_3 = ((MR_Box) (ll_backend__unify_gen__conv0_TypedRval_12));
#line 1789 "unify_gen.m"
  }
#line 1789 "unify_gen.m"
}

#line 1783 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_const_struct_args_6_p_0(
#line 1783 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ModuleInfo_7,
#line 1783 "unify_gen.m"
  MR_Word ll_backend__unify_gen__UnboxedFloats_8,
#line 1783 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConstStructMap_9,
#line 1783 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConstArgs_10,
#line 1783 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ArgWidths_11,
#line 1783 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__TypedRvals_12)
#line 1783 "unify_gen.m"
{
#line 1788 "unify_gen.m"
  {
#line 1788 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 1788 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_13_13;

#line 1789 "unify_gen.m"
    {
#line 1789 "unify_gen.m"
      ll_backend__unify_gen__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1789 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_13_13, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_10[0]));
#line 1789 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_13_13, 1) = ((MR_Box) (ll_backend__unify_gen__generate_const_struct_args_6_p_0_1));
#line 1789 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1789 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_13_13, 3) = ((MR_Box) (ll_backend__unify_gen__ModuleInfo_7));
#line 1789 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_13_13, 4) = ((MR_Box) (ll_backend__unify_gen__UnboxedFloats_8));
#line 1789 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_13_13, 5) = ((MR_Box) (ll_backend__unify_gen__ConstStructMap_9));
#line 1789 "unify_gen.m"
    }
#line 1789 "unify_gen.m"
    {
#line 1789 "unify_gen.m"
      mercury__list__map_corresponding_4_p_0((MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ll_backend__unify_gen__V_13_13, ll_backend__unify_gen__ConstArgs_10, ll_backend__unify_gen__ArgWidths_11, ll_backend__unify_gen__TypedRvals_12);
#line 1789 "unify_gen.m"
      return;
    }
#line 1788 "unify_gen.m"
  }
#line 1783 "unify_gen.m"
}

#line 1679 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_const_struct_7_p_0(
#line 1679 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ModuleInfo_8,
#line 1679 "unify_gen.m"
  MR_Word ll_backend__unify_gen__UnboxedFloats_9,
#line 1679 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__3_3,
#line 1679 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_ConstStructMap_0_21,
#line 1679 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_ConstStructMap_22,
#line 1679 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_23,
#line 1679 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_24)
#line 1679 "unify_gen.m"
{
#line 1685 "unify_gen.m"
  {
#line 1685 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 1685 "unify_gen.m"
    MR_Integer ll_backend__unify_gen__ConstNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__HeadVar__3_3, (MR_Integer) 0)));
#line 1685 "unify_gen.m"
    MR_Word ll_backend__unify_gen__ConstStruct_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__HeadVar__3_3, (MR_Integer) 1)));
#line 1685 "unify_gen.m"
    MR_Word ll_backend__unify_gen__ConsId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ConstStruct_11, (MR_Integer) 0)));
#line 1685 "unify_gen.m"
    MR_Word ll_backend__unify_gen__ConstArgs_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ConstStruct_11, (MR_Integer) 1)));
#line 1685 "unify_gen.m"
    MR_Word ll_backend__unify_gen__ConsTag_18;
#line 1685 "unify_gen.m"
    MR_Word ll_backend__unify_gen__ConsArgWidths_19;
#line 1685 "unify_gen.m"
    MR_Word ll_backend__unify_gen__Rval_20;
#line 1686 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ConstStruct_11, (MR_Integer) 2)));
#line 1686 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ConstStruct_11, (MR_Integer) 3)));

#line 1687 "unify_gen.m"
    {
#line 1687 "unify_gen.m"
      ll_backend__unify_gen__ConsTag_18 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ll_backend__unify_gen__ModuleInfo_8, ll_backend__unify_gen__ConsId_14);
    }
#line 1688 "unify_gen.m"
    {
#line 1688 "unify_gen.m"
      ll_backend__unify_gen__get_cons_arg_widths_4_p_0((MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0, ll_backend__unify_gen__ModuleInfo_8, ll_backend__unify_gen__ConsId_14, ll_backend__unify_gen__ConstArgs_15, &ll_backend__unify_gen__ConsArgWidths_19);
    }
#line 1689 "unify_gen.m"
    {
#line 1689 "unify_gen.m"
      ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_95_115_116_114_117_99_116_95_114_118_97_108_95_95_91_52_93_95_48_10_p_0(ll_backend__unify_gen__ModuleInfo_8, ll_backend__unify_gen__UnboxedFloats_9, ll_backend__unify_gen__STATE_VARIABLE_ConstStructMap_0_21, ll_backend__unify_gen__ConsTag_18, ll_backend__unify_gen__ConstArgs_15, ll_backend__unify_gen__ConsArgWidths_19, &ll_backend__unify_gen__Rval_20, ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_23, ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_24);
    }
#line 1691 "unify_gen.m"
    {
#line 1691 "unify_gen.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ll_backend__unify_gen__ConstNum_10, ((MR_Box) (ll_backend__unify_gen__Rval_20)), ll_backend__unify_gen__STATE_VARIABLE_ConstStructMap_0_21, ll_backend__unify_gen__STATE_VARIABLE_ConstStructMap_22);
#line 1691 "unify_gen.m"
      return;
    }
#line 1685 "unify_gen.m"
  }
#line 1679 "unify_gen.m"
}

#line 1614 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_direct_arg_deconstruct_8_p_0(
#line 1614 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Var_9,
#line 1614 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Arg_10,
#line 1614 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__Ptag_11,
#line 1614 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Mode_12,
#line 1614 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Type_13,
#line 1614 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_14,
#line 1614 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_23,
#line 1614 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_24)
#line 1614 "unify_gen.m"
{
#line 1618 "unify_gen.m"
  {
#line 1618 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 1618 "unify_gen.m"
    MR_Word ll_backend__unify_gen__LI_16;
#line 1618 "unify_gen.m"
    MR_Word ll_backend__unify_gen__RI_17;
#line 1618 "unify_gen.m"
    MR_Word ll_backend__unify_gen__LF_18;
#line 1618 "unify_gen.m"
    MR_Word ll_backend__unify_gen__RF_19;
#line 1618 "unify_gen.m"
    MR_Word ll_backend__unify_gen__ModuleInfo_20;
#line 1618 "unify_gen.m"
    MR_Word ll_backend__unify_gen__LeftMode_21;
#line 1618 "unify_gen.m"
    MR_Word ll_backend__unify_gen__RightMode_22;
#line 1618 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Mode_12, (MR_Integer) 0)));
#line 1618 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Mode_12, (MR_Integer) 1)));
#line 1618 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_27_27;
#line 1618 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_28_28;

#line 1619 "unify_gen.m"
    ll_backend__unify_gen__LI_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_25_25, (MR_Integer) 0)));
#line 1619 "unify_gen.m"
    ll_backend__unify_gen__RI_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_25_25, (MR_Integer) 1)));
#line 1619 "unify_gen.m"
    ll_backend__unify_gen__LF_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_26_26, (MR_Integer) 0)));
#line 1619 "unify_gen.m"
    ll_backend__unify_gen__RF_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_26_26, (MR_Integer) 1)));
#line 1620 "unify_gen.m"
    {
#line 1620 "unify_gen.m"
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_23, &ll_backend__unify_gen__ModuleInfo_20);
    }
#line 1621 "unify_gen.m"
    {
#line 1621 "unify_gen.m"
      ll_backend__unify_gen__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1621 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_27_27, 0) = ((MR_Box) (ll_backend__unify_gen__LI_16));
#line 1621 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_27_27, 1) = ((MR_Box) (ll_backend__unify_gen__LF_18));
#line 1621 "unify_gen.m"
    }
#line 1621 "unify_gen.m"
    {
#line 1621 "unify_gen.m"
      check_hlds__mode_util__mode_to_arg_mode_4_p_0(ll_backend__unify_gen__ModuleInfo_20, ll_backend__unify_gen__V_27_27, ll_backend__unify_gen__Type_13, &ll_backend__unify_gen__LeftMode_21);
    }
#line 1622 "unify_gen.m"
    {
#line 1622 "unify_gen.m"
      ll_backend__unify_gen__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1622 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_28_28, 0) = ((MR_Box) (ll_backend__unify_gen__RI_17));
#line 1622 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_28_28, 1) = ((MR_Box) (ll_backend__unify_gen__RF_19));
#line 1622 "unify_gen.m"
    }
#line 1622 "unify_gen.m"
    {
#line 1622 "unify_gen.m"
      check_hlds__mode_util__mode_to_arg_mode_4_p_0(ll_backend__unify_gen__ModuleInfo_20, ll_backend__unify_gen__V_28_28, ll_backend__unify_gen__Type_13, &ll_backend__unify_gen__RightMode_22);
    }
#line 1625 "unify_gen.m"
    ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__LeftMode_21 == (MR_Integer) 0);
#line 1625 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 1626 "unify_gen.m"
      ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__RightMode_22 == (MR_Integer) 0);
#line 1632 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 1631 "unify_gen.m"
      {
#line 1631 "unify_gen.m"
        {
#line 1631 "unify_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_direct_arg_deconstruct\'/8", (MR_String) "test in arg of [de]construction");
#line 1631 "unify_gen.m"
          return;
        }
#line 1631 "unify_gen.m"
      }
#line 1632 "unify_gen.m"
    else
#line 1643 "unify_gen.m"
      {
#line 1634 "unify_gen.m"
        ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__LeftMode_21 == (MR_Integer) 0);
#line 1634 "unify_gen.m"
        if (ll_backend__unify_gen__succeeded)
#line 1635 "unify_gen.m"
          ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__RightMode_22 == (MR_Integer) 1);
#line 1643 "unify_gen.m"
        if (ll_backend__unify_gen__succeeded)
#line 1640 "unify_gen.m"
          {
#line 1637 "unify_gen.m"
            {
#line 1637 "unify_gen.m"
              ll_backend__unify_gen__succeeded = ll_backend__code_info__variable_is_forward_live_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_23, ll_backend__unify_gen__Arg_10);
            }
#line 1640 "unify_gen.m"
            if (ll_backend__unify_gen__succeeded)
#line 1638 "unify_gen.m"
              {
#line 1638 "unify_gen.m"
                MR_Word ll_backend__unify_gen__V_32_32;
#line 1638 "unify_gen.m"
                MR_Word ll_backend__unify_gen__V_35_35;
#line 1638 "unify_gen.m"
                MR_Word ll_backend__unify_gen__V_36_36;
#line 1638 "unify_gen.m"
                MR_Word ll_backend__unify_gen__V_37_37;

#line 1639 "unify_gen.m"
                {
#line 1639 "unify_gen.m"
                  ll_backend__unify_gen__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1639 "unify_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_35_35, 0) = ((MR_Box) (ll_backend__unify_gen__Var_9));
#line 1639 "unify_gen.m"
                }
#line 1639 "unify_gen.m"
                {
#line 1639 "unify_gen.m"
                  ll_backend__unify_gen__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1639 "unify_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_37_37, 0) = ((MR_Box) (ll_backend__unify_gen__Ptag_11));
#line 1639 "unify_gen.m"
                }
#line 1639 "unify_gen.m"
                {
#line 1639 "unify_gen.m"
                  ll_backend__unify_gen__V_36_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1639 "unify_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_36_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1639 "unify_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_36_36, 1) = ((MR_Box) (ll_backend__unify_gen__V_37_37));
#line 1639 "unify_gen.m"
                }
#line 1638 "unify_gen.m"
                {
#line 1638 "unify_gen.m"
                  ll_backend__unify_gen__V_32_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1638 "unify_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_32_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1638 "unify_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14))));
#line 1638 "unify_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_32_32, 2) = ((MR_Box) (ll_backend__unify_gen__V_35_35));
#line 1638 "unify_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_32_32, 3) = ((MR_Box) (ll_backend__unify_gen__V_36_36));
#line 1638 "unify_gen.m"
                }
#line 1638 "unify_gen.m"
                {
#line 1638 "unify_gen.m"
                  ll_backend__code_info__assign_expr_to_var_5_p_0(ll_backend__unify_gen__Arg_10, ll_backend__unify_gen__V_32_32, ll_backend__unify_gen__Code_14, ll_backend__unify_gen__STATE_VARIABLE_CI_0_23, ll_backend__unify_gen__STATE_VARIABLE_CI_24);
#line 1638 "unify_gen.m"
                  return;
                }
#line 1638 "unify_gen.m"
              }
#line 1640 "unify_gen.m"
            else
#line 1641 "unify_gen.m"
              {
#line 1641 "unify_gen.m"
                {
#line 1641 "unify_gen.m"
                  *ll_backend__unify_gen__Code_14 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                }
#line 1641 "unify_gen.m"
                *ll_backend__unify_gen__STATE_VARIABLE_CI_24 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_23;
#line 1641 "unify_gen.m"
              }
#line 1640 "unify_gen.m"
          }
#line 1643 "unify_gen.m"
        else
#line 1649 "unify_gen.m"
          {
#line 1645 "unify_gen.m"
            ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__LeftMode_21 == (MR_Integer) 1);
#line 1645 "unify_gen.m"
            if (ll_backend__unify_gen__succeeded)
#line 1646 "unify_gen.m"
              ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__RightMode_22 == (MR_Integer) 0);
#line 1649 "unify_gen.m"
            if (ll_backend__unify_gen__succeeded)
#line 1648 "unify_gen.m"
              {
#line 1648 "unify_gen.m"
                MR_Word ll_backend__unify_gen__V_38_38;

#line 1648 "unify_gen.m"
                {
#line 1648 "unify_gen.m"
                  ll_backend__unify_gen__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1648 "unify_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_38_38, 0) = ((MR_Box) (ll_backend__unify_gen__Arg_10));
#line 1648 "unify_gen.m"
                }
#line 1648 "unify_gen.m"
                {
#line 1648 "unify_gen.m"
                  ll_backend__code_info__reassign_mkword_hole_var_6_p_0(ll_backend__unify_gen__Var_9, ll_backend__unify_gen__Ptag_11, ll_backend__unify_gen__V_38_38, ll_backend__unify_gen__Code_14, ll_backend__unify_gen__STATE_VARIABLE_CI_0_23, ll_backend__unify_gen__STATE_VARIABLE_CI_24);
#line 1648 "unify_gen.m"
                  return;
                }
#line 1648 "unify_gen.m"
              }
#line 1649 "unify_gen.m"
            else
#line 1656 "unify_gen.m"
              {
#line 1650 "unify_gen.m"
                ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__LeftMode_21 == (MR_Integer) 2);
#line 1650 "unify_gen.m"
                if (ll_backend__unify_gen__succeeded)
#line 1651 "unify_gen.m"
                  ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__RightMode_22 == (MR_Integer) 2);
#line 1656 "unify_gen.m"
                if (ll_backend__unify_gen__succeeded)
#line 1653 "unify_gen.m"
                  {
#line 1653 "unify_gen.m"
                    {
#line 1653 "unify_gen.m"
                      *ll_backend__unify_gen__Code_14 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                    }
#line 1653 "unify_gen.m"
                  }
#line 1656 "unify_gen.m"
                else
#line 1657 "unify_gen.m"
                  {
#line 1657 "unify_gen.m"
                    {
#line 1657 "unify_gen.m"
                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_direct_arg_deconstruct\'/8", (MR_String) "some strange unify");
#line 1657 "unify_gen.m"
                      return;
                    }
#line 1657 "unify_gen.m"
                  }
#line 1657 "unify_gen.m"
                *ll_backend__unify_gen__STATE_VARIABLE_CI_24 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_23;
#line 1656 "unify_gen.m"
              }
#line 1649 "unify_gen.m"
          }
#line 1643 "unify_gen.m"
      }
#line 1618 "unify_gen.m"
  }
#line 1614 "unify_gen.m"
}

#line 1568 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_direct_arg_construct_8_p_0(
#line 1568 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Var_9,
#line 1568 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Arg_10,
#line 1568 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__Ptag_11,
#line 1568 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Mode_12,
#line 1568 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Type_13,
#line 1568 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_14,
#line 1568 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_23,
#line 1568 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_24)
#line 1568 "unify_gen.m"
{
#line 1572 "unify_gen.m"
  {
#line 1572 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 1572 "unify_gen.m"
    MR_Word ll_backend__unify_gen__LI_16;
#line 1572 "unify_gen.m"
    MR_Word ll_backend__unify_gen__RI_17;
#line 1572 "unify_gen.m"
    MR_Word ll_backend__unify_gen__LF_18;
#line 1572 "unify_gen.m"
    MR_Word ll_backend__unify_gen__RF_19;
#line 1572 "unify_gen.m"
    MR_Word ll_backend__unify_gen__ModuleInfo_20;
#line 1572 "unify_gen.m"
    MR_Word ll_backend__unify_gen__LeftMode_21;
#line 1572 "unify_gen.m"
    MR_Word ll_backend__unify_gen__RightMode_22;
#line 1572 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Mode_12, (MR_Integer) 0)));
#line 1572 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Mode_12, (MR_Integer) 1)));
#line 1572 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_27_27;
#line 1572 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_28_28;

#line 1573 "unify_gen.m"
    ll_backend__unify_gen__LI_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_25_25, (MR_Integer) 0)));
#line 1573 "unify_gen.m"
    ll_backend__unify_gen__RI_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_25_25, (MR_Integer) 1)));
#line 1573 "unify_gen.m"
    ll_backend__unify_gen__LF_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_26_26, (MR_Integer) 0)));
#line 1573 "unify_gen.m"
    ll_backend__unify_gen__RF_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_26_26, (MR_Integer) 1)));
#line 1574 "unify_gen.m"
    {
#line 1574 "unify_gen.m"
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_23, &ll_backend__unify_gen__ModuleInfo_20);
    }
#line 1575 "unify_gen.m"
    {
#line 1575 "unify_gen.m"
      ll_backend__unify_gen__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1575 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_27_27, 0) = ((MR_Box) (ll_backend__unify_gen__LI_16));
#line 1575 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_27_27, 1) = ((MR_Box) (ll_backend__unify_gen__LF_18));
#line 1575 "unify_gen.m"
    }
#line 1575 "unify_gen.m"
    {
#line 1575 "unify_gen.m"
      check_hlds__mode_util__mode_to_arg_mode_4_p_0(ll_backend__unify_gen__ModuleInfo_20, ll_backend__unify_gen__V_27_27, ll_backend__unify_gen__Type_13, &ll_backend__unify_gen__LeftMode_21);
    }
#line 1576 "unify_gen.m"
    {
#line 1576 "unify_gen.m"
      ll_backend__unify_gen__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1576 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_28_28, 0) = ((MR_Box) (ll_backend__unify_gen__RI_17));
#line 1576 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_28_28, 1) = ((MR_Box) (ll_backend__unify_gen__RF_19));
#line 1576 "unify_gen.m"
    }
#line 1576 "unify_gen.m"
    {
#line 1576 "unify_gen.m"
      check_hlds__mode_util__mode_to_arg_mode_4_p_0(ll_backend__unify_gen__ModuleInfo_20, ll_backend__unify_gen__V_28_28, ll_backend__unify_gen__Type_13, &ll_backend__unify_gen__RightMode_22);
    }
#line 1579 "unify_gen.m"
    ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__LeftMode_21 == (MR_Integer) 0);
#line 1579 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 1580 "unify_gen.m"
      ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__RightMode_22 == (MR_Integer) 0);
#line 1586 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 1585 "unify_gen.m"
      {
#line 1585 "unify_gen.m"
        {
#line 1585 "unify_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_direct_arg_construct\'/8", (MR_String) "test in arg of [de]construction");
#line 1585 "unify_gen.m"
          return;
        }
#line 1585 "unify_gen.m"
      }
#line 1586 "unify_gen.m"
    else
#line 1592 "unify_gen.m"
      {
#line 1588 "unify_gen.m"
        ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__LeftMode_21 == (MR_Integer) 0);
#line 1588 "unify_gen.m"
        if (ll_backend__unify_gen__succeeded)
#line 1589 "unify_gen.m"
          ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__RightMode_22 == (MR_Integer) 1);
#line 1592 "unify_gen.m"
        if (ll_backend__unify_gen__succeeded)
#line 1591 "unify_gen.m"
          {
#line 1591 "unify_gen.m"
            {
#line 1591 "unify_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_direct_arg_construct\'/8", (MR_String) "left-to-right data flow in construction");
#line 1591 "unify_gen.m"
              return;
            }
#line 1591 "unify_gen.m"
          }
#line 1592 "unify_gen.m"
        else
#line 1598 "unify_gen.m"
          {
#line 1594 "unify_gen.m"
            ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__LeftMode_21 == (MR_Integer) 1);
#line 1594 "unify_gen.m"
            if (ll_backend__unify_gen__succeeded)
#line 1595 "unify_gen.m"
              ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__RightMode_22 == (MR_Integer) 0);
#line 1598 "unify_gen.m"
            if (ll_backend__unify_gen__succeeded)
#line 1597 "unify_gen.m"
              {
#line 1597 "unify_gen.m"
                MR_Word ll_backend__unify_gen__V_35_35;
#line 1597 "unify_gen.m"
                MR_Word ll_backend__unify_gen__V_37_37;

#line 1597 "unify_gen.m"
                {
#line 1597 "unify_gen.m"
                  ll_backend__unify_gen__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1597 "unify_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_37_37, 0) = ((MR_Box) (ll_backend__unify_gen__Arg_10));
#line 1597 "unify_gen.m"
                }
#line 1597 "unify_gen.m"
                {
#line 1597 "unify_gen.m"
                  ll_backend__unify_gen__V_35_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1597 "unify_gen.m"
                  MR_hl_field(MR_mktag(2), ll_backend__unify_gen__V_35_35, 0) = ((MR_Box) (ll_backend__unify_gen__Ptag_11));
#line 1597 "unify_gen.m"
                  MR_hl_field(MR_mktag(2), ll_backend__unify_gen__V_35_35, 1) = ((MR_Box) (ll_backend__unify_gen__V_37_37));
#line 1597 "unify_gen.m"
                }
#line 1597 "unify_gen.m"
                {
#line 1597 "unify_gen.m"
                  ll_backend__code_info__assign_expr_to_var_5_p_0(ll_backend__unify_gen__Var_9, ll_backend__unify_gen__V_35_35, ll_backend__unify_gen__Code_14, ll_backend__unify_gen__STATE_VARIABLE_CI_0_23, ll_backend__unify_gen__STATE_VARIABLE_CI_24);
#line 1597 "unify_gen.m"
                  return;
                }
#line 1597 "unify_gen.m"
              }
#line 1598 "unify_gen.m"
            else
#line 1606 "unify_gen.m"
              {
#line 1599 "unify_gen.m"
                ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__LeftMode_21 == (MR_Integer) 2);
#line 1599 "unify_gen.m"
                if (ll_backend__unify_gen__succeeded)
#line 1600 "unify_gen.m"
                  ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__RightMode_22 == (MR_Integer) 2);
#line 1606 "unify_gen.m"
                if (ll_backend__unify_gen__succeeded)
#line 1604 "unify_gen.m"
                  {
#line 1604 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__V_38_38;

#line 1604 "unify_gen.m"
                    {
#line 1604 "unify_gen.m"
                      ll_backend__unify_gen__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1604 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1604 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_38_38, 1) = ((MR_Box) (ll_backend__unify_gen__Ptag_11));
#line 1604 "unify_gen.m"
                    }
#line 1604 "unify_gen.m"
                    {
#line 1604 "unify_gen.m"
                      ll_backend__code_info__assign_const_to_var_4_p_0(ll_backend__unify_gen__Var_9, ll_backend__unify_gen__V_38_38, ll_backend__unify_gen__STATE_VARIABLE_CI_0_23, ll_backend__unify_gen__STATE_VARIABLE_CI_24);
                    }
#line 1605 "unify_gen.m"
                    {
#line 1605 "unify_gen.m"
                      *ll_backend__unify_gen__Code_14 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                    }
#line 1604 "unify_gen.m"
                  }
#line 1606 "unify_gen.m"
                else
#line 1607 "unify_gen.m"
                  {
#line 1607 "unify_gen.m"
                    {
#line 1607 "unify_gen.m"
                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_direct_arg_construct\'/8", (MR_String) "some strange unify");
#line 1607 "unify_gen.m"
                      return;
                    }
#line 1607 "unify_gen.m"
                  }
#line 1606 "unify_gen.m"
              }
#line 1598 "unify_gen.m"
          }
#line 1592 "unify_gen.m"
      }
#line 1572 "unify_gen.m"
  }
#line 1568 "unify_gen.m"
}

#line 1556 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__field_offset_pair_3_p_0(
#line 1556 "unify_gen.m"
  MR_Word ll_backend__unify_gen__LvalA_4,
#line 1556 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__LvalA_2,
#line 1556 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__LvalB_5)
#line 1556 "unify_gen.m"
{
#line 1558 "unify_gen.m"
  {
#line 1558 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 1558 "unify_gen.m"
    MR_Word ll_backend__unify_gen__Ptag_6;
#line 1558 "unify_gen.m"
    MR_Word ll_backend__unify_gen__Address_7;
#line 1558 "unify_gen.m"
    MR_Integer ll_backend__unify_gen__Offset_8;
#line 1558 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_9_9;
#line 1558 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_10_10;
#line 1558 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_11_11;
#line 1558 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_12_12;
#line 1558 "unify_gen.m"
    MR_Integer ll_backend__unify_gen__V_13_13;
#line 1558 "unify_gen.m"
    MR_Integer ll_backend__unify_gen__V_14_14;

#line 1558 "unify_gen.m"
    *ll_backend__unify_gen__LvalA_2 = ll_backend__unify_gen__LvalA_4;
#line 1559 "unify_gen.m"
    ll_backend__unify_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__unify_gen__LvalA_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__LvalA_4, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 1559 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 1559 "unify_gen.m"
      {
#line 1559 "unify_gen.m"
        ll_backend__unify_gen__Ptag_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__LvalA_4, (MR_Integer) 1)));
#line 1559 "unify_gen.m"
        ll_backend__unify_gen__Address_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__LvalA_4, (MR_Integer) 2)));
#line 1559 "unify_gen.m"
        ll_backend__unify_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__LvalA_4, (MR_Integer) 3)));
#line 1559 "unify_gen.m"
        ll_backend__unify_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__unify_gen__V_9_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_9_9, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1559 "unify_gen.m"
        if (ll_backend__unify_gen__succeeded)
#line 1559 "unify_gen.m"
          {
#line 1559 "unify_gen.m"
            ll_backend__unify_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_9_9, (MR_Integer) 1)));
#line 1559 "unify_gen.m"
            ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__V_10_10)) == (MR_mktag((MR_Integer) 1)));
#line 1559 "unify_gen.m"
            if (ll_backend__unify_gen__succeeded)
#line 1559 "unify_gen.m"
              {
#line 1559 "unify_gen.m"
                ll_backend__unify_gen__Offset_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_10_10, (MR_Integer) 0)));
#line 1560 "unify_gen.m"
                ll_backend__unify_gen__V_14_14 = (MR_Integer) 1;
#line 1560 "unify_gen.m"
                ll_backend__unify_gen__V_13_13 = (ll_backend__unify_gen__Offset_8 + ll_backend__unify_gen__V_14_14);
#line 1560 "unify_gen.m"
                {
#line 1560 "unify_gen.m"
                  ll_backend__unify_gen__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1560 "unify_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_12_12, 0) = ((MR_Box) (ll_backend__unify_gen__V_13_13));
#line 1560 "unify_gen.m"
                }
#line 1560 "unify_gen.m"
                {
#line 1560 "unify_gen.m"
                  ll_backend__unify_gen__V_11_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1560 "unify_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_11_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1560 "unify_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_11_11, 1) = ((MR_Box) (ll_backend__unify_gen__V_12_12));
#line 1560 "unify_gen.m"
                }
#line 1560 "unify_gen.m"
                {
#line 1560 "unify_gen.m"
                  MR_Word base;
#line 1560 "unify_gen.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1560 "unify_gen.m"
                  *ll_backend__unify_gen__LvalB_5 = base;
#line 1560 "unify_gen.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 1560 "unify_gen.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__unify_gen__Ptag_6));
#line 1560 "unify_gen.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__unify_gen__Address_7));
#line 1560 "unify_gen.m"
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__unify_gen__V_11_11));
#line 1560 "unify_gen.m"
                }
#line 1560 "unify_gen.m"
                ll_backend__unify_gen__succeeded = MR_TRUE;
#line 1559 "unify_gen.m"
              }
#line 1559 "unify_gen.m"
          }
#line 1559 "unify_gen.m"
      }
#line 1558 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 1558 "unify_gen.m"
  }
#line 1556 "unify_gen.m"
}

#line 1466 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_sub_assign_5_p_0(
#line 1466 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Left_6,
#line 1466 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Right_7,
#line 1466 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_8,
#line 1466 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_38,
#line 1466 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_39)
#line 1466 "unify_gen.m"
{
#line 1471 "unify_gen.m"
  {
#line 1471 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;

#line 1471 "unify_gen.m"
    if (((MR_tag((MR_Word) ll_backend__unify_gen__Left_6)) == (MR_mktag((MR_Integer) 1))))
#line 1471 "unify_gen.m"
      {
#line 1471 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Left_6, (MR_Integer) 1)));
#line 1471 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Left_6, (MR_Integer) 0)));

#line 1471 "unify_gen.m"
        if (((MR_tag((MR_Word) ll_backend__unify_gen__Right_7)) == (MR_mktag((MR_Integer) 1))))
#line 1471 "unify_gen.m"
          {
#line 1474 "unify_gen.m"
            {
#line 1474 "unify_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_sub_assign\'/5", (MR_String) "lval/lval");
#line 1474 "unify_gen.m"
              return;
            }
#line 1471 "unify_gen.m"
          }
#line 1471 "unify_gen.m"
        else
#line 1476 "unify_gen.m"
          {
#line 1476 "unify_gen.m"
            MR_Word ll_backend__unify_gen__TypeCtorInfo_133_133;
#line 1476 "unify_gen.m"
            MR_Word ll_backend__unify_gen__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Right_7, (MR_Integer) 0)));
#line 1476 "unify_gen.m"
            MR_Word ll_backend__unify_gen__SourceCode_17;
#line 1476 "unify_gen.m"
            MR_Word ll_backend__unify_gen__Source_18;
#line 1476 "unify_gen.m"
            MR_Word ll_backend__unify_gen__Lval_19;
#line 1476 "unify_gen.m"
            MR_Word ll_backend__unify_gen__MaterializeCode_20;
#line 1476 "unify_gen.m"
            MR_Word ll_backend__unify_gen__AssignCode_21;
#line 1476 "unify_gen.m"
            MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_59_59;
#line 1476 "unify_gen.m"
            MR_Word ll_backend__unify_gen__V_91_91;

#line 1480 "unify_gen.m"
            {
#line 1480 "unify_gen.m"
              ll_backend__code_info__produce_variable_5_p_0(ll_backend__unify_gen__Var_16, &ll_backend__unify_gen__SourceCode_17, &ll_backend__unify_gen__Source_18, ll_backend__unify_gen__STATE_VARIABLE_CI_0_38, &ll_backend__unify_gen__STATE_VARIABLE_CI_59_59);
            }
#line 1481 "unify_gen.m"
            {
#line 1481 "unify_gen.m"
              ll_backend__code_info__materialize_vars_in_lval_5_p_0(ll_backend__unify_gen__V_161_161, &ll_backend__unify_gen__Lval_19, &ll_backend__unify_gen__MaterializeCode_20, ll_backend__unify_gen__STATE_VARIABLE_CI_59_59, ll_backend__unify_gen__STATE_VARIABLE_CI_39);
            }
#line 1486 "unify_gen.m"
            if ((ll_backend__unify_gen__V_160_160 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1500 "unify_gen.m"
              {
#line 1500 "unify_gen.m"
                MR_Word ll_backend__unify_gen__LvalA_28;
#line 1500 "unify_gen.m"
                MR_Word ll_backend__unify_gen__LvalB_29;

#line 1501 "unify_gen.m"
                {
#line 1501 "unify_gen.m"
                  ll_backend__unify_gen__succeeded = ll_backend__unify_gen__field_offset_pair_3_p_0(ll_backend__unify_gen__Lval_19, &ll_backend__unify_gen__LvalA_28, &ll_backend__unify_gen__LvalB_29);
                }
#line 1500 "unify_gen.m"
                if (ll_backend__unify_gen__succeeded)
#line 1502 "unify_gen.m"
                  {
#line 1502 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__SrcA_30;
#line 1502 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__SrcB_31;
#line 1502 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__V_69_69;
#line 1502 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__V_70_70;
#line 1502 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__V_71_71;
#line 1502 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__V_72_72;
#line 1502 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__V_73_73;
#line 1502 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__V_74_74;

#line 1502 "unify_gen.m"
                    {
#line 1502 "unify_gen.m"
                      ll_backend__unify_gen__SrcA_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1502 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__SrcA_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1502 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__SrcA_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 37))));
#line 1502 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__SrcA_30, 2) = ((MR_Box) (ll_backend__unify_gen__Source_18));
#line 1502 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__SrcA_30, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[8])));
#line 1502 "unify_gen.m"
                    }
#line 1503 "unify_gen.m"
                    {
#line 1503 "unify_gen.m"
                      ll_backend__unify_gen__SrcB_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1503 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__SrcB_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1503 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__SrcB_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 37))));
#line 1503 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__SrcB_31, 2) = ((MR_Box) (ll_backend__unify_gen__Source_18));
#line 1503 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__SrcB_31, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[9])));
#line 1503 "unify_gen.m"
                    }
#line 1506 "unify_gen.m"
                    {
#line 1506 "unify_gen.m"
                      ll_backend__unify_gen__V_71_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1506 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_71_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1506 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_71_71, 1) = ((MR_Box) (ll_backend__unify_gen__LvalA_28));
#line 1506 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_71_71, 2) = ((MR_Box) (ll_backend__unify_gen__SrcA_30));
#line 1506 "unify_gen.m"
                    }
#line 1506 "unify_gen.m"
                    {
#line 1506 "unify_gen.m"
                      ll_backend__unify_gen__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1506 "unify_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_70_70, 0) = ((MR_Box) (ll_backend__unify_gen__V_71_71));
#line 1506 "unify_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_70_70, 1) = ((MR_Box) ((MR_String) "Update double word"));
#line 1506 "unify_gen.m"
                    }
#line 1507 "unify_gen.m"
                    {
#line 1507 "unify_gen.m"
                      ll_backend__unify_gen__V_74_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1507 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_74_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1507 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_74_74, 1) = ((MR_Box) (ll_backend__unify_gen__LvalB_29));
#line 1507 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_74_74, 2) = ((MR_Box) (ll_backend__unify_gen__SrcB_31));
#line 1507 "unify_gen.m"
                    }
#line 1508 "unify_gen.m"
                    {
#line 1508 "unify_gen.m"
                      ll_backend__unify_gen__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1508 "unify_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_73_73, 0) = ((MR_Box) (ll_backend__unify_gen__V_74_74));
#line 1508 "unify_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_73_73, 1) = ((MR_Box) ((MR_String) "Update double word"));
#line 1508 "unify_gen.m"
                    }
#line 1506 "unify_gen.m"
                    {
#line 1506 "unify_gen.m"
                      ll_backend__unify_gen__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1506 "unify_gen.m"
                      MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_72_72, 0) = ((MR_Box) (ll_backend__unify_gen__V_73_73));
#line 1506 "unify_gen.m"
                      MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1506 "unify_gen.m"
                    }
#line 1505 "unify_gen.m"
                    {
#line 1505 "unify_gen.m"
                      ll_backend__unify_gen__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1505 "unify_gen.m"
                      MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_69_69, 0) = ((MR_Box) (ll_backend__unify_gen__V_70_70));
#line 1505 "unify_gen.m"
                      MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_69_69, 1) = ((MR_Box) (ll_backend__unify_gen__V_72_72));
#line 1505 "unify_gen.m"
                    }
#line 1505 "unify_gen.m"
                    {
#line 1505 "unify_gen.m"
                      ll_backend__unify_gen__AssignCode_21 = mercury__cord__from_list_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__unify_gen__V_69_69);
                    }
#line 1502 "unify_gen.m"
                  }
#line 1500 "unify_gen.m"
                else
#line 1510 "unify_gen.m"
                  {
#line 1510 "unify_gen.m"
                    {
#line 1510 "unify_gen.m"
                      mercury__require__sorry_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_sub_assign\'/5", (MR_String) "double_word: non-field lval");
#line 1510 "unify_gen.m"
                      return;
                    }
#line 1510 "unify_gen.m"
                  }
#line 1500 "unify_gen.m"
              }
#line 1486 "unify_gen.m"
            else
#line 1486 "unify_gen.m"
              if ((ll_backend__unify_gen__V_160_160 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1483 "unify_gen.m"
                {
#line 1483 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_88_88;
#line 1483 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_89_89;

#line 1484 "unify_gen.m"
                  {
#line 1484 "unify_gen.m"
                    ll_backend__unify_gen__V_89_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1484 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_89_89, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1484 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_89_89, 1) = ((MR_Box) (ll_backend__unify_gen__Lval_19));
#line 1484 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_89_89, 2) = ((MR_Box) (ll_backend__unify_gen__Source_18));
#line 1484 "unify_gen.m"
                  }
#line 1484 "unify_gen.m"
                  {
#line 1484 "unify_gen.m"
                    ll_backend__unify_gen__V_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1484 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_88_88, 0) = ((MR_Box) (ll_backend__unify_gen__V_89_89));
#line 1484 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_88_88, 1) = ((MR_Box) ((MR_String) "Copy value"));
#line 1484 "unify_gen.m"
                  }
#line 1484 "unify_gen.m"
                  {
#line 1484 "unify_gen.m"
                    ll_backend__unify_gen__AssignCode_21 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__unify_gen__V_88_88)));
                  }
#line 1483 "unify_gen.m"
                }
#line 1486 "unify_gen.m"
              else
#line 1486 "unify_gen.m"
                if (((MR_tag((MR_Word) ll_backend__unify_gen__V_160_160)) == (MR_mktag((MR_Integer) 1))))
#line 1492 "unify_gen.m"
                  {
#line 1492 "unify_gen.m"
                    MR_Integer ll_backend__unify_gen__Mask_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_160_160, (MR_Integer) 0)));
#line 1492 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__ComplementMask_24;
#line 1492 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__MaskOld_25;
#line 1492 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__ShiftNew_26;
#line 1492 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__Combined_27;
#line 1492 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__V_79_79;
#line 1492 "unify_gen.m"
                    MR_Integer ll_backend__unify_gen__V_80_80;
#line 1492 "unify_gen.m"
                    MR_Integer ll_backend__unify_gen__V_81_81;
#line 1492 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__V_83_83;
#line 1492 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__V_85_85;
#line 1492 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__V_86_86;

#line 1493 "unify_gen.m"
                    {
#line 1493 "unify_gen.m"
                      ll_backend__unify_gen__V_81_81 = mercury__int__f_60_60_2_f_0(ll_backend__unify_gen__Mask_22, (MR_Integer) 0);
                    }
#line 1493 "unify_gen.m"
                    ll_backend__unify_gen__V_80_80 = ~(ll_backend__unify_gen__V_81_81);
#line 1493 "unify_gen.m"
                    {
#line 1493 "unify_gen.m"
                      ll_backend__unify_gen__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1493 "unify_gen.m"
                      MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_79_79, 0) = ((MR_Box) (ll_backend__unify_gen__V_80_80));
#line 1493 "unify_gen.m"
                    }
#line 1493 "unify_gen.m"
                    {
#line 1493 "unify_gen.m"
                      ll_backend__unify_gen__ComplementMask_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1493 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ComplementMask_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1493 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ComplementMask_24, 1) = ((MR_Box) (ll_backend__unify_gen__V_79_79));
#line 1493 "unify_gen.m"
                    }
#line 1494 "unify_gen.m"
                    {
#line 1494 "unify_gen.m"
                      ll_backend__unify_gen__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1494 "unify_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_83_83, 0) = ((MR_Box) (ll_backend__unify_gen__Lval_19));
#line 1494 "unify_gen.m"
                    }
#line 1494 "unify_gen.m"
                    {
#line 1494 "unify_gen.m"
                      ll_backend__unify_gen__MaskOld_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1494 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__MaskOld_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1494 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__MaskOld_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 1494 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__MaskOld_25, 2) = ((MR_Box) (ll_backend__unify_gen__V_83_83));
#line 1494 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__MaskOld_25, 3) = ((MR_Box) (ll_backend__unify_gen__ComplementMask_24));
#line 1494 "unify_gen.m"
                    }
#line 1495 "unify_gen.m"
                    {
#line 1495 "unify_gen.m"
                      ll_backend__unify_gen__ShiftNew_26 = ll_backend__unify_gen__maybe_left_shift_rval_2_f_0(ll_backend__unify_gen__Source_18, (MR_Integer) 0);
                    }
#line 1496 "unify_gen.m"
                    {
#line 1496 "unify_gen.m"
                      ll_backend__unify_gen__Combined_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1496 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Combined_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1496 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Combined_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
#line 1496 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Combined_27, 2) = ((MR_Box) (ll_backend__unify_gen__MaskOld_25));
#line 1496 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Combined_27, 3) = ((MR_Box) (ll_backend__unify_gen__ShiftNew_26));
#line 1496 "unify_gen.m"
                    }
#line 1497 "unify_gen.m"
                    {
#line 1497 "unify_gen.m"
                      ll_backend__unify_gen__V_86_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1497 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_86_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1497 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_86_86, 1) = ((MR_Box) (ll_backend__unify_gen__Lval_19));
#line 1497 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_86_86, 2) = ((MR_Box) (ll_backend__unify_gen__Combined_27));
#line 1497 "unify_gen.m"
                    }
#line 1497 "unify_gen.m"
                    {
#line 1497 "unify_gen.m"
                      ll_backend__unify_gen__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1497 "unify_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_85_85, 0) = ((MR_Box) (ll_backend__unify_gen__V_86_86));
#line 1497 "unify_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_85_85, 1) = ((MR_Box) ((MR_String) "Update part of word"));
#line 1497 "unify_gen.m"
                    }
#line 1497 "unify_gen.m"
                    {
#line 1497 "unify_gen.m"
                      ll_backend__unify_gen__AssignCode_21 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__unify_gen__V_85_85)));
                    }
#line 1492 "unify_gen.m"
                  }
#line 1486 "unify_gen.m"
                else
#line 1492 "unify_gen.m"
                  {
#line 1492 "unify_gen.m"
                    MR_Integer ll_backend__unify_gen__Mask_136 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__unify_gen__V_160_160, (MR_Integer) 1)));
#line 1492 "unify_gen.m"
                    MR_Integer ll_backend__unify_gen__Shift_137 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__unify_gen__V_160_160, (MR_Integer) 0)));
#line 1492 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__ComplementMask_138;
#line 1492 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__MaskOld_139;
#line 1492 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__ShiftNew_140;
#line 1492 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__Combined_141;
#line 1492 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__V_142_142;
#line 1492 "unify_gen.m"
                    MR_Integer ll_backend__unify_gen__V_143_143;
#line 1492 "unify_gen.m"
                    MR_Integer ll_backend__unify_gen__V_144_144;
#line 1492 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__V_146_146;
#line 1492 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__V_148_148;
#line 1492 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__V_149_149;

#line 1493 "unify_gen.m"
                    {
#line 1493 "unify_gen.m"
                      ll_backend__unify_gen__V_144_144 = mercury__int__f_60_60_2_f_0(ll_backend__unify_gen__Mask_136, ll_backend__unify_gen__Shift_137);
                    }
#line 1493 "unify_gen.m"
                    ll_backend__unify_gen__V_143_143 = ~(ll_backend__unify_gen__V_144_144);
#line 1493 "unify_gen.m"
                    {
#line 1493 "unify_gen.m"
                      ll_backend__unify_gen__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1493 "unify_gen.m"
                      MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_142_142, 0) = ((MR_Box) (ll_backend__unify_gen__V_143_143));
#line 1493 "unify_gen.m"
                    }
#line 1493 "unify_gen.m"
                    {
#line 1493 "unify_gen.m"
                      ll_backend__unify_gen__ComplementMask_138 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1493 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ComplementMask_138, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1493 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ComplementMask_138, 1) = ((MR_Box) (ll_backend__unify_gen__V_142_142));
#line 1493 "unify_gen.m"
                    }
#line 1494 "unify_gen.m"
                    {
#line 1494 "unify_gen.m"
                      ll_backend__unify_gen__V_146_146 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1494 "unify_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_146_146, 0) = ((MR_Box) (ll_backend__unify_gen__Lval_19));
#line 1494 "unify_gen.m"
                    }
#line 1494 "unify_gen.m"
                    {
#line 1494 "unify_gen.m"
                      ll_backend__unify_gen__MaskOld_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1494 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__MaskOld_139, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1494 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__MaskOld_139, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 1494 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__MaskOld_139, 2) = ((MR_Box) (ll_backend__unify_gen__V_146_146));
#line 1494 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__MaskOld_139, 3) = ((MR_Box) (ll_backend__unify_gen__ComplementMask_138));
#line 1494 "unify_gen.m"
                    }
#line 1495 "unify_gen.m"
                    {
#line 1495 "unify_gen.m"
                      ll_backend__unify_gen__ShiftNew_140 = ll_backend__unify_gen__maybe_left_shift_rval_2_f_0(ll_backend__unify_gen__Source_18, ll_backend__unify_gen__Shift_137);
                    }
#line 1496 "unify_gen.m"
                    {
#line 1496 "unify_gen.m"
                      ll_backend__unify_gen__Combined_141 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1496 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Combined_141, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1496 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Combined_141, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
#line 1496 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Combined_141, 2) = ((MR_Box) (ll_backend__unify_gen__MaskOld_139));
#line 1496 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Combined_141, 3) = ((MR_Box) (ll_backend__unify_gen__ShiftNew_140));
#line 1496 "unify_gen.m"
                    }
#line 1497 "unify_gen.m"
                    {
#line 1497 "unify_gen.m"
                      ll_backend__unify_gen__V_149_149 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1497 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_149_149, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1497 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_149_149, 1) = ((MR_Box) (ll_backend__unify_gen__Lval_19));
#line 1497 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_149_149, 2) = ((MR_Box) (ll_backend__unify_gen__Combined_141));
#line 1497 "unify_gen.m"
                    }
#line 1497 "unify_gen.m"
                    {
#line 1497 "unify_gen.m"
                      ll_backend__unify_gen__V_148_148 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1497 "unify_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_148_148, 0) = ((MR_Box) (ll_backend__unify_gen__V_149_149));
#line 1497 "unify_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_148_148, 1) = ((MR_Box) ((MR_String) "Update part of word"));
#line 1497 "unify_gen.m"
                    }
#line 1497 "unify_gen.m"
                    {
#line 1497 "unify_gen.m"
                      ll_backend__unify_gen__AssignCode_21 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__unify_gen__V_148_148)));
                    }
#line 1492 "unify_gen.m"
                  }
#line 11138 "ll_backend.unify_gen.c"
            ll_backend__unify_gen__TypeCtorInfo_133_133 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 1513 "unify_gen.m"
            {
#line 1513 "unify_gen.m"
              ll_backend__unify_gen__V_91_91 = mercury__cord__f_43_43_2_f_0(ll_backend__unify_gen__TypeCtorInfo_133_133, ll_backend__unify_gen__MaterializeCode_20, ll_backend__unify_gen__AssignCode_21);
            }
#line 1513 "unify_gen.m"
            {
#line 1513 "unify_gen.m"
              *ll_backend__unify_gen__Code_8 = mercury__cord__f_43_43_2_f_0(ll_backend__unify_gen__TypeCtorInfo_133_133, ll_backend__unify_gen__SourceCode_17, ll_backend__unify_gen__V_91_91);
            }
#line 1476 "unify_gen.m"
          }
#line 1471 "unify_gen.m"
      }
#line 1471 "unify_gen.m"
    else
#line 1515 "unify_gen.m"
      {
#line 1515 "unify_gen.m"
        MR_Word ll_backend__unify_gen__Lvar_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Left_6, (MR_Integer) 0)));

#line 1516 "unify_gen.m"
        {
#line 1516 "unify_gen.m"
          ll_backend__unify_gen__succeeded = ll_backend__code_info__variable_is_forward_live_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_38, ll_backend__unify_gen__Lvar_33);
        }
#line 1551 "unify_gen.m"
        if (ll_backend__unify_gen__succeeded)
#line 1545 "unify_gen.m"
          if (((MR_tag((MR_Word) ll_backend__unify_gen__Right_7)) == (MR_mktag((MR_Integer) 1))))
#line 1518 "unify_gen.m"
            {
#line 1518 "unify_gen.m"
              MR_Word ll_backend__unify_gen__RightWidth_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Right_7, (MR_Integer) 1)));
#line 1518 "unify_gen.m"
              MR_Word ll_backend__unify_gen__Lval_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Right_7, (MR_Integer) 0)));

#line 1523 "unify_gen.m"
              if ((ll_backend__unify_gen__RightWidth_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1535 "unify_gen.m"
                {
#line 1535 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__LvalA_100;
#line 1535 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__LvalB_101;

#line 1536 "unify_gen.m"
                  {
#line 1536 "unify_gen.m"
                    ll_backend__unify_gen__succeeded = ll_backend__unify_gen__field_offset_pair_3_p_0(ll_backend__unify_gen__Lval_110, &ll_backend__unify_gen__LvalA_100, &ll_backend__unify_gen__LvalB_101);
                  }
#line 1535 "unify_gen.m"
                  if (ll_backend__unify_gen__succeeded)
#line 1538 "unify_gen.m"
                    {
#line 1538 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__V_42_42;
#line 1538 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__V_43_43;
#line 1538 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__V_44_44;
#line 1538 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__V_46_46;
#line 1538 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__Rval_99;

#line 1537 "unify_gen.m"
                      {
#line 1537 "unify_gen.m"
                        ll_backend__unify_gen__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1537 "unify_gen.m"
                        MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_42_42, 0) = ((MR_Box) (ll_backend__unify_gen__LvalA_100));
#line 1537 "unify_gen.m"
                      }
#line 1537 "unify_gen.m"
                      {
#line 1537 "unify_gen.m"
                        ll_backend__unify_gen__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1537 "unify_gen.m"
                        MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_43_43, 0) = ((MR_Box) (ll_backend__unify_gen__LvalB_101));
#line 1537 "unify_gen.m"
                      }
#line 1537 "unify_gen.m"
                      {
#line 1537 "unify_gen.m"
                        ll_backend__unify_gen__Rval_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1537 "unify_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Rval_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1537 "unify_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Rval_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 38))));
#line 1537 "unify_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Rval_99, 2) = ((MR_Box) (ll_backend__unify_gen__V_42_42));
#line 1537 "unify_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Rval_99, 3) = ((MR_Box) (ll_backend__unify_gen__V_43_43));
#line 1537 "unify_gen.m"
                      }
#line 1539 "unify_gen.m"
                      {
#line 1539 "unify_gen.m"
                        ll_backend__unify_gen__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1539 "unify_gen.m"
                        MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_46_46, 0) = ((MR_Box) (ll_backend__unify_gen__LvalB_101));
#line 1539 "unify_gen.m"
                        MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1539 "unify_gen.m"
                      }
#line 1539 "unify_gen.m"
                      {
#line 1539 "unify_gen.m"
                        ll_backend__unify_gen__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1539 "unify_gen.m"
                        MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_44_44, 0) = ((MR_Box) (ll_backend__unify_gen__LvalA_100));
#line 1539 "unify_gen.m"
                        MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_44_44, 1) = ((MR_Box) (ll_backend__unify_gen__V_46_46));
#line 1539 "unify_gen.m"
                      }
#line 1539 "unify_gen.m"
                      {
#line 1539 "unify_gen.m"
                        ll_backend__code_info__assign_field_lval_expr_to_var_6_p_0(ll_backend__unify_gen__Lvar_33, ll_backend__unify_gen__V_44_44, ll_backend__unify_gen__Rval_99, ll_backend__unify_gen__Code_8, ll_backend__unify_gen__STATE_VARIABLE_CI_0_38, ll_backend__unify_gen__STATE_VARIABLE_CI_39);
#line 1539 "unify_gen.m"
                        return;
                      }
#line 1538 "unify_gen.m"
                    }
#line 1535 "unify_gen.m"
                  else
#line 1542 "unify_gen.m"
                    {
#line 1542 "unify_gen.m"
                      {
#line 1542 "unify_gen.m"
                        mercury__require__sorry_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_sub_assign\'/5", (MR_String) "double_word: non-field lval");
#line 1542 "unify_gen.m"
                        return;
                      }
#line 1542 "unify_gen.m"
                    }
#line 1535 "unify_gen.m"
                }
#line 1523 "unify_gen.m"
              else
#line 1523 "unify_gen.m"
                if ((ll_backend__unify_gen__RightWidth_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1521 "unify_gen.m"
                  {
#line 1521 "unify_gen.m"
                    ll_backend__code_info__assign_lval_to_var_5_p_0(ll_backend__unify_gen__Lvar_33, ll_backend__unify_gen__Lval_110, ll_backend__unify_gen__Code_8, ll_backend__unify_gen__STATE_VARIABLE_CI_0_38, ll_backend__unify_gen__STATE_VARIABLE_CI_39);
#line 1521 "unify_gen.m"
                    return;
                  }
#line 1523 "unify_gen.m"
                else
#line 1523 "unify_gen.m"
                  if (((MR_tag((MR_Word) ll_backend__unify_gen__RightWidth_34)) == (MR_mktag((MR_Integer) 1))))
#line 1530 "unify_gen.m"
                    {
#line 1530 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__Rval0_35;
#line 1530 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__Rval_36;
#line 1530 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__V_53_53;
#line 1530 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__V_54_54;
#line 1530 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__V_55_55;
#line 1530 "unify_gen.m"
                      MR_Integer ll_backend__unify_gen__Mask_97 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__RightWidth_34, (MR_Integer) 0)));

#line 1526 "unify_gen.m"
                      {
#line 1526 "unify_gen.m"
                        ll_backend__unify_gen__Rval0_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1526 "unify_gen.m"
                        MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Rval0_35, 0) = ((MR_Box) (ll_backend__unify_gen__Lval_110));
#line 1526 "unify_gen.m"
                      }
#line 1531 "unify_gen.m"
                      {
#line 1531 "unify_gen.m"
                        ll_backend__unify_gen__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1531 "unify_gen.m"
                        MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_54_54, 0) = ((MR_Box) (ll_backend__unify_gen__Mask_97));
#line 1531 "unify_gen.m"
                      }
#line 1531 "unify_gen.m"
                      {
#line 1531 "unify_gen.m"
                        ll_backend__unify_gen__V_53_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1531 "unify_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_53_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1531 "unify_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_53_53, 1) = ((MR_Box) (ll_backend__unify_gen__V_54_54));
#line 1531 "unify_gen.m"
                      }
#line 1531 "unify_gen.m"
                      {
#line 1531 "unify_gen.m"
                        ll_backend__unify_gen__Rval_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1531 "unify_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Rval_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1531 "unify_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Rval_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 1531 "unify_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Rval_36, 2) = ((MR_Box) (ll_backend__unify_gen__Rval0_35));
#line 1531 "unify_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Rval_36, 3) = ((MR_Box) (ll_backend__unify_gen__V_53_53));
#line 1531 "unify_gen.m"
                      }
#line 1532 "unify_gen.m"
                      {
#line 1532 "unify_gen.m"
                        ll_backend__unify_gen__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1532 "unify_gen.m"
                        MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_55_55, 0) = ((MR_Box) (ll_backend__unify_gen__Lval_110));
#line 1532 "unify_gen.m"
                        MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1532 "unify_gen.m"
                      }
#line 1532 "unify_gen.m"
                      {
#line 1532 "unify_gen.m"
                        ll_backend__code_info__assign_field_lval_expr_to_var_6_p_0(ll_backend__unify_gen__Lvar_33, ll_backend__unify_gen__V_55_55, ll_backend__unify_gen__Rval_36, ll_backend__unify_gen__Code_8, ll_backend__unify_gen__STATE_VARIABLE_CI_0_38, ll_backend__unify_gen__STATE_VARIABLE_CI_39);
#line 1532 "unify_gen.m"
                        return;
                      }
#line 1530 "unify_gen.m"
                    }
#line 1523 "unify_gen.m"
                  else
#line 1530 "unify_gen.m"
                    {
#line 1530 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__V_51_51;
#line 1530 "unify_gen.m"
                      MR_Integer ll_backend__unify_gen__Shift_95 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__unify_gen__RightWidth_34, (MR_Integer) 0)));
#line 1530 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__Rval0_152;
#line 1530 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__Rval_153;
#line 1530 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__V_155_155;
#line 1530 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__V_156_156;
#line 1530 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__V_157_157;
#line 1530 "unify_gen.m"
                      MR_Integer ll_backend__unify_gen__Mask_159 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__unify_gen__RightWidth_34, (MR_Integer) 1)));

#line 1529 "unify_gen.m"
                      {
#line 1529 "unify_gen.m"
                        ll_backend__unify_gen__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1529 "unify_gen.m"
                        MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_51_51, 0) = ((MR_Box) (ll_backend__unify_gen__Lval_110));
#line 1529 "unify_gen.m"
                      }
#line 1529 "unify_gen.m"
                      {
#line 1529 "unify_gen.m"
                        ll_backend__unify_gen__Rval0_152 = ll_backend__unify_gen__right_shift_rval_2_f_0(ll_backend__unify_gen__V_51_51, ll_backend__unify_gen__Shift_95);
                      }
#line 1531 "unify_gen.m"
                      {
#line 1531 "unify_gen.m"
                        ll_backend__unify_gen__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1531 "unify_gen.m"
                        MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_156_156, 0) = ((MR_Box) (ll_backend__unify_gen__Mask_159));
#line 1531 "unify_gen.m"
                      }
#line 1531 "unify_gen.m"
                      {
#line 1531 "unify_gen.m"
                        ll_backend__unify_gen__V_155_155 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1531 "unify_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_155_155, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1531 "unify_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_155_155, 1) = ((MR_Box) (ll_backend__unify_gen__V_156_156));
#line 1531 "unify_gen.m"
                      }
#line 1531 "unify_gen.m"
                      {
#line 1531 "unify_gen.m"
                        ll_backend__unify_gen__Rval_153 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1531 "unify_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Rval_153, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1531 "unify_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Rval_153, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 1531 "unify_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Rval_153, 2) = ((MR_Box) (ll_backend__unify_gen__Rval0_152));
#line 1531 "unify_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Rval_153, 3) = ((MR_Box) (ll_backend__unify_gen__V_155_155));
#line 1531 "unify_gen.m"
                      }
#line 1532 "unify_gen.m"
                      {
#line 1532 "unify_gen.m"
                        ll_backend__unify_gen__V_157_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1532 "unify_gen.m"
                        MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_157_157, 0) = ((MR_Box) (ll_backend__unify_gen__Lval_110));
#line 1532 "unify_gen.m"
                        MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_157_157, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1532 "unify_gen.m"
                      }
#line 1532 "unify_gen.m"
                      {
#line 1532 "unify_gen.m"
                        ll_backend__code_info__assign_field_lval_expr_to_var_6_p_0(ll_backend__unify_gen__Lvar_33, ll_backend__unify_gen__V_157_157, ll_backend__unify_gen__Rval_153, ll_backend__unify_gen__Code_8, ll_backend__unify_gen__STATE_VARIABLE_CI_0_38, ll_backend__unify_gen__STATE_VARIABLE_CI_39);
#line 1532 "unify_gen.m"
                        return;
                      }
#line 1530 "unify_gen.m"
                    }
#line 1518 "unify_gen.m"
            }
#line 1545 "unify_gen.m"
          else
#line 1546 "unify_gen.m"
            {
#line 1546 "unify_gen.m"
              MR_Word ll_backend__unify_gen__Rvar_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Right_7, (MR_Integer) 0)));

#line 1548 "unify_gen.m"
              {
#line 1548 "unify_gen.m"
                ll_backend__code_info__assign_var_to_var_4_p_0(ll_backend__unify_gen__Lvar_33, ll_backend__unify_gen__Rvar_37, ll_backend__unify_gen__STATE_VARIABLE_CI_0_38, ll_backend__unify_gen__STATE_VARIABLE_CI_39);
              }
#line 1549 "unify_gen.m"
              {
#line 1549 "unify_gen.m"
                *ll_backend__unify_gen__Code_8 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
#line 1546 "unify_gen.m"
            }
#line 1551 "unify_gen.m"
        else
#line 1552 "unify_gen.m"
          {
#line 1552 "unify_gen.m"
            {
#line 1552 "unify_gen.m"
              *ll_backend__unify_gen__Code_8 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
            }
#line 1552 "unify_gen.m"
            *ll_backend__unify_gen__STATE_VARIABLE_CI_39 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_38;
#line 1552 "unify_gen.m"
          }
#line 1515 "unify_gen.m"
      }
#line 1471 "unify_gen.m"
  }
#line 1466 "unify_gen.m"
}

#line 1426 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_sub_unify_7_p_0(
#line 1426 "unify_gen.m"
  MR_Word ll_backend__unify_gen__L_8,
#line 1426 "unify_gen.m"
  MR_Word ll_backend__unify_gen__R_9,
#line 1426 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Mode_10,
#line 1426 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Type_11,
#line 1426 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_12,
#line 1426 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_21,
#line 1426 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_22)
#line 1426 "unify_gen.m"
{
#line 1429 "unify_gen.m"
  {
#line 1429 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 1429 "unify_gen.m"
    MR_Word ll_backend__unify_gen__LI_14;
#line 1429 "unify_gen.m"
    MR_Word ll_backend__unify_gen__RI_15;
#line 1429 "unify_gen.m"
    MR_Word ll_backend__unify_gen__LF_16;
#line 1429 "unify_gen.m"
    MR_Word ll_backend__unify_gen__RF_17;
#line 1429 "unify_gen.m"
    MR_Word ll_backend__unify_gen__ModuleInfo_18;
#line 1429 "unify_gen.m"
    MR_Word ll_backend__unify_gen__LeftMode_19;
#line 1429 "unify_gen.m"
    MR_Word ll_backend__unify_gen__RightMode_20;
#line 1429 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Mode_10, (MR_Integer) 0)));
#line 1429 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Mode_10, (MR_Integer) 1)));
#line 1429 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_25_25;
#line 1429 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_26_26;

#line 1430 "unify_gen.m"
    ll_backend__unify_gen__LI_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_23_23, (MR_Integer) 0)));
#line 1430 "unify_gen.m"
    ll_backend__unify_gen__RI_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_23_23, (MR_Integer) 1)));
#line 1430 "unify_gen.m"
    ll_backend__unify_gen__LF_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_24_24, (MR_Integer) 0)));
#line 1430 "unify_gen.m"
    ll_backend__unify_gen__RF_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_24_24, (MR_Integer) 1)));
#line 1431 "unify_gen.m"
    {
#line 1431 "unify_gen.m"
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_21, &ll_backend__unify_gen__ModuleInfo_18);
    }
#line 1432 "unify_gen.m"
    {
#line 1432 "unify_gen.m"
      ll_backend__unify_gen__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1432 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_25_25, 0) = ((MR_Box) (ll_backend__unify_gen__LI_14));
#line 1432 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_25_25, 1) = ((MR_Box) (ll_backend__unify_gen__LF_16));
#line 1432 "unify_gen.m"
    }
#line 1432 "unify_gen.m"
    {
#line 1432 "unify_gen.m"
      check_hlds__mode_util__mode_to_arg_mode_4_p_0(ll_backend__unify_gen__ModuleInfo_18, ll_backend__unify_gen__V_25_25, ll_backend__unify_gen__Type_11, &ll_backend__unify_gen__LeftMode_19);
    }
#line 1433 "unify_gen.m"
    {
#line 1433 "unify_gen.m"
      ll_backend__unify_gen__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1433 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_26_26, 0) = ((MR_Box) (ll_backend__unify_gen__RI_15));
#line 1433 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_26_26, 1) = ((MR_Box) (ll_backend__unify_gen__RF_17));
#line 1433 "unify_gen.m"
    }
#line 1433 "unify_gen.m"
    {
#line 1433 "unify_gen.m"
      check_hlds__mode_util__mode_to_arg_mode_4_p_0(ll_backend__unify_gen__ModuleInfo_18, ll_backend__unify_gen__V_26_26, ll_backend__unify_gen__Type_11, &ll_backend__unify_gen__RightMode_20);
    }
#line 1436 "unify_gen.m"
    ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__LeftMode_19 == (MR_Integer) 0);
#line 1436 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 1437 "unify_gen.m"
      ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__RightMode_20 == (MR_Integer) 0);
#line 1443 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 1442 "unify_gen.m"
      {
#line 1442 "unify_gen.m"
        {
#line 1442 "unify_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_sub_unify\'/7", (MR_String) "test in arg of [de]construction");
#line 1442 "unify_gen.m"
          return;
        }
#line 1442 "unify_gen.m"
      }
#line 1443 "unify_gen.m"
    else
#line 1449 "unify_gen.m"
      {
#line 1445 "unify_gen.m"
        ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__LeftMode_19 == (MR_Integer) 0);
#line 1445 "unify_gen.m"
        if (ll_backend__unify_gen__succeeded)
#line 1446 "unify_gen.m"
          ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__RightMode_20 == (MR_Integer) 1);
#line 1449 "unify_gen.m"
        if (ll_backend__unify_gen__succeeded)
#line 1448 "unify_gen.m"
          {
#line 1448 "unify_gen.m"
            ll_backend__unify_gen__generate_sub_assign_5_p_0(ll_backend__unify_gen__R_9, ll_backend__unify_gen__L_8, ll_backend__unify_gen__Code_12, ll_backend__unify_gen__STATE_VARIABLE_CI_0_21, ll_backend__unify_gen__STATE_VARIABLE_CI_22);
#line 1448 "unify_gen.m"
            return;
          }
#line 1449 "unify_gen.m"
        else
#line 1455 "unify_gen.m"
          {
#line 1451 "unify_gen.m"
            ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__LeftMode_19 == (MR_Integer) 1);
#line 1451 "unify_gen.m"
            if (ll_backend__unify_gen__succeeded)
#line 1452 "unify_gen.m"
              ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__RightMode_20 == (MR_Integer) 0);
#line 1455 "unify_gen.m"
            if (ll_backend__unify_gen__succeeded)
#line 1454 "unify_gen.m"
              {
#line 1454 "unify_gen.m"
                ll_backend__unify_gen__generate_sub_assign_5_p_0(ll_backend__unify_gen__L_8, ll_backend__unify_gen__R_9, ll_backend__unify_gen__Code_12, ll_backend__unify_gen__STATE_VARIABLE_CI_0_21, ll_backend__unify_gen__STATE_VARIABLE_CI_22);
#line 1454 "unify_gen.m"
                return;
              }
#line 1455 "unify_gen.m"
            else
#line 1462 "unify_gen.m"
              {
#line 1456 "unify_gen.m"
                ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__LeftMode_19 == (MR_Integer) 2);
#line 1456 "unify_gen.m"
                if (ll_backend__unify_gen__succeeded)
#line 1457 "unify_gen.m"
                  ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__RightMode_20 == (MR_Integer) 2);
#line 1462 "unify_gen.m"
                if (ll_backend__unify_gen__succeeded)
#line 1459 "unify_gen.m"
                  {
#line 1459 "unify_gen.m"
                    {
#line 1459 "unify_gen.m"
                      *ll_backend__unify_gen__Code_12 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                    }
#line 1459 "unify_gen.m"
                  }
#line 1462 "unify_gen.m"
                else
#line 1463 "unify_gen.m"
                  {
#line 1463 "unify_gen.m"
                    {
#line 1463 "unify_gen.m"
                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_sub_unify\'/7", (MR_String) "some strange unify");
#line 1463 "unify_gen.m"
                      return;
                    }
#line 1463 "unify_gen.m"
                  }
#line 1463 "unify_gen.m"
                *ll_backend__unify_gen__STATE_VARIABLE_CI_22 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_21;
#line 1462 "unify_gen.m"
              }
#line 1455 "unify_gen.m"
          }
#line 1449 "unify_gen.m"
      }
#line 1429 "unify_gen.m"
  }
#line 1426 "unify_gen.m"
}

#line 1412 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__generate_unify_args_2_7_p_0(
#line 1412 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__1_1,
#line 1412 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_2,
#line 1412 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__3_3,
#line 1412 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__4_4,
#line 1412 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__HeadVar__5_5,
#line 1412 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_6,
#line 1412 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_7)
#line 1412 "unify_gen.m"
{
#line 1416 "unify_gen.m"
  {
#line 1416 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;

#line 1416 "unify_gen.m"
    if ((ll_backend__unify_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1416 "unify_gen.m"
      {
#line 1416 "unify_gen.m"
        MR_Word ll_backend__unify_gen__TypeCtorInfo_27_27;

#line 1416 "unify_gen.m"
        ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1416 "unify_gen.m"
        if (ll_backend__unify_gen__succeeded)
#line 1416 "unify_gen.m"
          {
#line 1416 "unify_gen.m"
            ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1416 "unify_gen.m"
            if (ll_backend__unify_gen__succeeded)
#line 1416 "unify_gen.m"
              {
#line 1416 "unify_gen.m"
                ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1416 "unify_gen.m"
                if (ll_backend__unify_gen__succeeded)
#line 1416 "unify_gen.m"
                  {
#line 11737 "ll_backend.unify_gen.c"
                    ll_backend__unify_gen__TypeCtorInfo_27_27 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 1416 "unify_gen.m"
                    {
#line 1416 "unify_gen.m"
                      *ll_backend__unify_gen__HeadVar__5_5 = mercury__cord__empty_0_f_0(ll_backend__unify_gen__TypeCtorInfo_27_27);
                    }
#line 1416 "unify_gen.m"
                    *ll_backend__unify_gen__STATE_VARIABLE_CI_7 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_6;
#line 1416 "unify_gen.m"
                    ll_backend__unify_gen__succeeded = MR_TRUE;
#line 1416 "unify_gen.m"
                  }
#line 1416 "unify_gen.m"
              }
#line 1416 "unify_gen.m"
          }
#line 1416 "unify_gen.m"
      }
#line 1416 "unify_gen.m"
    else
#line 1417 "unify_gen.m"
      {
#line 1417 "unify_gen.m"
        MR_Word ll_backend__unify_gen__TypeCtorInfo_28_28;
#line 1417 "unify_gen.m"
        MR_Word ll_backend__unify_gen__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 1417 "unify_gen.m"
        MR_Word ll_backend__unify_gen__Ls_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 1417 "unify_gen.m"
        MR_Word ll_backend__unify_gen__R_13;
#line 1417 "unify_gen.m"
        MR_Word ll_backend__unify_gen__Rs_14;
#line 1417 "unify_gen.m"
        MR_Word ll_backend__unify_gen__M_15;
#line 1417 "unify_gen.m"
        MR_Word ll_backend__unify_gen__Ms_16;
#line 1417 "unify_gen.m"
        MR_Word ll_backend__unify_gen__T_17;
#line 1417 "unify_gen.m"
        MR_Word ll_backend__unify_gen__Ts_18;
#line 1417 "unify_gen.m"
        MR_Word ll_backend__unify_gen__CodeA_21;
#line 1417 "unify_gen.m"
        MR_Word ll_backend__unify_gen__CodeB_22;
#line 1417 "unify_gen.m"
        MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_25_25;
#line 1417 "unify_gen.m"
        MR_Word ll_backend__unify_gen__LI_37;
#line 1417 "unify_gen.m"
        MR_Word ll_backend__unify_gen__RI_38;
#line 1417 "unify_gen.m"
        MR_Word ll_backend__unify_gen__LF_39;
#line 1417 "unify_gen.m"
        MR_Word ll_backend__unify_gen__RF_40;
#line 1417 "unify_gen.m"
        MR_Word ll_backend__unify_gen__ModuleInfo_41;
#line 1417 "unify_gen.m"
        MR_Word ll_backend__unify_gen__LeftMode_42;
#line 1417 "unify_gen.m"
        MR_Word ll_backend__unify_gen__RightMode_43;
#line 1417 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_44_44;
#line 1417 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_45_45;
#line 1417 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_46_46;
#line 1417 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_47_47;

#line 1417 "unify_gen.m"
        ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1417 "unify_gen.m"
        if (ll_backend__unify_gen__succeeded)
#line 1417 "unify_gen.m"
          {
#line 1417 "unify_gen.m"
            ll_backend__unify_gen__R_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 1417 "unify_gen.m"
            ll_backend__unify_gen__Rs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 1417 "unify_gen.m"
            ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 1417 "unify_gen.m"
            if (ll_backend__unify_gen__succeeded)
#line 1417 "unify_gen.m"
              {
#line 1417 "unify_gen.m"
                ll_backend__unify_gen__M_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__3_3, (MR_Integer) 0)));
#line 1417 "unify_gen.m"
                ll_backend__unify_gen__Ms_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__3_3, (MR_Integer) 1)));
#line 1417 "unify_gen.m"
                ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
#line 1417 "unify_gen.m"
                if (ll_backend__unify_gen__succeeded)
#line 1417 "unify_gen.m"
                  {
#line 1417 "unify_gen.m"
                    ll_backend__unify_gen__T_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__4_4, (MR_Integer) 0)));
#line 1417 "unify_gen.m"
                    ll_backend__unify_gen__Ts_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__4_4, (MR_Integer) 1)));
#line 1430 "unify_gen.m"
                    ll_backend__unify_gen__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__M_15, (MR_Integer) 0)));
#line 1430 "unify_gen.m"
                    ll_backend__unify_gen__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__M_15, (MR_Integer) 1)));
#line 1430 "unify_gen.m"
                    ll_backend__unify_gen__LI_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_44_44, (MR_Integer) 0)));
#line 1430 "unify_gen.m"
                    ll_backend__unify_gen__RI_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_44_44, (MR_Integer) 1)));
#line 1430 "unify_gen.m"
                    ll_backend__unify_gen__LF_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_45_45, (MR_Integer) 0)));
#line 1430 "unify_gen.m"
                    ll_backend__unify_gen__RF_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_45_45, (MR_Integer) 1)));
#line 1431 "unify_gen.m"
                    {
#line 1431 "unify_gen.m"
                      ll_backend__code_info__get_module_info_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_6, &ll_backend__unify_gen__ModuleInfo_41);
                    }
#line 1432 "unify_gen.m"
                    {
#line 1432 "unify_gen.m"
                      ll_backend__unify_gen__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1432 "unify_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_46_46, 0) = ((MR_Box) (ll_backend__unify_gen__LI_37));
#line 1432 "unify_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_46_46, 1) = ((MR_Box) (ll_backend__unify_gen__LF_39));
#line 1432 "unify_gen.m"
                    }
#line 1432 "unify_gen.m"
                    {
#line 1432 "unify_gen.m"
                      check_hlds__mode_util__mode_to_arg_mode_4_p_0(ll_backend__unify_gen__ModuleInfo_41, ll_backend__unify_gen__V_46_46, ll_backend__unify_gen__T_17, &ll_backend__unify_gen__LeftMode_42);
                    }
#line 1433 "unify_gen.m"
                    {
#line 1433 "unify_gen.m"
                      ll_backend__unify_gen__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1433 "unify_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_47_47, 0) = ((MR_Box) (ll_backend__unify_gen__RI_38));
#line 1433 "unify_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_47_47, 1) = ((MR_Box) (ll_backend__unify_gen__RF_40));
#line 1433 "unify_gen.m"
                    }
#line 1433 "unify_gen.m"
                    {
#line 1433 "unify_gen.m"
                      check_hlds__mode_util__mode_to_arg_mode_4_p_0(ll_backend__unify_gen__ModuleInfo_41, ll_backend__unify_gen__V_47_47, ll_backend__unify_gen__T_17, &ll_backend__unify_gen__RightMode_43);
                    }
#line 1436 "unify_gen.m"
                    ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__LeftMode_42 == (MR_Integer) 0);
#line 1436 "unify_gen.m"
                    if (ll_backend__unify_gen__succeeded)
#line 1437 "unify_gen.m"
                      ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__RightMode_43 == (MR_Integer) 0);
#line 1443 "unify_gen.m"
                    if (ll_backend__unify_gen__succeeded)
#line 1442 "unify_gen.m"
                      {
#line 1442 "unify_gen.m"
                        {
#line 1442 "unify_gen.m"
                          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_sub_unify\'/7", (MR_String) "test in arg of [de]construction");
                        }
#line 1442 "unify_gen.m"
                      }
#line 1443 "unify_gen.m"
                    else
#line 1449 "unify_gen.m"
                      {
#line 1445 "unify_gen.m"
                        ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__LeftMode_42 == (MR_Integer) 0);
#line 1445 "unify_gen.m"
                        if (ll_backend__unify_gen__succeeded)
#line 1446 "unify_gen.m"
                          ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__RightMode_43 == (MR_Integer) 1);
#line 1449 "unify_gen.m"
                        if (ll_backend__unify_gen__succeeded)
#line 1448 "unify_gen.m"
                          {
#line 1448 "unify_gen.m"
                            ll_backend__unify_gen__generate_sub_assign_5_p_0(ll_backend__unify_gen__R_13, ll_backend__unify_gen__L_11, &ll_backend__unify_gen__CodeA_21, ll_backend__unify_gen__STATE_VARIABLE_CI_0_6, &ll_backend__unify_gen__STATE_VARIABLE_CI_25_25);
                          }
#line 1449 "unify_gen.m"
                        else
#line 1455 "unify_gen.m"
                          {
#line 1451 "unify_gen.m"
                            ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__LeftMode_42 == (MR_Integer) 1);
#line 1451 "unify_gen.m"
                            if (ll_backend__unify_gen__succeeded)
#line 1452 "unify_gen.m"
                              ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__RightMode_43 == (MR_Integer) 0);
#line 1455 "unify_gen.m"
                            if (ll_backend__unify_gen__succeeded)
#line 1454 "unify_gen.m"
                              {
#line 1454 "unify_gen.m"
                                ll_backend__unify_gen__generate_sub_assign_5_p_0(ll_backend__unify_gen__L_11, ll_backend__unify_gen__R_13, &ll_backend__unify_gen__CodeA_21, ll_backend__unify_gen__STATE_VARIABLE_CI_0_6, &ll_backend__unify_gen__STATE_VARIABLE_CI_25_25);
                              }
#line 1455 "unify_gen.m"
                            else
#line 1462 "unify_gen.m"
                              {
#line 1456 "unify_gen.m"
                                ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__LeftMode_42 == (MR_Integer) 2);
#line 1456 "unify_gen.m"
                                if (ll_backend__unify_gen__succeeded)
#line 1457 "unify_gen.m"
                                  ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__RightMode_43 == (MR_Integer) 2);
#line 1462 "unify_gen.m"
                                if (ll_backend__unify_gen__succeeded)
#line 1459 "unify_gen.m"
                                  {
#line 1459 "unify_gen.m"
                                    {
#line 1459 "unify_gen.m"
                                      ll_backend__unify_gen__CodeA_21 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                                    }
#line 1459 "unify_gen.m"
                                  }
#line 1462 "unify_gen.m"
                                else
#line 1463 "unify_gen.m"
                                  {
#line 1463 "unify_gen.m"
                                    {
#line 1463 "unify_gen.m"
                                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_sub_unify\'/7", (MR_String) "some strange unify");
                                    }
#line 1463 "unify_gen.m"
                                  }
#line 1463 "unify_gen.m"
                                ll_backend__unify_gen__STATE_VARIABLE_CI_25_25 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_6;
#line 1462 "unify_gen.m"
                              }
#line 1455 "unify_gen.m"
                          }
#line 1449 "unify_gen.m"
                      }
#line 1419 "unify_gen.m"
                    {
#line 1419 "unify_gen.m"
                      ll_backend__unify_gen__succeeded = ll_backend__unify_gen__generate_unify_args_2_7_p_0(ll_backend__unify_gen__Ls_12, ll_backend__unify_gen__Rs_14, ll_backend__unify_gen__Ms_16, ll_backend__unify_gen__Ts_18, &ll_backend__unify_gen__CodeB_22, ll_backend__unify_gen__STATE_VARIABLE_CI_25_25, ll_backend__unify_gen__STATE_VARIABLE_CI_7);
                    }
#line 1417 "unify_gen.m"
                    if (ll_backend__unify_gen__succeeded)
#line 1417 "unify_gen.m"
                      {
#line 11984 "ll_backend.unify_gen.c"
                        ll_backend__unify_gen__TypeCtorInfo_28_28 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 1420 "unify_gen.m"
                        {
#line 1420 "unify_gen.m"
                          *ll_backend__unify_gen__HeadVar__5_5 = mercury__cord__f_43_43_2_f_0(ll_backend__unify_gen__TypeCtorInfo_28_28, ll_backend__unify_gen__CodeA_21, ll_backend__unify_gen__CodeB_22);
                        }
#line 1420 "unify_gen.m"
                        ll_backend__unify_gen__succeeded = MR_TRUE;
#line 1417 "unify_gen.m"
                      }
#line 1417 "unify_gen.m"
                  }
#line 1417 "unify_gen.m"
              }
#line 1417 "unify_gen.m"
          }
#line 1417 "unify_gen.m"
      }
#line 1416 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 1416 "unify_gen.m"
  }
#line 1412 "unify_gen.m"
}

#line 1401 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_unify_args_7_p_0(
#line 1401 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Ls_8,
#line 1401 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Rs_9,
#line 1401 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Ms_10,
#line 1401 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Ts_11,
#line 1401 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_12,
#line 1401 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_15,
#line 1401 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_16)
#line 1401 "unify_gen.m"
{
#line 1408 "unify_gen.m"
  {
#line 1408 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 1408 "unify_gen.m"
    MR_Word ll_backend__unify_gen__Code0_14;
#line 1408 "unify_gen.m"
    MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_17_17;

#line 1406 "unify_gen.m"
    {
#line 1406 "unify_gen.m"
      ll_backend__unify_gen__succeeded = ll_backend__unify_gen__generate_unify_args_2_7_p_0(ll_backend__unify_gen__Ls_8, ll_backend__unify_gen__Rs_9, ll_backend__unify_gen__Ms_10, ll_backend__unify_gen__Ts_11, &ll_backend__unify_gen__Code0_14, ll_backend__unify_gen__STATE_VARIABLE_CI_0_15, &ll_backend__unify_gen__STATE_VARIABLE_CI_17_17);
    }
#line 1408 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 1407 "unify_gen.m"
      {
#line 1407 "unify_gen.m"
        *ll_backend__unify_gen__STATE_VARIABLE_CI_16 = ll_backend__unify_gen__STATE_VARIABLE_CI_17_17;
#line 1407 "unify_gen.m"
        *ll_backend__unify_gen__Code_12 = ll_backend__unify_gen__Code0_14;
#line 1407 "unify_gen.m"
      }
#line 1408 "unify_gen.m"
    else
#line 1409 "unify_gen.m"
      {
#line 1409 "unify_gen.m"
        {
#line 1409 "unify_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_unify_args\'/7", (MR_String) "length mismatch");
#line 1409 "unify_gen.m"
          return;
        }
#line 1409 "unify_gen.m"
      }
#line 1408 "unify_gen.m"
  }
#line 1401 "unify_gen.m"
}

#line 1379 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_semi_deconstruction_8_p_0(
#line 1379 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Var_9,
#line 1379 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Tag_10,
#line 1379 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Args_11,
#line 1379 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Modes_12,
#line 1379 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ArgWidths_13,
#line 1379 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_14,
#line 1379 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_24,
#line 1379 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_25)
#line 1379 "unify_gen.m"
{
#line 1383 "unify_gen.m"
  {
#line 1383 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 1383 "unify_gen.m"
    MR_Word ll_backend__unify_gen__TypeCtorInfo_36_36;
#line 1383 "unify_gen.m"
    MR_Word ll_backend__unify_gen__VarType_16;
#line 1383 "unify_gen.m"
    MR_Word ll_backend__unify_gen__CheaperTagTest_17;
#line 1383 "unify_gen.m"
    MR_Word ll_backend__unify_gen__SuccLabel_18;
#line 1383 "unify_gen.m"
    MR_Word ll_backend__unify_gen__TagTestCode_19;
#line 1383 "unify_gen.m"
    MR_Word ll_backend__unify_gen__AfterUnify_20;
#line 1383 "unify_gen.m"
    MR_Word ll_backend__unify_gen__FailCode_21;
#line 1383 "unify_gen.m"
    MR_Word ll_backend__unify_gen__DeconsCode_22;
#line 1383 "unify_gen.m"
    MR_Word ll_backend__unify_gen__SuccessLabelCode_23;
#line 1383 "unify_gen.m"
    MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_27_27;
#line 1383 "unify_gen.m"
    MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_28_28;
#line 1383 "unify_gen.m"
    MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_29_29;
#line 1383 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_31_31;
#line 1383 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_32_32;
#line 1383 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_34_34;
#line 1383 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_35_35;
#line 1383 "unify_gen.m"
    MR_Word ll_backend__unify_gen__ModuleInfo_46;
#line 1383 "unify_gen.m"
    MR_Word ll_backend__unify_gen__Tag_47;

#line 1384 "unify_gen.m"
    {
#line 1384 "unify_gen.m"
      ll_backend__unify_gen__VarType_16 = ll_backend__code_info__variable_type_2_f_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_24, ll_backend__unify_gen__Var_9);
    }
#line 1385 "unify_gen.m"
    {
#line 1385 "unify_gen.m"
      ll_backend__unify_gen__CheaperTagTest_17 = ll_backend__code_info__lookup_cheaper_tag_test_2_f_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_24, ll_backend__unify_gen__VarType_16);
    }
#line 1386 "unify_gen.m"
    {
#line 1386 "unify_gen.m"
      ll_backend__unify_gen__generate_tag_test_8_p_0(ll_backend__unify_gen__Var_9, ll_backend__unify_gen__Tag_10, ll_backend__unify_gen__CheaperTagTest_17, (MR_Integer) 0, &ll_backend__unify_gen__SuccLabel_18, &ll_backend__unify_gen__TagTestCode_19, ll_backend__unify_gen__STATE_VARIABLE_CI_0_24, &ll_backend__unify_gen__STATE_VARIABLE_CI_27_27);
    }
#line 1388 "unify_gen.m"
    {
#line 1388 "unify_gen.m"
      ll_backend__code_info__remember_position_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_27_27, &ll_backend__unify_gen__AfterUnify_20);
    }
#line 1389 "unify_gen.m"
    {
#line 1389 "unify_gen.m"
      ll_backend__code_info__generate_failure_3_p_0(&ll_backend__unify_gen__FailCode_21, ll_backend__unify_gen__STATE_VARIABLE_CI_27_27, &ll_backend__unify_gen__STATE_VARIABLE_CI_28_28);
    }
#line 1390 "unify_gen.m"
    {
#line 1390 "unify_gen.m"
      ll_backend__code_info__reset_to_position_3_p_0(ll_backend__unify_gen__AfterUnify_20, ll_backend__unify_gen__STATE_VARIABLE_CI_28_28, &ll_backend__unify_gen__STATE_VARIABLE_CI_29_29);
    }
#line 1259 "unify_gen.m"
    {
#line 1259 "unify_gen.m"
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_29_29, &ll_backend__unify_gen__ModuleInfo_46);
    }
#line 1260 "unify_gen.m"
    {
#line 1260 "unify_gen.m"
      ll_backend__unify_gen__Tag_47 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ll_backend__unify_gen__ModuleInfo_46, ll_backend__unify_gen__Tag_10);
    }
#line 1261 "unify_gen.m"
    {
#line 1261 "unify_gen.m"
      ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_9_p_0(ll_backend__unify_gen__Var_9, ll_backend__unify_gen__Args_11, ll_backend__unify_gen__Modes_12, ll_backend__unify_gen__ArgWidths_13, ll_backend__unify_gen__Tag_47, &ll_backend__unify_gen__DeconsCode_22, ll_backend__unify_gen__STATE_VARIABLE_CI_29_29, ll_backend__unify_gen__STATE_VARIABLE_CI_25);
    }
#line 12178 "ll_backend.unify_gen.c"
    ll_backend__unify_gen__TypeCtorInfo_36_36 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 1393 "unify_gen.m"
    {
#line 1393 "unify_gen.m"
      ll_backend__unify_gen__V_32_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1393 "unify_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_32_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1393 "unify_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_32_32, 1) = ((MR_Box) (ll_backend__unify_gen__SuccLabel_18));
#line 1393 "unify_gen.m"
    }
#line 1393 "unify_gen.m"
    {
#line 1393 "unify_gen.m"
      ll_backend__unify_gen__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1393 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_31_31, 0) = ((MR_Box) (ll_backend__unify_gen__V_32_32));
#line 1393 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_31_31, 1) = ((MR_Box) ((MR_String) ""));
#line 1393 "unify_gen.m"
    }
#line 1393 "unify_gen.m"
    {
#line 1393 "unify_gen.m"
      ll_backend__unify_gen__SuccessLabelCode_23 = mercury__cord__singleton_1_f_0(ll_backend__unify_gen__TypeCtorInfo_36_36, ((MR_Box) (ll_backend__unify_gen__V_31_31)));
    }
#line 1394 "unify_gen.m"
    {
#line 1394 "unify_gen.m"
      ll_backend__unify_gen__V_35_35 = mercury__cord__f_43_43_2_f_0(ll_backend__unify_gen__TypeCtorInfo_36_36, ll_backend__unify_gen__SuccessLabelCode_23, ll_backend__unify_gen__DeconsCode_22);
    }
#line 1394 "unify_gen.m"
    {
#line 1394 "unify_gen.m"
      ll_backend__unify_gen__V_34_34 = mercury__cord__f_43_43_2_f_0(ll_backend__unify_gen__TypeCtorInfo_36_36, ll_backend__unify_gen__FailCode_21, ll_backend__unify_gen__V_35_35);
    }
#line 1394 "unify_gen.m"
    {
#line 1394 "unify_gen.m"
      *ll_backend__unify_gen__Code_14 = mercury__cord__f_43_43_2_f_0(ll_backend__unify_gen__TypeCtorInfo_36_36, ll_backend__unify_gen__TagTestCode_19, ll_backend__unify_gen__V_34_34);
    }
#line 1383 "unify_gen.m"
  }
#line 1379 "unify_gen.m"
}

#line 1254 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_det_deconstruction_8_p_0(
#line 1254 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Var_9,
#line 1254 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Cons_10,
#line 1254 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Args_11,
#line 1254 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Modes_12,
#line 1254 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ArgWidths_13,
#line 1254 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_14,
#line 1254 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_18,
#line 1254 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_19)
#line 1254 "unify_gen.m"
{
#line 1258 "unify_gen.m"
  {
#line 1258 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 1258 "unify_gen.m"
    MR_Word ll_backend__unify_gen__ModuleInfo_16;
#line 1258 "unify_gen.m"
    MR_Word ll_backend__unify_gen__Tag_17;

#line 1259 "unify_gen.m"
    {
#line 1259 "unify_gen.m"
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_18, &ll_backend__unify_gen__ModuleInfo_16);
    }
#line 1260 "unify_gen.m"
    {
#line 1260 "unify_gen.m"
      ll_backend__unify_gen__Tag_17 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ll_backend__unify_gen__ModuleInfo_16, ll_backend__unify_gen__Cons_10);
    }
#line 1261 "unify_gen.m"
    {
#line 1261 "unify_gen.m"
      ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_9_p_0(ll_backend__unify_gen__Var_9, ll_backend__unify_gen__Args_11, ll_backend__unify_gen__Modes_12, ll_backend__unify_gen__ArgWidths_13, ll_backend__unify_gen__Tag_17, ll_backend__unify_gen__Code_14, ll_backend__unify_gen__STATE_VARIABLE_CI_0_18, ll_backend__unify_gen__STATE_VARIABLE_CI_19);
#line 1261 "unify_gen.m"
      return;
    }
#line 1258 "unify_gen.m"
  }
#line 1254 "unify_gen.m"
}

#line 1215 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__make_fields_and_argvars_7_p_0(
#line 1215 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__1_1,
#line 1215 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_2,
#line 1215 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Rval_3,
#line 1215 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__PrevOffset0_4,
#line 1215 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__TagNum_5,
#line 1215 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__HeadVar__6_6,
#line 1215 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__HeadVar__7_7)
#line 1215 "unify_gen.m"
{
#line 1218 "unify_gen.m"
  {
#line 1218 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;

#line 1218 "unify_gen.m"
    if ((ll_backend__unify_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1218 "unify_gen.m"
      if ((ll_backend__unify_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1218 "unify_gen.m"
        {
#line 1218 "unify_gen.m"
          *ll_backend__unify_gen__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1218 "unify_gen.m"
          *ll_backend__unify_gen__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1218 "unify_gen.m"
        }
#line 1218 "unify_gen.m"
      else
#line 1239 "unify_gen.m"
        {
#line 1240 "unify_gen.m"
          {
#line 1240 "unify_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.make_fields_and_argvars\'/7", (MR_String) "mismatched lists");
#line 1240 "unify_gen.m"
            return;
          }
#line 1239 "unify_gen.m"
        }
#line 1218 "unify_gen.m"
    else
#line 1218 "unify_gen.m"
      {
#line 1218 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 1218 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__1_1, (MR_Integer) 0)));

#line 1218 "unify_gen.m"
        if ((ll_backend__unify_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1241 "unify_gen.m"
          {
#line 1242 "unify_gen.m"
            {
#line 1242 "unify_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.make_fields_and_argvars\'/7", (MR_String) "mismatched lists");
#line 1242 "unify_gen.m"
              return;
            }
#line 1241 "unify_gen.m"
          }
#line 1218 "unify_gen.m"
        else
#line 1220 "unify_gen.m"
          {
#line 1220 "unify_gen.m"
            MR_Word ll_backend__unify_gen__Width_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 1220 "unify_gen.m"
            MR_Word ll_backend__unify_gen__Widths_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 1220 "unify_gen.m"
            MR_Word ll_backend__unify_gen__F_18;
#line 1220 "unify_gen.m"
            MR_Word ll_backend__unify_gen__Fs_19;
#line 1220 "unify_gen.m"
            MR_Word ll_backend__unify_gen__A_20;
#line 1220 "unify_gen.m"
            MR_Word ll_backend__unify_gen__As_21;
#line 1220 "unify_gen.m"
            MR_Integer ll_backend__unify_gen__Offset_23;
#line 1220 "unify_gen.m"
            MR_Integer ll_backend__unify_gen__PrevOffset_24;
#line 1220 "unify_gen.m"
            MR_Word ll_backend__unify_gen__V_29_29;
#line 1220 "unify_gen.m"
            MR_Word ll_backend__unify_gen__V_30_30;
#line 1220 "unify_gen.m"
            MR_Word ll_backend__unify_gen__V_31_31;
#line 1220 "unify_gen.m"
            MR_Word ll_backend__unify_gen__V_32_32;

#line 1227 "unify_gen.m"
            if ((ll_backend__unify_gen__Width_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1232 "unify_gen.m"
              {
#line 1233 "unify_gen.m"
                ll_backend__unify_gen__Offset_23 = (ll_backend__unify_gen__PrevOffset0_4 + (MR_Integer) 1);
#line 1234 "unify_gen.m"
                ll_backend__unify_gen__PrevOffset_24 = (ll_backend__unify_gen__Offset_23 + (MR_Integer) 1);
#line 1232 "unify_gen.m"
              }
#line 1227 "unify_gen.m"
            else
#line 1227 "unify_gen.m"
              if (((MR_tag((MR_Word) ll_backend__unify_gen__Width_13)) == (MR_mktag((MR_Integer) 2))))
#line 1228 "unify_gen.m"
                {
#line 1229 "unify_gen.m"
                  ll_backend__unify_gen__Offset_23 = ll_backend__unify_gen__PrevOffset0_4;
#line 1230 "unify_gen.m"
                  ll_backend__unify_gen__PrevOffset_24 = ll_backend__unify_gen__Offset_23;
#line 1228 "unify_gen.m"
                }
#line 1227 "unify_gen.m"
              else
#line 1224 "unify_gen.m"
                {
#line 1225 "unify_gen.m"
                  ll_backend__unify_gen__Offset_23 = (ll_backend__unify_gen__PrevOffset0_4 + (MR_Integer) 1);
#line 1226 "unify_gen.m"
                  ll_backend__unify_gen__PrevOffset_24 = ll_backend__unify_gen__Offset_23;
#line 1224 "unify_gen.m"
                }
#line 1236 "unify_gen.m"
            {
#line 1236 "unify_gen.m"
              ll_backend__unify_gen__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1236 "unify_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_30_30, 0) = ((MR_Box) (ll_backend__unify_gen__TagNum_5));
#line 1236 "unify_gen.m"
            }
#line 1236 "unify_gen.m"
            {
#line 1236 "unify_gen.m"
              ll_backend__unify_gen__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1236 "unify_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_32_32, 0) = ((MR_Box) (ll_backend__unify_gen__Offset_23));
#line 1236 "unify_gen.m"
            }
#line 1236 "unify_gen.m"
            {
#line 1236 "unify_gen.m"
              ll_backend__unify_gen__V_31_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1236 "unify_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_31_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1236 "unify_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_31_31, 1) = ((MR_Box) (ll_backend__unify_gen__V_32_32));
#line 1236 "unify_gen.m"
            }
#line 1236 "unify_gen.m"
            {
#line 1236 "unify_gen.m"
              ll_backend__unify_gen__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1236 "unify_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 1236 "unify_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_29_29, 1) = ((MR_Box) (ll_backend__unify_gen__V_30_30));
#line 1236 "unify_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_29_29, 2) = ((MR_Box) (ll_backend__unify_gen__Rval_3));
#line 1236 "unify_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_29_29, 3) = ((MR_Box) (ll_backend__unify_gen__V_31_31));
#line 1236 "unify_gen.m"
            }
#line 1236 "unify_gen.m"
            {
#line 1236 "unify_gen.m"
              ll_backend__unify_gen__F_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1236 "unify_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__unify_gen__F_18, 0) = ((MR_Box) (ll_backend__unify_gen__V_29_29));
#line 1236 "unify_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__unify_gen__F_18, 1) = ((MR_Box) (ll_backend__unify_gen__Width_13));
#line 1236 "unify_gen.m"
            }
#line 1237 "unify_gen.m"
            {
#line 1237 "unify_gen.m"
              ll_backend__unify_gen__A_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1237 "unify_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__unify_gen__A_20, 0) = ((MR_Box) (ll_backend__unify_gen__V_56_56));
#line 1237 "unify_gen.m"
            }
#line 1238 "unify_gen.m"
            {
#line 1238 "unify_gen.m"
              ll_backend__unify_gen__make_fields_and_argvars_7_p_0(ll_backend__unify_gen__V_55_55, ll_backend__unify_gen__Widths_14, ll_backend__unify_gen__Rval_3, ll_backend__unify_gen__PrevOffset_24, ll_backend__unify_gen__TagNum_5, &ll_backend__unify_gen__Fs_19, &ll_backend__unify_gen__As_21);
            }
#line 1220 "unify_gen.m"
            {
#line 1220 "unify_gen.m"
              MR_Word base;
#line 1220 "unify_gen.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1220 "unify_gen.m"
              *ll_backend__unify_gen__HeadVar__6_6 = base;
#line 1220 "unify_gen.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__unify_gen__F_18));
#line 1220 "unify_gen.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__unify_gen__Fs_19));
#line 1220 "unify_gen.m"
            }
#line 1220 "unify_gen.m"
            {
#line 1220 "unify_gen.m"
              MR_Word base;
#line 1220 "unify_gen.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1220 "unify_gen.m"
              *ll_backend__unify_gen__HeadVar__7_7 = base;
#line 1220 "unify_gen.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__unify_gen__A_20));
#line 1220 "unify_gen.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__unify_gen__As_21));
#line 1220 "unify_gen.m"
            }
#line 1220 "unify_gen.m"
          }
#line 1218 "unify_gen.m"
      }
#line 1218 "unify_gen.m"
  }
#line 1215 "unify_gen.m"
}

#line 1202 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__var_types_3_p_0(
#line 1202 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CI_4,
#line 1202 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Vars_5,
#line 1202 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Types_6)
#line 1202 "unify_gen.m"
{
#line 1205 "unify_gen.m"
  {
#line 1205 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 1205 "unify_gen.m"
    MR_Word ll_backend__unify_gen__ProcInfo_7;
#line 1205 "unify_gen.m"
    MR_Word ll_backend__unify_gen__VarTypes_8;

#line 1206 "unify_gen.m"
    {
#line 1206 "unify_gen.m"
      ll_backend__code_info__get_proc_info_2_p_0(ll_backend__unify_gen__CI_4, &ll_backend__unify_gen__ProcInfo_7);
    }
#line 1207 "unify_gen.m"
    {
#line 1207 "unify_gen.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__unify_gen__ProcInfo_7, &ll_backend__unify_gen__VarTypes_8);
    }
#line 1208 "unify_gen.m"
    {
#line 1208 "unify_gen.m"
      parse_tree__prog_data__lookup_var_types_3_p_0(ll_backend__unify_gen__VarTypes_8, ll_backend__unify_gen__Vars_5, ll_backend__unify_gen__Types_6);
#line 1208 "unify_gen.m"
      return;
    }
#line 1205 "unify_gen.m"
  }
#line 1202 "unify_gen.m"
}

#line 1186 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_field_take_address_assigns_6_p_0(
#line 1186 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__1_1,
#line 1186 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CellVar_2,
#line 1186 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__CellPtag_3,
#line 1186 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__HeadVar__4_4,
#line 1186 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_5,
#line 1186 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_6)
#line 1186 "unify_gen.m"
{
#line 1190 "unify_gen.m"
  {
#line 1190 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;

#line 1190 "unify_gen.m"
    if ((ll_backend__unify_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1190 "unify_gen.m"
      {
#line 1190 "unify_gen.m"
        {
#line 1190 "unify_gen.m"
          *ll_backend__unify_gen__HeadVar__4_4 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 1190 "unify_gen.m"
        *ll_backend__unify_gen__STATE_VARIABLE_CI_6 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_5;
#line 1190 "unify_gen.m"
      }
#line 1190 "unify_gen.m"
    else
#line 1192 "unify_gen.m"
      {
#line 1192 "unify_gen.m"
        MR_Word ll_backend__unify_gen__FieldAddr_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 1192 "unify_gen.m"
        MR_Word ll_backend__unify_gen__FieldAddrs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 1192 "unify_gen.m"
        MR_Word ll_backend__unify_gen__ThisCode_16;
#line 1192 "unify_gen.m"
        MR_Word ll_backend__unify_gen__RestCode_17;
#line 1192 "unify_gen.m"
        MR_Integer ll_backend__unify_gen__FieldNum_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__FieldAddr_12, (MR_Integer) 0)));
#line 1192 "unify_gen.m"
        MR_Word ll_backend__unify_gen__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__FieldAddr_12, (MR_Integer) 1)));
#line 1192 "unify_gen.m"
        MR_Word ll_backend__unify_gen__FieldNumRval_21;
#line 1192 "unify_gen.m"
        MR_Word ll_backend__unify_gen__Addr_22;
#line 1192 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_25_25;
#line 1192 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_26_26;
#line 1192 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_27_27;
#line 1192 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_28_28;
#line 1192 "unify_gen.m"
        MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_29_29;

#line 1194 "unify_gen.m"
        {
#line 1194 "unify_gen.m"
          ll_backend__unify_gen__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1194 "unify_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_25_25, 0) = ((MR_Box) (ll_backend__unify_gen__FieldNum_19));
#line 1194 "unify_gen.m"
        }
#line 1194 "unify_gen.m"
        {
#line 1194 "unify_gen.m"
          ll_backend__unify_gen__FieldNumRval_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1194 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__FieldNumRval_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1194 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__FieldNumRval_21, 1) = ((MR_Box) (ll_backend__unify_gen__V_25_25));
#line 1194 "unify_gen.m"
        }
#line 1195 "unify_gen.m"
        {
#line 1195 "unify_gen.m"
          ll_backend__unify_gen__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1195 "unify_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_27_27, 0) = ((MR_Box) (ll_backend__unify_gen__CellVar_2));
#line 1195 "unify_gen.m"
        }
#line 1195 "unify_gen.m"
        {
#line 1195 "unify_gen.m"
          ll_backend__unify_gen__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1195 "unify_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_28_28, 0) = ((MR_Box) (ll_backend__unify_gen__CellPtag_3));
#line 1195 "unify_gen.m"
        }
#line 1195 "unify_gen.m"
        {
#line 1195 "unify_gen.m"
          ll_backend__unify_gen__V_26_26 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1195 "unify_gen.m"
          MR_hl_field(MR_mktag(2), ll_backend__unify_gen__V_26_26, 0) = ((MR_Box) (ll_backend__unify_gen__V_27_27));
#line 1195 "unify_gen.m"
          MR_hl_field(MR_mktag(2), ll_backend__unify_gen__V_26_26, 1) = ((MR_Box) (ll_backend__unify_gen__V_28_28));
#line 1195 "unify_gen.m"
          MR_hl_field(MR_mktag(2), ll_backend__unify_gen__V_26_26, 2) = ((MR_Box) (ll_backend__unify_gen__FieldNumRval_21));
#line 1195 "unify_gen.m"
        }
#line 1195 "unify_gen.m"
        {
#line 1195 "unify_gen.m"
          ll_backend__unify_gen__Addr_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1195 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Addr_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1195 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Addr_22, 1) = ((MR_Box) (ll_backend__unify_gen__V_26_26));
#line 1195 "unify_gen.m"
        }
#line 1196 "unify_gen.m"
        {
#line 1196 "unify_gen.m"
          ll_backend__code_info__assign_expr_to_var_5_p_0(ll_backend__unify_gen__Var_20, ll_backend__unify_gen__Addr_22, &ll_backend__unify_gen__ThisCode_16, ll_backend__unify_gen__STATE_VARIABLE_CI_0_5, &ll_backend__unify_gen__STATE_VARIABLE_CI_29_29);
        }
#line 1197 "unify_gen.m"
        {
#line 1197 "unify_gen.m"
          ll_backend__unify_gen__generate_field_take_address_assigns_6_p_0(ll_backend__unify_gen__FieldAddrs_13, ll_backend__unify_gen__CellVar_2, ll_backend__unify_gen__CellPtag_3, &ll_backend__unify_gen__RestCode_17, ll_backend__unify_gen__STATE_VARIABLE_CI_29_29, ll_backend__unify_gen__STATE_VARIABLE_CI_6);
        }
#line 1192 "unify_gen.m"
        {
#line 1192 "unify_gen.m"
          *ll_backend__unify_gen__HeadVar__4_4 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__unify_gen__ThisCode_16, ll_backend__unify_gen__RestCode_17);
        }
#line 1192 "unify_gen.m"
      }
#line 1190 "unify_gen.m"
  }
#line 1186 "unify_gen.m"
}

#line 1167 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_field_addr_5_p_0(
#line 1167 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CellArg_6,
#line 1167 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__ArgOffset_7,
#line 1167 "unify_gen.m"
  MR_Integer * ll_backend__unify_gen__NextOffset_8,
#line 1167 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_RevFieldAddrs_0_16,
#line 1167 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_RevFieldAddrs_17)
#line 1167 "unify_gen.m"
{
#line 1174 "unify_gen.m"
  {
#line 1174 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;

#line 1174 "unify_gen.m"
    if (((MR_tag((MR_Word) ll_backend__unify_gen__CellArg_6)) == (MR_mktag((MR_Integer) 2))))
#line 1177 "unify_gen.m"
      {
#line 1178 "unify_gen.m"
        *ll_backend__unify_gen__NextOffset_8 = (ll_backend__unify_gen__ArgOffset_7 + (MR_Integer) 2);
#line 1178 "unify_gen.m"
        *ll_backend__unify_gen__STATE_VARIABLE_RevFieldAddrs_17 = ll_backend__unify_gen__STATE_VARIABLE_RevFieldAddrs_0_16;
#line 1177 "unify_gen.m"
      }
#line 1174 "unify_gen.m"
    else
#line 1174 "unify_gen.m"
      if (((MR_tag((MR_Word) ll_backend__unify_gen__CellArg_6)) == (MR_mktag((MR_Integer) 3))))
#line 1180 "unify_gen.m"
        {
#line 1180 "unify_gen.m"
          MR_Word ll_backend__unify_gen__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__CellArg_6, (MR_Integer) 0)));
#line 1180 "unify_gen.m"
          MR_Word ll_backend__unify_gen__FieldAddr_15;
#line 1180 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__CellArg_6, (MR_Integer) 1)));

#line 1181 "unify_gen.m"
          *ll_backend__unify_gen__NextOffset_8 = (ll_backend__unify_gen__ArgOffset_7 + (MR_Integer) 1);
#line 1182 "unify_gen.m"
          {
#line 1182 "unify_gen.m"
            ll_backend__unify_gen__FieldAddr_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1182 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__FieldAddr_15, 0) = ((MR_Box) (ll_backend__unify_gen__ArgOffset_7));
#line 1182 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__FieldAddr_15, 1) = ((MR_Box) (ll_backend__unify_gen__Var_13));
#line 1182 "unify_gen.m"
          }
#line 1183 "unify_gen.m"
          {
#line 1183 "unify_gen.m"
            MR_Word base;
#line 1183 "unify_gen.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1183 "unify_gen.m"
            *ll_backend__unify_gen__STATE_VARIABLE_RevFieldAddrs_17 = base;
#line 1183 "unify_gen.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__unify_gen__FieldAddr_15));
#line 1183 "unify_gen.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__unify_gen__STATE_VARIABLE_RevFieldAddrs_0_16));
#line 1183 "unify_gen.m"
          }
#line 1180 "unify_gen.m"
        }
#line 1174 "unify_gen.m"
      else
#line 1174 "unify_gen.m"
        {
#line 1175 "unify_gen.m"
          *ll_backend__unify_gen__NextOffset_8 = (ll_backend__unify_gen__ArgOffset_7 + (MR_Integer) 1);
#line 1175 "unify_gen.m"
          *ll_backend__unify_gen__STATE_VARIABLE_RevFieldAddrs_17 = ll_backend__unify_gen__STATE_VARIABLE_RevFieldAddrs_0_16;
#line 1174 "unify_gen.m"
        }
#line 1174 "unify_gen.m"
  }
#line 1167 "unify_gen.m"
}

#line 1146 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__maybe_add_alloc_site_info_6_p_0(
#line 1146 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Context_7,
#line 1146 "unify_gen.m"
  MR_String ll_backend__unify_gen__VarTypeMsg_8,
#line 1146 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__Size_9,
#line 1146 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__MaybeAllocId_10,
#line 1146 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_15,
#line 1146 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_16)
#line 1146 "unify_gen.m"
{
#line 1149 "unify_gen.m"
  {
#line 1149 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 1149 "unify_gen.m"
    MR_Word ll_backend__unify_gen__Globals_12;
#line 1149 "unify_gen.m"
    MR_Word ll_backend__unify_gen__ProfileMemory_13;

#line 1150 "unify_gen.m"
    {
#line 1150 "unify_gen.m"
      ll_backend__code_info__get_globals_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_15, &ll_backend__unify_gen__Globals_12);
    }
#line 1151 "unify_gen.m"
    {
#line 1151 "unify_gen.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__unify_gen__Globals_12, (MR_Integer) 190, &ll_backend__unify_gen__ProfileMemory_13);
    }
#line 1156 "unify_gen.m"
    if ((ll_backend__unify_gen__ProfileMemory_13 == (MR_Integer) 0))
#line 1157 "unify_gen.m"
      {
#line 1158 "unify_gen.m"
        *ll_backend__unify_gen__MaybeAllocId_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1158 "unify_gen.m"
        *ll_backend__unify_gen__STATE_VARIABLE_CI_16 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_15;
#line 1157 "unify_gen.m"
      }
#line 1156 "unify_gen.m"
    else
#line 1153 "unify_gen.m"
      {
#line 1153 "unify_gen.m"
        MR_Word ll_backend__unify_gen__AllocId_14;

#line 1154 "unify_gen.m"
        {
#line 1154 "unify_gen.m"
          ll_backend__code_info__add_alloc_site_info_6_p_0(ll_backend__unify_gen__Context_7, ll_backend__unify_gen__VarTypeMsg_8, ll_backend__unify_gen__Size_9, &ll_backend__unify_gen__AllocId_14, ll_backend__unify_gen__STATE_VARIABLE_CI_0_15, ll_backend__unify_gen__STATE_VARIABLE_CI_16);
        }
#line 1155 "unify_gen.m"
        {
#line 1155 "unify_gen.m"
          MR_Word base;
#line 1155 "unify_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1155 "unify_gen.m"
          *ll_backend__unify_gen__MaybeAllocId_10 = base;
#line 1155 "unify_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__unify_gen__AllocId_14));
#line 1155 "unify_gen.m"
        }
#line 1153 "unify_gen.m"
      }
#line 1149 "unify_gen.m"
  }
#line 1146 "unify_gen.m"
}

#line 1164 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__construct_cell_10_p_0_1(
#line 1164 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg,
#line 1164 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
#line 1164 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
#line 1164 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_3,
#line 1164 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_4,
#line 1164 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_5)
#line 1164 "unify_gen.m"
{
#line 1164 "unify_gen.m"
  {
#line 1164 "unify_gen.m"
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;
#line 1164 "unify_gen.m"
    MR_Integer ll_backend__unify_gen__conv1_NextOffset_8;
#line 1164 "unify_gen.m"
    MR_Word ll_backend__unify_gen__conv0_STATE_VARIABLE_RevFieldAddrs_17;

#line 1164 "unify_gen.m"
    {
#line 1164 "unify_gen.m"
      ll_backend__unify_gen__generate_field_addr_5_p_0(((MR_Word) ll_backend__unify_gen__wrapper_arg_1), ((MR_Integer) ll_backend__unify_gen__wrapper_arg_2), &ll_backend__unify_gen__conv1_NextOffset_8, ((MR_Word) ll_backend__unify_gen__wrapper_arg_4), &ll_backend__unify_gen__conv0_STATE_VARIABLE_RevFieldAddrs_17);
    }
#line 1164 "unify_gen.m"
    *ll_backend__unify_gen__wrapper_arg_3 = ((MR_Box) (ll_backend__unify_gen__conv1_NextOffset_8));
#line 1164 "unify_gen.m"
    *ll_backend__unify_gen__wrapper_arg_5 = ((MR_Box) (ll_backend__unify_gen__conv0_STATE_VARIABLE_RevFieldAddrs_17));
#line 1164 "unify_gen.m"
  }
#line 1164 "unify_gen.m"
}

#line 1102 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__construct_cell_10_p_0(
#line 1102 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Var_11,
#line 1102 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__Ptag_12,
#line 1102 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CellArgs_13,
#line 1102 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HowToConstruct_14,
#line 1102 "unify_gen.m"
  MR_Word ll_backend__unify_gen__MaybeSize_15,
#line 1102 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Context_16,
#line 1102 "unify_gen.m"
  MR_Word ll_backend__unify_gen__MayUseAtomic_17,
#line 1102 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_18,
#line 1102 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_32,
#line 1102 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_33)
#line 1102 "unify_gen.m"
{
#line 1108 "unify_gen.m"
  {
#line 1108 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 1108 "unify_gen.m"
    MR_Word ll_backend__unify_gen__VarType_20;
#line 1108 "unify_gen.m"
    MR_String ll_backend__unify_gen__VarTypeMsg_21;
#line 1108 "unify_gen.m"
    MR_Word ll_backend__unify_gen__ReserveWordAtStart_24;
#line 1108 "unify_gen.m"
    MR_Integer ll_backend__unify_gen__Size_25;
#line 1108 "unify_gen.m"
    MR_Word ll_backend__unify_gen__MaybeAllocId_26;
#line 1108 "unify_gen.m"
    MR_Word ll_backend__unify_gen__CellCode_27;
#line 1108 "unify_gen.m"
    MR_Word ll_backend__unify_gen__FieldAddrs_28;
#line 1108 "unify_gen.m"
    MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_34_34;
#line 1108 "unify_gen.m"
    MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_35_35;
#line 1108 "unify_gen.m"
    MR_Word ll_backend__unify_gen__TypeCtor_40;
#line 1108 "unify_gen.m"
    MR_Word ll_backend__unify_gen__TypeSym_41;
#line 1108 "unify_gen.m"
    MR_Integer ll_backend__unify_gen__TypeArity_42;
#line 1108 "unify_gen.m"
    MR_String ll_backend__unify_gen__TypeSymStr_43;
#line 1108 "unify_gen.m"
    MR_String ll_backend__unify_gen__TypeArityStr_44;
#line 1108 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_45_45;
#line 1108 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_46_46;
#line 1108 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_48_48;
#line 1108 "unify_gen.m"
    MR_Word ll_backend__unify_gen__Globals_57;
#line 1108 "unify_gen.m"
    MR_Word ll_backend__unify_gen__ProfileMemory_58;
#line 1108 "unify_gen.m"
    MR_Word ll_backend__unify_gen__RevFieldAddrs_65;
#line 1118 "unify_gen.m"
    MR_Word ll_backend__unify_gen__Globals_22;
#line 1118 "unify_gen.m"
    MR_Word ll_backend__unify_gen__GCMethod_23;
#line 1164 "unify_gen.m"
    MR_Integer ll_backend__unify_gen__V_64_64;
#line 1164 "unify_gen.m"
    MR_Box ll_backend__unify_gen__conv3_V_64_64;
#line 1164 "unify_gen.m"
    MR_Box ll_backend__unify_gen__conv2_RevFieldAddrs_65;

#line 1109 "unify_gen.m"
    {
#line 1109 "unify_gen.m"
      ll_backend__unify_gen__VarType_20 = ll_backend__code_info__variable_type_2_f_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_32, ll_backend__unify_gen__Var_11);
    }
#line 2287 "unify_gen.m"
    {
#line 2287 "unify_gen.m"
      parse_tree__prog_type__type_to_ctor_det_2_p_0(ll_backend__unify_gen__VarType_20, &ll_backend__unify_gen__TypeCtor_40);
    }
#line 2288 "unify_gen.m"
    ll_backend__unify_gen__TypeSym_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__TypeCtor_40, (MR_Integer) 0)));
#line 2288 "unify_gen.m"
    ll_backend__unify_gen__TypeArity_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__TypeCtor_40, (MR_Integer) 1)));
#line 2289 "unify_gen.m"
    {
#line 2289 "unify_gen.m"
      ll_backend__unify_gen__TypeSymStr_43 = mdbcomp__prim_data__sym_name_to_string_1_f_0(ll_backend__unify_gen__TypeSym_41);
    }
#line 2290 "unify_gen.m"
    {
#line 2290 "unify_gen.m"
      mercury__string__int_to_string_2_p_0(ll_backend__unify_gen__TypeArity_42, &ll_backend__unify_gen__TypeArityStr_44);
    }
#line 2291 "unify_gen.m"
    {
#line 2291 "unify_gen.m"
      ll_backend__unify_gen__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2291 "unify_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_48_48, 0) = ((MR_Box) (ll_backend__unify_gen__TypeArityStr_44));
#line 2291 "unify_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2291 "unify_gen.m"
    }
#line 2291 "unify_gen.m"
    {
#line 2291 "unify_gen.m"
      ll_backend__unify_gen__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2291 "unify_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_46_46, 0) = ((MR_Box) ((MR_String) "/"));
#line 2291 "unify_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_46_46, 1) = ((MR_Box) (ll_backend__unify_gen__V_48_48));
#line 2291 "unify_gen.m"
    }
#line 2291 "unify_gen.m"
    {
#line 2291 "unify_gen.m"
      ll_backend__unify_gen__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2291 "unify_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_45_45, 0) = ((MR_Box) (ll_backend__unify_gen__TypeSymStr_43));
#line 2291 "unify_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_45_45, 1) = ((MR_Box) (ll_backend__unify_gen__V_46_46));
#line 2291 "unify_gen.m"
    }
#line 2291 "unify_gen.m"
    {
#line 2291 "unify_gen.m"
      mercury__string__append_list_2_p_0(ll_backend__unify_gen__V_45_45, &ll_backend__unify_gen__VarTypeMsg_21);
    }
#line 1118 "unify_gen.m"
    {
#line 1118 "unify_gen.m"
      ll_backend__code_info__get_globals_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_32, &ll_backend__unify_gen__Globals_22);
    }
#line 1119 "unify_gen.m"
    {
#line 1119 "unify_gen.m"
      libs__globals__get_gc_method_2_p_0(ll_backend__unify_gen__Globals_22, &ll_backend__unify_gen__GCMethod_23);
    }
#line 1120 "unify_gen.m"
    ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__GCMethod_23 == (MR_Integer) 6);
#line 1118 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 1121 "unify_gen.m"
      {
#line 1121 "unify_gen.m"
        ll_backend__unify_gen__succeeded = parse_tree__prog_type__is_introduced_type_info_type_1_p_0(ll_backend__unify_gen__VarType_20);
      }
#line 1124 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 1123 "unify_gen.m"
      ll_backend__unify_gen__ReserveWordAtStart_24 = (MR_Integer) 1;
#line 1124 "unify_gen.m"
    else
#line 1125 "unify_gen.m"
      ll_backend__unify_gen__ReserveWordAtStart_24 = (MR_Integer) 0;
#line 1127 "unify_gen.m"
    {
#line 1127 "unify_gen.m"
      ll_backend__unify_gen__Size_25 = ll_backend__code_util__size_of_cell_args_1_f_0(ll_backend__unify_gen__CellArgs_13);
    }
#line 1150 "unify_gen.m"
    {
#line 1150 "unify_gen.m"
      ll_backend__code_info__get_globals_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_32, &ll_backend__unify_gen__Globals_57);
    }
#line 1151 "unify_gen.m"
    {
#line 1151 "unify_gen.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__unify_gen__Globals_57, (MR_Integer) 190, &ll_backend__unify_gen__ProfileMemory_58);
    }
#line 1156 "unify_gen.m"
    if ((ll_backend__unify_gen__ProfileMemory_58 == (MR_Integer) 0))
#line 1157 "unify_gen.m"
      {
#line 1158 "unify_gen.m"
        ll_backend__unify_gen__MaybeAllocId_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1158 "unify_gen.m"
        ll_backend__unify_gen__STATE_VARIABLE_CI_34_34 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_32;
#line 1157 "unify_gen.m"
      }
#line 1156 "unify_gen.m"
    else
#line 1153 "unify_gen.m"
      {
#line 1153 "unify_gen.m"
        MR_Word ll_backend__unify_gen__AllocId_59;

#line 1154 "unify_gen.m"
        {
#line 1154 "unify_gen.m"
          ll_backend__code_info__add_alloc_site_info_6_p_0(ll_backend__unify_gen__Context_16, ll_backend__unify_gen__VarTypeMsg_21, ll_backend__unify_gen__Size_25, &ll_backend__unify_gen__AllocId_59, ll_backend__unify_gen__STATE_VARIABLE_CI_0_32, &ll_backend__unify_gen__STATE_VARIABLE_CI_34_34);
        }
#line 1155 "unify_gen.m"
        {
#line 1155 "unify_gen.m"
          ll_backend__unify_gen__MaybeAllocId_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1155 "unify_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__MaybeAllocId_26, 0) = ((MR_Box) (ll_backend__unify_gen__AllocId_59));
#line 1155 "unify_gen.m"
        }
#line 1153 "unify_gen.m"
      }
#line 1129 "unify_gen.m"
    {
#line 1129 "unify_gen.m"
      ll_backend__code_info__assign_cell_to_var_11_p_0(ll_backend__unify_gen__Var_11, ll_backend__unify_gen__ReserveWordAtStart_24, ll_backend__unify_gen__Ptag_12, ll_backend__unify_gen__CellArgs_13, ll_backend__unify_gen__HowToConstruct_14, ll_backend__unify_gen__MaybeSize_15, ll_backend__unify_gen__MaybeAllocId_26, ll_backend__unify_gen__MayUseAtomic_17, &ll_backend__unify_gen__CellCode_27, ll_backend__unify_gen__STATE_VARIABLE_CI_34_34, &ll_backend__unify_gen__STATE_VARIABLE_CI_35_35);
    }
#line 1164 "unify_gen.m"
    {
#line 1164 "unify_gen.m"
      mercury__list__foldl2_6_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_cell_arg_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__unify_gen_scalar_common_1[6], (MR_Word) &ll_backend__unify_gen_scalar_common_2[7], ll_backend__unify_gen__CellArgs_13, ((MR_Box) ((MR_Integer) 0)), &ll_backend__unify_gen__conv3_V_64_64, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &ll_backend__unify_gen__conv2_RevFieldAddrs_65);
    }
#line 1164 "unify_gen.m"
    ll_backend__unify_gen__V_64_64 = ((MR_Integer) ll_backend__unify_gen__conv3_V_64_64);
#line 1164 "unify_gen.m"
    ll_backend__unify_gen__RevFieldAddrs_65 = ((MR_Word) ll_backend__unify_gen__conv2_RevFieldAddrs_65);
#line 1165 "unify_gen.m"
    {
#line 1165 "unify_gen.m"
      mercury__list__reverse_2_p_0((MR_Word) &ll_backend__unify_gen__ll_backend__unify_gen__type_ctor_info_field_addr_0, ll_backend__unify_gen__RevFieldAddrs_65, &ll_backend__unify_gen__FieldAddrs_28);
    }
#line 1136 "unify_gen.m"
    if ((ll_backend__unify_gen__FieldAddrs_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1133 "unify_gen.m"
      {
#line 1135 "unify_gen.m"
        *ll_backend__unify_gen__Code_18 = ll_backend__unify_gen__CellCode_27;
#line 1135 "unify_gen.m"
        *ll_backend__unify_gen__STATE_VARIABLE_CI_33 = ll_backend__unify_gen__STATE_VARIABLE_CI_35_35;
#line 1133 "unify_gen.m"
      }
#line 1136 "unify_gen.m"
    else
#line 1137 "unify_gen.m"
      {
#line 1137 "unify_gen.m"
        MR_Word ll_backend__unify_gen__FieldCode_31;

#line 1141 "unify_gen.m"
        {
#line 1141 "unify_gen.m"
          ll_backend__unify_gen__generate_field_take_address_assigns_6_p_0(ll_backend__unify_gen__FieldAddrs_28, ll_backend__unify_gen__Var_11, ll_backend__unify_gen__Ptag_12, &ll_backend__unify_gen__FieldCode_31, ll_backend__unify_gen__STATE_VARIABLE_CI_35_35, ll_backend__unify_gen__STATE_VARIABLE_CI_33);
        }
#line 1143 "unify_gen.m"
        {
#line 1143 "unify_gen.m"
          *ll_backend__unify_gen__Code_18 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__unify_gen__CellCode_27, ll_backend__unify_gen__FieldCode_31);
        }
#line 1137 "unify_gen.m"
      }
#line 1108 "unify_gen.m"
  }
#line 1102 "unify_gen.m"
}

#line 1093 "unify_gen.m"
static MR_Word MR_CALL 
ll_backend__unify_gen__condense_needs_updates_1_f_0(
#line 1093 "unify_gen.m"
  MR_Word ll_backend__unify_gen__NeedsUpdatess_3)
#line 1093 "unify_gen.m"
{
#line 1095 "unify_gen.m"
  {
#line 1095 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 1095 "unify_gen.m"
    MR_Word ll_backend__unify_gen__HeadVar__2_2;

#line 1096 "unify_gen.m"
    {
#line 1096 "unify_gen.m"
      ll_backend__unify_gen__succeeded = mercury__list__member_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0, ((MR_Box) ((MR_Integer) 0)), ll_backend__unify_gen__NeedsUpdatess_3);
    }
#line 1095 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 1095 "unify_gen.m"
      ll_backend__unify_gen__HeadVar__2_2 = (MR_Integer) 0;
#line 1095 "unify_gen.m"
    else
#line 1095 "unify_gen.m"
      ll_backend__unify_gen__HeadVar__2_2 = (MR_Integer) 1;
#line 1095 "unify_gen.m"
    return ll_backend__unify_gen__HeadVar__2_2;
#line 1095 "unify_gen.m"
  }
#line 1093 "unify_gen.m"
}

#line 1088 "unify_gen.m"
static MR_Box MR_CALL 
ll_backend__unify_gen__pack_how_to_construct_3_p_0_1(
#line 1088 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg,
#line 1088 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_1)
#line 1088 "unify_gen.m"
{
#line 1088 "unify_gen.m"
  {
#line 1088 "unify_gen.m"
    MR_Box ll_backend__unify_gen__wrapper_arg_2;
#line 1088 "unify_gen.m"
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;
#line 1088 "unify_gen.m"
    MR_Word ll_backend__unify_gen__conv0_HeadVar__2_2;

#line 1088 "unify_gen.m"
    {
#line 1088 "unify_gen.m"
      ll_backend__unify_gen__conv0_HeadVar__2_2 = ll_backend__unify_gen__condense_needs_updates_1_f_0(((MR_Word) ll_backend__unify_gen__wrapper_arg_1));
    }
#line 1088 "unify_gen.m"
    ll_backend__unify_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__unify_gen__conv0_HeadVar__2_2));
#line 1088 "unify_gen.m"
    return ll_backend__unify_gen__wrapper_arg_2;
#line 1088 "unify_gen.m"
  }
#line 1088 "unify_gen.m"
}

#line 1072 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__pack_how_to_construct_3_p_0(
#line 1072 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ArgWidths_4,
#line 1072 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_HowToConstruct_0_14,
#line 1072 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_HowToConstruct_15)
#line 1072 "unify_gen.m"
{
#line 1077 "unify_gen.m"
  {
#line 1077 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;

#line 1077 "unify_gen.m"
    if ((ll_backend__unify_gen__STATE_VARIABLE_HowToConstruct_0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1079 "unify_gen.m"
      *ll_backend__unify_gen__STATE_VARIABLE_HowToConstruct_15 = ll_backend__unify_gen__STATE_VARIABLE_HowToConstruct_0_14;
#line 1077 "unify_gen.m"
    else
#line 1077 "unify_gen.m"
      if ((ll_backend__unify_gen__STATE_VARIABLE_HowToConstruct_0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1077 "unify_gen.m"
        *ll_backend__unify_gen__STATE_VARIABLE_HowToConstruct_15 = ll_backend__unify_gen__STATE_VARIABLE_HowToConstruct_0_14;
#line 1077 "unify_gen.m"
      else
#line 1077 "unify_gen.m"
        if (((MR_tag((MR_Word) ll_backend__unify_gen__STATE_VARIABLE_HowToConstruct_0_14)) == (MR_mktag((MR_Integer) 2))))
#line 1081 "unify_gen.m"
          *ll_backend__unify_gen__STATE_VARIABLE_HowToConstruct_15 = ll_backend__unify_gen__STATE_VARIABLE_HowToConstruct_0_14;
#line 1077 "unify_gen.m"
        else
#line 1083 "unify_gen.m"
          {
#line 1083 "unify_gen.m"
            MR_Word ll_backend__unify_gen__TypeCtorInfo_18_18 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0;
#line 1083 "unify_gen.m"
            MR_Word ll_backend__unify_gen__CellToReuse0_7 = (MR_Word) MR_body(((MR_Word) ll_backend__unify_gen__STATE_VARIABLE_HowToConstruct_0_14), (MR_Integer) 1);
#line 1083 "unify_gen.m"
            MR_Word ll_backend__unify_gen__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__CellToReuse0_7, (MR_Integer) 0)));
#line 1083 "unify_gen.m"
            MR_Word ll_backend__unify_gen__ConsIds_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__CellToReuse0_7, (MR_Integer) 1)));
#line 1083 "unify_gen.m"
            MR_Word ll_backend__unify_gen__NeedsUpdates0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__CellToReuse0_7, (MR_Integer) 2)));
#line 1083 "unify_gen.m"
            MR_Word ll_backend__unify_gen__NeedsUpdates1_11;
#line 1083 "unify_gen.m"
            MR_Word ll_backend__unify_gen__NeedsUpdates_12;
#line 1083 "unify_gen.m"
            MR_Word ll_backend__unify_gen__CellToReuse_13;

#line 1087 "unify_gen.m"
            {
#line 1087 "unify_gen.m"
              backend_libs__arg_pack__group_same_word_elements_3_p_0(ll_backend__unify_gen__TypeCtorInfo_18_18, ll_backend__unify_gen__ArgWidths_4, ll_backend__unify_gen__NeedsUpdates0_10, &ll_backend__unify_gen__NeedsUpdates1_11);
            }
#line 1088 "unify_gen.m"
            {
#line 1088 "unify_gen.m"
              ll_backend__unify_gen__NeedsUpdates_12 = mercury__list__map_2_f_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[5], ll_backend__unify_gen__TypeCtorInfo_18_18, (MR_Word) &ll_backend__unify_gen_scalar_common_2[6], ll_backend__unify_gen__NeedsUpdates1_11);
            }
#line 1089 "unify_gen.m"
            {
#line 1089 "unify_gen.m"
              ll_backend__unify_gen__CellToReuse_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1089 "unify_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__unify_gen__CellToReuse_13, 0) = ((MR_Box) (ll_backend__unify_gen__Var_8));
#line 1089 "unify_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__unify_gen__CellToReuse_13, 1) = ((MR_Box) (ll_backend__unify_gen__ConsIds_9));
#line 1089 "unify_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__unify_gen__CellToReuse_13, 2) = ((MR_Box) (ll_backend__unify_gen__NeedsUpdates_12));
#line 1089 "unify_gen.m"
            }
#line 1090 "unify_gen.m"
            *ll_backend__unify_gen__STATE_VARIABLE_HowToConstruct_15 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ll_backend__unify_gen__CellToReuse_13);
#line 1083 "unify_gen.m"
          }
#line 1077 "unify_gen.m"
  }
#line 1072 "unify_gen.m"
}

#line 1069 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__pack_cell_rvals_6_p_0_1(
#line 1069 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg,
#line 1069 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
#line 1069 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
#line 1069 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_3,
#line 1069 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_4,
#line 1069 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_5,
#line 1069 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_6,
#line 1069 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_7,
#line 1069 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_8)
#line 1069 "unify_gen.m"
{
#line 1069 "unify_gen.m"
  {
#line 1069 "unify_gen.m"
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;
#line 1069 "unify_gen.m"
    MR_Word ll_backend__unify_gen__conv2_FinalCellArg_12;
#line 1069 "unify_gen.m"
    MR_Word ll_backend__unify_gen__conv1_STATE_VARIABLE_Code_29;
#line 1069 "unify_gen.m"
    MR_Word ll_backend__unify_gen__conv0_STATE_VARIABLE_CI_31;

#line 1069 "unify_gen.m"
    {
#line 1069 "unify_gen.m"
      ll_backend__unify_gen__shift_combine_arg_8_p_0(((MR_Word) ll_backend__unify_gen__wrapper_arg_1), ((MR_Integer) ll_backend__unify_gen__wrapper_arg_2), ((MR_Word) ll_backend__unify_gen__wrapper_arg_3), &ll_backend__unify_gen__conv2_FinalCellArg_12, ((MR_Word) ll_backend__unify_gen__wrapper_arg_5), &ll_backend__unify_gen__conv1_STATE_VARIABLE_Code_29, ((MR_Word) ll_backend__unify_gen__wrapper_arg_7), &ll_backend__unify_gen__conv0_STATE_VARIABLE_CI_31);
    }
#line 1069 "unify_gen.m"
    *ll_backend__unify_gen__wrapper_arg_4 = ((MR_Box) (ll_backend__unify_gen__conv2_FinalCellArg_12));
#line 1069 "unify_gen.m"
    *ll_backend__unify_gen__wrapper_arg_6 = ((MR_Box) (ll_backend__unify_gen__conv1_STATE_VARIABLE_Code_29));
#line 1069 "unify_gen.m"
    *ll_backend__unify_gen__wrapper_arg_8 = ((MR_Box) (ll_backend__unify_gen__conv0_STATE_VARIABLE_CI_31));
#line 1069 "unify_gen.m"
  }
#line 1069 "unify_gen.m"
}

#line 1064 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__pack_cell_rvals_6_p_0(
#line 1064 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ArgWidths_7,
#line 1064 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CellArgs0_8,
#line 1064 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__CellArgs_9,
#line 1064 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_10,
#line 1064 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_12,
#line 1064 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_13)
#line 1064 "unify_gen.m"
{
#line 1068 "unify_gen.m"
  {
#line 1068 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 1068 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_15_15;
#line 1069 "unify_gen.m"
    MR_Box ll_backend__unify_gen__conv4_Code_10;
#line 1069 "unify_gen.m"
    MR_Box ll_backend__unify_gen__conv3_STATE_VARIABLE_CI_13;

#line 1069 "unify_gen.m"
    {
#line 1069 "unify_gen.m"
      ll_backend__unify_gen__V_15_15 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
    }
#line 1069 "unify_gen.m"
    {
#line 1069 "unify_gen.m"
      backend_libs__arg_pack__pack_args_8_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_cell_arg_0, (MR_Word) &ll_backend__unify_gen_scalar_common_1[4], (MR_Word) &ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_0, (MR_Word) &ll_backend__unify_gen_scalar_common_2[5], ll_backend__unify_gen__ArgWidths_7, ll_backend__unify_gen__CellArgs0_8, ll_backend__unify_gen__CellArgs_9, ((MR_Box) (ll_backend__unify_gen__V_15_15)), &ll_backend__unify_gen__conv4_Code_10, ((MR_Box) (ll_backend__unify_gen__STATE_VARIABLE_CI_0_12)), &ll_backend__unify_gen__conv3_STATE_VARIABLE_CI_13);
    }
#line 1069 "unify_gen.m"
    *ll_backend__unify_gen__Code_10 = ((MR_Word) ll_backend__unify_gen__conv4_Code_10);
#line 1069 "unify_gen.m"
    *ll_backend__unify_gen__STATE_VARIABLE_CI_13 = ((MR_Word) ll_backend__unify_gen__conv3_STATE_VARIABLE_CI_13);
#line 1068 "unify_gen.m"
  }
#line 1064 "unify_gen.m"
}

#line 1051 "unify_gen.m"
static MR_Word MR_CALL 
ll_backend__unify_gen__initial_may_use_atomic_1_f_0(
#line 1051 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ModuleInfo_3)
#line 1051 "unify_gen.m"
{
#line 1053 "unify_gen.m"
  {
#line 1053 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 1053 "unify_gen.m"
    MR_Word ll_backend__unify_gen__InitMayUseAtomic_4;
#line 1053 "unify_gen.m"
    MR_Word ll_backend__unify_gen__Globals_5;
#line 1053 "unify_gen.m"
    MR_Word ll_backend__unify_gen__UseAtomicCells_6;

#line 1054 "unify_gen.m"
    {
#line 1054 "unify_gen.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__unify_gen__ModuleInfo_3, &ll_backend__unify_gen__Globals_5);
    }
#line 1055 "unify_gen.m"
    {
#line 1055 "unify_gen.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__unify_gen__Globals_5, (MR_Integer) 450, &ll_backend__unify_gen__UseAtomicCells_6);
    }
#line 1059 "unify_gen.m"
    if ((ll_backend__unify_gen__UseAtomicCells_6 == (MR_Integer) 0))
#line 1058 "unify_gen.m"
      ll_backend__unify_gen__InitMayUseAtomic_4 = (MR_Integer) 1;
#line 1059 "unify_gen.m"
    else
#line 1061 "unify_gen.m"
      ll_backend__unify_gen__InitMayUseAtomic_4 = (MR_Integer) 0;
#line 1053 "unify_gen.m"
    return ll_backend__unify_gen__InitMayUseAtomic_4;
#line 1053 "unify_gen.m"
  }
#line 1051 "unify_gen.m"
}

#line 1001 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__generate_cons_args_2_10_p_0(
#line 1001 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__1_1,
#line 1001 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_2,
#line 1001 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__3_3,
#line 1001 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__4_4,
#line 1001 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__HeadVar__5_5,
#line 1001 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__6_6,
#line 1001 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__7_7,
#line 1001 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__HeadVar__8_8,
#line 1001 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_0_9,
#line 1001 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_10)
#line 1001 "unify_gen.m"
{
#line 1006 "unify_gen.m"
  {
#line 1006 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;

#line 1006 "unify_gen.m"
    if ((ll_backend__unify_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1006 "unify_gen.m"
      {
#line 1006 "unify_gen.m"
        ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1006 "unify_gen.m"
        if (ll_backend__unify_gen__succeeded)
#line 1006 "unify_gen.m"
          {
#line 1006 "unify_gen.m"
            ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1006 "unify_gen.m"
            if (ll_backend__unify_gen__succeeded)
#line 1006 "unify_gen.m"
              {
#line 1006 "unify_gen.m"
                ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1006 "unify_gen.m"
                if (ll_backend__unify_gen__succeeded)
#line 1006 "unify_gen.m"
                  {
#line 1006 "unify_gen.m"
                    *ll_backend__unify_gen__HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1006 "unify_gen.m"
                    *ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_10 = ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_0_9;
#line 1006 "unify_gen.m"
                    ll_backend__unify_gen__succeeded = MR_TRUE;
#line 1006 "unify_gen.m"
                  }
#line 1006 "unify_gen.m"
              }
#line 1006 "unify_gen.m"
          }
#line 1006 "unify_gen.m"
      }
#line 1006 "unify_gen.m"
    else
#line 1010 "unify_gen.m"
      {
#line 1010 "unify_gen.m"
        MR_Word ll_backend__unify_gen__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 1010 "unify_gen.m"
        MR_Word ll_backend__unify_gen__Vars_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 1010 "unify_gen.m"
        MR_Word ll_backend__unify_gen__Type_19;
#line 1010 "unify_gen.m"
        MR_Word ll_backend__unify_gen__Types_20;
#line 1010 "unify_gen.m"
        MR_Word ll_backend__unify_gen__UniMode_21;
#line 1010 "unify_gen.m"
        MR_Word ll_backend__unify_gen__UniModes_22;
#line 1010 "unify_gen.m"
        MR_Word ll_backend__unify_gen__Width_23;
#line 1010 "unify_gen.m"
        MR_Word ll_backend__unify_gen__Widths_24;
#line 1010 "unify_gen.m"
        MR_Word ll_backend__unify_gen__CellArg_28;
#line 1010 "unify_gen.m"
        MR_Word ll_backend__unify_gen__CellArgs_29;
#line 1010 "unify_gen.m"
        MR_Word ll_backend__unify_gen__ModuleInfo_31;
#line 1010 "unify_gen.m"
        MR_Word ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_45_45;
#line 1026 "unify_gen.m"
        MR_Word ll_backend__unify_gen__STATE_VARIABLE_TakeAddr_46_46;
#line 1013 "unify_gen.m"
        MR_Integer ll_backend__unify_gen__V_66_66;

#line 1010 "unify_gen.m"
        ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1010 "unify_gen.m"
        if (ll_backend__unify_gen__succeeded)
#line 1010 "unify_gen.m"
          {
#line 1010 "unify_gen.m"
            ll_backend__unify_gen__Type_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 1010 "unify_gen.m"
            ll_backend__unify_gen__Types_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 1010 "unify_gen.m"
            ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 1010 "unify_gen.m"
            if (ll_backend__unify_gen__succeeded)
#line 1010 "unify_gen.m"
              {
#line 1010 "unify_gen.m"
                ll_backend__unify_gen__UniMode_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__3_3, (MR_Integer) 0)));
#line 1010 "unify_gen.m"
                ll_backend__unify_gen__UniModes_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__3_3, (MR_Integer) 1)));
#line 1010 "unify_gen.m"
                ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
#line 1010 "unify_gen.m"
                if (ll_backend__unify_gen__succeeded)
#line 1010 "unify_gen.m"
                  {
#line 1010 "unify_gen.m"
                    ll_backend__unify_gen__Width_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__4_4, (MR_Integer) 0)));
#line 1010 "unify_gen.m"
                    ll_backend__unify_gen__Widths_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__4_4, (MR_Integer) 1)));
#line 1011 "unify_gen.m"
                    {
#line 1011 "unify_gen.m"
                      ll_backend__code_info__get_module_info_2_p_0(ll_backend__unify_gen__HeadVar__7_7, &ll_backend__unify_gen__ModuleInfo_31);
                    }
#line 1012 "unify_gen.m"
                    {
#line 1012 "unify_gen.m"
                      check_hlds__type_util__update_type_may_use_atomic_alloc_4_p_0(ll_backend__unify_gen__ModuleInfo_31, ll_backend__unify_gen__Type_19, ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_0_9, &ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_45_45);
                    }
#line 1013 "unify_gen.m"
                    ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__HeadVar__6_6)) == (MR_mktag((MR_Integer) 1)));
#line 1013 "unify_gen.m"
                    if (ll_backend__unify_gen__succeeded)
#line 1013 "unify_gen.m"
                      {
#line 1013 "unify_gen.m"
                        ll_backend__unify_gen__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__6_6, (MR_Integer) 0)));
#line 1013 "unify_gen.m"
                        ll_backend__unify_gen__STATE_VARIABLE_TakeAddr_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__6_6, (MR_Integer) 1)));
#line 1013 "unify_gen.m"
                        ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__HeadVar__5_5 == ll_backend__unify_gen__V_66_66);
#line 1013 "unify_gen.m"
                      }
#line 1026 "unify_gen.m"
                    if (ll_backend__unify_gen__succeeded)
#line 1014 "unify_gen.m"
                      {
#line 1014 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__LCMCNull_32;
#line 1014 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__MaybeNull_33;
#line 1014 "unify_gen.m"
                        MR_Integer ll_backend__unify_gen__V_51_51;

#line 1014 "unify_gen.m"
                        {
#line 1014 "unify_gen.m"
                          ll_backend__code_info__get_lcmc_null_2_p_0(ll_backend__unify_gen__HeadVar__7_7, &ll_backend__unify_gen__LCMCNull_32);
                        }
#line 1018 "unify_gen.m"
                        if ((ll_backend__unify_gen__LCMCNull_32 == (MR_Integer) 0))
#line 1017 "unify_gen.m"
                          ll_backend__unify_gen__MaybeNull_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1018 "unify_gen.m"
                        else
#line 1019 "unify_gen.m"
                          {
#line 1020 "unify_gen.m"
                            ll_backend__unify_gen__MaybeNull_33 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__unify_gen_scalar_common_6[2]);
#line 1019 "unify_gen.m"
                          }
#line 1024 "unify_gen.m"
                        ll_backend__unify_gen__V_51_51 = (ll_backend__unify_gen__HeadVar__5_5 + (MR_Integer) 1);
#line 1022 "unify_gen.m"
                        {
#line 1022 "unify_gen.m"
                          ll_backend__unify_gen__CellArg_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1022 "unify_gen.m"
                          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__CellArg_28, 0) = ((MR_Box) (ll_backend__unify_gen__Var_17));
#line 1022 "unify_gen.m"
                          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__CellArg_28, 1) = ((MR_Box) (ll_backend__unify_gen__MaybeNull_33));
#line 1022 "unify_gen.m"
                        }
#line 1024 "unify_gen.m"
                        {
#line 1024 "unify_gen.m"
                          ll_backend__unify_gen__succeeded = ll_backend__unify_gen__generate_cons_args_2_10_p_0(ll_backend__unify_gen__Vars_18, ll_backend__unify_gen__Types_20, ll_backend__unify_gen__UniModes_22, ll_backend__unify_gen__Widths_24, ll_backend__unify_gen__V_51_51, ll_backend__unify_gen__STATE_VARIABLE_TakeAddr_46_46, ll_backend__unify_gen__HeadVar__7_7, &ll_backend__unify_gen__CellArgs_29, (MR_Integer) 1, ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_10);
                        }
#line 1014 "unify_gen.m"
                      }
#line 1026 "unify_gen.m"
                    else
#line 1027 "unify_gen.m"
                      {
#line 1027 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__RI_35;
#line 1027 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__RF_37;
#line 1027 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__ArgMode_38;
#line 1027 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__UniMode_21, (MR_Integer) 0)));
#line 1027 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__UniMode_21, (MR_Integer) 1)));
#line 1027 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__V_56_56;
#line 1027 "unify_gen.m"
                        MR_Integer ll_backend__unify_gen__V_60_60;
#line 1027 "unify_gen.m"
                        MR_Word ll_backend__unify_gen___LI_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_54_54, (MR_Integer) 0)));
#line 1027 "unify_gen.m"
                        MR_Word ll_backend__unify_gen___LF_36;

#line 1027 "unify_gen.m"
                        ll_backend__unify_gen__RI_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_54_54, (MR_Integer) 1)));
#line 1027 "unify_gen.m"
                        ll_backend__unify_gen___LF_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_55_55, (MR_Integer) 0)));
#line 1027 "unify_gen.m"
                        ll_backend__unify_gen__RF_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_55_55, (MR_Integer) 1)));
#line 1028 "unify_gen.m"
                        {
#line 1028 "unify_gen.m"
                          ll_backend__unify_gen__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1028 "unify_gen.m"
                          MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_56_56, 0) = ((MR_Box) (ll_backend__unify_gen__RI_35));
#line 1028 "unify_gen.m"
                          MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_56_56, 1) = ((MR_Box) (ll_backend__unify_gen__RF_37));
#line 1028 "unify_gen.m"
                        }
#line 1028 "unify_gen.m"
                        {
#line 1028 "unify_gen.m"
                          check_hlds__mode_util__mode_to_arg_mode_4_p_0(ll_backend__unify_gen__ModuleInfo_31, ll_backend__unify_gen__V_56_56, ll_backend__unify_gen__Type_19, &ll_backend__unify_gen__ArgMode_38);
                        }
#line 1041 "unify_gen.m"
                        if ((ll_backend__unify_gen__ArgMode_38 == (MR_Integer) 0))
#line 1037 "unify_gen.m"
                          if ((ll_backend__unify_gen__Width_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1038 "unify_gen.m"
                            {
#line 1038 "unify_gen.m"
                              MR_Word ll_backend__unify_gen__V_57_57;

#line 1039 "unify_gen.m"
                              {
#line 1039 "unify_gen.m"
                                ll_backend__unify_gen__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1039 "unify_gen.m"
                                MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_57_57, 0) = ((MR_Box) (ll_backend__unify_gen__Var_17));
#line 1039 "unify_gen.m"
                              }
#line 1039 "unify_gen.m"
                              {
#line 1039 "unify_gen.m"
                                ll_backend__unify_gen__CellArg_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1039 "unify_gen.m"
                                MR_hl_field(MR_mktag(2), ll_backend__unify_gen__CellArg_28, 0) = ((MR_Box) (ll_backend__unify_gen__V_57_57));
#line 1039 "unify_gen.m"
                              }
#line 1038 "unify_gen.m"
                            }
#line 1037 "unify_gen.m"
                          else
#line 1035 "unify_gen.m"
                            {
#line 1035 "unify_gen.m"
                              MR_Word ll_backend__unify_gen__V_58_58;

#line 1036 "unify_gen.m"
                              {
#line 1036 "unify_gen.m"
                                ll_backend__unify_gen__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1036 "unify_gen.m"
                                MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_58_58, 0) = ((MR_Box) (ll_backend__unify_gen__Var_17));
#line 1036 "unify_gen.m"
                              }
#line 1036 "unify_gen.m"
                              {
#line 1036 "unify_gen.m"
                                ll_backend__unify_gen__CellArg_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1036 "unify_gen.m"
                                MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArg_28, 0) = ((MR_Box) (ll_backend__unify_gen__V_58_58));
#line 1036 "unify_gen.m"
                                MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArg_28, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1036 "unify_gen.m"
                              }
#line 1035 "unify_gen.m"
                            }
#line 1041 "unify_gen.m"
                        else
#line 1045 "unify_gen.m"
                          ll_backend__unify_gen__CellArg_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1047 "unify_gen.m"
                        ll_backend__unify_gen__V_60_60 = (ll_backend__unify_gen__HeadVar__5_5 + (MR_Integer) 1);
#line 1047 "unify_gen.m"
                        {
#line 1047 "unify_gen.m"
                          ll_backend__unify_gen__succeeded = ll_backend__unify_gen__generate_cons_args_2_10_p_0(ll_backend__unify_gen__Vars_18, ll_backend__unify_gen__Types_20, ll_backend__unify_gen__UniModes_22, ll_backend__unify_gen__Widths_24, ll_backend__unify_gen__V_60_60, ll_backend__unify_gen__HeadVar__6_6, ll_backend__unify_gen__HeadVar__7_7, &ll_backend__unify_gen__CellArgs_29, ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_45_45, ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_10);
                        }
#line 1027 "unify_gen.m"
                      }
#line 1010 "unify_gen.m"
                    if (ll_backend__unify_gen__succeeded)
#line 1010 "unify_gen.m"
                      {
#line 1010 "unify_gen.m"
                        {
#line 1010 "unify_gen.m"
                          MR_Word base;
#line 1010 "unify_gen.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1010 "unify_gen.m"
                          *ll_backend__unify_gen__HeadVar__8_8 = base;
#line 1010 "unify_gen.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__unify_gen__CellArg_28));
#line 1010 "unify_gen.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__unify_gen__CellArgs_29));
#line 1010 "unify_gen.m"
                        }
#line 1010 "unify_gen.m"
                        ll_backend__unify_gen__succeeded = MR_TRUE;
#line 1010 "unify_gen.m"
                      }
#line 1010 "unify_gen.m"
                  }
#line 1010 "unify_gen.m"
              }
#line 1010 "unify_gen.m"
          }
#line 1010 "unify_gen.m"
      }
#line 1006 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 1006 "unify_gen.m"
  }
#line 1001 "unify_gen.m"
}

#line 978 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_cons_args_8_p_0(
#line 978 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Vars_9,
#line 978 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Types_10,
#line 978 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Modes_11,
#line 978 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Widths_12,
#line 978 "unify_gen.m"
  MR_Word ll_backend__unify_gen__TakeAddr_13,
#line 978 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CI_14,
#line 978 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_Args_19,
#line 978 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_20)
#line 978 "unify_gen.m"
{
#line 983 "unify_gen.m"
  {
#line 983 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 983 "unify_gen.m"
    MR_Word ll_backend__unify_gen__ModuleInfo_17;
#line 983 "unify_gen.m"
    MR_Word ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_21_21;
#line 983 "unify_gen.m"
    MR_Word ll_backend__unify_gen__Globals_31;
#line 983 "unify_gen.m"
    MR_Word ll_backend__unify_gen__UseAtomicCells_32;
#line 992 "unify_gen.m"
    MR_Word ll_backend__unify_gen__STATE_VARIABLE_Args_22_22;
#line 992 "unify_gen.m"
    MR_Word ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_23_23;

#line 984 "unify_gen.m"
    {
#line 984 "unify_gen.m"
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__unify_gen__CI_14, &ll_backend__unify_gen__ModuleInfo_17);
    }
#line 1054 "unify_gen.m"
    {
#line 1054 "unify_gen.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__unify_gen__ModuleInfo_17, &ll_backend__unify_gen__Globals_31);
    }
#line 1055 "unify_gen.m"
    {
#line 1055 "unify_gen.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__unify_gen__Globals_31, (MR_Integer) 450, &ll_backend__unify_gen__UseAtomicCells_32);
    }
#line 1059 "unify_gen.m"
    if ((ll_backend__unify_gen__UseAtomicCells_32 == (MR_Integer) 0))
#line 1058 "unify_gen.m"
      ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_21_21 = (MR_Integer) 1;
#line 1059 "unify_gen.m"
    else
#line 1061 "unify_gen.m"
      ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_21_21 = (MR_Integer) 0;
#line 988 "unify_gen.m"
    {
#line 988 "unify_gen.m"
      ll_backend__unify_gen__succeeded = ll_backend__unify_gen__generate_cons_args_2_10_p_0(ll_backend__unify_gen__Vars_9, ll_backend__unify_gen__Types_10, ll_backend__unify_gen__Modes_11, ll_backend__unify_gen__Widths_12, (MR_Integer) 1, ll_backend__unify_gen__TakeAddr_13, ll_backend__unify_gen__CI_14, &ll_backend__unify_gen__STATE_VARIABLE_Args_22_22, ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_21_21, &ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_23_23);
    }
#line 992 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 991 "unify_gen.m"
      {
#line 991 "unify_gen.m"
        *ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_20 = ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_23_23;
#line 991 "unify_gen.m"
        *ll_backend__unify_gen__STATE_VARIABLE_Args_19 = ll_backend__unify_gen__STATE_VARIABLE_Args_22_22;
#line 991 "unify_gen.m"
      }
#line 992 "unify_gen.m"
    else
#line 993 "unify_gen.m"
      {
#line 993 "unify_gen.m"
        {
#line 993 "unify_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_cons_args\'/8", (MR_String) "length mismatch");
#line 993 "unify_gen.m"
          return;
        }
#line 993 "unify_gen.m"
      }
#line 983 "unify_gen.m"
  }
#line 978 "unify_gen.m"
}

#line 936 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_pred_args_8_p_0(
#line 936 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CI_1,
#line 936 "unify_gen.m"
  MR_Word ll_backend__unify_gen__VarTypes_2,
#line 936 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__3_3,
#line 936 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__4_4,
#line 936 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__HeadVar__5_5,
#line 936 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__HeadVar__6_6,
#line 936 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_0_7,
#line 936 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_8)
#line 936 "unify_gen.m"
{
#line 940 "unify_gen.m"
  {
#line 940 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;

#line 940 "unify_gen.m"
    if ((ll_backend__unify_gen__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 940 "unify_gen.m"
      {
#line 940 "unify_gen.m"
        *ll_backend__unify_gen__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 940 "unify_gen.m"
        *ll_backend__unify_gen__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 940 "unify_gen.m"
        *ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_8 = ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_0_7;
#line 940 "unify_gen.m"
      }
#line 940 "unify_gen.m"
    else
#line 940 "unify_gen.m"
      {
#line 940 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__3_3, (MR_Integer) 1)));
#line 940 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__3_3, (MR_Integer) 0)));

#line 940 "unify_gen.m"
        if ((ll_backend__unify_gen__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 941 "unify_gen.m"
          {
#line 942 "unify_gen.m"
            {
#line 942 "unify_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_pred_args\'/8", (MR_String) "insufficient args");
#line 942 "unify_gen.m"
              return;
            }
#line 941 "unify_gen.m"
          }
#line 940 "unify_gen.m"
        else
#line 944 "unify_gen.m"
          {
#line 944 "unify_gen.m"
            MR_Word ll_backend__unify_gen__ArgInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__4_4, (MR_Integer) 0)));
#line 944 "unify_gen.m"
            MR_Word ll_backend__unify_gen__ArgInfos_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__4_4, (MR_Integer) 1)));
#line 944 "unify_gen.m"
            MR_Word ll_backend__unify_gen__RegType_36;
#line 944 "unify_gen.m"
            MR_Word ll_backend__unify_gen__ArgMode_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ArgInfo_31, (MR_Integer) 1)));
#line 944 "unify_gen.m"
            MR_Word ll_backend__unify_gen__CellArg_41;
#line 944 "unify_gen.m"
            MR_Word ll_backend__unify_gen__Type_42;
#line 944 "unify_gen.m"
            MR_Word ll_backend__unify_gen__ModuleInfo_43;
#line 944 "unify_gen.m"
            MR_Word ll_backend__unify_gen__ArgsR0_44;
#line 944 "unify_gen.m"
            MR_Word ll_backend__unify_gen__ArgsF0_45;
#line 944 "unify_gen.m"
            MR_Word ll_backend__unify_gen__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ArgInfo_31, (MR_Integer) 0)));
#line 944 "unify_gen.m"
            MR_Word ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_52_52;
#line 945 "unify_gen.m"
            MR_Integer ll_backend__unify_gen__V_37_37;

#line 945 "unify_gen.m"
            ll_backend__unify_gen__RegType_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_48_48, (MR_Integer) 0)));
#line 945 "unify_gen.m"
            ll_backend__unify_gen__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_48_48, (MR_Integer) 1)));
#line 957 "unify_gen.m"
            if ((ll_backend__unify_gen__ArgMode_38 == (MR_Integer) 0))
#line 947 "unify_gen.m"
              {
#line 947 "unify_gen.m"
                MR_Word ll_backend__unify_gen__IsDummy_39;
#line 947 "unify_gen.m"
                MR_Word ll_backend__unify_gen__Rval_40;

#line 948 "unify_gen.m"
                {
#line 948 "unify_gen.m"
                  ll_backend__unify_gen__IsDummy_39 = ll_backend__code_info__variable_is_of_dummy_type_2_f_0(ll_backend__unify_gen__CI_1, ll_backend__unify_gen__V_55_55);
                }
#line 952 "unify_gen.m"
                if ((ll_backend__unify_gen__IsDummy_39 == (MR_Integer) 0))
#line 950 "unify_gen.m"
                  {
#line 951 "unify_gen.m"
                    ll_backend__unify_gen__Rval_40 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[8]);
#line 950 "unify_gen.m"
                  }
#line 952 "unify_gen.m"
                else
#line 953 "unify_gen.m"
                  {
#line 953 "unify_gen.m"
                    ll_backend__unify_gen__Rval_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 953 "unify_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Rval_40, 0) = ((MR_Box) (ll_backend__unify_gen__V_55_55));
#line 953 "unify_gen.m"
                  }
#line 956 "unify_gen.m"
                {
#line 956 "unify_gen.m"
                  ll_backend__unify_gen__CellArg_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 956 "unify_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArg_41, 0) = ((MR_Box) (ll_backend__unify_gen__Rval_40));
#line 956 "unify_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArg_41, 1) = ((MR_Box) ((MR_Integer) 0));
#line 956 "unify_gen.m"
                }
#line 947 "unify_gen.m"
              }
#line 957 "unify_gen.m"
            else
#line 960 "unify_gen.m"
              ll_backend__unify_gen__CellArg_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 963 "unify_gen.m"
            {
#line 963 "unify_gen.m"
              parse_tree__prog_data__lookup_var_type_3_p_0(ll_backend__unify_gen__VarTypes_2, ll_backend__unify_gen__V_55_55, &ll_backend__unify_gen__Type_42);
            }
#line 964 "unify_gen.m"
            {
#line 964 "unify_gen.m"
              ll_backend__code_info__get_module_info_2_p_0(ll_backend__unify_gen__CI_1, &ll_backend__unify_gen__ModuleInfo_43);
            }
#line 965 "unify_gen.m"
            {
#line 965 "unify_gen.m"
              check_hlds__type_util__update_type_may_use_atomic_alloc_4_p_0(ll_backend__unify_gen__ModuleInfo_43, ll_backend__unify_gen__Type_42, ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_0_7, &ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_52_52);
            }
#line 966 "unify_gen.m"
            {
#line 966 "unify_gen.m"
              ll_backend__unify_gen__generate_pred_args_8_p_0(ll_backend__unify_gen__CI_1, ll_backend__unify_gen__VarTypes_2, ll_backend__unify_gen__V_54_54, ll_backend__unify_gen__ArgInfos_32, &ll_backend__unify_gen__ArgsR0_44, &ll_backend__unify_gen__ArgsF0_45, ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_52_52, ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_8);
            }
#line 972 "unify_gen.m"
            if ((ll_backend__unify_gen__RegType_36 == (MR_Integer) 1))
#line 973 "unify_gen.m"
              {
#line 974 "unify_gen.m"
                *ll_backend__unify_gen__HeadVar__5_5 = ll_backend__unify_gen__ArgsR0_44;
#line 975 "unify_gen.m"
                {
#line 975 "unify_gen.m"
                  MR_Word base;
#line 975 "unify_gen.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 975 "unify_gen.m"
                  *ll_backend__unify_gen__HeadVar__6_6 = base;
#line 975 "unify_gen.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__unify_gen__CellArg_41));
#line 975 "unify_gen.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__unify_gen__ArgsF0_45));
#line 975 "unify_gen.m"
                }
#line 973 "unify_gen.m"
              }
#line 972 "unify_gen.m"
            else
#line 969 "unify_gen.m"
              {
#line 970 "unify_gen.m"
                {
#line 970 "unify_gen.m"
                  MR_Word base;
#line 970 "unify_gen.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 970 "unify_gen.m"
                  *ll_backend__unify_gen__HeadVar__5_5 = base;
#line 970 "unify_gen.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__unify_gen__CellArg_41));
#line 970 "unify_gen.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__unify_gen__ArgsR0_44));
#line 970 "unify_gen.m"
                }
#line 971 "unify_gen.m"
                *ll_backend__unify_gen__HeadVar__6_6 = ll_backend__unify_gen__ArgsF0_45;
#line 969 "unify_gen.m"
              }
#line 944 "unify_gen.m"
          }
#line 940 "unify_gen.m"
      }
#line 940 "unify_gen.m"
  }
#line 936 "unify_gen.m"
}

#line 905 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_extra_closure_args_6_p_0(
#line 905 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__1_1,
#line 905 "unify_gen.m"
  MR_Word ll_backend__unify_gen__LoopCounter_2,
#line 905 "unify_gen.m"
  MR_Word ll_backend__unify_gen__NewClosure_3,
#line 905 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__HeadVar__4_4,
#line 905 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_5,
#line 905 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_6)
#line 905 "unify_gen.m"
{
#line 908 "unify_gen.m"
  {
#line 908 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;

#line 908 "unify_gen.m"
    if ((ll_backend__unify_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 908 "unify_gen.m"
      {
#line 908 "unify_gen.m"
        {
#line 908 "unify_gen.m"
          *ll_backend__unify_gen__HeadVar__4_4 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 908 "unify_gen.m"
        *ll_backend__unify_gen__STATE_VARIABLE_CI_6 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_5;
#line 908 "unify_gen.m"
      }
#line 908 "unify_gen.m"
    else
#line 910 "unify_gen.m"
      {
#line 910 "unify_gen.m"
        MR_Word ll_backend__unify_gen__TypeCtorInfo_56_56;
#line 910 "unify_gen.m"
        MR_Word ll_backend__unify_gen__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 910 "unify_gen.m"
        MR_Word ll_backend__unify_gen__Vars_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 910 "unify_gen.m"
        MR_Word ll_backend__unify_gen__FieldLval_18;
#line 910 "unify_gen.m"
        MR_Word ll_backend__unify_gen__IsDummy_19;
#line 910 "unify_gen.m"
        MR_Word ll_backend__unify_gen__ProduceCode_20;
#line 910 "unify_gen.m"
        MR_Word ll_backend__unify_gen__AssignCode_21;
#line 910 "unify_gen.m"
        MR_Word ll_backend__unify_gen__IncrCode_23;
#line 910 "unify_gen.m"
        MR_Word ll_backend__unify_gen__VarsCode_24;
#line 910 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_29_29;
#line 910 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_30_30;
#line 910 "unify_gen.m"
        MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_31_31;
#line 910 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_41_41;
#line 910 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_42_42;
#line 910 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_43_43;
#line 910 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_51_51;
#line 910 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_52_52;

#line 911 "unify_gen.m"
        {
#line 911 "unify_gen.m"
          ll_backend__unify_gen__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 911 "unify_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_29_29, 0) = ((MR_Box) (ll_backend__unify_gen__NewClosure_3));
#line 911 "unify_gen.m"
        }
#line 911 "unify_gen.m"
        {
#line 911 "unify_gen.m"
          ll_backend__unify_gen__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 911 "unify_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_30_30, 0) = ((MR_Box) (ll_backend__unify_gen__LoopCounter_2));
#line 911 "unify_gen.m"
        }
#line 911 "unify_gen.m"
        {
#line 911 "unify_gen.m"
          ll_backend__unify_gen__FieldLval_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 911 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__FieldLval_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 911 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__FieldLval_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__unify_gen_scalar_common_6[0])));
#line 911 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__FieldLval_18, 2) = ((MR_Box) (ll_backend__unify_gen__V_29_29));
#line 911 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__FieldLval_18, 3) = ((MR_Box) (ll_backend__unify_gen__V_30_30));
#line 911 "unify_gen.m"
        }
#line 912 "unify_gen.m"
        {
#line 912 "unify_gen.m"
          ll_backend__unify_gen__IsDummy_19 = ll_backend__code_info__variable_is_of_dummy_type_2_f_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_5, ll_backend__unify_gen__Var_12);
        }
#line 920 "unify_gen.m"
        if ((ll_backend__unify_gen__IsDummy_19 == (MR_Integer) 0))
#line 914 "unify_gen.m"
          {
#line 914 "unify_gen.m"
            MR_Word ll_backend__unify_gen__TypeCtorInfo_54_54 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 914 "unify_gen.m"
            MR_Word ll_backend__unify_gen__V_35_35;
#line 914 "unify_gen.m"
            MR_Word ll_backend__unify_gen__V_36_36;

#line 915 "unify_gen.m"
            {
#line 915 "unify_gen.m"
              ll_backend__unify_gen__ProduceCode_20 = mercury__cord__empty_0_f_0(ll_backend__unify_gen__TypeCtorInfo_54_54);
            }
#line 917 "unify_gen.m"
            {
#line 917 "unify_gen.m"
              ll_backend__unify_gen__V_36_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 917 "unify_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_36_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 917 "unify_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_36_36, 1) = ((MR_Box) (ll_backend__unify_gen__FieldLval_18));
#line 917 "unify_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_36_36, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[8])));
#line 917 "unify_gen.m"
            }
#line 916 "unify_gen.m"
            {
#line 916 "unify_gen.m"
              ll_backend__unify_gen__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 916 "unify_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_35_35, 0) = ((MR_Box) (ll_backend__unify_gen__V_36_36));
#line 916 "unify_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_35_35, 1) = ((MR_Box) ((MR_String) "set new argument field (dummy type)"));
#line 916 "unify_gen.m"
            }
#line 916 "unify_gen.m"
            {
#line 916 "unify_gen.m"
              ll_backend__unify_gen__AssignCode_21 = mercury__cord__singleton_1_f_0(ll_backend__unify_gen__TypeCtorInfo_54_54, ((MR_Box) (ll_backend__unify_gen__V_35_35)));
            }
#line 917 "unify_gen.m"
            ll_backend__unify_gen__STATE_VARIABLE_CI_31_31 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_5;
#line 914 "unify_gen.m"
          }
#line 920 "unify_gen.m"
        else
#line 921 "unify_gen.m"
          {
#line 921 "unify_gen.m"
            MR_Word ll_backend__unify_gen__Value_22;
#line 921 "unify_gen.m"
            MR_Word ll_backend__unify_gen__V_32_32;
#line 921 "unify_gen.m"
            MR_Word ll_backend__unify_gen__V_33_33;

#line 922 "unify_gen.m"
            {
#line 922 "unify_gen.m"
              ll_backend__code_info__produce_variable_5_p_0(ll_backend__unify_gen__Var_12, &ll_backend__unify_gen__ProduceCode_20, &ll_backend__unify_gen__Value_22, ll_backend__unify_gen__STATE_VARIABLE_CI_0_5, &ll_backend__unify_gen__STATE_VARIABLE_CI_31_31);
            }
#line 924 "unify_gen.m"
            {
#line 924 "unify_gen.m"
              ll_backend__unify_gen__V_33_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 924 "unify_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_33_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 924 "unify_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_33_33, 1) = ((MR_Box) (ll_backend__unify_gen__FieldLval_18));
#line 924 "unify_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_33_33, 2) = ((MR_Box) (ll_backend__unify_gen__Value_22));
#line 924 "unify_gen.m"
            }
#line 923 "unify_gen.m"
            {
#line 923 "unify_gen.m"
              ll_backend__unify_gen__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 923 "unify_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_32_32, 0) = ((MR_Box) (ll_backend__unify_gen__V_33_33));
#line 923 "unify_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_32_32, 1) = ((MR_Box) ((MR_String) "set new argument field"));
#line 923 "unify_gen.m"
            }
#line 923 "unify_gen.m"
            {
#line 923 "unify_gen.m"
              ll_backend__unify_gen__AssignCode_21 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__unify_gen__V_32_32)));
            }
#line 921 "unify_gen.m"
          }
#line 14311 "ll_backend.unify_gen.c"
        ll_backend__unify_gen__TypeCtorInfo_56_56 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 929 "unify_gen.m"
        {
#line 929 "unify_gen.m"
          ll_backend__unify_gen__V_43_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 929 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_43_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 929 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 929 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_43_43, 2) = ((MR_Box) (ll_backend__unify_gen__V_30_30));
#line 929 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_43_43, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[9])));
#line 929 "unify_gen.m"
        }
#line 929 "unify_gen.m"
        {
#line 929 "unify_gen.m"
          ll_backend__unify_gen__V_42_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 929 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_42_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 929 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_42_42, 1) = ((MR_Box) (ll_backend__unify_gen__LoopCounter_2));
#line 929 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_42_42, 2) = ((MR_Box) (ll_backend__unify_gen__V_43_43));
#line 929 "unify_gen.m"
        }
#line 928 "unify_gen.m"
        {
#line 928 "unify_gen.m"
          ll_backend__unify_gen__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 928 "unify_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_41_41, 0) = ((MR_Box) (ll_backend__unify_gen__V_42_42));
#line 928 "unify_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_41_41, 1) = ((MR_Box) ((MR_String) "increment argument counter"));
#line 928 "unify_gen.m"
        }
#line 928 "unify_gen.m"
        {
#line 928 "unify_gen.m"
          ll_backend__unify_gen__IncrCode_23 = mercury__cord__singleton_1_f_0(ll_backend__unify_gen__TypeCtorInfo_56_56, ((MR_Box) (ll_backend__unify_gen__V_41_41)));
        }
#line 933 "unify_gen.m"
        {
#line 933 "unify_gen.m"
          ll_backend__unify_gen__generate_extra_closure_args_6_p_0(ll_backend__unify_gen__Vars_13, ll_backend__unify_gen__LoopCounter_2, ll_backend__unify_gen__NewClosure_3, &ll_backend__unify_gen__VarsCode_24, ll_backend__unify_gen__STATE_VARIABLE_CI_31_31, ll_backend__unify_gen__STATE_VARIABLE_CI_6);
        }
#line 934 "unify_gen.m"
        {
#line 934 "unify_gen.m"
          ll_backend__unify_gen__V_52_52 = mercury__cord__f_43_43_2_f_0(ll_backend__unify_gen__TypeCtorInfo_56_56, ll_backend__unify_gen__IncrCode_23, ll_backend__unify_gen__VarsCode_24);
        }
#line 934 "unify_gen.m"
        {
#line 934 "unify_gen.m"
          ll_backend__unify_gen__V_51_51 = mercury__cord__f_43_43_2_f_0(ll_backend__unify_gen__TypeCtorInfo_56_56, ll_backend__unify_gen__AssignCode_21, ll_backend__unify_gen__V_52_52);
        }
#line 934 "unify_gen.m"
        {
#line 934 "unify_gen.m"
          *ll_backend__unify_gen__HeadVar__4_4 = mercury__cord__f_43_43_2_f_0(ll_backend__unify_gen__TypeCtorInfo_56_56, ll_backend__unify_gen__ProduceCode_20, ll_backend__unify_gen__V_51_51);
        }
#line 910 "unify_gen.m"
      }
#line 908 "unify_gen.m"
  }
#line 905 "unify_gen.m"
}

#line 623 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_12_p_0_9(
#line 623 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg)
#line 623 "unify_gen.m"
{
#line 623 "unify_gen.m"
  {
#line 623 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 623 "unify_gen.m"
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;

#line 623 "unify_gen.m"
    {
#line 623 "unify_gen.m"
      return ll_backend__unify_gen__succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__623__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 4))));
    }
#line 623 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 623 "unify_gen.m"
  }
#line 623 "unify_gen.m"
}

#line 649 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_12_p_0_8(
#line 649 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg)
#line 649 "unify_gen.m"
{
#line 649 "unify_gen.m"
  {
#line 649 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 649 "unify_gen.m"
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;

#line 649 "unify_gen.m"
    {
#line 649 "unify_gen.m"
      return ll_backend__unify_gen__succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__649__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 4))));
    }
#line 649 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 649 "unify_gen.m"
  }
#line 649 "unify_gen.m"
}

#line 674 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_12_p_0_7(
#line 674 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg)
#line 674 "unify_gen.m"
{
#line 674 "unify_gen.m"
  {
#line 674 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 674 "unify_gen.m"
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;

#line 674 "unify_gen.m"
    {
#line 674 "unify_gen.m"
      return ll_backend__unify_gen__succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__674__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 4))));
    }
#line 674 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 674 "unify_gen.m"
  }
#line 674 "unify_gen.m"
}

#line 682 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_12_p_0_6(
#line 682 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg)
#line 682 "unify_gen.m"
{
#line 682 "unify_gen.m"
  {
#line 682 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 682 "unify_gen.m"
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;

#line 682 "unify_gen.m"
    {
#line 682 "unify_gen.m"
      return ll_backend__unify_gen__succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__682__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 4))));
    }
#line 682 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 682 "unify_gen.m"
  }
#line 682 "unify_gen.m"
}

#line 542 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_12_p_0_5(
#line 542 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg)
#line 542 "unify_gen.m"
{
#line 542 "unify_gen.m"
  {
#line 542 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 542 "unify_gen.m"
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;

#line 542 "unify_gen.m"
    {
#line 542 "unify_gen.m"
      return ll_backend__unify_gen__succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__542__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 4))));
    }
#line 542 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 542 "unify_gen.m"
  }
#line 542 "unify_gen.m"
}

#line 658 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_12_p_0_4(
#line 658 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg)
#line 658 "unify_gen.m"
{
#line 658 "unify_gen.m"
  {
#line 658 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 658 "unify_gen.m"
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;

#line 658 "unify_gen.m"
    {
#line 658 "unify_gen.m"
      return ll_backend__unify_gen__succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__658__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 4))));
    }
#line 658 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 658 "unify_gen.m"
  }
#line 658 "unify_gen.m"
}

#line 697 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_12_p_0_3(
#line 697 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg)
#line 697 "unify_gen.m"
{
#line 697 "unify_gen.m"
  {
#line 697 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 697 "unify_gen.m"
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;

#line 697 "unify_gen.m"
    {
#line 697 "unify_gen.m"
      return ll_backend__unify_gen__succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__697__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 4))));
    }
#line 697 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 697 "unify_gen.m"
  }
#line 697 "unify_gen.m"
}

#line 695 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_12_p_0_2(
#line 695 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg)
#line 695 "unify_gen.m"
{
#line 695 "unify_gen.m"
  {
#line 695 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 695 "unify_gen.m"
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;

#line 695 "unify_gen.m"
    {
#line 695 "unify_gen.m"
      return ll_backend__unify_gen__succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__695__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 4))));
    }
#line 695 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 695 "unify_gen.m"
  }
#line 695 "unify_gen.m"
}

#line 632 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_12_p_0_1(
#line 632 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg)
#line 632 "unify_gen.m"
{
#line 632 "unify_gen.m"
  {
#line 632 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 632 "unify_gen.m"
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;

#line 632 "unify_gen.m"
    {
#line 632 "unify_gen.m"
      return ll_backend__unify_gen__succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__632__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 4))));
    }
#line 632 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 632 "unify_gen.m"
  }
#line 632 "unify_gen.m"
}

#line 524 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_construction_2_12_p_0(
#line 524 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConsTag_13,
#line 524 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Var_14,
#line 524 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Args_15,
#line 524 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Modes_16,
#line 524 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ArgWidths_17,
#line 524 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HowToConstruct0_18,
#line 524 "unify_gen.m"
  MR_Word ll_backend__unify_gen__TakeAddr_19,
#line 524 "unify_gen.m"
  MR_Word ll_backend__unify_gen__MaybeSize_20,
#line 524 "unify_gen.m"
  MR_Word ll_backend__unify_gen__GoalInfo_21,
#line 524 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_22,
#line 524 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_75,
#line 524 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_76)
#line 524 "unify_gen.m"
{
#line 533 "unify_gen.m"
  while (MR_TRUE)
#line 533 "unify_gen.m"
    {
#line 533 "unify_gen.m"
      /* tailcall optimized into a loop */
#line 533 "unify_gen.m"
      {
#line 533 "unify_gen.m"
        MR_bool ll_backend__unify_gen__succeeded;

#line 533 "unify_gen.m"
        if ((ll_backend__unify_gen__ConsTag_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 565 "unify_gen.m"
          {
#line 565 "unify_gen.m"
            MR_Word ll_backend__unify_gen__Arg_30;
#line 565 "unify_gen.m"
            MR_Word ll_backend__unify_gen__Mode_31;
#line 554 "unify_gen.m"
            MR_Word ll_backend__unify_gen__V_173_173;
#line 554 "unify_gen.m"
            MR_Word ll_backend__unify_gen__V_174_174;

#line 554 "unify_gen.m"
            ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__Args_15)) == (MR_mktag((MR_Integer) 1)));
#line 554 "unify_gen.m"
            if (ll_backend__unify_gen__succeeded)
#line 554 "unify_gen.m"
              {
#line 554 "unify_gen.m"
                ll_backend__unify_gen__Arg_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Args_15, (MR_Integer) 0)));
#line 554 "unify_gen.m"
                ll_backend__unify_gen__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Args_15, (MR_Integer) 1)));
#line 554 "unify_gen.m"
                ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__V_173_173 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 554 "unify_gen.m"
                if (ll_backend__unify_gen__succeeded)
#line 554 "unify_gen.m"
                  {
#line 555 "unify_gen.m"
                    ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__Modes_16)) == (MR_mktag((MR_Integer) 1)));
#line 555 "unify_gen.m"
                    if (ll_backend__unify_gen__succeeded)
#line 555 "unify_gen.m"
                      {
#line 555 "unify_gen.m"
                        ll_backend__unify_gen__Mode_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Modes_16, (MR_Integer) 0)));
#line 555 "unify_gen.m"
                        ll_backend__unify_gen__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Modes_16, (MR_Integer) 1)));
#line 555 "unify_gen.m"
                        ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__V_174_174 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 555 "unify_gen.m"
                      }
#line 554 "unify_gen.m"
                  }
#line 554 "unify_gen.m"
              }
#line 565 "unify_gen.m"
            if (ll_backend__unify_gen__succeeded)
#line 561 "unify_gen.m"
              if ((ll_backend__unify_gen__TakeAddr_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 558 "unify_gen.m"
                {
#line 558 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__Type_32;
#line 558 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_178_178;
#line 558 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_179_179;

#line 559 "unify_gen.m"
                  {
#line 559 "unify_gen.m"
                    ll_backend__unify_gen__Type_32 = ll_backend__code_info__variable_type_2_f_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_75, ll_backend__unify_gen__Arg_30);
                  }
#line 560 "unify_gen.m"
                  {
#line 560 "unify_gen.m"
                    ll_backend__unify_gen__V_178_178 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 560 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_178_178, 0) = ((MR_Box) (ll_backend__unify_gen__Var_14));
#line 560 "unify_gen.m"
                  }
#line 560 "unify_gen.m"
                  {
#line 560 "unify_gen.m"
                    ll_backend__unify_gen__V_179_179 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 560 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_179_179, 0) = ((MR_Box) (ll_backend__unify_gen__Arg_30));
#line 560 "unify_gen.m"
                  }
#line 560 "unify_gen.m"
                  {
#line 560 "unify_gen.m"
                    ll_backend__unify_gen__generate_sub_unify_7_p_0(ll_backend__unify_gen__V_178_178, ll_backend__unify_gen__V_179_179, ll_backend__unify_gen__Mode_31, ll_backend__unify_gen__Type_32, ll_backend__unify_gen__Code_22, ll_backend__unify_gen__STATE_VARIABLE_CI_0_75, ll_backend__unify_gen__STATE_VARIABLE_CI_76);
#line 560 "unify_gen.m"
                    return;
                  }
#line 558 "unify_gen.m"
                }
#line 561 "unify_gen.m"
              else
#line 562 "unify_gen.m"
                {
#line 563 "unify_gen.m"
                  {
#line 563 "unify_gen.m"
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_construction_2\'/12", (MR_String) "notag: take_addr");
#line 563 "unify_gen.m"
                    return;
                  }
#line 562 "unify_gen.m"
                }
#line 565 "unify_gen.m"
            else
#line 566 "unify_gen.m"
              {
#line 566 "unify_gen.m"
                {
#line 566 "unify_gen.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_construction_2\'/12", (MR_String) "no_tag: arity != 1");
#line 566 "unify_gen.m"
                  return;
                }
#line 566 "unify_gen.m"
              }
#line 565 "unify_gen.m"
          }
#line 533 "unify_gen.m"
        else
#line 533 "unify_gen.m"
          if ((ll_backend__unify_gen__ConsTag_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 575 "unify_gen.m"
            {
#line 575 "unify_gen.m"
              MR_Word ll_backend__unify_gen__ArgTypes_36;
#line 575 "unify_gen.m"
              MR_Word ll_backend__unify_gen__CellArgs0_37;
#line 575 "unify_gen.m"
              MR_Word ll_backend__unify_gen__MayUseAtomic_38;
#line 575 "unify_gen.m"
              MR_Word ll_backend__unify_gen__CellArgs_39;
#line 575 "unify_gen.m"
              MR_Word ll_backend__unify_gen__PackCode_40;
#line 575 "unify_gen.m"
              MR_Word ll_backend__unify_gen__HowToConstruct_41;
#line 575 "unify_gen.m"
              MR_Word ll_backend__unify_gen__Context_42;
#line 575 "unify_gen.m"
              MR_Word ll_backend__unify_gen__ConstructCode_43;
#line 575 "unify_gen.m"
              MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_171_171;

#line 576 "unify_gen.m"
              {
#line 576 "unify_gen.m"
                ll_backend__unify_gen__var_types_3_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_75, ll_backend__unify_gen__Args_15, &ll_backend__unify_gen__ArgTypes_36);
              }
#line 577 "unify_gen.m"
              {
#line 577 "unify_gen.m"
                ll_backend__unify_gen__generate_cons_args_8_p_0(ll_backend__unify_gen__Args_15, ll_backend__unify_gen__ArgTypes_36, ll_backend__unify_gen__Modes_16, ll_backend__unify_gen__ArgWidths_17, ll_backend__unify_gen__TakeAddr_19, ll_backend__unify_gen__STATE_VARIABLE_CI_0_75, &ll_backend__unify_gen__CellArgs0_37, &ll_backend__unify_gen__MayUseAtomic_38);
              }
#line 579 "unify_gen.m"
              {
#line 579 "unify_gen.m"
                ll_backend__unify_gen__pack_cell_rvals_6_p_0(ll_backend__unify_gen__ArgWidths_17, ll_backend__unify_gen__CellArgs0_37, &ll_backend__unify_gen__CellArgs_39, &ll_backend__unify_gen__PackCode_40, ll_backend__unify_gen__STATE_VARIABLE_CI_0_75, &ll_backend__unify_gen__STATE_VARIABLE_CI_171_171);
              }
#line 580 "unify_gen.m"
              {
#line 580 "unify_gen.m"
                ll_backend__unify_gen__pack_how_to_construct_3_p_0(ll_backend__unify_gen__ArgWidths_17, ll_backend__unify_gen__HowToConstruct0_18, &ll_backend__unify_gen__HowToConstruct_41);
              }
#line 581 "unify_gen.m"
              {
#line 581 "unify_gen.m"
                ll_backend__unify_gen__Context_42 = hlds__hlds_goal__goal_info_get_context_1_f_0(ll_backend__unify_gen__GoalInfo_21);
              }
#line 582 "unify_gen.m"
              {
#line 582 "unify_gen.m"
                ll_backend__unify_gen__construct_cell_10_p_0(ll_backend__unify_gen__Var_14, (MR_Integer) 0, ll_backend__unify_gen__CellArgs_39, ll_backend__unify_gen__HowToConstruct_41, ll_backend__unify_gen__MaybeSize_20, ll_backend__unify_gen__Context_42, ll_backend__unify_gen__MayUseAtomic_38, &ll_backend__unify_gen__ConstructCode_43, ll_backend__unify_gen__STATE_VARIABLE_CI_171_171, ll_backend__unify_gen__STATE_VARIABLE_CI_76);
              }
#line 584 "unify_gen.m"
              {
#line 584 "unify_gen.m"
                *ll_backend__unify_gen__Code_22 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__unify_gen__PackCode_40, ll_backend__unify_gen__ConstructCode_43);
              }
#line 575 "unify_gen.m"
            }
#line 533 "unify_gen.m"
          else
#line 533 "unify_gen.m"
            if (((MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_13)) == (MR_mktag((MR_Integer) 2))))
#line 548 "unify_gen.m"
              {
#line 548 "unify_gen.m"
                MR_Float ll_backend__unify_gen__Float_29 = MR_unbox_float((MR_hl_field(MR_mktag(2), ll_backend__unify_gen__ConsTag_13, (MR_Integer) 0)));
#line 548 "unify_gen.m"
                MR_Word ll_backend__unify_gen__V_184_184;
#line 548 "unify_gen.m"
                MR_Word ll_backend__unify_gen__V_186_186;

#line 549 "unify_gen.m"
                {
#line 549 "unify_gen.m"
                  ll_backend__unify_gen__V_186_186 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 549 "unify_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_186_186, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 549 "unify_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_186_186, 1) = MR_box_float(ll_backend__unify_gen__Float_29);
#line 549 "unify_gen.m"
                }
#line 549 "unify_gen.m"
                {
#line 549 "unify_gen.m"
                  ll_backend__unify_gen__V_184_184 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 549 "unify_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_184_184, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 549 "unify_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_184_184, 1) = ((MR_Box) (ll_backend__unify_gen__V_186_186));
#line 549 "unify_gen.m"
                }
#line 549 "unify_gen.m"
                {
#line 549 "unify_gen.m"
                  ll_backend__code_info__assign_const_to_var_4_p_0(ll_backend__unify_gen__Var_14, ll_backend__unify_gen__V_184_184, ll_backend__unify_gen__STATE_VARIABLE_CI_0_75, ll_backend__unify_gen__STATE_VARIABLE_CI_76);
                }
#line 550 "unify_gen.m"
                {
#line 550 "unify_gen.m"
                  *ll_backend__unify_gen__Code_22 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                }
#line 548 "unify_gen.m"
              }
#line 533 "unify_gen.m"
            else
#line 533 "unify_gen.m"
              if (((MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_13)) == (MR_mktag((MR_Integer) 1))))
#line 533 "unify_gen.m"
                {
#line 533 "unify_gen.m"
                  MR_String ll_backend__unify_gen__String_24 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ConsTag_13, (MR_Integer) 0)));
#line 533 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_198_198;
#line 533 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_200_200;

#line 534 "unify_gen.m"
                  {
#line 534 "unify_gen.m"
                    ll_backend__unify_gen__V_200_200 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 534 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_200_200, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 534 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_200_200, 1) = ((MR_Box) (ll_backend__unify_gen__String_24));
#line 534 "unify_gen.m"
                  }
#line 534 "unify_gen.m"
                  {
#line 534 "unify_gen.m"
                    ll_backend__unify_gen__V_198_198 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 534 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_198_198, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 534 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_198_198, 1) = ((MR_Box) (ll_backend__unify_gen__V_200_200));
#line 534 "unify_gen.m"
                  }
#line 534 "unify_gen.m"
                  {
#line 534 "unify_gen.m"
                    ll_backend__code_info__assign_const_to_var_4_p_0(ll_backend__unify_gen__Var_14, ll_backend__unify_gen__V_198_198, ll_backend__unify_gen__STATE_VARIABLE_CI_0_75, ll_backend__unify_gen__STATE_VARIABLE_CI_76);
                  }
#line 535 "unify_gen.m"
                  {
#line 535 "unify_gen.m"
                    *ll_backend__unify_gen__Code_22 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                  }
#line 533 "unify_gen.m"
                }
#line 533 "unify_gen.m"
              else
#line 533 "unify_gen.m"
                if (((((MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_13, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 631 "unify_gen.m"
                  {
#line 631 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__ClassId_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_13, (MR_Integer) 2)));
#line 631 "unify_gen.m"
                    MR_String ll_backend__unify_gen__Instance_54 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_13, (MR_Integer) 3)));
#line 631 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__TCName_55;
#line 631 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__V_128_128;
#line 631 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__V_133_133;
#line 631 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__V_134_134;
#line 631 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__V_135_135;
#line 631 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__V_137_137;
#line 631 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__ModuleName_221 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_13, (MR_Integer) 1)));
#line 631 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__DataId_222;

#line 632 "unify_gen.m"
                    {
#line 632 "unify_gen.m"
                      ll_backend__unify_gen__V_128_128 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 632 "unify_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_128_128, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_5[2]));
#line 632 "unify_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_128_128, 1) = ((MR_Box) (ll_backend__unify_gen__generate_construction_2_12_p_0_1));
#line 632 "unify_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_128_128, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 632 "unify_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_128_128, 3) = ((MR_Box) (ll_backend__unify_gen__Args_15));
#line 632 "unify_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_128_128, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 632 "unify_gen.m"
                    }
#line 632 "unify_gen.m"
                    {
#line 632 "unify_gen.m"
                      mercury__require__expect_4_p_0(ll_backend__unify_gen__V_128_128, (MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_construction_2\'/12", (MR_String) "base_typeclass_info constant has args");
                    }
#line 634 "unify_gen.m"
                    {
#line 634 "unify_gen.m"
                      ll_backend__unify_gen__TCName_55 = backend_libs__type_class_info__generate_class_name_1_f_0(ll_backend__unify_gen__ClassId_53);
                    }
#line 635 "unify_gen.m"
                    {
#line 635 "unify_gen.m"
                      ll_backend__unify_gen__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 635 "unify_gen.m"
                      MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_134_134, 0) = ((MR_Box) (ll_backend__unify_gen__ModuleName_221));
#line 635 "unify_gen.m"
                      MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_134_134, 1) = ((MR_Box) (ll_backend__unify_gen__Instance_54));
#line 635 "unify_gen.m"
                    }
#line 635 "unify_gen.m"
                    {
#line 635 "unify_gen.m"
                      ll_backend__unify_gen__V_133_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 635 "unify_gen.m"
                      MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_133_133, 0) = ((MR_Box) (ll_backend__unify_gen__TCName_55));
#line 635 "unify_gen.m"
                      MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_133_133, 1) = ((MR_Box) (ll_backend__unify_gen__V_134_134));
#line 635 "unify_gen.m"
                    }
#line 635 "unify_gen.m"
                    {
#line 635 "unify_gen.m"
                      ll_backend__unify_gen__DataId_222 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 635 "unify_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__DataId_222, 0) = ((MR_Box) (ll_backend__unify_gen__V_133_133));
#line 635 "unify_gen.m"
                    }
#line 637 "unify_gen.m"
                    {
#line 637 "unify_gen.m"
                      ll_backend__unify_gen__V_137_137 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 637 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_137_137, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 637 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_137_137, 1) = ((MR_Box) (ll_backend__unify_gen__DataId_222));
#line 637 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_137_137, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 637 "unify_gen.m"
                    }
#line 637 "unify_gen.m"
                    {
#line 637 "unify_gen.m"
                      ll_backend__unify_gen__V_135_135 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 637 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_135_135, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 637 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_135_135, 1) = ((MR_Box) (ll_backend__unify_gen__V_137_137));
#line 637 "unify_gen.m"
                    }
#line 637 "unify_gen.m"
                    {
#line 637 "unify_gen.m"
                      ll_backend__code_info__assign_const_to_var_4_p_0(ll_backend__unify_gen__Var_14, ll_backend__unify_gen__V_135_135, ll_backend__unify_gen__STATE_VARIABLE_CI_0_75, ll_backend__unify_gen__STATE_VARIABLE_CI_76);
                    }
#line 638 "unify_gen.m"
                    {
#line 638 "unify_gen.m"
                      *ll_backend__unify_gen__Code_22 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                    }
#line 631 "unify_gen.m"
                  }
#line 533 "unify_gen.m"
                else
#line 533 "unify_gen.m"
                  if (((((MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_13, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 694 "unify_gen.m"
                    {
#line 694 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__V_77_77;
#line 694 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__V_82_82;
#line 694 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__PredId_231 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_13, (MR_Integer) 1)));
#line 694 "unify_gen.m"
                      MR_Integer ll_backend__unify_gen__ProcId_232 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_13, (MR_Integer) 2)));

#line 695 "unify_gen.m"
                      {
#line 695 "unify_gen.m"
                        ll_backend__unify_gen__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 695 "unify_gen.m"
                        MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_77_77, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_5[3]));
#line 695 "unify_gen.m"
                        MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_77_77, 1) = ((MR_Box) (ll_backend__unify_gen__generate_construction_2_12_p_0_2));
#line 695 "unify_gen.m"
                        MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_77_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 695 "unify_gen.m"
                        MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_77_77, 3) = ((MR_Box) (ll_backend__unify_gen__TakeAddr_19));
#line 695 "unify_gen.m"
                        MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_77_77, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 695 "unify_gen.m"
                      }
#line 695 "unify_gen.m"
                      {
#line 695 "unify_gen.m"
                        mercury__require__expect_4_p_0(ll_backend__unify_gen__V_77_77, (MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_construction_2\'/12", (MR_String) "closure_tag has take_addr");
                      }
#line 697 "unify_gen.m"
                      {
#line 697 "unify_gen.m"
                        ll_backend__unify_gen__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 697 "unify_gen.m"
                        MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_82_82, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_5[4]));
#line 697 "unify_gen.m"
                        MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_82_82, 1) = ((MR_Box) (ll_backend__unify_gen__generate_construction_2_12_p_0_3));
#line 697 "unify_gen.m"
                        MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_82_82, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 697 "unify_gen.m"
                        MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_82_82, 3) = ((MR_Box) (ll_backend__unify_gen__MaybeSize_20));
#line 697 "unify_gen.m"
                        MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_82_82, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 697 "unify_gen.m"
                      }
#line 697 "unify_gen.m"
                      {
#line 697 "unify_gen.m"
                        mercury__require__expect_4_p_0(ll_backend__unify_gen__V_82_82, (MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_construction_2\'/12", (MR_String) "closure_tag has size");
                      }
#line 699 "unify_gen.m"
                      {
#line 699 "unify_gen.m"
                        ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_9_p_0(ll_backend__unify_gen__PredId_231, ll_backend__unify_gen__ProcId_232, ll_backend__unify_gen__Var_14, ll_backend__unify_gen__Args_15, ll_backend__unify_gen__GoalInfo_21, ll_backend__unify_gen__Code_22, ll_backend__unify_gen__STATE_VARIABLE_CI_0_75, ll_backend__unify_gen__STATE_VARIABLE_CI_76);
#line 699 "unify_gen.m"
                        return;
                      }
#line 694 "unify_gen.m"
                    }
#line 533 "unify_gen.m"
                  else
#line 533 "unify_gen.m"
                    if (((((MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_13, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 657 "unify_gen.m"
                      {
#line 657 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__RttiProcLabel_65;
#line 657 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__Origin_66;
#line 657 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__UserOrUCI_68;
#line 657 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__ProcKind_69;
#line 657 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__V_106_106;
#line 657 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__V_111_111;
#line 657 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__V_112_112;
#line 657 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__V_114_114;
#line 657 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__DataId_224;
#line 657 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__PredId_225 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_13, (MR_Integer) 1)));
#line 657 "unify_gen.m"
                        MR_Integer ll_backend__unify_gen__ProcId_226 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_13, (MR_Integer) 2)));
#line 657 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__ModuleInfo_227;
#line 662 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__V_233_233;
#line 662 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__V_234_234;
#line 662 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__V_235_235;
#line 662 "unify_gen.m"
                        MR_String ll_backend__unify_gen__V_236_236;
#line 662 "unify_gen.m"
                        MR_Integer ll_backend__unify_gen__V_237_237;
#line 662 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__V_238_238;
#line 662 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__V_239_239;
#line 662 "unify_gen.m"
                        MR_Integer ll_backend__unify_gen__V_240_240;
#line 662 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__V_241_241;
#line 662 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__V_242_242;
#line 662 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__V_243_243;
#line 662 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__V_244_244;
#line 662 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__V_245_245;
#line 662 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__V_246_246;
#line 662 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__V_247_247;
#line 663 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__V_67_67;

#line 658 "unify_gen.m"
                        {
#line 658 "unify_gen.m"
                          ll_backend__unify_gen__V_106_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 658 "unify_gen.m"
                          MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_106_106, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_5[2]));
#line 658 "unify_gen.m"
                          MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_106_106, 1) = ((MR_Box) (ll_backend__unify_gen__generate_construction_2_12_p_0_4));
#line 658 "unify_gen.m"
                          MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_106_106, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 658 "unify_gen.m"
                          MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_106_106, 3) = ((MR_Box) (ll_backend__unify_gen__Args_15));
#line 658 "unify_gen.m"
                          MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_106_106, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 658 "unify_gen.m"
                        }
#line 658 "unify_gen.m"
                        {
#line 658 "unify_gen.m"
                          mercury__require__expect_4_p_0(ll_backend__unify_gen__V_106_106, (MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_construction_2\'/12", (MR_String) "deep_profiling_proc_static has args");
                        }
#line 660 "unify_gen.m"
                        {
#line 660 "unify_gen.m"
                          ll_backend__code_info__get_module_info_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_75, &ll_backend__unify_gen__ModuleInfo_227);
                        }
#line 661 "unify_gen.m"
                        {
#line 661 "unify_gen.m"
                          ll_backend__unify_gen__RttiProcLabel_65 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ll_backend__unify_gen__ModuleInfo_227, ll_backend__unify_gen__PredId_225, ll_backend__unify_gen__ProcId_226);
                        }
#line 662 "unify_gen.m"
                        ll_backend__unify_gen__V_233_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiProcLabel_65, (MR_Integer) 0)));
#line 662 "unify_gen.m"
                        ll_backend__unify_gen__V_234_234 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiProcLabel_65, (MR_Integer) 1)));
#line 662 "unify_gen.m"
                        ll_backend__unify_gen__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiProcLabel_65, (MR_Integer) 2)));
#line 662 "unify_gen.m"
                        ll_backend__unify_gen__V_236_236 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiProcLabel_65, (MR_Integer) 3)));
#line 662 "unify_gen.m"
                        ll_backend__unify_gen__V_237_237 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiProcLabel_65, (MR_Integer) 4)));
#line 662 "unify_gen.m"
                        ll_backend__unify_gen__V_238_238 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiProcLabel_65, (MR_Integer) 5)));
#line 662 "unify_gen.m"
                        ll_backend__unify_gen__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiProcLabel_65, (MR_Integer) 6)));
#line 662 "unify_gen.m"
                        ll_backend__unify_gen__V_240_240 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiProcLabel_65, (MR_Integer) 7)));
#line 662 "unify_gen.m"
                        ll_backend__unify_gen__V_241_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiProcLabel_65, (MR_Integer) 8)));
#line 662 "unify_gen.m"
                        ll_backend__unify_gen__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiProcLabel_65, (MR_Integer) 9)));
#line 662 "unify_gen.m"
                        ll_backend__unify_gen__V_243_243 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiProcLabel_65, (MR_Integer) 10)))) & (MR_Integer) 7);
#line 662 "unify_gen.m"
                        ll_backend__unify_gen__V_244_244 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiProcLabel_65, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 662 "unify_gen.m"
                        ll_backend__unify_gen__V_245_245 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiProcLabel_65, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 662 "unify_gen.m"
                        ll_backend__unify_gen__Origin_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiProcLabel_65, (MR_Integer) 11)));
#line 662 "unify_gen.m"
                        ll_backend__unify_gen__V_246_246 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiProcLabel_65, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 662 "unify_gen.m"
                        ll_backend__unify_gen__V_247_247 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiProcLabel_65, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 663 "unify_gen.m"
                        ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__Origin_66)) == (MR_mktag((MR_Integer) 0)));
#line 663 "unify_gen.m"
                        if (ll_backend__unify_gen__succeeded)
#line 663 "unify_gen.m"
                          {
#line 663 "unify_gen.m"
                            ll_backend__unify_gen__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Origin_66, (MR_Integer) 0)));
#line 664 "unify_gen.m"
                            ll_backend__unify_gen__UserOrUCI_68 = (MR_Integer) 1;
#line 663 "unify_gen.m"
                          }
#line 663 "unify_gen.m"
                        else
#line 666 "unify_gen.m"
                          ll_backend__unify_gen__UserOrUCI_68 = (MR_Integer) 0;
#line 668 "unify_gen.m"
                        {
#line 668 "unify_gen.m"
                          ll_backend__unify_gen__ProcKind_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 668 "unify_gen.m"
                          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ProcKind_69, 0) = ((MR_Box) (ll_backend__unify_gen__UserOrUCI_68));
#line 668 "unify_gen.m"
                        }
#line 669 "unify_gen.m"
                        {
#line 669 "unify_gen.m"
                          ll_backend__unify_gen__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 669 "unify_gen.m"
                          MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_111_111, 0) = ((MR_Box) (ll_backend__unify_gen__RttiProcLabel_65));
#line 669 "unify_gen.m"
                          MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_111_111, 1) = ((MR_Box) (ll_backend__unify_gen__ProcKind_69));
#line 669 "unify_gen.m"
                        }
#line 669 "unify_gen.m"
                        {
#line 669 "unify_gen.m"
                          ll_backend__unify_gen__DataId_224 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 669 "unify_gen.m"
                          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__DataId_224, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 669 "unify_gen.m"
                          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__DataId_224, 1) = ((MR_Box) (ll_backend__unify_gen__V_111_111));
#line 669 "unify_gen.m"
                        }
#line 670 "unify_gen.m"
                        {
#line 670 "unify_gen.m"
                          ll_backend__unify_gen__V_114_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 670 "unify_gen.m"
                          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_114_114, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 670 "unify_gen.m"
                          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_114_114, 1) = ((MR_Box) (ll_backend__unify_gen__DataId_224));
#line 670 "unify_gen.m"
                          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_114_114, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 670 "unify_gen.m"
                        }
#line 670 "unify_gen.m"
                        {
#line 670 "unify_gen.m"
                          ll_backend__unify_gen__V_112_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 670 "unify_gen.m"
                          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_112_112, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 670 "unify_gen.m"
                          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_112_112, 1) = ((MR_Box) (ll_backend__unify_gen__V_114_114));
#line 670 "unify_gen.m"
                        }
#line 670 "unify_gen.m"
                        {
#line 670 "unify_gen.m"
                          ll_backend__code_info__assign_const_to_var_4_p_0(ll_backend__unify_gen__Var_14, ll_backend__unify_gen__V_112_112, ll_backend__unify_gen__STATE_VARIABLE_CI_0_75, ll_backend__unify_gen__STATE_VARIABLE_CI_76);
                        }
#line 671 "unify_gen.m"
                        {
#line 671 "unify_gen.m"
                          *ll_backend__unify_gen__Code_22 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                        }
#line 657 "unify_gen.m"
                      }
#line 533 "unify_gen.m"
                    else
#line 533 "unify_gen.m"
                      if (((((MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_13, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 586 "unify_gen.m"
                        {
#line 586 "unify_gen.m"
                          MR_Integer ll_backend__unify_gen__Ptag_209 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_13, (MR_Integer) 1)));
#line 600 "unify_gen.m"
                          MR_Word ll_backend__unify_gen__Arg_203;
#line 600 "unify_gen.m"
                          MR_Word ll_backend__unify_gen__Mode_204;
#line 588 "unify_gen.m"
                          MR_Word ll_backend__unify_gen__V_162_162;
#line 588 "unify_gen.m"
                          MR_Word ll_backend__unify_gen__V_163_163;

#line 588 "unify_gen.m"
                          ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__Args_15)) == (MR_mktag((MR_Integer) 1)));
#line 588 "unify_gen.m"
                          if (ll_backend__unify_gen__succeeded)
#line 588 "unify_gen.m"
                            {
#line 588 "unify_gen.m"
                              ll_backend__unify_gen__Arg_203 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Args_15, (MR_Integer) 0)));
#line 588 "unify_gen.m"
                              ll_backend__unify_gen__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Args_15, (MR_Integer) 1)));
#line 588 "unify_gen.m"
                              ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__V_162_162 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 588 "unify_gen.m"
                              if (ll_backend__unify_gen__succeeded)
#line 588 "unify_gen.m"
                                {
#line 589 "unify_gen.m"
                                  ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__Modes_16)) == (MR_mktag((MR_Integer) 1)));
#line 589 "unify_gen.m"
                                  if (ll_backend__unify_gen__succeeded)
#line 589 "unify_gen.m"
                                    {
#line 589 "unify_gen.m"
                                      ll_backend__unify_gen__Mode_204 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Modes_16, (MR_Integer) 0)));
#line 589 "unify_gen.m"
                                      ll_backend__unify_gen__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Modes_16, (MR_Integer) 1)));
#line 589 "unify_gen.m"
                                      ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__V_163_163 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 589 "unify_gen.m"
                                    }
#line 588 "unify_gen.m"
                                }
#line 588 "unify_gen.m"
                            }
#line 600 "unify_gen.m"
                          if (ll_backend__unify_gen__succeeded)
#line 596 "unify_gen.m"
                            if ((ll_backend__unify_gen__TakeAddr_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 592 "unify_gen.m"
                              {
#line 592 "unify_gen.m"
                                MR_Word ll_backend__unify_gen__Type_201;

#line 593 "unify_gen.m"
                                {
#line 593 "unify_gen.m"
                                  ll_backend__unify_gen__Type_201 = ll_backend__code_info__variable_type_2_f_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_75, ll_backend__unify_gen__Arg_203);
                                }
#line 594 "unify_gen.m"
                                {
#line 594 "unify_gen.m"
                                  ll_backend__unify_gen__generate_direct_arg_construct_8_p_0(ll_backend__unify_gen__Var_14, ll_backend__unify_gen__Arg_203, ll_backend__unify_gen__Ptag_209, ll_backend__unify_gen__Mode_204, ll_backend__unify_gen__Type_201, ll_backend__unify_gen__Code_22, ll_backend__unify_gen__STATE_VARIABLE_CI_0_75, ll_backend__unify_gen__STATE_VARIABLE_CI_76);
#line 594 "unify_gen.m"
                                  return;
                                }
#line 592 "unify_gen.m"
                              }
#line 596 "unify_gen.m"
                            else
#line 597 "unify_gen.m"
                              {
#line 598 "unify_gen.m"
                                {
#line 598 "unify_gen.m"
                                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_construction_2\'/12", (MR_String) "direct_arg_tag: take_addr");
#line 598 "unify_gen.m"
                                  return;
                                }
#line 597 "unify_gen.m"
                              }
#line 600 "unify_gen.m"
                          else
#line 601 "unify_gen.m"
                            {
#line 601 "unify_gen.m"
                              {
#line 601 "unify_gen.m"
                                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_construction_2\'/12", (MR_String) "direct_arg_tag: arity != 1");
#line 601 "unify_gen.m"
                                return;
                              }
#line 601 "unify_gen.m"
                            }
#line 586 "unify_gen.m"
                        }
#line 533 "unify_gen.m"
                      else
#line 533 "unify_gen.m"
                        if (((((MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_13, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 541 "unify_gen.m"
                          {
#line 541 "unify_gen.m"
                            MR_Word ll_backend__unify_gen__Lang_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_13, (MR_Integer) 1)));
#line 541 "unify_gen.m"
                            MR_String ll_backend__unify_gen__Val_27 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_13, (MR_Integer) 2)));
#line 541 "unify_gen.m"
                            MR_Word ll_backend__unify_gen__ForeignConst_28;
#line 541 "unify_gen.m"
                            MR_Word ll_backend__unify_gen__V_187_187;
#line 541 "unify_gen.m"
                            MR_Word ll_backend__unify_gen__V_192_192;

#line 542 "unify_gen.m"
                            {
#line 542 "unify_gen.m"
                              ll_backend__unify_gen__V_187_187 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 542 "unify_gen.m"
                              MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_187_187, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_5[1]));
#line 542 "unify_gen.m"
                              MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_187_187, 1) = ((MR_Box) (ll_backend__unify_gen__generate_construction_2_12_p_0_5));
#line 542 "unify_gen.m"
                              MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_187_187, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 542 "unify_gen.m"
                              MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_187_187, 3) = ((MR_Box) (ll_backend__unify_gen__Lang_26));
#line 542 "unify_gen.m"
                              MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_187_187, 4) = ((MR_Box) ((MR_Integer) 0));
#line 542 "unify_gen.m"
                            }
#line 542 "unify_gen.m"
                            {
#line 542 "unify_gen.m"
                              mercury__require__expect_4_p_0(ll_backend__unify_gen__V_187_187, (MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_construction_2\'/12", (MR_String) "foreign_tag for language other than C");
                            }
#line 544 "unify_gen.m"
                            {
#line 544 "unify_gen.m"
                              ll_backend__unify_gen__V_192_192 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 544 "unify_gen.m"
                              MR_hl_field(MR_mktag(2), ll_backend__unify_gen__V_192_192, 0) = ((MR_Box) (ll_backend__unify_gen__Val_27));
#line 544 "unify_gen.m"
                              MR_hl_field(MR_mktag(2), ll_backend__unify_gen__V_192_192, 1) = ((MR_Box) ((MR_Integer) 7));
#line 544 "unify_gen.m"
                            }
#line 544 "unify_gen.m"
                            {
#line 544 "unify_gen.m"
                              ll_backend__unify_gen__ForeignConst_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 544 "unify_gen.m"
                              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ForeignConst_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 544 "unify_gen.m"
                              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ForeignConst_28, 1) = ((MR_Box) (ll_backend__unify_gen__V_192_192));
#line 544 "unify_gen.m"
                            }
#line 545 "unify_gen.m"
                            {
#line 545 "unify_gen.m"
                              ll_backend__code_info__assign_const_to_var_4_p_0(ll_backend__unify_gen__Var_14, ll_backend__unify_gen__ForeignConst_28, ll_backend__unify_gen__STATE_VARIABLE_CI_0_75, ll_backend__unify_gen__STATE_VARIABLE_CI_76);
                            }
#line 546 "unify_gen.m"
                            {
#line 546 "unify_gen.m"
                              *ll_backend__unify_gen__Code_22 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                            }
#line 541 "unify_gen.m"
                          }
#line 533 "unify_gen.m"
                        else
#line 533 "unify_gen.m"
                          if (((((MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_13, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 643 "unify_gen.m"
                            {
#line 643 "unify_gen.m"
                              MR_Integer ll_backend__unify_gen__ConstNum_56 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_13, (MR_Integer) 1)));
#line 643 "unify_gen.m"
                              MR_Word ll_backend__unify_gen__ConstStructMap_58;
#line 643 "unify_gen.m"
                              MR_Word ll_backend__unify_gen__Rval_59;
#line 643 "unify_gen.m"
                              MR_Word ll_backend__unify_gen__V_126_126;
#line 642 "unify_gen.m"
                              MR_Word ll_backend__unify_gen__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_13, (MR_Integer) 2)));
#line 645 "unify_gen.m"
                              MR_Box ll_backend__unify_gen__conv0_V_126_126;
#line 645 "unify_gen.m"
                              MR_Word ll_backend__unify_gen___Type_60;

#line 644 "unify_gen.m"
                              {
#line 644 "unify_gen.m"
                                ll_backend__code_info__get_const_struct_map_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_75, &ll_backend__unify_gen__ConstStructMap_58);
                              }
#line 645 "unify_gen.m"
                              {
#line 645 "unify_gen.m"
                                mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ll_backend__unify_gen__ConstStructMap_58, ll_backend__unify_gen__ConstNum_56, &ll_backend__unify_gen__conv0_V_126_126);
                              }
#line 645 "unify_gen.m"
                              ll_backend__unify_gen__V_126_126 = ((MR_Word) ll_backend__unify_gen__conv0_V_126_126);
#line 645 "unify_gen.m"
                              ll_backend__unify_gen__Rval_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_126_126, (MR_Integer) 0)));
#line 645 "unify_gen.m"
                              ll_backend__unify_gen___Type_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_126_126, (MR_Integer) 1)));
#line 646 "unify_gen.m"
                              {
#line 646 "unify_gen.m"
                                ll_backend__code_info__assign_expr_to_var_5_p_0(ll_backend__unify_gen__Var_14, ll_backend__unify_gen__Rval_59, ll_backend__unify_gen__Code_22, ll_backend__unify_gen__STATE_VARIABLE_CI_0_75, ll_backend__unify_gen__STATE_VARIABLE_CI_76);
#line 646 "unify_gen.m"
                                return;
                              }
#line 643 "unify_gen.m"
                            }
#line 533 "unify_gen.m"
                          else
#line 533 "unify_gen.m"
                            if (((((MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_13, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 537 "unify_gen.m"
                              {
#line 537 "unify_gen.m"
                                MR_Integer ll_backend__unify_gen__Int_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_13, (MR_Integer) 1)));
#line 537 "unify_gen.m"
                                MR_Word ll_backend__unify_gen__V_195_195;
#line 537 "unify_gen.m"
                                MR_Word ll_backend__unify_gen__V_197_197;

#line 538 "unify_gen.m"
                                {
#line 538 "unify_gen.m"
                                  ll_backend__unify_gen__V_197_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 538 "unify_gen.m"
                                  MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_197_197, 0) = ((MR_Box) (ll_backend__unify_gen__Int_25));
#line 538 "unify_gen.m"
                                }
#line 538 "unify_gen.m"
                                {
#line 538 "unify_gen.m"
                                  ll_backend__unify_gen__V_195_195 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 538 "unify_gen.m"
                                  MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_195_195, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 538 "unify_gen.m"
                                  MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_195_195, 1) = ((MR_Box) (ll_backend__unify_gen__V_197_197));
#line 538 "unify_gen.m"
                                }
#line 538 "unify_gen.m"
                                {
#line 538 "unify_gen.m"
                                  ll_backend__code_info__assign_const_to_var_4_p_0(ll_backend__unify_gen__Var_14, ll_backend__unify_gen__V_195_195, ll_backend__unify_gen__STATE_VARIABLE_CI_0_75, ll_backend__unify_gen__STATE_VARIABLE_CI_76);
                                }
#line 539 "unify_gen.m"
                                {
#line 539 "unify_gen.m"
                                  *ll_backend__unify_gen__Code_22 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                                }
#line 537 "unify_gen.m"
                              }
#line 533 "unify_gen.m"
                            else
#line 533 "unify_gen.m"
                              if (((((MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_13, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 681 "unify_gen.m"
                                {
#line 681 "unify_gen.m"
                                  MR_Word ll_backend__unify_gen__RA_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_13, (MR_Integer) 1)));
#line 681 "unify_gen.m"
                                  MR_Word ll_backend__unify_gen__V_89_89;
#line 681 "unify_gen.m"
                                  MR_Word ll_backend__unify_gen__V_94_94;

#line 682 "unify_gen.m"
                                  {
#line 682 "unify_gen.m"
                                    ll_backend__unify_gen__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 682 "unify_gen.m"
                                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_89_89, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_5[2]));
#line 682 "unify_gen.m"
                                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_89_89, 1) = ((MR_Box) (ll_backend__unify_gen__generate_construction_2_12_p_0_6));
#line 682 "unify_gen.m"
                                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_89_89, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 682 "unify_gen.m"
                                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_89_89, 3) = ((MR_Box) (ll_backend__unify_gen__Args_15));
#line 682 "unify_gen.m"
                                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_89_89, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 682 "unify_gen.m"
                                  }
#line 682 "unify_gen.m"
                                  {
#line 682 "unify_gen.m"
                                    mercury__require__expect_4_p_0(ll_backend__unify_gen__V_89_89, (MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_construction_2\'/12", (MR_String) "reserved_address constant has args");
                                  }
#line 684 "unify_gen.m"
                                  {
#line 684 "unify_gen.m"
                                    ll_backend__unify_gen__V_94_94 = ll_backend__unify_gen__generate_reserved_address_1_f_0(ll_backend__unify_gen__RA_71);
                                  }
#line 684 "unify_gen.m"
                                  {
#line 684 "unify_gen.m"
                                    ll_backend__code_info__assign_const_to_var_4_p_0(ll_backend__unify_gen__Var_14, ll_backend__unify_gen__V_94_94, ll_backend__unify_gen__STATE_VARIABLE_CI_0_75, ll_backend__unify_gen__STATE_VARIABLE_CI_76);
                                  }
#line 685 "unify_gen.m"
                                  {
#line 685 "unify_gen.m"
                                    *ll_backend__unify_gen__Code_22 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                                  }
#line 681 "unify_gen.m"
                                }
#line 533 "unify_gen.m"
                              else
#line 533 "unify_gen.m"
                                if (((((MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_13, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 617 "unify_gen.m"
                                  {
#line 617 "unify_gen.m"
                                    MR_Word ll_backend__unify_gen__V_150_150;
#line 617 "unify_gen.m"
                                    MR_Word ll_backend__unify_gen__V_152_152;
#line 617 "unify_gen.m"
                                    MR_Word ll_backend__unify_gen__V_154_154;
#line 617 "unify_gen.m"
                                    MR_Word ll_backend__unify_gen__V_155_155;
#line 617 "unify_gen.m"
                                    MR_Integer ll_backend__unify_gen__Ptag_219 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_13, (MR_Integer) 1)));
#line 617 "unify_gen.m"
                                    MR_Integer ll_backend__unify_gen__Sectag_220 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_13, (MR_Integer) 2)));

#line 619 "unify_gen.m"
                                    {
#line 619 "unify_gen.m"
                                      ll_backend__unify_gen__V_155_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 619 "unify_gen.m"
                                      MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_155_155, 0) = ((MR_Box) (ll_backend__unify_gen__Sectag_220));
#line 619 "unify_gen.m"
                                    }
#line 619 "unify_gen.m"
                                    {
#line 619 "unify_gen.m"
                                      ll_backend__unify_gen__V_154_154 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 619 "unify_gen.m"
                                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_154_154, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 619 "unify_gen.m"
                                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_154_154, 1) = ((MR_Box) (ll_backend__unify_gen__V_155_155));
#line 619 "unify_gen.m"
                                    }
#line 619 "unify_gen.m"
                                    {
#line 619 "unify_gen.m"
                                      ll_backend__unify_gen__V_152_152 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 619 "unify_gen.m"
                                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_152_152, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 619 "unify_gen.m"
                                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_152_152, 1) = ((MR_Box) ((MR_Integer) 4));
#line 619 "unify_gen.m"
                                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_152_152, 2) = ((MR_Box) (ll_backend__unify_gen__V_154_154));
#line 619 "unify_gen.m"
                                    }
#line 618 "unify_gen.m"
                                    {
#line 618 "unify_gen.m"
                                      ll_backend__unify_gen__V_150_150 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 618 "unify_gen.m"
                                      MR_hl_field(MR_mktag(2), ll_backend__unify_gen__V_150_150, 0) = ((MR_Box) (ll_backend__unify_gen__Ptag_219));
#line 618 "unify_gen.m"
                                      MR_hl_field(MR_mktag(2), ll_backend__unify_gen__V_150_150, 1) = ((MR_Box) (ll_backend__unify_gen__V_152_152));
#line 618 "unify_gen.m"
                                    }
#line 618 "unify_gen.m"
                                    {
#line 618 "unify_gen.m"
                                      ll_backend__code_info__assign_const_to_var_4_p_0(ll_backend__unify_gen__Var_14, ll_backend__unify_gen__V_150_150, ll_backend__unify_gen__STATE_VARIABLE_CI_0_75, ll_backend__unify_gen__STATE_VARIABLE_CI_76);
                                    }
#line 620 "unify_gen.m"
                                    {
#line 620 "unify_gen.m"
                                      *ll_backend__unify_gen__Code_22 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                                    }
#line 617 "unify_gen.m"
                                  }
#line 533 "unify_gen.m"
                                else
#line 533 "unify_gen.m"
                                  if (((((MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_13, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 604 "unify_gen.m"
                                    {
#line 604 "unify_gen.m"
                                      MR_Integer ll_backend__unify_gen__Sectag_46 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_13, (MR_Integer) 2)));
#line 604 "unify_gen.m"
                                      MR_Word ll_backend__unify_gen__CellArgs1_47;
#line 604 "unify_gen.m"
                                      MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_156_156;
#line 604 "unify_gen.m"
                                      MR_Word ll_backend__unify_gen__V_157_157;
#line 604 "unify_gen.m"
                                      MR_Word ll_backend__unify_gen__V_158_158;
#line 604 "unify_gen.m"
                                      MR_Word ll_backend__unify_gen__V_159_159;
#line 604 "unify_gen.m"
                                      MR_Integer ll_backend__unify_gen__Ptag_210 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_13, (MR_Integer) 1)));
#line 604 "unify_gen.m"
                                      MR_Word ll_backend__unify_gen__ArgTypes_211;
#line 604 "unify_gen.m"
                                      MR_Word ll_backend__unify_gen__CellArgs0_212;
#line 604 "unify_gen.m"
                                      MR_Word ll_backend__unify_gen__MayUseAtomic_213;
#line 604 "unify_gen.m"
                                      MR_Word ll_backend__unify_gen__CellArgs_214;
#line 604 "unify_gen.m"
                                      MR_Word ll_backend__unify_gen__PackCode_215;
#line 604 "unify_gen.m"
                                      MR_Word ll_backend__unify_gen__HowToConstruct_216;
#line 604 "unify_gen.m"
                                      MR_Word ll_backend__unify_gen__Context_217;
#line 604 "unify_gen.m"
                                      MR_Word ll_backend__unify_gen__ConstructCode_218;

#line 605 "unify_gen.m"
                                      {
#line 605 "unify_gen.m"
                                        ll_backend__unify_gen__var_types_3_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_75, ll_backend__unify_gen__Args_15, &ll_backend__unify_gen__ArgTypes_211);
                                      }
#line 606 "unify_gen.m"
                                      {
#line 606 "unify_gen.m"
                                        ll_backend__unify_gen__generate_cons_args_8_p_0(ll_backend__unify_gen__Args_15, ll_backend__unify_gen__ArgTypes_211, ll_backend__unify_gen__Modes_16, ll_backend__unify_gen__ArgWidths_17, ll_backend__unify_gen__TakeAddr_19, ll_backend__unify_gen__STATE_VARIABLE_CI_0_75, &ll_backend__unify_gen__CellArgs0_212, &ll_backend__unify_gen__MayUseAtomic_213);
                                      }
#line 608 "unify_gen.m"
                                      {
#line 608 "unify_gen.m"
                                        ll_backend__unify_gen__pack_cell_rvals_6_p_0(ll_backend__unify_gen__ArgWidths_17, ll_backend__unify_gen__CellArgs0_212, &ll_backend__unify_gen__CellArgs1_47, &ll_backend__unify_gen__PackCode_215, ll_backend__unify_gen__STATE_VARIABLE_CI_0_75, &ll_backend__unify_gen__STATE_VARIABLE_CI_156_156);
                                      }
#line 609 "unify_gen.m"
                                      {
#line 609 "unify_gen.m"
                                        ll_backend__unify_gen__pack_how_to_construct_3_p_0(ll_backend__unify_gen__ArgWidths_17, ll_backend__unify_gen__HowToConstruct0_18, &ll_backend__unify_gen__HowToConstruct_216);
                                      }
#line 610 "unify_gen.m"
                                      {
#line 610 "unify_gen.m"
                                        ll_backend__unify_gen__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 610 "unify_gen.m"
                                        MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_159_159, 0) = ((MR_Box) (ll_backend__unify_gen__Sectag_46));
#line 610 "unify_gen.m"
                                      }
#line 610 "unify_gen.m"
                                      {
#line 610 "unify_gen.m"
                                        ll_backend__unify_gen__V_158_158 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 610 "unify_gen.m"
                                        MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_158_158, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 610 "unify_gen.m"
                                        MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_158_158, 1) = ((MR_Box) (ll_backend__unify_gen__V_159_159));
#line 610 "unify_gen.m"
                                      }
#line 611 "unify_gen.m"
                                      {
#line 611 "unify_gen.m"
                                        ll_backend__unify_gen__V_157_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 611 "unify_gen.m"
                                        MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_157_157, 0) = ((MR_Box) (ll_backend__unify_gen__V_158_158));
#line 611 "unify_gen.m"
                                        MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_157_157, 1) = ((MR_Box) ((MR_Integer) 0));
#line 611 "unify_gen.m"
                                      }
#line 610 "unify_gen.m"
                                      {
#line 610 "unify_gen.m"
                                        ll_backend__unify_gen__CellArgs_214 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 610 "unify_gen.m"
                                        MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArgs_214, 0) = ((MR_Box) (ll_backend__unify_gen__V_157_157));
#line 610 "unify_gen.m"
                                        MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArgs_214, 1) = ((MR_Box) (ll_backend__unify_gen__CellArgs1_47));
#line 610 "unify_gen.m"
                                      }
#line 612 "unify_gen.m"
                                      {
#line 612 "unify_gen.m"
                                        ll_backend__unify_gen__Context_217 = hlds__hlds_goal__goal_info_get_context_1_f_0(ll_backend__unify_gen__GoalInfo_21);
                                      }
#line 613 "unify_gen.m"
                                      {
#line 613 "unify_gen.m"
                                        ll_backend__unify_gen__construct_cell_10_p_0(ll_backend__unify_gen__Var_14, ll_backend__unify_gen__Ptag_210, ll_backend__unify_gen__CellArgs_214, ll_backend__unify_gen__HowToConstruct_216, ll_backend__unify_gen__MaybeSize_20, ll_backend__unify_gen__Context_217, ll_backend__unify_gen__MayUseAtomic_213, &ll_backend__unify_gen__ConstructCode_218, ll_backend__unify_gen__STATE_VARIABLE_CI_156_156, ll_backend__unify_gen__STATE_VARIABLE_CI_76);
                                      }
#line 615 "unify_gen.m"
                                      {
#line 615 "unify_gen.m"
                                        *ll_backend__unify_gen__Code_22 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__unify_gen__PackCode_215, ll_backend__unify_gen__ConstructCode_218);
                                      }
#line 604 "unify_gen.m"
                                    }
#line 533 "unify_gen.m"
                                  else
#line 533 "unify_gen.m"
                                    if (((((MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_13, (MR_Integer) 0)))) == (MR_Integer) 16))))
#line 687 "unify_gen.m"
                                      {
#line 687 "unify_gen.m"
                                        MR_Word ll_backend__unify_gen__ThisTag_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_13, (MR_Integer) 2)));
#line 687 "unify_gen.m"
                                        MR_Word ll_backend__unify_gen___RAs_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_13, (MR_Integer) 1)));

#line 691 "unify_gen.m"
                                        /* direct tailcall eliminated */
#line 691 "unify_gen.m"
                                        {
#line 691 "unify_gen.m"
                                          MR_Word ll_backend__unify_gen__ConsTag__tmp_copy_13 = ll_backend__unify_gen__ThisTag_73;

#line 691 "unify_gen.m"
                                          ll_backend__unify_gen__ConsTag_13 = ll_backend__unify_gen__ConsTag__tmp_copy_13;
#line 691 "unify_gen.m"
                                        }
#line 691 "unify_gen.m"
                                        continue;
#line 687 "unify_gen.m"
                                      }
#line 533 "unify_gen.m"
                                    else
#line 533 "unify_gen.m"
                                      if (((((MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_13, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 673 "unify_gen.m"
                                        {
#line 673 "unify_gen.m"
                                          MR_Word ll_backend__unify_gen__PredProcId_70;
#line 673 "unify_gen.m"
                                          MR_Word ll_backend__unify_gen__V_96_96;
#line 673 "unify_gen.m"
                                          MR_Word ll_backend__unify_gen__V_102_102;
#line 673 "unify_gen.m"
                                          MR_Word ll_backend__unify_gen__V_104_104;
#line 673 "unify_gen.m"
                                          MR_Word ll_backend__unify_gen__DataId_228;
#line 673 "unify_gen.m"
                                          MR_Word ll_backend__unify_gen__PredId_229 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_13, (MR_Integer) 1)));
#line 673 "unify_gen.m"
                                          MR_Integer ll_backend__unify_gen__ProcId_230 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_13, (MR_Integer) 2)));

#line 674 "unify_gen.m"
                                          {
#line 674 "unify_gen.m"
                                            ll_backend__unify_gen__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 674 "unify_gen.m"
                                            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_96_96, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_5[2]));
#line 674 "unify_gen.m"
                                            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_96_96, 1) = ((MR_Box) (ll_backend__unify_gen__generate_construction_2_12_p_0_7));
#line 674 "unify_gen.m"
                                            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_96_96, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 674 "unify_gen.m"
                                            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_96_96, 3) = ((MR_Box) (ll_backend__unify_gen__Args_15));
#line 674 "unify_gen.m"
                                            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_96_96, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 674 "unify_gen.m"
                                          }
#line 674 "unify_gen.m"
                                          {
#line 674 "unify_gen.m"
                                            mercury__require__expect_4_p_0(ll_backend__unify_gen__V_96_96, (MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_construction_2\'/12", (MR_String) "table_io_decl has args");
                                          }
#line 676 "unify_gen.m"
                                          {
#line 676 "unify_gen.m"
                                            ll_backend__unify_gen__PredProcId_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 676 "unify_gen.m"
                                            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__PredProcId_70, 0) = ((MR_Box) (ll_backend__unify_gen__PredId_229));
#line 676 "unify_gen.m"
                                            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__PredProcId_70, 1) = ((MR_Box) (ll_backend__unify_gen__ProcId_230));
#line 676 "unify_gen.m"
                                          }
#line 677 "unify_gen.m"
                                          mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 677 "unify_gen.m"
                                          {
#line 677 "unify_gen.m"
                                            ll_backend__unify_gen__DataId_228 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 677 "unify_gen.m"
                                            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__DataId_228, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 677 "unify_gen.m"
                                            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__DataId_228, 1) = NULL;
#line 677 "unify_gen.m"
                                            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__DataId_228, 2) = ((MR_Box) (ll_backend__unify_gen__PredProcId_70));
#line 677 "unify_gen.m"
                                          }
#line 678 "unify_gen.m"
                                          {
#line 678 "unify_gen.m"
                                            ll_backend__unify_gen__V_104_104 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 678 "unify_gen.m"
                                            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_104_104, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 678 "unify_gen.m"
                                            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_104_104, 1) = ((MR_Box) (ll_backend__unify_gen__DataId_228));
#line 678 "unify_gen.m"
                                            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_104_104, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 678 "unify_gen.m"
                                          }
#line 678 "unify_gen.m"
                                          {
#line 678 "unify_gen.m"
                                            ll_backend__unify_gen__V_102_102 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 678 "unify_gen.m"
                                            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_102_102, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 678 "unify_gen.m"
                                            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_102_102, 1) = ((MR_Box) (ll_backend__unify_gen__V_104_104));
#line 678 "unify_gen.m"
                                          }
#line 678 "unify_gen.m"
                                          {
#line 678 "unify_gen.m"
                                            ll_backend__code_info__assign_const_to_var_4_p_0(ll_backend__unify_gen__Var_14, ll_backend__unify_gen__V_102_102, ll_backend__unify_gen__STATE_VARIABLE_CI_0_75, ll_backend__unify_gen__STATE_VARIABLE_CI_76);
                                          }
#line 679 "unify_gen.m"
                                          {
#line 679 "unify_gen.m"
                                            *ll_backend__unify_gen__Code_22 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                                          }
#line 673 "unify_gen.m"
                                        }
#line 533 "unify_gen.m"
                                      else
#line 533 "unify_gen.m"
                                        if (((((MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_13, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 648 "unify_gen.m"
                                          {
#line 648 "unify_gen.m"
                                            MR_Word ll_backend__unify_gen__PredId_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_13, (MR_Integer) 1)));
#line 648 "unify_gen.m"
                                            MR_Integer ll_backend__unify_gen__ProcId_62 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_13, (MR_Integer) 2)));
#line 648 "unify_gen.m"
                                            MR_Word ll_backend__unify_gen__ModuleInfo_63;
#line 648 "unify_gen.m"
                                            MR_Word ll_backend__unify_gen__ProcLabel_64;
#line 648 "unify_gen.m"
                                            MR_Word ll_backend__unify_gen__V_116_116;
#line 648 "unify_gen.m"
                                            MR_Word ll_backend__unify_gen__V_122_122;
#line 648 "unify_gen.m"
                                            MR_Word ll_backend__unify_gen__V_124_124;
#line 648 "unify_gen.m"
                                            MR_Word ll_backend__unify_gen__DataId_223;

#line 649 "unify_gen.m"
                                            {
#line 649 "unify_gen.m"
                                              ll_backend__unify_gen__V_116_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 649 "unify_gen.m"
                                              MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_116_116, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_5[2]));
#line 649 "unify_gen.m"
                                              MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_116_116, 1) = ((MR_Box) (ll_backend__unify_gen__generate_construction_2_12_p_0_8));
#line 649 "unify_gen.m"
                                              MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_116_116, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 649 "unify_gen.m"
                                              MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_116_116, 3) = ((MR_Box) (ll_backend__unify_gen__Args_15));
#line 649 "unify_gen.m"
                                              MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_116_116, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 649 "unify_gen.m"
                                            }
#line 649 "unify_gen.m"
                                            {
#line 649 "unify_gen.m"
                                              mercury__require__expect_4_p_0(ll_backend__unify_gen__V_116_116, (MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_construction_2\'/12", (MR_String) "tabling_info constant has args");
                                            }
#line 651 "unify_gen.m"
                                            {
#line 651 "unify_gen.m"
                                              ll_backend__code_info__get_module_info_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_75, &ll_backend__unify_gen__ModuleInfo_63);
                                            }
#line 652 "unify_gen.m"
                                            {
#line 652 "unify_gen.m"
                                              ll_backend__unify_gen__ProcLabel_64 = backend_libs__proc_label__make_proc_label_3_f_0(ll_backend__unify_gen__ModuleInfo_63, ll_backend__unify_gen__PredId_61, ll_backend__unify_gen__ProcId_62);
                                            }
#line 653 "unify_gen.m"
                                            {
#line 653 "unify_gen.m"
                                              ll_backend__unify_gen__DataId_223 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 653 "unify_gen.m"
                                              MR_hl_field(MR_mktag(1), ll_backend__unify_gen__DataId_223, 0) = ((MR_Box) (ll_backend__unify_gen__ProcLabel_64));
#line 653 "unify_gen.m"
                                              MR_hl_field(MR_mktag(1), ll_backend__unify_gen__DataId_223, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 653 "unify_gen.m"
                                            }
#line 654 "unify_gen.m"
                                            {
#line 654 "unify_gen.m"
                                              ll_backend__unify_gen__V_124_124 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 654 "unify_gen.m"
                                              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_124_124, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 654 "unify_gen.m"
                                              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_124_124, 1) = ((MR_Box) (ll_backend__unify_gen__DataId_223));
#line 654 "unify_gen.m"
                                              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_124_124, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 654 "unify_gen.m"
                                            }
#line 654 "unify_gen.m"
                                            {
#line 654 "unify_gen.m"
                                              ll_backend__unify_gen__V_122_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 654 "unify_gen.m"
                                              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_122_122, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 654 "unify_gen.m"
                                              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_122_122, 1) = ((MR_Box) (ll_backend__unify_gen__V_124_124));
#line 654 "unify_gen.m"
                                            }
#line 654 "unify_gen.m"
                                            {
#line 654 "unify_gen.m"
                                              ll_backend__code_info__assign_const_to_var_4_p_0(ll_backend__unify_gen__Var_14, ll_backend__unify_gen__V_122_122, ll_backend__unify_gen__STATE_VARIABLE_CI_0_75, ll_backend__unify_gen__STATE_VARIABLE_CI_76);
                                            }
#line 655 "unify_gen.m"
                                            {
#line 655 "unify_gen.m"
                                              *ll_backend__unify_gen__Code_22 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                                            }
#line 648 "unify_gen.m"
                                          }
#line 533 "unify_gen.m"
                                        else
#line 533 "unify_gen.m"
                                          if (((((MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_13, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 622 "unify_gen.m"
                                            {
#line 622 "unify_gen.m"
                                              MR_Word ll_backend__unify_gen__ModuleName_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_13, (MR_Integer) 1)));
#line 622 "unify_gen.m"
                                              MR_String ll_backend__unify_gen__TypeName_49 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_13, (MR_Integer) 2)));
#line 622 "unify_gen.m"
                                              MR_Integer ll_backend__unify_gen__TypeArity_50 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_13, (MR_Integer) 3)));
#line 622 "unify_gen.m"
                                              MR_Word ll_backend__unify_gen__RttiTypeCtor_51;
#line 622 "unify_gen.m"
                                              MR_Word ll_backend__unify_gen__DataId_52;
#line 622 "unify_gen.m"
                                              MR_Word ll_backend__unify_gen__V_139_139;
#line 622 "unify_gen.m"
                                              MR_Word ll_backend__unify_gen__V_144_144;
#line 622 "unify_gen.m"
                                              MR_Word ll_backend__unify_gen__V_146_146;
#line 622 "unify_gen.m"
                                              MR_Word ll_backend__unify_gen__V_148_148;

#line 623 "unify_gen.m"
                                              {
#line 623 "unify_gen.m"
                                                ll_backend__unify_gen__V_139_139 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 623 "unify_gen.m"
                                                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_139_139, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_5[2]));
#line 623 "unify_gen.m"
                                                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_139_139, 1) = ((MR_Box) (ll_backend__unify_gen__generate_construction_2_12_p_0_9));
#line 623 "unify_gen.m"
                                                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_139_139, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 623 "unify_gen.m"
                                                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_139_139, 3) = ((MR_Box) (ll_backend__unify_gen__Args_15));
#line 623 "unify_gen.m"
                                                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_139_139, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 623 "unify_gen.m"
                                              }
#line 623 "unify_gen.m"
                                              {
#line 623 "unify_gen.m"
                                                mercury__require__expect_4_p_0(ll_backend__unify_gen__V_139_139, (MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_construction_2\'/12", (MR_String) "type_ctor_info constant has args");
                                              }
#line 625 "unify_gen.m"
                                              {
#line 625 "unify_gen.m"
                                                ll_backend__unify_gen__RttiTypeCtor_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 625 "unify_gen.m"
                                                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiTypeCtor_51, 0) = ((MR_Box) (ll_backend__unify_gen__ModuleName_48));
#line 625 "unify_gen.m"
                                                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiTypeCtor_51, 1) = ((MR_Box) (ll_backend__unify_gen__TypeName_49));
#line 625 "unify_gen.m"
                                                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiTypeCtor_51, 2) = ((MR_Box) (ll_backend__unify_gen__TypeArity_50));
#line 625 "unify_gen.m"
                                              }
#line 626 "unify_gen.m"
                                              {
#line 626 "unify_gen.m"
                                                ll_backend__unify_gen__V_144_144 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 626 "unify_gen.m"
                                                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_144_144, 0) = ((MR_Box) (ll_backend__unify_gen__RttiTypeCtor_51));
#line 626 "unify_gen.m"
                                                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_144_144, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
#line 626 "unify_gen.m"
                                              }
#line 626 "unify_gen.m"
                                              {
#line 626 "unify_gen.m"
                                                ll_backend__unify_gen__DataId_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 626 "unify_gen.m"
                                                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__DataId_52, 0) = ((MR_Box) (ll_backend__unify_gen__V_144_144));
#line 626 "unify_gen.m"
                                              }
#line 628 "unify_gen.m"
                                              {
#line 628 "unify_gen.m"
                                                ll_backend__unify_gen__V_148_148 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 628 "unify_gen.m"
                                                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_148_148, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 628 "unify_gen.m"
                                                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_148_148, 1) = ((MR_Box) (ll_backend__unify_gen__DataId_52));
#line 628 "unify_gen.m"
                                                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_148_148, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 628 "unify_gen.m"
                                              }
#line 628 "unify_gen.m"
                                              {
#line 628 "unify_gen.m"
                                                ll_backend__unify_gen__V_146_146 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 628 "unify_gen.m"
                                                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_146_146, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 628 "unify_gen.m"
                                                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_146_146, 1) = ((MR_Box) (ll_backend__unify_gen__V_148_148));
#line 628 "unify_gen.m"
                                              }
#line 628 "unify_gen.m"
                                              {
#line 628 "unify_gen.m"
                                                ll_backend__code_info__assign_const_to_var_4_p_0(ll_backend__unify_gen__Var_14, ll_backend__unify_gen__V_146_146, ll_backend__unify_gen__STATE_VARIABLE_CI_0_75, ll_backend__unify_gen__STATE_VARIABLE_CI_76);
                                              }
#line 629 "unify_gen.m"
                                              {
#line 629 "unify_gen.m"
                                                *ll_backend__unify_gen__Code_22 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                                              }
#line 622 "unify_gen.m"
                                            }
#line 533 "unify_gen.m"
                                          else
#line 533 "unify_gen.m"
                                            if (((((MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_13, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 643 "unify_gen.m"
                                              {
#line 643 "unify_gen.m"
                                                MR_Integer ll_backend__unify_gen__ConstNum_273 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_13, (MR_Integer) 1)));
#line 643 "unify_gen.m"
                                                MR_Word ll_backend__unify_gen__ConstStructMap_274;
#line 643 "unify_gen.m"
                                                MR_Word ll_backend__unify_gen__Rval_275;
#line 643 "unify_gen.m"
                                                MR_Word ll_backend__unify_gen__V_277_277;
#line 645 "unify_gen.m"
                                                MR_Box ll_backend__unify_gen__conv1_V_277_277;
#line 645 "unify_gen.m"
                                                MR_Word ll_backend__unify_gen___Type_272;

#line 644 "unify_gen.m"
                                                {
#line 644 "unify_gen.m"
                                                  ll_backend__code_info__get_const_struct_map_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_75, &ll_backend__unify_gen__ConstStructMap_274);
                                                }
#line 645 "unify_gen.m"
                                                {
#line 645 "unify_gen.m"
                                                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ll_backend__unify_gen__ConstStructMap_274, ll_backend__unify_gen__ConstNum_273, &ll_backend__unify_gen__conv1_V_277_277);
                                                }
#line 645 "unify_gen.m"
                                                ll_backend__unify_gen__V_277_277 = ((MR_Word) ll_backend__unify_gen__conv1_V_277_277);
#line 645 "unify_gen.m"
                                                ll_backend__unify_gen__Rval_275 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_277_277, (MR_Integer) 0)));
#line 645 "unify_gen.m"
                                                ll_backend__unify_gen___Type_272 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_277_277, (MR_Integer) 1)));
#line 646 "unify_gen.m"
                                                {
#line 646 "unify_gen.m"
                                                  ll_backend__code_info__assign_expr_to_var_5_p_0(ll_backend__unify_gen__Var_14, ll_backend__unify_gen__Rval_275, ll_backend__unify_gen__Code_22, ll_backend__unify_gen__STATE_VARIABLE_CI_0_75, ll_backend__unify_gen__STATE_VARIABLE_CI_76);
#line 646 "unify_gen.m"
                                                  return;
                                                }
#line 643 "unify_gen.m"
                                              }
#line 533 "unify_gen.m"
                                            else
#line 533 "unify_gen.m"
                                              if (((((MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_13, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 643 "unify_gen.m"
                                                {
#line 643 "unify_gen.m"
                                                  MR_Integer ll_backend__unify_gen__ConstNum_281 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_13, (MR_Integer) 1)));
#line 643 "unify_gen.m"
                                                  MR_Word ll_backend__unify_gen__ConstStructMap_282;
#line 643 "unify_gen.m"
                                                  MR_Word ll_backend__unify_gen__Rval_283;
#line 643 "unify_gen.m"
                                                  MR_Word ll_backend__unify_gen__V_285_285;
#line 645 "unify_gen.m"
                                                  MR_Box ll_backend__unify_gen__conv2_V_285_285;
#line 645 "unify_gen.m"
                                                  MR_Word ll_backend__unify_gen___Type_280;

#line 644 "unify_gen.m"
                                                  {
#line 644 "unify_gen.m"
                                                    ll_backend__code_info__get_const_struct_map_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_75, &ll_backend__unify_gen__ConstStructMap_282);
                                                  }
#line 645 "unify_gen.m"
                                                  {
#line 645 "unify_gen.m"
                                                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ll_backend__unify_gen__ConstStructMap_282, ll_backend__unify_gen__ConstNum_281, &ll_backend__unify_gen__conv2_V_285_285);
                                                  }
#line 645 "unify_gen.m"
                                                  ll_backend__unify_gen__V_285_285 = ((MR_Word) ll_backend__unify_gen__conv2_V_285_285);
#line 645 "unify_gen.m"
                                                  ll_backend__unify_gen__Rval_283 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_285_285, (MR_Integer) 0)));
#line 645 "unify_gen.m"
                                                  ll_backend__unify_gen___Type_280 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_285_285, (MR_Integer) 1)));
#line 646 "unify_gen.m"
                                                  {
#line 646 "unify_gen.m"
                                                    ll_backend__code_info__assign_expr_to_var_5_p_0(ll_backend__unify_gen__Var_14, ll_backend__unify_gen__Rval_283, ll_backend__unify_gen__Code_22, ll_backend__unify_gen__STATE_VARIABLE_CI_0_75, ll_backend__unify_gen__STATE_VARIABLE_CI_76);
#line 646 "unify_gen.m"
                                                    return;
                                                  }
#line 643 "unify_gen.m"
                                                }
#line 533 "unify_gen.m"
                                              else
#line 575 "unify_gen.m"
                                                {
#line 575 "unify_gen.m"
                                                  MR_Integer ll_backend__unify_gen__Ptag_288 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_13, (MR_Integer) 1)));
#line 575 "unify_gen.m"
                                                  MR_Word ll_backend__unify_gen__ArgTypes_289;
#line 575 "unify_gen.m"
                                                  MR_Word ll_backend__unify_gen__CellArgs0_290;
#line 575 "unify_gen.m"
                                                  MR_Word ll_backend__unify_gen__MayUseAtomic_291;
#line 575 "unify_gen.m"
                                                  MR_Word ll_backend__unify_gen__CellArgs_292;
#line 575 "unify_gen.m"
                                                  MR_Word ll_backend__unify_gen__PackCode_293;
#line 575 "unify_gen.m"
                                                  MR_Word ll_backend__unify_gen__HowToConstruct_294;
#line 575 "unify_gen.m"
                                                  MR_Word ll_backend__unify_gen__Context_295;
#line 575 "unify_gen.m"
                                                  MR_Word ll_backend__unify_gen__ConstructCode_296;
#line 575 "unify_gen.m"
                                                  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_171_297;

#line 576 "unify_gen.m"
                                                  {
#line 576 "unify_gen.m"
                                                    ll_backend__unify_gen__var_types_3_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_75, ll_backend__unify_gen__Args_15, &ll_backend__unify_gen__ArgTypes_289);
                                                  }
#line 577 "unify_gen.m"
                                                  {
#line 577 "unify_gen.m"
                                                    ll_backend__unify_gen__generate_cons_args_8_p_0(ll_backend__unify_gen__Args_15, ll_backend__unify_gen__ArgTypes_289, ll_backend__unify_gen__Modes_16, ll_backend__unify_gen__ArgWidths_17, ll_backend__unify_gen__TakeAddr_19, ll_backend__unify_gen__STATE_VARIABLE_CI_0_75, &ll_backend__unify_gen__CellArgs0_290, &ll_backend__unify_gen__MayUseAtomic_291);
                                                  }
#line 579 "unify_gen.m"
                                                  {
#line 579 "unify_gen.m"
                                                    ll_backend__unify_gen__pack_cell_rvals_6_p_0(ll_backend__unify_gen__ArgWidths_17, ll_backend__unify_gen__CellArgs0_290, &ll_backend__unify_gen__CellArgs_292, &ll_backend__unify_gen__PackCode_293, ll_backend__unify_gen__STATE_VARIABLE_CI_0_75, &ll_backend__unify_gen__STATE_VARIABLE_CI_171_297);
                                                  }
#line 580 "unify_gen.m"
                                                  {
#line 580 "unify_gen.m"
                                                    ll_backend__unify_gen__pack_how_to_construct_3_p_0(ll_backend__unify_gen__ArgWidths_17, ll_backend__unify_gen__HowToConstruct0_18, &ll_backend__unify_gen__HowToConstruct_294);
                                                  }
#line 581 "unify_gen.m"
                                                  {
#line 581 "unify_gen.m"
                                                    ll_backend__unify_gen__Context_295 = hlds__hlds_goal__goal_info_get_context_1_f_0(ll_backend__unify_gen__GoalInfo_21);
                                                  }
#line 582 "unify_gen.m"
                                                  {
#line 582 "unify_gen.m"
                                                    ll_backend__unify_gen__construct_cell_10_p_0(ll_backend__unify_gen__Var_14, ll_backend__unify_gen__Ptag_288, ll_backend__unify_gen__CellArgs_292, ll_backend__unify_gen__HowToConstruct_294, ll_backend__unify_gen__MaybeSize_20, ll_backend__unify_gen__Context_295, ll_backend__unify_gen__MayUseAtomic_291, &ll_backend__unify_gen__ConstructCode_296, ll_backend__unify_gen__STATE_VARIABLE_CI_171_297, ll_backend__unify_gen__STATE_VARIABLE_CI_76);
                                                  }
#line 584 "unify_gen.m"
                                                  {
#line 584 "unify_gen.m"
                                                    *ll_backend__unify_gen__Code_22 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__unify_gen__PackCode_293, ll_backend__unify_gen__ConstructCode_296);
                                                  }
#line 575 "unify_gen.m"
                                                }
#line 533 "unify_gen.m"
      }
#line 533 "unify_gen.m"
      break;
#line 533 "unify_gen.m"
    }
#line 524 "unify_gen.m"
}

#line 511 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_construction_12_p_0(
#line 511 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Var_13,
#line 511 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConsId_14,
#line 511 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Args_15,
#line 511 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Modes_16,
#line 511 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ArgWidths_17,
#line 511 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HowToConstruct_18,
#line 511 "unify_gen.m"
  MR_Word ll_backend__unify_gen__TakeAddr_19,
#line 511 "unify_gen.m"
  MR_Word ll_backend__unify_gen__MaybeSize_20,
#line 511 "unify_gen.m"
  MR_Word ll_backend__unify_gen__GoalInfo_21,
#line 511 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_22,
#line 511 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_26,
#line 511 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_27)
#line 511 "unify_gen.m"
{
#line 518 "unify_gen.m"
  {
#line 518 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 518 "unify_gen.m"
    MR_Word ll_backend__unify_gen__ModuleInfo_24;
#line 518 "unify_gen.m"
    MR_Word ll_backend__unify_gen__Tag_25;

#line 519 "unify_gen.m"
    {
#line 519 "unify_gen.m"
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_26, &ll_backend__unify_gen__ModuleInfo_24);
    }
#line 520 "unify_gen.m"
    {
#line 520 "unify_gen.m"
      ll_backend__unify_gen__Tag_25 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ll_backend__unify_gen__ModuleInfo_24, ll_backend__unify_gen__ConsId_14);
    }
#line 521 "unify_gen.m"
    {
#line 521 "unify_gen.m"
      ll_backend__unify_gen__generate_construction_2_12_p_0(ll_backend__unify_gen__Tag_25, ll_backend__unify_gen__Var_13, ll_backend__unify_gen__Args_15, ll_backend__unify_gen__Modes_16, ll_backend__unify_gen__ArgWidths_17, ll_backend__unify_gen__HowToConstruct_18, ll_backend__unify_gen__TakeAddr_19, ll_backend__unify_gen__MaybeSize_20, ll_backend__unify_gen__GoalInfo_21, ll_backend__unify_gen__Code_22, ll_backend__unify_gen__STATE_VARIABLE_CI_0_26, ll_backend__unify_gen__STATE_VARIABLE_CI_27);
#line 521 "unify_gen.m"
      return;
    }
#line 518 "unify_gen.m"
  }
#line 511 "unify_gen.m"
}

#line 492 "unify_gen.m"
static MR_Word MR_CALL 
ll_backend__unify_gen__generate_reserved_address_1_f_0(
#line 492 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__1_1)
#line 492 "unify_gen.m"
{
#line 494 "unify_gen.m"
  {
#line 494 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 494 "unify_gen.m"
    MR_Word ll_backend__unify_gen__HeadVar__2_2;

#line 494 "unify_gen.m"
    if ((ll_backend__unify_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 494 "unify_gen.m"
      {
#line 494 "unify_gen.m"
        ll_backend__unify_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[8]);
#line 494 "unify_gen.m"
      }
#line 494 "unify_gen.m"
    else
#line 494 "unify_gen.m"
      if (((MR_tag((MR_Word) ll_backend__unify_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 496 "unify_gen.m"
        {
#line 498 "unify_gen.m"
          {
#line 498 "unify_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "function \140ll_backend.unify_gen.generate_reserved_address\'/1", (MR_String) "reserved_object");
          }
#line 496 "unify_gen.m"
        }
#line 494 "unify_gen.m"
      else
#line 495 "unify_gen.m"
        {
#line 495 "unify_gen.m"
          MR_Integer ll_backend__unify_gen__N_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 495 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_6_6;

#line 495 "unify_gen.m"
          {
#line 495 "unify_gen.m"
            ll_backend__unify_gen__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 495 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_6_6, 0) = ((MR_Box) (ll_backend__unify_gen__N_5));
#line 495 "unify_gen.m"
          }
#line 495 "unify_gen.m"
          {
#line 495 "unify_gen.m"
            ll_backend__unify_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 495 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 495 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__HeadVar__2_2, 1) = ((MR_Box) (ll_backend__unify_gen__V_6_6));
#line 495 "unify_gen.m"
          }
#line 495 "unify_gen.m"
        }
#line 494 "unify_gen.m"
    return ll_backend__unify_gen__HeadVar__2_2;
#line 494 "unify_gen.m"
  }
#line 492 "unify_gen.m"
}

#line 482 "unify_gen.m"
static MR_Box MR_CALL 
ll_backend__unify_gen__raw_tag_test_3_p_0_2(
#line 482 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg,
#line 482 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
#line 482 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_2)
#line 482 "unify_gen.m"
{
#line 482 "unify_gen.m"
  {
#line 482 "unify_gen.m"
    MR_Box ll_backend__unify_gen__wrapper_arg_3;
#line 482 "unify_gen.m"
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;
#line 482 "unify_gen.m"
    MR_Word ll_backend__unify_gen__conv0_HeadVar__4_50;

#line 482 "unify_gen.m"
    {
#line 482 "unify_gen.m"
      ll_backend__unify_gen__conv0_HeadVar__4_50 = ll_backend__unify_gen__IntroducedFrom__func__raw_tag_test__482__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__unify_gen__wrapper_arg_1), ((MR_Word) ll_backend__unify_gen__wrapper_arg_2));
    }
#line 482 "unify_gen.m"
    ll_backend__unify_gen__wrapper_arg_3 = ((MR_Box) (ll_backend__unify_gen__conv0_HeadVar__4_50));
#line 482 "unify_gen.m"
    return ll_backend__unify_gen__wrapper_arg_3;
#line 482 "unify_gen.m"
  }
#line 482 "unify_gen.m"
}

#line 413 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__raw_tag_test_3_p_0_1(
#line 413 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg)
#line 413 "unify_gen.m"
{
#line 413 "unify_gen.m"
  {
#line 413 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 413 "unify_gen.m"
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;

#line 413 "unify_gen.m"
    {
#line 413 "unify_gen.m"
      return ll_backend__unify_gen__succeeded = ll_backend__unify_gen__IntroducedFrom__pred__raw_tag_test__413__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 4))));
    }
#line 413 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 413 "unify_gen.m"
  }
#line 413 "unify_gen.m"
}

#line 399 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__raw_tag_test_3_p_0(
#line 399 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Rval_4,
#line 399 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConsTag_5,
#line 399 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__TestRval_6)
#line 399 "unify_gen.m"
{
#line 403 "unify_gen.m"
  {
#line 403 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;

#line 403 "unify_gen.m"
    if ((ll_backend__unify_gen__ConsTag_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 450 "unify_gen.m"
      {
#line 451 "unify_gen.m"
        *ll_backend__unify_gen__TestRval_6 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[7]);
#line 450 "unify_gen.m"
      }
#line 403 "unify_gen.m"
    else
#line 403 "unify_gen.m"
      if ((ll_backend__unify_gen__ConsTag_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 453 "unify_gen.m"
        {
#line 454 "unify_gen.m"
          *ll_backend__unify_gen__TestRval_6 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[7]);
#line 453 "unify_gen.m"
        }
#line 403 "unify_gen.m"
      else
#line 403 "unify_gen.m"
        if (((MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_5)) == (MR_mktag((MR_Integer) 2))))
#line 406 "unify_gen.m"
          {
#line 406 "unify_gen.m"
            MR_Float ll_backend__unify_gen__Float_8 = MR_unbox_float((MR_hl_field(MR_mktag(2), ll_backend__unify_gen__ConsTag_5, (MR_Integer) 0)));
#line 406 "unify_gen.m"
            MR_Word ll_backend__unify_gen__V_122_122;
#line 406 "unify_gen.m"
            MR_Word ll_backend__unify_gen__V_123_123;

#line 407 "unify_gen.m"
            {
#line 407 "unify_gen.m"
              ll_backend__unify_gen__V_123_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 407 "unify_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_123_123, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 407 "unify_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_123_123, 1) = MR_box_float(ll_backend__unify_gen__Float_8);
#line 407 "unify_gen.m"
            }
#line 407 "unify_gen.m"
            {
#line 407 "unify_gen.m"
              ll_backend__unify_gen__V_122_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 407 "unify_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_122_122, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 407 "unify_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_122_122, 1) = ((MR_Box) (ll_backend__unify_gen__V_123_123));
#line 407 "unify_gen.m"
            }
#line 407 "unify_gen.m"
            {
#line 407 "unify_gen.m"
              MR_Word base;
#line 407 "unify_gen.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 407 "unify_gen.m"
              *ll_backend__unify_gen__TestRval_6 = base;
#line 407 "unify_gen.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 407 "unify_gen.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 31))));
#line 407 "unify_gen.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__unify_gen__Rval_4));
#line 407 "unify_gen.m"
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__unify_gen__V_122_122));
#line 407 "unify_gen.m"
            }
#line 406 "unify_gen.m"
          }
#line 403 "unify_gen.m"
        else
#line 403 "unify_gen.m"
          if (((MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_5)) == (MR_mktag((MR_Integer) 1))))
#line 403 "unify_gen.m"
            {
#line 403 "unify_gen.m"
              MR_String ll_backend__unify_gen__String_7 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ConsTag_5, (MR_Integer) 0)));
#line 403 "unify_gen.m"
              MR_Word ll_backend__unify_gen__V_125_125;
#line 403 "unify_gen.m"
              MR_Word ll_backend__unify_gen__V_126_126;

#line 404 "unify_gen.m"
              {
#line 404 "unify_gen.m"
                ll_backend__unify_gen__V_126_126 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 404 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_126_126, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 404 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_126_126, 1) = ((MR_Box) (ll_backend__unify_gen__String_7));
#line 404 "unify_gen.m"
              }
#line 404 "unify_gen.m"
              {
#line 404 "unify_gen.m"
                ll_backend__unify_gen__V_125_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 404 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_125_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 404 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_125_125, 1) = ((MR_Box) (ll_backend__unify_gen__V_126_126));
#line 404 "unify_gen.m"
              }
#line 404 "unify_gen.m"
              {
#line 404 "unify_gen.m"
                MR_Word base;
#line 404 "unify_gen.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 404 "unify_gen.m"
                *ll_backend__unify_gen__TestRval_6 = base;
#line 404 "unify_gen.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 404 "unify_gen.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15))));
#line 404 "unify_gen.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__unify_gen__Rval_4));
#line 404 "unify_gen.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__unify_gen__V_125_125));
#line 404 "unify_gen.m"
              }
#line 403 "unify_gen.m"
            }
#line 403 "unify_gen.m"
          else
#line 403 "unify_gen.m"
            if (((((MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_5, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 426 "unify_gen.m"
              {
#line 427 "unify_gen.m"
                {
#line 427 "unify_gen.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.raw_tag_test\'/3", (MR_String) "Attempted base_typeclass_info unification");
#line 427 "unify_gen.m"
                  return;
                }
#line 426 "unify_gen.m"
              }
#line 403 "unify_gen.m"
            else
#line 403 "unify_gen.m"
              if (((((MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_5, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 418 "unify_gen.m"
                {
#line 421 "unify_gen.m"
                  {
#line 421 "unify_gen.m"
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.raw_tag_test\'/3", (MR_String) "Attempted higher-order unification");
#line 421 "unify_gen.m"
                    return;
                  }
#line 418 "unify_gen.m"
                }
#line 403 "unify_gen.m"
              else
#line 403 "unify_gen.m"
                if (((((MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_5, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 443 "unify_gen.m"
                  {
#line 444 "unify_gen.m"
                    {
#line 444 "unify_gen.m"
                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.raw_tag_test\'/3", (MR_String) "Attempted deep_profiling_proc_layout_tag unification");
#line 444 "unify_gen.m"
                      return;
                    }
#line 443 "unify_gen.m"
                  }
#line 403 "unify_gen.m"
                else
#line 403 "unify_gen.m"
                  if (((((MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_5, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 458 "unify_gen.m"
                    {
#line 458 "unify_gen.m"
                      MR_Integer ll_backend__unify_gen__UnsharedTag_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_5, (MR_Integer) 1)));
#line 458 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__VarPtag_32;
#line 458 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__ConstPtag_33;
#line 458 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__V_77_77;
#line 458 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__V_78_78;

#line 459 "unify_gen.m"
                      {
#line 459 "unify_gen.m"
                        ll_backend__unify_gen__VarPtag_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 459 "unify_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__unify_gen__VarPtag_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 459 "unify_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__unify_gen__VarPtag_32, 1) = ((MR_Box) ((MR_Integer) 1));
#line 459 "unify_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__unify_gen__VarPtag_32, 2) = ((MR_Box) (ll_backend__unify_gen__Rval_4));
#line 459 "unify_gen.m"
                      }
#line 460 "unify_gen.m"
                      {
#line 460 "unify_gen.m"
                        ll_backend__unify_gen__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 460 "unify_gen.m"
                        MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_78_78, 0) = ((MR_Box) (ll_backend__unify_gen__UnsharedTag_31));
#line 460 "unify_gen.m"
                      }
#line 460 "unify_gen.m"
                      {
#line 460 "unify_gen.m"
                        ll_backend__unify_gen__V_77_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 460 "unify_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_77_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 460 "unify_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_77_77, 1) = ((MR_Box) (ll_backend__unify_gen__V_78_78));
#line 460 "unify_gen.m"
                      }
#line 460 "unify_gen.m"
                      {
#line 460 "unify_gen.m"
                        ll_backend__unify_gen__ConstPtag_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 460 "unify_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConstPtag_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 460 "unify_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConstPtag_33, 1) = ((MR_Box) ((MR_Integer) 0));
#line 460 "unify_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConstPtag_33, 2) = ((MR_Box) (ll_backend__unify_gen__V_77_77));
#line 460 "unify_gen.m"
                      }
#line 461 "unify_gen.m"
                      {
#line 461 "unify_gen.m"
                        MR_Word base;
#line 461 "unify_gen.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 461 "unify_gen.m"
                        *ll_backend__unify_gen__TestRval_6 = base;
#line 461 "unify_gen.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 461 "unify_gen.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
#line 461 "unify_gen.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__unify_gen__VarPtag_32));
#line 461 "unify_gen.m"
                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__unify_gen__ConstPtag_33));
#line 461 "unify_gen.m"
                      }
#line 458 "unify_gen.m"
                    }
#line 403 "unify_gen.m"
                  else
#line 403 "unify_gen.m"
                    if (((((MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_5, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 412 "unify_gen.m"
                      {
#line 412 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__ForeignLang_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_5, (MR_Integer) 1)));
#line 412 "unify_gen.m"
                        MR_String ll_backend__unify_gen__ForeignVal_11 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_5, (MR_Integer) 2)));
#line 412 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__V_109_109;
#line 412 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__V_115_115;
#line 412 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__V_116_116;

#line 413 "unify_gen.m"
                        {
#line 413 "unify_gen.m"
                          ll_backend__unify_gen__V_109_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 413 "unify_gen.m"
                          MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_109_109, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_5[1]));
#line 413 "unify_gen.m"
                          MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_109_109, 1) = ((MR_Box) (ll_backend__unify_gen__raw_tag_test_3_p_0_1));
#line 413 "unify_gen.m"
                          MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_109_109, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 413 "unify_gen.m"
                          MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_109_109, 3) = ((MR_Box) (ll_backend__unify_gen__ForeignLang_10));
#line 413 "unify_gen.m"
                          MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_109_109, 4) = ((MR_Box) ((MR_Integer) 0));
#line 413 "unify_gen.m"
                        }
#line 413 "unify_gen.m"
                        {
#line 413 "unify_gen.m"
                          mercury__require__expect_4_p_0(ll_backend__unify_gen__V_109_109, (MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.raw_tag_test\'/3", (MR_String) "foreign tag for language other than C");
                        }
#line 416 "unify_gen.m"
                        {
#line 416 "unify_gen.m"
                          ll_backend__unify_gen__V_116_116 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 416 "unify_gen.m"
                          MR_hl_field(MR_mktag(2), ll_backend__unify_gen__V_116_116, 0) = ((MR_Box) (ll_backend__unify_gen__ForeignVal_11));
#line 416 "unify_gen.m"
                          MR_hl_field(MR_mktag(2), ll_backend__unify_gen__V_116_116, 1) = ((MR_Box) ((MR_Integer) 7));
#line 416 "unify_gen.m"
                        }
#line 415 "unify_gen.m"
                        {
#line 415 "unify_gen.m"
                          ll_backend__unify_gen__V_115_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 415 "unify_gen.m"
                          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_115_115, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 415 "unify_gen.m"
                          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_115_115, 1) = ((MR_Box) (ll_backend__unify_gen__V_116_116));
#line 415 "unify_gen.m"
                        }
#line 415 "unify_gen.m"
                        {
#line 415 "unify_gen.m"
                          MR_Word base;
#line 415 "unify_gen.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 415 "unify_gen.m"
                          *ll_backend__unify_gen__TestRval_6 = base;
#line 415 "unify_gen.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 415 "unify_gen.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
#line 415 "unify_gen.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__unify_gen__Rval_4));
#line 415 "unify_gen.m"
                          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__unify_gen__V_115_115));
#line 415 "unify_gen.m"
                        }
#line 412 "unify_gen.m"
                      }
#line 403 "unify_gen.m"
                    else
#line 403 "unify_gen.m"
                      if (((((MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_5, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 436 "unify_gen.m"
                        {
#line 437 "unify_gen.m"
                          {
#line 437 "unify_gen.m"
                            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.raw_tag_test\'/3", (MR_String) "Attempted ground_term_const_tag unification");
#line 437 "unify_gen.m"
                            return;
                          }
#line 436 "unify_gen.m"
                        }
#line 403 "unify_gen.m"
                      else
#line 403 "unify_gen.m"
                        if (((((MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_5, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 409 "unify_gen.m"
                          {
#line 409 "unify_gen.m"
                            MR_Integer ll_backend__unify_gen__Int_9 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_5, (MR_Integer) 1)));
#line 409 "unify_gen.m"
                            MR_Word ll_backend__unify_gen__V_119_119;
#line 409 "unify_gen.m"
                            MR_Word ll_backend__unify_gen__V_120_120;

#line 410 "unify_gen.m"
                            {
#line 410 "unify_gen.m"
                              ll_backend__unify_gen__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 410 "unify_gen.m"
                              MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_120_120, 0) = ((MR_Box) (ll_backend__unify_gen__Int_9));
#line 410 "unify_gen.m"
                            }
#line 410 "unify_gen.m"
                            {
#line 410 "unify_gen.m"
                              ll_backend__unify_gen__V_119_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 410 "unify_gen.m"
                              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_119_119, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 410 "unify_gen.m"
                              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_119_119, 1) = ((MR_Box) (ll_backend__unify_gen__V_120_120));
#line 410 "unify_gen.m"
                            }
#line 410 "unify_gen.m"
                            {
#line 410 "unify_gen.m"
                              MR_Word base;
#line 410 "unify_gen.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 410 "unify_gen.m"
                              *ll_backend__unify_gen__TestRval_6 = base;
#line 410 "unify_gen.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 410 "unify_gen.m"
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
#line 410 "unify_gen.m"
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__unify_gen__Rval_4));
#line 410 "unify_gen.m"
                              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__unify_gen__V_119_119));
#line 410 "unify_gen.m"
                            }
#line 409 "unify_gen.m"
                          }
#line 403 "unify_gen.m"
                        else
#line 403 "unify_gen.m"
                          if (((((MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_5, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 476 "unify_gen.m"
                            {
#line 476 "unify_gen.m"
                              MR_Word ll_backend__unify_gen__RA_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_5, (MR_Integer) 1)));
#line 476 "unify_gen.m"
                              MR_Word ll_backend__unify_gen__V_56_56;

#line 477 "unify_gen.m"
                              {
#line 477 "unify_gen.m"
                                ll_backend__unify_gen__V_56_56 = ll_backend__unify_gen__generate_reserved_address_1_f_0(ll_backend__unify_gen__RA_40);
                              }
#line 477 "unify_gen.m"
                              {
#line 477 "unify_gen.m"
                                MR_Word base;
#line 477 "unify_gen.m"
                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 477 "unify_gen.m"
                                *ll_backend__unify_gen__TestRval_6 = base;
#line 477 "unify_gen.m"
                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 477 "unify_gen.m"
                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
#line 477 "unify_gen.m"
                                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__unify_gen__Rval_4));
#line 477 "unify_gen.m"
                                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__unify_gen__V_56_56));
#line 477 "unify_gen.m"
                              }
#line 476 "unify_gen.m"
                            }
#line 403 "unify_gen.m"
                          else
#line 403 "unify_gen.m"
                            if (((((MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_5, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 472 "unify_gen.m"
                              {
#line 472 "unify_gen.m"
                                MR_Word ll_backend__unify_gen__V_57_57;
#line 472 "unify_gen.m"
                                MR_Word ll_backend__unify_gen__V_59_59;
#line 472 "unify_gen.m"
                                MR_Word ll_backend__unify_gen__V_60_60;
#line 472 "unify_gen.m"
                                MR_Integer ll_backend__unify_gen__Bits_129 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_5, (MR_Integer) 1)));
#line 472 "unify_gen.m"
                                MR_Integer ll_backend__unify_gen__Num_130 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_5, (MR_Integer) 2)));
#line 472 "unify_gen.m"
                                MR_Word ll_backend__unify_gen__ConstStag_131;

#line 473 "unify_gen.m"
                                {
#line 473 "unify_gen.m"
                                  ll_backend__unify_gen__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 473 "unify_gen.m"
                                  MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_60_60, 0) = ((MR_Box) (ll_backend__unify_gen__Num_130));
#line 473 "unify_gen.m"
                                }
#line 473 "unify_gen.m"
                                {
#line 473 "unify_gen.m"
                                  ll_backend__unify_gen__V_59_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 473 "unify_gen.m"
                                  MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_59_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 473 "unify_gen.m"
                                  MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_59_59, 1) = ((MR_Box) (ll_backend__unify_gen__V_60_60));
#line 473 "unify_gen.m"
                                }
#line 473 "unify_gen.m"
                                {
#line 473 "unify_gen.m"
                                  ll_backend__unify_gen__V_57_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 473 "unify_gen.m"
                                  MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_57_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 473 "unify_gen.m"
                                  MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_57_57, 1) = ((MR_Box) ((MR_Integer) 4));
#line 473 "unify_gen.m"
                                  MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_57_57, 2) = ((MR_Box) (ll_backend__unify_gen__V_59_59));
#line 473 "unify_gen.m"
                                }
#line 473 "unify_gen.m"
                                {
#line 473 "unify_gen.m"
                                  ll_backend__unify_gen__ConstStag_131 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 473 "unify_gen.m"
                                  MR_hl_field(MR_mktag(2), ll_backend__unify_gen__ConstStag_131, 0) = ((MR_Box) (ll_backend__unify_gen__Bits_129));
#line 473 "unify_gen.m"
                                  MR_hl_field(MR_mktag(2), ll_backend__unify_gen__ConstStag_131, 1) = ((MR_Box) (ll_backend__unify_gen__V_57_57));
#line 473 "unify_gen.m"
                                }
#line 474 "unify_gen.m"
                                {
#line 474 "unify_gen.m"
                                  MR_Word base;
#line 474 "unify_gen.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 474 "unify_gen.m"
                                  *ll_backend__unify_gen__TestRval_6 = base;
#line 474 "unify_gen.m"
                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 474 "unify_gen.m"
                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
#line 474 "unify_gen.m"
                                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__unify_gen__Rval_4));
#line 474 "unify_gen.m"
                                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__unify_gen__ConstStag_131));
#line 474 "unify_gen.m"
                                }
#line 472 "unify_gen.m"
                              }
#line 403 "unify_gen.m"
                            else
#line 403 "unify_gen.m"
                              if (((((MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_5, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 463 "unify_gen.m"
                                {
#line 463 "unify_gen.m"
                                  MR_Integer ll_backend__unify_gen__Bits_34 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_5, (MR_Integer) 1)));
#line 463 "unify_gen.m"
                                  MR_Integer ll_backend__unify_gen__Num_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_5, (MR_Integer) 2)));
#line 463 "unify_gen.m"
                                  MR_Word ll_backend__unify_gen__PtagTestRval_36;
#line 463 "unify_gen.m"
                                  MR_Word ll_backend__unify_gen__VarStag_37;
#line 463 "unify_gen.m"
                                  MR_Word ll_backend__unify_gen__ConstStag_38;
#line 463 "unify_gen.m"
                                  MR_Word ll_backend__unify_gen__StagTestRval_39;
#line 463 "unify_gen.m"
                                  MR_Word ll_backend__unify_gen__V_64_64;
#line 463 "unify_gen.m"
                                  MR_Word ll_backend__unify_gen__V_65_65;
#line 463 "unify_gen.m"
                                  MR_Word ll_backend__unify_gen__V_67_67;
#line 463 "unify_gen.m"
                                  MR_Word ll_backend__unify_gen__V_68_68;
#line 463 "unify_gen.m"
                                  MR_Word ll_backend__unify_gen__V_72_72;
#line 463 "unify_gen.m"
                                  MR_Word ll_backend__unify_gen__VarPtag_127;
#line 463 "unify_gen.m"
                                  MR_Word ll_backend__unify_gen__ConstPtag_128;

#line 464 "unify_gen.m"
                                  {
#line 464 "unify_gen.m"
                                    ll_backend__unify_gen__VarPtag_127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 464 "unify_gen.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__VarPtag_127, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 464 "unify_gen.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__VarPtag_127, 1) = ((MR_Box) ((MR_Integer) 1));
#line 464 "unify_gen.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__VarPtag_127, 2) = ((MR_Box) (ll_backend__unify_gen__Rval_4));
#line 464 "unify_gen.m"
                                  }
#line 465 "unify_gen.m"
                                  {
#line 465 "unify_gen.m"
                                    ll_backend__unify_gen__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 465 "unify_gen.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_65_65, 0) = ((MR_Box) (ll_backend__unify_gen__Bits_34));
#line 465 "unify_gen.m"
                                  }
#line 465 "unify_gen.m"
                                  {
#line 465 "unify_gen.m"
                                    ll_backend__unify_gen__V_64_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 465 "unify_gen.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_64_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 465 "unify_gen.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_64_64, 1) = ((MR_Box) (ll_backend__unify_gen__V_65_65));
#line 465 "unify_gen.m"
                                  }
#line 465 "unify_gen.m"
                                  {
#line 465 "unify_gen.m"
                                    ll_backend__unify_gen__ConstPtag_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 465 "unify_gen.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConstPtag_128, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 465 "unify_gen.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConstPtag_128, 1) = ((MR_Box) ((MR_Integer) 0));
#line 465 "unify_gen.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConstPtag_128, 2) = ((MR_Box) (ll_backend__unify_gen__V_64_64));
#line 465 "unify_gen.m"
                                  }
#line 466 "unify_gen.m"
                                  {
#line 466 "unify_gen.m"
                                    ll_backend__unify_gen__PtagTestRval_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 466 "unify_gen.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__PtagTestRval_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 466 "unify_gen.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__PtagTestRval_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
#line 466 "unify_gen.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__PtagTestRval_36, 2) = ((MR_Box) (ll_backend__unify_gen__VarPtag_127));
#line 466 "unify_gen.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__PtagTestRval_36, 3) = ((MR_Box) (ll_backend__unify_gen__ConstPtag_128));
#line 466 "unify_gen.m"
                                  }
#line 467 "unify_gen.m"
                                  {
#line 467 "unify_gen.m"
                                    ll_backend__unify_gen__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 467 "unify_gen.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_68_68, 0) = ((MR_Box) (ll_backend__unify_gen__Bits_34));
#line 467 "unify_gen.m"
                                  }
#line 467 "unify_gen.m"
                                  {
#line 467 "unify_gen.m"
                                    ll_backend__unify_gen__V_67_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 467 "unify_gen.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_67_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 467 "unify_gen.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_67_67, 1) = ((MR_Box) (ll_backend__unify_gen__V_68_68));
#line 467 "unify_gen.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_67_67, 2) = ((MR_Box) (ll_backend__unify_gen__Rval_4));
#line 467 "unify_gen.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_67_67, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[8])));
#line 467 "unify_gen.m"
                                  }
#line 467 "unify_gen.m"
                                  {
#line 467 "unify_gen.m"
                                    ll_backend__unify_gen__VarStag_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 467 "unify_gen.m"
                                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__VarStag_37, 0) = ((MR_Box) (ll_backend__unify_gen__V_67_67));
#line 467 "unify_gen.m"
                                  }
#line 468 "unify_gen.m"
                                  {
#line 468 "unify_gen.m"
                                    ll_backend__unify_gen__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 468 "unify_gen.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_72_72, 0) = ((MR_Box) (ll_backend__unify_gen__Num_35));
#line 468 "unify_gen.m"
                                  }
#line 468 "unify_gen.m"
                                  {
#line 468 "unify_gen.m"
                                    ll_backend__unify_gen__ConstStag_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 468 "unify_gen.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConstStag_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 468 "unify_gen.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConstStag_38, 1) = ((MR_Box) (ll_backend__unify_gen__V_72_72));
#line 468 "unify_gen.m"
                                  }
#line 469 "unify_gen.m"
                                  {
#line 469 "unify_gen.m"
                                    ll_backend__unify_gen__StagTestRval_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 469 "unify_gen.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__StagTestRval_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 469 "unify_gen.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__StagTestRval_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
#line 469 "unify_gen.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__StagTestRval_39, 2) = ((MR_Box) (ll_backend__unify_gen__VarStag_37));
#line 469 "unify_gen.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__StagTestRval_39, 3) = ((MR_Box) (ll_backend__unify_gen__ConstStag_38));
#line 469 "unify_gen.m"
                                  }
#line 470 "unify_gen.m"
                                  {
#line 470 "unify_gen.m"
                                    MR_Word base;
#line 470 "unify_gen.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 470 "unify_gen.m"
                                    *ll_backend__unify_gen__TestRval_6 = base;
#line 470 "unify_gen.m"
                                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 470 "unify_gen.m"
                                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
#line 470 "unify_gen.m"
                                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__unify_gen__PtagTestRval_36));
#line 470 "unify_gen.m"
                                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__unify_gen__StagTestRval_39));
#line 470 "unify_gen.m"
                                  }
#line 463 "unify_gen.m"
                                }
#line 403 "unify_gen.m"
                              else
#line 403 "unify_gen.m"
                                if (((((MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_5, (MR_Integer) 0)))) == (MR_Integer) 16))))
#line 479 "unify_gen.m"
                                  {
#line 479 "unify_gen.m"
                                    MR_Word ll_backend__unify_gen__ReservedAddrs_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_5, (MR_Integer) 1)));
#line 479 "unify_gen.m"
                                    MR_Word ll_backend__unify_gen__ThisTag_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_5, (MR_Integer) 2)));
#line 479 "unify_gen.m"
                                    MR_Word ll_backend__unify_gen__CheckReservedAddrs_43;
#line 479 "unify_gen.m"
                                    MR_Word ll_backend__unify_gen__MatchesThisTag_47;
#line 488 "unify_gen.m"
                                    MR_Box ll_backend__unify_gen__conv1_TestRval_6;

#line 482 "unify_gen.m"
                                    {
#line 482 "unify_gen.m"
                                      ll_backend__unify_gen__CheckReservedAddrs_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 482 "unify_gen.m"
                                      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__CheckReservedAddrs_43, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_7[0]));
#line 482 "unify_gen.m"
                                      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__CheckReservedAddrs_43, 1) = ((MR_Box) (ll_backend__unify_gen__raw_tag_test_3_p_0_2));
#line 482 "unify_gen.m"
                                      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__CheckReservedAddrs_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 482 "unify_gen.m"
                                      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__CheckReservedAddrs_43, 3) = ((MR_Box) (ll_backend__unify_gen__Rval_4));
#line 482 "unify_gen.m"
                                    }
#line 487 "unify_gen.m"
                                    {
#line 487 "unify_gen.m"
                                      ll_backend__unify_gen__raw_tag_test_3_p_0(ll_backend__unify_gen__Rval_4, ll_backend__unify_gen__ThisTag_42, &ll_backend__unify_gen__MatchesThisTag_47);
                                    }
#line 488 "unify_gen.m"
                                    {
#line 488 "unify_gen.m"
                                      ll_backend__unify_gen__conv1_TestRval_6 = mercury__list__foldr_3_f_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_reserved_address_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ll_backend__unify_gen__CheckReservedAddrs_43, ll_backend__unify_gen__ReservedAddrs_41, ((MR_Box) (ll_backend__unify_gen__MatchesThisTag_47)));
                                    }
#line 488 "unify_gen.m"
                                    *ll_backend__unify_gen__TestRval_6 = ((MR_Word) ll_backend__unify_gen__conv1_TestRval_6);
#line 479 "unify_gen.m"
                                  }
#line 403 "unify_gen.m"
                                else
#line 403 "unify_gen.m"
                                  if (((((MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_5, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 447 "unify_gen.m"
                                    {
#line 448 "unify_gen.m"
                                      {
#line 448 "unify_gen.m"
                                        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.raw_tag_test\'/3", (MR_String) "Attempted table_io_decl_tag unification");
#line 448 "unify_gen.m"
                                        return;
                                      }
#line 447 "unify_gen.m"
                                    }
#line 403 "unify_gen.m"
                                  else
#line 403 "unify_gen.m"
                                    if (((((MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_5, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 440 "unify_gen.m"
                                      {
#line 441 "unify_gen.m"
                                        {
#line 441 "unify_gen.m"
                                          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.raw_tag_test\'/3", (MR_String) "Attempted tabling_info unification");
#line 441 "unify_gen.m"
                                          return;
                                        }
#line 440 "unify_gen.m"
                                      }
#line 403 "unify_gen.m"
                                    else
#line 403 "unify_gen.m"
                                      if (((((MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_5, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 423 "unify_gen.m"
                                        {
#line 424 "unify_gen.m"
                                          {
#line 424 "unify_gen.m"
                                            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.raw_tag_test\'/3", (MR_String) "Attempted type_ctor_info unification");
#line 424 "unify_gen.m"
                                            return;
                                          }
#line 423 "unify_gen.m"
                                        }
#line 403 "unify_gen.m"
                                      else
#line 403 "unify_gen.m"
                                        if (((((MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_5, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 429 "unify_gen.m"
                                          {
#line 430 "unify_gen.m"
                                            {
#line 430 "unify_gen.m"
                                              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.raw_tag_test\'/3", (MR_String) "Attempted type_info_const_tag unification");
#line 430 "unify_gen.m"
                                              return;
                                            }
#line 429 "unify_gen.m"
                                          }
#line 403 "unify_gen.m"
                                        else
#line 403 "unify_gen.m"
                                          if (((((MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_5, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 432 "unify_gen.m"
                                            {
#line 433 "unify_gen.m"
                                              {
#line 433 "unify_gen.m"
                                                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.raw_tag_test\'/3", (MR_String) "Attempted typeclass_info_const_tag unification");
#line 433 "unify_gen.m"
                                                return;
                                              }
#line 432 "unify_gen.m"
                                            }
#line 403 "unify_gen.m"
                                          else
#line 458 "unify_gen.m"
                                            {
#line 458 "unify_gen.m"
                                              MR_Integer ll_backend__unify_gen__UnsharedTag_137 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_5, (MR_Integer) 1)));
#line 458 "unify_gen.m"
                                              MR_Word ll_backend__unify_gen__VarPtag_138;
#line 458 "unify_gen.m"
                                              MR_Word ll_backend__unify_gen__ConstPtag_139;
#line 458 "unify_gen.m"
                                              MR_Word ll_backend__unify_gen__V_142_142;
#line 458 "unify_gen.m"
                                              MR_Word ll_backend__unify_gen__V_143_143;

#line 459 "unify_gen.m"
                                              {
#line 459 "unify_gen.m"
                                                ll_backend__unify_gen__VarPtag_138 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 459 "unify_gen.m"
                                                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__VarPtag_138, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 459 "unify_gen.m"
                                                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__VarPtag_138, 1) = ((MR_Box) ((MR_Integer) 1));
#line 459 "unify_gen.m"
                                                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__VarPtag_138, 2) = ((MR_Box) (ll_backend__unify_gen__Rval_4));
#line 459 "unify_gen.m"
                                              }
#line 460 "unify_gen.m"
                                              {
#line 460 "unify_gen.m"
                                                ll_backend__unify_gen__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 460 "unify_gen.m"
                                                MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_143_143, 0) = ((MR_Box) (ll_backend__unify_gen__UnsharedTag_137));
#line 460 "unify_gen.m"
                                              }
#line 460 "unify_gen.m"
                                              {
#line 460 "unify_gen.m"
                                                ll_backend__unify_gen__V_142_142 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 460 "unify_gen.m"
                                                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_142_142, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 460 "unify_gen.m"
                                                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_142_142, 1) = ((MR_Box) (ll_backend__unify_gen__V_143_143));
#line 460 "unify_gen.m"
                                              }
#line 460 "unify_gen.m"
                                              {
#line 460 "unify_gen.m"
                                                ll_backend__unify_gen__ConstPtag_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 460 "unify_gen.m"
                                                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConstPtag_139, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 460 "unify_gen.m"
                                                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConstPtag_139, 1) = ((MR_Box) ((MR_Integer) 0));
#line 460 "unify_gen.m"
                                                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConstPtag_139, 2) = ((MR_Box) (ll_backend__unify_gen__V_142_142));
#line 460 "unify_gen.m"
                                              }
#line 461 "unify_gen.m"
                                              {
#line 461 "unify_gen.m"
                                                MR_Word base;
#line 461 "unify_gen.m"
                                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 461 "unify_gen.m"
                                                *ll_backend__unify_gen__TestRval_6 = base;
#line 461 "unify_gen.m"
                                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 461 "unify_gen.m"
                                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
#line 461 "unify_gen.m"
                                                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__unify_gen__VarPtag_138));
#line 461 "unify_gen.m"
                                                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__unify_gen__ConstPtag_139));
#line 461 "unify_gen.m"
                                              }
#line 458 "unify_gen.m"
                                            }
#line 403 "unify_gen.m"
  }
#line 399 "unify_gen.m"
}

#line 322 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__disjoin_tag_tests_3_p_0(
#line 322 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CurTestRval_4,
#line 322 "unify_gen.m"
  MR_Word ll_backend__unify_gen__OtherTestRvals_5,
#line 322 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__TestRval_6)
#line 322 "unify_gen.m"
{
#line 326 "unify_gen.m"
  while (MR_TRUE)
#line 326 "unify_gen.m"
    {
#line 326 "unify_gen.m"
      /* tailcall optimized into a loop */
#line 326 "unify_gen.m"
      {
#line 326 "unify_gen.m"
        MR_bool ll_backend__unify_gen__succeeded;

#line 326 "unify_gen.m"
        if ((ll_backend__unify_gen__OtherTestRvals_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 327 "unify_gen.m"
          *ll_backend__unify_gen__TestRval_6 = ll_backend__unify_gen__CurTestRval_4;
#line 326 "unify_gen.m"
        else
#line 329 "unify_gen.m"
          {
#line 329 "unify_gen.m"
            MR_Word ll_backend__unify_gen__HeadTestRval_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__OtherTestRvals_5, (MR_Integer) 0)));
#line 329 "unify_gen.m"
            MR_Word ll_backend__unify_gen__TailTestRvals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__OtherTestRvals_5, (MR_Integer) 1)));
#line 329 "unify_gen.m"
            MR_Word ll_backend__unify_gen__NextTestRval_9;

#line 330 "unify_gen.m"
            {
#line 330 "unify_gen.m"
              ll_backend__unify_gen__NextTestRval_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 330 "unify_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__NextTestRval_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 330 "unify_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__NextTestRval_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
#line 330 "unify_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__NextTestRval_9, 2) = ((MR_Box) (ll_backend__unify_gen__CurTestRval_4));
#line 330 "unify_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__NextTestRval_9, 3) = ((MR_Box) (ll_backend__unify_gen__HeadTestRval_7));
#line 330 "unify_gen.m"
            }
#line 331 "unify_gen.m"
            /* direct tailcall eliminated */
#line 331 "unify_gen.m"
            {
#line 331 "unify_gen.m"
              MR_Word ll_backend__unify_gen__CurTestRval__tmp_copy_4 = ll_backend__unify_gen__NextTestRval_9;
#line 331 "unify_gen.m"
              MR_Word ll_backend__unify_gen__OtherTestRvals__tmp_copy_5 = ll_backend__unify_gen__TailTestRvals_8;

#line 331 "unify_gen.m"
              ll_backend__unify_gen__OtherTestRvals_5 = ll_backend__unify_gen__OtherTestRvals__tmp_copy_5;
#line 331 "unify_gen.m"
              ll_backend__unify_gen__CurTestRval_4 = ll_backend__unify_gen__CurTestRval__tmp_copy_4;
#line 331 "unify_gen.m"
            }
#line 331 "unify_gen.m"
            continue;
#line 329 "unify_gen.m"
          }
#line 326 "unify_gen.m"
      }
#line 326 "unify_gen.m"
      break;
#line 326 "unify_gen.m"
    }
#line 322 "unify_gen.m"
}

#line 263 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_test_5_p_0(
#line 263 "unify_gen.m"
  MR_Word ll_backend__unify_gen__VarA_6,
#line 263 "unify_gen.m"
  MR_Word ll_backend__unify_gen__VarB_7,
#line 263 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_8,
#line 263 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_18,
#line 263 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_19)
#line 263 "unify_gen.m"
{
#line 266 "unify_gen.m"
  {
#line 266 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 266 "unify_gen.m"
    MR_Word ll_backend__unify_gen__IsDummy_10;

#line 267 "unify_gen.m"
    {
#line 267 "unify_gen.m"
      ll_backend__unify_gen__IsDummy_10 = ll_backend__code_info__variable_is_of_dummy_type_2_f_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_18, ll_backend__unify_gen__VarA_6);
    }
#line 271 "unify_gen.m"
    if ((ll_backend__unify_gen__IsDummy_10 == (MR_Integer) 0))
#line 269 "unify_gen.m"
      {
#line 270 "unify_gen.m"
        {
#line 270 "unify_gen.m"
          *ll_backend__unify_gen__Code_8 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 270 "unify_gen.m"
        *ll_backend__unify_gen__STATE_VARIABLE_CI_19 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_18;
#line 269 "unify_gen.m"
      }
#line 271 "unify_gen.m"
    else
#line 272 "unify_gen.m"
      {
#line 272 "unify_gen.m"
        MR_Word ll_backend__unify_gen__TypeCtorInfo_28_28;
#line 272 "unify_gen.m"
        MR_Word ll_backend__unify_gen__CodeA_11;
#line 272 "unify_gen.m"
        MR_Word ll_backend__unify_gen__ValA_12;
#line 272 "unify_gen.m"
        MR_Word ll_backend__unify_gen__CodeB_13;
#line 272 "unify_gen.m"
        MR_Word ll_backend__unify_gen__ValB_14;
#line 272 "unify_gen.m"
        MR_Word ll_backend__unify_gen__Type_15;
#line 272 "unify_gen.m"
        MR_Word ll_backend__unify_gen__Op_16;
#line 272 "unify_gen.m"
        MR_Word ll_backend__unify_gen__FailCode_17;
#line 272 "unify_gen.m"
        MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_20_20;
#line 272 "unify_gen.m"
        MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_21_21;
#line 272 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_24_24;
#line 272 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_26_26;
#line 276 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_22_22;

#line 273 "unify_gen.m"
        {
#line 273 "unify_gen.m"
          ll_backend__code_info__produce_variable_5_p_0(ll_backend__unify_gen__VarA_6, &ll_backend__unify_gen__CodeA_11, &ll_backend__unify_gen__ValA_12, ll_backend__unify_gen__STATE_VARIABLE_CI_0_18, &ll_backend__unify_gen__STATE_VARIABLE_CI_20_20);
        }
#line 274 "unify_gen.m"
        {
#line 274 "unify_gen.m"
          ll_backend__code_info__produce_variable_5_p_0(ll_backend__unify_gen__VarB_7, &ll_backend__unify_gen__CodeB_13, &ll_backend__unify_gen__ValB_14, ll_backend__unify_gen__STATE_VARIABLE_CI_20_20, &ll_backend__unify_gen__STATE_VARIABLE_CI_21_21);
        }
#line 275 "unify_gen.m"
        {
#line 275 "unify_gen.m"
          ll_backend__unify_gen__Type_15 = ll_backend__code_info__variable_type_2_f_0(ll_backend__unify_gen__STATE_VARIABLE_CI_21_21, ll_backend__unify_gen__VarA_6);
        }
#line 276 "unify_gen.m"
        ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__Type_15)) == (MR_mktag((MR_Integer) 2)));
#line 276 "unify_gen.m"
        if (ll_backend__unify_gen__succeeded)
#line 276 "unify_gen.m"
          {
#line 276 "unify_gen.m"
            ll_backend__unify_gen__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Type_15, (MR_Integer) 0)));
#line 276 "unify_gen.m"
            ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__V_22_22 == (MR_Integer) 2);
#line 276 "unify_gen.m"
          }
#line 278 "unify_gen.m"
        if (ll_backend__unify_gen__succeeded)
#line 277 "unify_gen.m"
          ll_backend__unify_gen__Op_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15));
#line 278 "unify_gen.m"
        else
#line 280 "unify_gen.m"
          {
#line 278 "unify_gen.m"
            MR_Word ll_backend__unify_gen__V_23_23;

#line 278 "unify_gen.m"
            ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__Type_15)) == (MR_mktag((MR_Integer) 2)));
#line 278 "unify_gen.m"
            if (ll_backend__unify_gen__succeeded)
#line 278 "unify_gen.m"
              {
#line 278 "unify_gen.m"
                ll_backend__unify_gen__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Type_15, (MR_Integer) 0)));
#line 278 "unify_gen.m"
                ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__V_23_23 == (MR_Integer) 1);
#line 278 "unify_gen.m"
              }
#line 280 "unify_gen.m"
            if (ll_backend__unify_gen__succeeded)
#line 279 "unify_gen.m"
              ll_backend__unify_gen__Op_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 31));
#line 280 "unify_gen.m"
            else
#line 281 "unify_gen.m"
              ll_backend__unify_gen__Op_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12));
#line 280 "unify_gen.m"
          }
#line 283 "unify_gen.m"
        {
#line 283 "unify_gen.m"
          ll_backend__unify_gen__V_24_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 283 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_24_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 283 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_24_24, 1) = ((MR_Box) (ll_backend__unify_gen__Op_16));
#line 283 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_24_24, 2) = ((MR_Box) (ll_backend__unify_gen__ValA_12));
#line 283 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_24_24, 3) = ((MR_Box) (ll_backend__unify_gen__ValB_14));
#line 283 "unify_gen.m"
        }
#line 283 "unify_gen.m"
        {
#line 283 "unify_gen.m"
          ll_backend__code_info__fail_if_rval_is_false_4_p_0(ll_backend__unify_gen__V_24_24, &ll_backend__unify_gen__FailCode_17, ll_backend__unify_gen__STATE_VARIABLE_CI_21_21, ll_backend__unify_gen__STATE_VARIABLE_CI_19);
        }
#line 17614 "ll_backend.unify_gen.c"
        ll_backend__unify_gen__TypeCtorInfo_28_28 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 284 "unify_gen.m"
        {
#line 284 "unify_gen.m"
          ll_backend__unify_gen__V_26_26 = mercury__cord__f_43_43_2_f_0(ll_backend__unify_gen__TypeCtorInfo_28_28, ll_backend__unify_gen__CodeB_13, ll_backend__unify_gen__FailCode_17);
        }
#line 284 "unify_gen.m"
        {
#line 284 "unify_gen.m"
          *ll_backend__unify_gen__Code_8 = mercury__cord__f_43_43_2_f_0(ll_backend__unify_gen__TypeCtorInfo_28_28, ll_backend__unify_gen__CodeA_11, ll_backend__unify_gen__V_26_26);
        }
#line 272 "unify_gen.m"
      }
#line 266 "unify_gen.m"
  }
#line 263 "unify_gen.m"
}

#line 221 "unify_gen.m"
static MR_Box MR_CALL 
ll_backend__unify_gen__get_cons_arg_widths_4_p_0_1(
#line 221 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg,
#line 221 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_1)
#line 221 "unify_gen.m"
{
#line 221 "unify_gen.m"
  {
#line 221 "unify_gen.m"
    MR_Box ll_backend__unify_gen__wrapper_arg_2;
#line 221 "unify_gen.m"
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;
#line 221 "unify_gen.m"
    MR_Word ll_backend__unify_gen__conv0_HeadVar__2_22;

#line 221 "unify_gen.m"
    {
#line 221 "unify_gen.m"
      ll_backend__unify_gen__conv0_HeadVar__2_22 = ll_backend__unify_gen__IntroducedFrom__func__get_cons_arg_widths__221__1_1_f_0(((MR_Word) ll_backend__unify_gen__wrapper_arg_1));
    }
#line 221 "unify_gen.m"
    ll_backend__unify_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__unify_gen__conv0_HeadVar__2_22));
#line 221 "unify_gen.m"
    return ll_backend__unify_gen__wrapper_arg_2;
#line 221 "unify_gen.m"
  }
#line 221 "unify_gen.m"
}

#line 212 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__get_cons_arg_widths_4_p_0(
#line 212 "unify_gen.m"
  MR_Word ll_backend__unify_gen__TypeInfo_for_T_41,
#line 212 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ModuleInfo_5,
#line 212 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConsId_6,
#line 212 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Args_7,
#line 212 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__AllArgWidths_8)
#line 212 "unify_gen.m"
{
#line 233 "unify_gen.m"
  {
#line 233 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__unify_gen__ConsId_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsId_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 233 "unify_gen.m"
    MR_Word ll_backend__unify_gen__ConsDefn_12;
#line 217 "unify_gen.m"
    MR_Word ll_backend__unify_gen__TypeCtor_11;
#line 217 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_9_9;
#line 217 "unify_gen.m"
    MR_Integer ll_backend__unify_gen__V_10_10;

#line 217 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 217 "unify_gen.m"
      {
#line 217 "unify_gen.m"
        ll_backend__unify_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsId_6, (MR_Integer) 1)));
#line 217 "unify_gen.m"
        ll_backend__unify_gen__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsId_6, (MR_Integer) 2)));
#line 217 "unify_gen.m"
        ll_backend__unify_gen__TypeCtor_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsId_6, (MR_Integer) 3)));
#line 218 "unify_gen.m"
        {
#line 218 "unify_gen.m"
          ll_backend__unify_gen__succeeded = check_hlds__type_util__get_cons_defn_4_p_0(ll_backend__unify_gen__ModuleInfo_5, ll_backend__unify_gen__TypeCtor_11, ll_backend__unify_gen__ConsId_6, &ll_backend__unify_gen__ConsDefn_12);
        }
#line 217 "unify_gen.m"
      }
#line 233 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 220 "unify_gen.m"
      {
#line 220 "unify_gen.m"
        MR_Word ll_backend__unify_gen__TypeCtorInfo_42_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
#line 220 "unify_gen.m"
        MR_Word ll_backend__unify_gen__TypeCtorInfo_43_43 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0;
#line 220 "unify_gen.m"
        MR_Word ll_backend__unify_gen__ConsArgs_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ConsDefn_12, (MR_Integer) 6)));
#line 220 "unify_gen.m"
        MR_Word ll_backend__unify_gen__ArgWidths_14;
#line 220 "unify_gen.m"
        MR_Integer ll_backend__unify_gen__NumArgs_16;
#line 220 "unify_gen.m"
        MR_Integer ll_backend__unify_gen__NumConsArgs_17;
#line 220 "unify_gen.m"
        MR_Integer ll_backend__unify_gen__NumExtraArgs_18;
#line 220 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ConsDefn_12, (MR_Integer) 0)));
#line 220 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ConsDefn_12, (MR_Integer) 1)));
#line 220 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ConsDefn_12, (MR_Integer) 2)));
#line 220 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ConsDefn_12, (MR_Integer) 3)));
#line 220 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ConsDefn_12, (MR_Integer) 4)));
#line 220 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ConsDefn_12, (MR_Integer) 5)));
#line 220 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ConsDefn_12, (MR_Integer) 7)));

#line 221 "unify_gen.m"
        {
#line 221 "unify_gen.m"
          ll_backend__unify_gen__ArgWidths_14 = mercury__list__map_2_f_0(ll_backend__unify_gen__TypeCtorInfo_42_42, ll_backend__unify_gen__TypeCtorInfo_43_43, (MR_Word) &ll_backend__unify_gen_scalar_common_2[4], ll_backend__unify_gen__ConsArgs_13);
        }
#line 222 "unify_gen.m"
        {
#line 222 "unify_gen.m"
          mercury__list__length_2_p_0(ll_backend__unify_gen__TypeInfo_for_T_41, ll_backend__unify_gen__Args_7, &ll_backend__unify_gen__NumArgs_16);
        }
#line 223 "unify_gen.m"
        {
#line 223 "unify_gen.m"
          mercury__list__length_2_p_0(ll_backend__unify_gen__TypeCtorInfo_42_42, ll_backend__unify_gen__ConsArgs_13, &ll_backend__unify_gen__NumConsArgs_17);
        }
#line 224 "unify_gen.m"
        ll_backend__unify_gen__NumExtraArgs_18 = (ll_backend__unify_gen__NumArgs_16 - ll_backend__unify_gen__NumConsArgs_17);
#line 225 "unify_gen.m"
        ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__NumExtraArgs_18 == (MR_Integer) 0);
#line 227 "unify_gen.m"
        if (ll_backend__unify_gen__succeeded)
#line 226 "unify_gen.m"
          *ll_backend__unify_gen__AllArgWidths_8 = ll_backend__unify_gen__ArgWidths_14;
#line 227 "unify_gen.m"
        else
#line 230 "unify_gen.m"
          {
#line 227 "unify_gen.m"
            ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__NumExtraArgs_18 > (MR_Integer) 0);
#line 230 "unify_gen.m"
            if (ll_backend__unify_gen__succeeded)
#line 228 "unify_gen.m"
              {
#line 228 "unify_gen.m"
                MR_Word ll_backend__unify_gen__ExtraArgWidths_19;

#line 228 "unify_gen.m"
                {
#line 228 "unify_gen.m"
                  ll_backend__unify_gen__ExtraArgWidths_19 = mercury__list__duplicate_2_f_0(ll_backend__unify_gen__TypeCtorInfo_43_43, ll_backend__unify_gen__NumExtraArgs_18, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
                }
#line 229 "unify_gen.m"
                {
#line 229 "unify_gen.m"
                  *ll_backend__unify_gen__AllArgWidths_8 = mercury__list__f_43_43_2_f_0(ll_backend__unify_gen__TypeCtorInfo_43_43, ll_backend__unify_gen__ExtraArgWidths_19, ll_backend__unify_gen__ArgWidths_14);
                }
#line 228 "unify_gen.m"
              }
#line 230 "unify_gen.m"
            else
#line 231 "unify_gen.m"
              {
#line 231 "unify_gen.m"
                {
#line 231 "unify_gen.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.get_cons_arg_widths\'/4", (MR_String) "too few arguments");
#line 231 "unify_gen.m"
                  return;
                }
#line 231 "unify_gen.m"
              }
#line 230 "unify_gen.m"
          }
#line 220 "unify_gen.m"
      }
#line 233 "unify_gen.m"
    else
#line 234 "unify_gen.m"
      {
#line 234 "unify_gen.m"
        MR_Integer ll_backend__unify_gen__V_28_28;

#line 234 "unify_gen.m"
        {
#line 234 "unify_gen.m"
          ll_backend__unify_gen__V_28_28 = mercury__list__length_1_f_0(ll_backend__unify_gen__TypeInfo_for_T_41, ll_backend__unify_gen__Args_7);
        }
#line 234 "unify_gen.m"
        {
#line 234 "unify_gen.m"
          *ll_backend__unify_gen__AllArgWidths_8 = mercury__list__duplicate_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0, ll_backend__unify_gen__V_28_28, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
        }
#line 234 "unify_gen.m"
      }
#line 233 "unify_gen.m"
  }
#line 212 "unify_gen.m"
}

#line 1675 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_const_structs_4_p_0_1(
#line 1675 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg,
#line 1675 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
#line 1675 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
#line 1675 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_3,
#line 1675 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_4,
#line 1675 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_5)
#line 1675 "unify_gen.m"
{
#line 1675 "unify_gen.m"
  {
#line 1675 "unify_gen.m"
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;
#line 1675 "unify_gen.m"
    MR_Word ll_backend__unify_gen__conv1_STATE_VARIABLE_ConstStructMap_22;
#line 1675 "unify_gen.m"
    MR_Word ll_backend__unify_gen__conv0_STATE_VARIABLE_StaticCellInfo_24;

#line 1675 "unify_gen.m"
    {
#line 1675 "unify_gen.m"
      ll_backend__unify_gen__generate_const_struct_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__unify_gen__wrapper_arg_1), ((MR_Word) ll_backend__unify_gen__wrapper_arg_2), &ll_backend__unify_gen__conv1_STATE_VARIABLE_ConstStructMap_22, ((MR_Word) ll_backend__unify_gen__wrapper_arg_4), &ll_backend__unify_gen__conv0_STATE_VARIABLE_StaticCellInfo_24);
    }
#line 1675 "unify_gen.m"
    *ll_backend__unify_gen__wrapper_arg_3 = ((MR_Box) (ll_backend__unify_gen__conv1_STATE_VARIABLE_ConstStructMap_22));
#line 1675 "unify_gen.m"
    *ll_backend__unify_gen__wrapper_arg_5 = ((MR_Box) (ll_backend__unify_gen__conv0_STATE_VARIABLE_StaticCellInfo_24));
#line 1675 "unify_gen.m"
  }
#line 1675 "unify_gen.m"
}

#line 56 "unify_gen.m"
void MR_CALL 
ll_backend__unify_gen__generate_const_structs_4_p_0(
#line 56 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ModuleInfo_5,
#line 56 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__ConstStructMap_6,
#line 56 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_GlobalData_0_15,
#line 56 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_GlobalData_16)
#line 56 "unify_gen.m"
{
#line 1662 "unify_gen.m"
  {
#line 1662 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 1662 "unify_gen.m"
    MR_Word ll_backend__unify_gen__Globals_8;
#line 1662 "unify_gen.m"
    MR_Word ll_backend__unify_gen__UB_9;
#line 1662 "unify_gen.m"
    MR_Word ll_backend__unify_gen__UnboxedFloats_10;
#line 1662 "unify_gen.m"
    MR_Word ll_backend__unify_gen__ConstStructDb_11;
#line 1662 "unify_gen.m"
    MR_Word ll_backend__unify_gen__ConstStructs_12;
#line 1662 "unify_gen.m"
    MR_Word ll_backend__unify_gen__StaticCellInfo0_13;
#line 1662 "unify_gen.m"
    MR_Word ll_backend__unify_gen__StaticCellInfo_14;
#line 1662 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_18_18;
#line 1662 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_19_19;
#line 1675 "unify_gen.m"
    MR_Box ll_backend__unify_gen__conv3_ConstStructMap_6;
#line 1675 "unify_gen.m"
    MR_Box ll_backend__unify_gen__conv2_StaticCellInfo_14;

#line 1663 "unify_gen.m"
    {
#line 1663 "unify_gen.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__unify_gen__ModuleInfo_5, &ll_backend__unify_gen__Globals_8);
    }
#line 1664 "unify_gen.m"
    {
#line 1664 "unify_gen.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__unify_gen__Globals_8, (MR_Integer) 239, &ll_backend__unify_gen__UB_9);
    }
#line 1668 "unify_gen.m"
    if ((ll_backend__unify_gen__UB_9 == (MR_Integer) 0))
#line 1670 "unify_gen.m"
      ll_backend__unify_gen__UnboxedFloats_10 = (MR_Integer) 1;
#line 1668 "unify_gen.m"
    else
#line 1667 "unify_gen.m"
      ll_backend__unify_gen__UnboxedFloats_10 = (MR_Integer) 0;
#line 1672 "unify_gen.m"
    {
#line 1672 "unify_gen.m"
      hlds__hlds_module__module_info_get_const_struct_db_2_p_0(ll_backend__unify_gen__ModuleInfo_5, &ll_backend__unify_gen__ConstStructDb_11);
    }
#line 1673 "unify_gen.m"
    {
#line 1673 "unify_gen.m"
      hlds__const_struct__const_struct_db_get_structs_2_p_0(ll_backend__unify_gen__ConstStructDb_11, &ll_backend__unify_gen__ConstStructs_12);
    }
#line 1674 "unify_gen.m"
    {
#line 1674 "unify_gen.m"
      ll_backend__global_data__global_data_get_static_cell_info_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_GlobalData_0_15, &ll_backend__unify_gen__StaticCellInfo0_13);
    }
#line 1675 "unify_gen.m"
    {
#line 1675 "unify_gen.m"
      ll_backend__unify_gen__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1675 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_18_18, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_4[0]));
#line 1675 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_18_18, 1) = ((MR_Box) (ll_backend__unify_gen__generate_const_structs_4_p_0_1));
#line 1675 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1675 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_18_18, 3) = ((MR_Box) (ll_backend__unify_gen__ModuleInfo_5));
#line 1675 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_18_18, 4) = ((MR_Box) (ll_backend__unify_gen__UnboxedFloats_10));
#line 1675 "unify_gen.m"
    }
#line 1675 "unify_gen.m"
    {
#line 1675 "unify_gen.m"
      ll_backend__unify_gen__V_19_19 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0);
    }
#line 1675 "unify_gen.m"
    {
#line 1675 "unify_gen.m"
      mercury__list__foldl2_6_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_2[0], (MR_Word) &ll_backend__unify_gen_scalar_common_2[1], (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0, ll_backend__unify_gen__V_18_18, ll_backend__unify_gen__ConstStructs_12, ((MR_Box) (ll_backend__unify_gen__V_19_19)), &ll_backend__unify_gen__conv3_ConstStructMap_6, ((MR_Box) (ll_backend__unify_gen__StaticCellInfo0_13)), &ll_backend__unify_gen__conv2_StaticCellInfo_14);
    }
#line 1675 "unify_gen.m"
    *ll_backend__unify_gen__ConstStructMap_6 = ((MR_Word) ll_backend__unify_gen__conv3_ConstStructMap_6);
#line 1675 "unify_gen.m"
    ll_backend__unify_gen__StaticCellInfo_14 = ((MR_Word) ll_backend__unify_gen__conv2_StaticCellInfo_14);
#line 1677 "unify_gen.m"
    {
#line 1677 "unify_gen.m"
      ll_backend__global_data__global_data_set_static_cell_info_3_p_0(ll_backend__unify_gen__StaticCellInfo_14, ll_backend__unify_gen__STATE_VARIABLE_GlobalData_0_15, ll_backend__unify_gen__STATE_VARIABLE_GlobalData_16);
#line 1677 "unify_gen.m"
      return;
    }
#line 1662 "unify_gen.m"
  }
#line 56 "unify_gen.m"
}

#line 53 "unify_gen.m"
void MR_CALL 
ll_backend__unify_gen__generate_ground_term_4_p_0(
#line 53 "unify_gen.m"
  MR_Word ll_backend__unify_gen__TermVar_5,
#line 53 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Goal_6,
#line 53 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_28,
#line 53 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_29)
#line 53 "unify_gen.m"
{
#line 1909 "unify_gen.m"
  {
#line 1909 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 1909 "unify_gen.m"
    MR_Word ll_backend__unify_gen__GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Goal_6, (MR_Integer) 0)));
#line 1909 "unify_gen.m"
    MR_Word ll_backend__unify_gen__GoalInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Goal_6, (MR_Integer) 1)));
#line 1909 "unify_gen.m"
    MR_Word ll_backend__unify_gen__NonLocals_10;
#line 1909 "unify_gen.m"
    MR_Word ll_backend__unify_gen__NonLocalList_11;

#line 1911 "unify_gen.m"
    {
#line 1911 "unify_gen.m"
      ll_backend__unify_gen__NonLocals_10 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(ll_backend__unify_gen__GoalInfo_9);
    }
#line 1912 "unify_gen.m"
    {
#line 1912 "unify_gen.m"
      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__unify_gen__NonLocals_10, &ll_backend__unify_gen__NonLocalList_11);
    }
#line 1917 "unify_gen.m"
    if ((ll_backend__unify_gen__NonLocalList_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1914 "unify_gen.m"
      *ll_backend__unify_gen__STATE_VARIABLE_CI_29 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_28;
#line 1917 "unify_gen.m"
    else
#line 1917 "unify_gen.m"
      {
#line 1917 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__NonLocalList_11, (MR_Integer) 1)));
#line 1917 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__NonLocalList_11, (MR_Integer) 0)));

#line 1917 "unify_gen.m"
        if ((ll_backend__unify_gen__V_54_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1941 "unify_gen.m"
          {
#line 1919 "unify_gen.m"
            {
#line 1919 "unify_gen.m"
              ll_backend__unify_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], ((MR_Box) (ll_backend__unify_gen__V_55_55)), ((MR_Box) (ll_backend__unify_gen__TermVar_5)));
            }
#line 1941 "unify_gen.m"
            if (ll_backend__unify_gen__succeeded)
#line 1938 "unify_gen.m"
              {
#line 1938 "unify_gen.m"
                MR_Word ll_backend__unify_gen__Conjuncts_13;
#line 1920 "unify_gen.m"
                MR_Word ll_backend__unify_gen__V_35_35;

#line 1920 "unify_gen.m"
                ll_backend__unify_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__unify_gen__GoalExpr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__GoalExpr_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1920 "unify_gen.m"
                if (ll_backend__unify_gen__succeeded)
#line 1920 "unify_gen.m"
                  {
#line 1920 "unify_gen.m"
                    ll_backend__unify_gen__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__GoalExpr_8, (MR_Integer) 1)));
#line 1920 "unify_gen.m"
                    ll_backend__unify_gen__Conjuncts_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__GoalExpr_8, (MR_Integer) 2)));
#line 1920 "unify_gen.m"
                    ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__V_35_35 == (MR_Integer) 0);
#line 1920 "unify_gen.m"
                  }
#line 1938 "unify_gen.m"
                if (ll_backend__unify_gen__succeeded)
#line 1921 "unify_gen.m"
                  {
#line 1921 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__TypeInfo_51_51;
#line 1921 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__TypeCtorInfo_52_52;
#line 1921 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__ModuleInfo_14;
#line 1921 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__ExprnOpts_15;
#line 1921 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__UnboxedFloats_16;
#line 1921 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__StaticCellInfo0_17;
#line 1921 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__ActiveMap0_18;
#line 1921 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__StaticCellInfo_19;
#line 1921 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__ActiveMap_20;
#line 1921 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__ActivePairs_21;
#line 1935 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__GroundTerm_22;
#line 1930 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__TypeInfo_57_57;
#line 1930 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__V_36_36;
#line 1930 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__V_37_37;
#line 1930 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__V_53_53;

#line 1921 "unify_gen.m"
                    {
#line 1921 "unify_gen.m"
                      ll_backend__code_info__get_module_info_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_28, &ll_backend__unify_gen__ModuleInfo_14);
                    }
#line 1922 "unify_gen.m"
                    {
#line 1922 "unify_gen.m"
                      ll_backend__code_info__get_exprn_opts_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_28, &ll_backend__unify_gen__ExprnOpts_15);
                    }
#line 1923 "unify_gen.m"
                    {
#line 1923 "unify_gen.m"
                      ll_backend__unify_gen__UnboxedFloats_16 = ll_backend__llds__get_unboxed_floats_1_f_0(ll_backend__unify_gen__ExprnOpts_15);
                    }
#line 1924 "unify_gen.m"
                    {
#line 1924 "unify_gen.m"
                      ll_backend__code_info__get_static_cell_info_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_28, &ll_backend__unify_gen__StaticCellInfo0_17);
                    }
#line 18123 "ll_backend.unify_gen.c"
                    ll_backend__unify_gen__TypeInfo_51_51 = (MR_Word) &ll_backend__unify_gen_scalar_common_1[0];
#line 18125 "ll_backend.unify_gen.c"
                    ll_backend__unify_gen__TypeCtorInfo_52_52 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0;
#line 1925 "unify_gen.m"
                    {
#line 1925 "unify_gen.m"
                      mercury__map__init_1_p_0(ll_backend__unify_gen__TypeInfo_51_51, ll_backend__unify_gen__TypeCtorInfo_52_52, &ll_backend__unify_gen__ActiveMap0_18);
                    }
#line 1926 "unify_gen.m"
                    {
#line 1926 "unify_gen.m"
                      ll_backend__unify_gen__generate_ground_term_conjuncts_7_p_0(ll_backend__unify_gen__ModuleInfo_14, ll_backend__unify_gen__Conjuncts_13, ll_backend__unify_gen__UnboxedFloats_16, ll_backend__unify_gen__StaticCellInfo0_17, &ll_backend__unify_gen__StaticCellInfo_19, ll_backend__unify_gen__ActiveMap0_18, &ll_backend__unify_gen__ActiveMap_20);
                    }
#line 1929 "unify_gen.m"
                    {
#line 1929 "unify_gen.m"
                      mercury__map__to_assoc_list_2_p_0(ll_backend__unify_gen__TypeInfo_51_51, ll_backend__unify_gen__TypeCtorInfo_52_52, ll_backend__unify_gen__ActiveMap_20, &ll_backend__unify_gen__ActivePairs_21);
                    }
#line 1930 "unify_gen.m"
                    ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__ActivePairs_21)) == (MR_mktag((MR_Integer) 1)));
#line 1930 "unify_gen.m"
                    if (ll_backend__unify_gen__succeeded)
#line 1930 "unify_gen.m"
                      {
#line 1930 "unify_gen.m"
                        ll_backend__unify_gen__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ActivePairs_21, (MR_Integer) 0)));
#line 1930 "unify_gen.m"
                        ll_backend__unify_gen__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ActivePairs_21, (MR_Integer) 1)));
#line 1930 "unify_gen.m"
                        ll_backend__unify_gen__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_36_36, (MR_Integer) 0)));
#line 1930 "unify_gen.m"
                        ll_backend__unify_gen__GroundTerm_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_36_36, (MR_Integer) 1)));
#line 18156 "ll_backend.unify_gen.c"
                        ll_backend__unify_gen__TypeInfo_57_57 = (MR_Word) &ll_backend__unify_gen_scalar_common_1[0];
#line 1930 "unify_gen.m"
                        {
#line 1930 "unify_gen.m"
                          ll_backend__unify_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__unify_gen__TypeInfo_57_57, ((MR_Box) (ll_backend__unify_gen__TermVar_5)), ((MR_Box) (ll_backend__unify_gen__V_53_53)));
                        }
#line 1930 "unify_gen.m"
                        if (ll_backend__unify_gen__succeeded)
#line 1930 "unify_gen.m"
                          ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__V_37_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1930 "unify_gen.m"
                      }
#line 1935 "unify_gen.m"
                    if (ll_backend__unify_gen__succeeded)
#line 1931 "unify_gen.m"
                      {
#line 1931 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__Rval_23;
#line 1931 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_38_38;
#line 1931 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_39_39;
#line 1933 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__V_24_24;

#line 1931 "unify_gen.m"
                        {
#line 1931 "unify_gen.m"
                          ll_backend__code_info__add_forward_live_vars_3_p_0(ll_backend__unify_gen__NonLocals_10, ll_backend__unify_gen__STATE_VARIABLE_CI_0_28, &ll_backend__unify_gen__STATE_VARIABLE_CI_38_38);
                        }
#line 1932 "unify_gen.m"
                        {
#line 1932 "unify_gen.m"
                          ll_backend__code_info__set_static_cell_info_3_p_0(ll_backend__unify_gen__StaticCellInfo_19, ll_backend__unify_gen__STATE_VARIABLE_CI_38_38, &ll_backend__unify_gen__STATE_VARIABLE_CI_39_39);
                        }
#line 1933 "unify_gen.m"
                        ll_backend__unify_gen__Rval_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__GroundTerm_22, (MR_Integer) 0)));
#line 1933 "unify_gen.m"
                        ll_backend__unify_gen__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__GroundTerm_22, (MR_Integer) 1)));
#line 1934 "unify_gen.m"
                        {
#line 1934 "unify_gen.m"
                          ll_backend__code_info__assign_const_to_var_4_p_0(ll_backend__unify_gen__TermVar_5, ll_backend__unify_gen__Rval_23, ll_backend__unify_gen__STATE_VARIABLE_CI_39_39, ll_backend__unify_gen__STATE_VARIABLE_CI_29);
#line 1934 "unify_gen.m"
                          return;
                        }
#line 1931 "unify_gen.m"
                      }
#line 1935 "unify_gen.m"
                    else
#line 1936 "unify_gen.m"
                      {
#line 1936 "unify_gen.m"
                        {
#line 1936 "unify_gen.m"
                          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term\'/4", (MR_String) "no active pairs");
#line 1936 "unify_gen.m"
                          return;
                        }
#line 1936 "unify_gen.m"
                      }
#line 1921 "unify_gen.m"
                  }
#line 1938 "unify_gen.m"
                else
#line 1939 "unify_gen.m"
                  {
#line 1939 "unify_gen.m"
                    {
#line 1939 "unify_gen.m"
                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term\'/4", (MR_String) "malformed goal");
#line 1939 "unify_gen.m"
                      return;
                    }
#line 1939 "unify_gen.m"
                  }
#line 1938 "unify_gen.m"
              }
#line 1941 "unify_gen.m"
            else
#line 1942 "unify_gen.m"
              {
#line 1942 "unify_gen.m"
                {
#line 1942 "unify_gen.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term\'/4", (MR_String) "unexpected nonlocal");
#line 1942 "unify_gen.m"
                  return;
                }
#line 1942 "unify_gen.m"
              }
#line 1941 "unify_gen.m"
          }
#line 1917 "unify_gen.m"
        else
#line 1945 "unify_gen.m"
          {
#line 1946 "unify_gen.m"
            {
#line 1946 "unify_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term\'/4", (MR_String) "unexpected nonlocals");
#line 1946 "unify_gen.m"
              return;
            }
#line 1945 "unify_gen.m"
          }
#line 1917 "unify_gen.m"
      }
#line 1909 "unify_gen.m"
  }
#line 53 "unify_gen.m"
}

#line 48 "unify_gen.m"
void MR_CALL 
ll_backend__unify_gen__generate_raw_tag_test_case_11_p_0(
#line 48 "unify_gen.m"
  MR_Word ll_backend__unify_gen__VarRval_12,
#line 48 "unify_gen.m"
  MR_Word ll_backend__unify_gen__VarType_13,
#line 48 "unify_gen.m"
  MR_String ll_backend__unify_gen__VarName_14,
#line 48 "unify_gen.m"
  MR_Word ll_backend__unify_gen__MainTaggedConsId_15,
#line 48 "unify_gen.m"
  MR_Word ll_backend__unify_gen__OtherTaggedConsIds_16,
#line 48 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CheaperTagTest_17,
#line 48 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Sense_18,
#line 48 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__ElseLabel_19,
#line 48 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_20,
#line 48 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_34,
#line 48 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_35)
#line 48 "unify_gen.m"
{
#line 293 "unify_gen.m"
  {
#line 293 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;

#line 293 "unify_gen.m"
    {
#line 293 "unify_gen.m"
      ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_97_119_95_116_97_103_95_116_101_115_116_95_99_97_115_101_95_95_91_50_93_95_48_11_p_0(ll_backend__unify_gen__VarRval_12, ll_backend__unify_gen__VarName_14, ll_backend__unify_gen__MainTaggedConsId_15, ll_backend__unify_gen__OtherTaggedConsIds_16, ll_backend__unify_gen__CheaperTagTest_17, ll_backend__unify_gen__Sense_18, ll_backend__unify_gen__ElseLabel_19, ll_backend__unify_gen__Code_20, ll_backend__unify_gen__STATE_VARIABLE_CI_0_34, ll_backend__unify_gen__STATE_VARIABLE_CI_35);
#line 293 "unify_gen.m"
      return;
    }
#line 293 "unify_gen.m"
  }
#line 48 "unify_gen.m"
}

#line 44 "unify_gen.m"
void MR_CALL 
ll_backend__unify_gen__generate_tag_test_8_p_0(
#line 44 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Var_9,
#line 44 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConsId_10,
#line 44 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CheaperTagTest_11,
#line 44 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Sense_12,
#line 44 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__ElseLabel_13,
#line 44 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_14,
#line 44 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_21,
#line 44 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_22)
#line 44 "unify_gen.m"
{
#line 336 "unify_gen.m"
  {
#line 336 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 336 "unify_gen.m"
    MR_Word ll_backend__unify_gen__VarCode_16;
#line 336 "unify_gen.m"
    MR_Word ll_backend__unify_gen__VarRval_17;
#line 336 "unify_gen.m"
    MR_String ll_backend__unify_gen__VarName_19;
#line 336 "unify_gen.m"
    MR_Word ll_backend__unify_gen__TestCode_20;
#line 336 "unify_gen.m"
    MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_23_23;
#line 336 "unify_gen.m"
    MR_String ll_backend__unify_gen__ConsIdName_39;
#line 336 "unify_gen.m"
    MR_String ll_backend__unify_gen__Comment_44;
#line 336 "unify_gen.m"
    MR_Word ll_backend__unify_gen__TestRval_46;
#line 336 "unify_gen.m"
    MR_Word ll_backend__unify_gen__TheRval_49;
#line 336 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_61_61;
#line 336 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_62_62;
#line 336 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_63_63;
#line 338 "unify_gen.m"
    MR_Word ll_backend__unify_gen__VarType_18;
#line 365 "unify_gen.m"
    MR_Word ll_backend__unify_gen__CheapConsTag_43;
#line 358 "unify_gen.m"
    MR_Word ll_backend__unify_gen__ExpensiveConsId_40;
#line 357 "unify_gen.m"
    MR_Word ll_backend__unify_gen___ExpensiveConsTag_41;
#line 357 "unify_gen.m"
    MR_Word ll_backend__unify_gen___CheapConsId_42;

#line 337 "unify_gen.m"
    {
#line 337 "unify_gen.m"
      ll_backend__code_info__produce_variable_5_p_0(ll_backend__unify_gen__Var_9, &ll_backend__unify_gen__VarCode_16, &ll_backend__unify_gen__VarRval_17, ll_backend__unify_gen__STATE_VARIABLE_CI_0_21, &ll_backend__unify_gen__STATE_VARIABLE_CI_23_23);
    }
#line 338 "unify_gen.m"
    {
#line 338 "unify_gen.m"
      ll_backend__unify_gen__VarType_18 = ll_backend__code_info__variable_type_2_f_0(ll_backend__unify_gen__STATE_VARIABLE_CI_23_23, ll_backend__unify_gen__Var_9);
    }
#line 339 "unify_gen.m"
    {
#line 339 "unify_gen.m"
      ll_backend__unify_gen__VarName_19 = ll_backend__code_info__variable_name_2_f_0(ll_backend__unify_gen__STATE_VARIABLE_CI_23_23, ll_backend__unify_gen__Var_9);
    }
#line 351 "unify_gen.m"
    {
#line 351 "unify_gen.m"
      ll_backend__unify_gen__ConsIdName_39 = hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_f_0(ll_backend__unify_gen__ConsId_10);
    }
#line 357 "unify_gen.m"
    ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__CheaperTagTest_11)) == (MR_mktag((MR_Integer) 1)));
#line 357 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 357 "unify_gen.m"
      {
#line 357 "unify_gen.m"
        ll_backend__unify_gen__ExpensiveConsId_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CheaperTagTest_11, (MR_Integer) 0)));
#line 357 "unify_gen.m"
        ll_backend__unify_gen___ExpensiveConsTag_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CheaperTagTest_11, (MR_Integer) 1)));
#line 357 "unify_gen.m"
        ll_backend__unify_gen___CheapConsId_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CheaperTagTest_11, (MR_Integer) 2)));
#line 357 "unify_gen.m"
        ll_backend__unify_gen__CheapConsTag_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CheaperTagTest_11, (MR_Integer) 3)));
#line 359 "unify_gen.m"
        {
#line 359 "unify_gen.m"
          ll_backend__unify_gen__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ll_backend__unify_gen__ConsId_10, ll_backend__unify_gen__ExpensiveConsId_40);
        }
#line 357 "unify_gen.m"
      }
#line 365 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 362 "unify_gen.m"
      {
#line 362 "unify_gen.m"
        MR_Word ll_backend__unify_gen__NegTestRval_45;
#line 362 "unify_gen.m"
        MR_String ll_backend__unify_gen__V_50_50;
#line 362 "unify_gen.m"
        MR_String ll_backend__unify_gen__V_51_51;
#line 362 "unify_gen.m"
        MR_String ll_backend__unify_gen__V_52_52;
#line 362 "unify_gen.m"
        MR_String ll_backend__unify_gen__V_54_54;

#line 392 "unify_gen.m"
        if ((ll_backend__unify_gen__Sense_12 == (MR_Integer) 1))
#line 394 "unify_gen.m"
          ll_backend__unify_gen__V_50_50 = (MR_String) "branch away unless ";
#line 392 "unify_gen.m"
        else
#line 392 "unify_gen.m"
          ll_backend__unify_gen__V_50_50 = (MR_String) "branch away if ";
#line 362 "unify_gen.m"
        {
#line 362 "unify_gen.m"
          ll_backend__unify_gen__V_54_54 = mercury__string__f_43_43_2_f_0(ll_backend__unify_gen__ConsIdName_39, (MR_String) " (inverted test)");
        }
#line 361 "unify_gen.m"
        {
#line 361 "unify_gen.m"
          ll_backend__unify_gen__V_52_52 = mercury__string__f_43_43_2_f_0((MR_String) " has functor ", ll_backend__unify_gen__V_54_54);
        }
#line 361 "unify_gen.m"
        {
#line 361 "unify_gen.m"
          ll_backend__unify_gen__V_51_51 = mercury__string__f_43_43_2_f_0(ll_backend__unify_gen__VarName_19, ll_backend__unify_gen__V_52_52);
        }
#line 361 "unify_gen.m"
        {
#line 361 "unify_gen.m"
          ll_backend__unify_gen__Comment_44 = mercury__string__f_43_43_2_f_0(ll_backend__unify_gen__V_50_50, ll_backend__unify_gen__V_51_51);
        }
#line 363 "unify_gen.m"
        {
#line 363 "unify_gen.m"
          ll_backend__unify_gen__raw_tag_test_3_p_0(ll_backend__unify_gen__VarRval_17, ll_backend__unify_gen__CheapConsTag_43, &ll_backend__unify_gen__NegTestRval_45);
        }
#line 364 "unify_gen.m"
        {
#line 364 "unify_gen.m"
          ll_backend__code_util__neg_rval_2_p_0(ll_backend__unify_gen__NegTestRval_45, &ll_backend__unify_gen__TestRval_46);
        }
#line 362 "unify_gen.m"
      }
#line 365 "unify_gen.m"
    else
#line 367 "unify_gen.m"
      {
#line 367 "unify_gen.m"
        MR_Word ll_backend__unify_gen__ConsTag_47;
#line 367 "unify_gen.m"
        MR_Word ll_backend__unify_gen__ModuleInfo_48;
#line 367 "unify_gen.m"
        MR_String ll_backend__unify_gen__V_56_56;
#line 367 "unify_gen.m"
        MR_String ll_backend__unify_gen__V_57_57;
#line 367 "unify_gen.m"
        MR_String ll_backend__unify_gen__V_58_58;

#line 392 "unify_gen.m"
        if ((ll_backend__unify_gen__Sense_12 == (MR_Integer) 1))
#line 394 "unify_gen.m"
          ll_backend__unify_gen__V_56_56 = (MR_String) "branch away unless ";
#line 392 "unify_gen.m"
        else
#line 392 "unify_gen.m"
          ll_backend__unify_gen__V_56_56 = (MR_String) "branch away if ";
#line 366 "unify_gen.m"
        {
#line 366 "unify_gen.m"
          ll_backend__unify_gen__V_58_58 = mercury__string__f_43_43_2_f_0((MR_String) " has functor ", ll_backend__unify_gen__ConsIdName_39);
        }
#line 366 "unify_gen.m"
        {
#line 366 "unify_gen.m"
          ll_backend__unify_gen__V_57_57 = mercury__string__f_43_43_2_f_0(ll_backend__unify_gen__VarName_19, ll_backend__unify_gen__V_58_58);
        }
#line 366 "unify_gen.m"
        {
#line 366 "unify_gen.m"
          ll_backend__unify_gen__Comment_44 = mercury__string__f_43_43_2_f_0(ll_backend__unify_gen__V_56_56, ll_backend__unify_gen__V_57_57);
        }
#line 373 "unify_gen.m"
        {
#line 373 "unify_gen.m"
          ll_backend__code_info__get_module_info_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_23_23, &ll_backend__unify_gen__ModuleInfo_48);
        }
#line 374 "unify_gen.m"
        {
#line 374 "unify_gen.m"
          ll_backend__unify_gen__ConsTag_47 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ll_backend__unify_gen__ModuleInfo_48, ll_backend__unify_gen__ConsId_10);
        }
#line 376 "unify_gen.m"
        {
#line 376 "unify_gen.m"
          ll_backend__unify_gen__raw_tag_test_3_p_0(ll_backend__unify_gen__VarRval_17, ll_backend__unify_gen__ConsTag_47, &ll_backend__unify_gen__TestRval_46);
        }
#line 367 "unify_gen.m"
      }
#line 378 "unify_gen.m"
    {
#line 378 "unify_gen.m"
      ll_backend__code_info__get_next_label_3_p_0(ll_backend__unify_gen__ElseLabel_13, ll_backend__unify_gen__STATE_VARIABLE_CI_23_23, ll_backend__unify_gen__STATE_VARIABLE_CI_22);
    }
#line 382 "unify_gen.m"
    if ((ll_backend__unify_gen__Sense_12 == (MR_Integer) 1))
#line 384 "unify_gen.m"
      {
#line 384 "unify_gen.m"
        ll_backend__code_util__neg_rval_2_p_0(ll_backend__unify_gen__TestRval_46, &ll_backend__unify_gen__TheRval_49);
      }
#line 382 "unify_gen.m"
    else
#line 381 "unify_gen.m"
      ll_backend__unify_gen__TheRval_49 = ll_backend__unify_gen__TestRval_46;
#line 387 "unify_gen.m"
    {
#line 387 "unify_gen.m"
      ll_backend__unify_gen__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 387 "unify_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_63_63, 0) = ((MR_Box) (*ll_backend__unify_gen__ElseLabel_13));
#line 387 "unify_gen.m"
    }
#line 387 "unify_gen.m"
    {
#line 387 "unify_gen.m"
      ll_backend__unify_gen__V_62_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 387 "unify_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_62_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 387 "unify_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_62_62, 1) = ((MR_Box) (ll_backend__unify_gen__TheRval_49));
#line 387 "unify_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_62_62, 2) = ((MR_Box) (ll_backend__unify_gen__V_63_63));
#line 387 "unify_gen.m"
    }
#line 386 "unify_gen.m"
    {
#line 386 "unify_gen.m"
      ll_backend__unify_gen__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 386 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_61_61, 0) = ((MR_Box) (ll_backend__unify_gen__V_62_62));
#line 386 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_61_61, 1) = ((MR_Box) (ll_backend__unify_gen__Comment_44));
#line 386 "unify_gen.m"
    }
#line 386 "unify_gen.m"
    {
#line 386 "unify_gen.m"
      ll_backend__unify_gen__TestCode_20 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__unify_gen__V_61_61)));
    }
#line 342 "unify_gen.m"
    {
#line 342 "unify_gen.m"
      *ll_backend__unify_gen__Code_14 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__unify_gen__VarCode_16, ll_backend__unify_gen__TestCode_20);
    }
#line 336 "unify_gen.m"
  }
#line 44 "unify_gen.m"
}

#line 184 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_unification_6_p_0_1(
#line 184 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg,
#line 184 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
#line 184 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
#line 184 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_3)
#line 184 "unify_gen.m"
{
#line 184 "unify_gen.m"
  {
#line 184 "unify_gen.m"
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;
#line 184 "unify_gen.m"
    MR_Word ll_backend__unify_gen__conv0_HeadVar__3_3;

#line 184 "unify_gen.m"
    {
#line 184 "unify_gen.m"
      ll_backend__code_info__release_reg_3_p_0(((MR_Word) ll_backend__unify_gen__wrapper_arg_1), ((MR_Word) ll_backend__unify_gen__wrapper_arg_2), &ll_backend__unify_gen__conv0_HeadVar__3_3);
    }
#line 184 "unify_gen.m"
    *ll_backend__unify_gen__wrapper_arg_3 = ((MR_Box) (ll_backend__unify_gen__conv0_HeadVar__3_3));
#line 184 "unify_gen.m"
  }
#line 184 "unify_gen.m"
}

#line 41 "unify_gen.m"
void MR_CALL 
ll_backend__unify_gen__generate_unification_6_p_0(
#line 41 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CodeModel_7,
#line 41 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Uni_8,
#line 41 "unify_gen.m"
  MR_Word ll_backend__unify_gen__GoalInfo_9,
#line 41 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_10,
#line 41 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_41,
#line 41 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_42)
#line 41 "unify_gen.m"
{
#line 121 "unify_gen.m"
  {
#line 121 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;

#line 124 "unify_gen.m"
    if ((ll_backend__unify_gen__CodeModel_7 == (MR_Integer) 0))
#line 123 "unify_gen.m"
      {
#line 123 "unify_gen.m"
      }
#line 124 "unify_gen.m"
    else
#line 124 "unify_gen.m"
      if ((ll_backend__unify_gen__CodeModel_7 == (MR_Integer) 2))
#line 127 "unify_gen.m"
        {
#line 128 "unify_gen.m"
          {
#line 128 "unify_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_unification\'/6", (MR_String) "nondet unification");
#line 128 "unify_gen.m"
            return;
          }
#line 127 "unify_gen.m"
        }
#line 124 "unify_gen.m"
      else
#line 125 "unify_gen.m"
        {
#line 125 "unify_gen.m"
        }
#line 137 "unify_gen.m"
    if (((MR_tag((MR_Word) ll_backend__unify_gen__Uni_8)) == (MR_mktag((MR_Integer) 2))))
#line 131 "unify_gen.m"
      {
#line 131 "unify_gen.m"
        MR_Word ll_backend__unify_gen__Left_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Uni_8, (MR_Integer) 0)));
#line 131 "unify_gen.m"
        MR_Word ll_backend__unify_gen__Right_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Uni_8, (MR_Integer) 1)));

#line 132 "unify_gen.m"
        {
#line 132 "unify_gen.m"
          ll_backend__unify_gen__succeeded = ll_backend__code_info__variable_is_forward_live_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_41, ll_backend__unify_gen__Left_12);
        }
#line 134 "unify_gen.m"
        if (ll_backend__unify_gen__succeeded)
#line 246 "unify_gen.m"
          {
#line 246 "unify_gen.m"
            {
#line 246 "unify_gen.m"
              *ll_backend__unify_gen__Code_10 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
            }
#line 247 "unify_gen.m"
            {
#line 247 "unify_gen.m"
              ll_backend__unify_gen__succeeded = ll_backend__code_info__variable_is_forward_live_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_41, ll_backend__unify_gen__Left_12);
            }
#line 249 "unify_gen.m"
            if (ll_backend__unify_gen__succeeded)
#line 248 "unify_gen.m"
              {
#line 248 "unify_gen.m"
                ll_backend__code_info__assign_var_to_var_4_p_0(ll_backend__unify_gen__Left_12, ll_backend__unify_gen__Right_13, ll_backend__unify_gen__STATE_VARIABLE_CI_0_41, ll_backend__unify_gen__STATE_VARIABLE_CI_42);
#line 248 "unify_gen.m"
                return;
              }
#line 249 "unify_gen.m"
            else
#line 248 "unify_gen.m"
              *ll_backend__unify_gen__STATE_VARIABLE_CI_42 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_41;
#line 246 "unify_gen.m"
          }
#line 134 "unify_gen.m"
        else
#line 135 "unify_gen.m"
          {
#line 135 "unify_gen.m"
            {
#line 135 "unify_gen.m"
              *ll_backend__unify_gen__Code_10 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
            }
#line 135 "unify_gen.m"
            *ll_backend__unify_gen__STATE_VARIABLE_CI_42 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_41;
#line 135 "unify_gen.m"
          }
#line 131 "unify_gen.m"
      }
#line 137 "unify_gen.m"
    else
#line 137 "unify_gen.m"
      if (((MR_tag((MR_Word) ll_backend__unify_gen__Uni_8)) == (MR_mktag((MR_Integer) 0))))
#line 138 "unify_gen.m"
        {
#line 138 "unify_gen.m"
          MR_Word ll_backend__unify_gen__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Uni_8, (MR_Integer) 0)));
#line 138 "unify_gen.m"
          MR_Word ll_backend__unify_gen__ConsId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Uni_8, (MR_Integer) 1)));
#line 138 "unify_gen.m"
          MR_Word ll_backend__unify_gen__Args_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Uni_8, (MR_Integer) 2)));
#line 138 "unify_gen.m"
          MR_Word ll_backend__unify_gen__Modes_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Uni_8, (MR_Integer) 3)));
#line 138 "unify_gen.m"
          MR_Word ll_backend__unify_gen__HowToConstruct_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Uni_8, (MR_Integer) 4)));
#line 138 "unify_gen.m"
          MR_Word ll_backend__unify_gen__SubInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Uni_8, (MR_Integer) 6)));
#line 138 "unify_gen.m"
          MR_Word ll_backend__unify_gen__MaybeTakeAddr_21;
#line 138 "unify_gen.m"
          MR_Word ll_backend__unify_gen__MaybeSize_22;
#line 138 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Uni_8, (MR_Integer) 5)));

#line 143 "unify_gen.m"
          if ((ll_backend__unify_gen__SubInfo_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 140 "unify_gen.m"
            {
#line 141 "unify_gen.m"
              ll_backend__unify_gen__MaybeTakeAddr_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 142 "unify_gen.m"
              ll_backend__unify_gen__MaybeSize_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 140 "unify_gen.m"
            }
#line 143 "unify_gen.m"
          else
#line 144 "unify_gen.m"
            {
#line 144 "unify_gen.m"
              ll_backend__unify_gen__MaybeTakeAddr_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__SubInfo_20, (MR_Integer) 0)));
#line 144 "unify_gen.m"
              ll_backend__unify_gen__MaybeSize_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__SubInfo_20, (MR_Integer) 1)));
#line 144 "unify_gen.m"
            }
#line 147 "unify_gen.m"
          {
#line 147 "unify_gen.m"
            ll_backend__unify_gen__succeeded = ll_backend__code_info__variable_is_forward_live_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_41, ll_backend__unify_gen__Var_14);
          }
#line 148 "unify_gen.m"
          if (!(ll_backend__unify_gen__succeeded))
#line 148 "unify_gen.m"
            {
#line 148 "unify_gen.m"
              MR_Word ll_backend__unify_gen__V_23_23;

#line 148 "unify_gen.m"
              ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__MaybeTakeAddr_21)) == (MR_mktag((MR_Integer) 1)));
#line 148 "unify_gen.m"
              if (ll_backend__unify_gen__succeeded)
#line 148 "unify_gen.m"
                ll_backend__unify_gen__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__MaybeTakeAddr_21, (MR_Integer) 0)));
#line 148 "unify_gen.m"
            }
#line 161 "unify_gen.m"
          if (ll_backend__unify_gen__succeeded)
#line 156 "unify_gen.m"
            {
#line 156 "unify_gen.m"
              MR_Word ll_backend__unify_gen__TakeAddr_24;
#line 156 "unify_gen.m"
              MR_Word ll_backend__unify_gen__ModuleInfo_25;
#line 156 "unify_gen.m"
              MR_Word ll_backend__unify_gen__ConsArgWidths_26;

#line 153 "unify_gen.m"
              if ((ll_backend__unify_gen__MaybeTakeAddr_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 155 "unify_gen.m"
                ll_backend__unify_gen__TakeAddr_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 153 "unify_gen.m"
              else
#line 152 "unify_gen.m"
                ll_backend__unify_gen__TakeAddr_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__MaybeTakeAddr_21, (MR_Integer) 0)));
#line 157 "unify_gen.m"
              {
#line 157 "unify_gen.m"
                ll_backend__code_info__get_module_info_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_41, &ll_backend__unify_gen__ModuleInfo_25);
              }
#line 158 "unify_gen.m"
              {
#line 158 "unify_gen.m"
                ll_backend__unify_gen__get_cons_arg_widths_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], ll_backend__unify_gen__ModuleInfo_25, ll_backend__unify_gen__ConsId_15, ll_backend__unify_gen__Args_16, &ll_backend__unify_gen__ConsArgWidths_26);
              }
#line 159 "unify_gen.m"
              {
#line 159 "unify_gen.m"
                ll_backend__unify_gen__generate_construction_12_p_0(ll_backend__unify_gen__Var_14, ll_backend__unify_gen__ConsId_15, ll_backend__unify_gen__Args_16, ll_backend__unify_gen__Modes_17, ll_backend__unify_gen__ConsArgWidths_26, ll_backend__unify_gen__HowToConstruct_18, ll_backend__unify_gen__TakeAddr_24, ll_backend__unify_gen__MaybeSize_22, ll_backend__unify_gen__GoalInfo_9, ll_backend__unify_gen__Code_10, ll_backend__unify_gen__STATE_VARIABLE_CI_0_41, ll_backend__unify_gen__STATE_VARIABLE_CI_42);
#line 159 "unify_gen.m"
                return;
              }
#line 156 "unify_gen.m"
            }
#line 161 "unify_gen.m"
          else
#line 162 "unify_gen.m"
            {
#line 162 "unify_gen.m"
              {
#line 162 "unify_gen.m"
                *ll_backend__unify_gen__Code_10 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
#line 162 "unify_gen.m"
              *ll_backend__unify_gen__STATE_VARIABLE_CI_42 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_41;
#line 162 "unify_gen.m"
            }
#line 138 "unify_gen.m"
        }
#line 137 "unify_gen.m"
      else
#line 137 "unify_gen.m"
        if (((MR_tag((MR_Word) ll_backend__unify_gen__Uni_8)) == (MR_mktag((MR_Integer) 1))))
#line 165 "unify_gen.m"
          {
#line 165 "unify_gen.m"
            MR_Word ll_backend__unify_gen__CanCGC_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Uni_8, (MR_Integer) 5)));
#line 165 "unify_gen.m"
            MR_Word ll_backend__unify_gen__Code0_29;
#line 165 "unify_gen.m"
            MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_54_54;
#line 165 "unify_gen.m"
            MR_Word ll_backend__unify_gen__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Uni_8, (MR_Integer) 0)));
#line 165 "unify_gen.m"
            MR_Word ll_backend__unify_gen__ConsId_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Uni_8, (MR_Integer) 1)));
#line 165 "unify_gen.m"
            MR_Word ll_backend__unify_gen__Args_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Uni_8, (MR_Integer) 2)));
#line 165 "unify_gen.m"
            MR_Word ll_backend__unify_gen__Modes_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Uni_8, (MR_Integer) 3)));
#line 165 "unify_gen.m"
            MR_Word ll_backend__unify_gen__ModuleInfo_73;
#line 165 "unify_gen.m"
            MR_Word ll_backend__unify_gen__ConsArgWidths_74;
#line 165 "unify_gen.m"
            MR_Word ll_backend__unify_gen___CanFail_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Uni_8, (MR_Integer) 4)));

#line 166 "unify_gen.m"
            {
#line 166 "unify_gen.m"
              ll_backend__code_info__get_module_info_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_41, &ll_backend__unify_gen__ModuleInfo_73);
            }
#line 167 "unify_gen.m"
            {
#line 167 "unify_gen.m"
              ll_backend__unify_gen__get_cons_arg_widths_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], ll_backend__unify_gen__ModuleInfo_73, ll_backend__unify_gen__ConsId_70, ll_backend__unify_gen__Args_71, &ll_backend__unify_gen__ConsArgWidths_74);
            }
#line 172 "unify_gen.m"
            if ((ll_backend__unify_gen__CodeModel_7 == (MR_Integer) 0))
#line 170 "unify_gen.m"
              {
#line 170 "unify_gen.m"
                ll_backend__unify_gen__generate_det_deconstruction_8_p_0(ll_backend__unify_gen__Var_69, ll_backend__unify_gen__ConsId_70, ll_backend__unify_gen__Args_71, ll_backend__unify_gen__Modes_72, ll_backend__unify_gen__ConsArgWidths_74, &ll_backend__unify_gen__Code0_29, ll_backend__unify_gen__STATE_VARIABLE_CI_0_41, &ll_backend__unify_gen__STATE_VARIABLE_CI_54_54);
              }
#line 172 "unify_gen.m"
            else
#line 174 "unify_gen.m"
              {
#line 174 "unify_gen.m"
                ll_backend__unify_gen__generate_semi_deconstruction_8_p_0(ll_backend__unify_gen__Var_69, ll_backend__unify_gen__ConsId_70, ll_backend__unify_gen__Args_71, ll_backend__unify_gen__Modes_72, ll_backend__unify_gen__ConsArgWidths_74, &ll_backend__unify_gen__Code0_29, ll_backend__unify_gen__STATE_VARIABLE_CI_0_41, &ll_backend__unify_gen__STATE_VARIABLE_CI_54_54);
              }
#line 194 "unify_gen.m"
            if ((ll_backend__unify_gen__CanCGC_28 == (MR_Integer) 0))
#line 178 "unify_gen.m"
              {
#line 178 "unify_gen.m"
                MR_String ll_backend__unify_gen__VarName_30;
#line 178 "unify_gen.m"
                MR_Word ll_backend__unify_gen__ProduceVar_31;
#line 178 "unify_gen.m"
                MR_Word ll_backend__unify_gen__VarRval_32;
#line 178 "unify_gen.m"
                MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_55_55;
#line 191 "unify_gen.m"
                MR_Word ll_backend__unify_gen__VarLval_33;

#line 179 "unify_gen.m"
                {
#line 179 "unify_gen.m"
                  ll_backend__unify_gen__VarName_30 = ll_backend__code_info__variable_name_2_f_0(ll_backend__unify_gen__STATE_VARIABLE_CI_54_54, ll_backend__unify_gen__Var_69);
                }
#line 180 "unify_gen.m"
                {
#line 180 "unify_gen.m"
                  ll_backend__code_info__produce_variable_5_p_0(ll_backend__unify_gen__Var_69, &ll_backend__unify_gen__ProduceVar_31, &ll_backend__unify_gen__VarRval_32, ll_backend__unify_gen__STATE_VARIABLE_CI_54_54, &ll_backend__unify_gen__STATE_VARIABLE_CI_55_55);
                }
#line 181 "unify_gen.m"
                ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__VarRval_32)) == (MR_mktag((MR_Integer) 0)));
#line 181 "unify_gen.m"
                if (ll_backend__unify_gen__succeeded)
#line 181 "unify_gen.m"
                  {
#line 181 "unify_gen.m"
                    ll_backend__unify_gen__VarLval_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__VarRval_32, (MR_Integer) 0)));
#line 182 "unify_gen.m"
                    {
#line 182 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__TypeCtorInfo_86_86;
#line 182 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__SaveArgs_34;
#line 182 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__Regs_35;
#line 182 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__FreeVar_36;
#line 182 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_56_56;
#line 182 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__V_59_59;
#line 182 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__V_60_60;
#line 182 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__V_61_61;
#line 182 "unify_gen.m"
                      MR_String ll_backend__unify_gen__V_63_63;
#line 182 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__V_65_65;
#line 182 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__V_66_66;
#line 184 "unify_gen.m"
                      MR_Box ll_backend__unify_gen__conv1_STATE_VARIABLE_CI_42;

#line 182 "unify_gen.m"
                      {
#line 182 "unify_gen.m"
                        ll_backend__code_info__save_reused_cell_fields_6_p_0(ll_backend__unify_gen__Var_69, ll_backend__unify_gen__VarLval_33, &ll_backend__unify_gen__SaveArgs_34, &ll_backend__unify_gen__Regs_35, ll_backend__unify_gen__STATE_VARIABLE_CI_55_55, &ll_backend__unify_gen__STATE_VARIABLE_CI_56_56);
                      }
#line 184 "unify_gen.m"
                      {
#line 184 "unify_gen.m"
                        mercury__list__foldl_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, (MR_Word) &ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_0, (MR_Word) &ll_backend__unify_gen_scalar_common_2[3], ll_backend__unify_gen__Regs_35, ((MR_Box) (ll_backend__unify_gen__STATE_VARIABLE_CI_56_56)), &ll_backend__unify_gen__conv1_STATE_VARIABLE_CI_42);
                      }
#line 184 "unify_gen.m"
                      *ll_backend__unify_gen__STATE_VARIABLE_CI_42 = ((MR_Word) ll_backend__unify_gen__conv1_STATE_VARIABLE_CI_42);
#line 18966 "ll_backend.unify_gen.c"
                      ll_backend__unify_gen__TypeCtorInfo_86_86 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 187 "unify_gen.m"
                      {
#line 187 "unify_gen.m"
                        ll_backend__unify_gen__V_61_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 187 "unify_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_61_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 187 "unify_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_61_61, 1) = ((MR_Box) ((MR_Integer) 3));
#line 187 "unify_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_61_61, 2) = ((MR_Box) (ll_backend__unify_gen__VarRval_32));
#line 187 "unify_gen.m"
                      }
#line 187 "unify_gen.m"
                      {
#line 187 "unify_gen.m"
                        ll_backend__unify_gen__V_60_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 187 "unify_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_60_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
#line 187 "unify_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_60_60, 1) = ((MR_Box) (ll_backend__unify_gen__V_61_61));
#line 187 "unify_gen.m"
                      }
#line 187 "unify_gen.m"
                      {
#line 187 "unify_gen.m"
                        ll_backend__unify_gen__V_63_63 = mercury__string__f_43_43_2_f_0((MR_String) "Free ", ll_backend__unify_gen__VarName_30);
                      }
#line 186 "unify_gen.m"
                      {
#line 186 "unify_gen.m"
                        ll_backend__unify_gen__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 186 "unify_gen.m"
                        MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_59_59, 0) = ((MR_Box) (ll_backend__unify_gen__V_60_60));
#line 186 "unify_gen.m"
                        MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_59_59, 1) = ((MR_Box) (ll_backend__unify_gen__V_63_63));
#line 186 "unify_gen.m"
                      }
#line 186 "unify_gen.m"
                      {
#line 186 "unify_gen.m"
                        ll_backend__unify_gen__FreeVar_36 = mercury__cord__singleton_1_f_0(ll_backend__unify_gen__TypeCtorInfo_86_86, ((MR_Box) (ll_backend__unify_gen__V_59_59)));
                      }
#line 190 "unify_gen.m"
                      {
#line 190 "unify_gen.m"
                        ll_backend__unify_gen__V_66_66 = mercury__cord__f_43_43_2_f_0(ll_backend__unify_gen__TypeCtorInfo_86_86, ll_backend__unify_gen__SaveArgs_34, ll_backend__unify_gen__FreeVar_36);
                      }
#line 190 "unify_gen.m"
                      {
#line 190 "unify_gen.m"
                        ll_backend__unify_gen__V_65_65 = mercury__cord__f_43_43_2_f_0(ll_backend__unify_gen__TypeCtorInfo_86_86, ll_backend__unify_gen__ProduceVar_31, ll_backend__unify_gen__V_66_66);
                      }
#line 190 "unify_gen.m"
                      {
#line 190 "unify_gen.m"
                        *ll_backend__unify_gen__Code_10 = mercury__cord__f_43_43_2_f_0(ll_backend__unify_gen__TypeCtorInfo_86_86, ll_backend__unify_gen__Code0_29, ll_backend__unify_gen__V_65_65);
                      }
#line 182 "unify_gen.m"
                    }
#line 181 "unify_gen.m"
                  }
#line 181 "unify_gen.m"
                else
#line 192 "unify_gen.m"
                  {
#line 192 "unify_gen.m"
                    *ll_backend__unify_gen__Code_10 = ll_backend__unify_gen__Code0_29;
#line 192 "unify_gen.m"
                    *ll_backend__unify_gen__STATE_VARIABLE_CI_42 = ll_backend__unify_gen__STATE_VARIABLE_CI_55_55;
#line 192 "unify_gen.m"
                  }
#line 178 "unify_gen.m"
              }
#line 194 "unify_gen.m"
            else
#line 195 "unify_gen.m"
              {
#line 196 "unify_gen.m"
                *ll_backend__unify_gen__Code_10 = ll_backend__unify_gen__Code0_29;
#line 196 "unify_gen.m"
                *ll_backend__unify_gen__STATE_VARIABLE_CI_42 = ll_backend__unify_gen__STATE_VARIABLE_CI_54_54;
#line 195 "unify_gen.m"
              }
#line 165 "unify_gen.m"
          }
#line 137 "unify_gen.m"
        else
#line 137 "unify_gen.m"
          if (((((MR_tag((MR_Word) ll_backend__unify_gen__Uni_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Uni_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 208 "unify_gen.m"
            {
#line 209 "unify_gen.m"
              {
#line 209 "unify_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_unification\'/6", (MR_String) "complicated unify");
#line 209 "unify_gen.m"
                return;
              }
#line 208 "unify_gen.m"
            }
#line 137 "unify_gen.m"
          else
#line 199 "unify_gen.m"
            {
#line 199 "unify_gen.m"
              MR_Word ll_backend__unify_gen__Var1_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Uni_8, (MR_Integer) 1)));
#line 199 "unify_gen.m"
              MR_Word ll_backend__unify_gen__Var2_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Uni_8, (MR_Integer) 2)));

#line 200 "unify_gen.m"
              ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__CodeModel_7 == (MR_Integer) 0);
#line 202 "unify_gen.m"
              if (ll_backend__unify_gen__succeeded)
#line 201 "unify_gen.m"
                {
#line 201 "unify_gen.m"
                  {
#line 201 "unify_gen.m"
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_unification\'/6", (MR_String) "det simple_test");
#line 201 "unify_gen.m"
                    return;
                  }
#line 201 "unify_gen.m"
                }
#line 202 "unify_gen.m"
              else
#line 203 "unify_gen.m"
                {
#line 203 "unify_gen.m"
                  ll_backend__unify_gen__generate_test_5_p_0(ll_backend__unify_gen__Var1_37, ll_backend__unify_gen__Var2_38, ll_backend__unify_gen__Code_10, ll_backend__unify_gen__STATE_VARIABLE_CI_0_41, ll_backend__unify_gen__STATE_VARIABLE_CI_42);
#line 203 "unify_gen.m"
                  return;
                }
#line 199 "unify_gen.m"
            }
#line 121 "unify_gen.m"
  }
#line 41 "unify_gen.m"
}

void mercury__ll_backend__unify_gen__init(void)
{
}

void mercury__ll_backend__unify_gen__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__unify_gen__ll_backend__unify_gen__type_ctor_info_active_ground_term_map_0);
	MR_register_type_ctor_info(&ll_backend__unify_gen__ll_backend__unify_gen__type_ctor_info_field_addr_0);
	MR_register_type_ctor_info(&ll_backend__unify_gen__ll_backend__unify_gen__type_ctor_info_test_sense_0);
	MR_register_type_ctor_info(&ll_backend__unify_gen__ll_backend__unify_gen__type_ctor_info_uni_val_0);
}

void mercury__ll_backend__unify_gen__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.unify_gen. */
