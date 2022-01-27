/*
** Automatically generated from `unify_gen.m'
** by the Mercury compiler,
** version DEV
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
#include "hlds.goal_form.mih"
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
#include "hlds.vartypes.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
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
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 168 "ll_backend.unify_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__unify_gen__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__const_struct__type_ctor_info_const_struct_0;

#line 171 "ll_backend.unify_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__unify_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_typed_rval_0;

#line 174 "ll_backend.unify_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__unify_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 177 "ll_backend.unify_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 180 "ll_backend.unify_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

#line 183 "ll_backend.unify_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0;

#line 186 "ll_backend.unify_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_cell_arg_0;

#line 189 "ll_backend.unify_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0;

#line 192 "ll_backend.unify_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_needs_update_0;

#line 195 "ll_backend.unify_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__list__pti_list_1__plain_ll_backend__unify_gen__type_ctor_info_field_addr_0;

#line 198 "ll_backend.unify_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 201 "ll_backend.unify_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__unify_gen__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_ll_backend__llds__type_ctor_info_typed_rval_0;

#line 204 "ll_backend.unify_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_typed_rval_0;

#line 207 "ll_backend.unify_gen.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__unify_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ll_backend__llds__type_ctor_info_typed_rval_0;

#line 210 "ll_backend.unify_gen.c"
static const MR_PseudoTypeInfo ll_backend__unify_gen__ll_backend__unify_gen__field_types_field_addr_0_0[2];

#line 213 "ll_backend.unify_gen.c"
static const MR_ConstString ll_backend__unify_gen__ll_backend__unify_gen__field_names_field_addr_0_0[2];

#line 216 "ll_backend.unify_gen.c"
static const MR_DuFunctorDesc ll_backend__unify_gen__ll_backend__unify_gen__du_functor_desc_field_addr_0_0;

#line 219 "ll_backend.unify_gen.c"
static const MR_DuFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__du_stag_ordered_field_addr_0_0[1];

#line 222 "ll_backend.unify_gen.c"
static const MR_DuPtagLayout ll_backend__unify_gen__ll_backend__unify_gen__du_ptag_ordered_field_addr_0[1];

#line 225 "ll_backend.unify_gen.c"
static const MR_DuFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__du_name_ordered_field_addr_0[1];

#line 228 "ll_backend.unify_gen.c"
static const MR_Integer ll_backend__unify_gen__ll_backend__unify_gen__functor_number_map_field_addr_0[1];

#line 231 "ll_backend.unify_gen.c"
static const MR_EnumFunctorDesc ll_backend__unify_gen__ll_backend__unify_gen__enum_functor_desc_test_sense_0_0;

#line 234 "ll_backend.unify_gen.c"
static const MR_EnumFunctorDesc ll_backend__unify_gen__ll_backend__unify_gen__enum_functor_desc_test_sense_0_1;

#line 237 "ll_backend.unify_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__enum_value_ordered_test_sense_0[2];

#line 240 "ll_backend.unify_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__enum_name_ordered_test_sense_0[2];

#line 243 "ll_backend.unify_gen.c"
static const MR_Integer ll_backend__unify_gen__ll_backend__unify_gen__functor_number_map_test_sense_0[2];

#line 246 "ll_backend.unify_gen.c"
static const MR_PseudoTypeInfo ll_backend__unify_gen__ll_backend__unify_gen__field_types_uni_val_0_0[1];

#line 249 "ll_backend.unify_gen.c"
static const MR_DuFunctorDesc ll_backend__unify_gen__ll_backend__unify_gen__du_functor_desc_uni_val_0_0;

#line 252 "ll_backend.unify_gen.c"
static const MR_PseudoTypeInfo ll_backend__unify_gen__ll_backend__unify_gen__field_types_uni_val_0_1[2];

#line 255 "ll_backend.unify_gen.c"
static const MR_DuFunctorDesc ll_backend__unify_gen__ll_backend__unify_gen__du_functor_desc_uni_val_0_1;

#line 258 "ll_backend.unify_gen.c"
static const MR_DuFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__du_stag_ordered_uni_val_0_0[1];

#line 261 "ll_backend.unify_gen.c"
static const MR_DuFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__du_stag_ordered_uni_val_0_1[1];

#line 264 "ll_backend.unify_gen.c"
static const MR_DuPtagLayout ll_backend__unify_gen__ll_backend__unify_gen__du_ptag_ordered_uni_val_0[2];

#line 267 "ll_backend.unify_gen.c"
static const MR_DuFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__du_name_ordered_uni_val_0[2];

#line 270 "ll_backend.unify_gen.c"
static const MR_Integer ll_backend__unify_gen__ll_backend__unify_gen__functor_number_map_uni_val_0[2];

#line 273 "ll_backend.unify_gen.c"
static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____active_ground_term_map_0_0_10001(
#line 276 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
#line 278 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_2);

#line 281 "ll_backend.unify_gen.c"
static void MR_CALL 
ll_backend__unify_gen____Compare____active_ground_term_map_0_0_10001(
#line 284 "ll_backend.unify_gen.c"
  MR_Box * ll_backend__unify_gen__wrapper_arg_1,
#line 286 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
#line 288 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_3);

#line 291 "ll_backend.unify_gen.c"
static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____field_addr_0_0_10001(
#line 294 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
#line 296 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_2);

#line 299 "ll_backend.unify_gen.c"
static void MR_CALL 
ll_backend__unify_gen____Compare____field_addr_0_0_10001(
#line 302 "ll_backend.unify_gen.c"
  MR_Box * ll_backend__unify_gen__wrapper_arg_1,
#line 304 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
#line 306 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_3);

#line 309 "ll_backend.unify_gen.c"
static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____test_sense_0_0_10001(
#line 312 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
#line 314 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_2);

#line 317 "ll_backend.unify_gen.c"
static void MR_CALL 
ll_backend__unify_gen____Compare____test_sense_0_0_10001(
#line 320 "ll_backend.unify_gen.c"
  MR_Box * ll_backend__unify_gen__wrapper_arg_1,
#line 322 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
#line 324 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_3);

#line 327 "ll_backend.unify_gen.c"
static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____uni_val_0_0_10001(
#line 330 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
#line 332 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_2);

#line 335 "ll_backend.unify_gen.c"
static void MR_CALL 
ll_backend__unify_gen____Compare____uni_val_0_0_10001(
#line 338 "ll_backend.unify_gen.c"
  MR_Box * ll_backend__unify_gen__wrapper_arg_1,
#line 340 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
#line 342 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_3);

#line 1847 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_95_115_116_114_117_99_116_95_97_114_103_95_116_97_103_95_95_91_49_44_32_51_93_95_48_6_p_0_1(
#line 1847 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg);

#line 1831 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_95_115_116_114_117_99_116_95_97_114_103_95_116_97_103_95_95_91_49_44_32_51_93_95_48_6_p_0(
#line 1831 "unify_gen.m"
  MR_Word ll_backend__unify_gen__UnboxedFloats_8,
#line 1831 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConsTag_10,
#line 1831 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ArgWidth_11,
#line 1831 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__TypedRval_12);

#line 1715 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_95_115_116_114_117_99_116_95_114_118_97_108_95_95_91_52_93_95_48_10_p_0(
#line 1715 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ModuleInfo_11,
#line 1715 "unify_gen.m"
  MR_Word ll_backend__unify_gen__UnboxedFloats_12,
#line 1715 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConstStructMap_13,
#line 1715 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConsTag_15,
#line 1715 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConstArgs_16,
#line 1715 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConsArgWidths_17,
#line 1715 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__TypedRval_18,
#line 1715 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_70,
#line 1715 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_71);

#line 1281 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_10_p_0(
#line 1281 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Var_11,
#line 1281 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Args_13,
#line 1281 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Modes_14,
#line 1281 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ArgWidths_15,
#line 1281 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Tag_16,
#line 1281 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_17,
#line 1281 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CI_18,
#line 1281 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_64,
#line 1281 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_65);

#line 719 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_11_p_0(
#line 719 "unify_gen.m"
  MR_Word ll_backend__unify_gen__PredId_12,
#line 719 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__ProcId_13,
#line 719 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Var_15,
#line 719 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Args_16,
#line 719 "unify_gen.m"
  MR_Word ll_backend__unify_gen__GoalInfo_17,
#line 719 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_18,
#line 719 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_99,
#line 719 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_100,
#line 719 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_101,
#line 719 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_102);

#line 349 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_97_119_95_116_97_103_95_116_101_115_116_95_95_91_50_93_95_48_11_p_0(
#line 349 "unify_gen.m"
  MR_Word ll_backend__unify_gen__VarRval_12,
#line 349 "unify_gen.m"
  MR_String ll_backend__unify_gen__VarName_14,
#line 349 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConsId_15,
#line 349 "unify_gen.m"
  MR_Word ll_backend__unify_gen__MaybeConsTag_16,
#line 349 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CheaperTagTest_17,
#line 349 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Sense_18,
#line 349 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__ElseLabel_19,
#line 349 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_20,
#line 349 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_33,
#line 349 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_34);

#line 311 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_97_119_95_116_97_103_95_116_101_115_116_95_99_97_115_101_95_95_91_50_93_95_48_11_p_0_2(
#line 311 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg,
#line 311 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
#line 311 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_2);

#line 306 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_97_119_95_116_97_103_95_116_101_115_116_95_99_97_115_101_95_95_91_50_93_95_48_11_p_0_1(
#line 306 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg,
#line 306 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
#line 306 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_2,
#line 306 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_3);

#line 2195 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__shift_combine_arg__2195__1_2_p_0(
#line 2195 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__Shift_12,
#line 2195 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__HeadVar__2_41);

#line 2024 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_ground_term_conjunct_tag__2024__1_2_p_0(
#line 2024 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Lang_21,
#line 2024 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_119);

#line 1847 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_const_struct_arg_tag__1847__1_2_p_0(
#line 1847 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Lang_17,
#line 1847 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_71);

#line 632 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__632__1_2_p_0(
#line 632 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Args_17,
#line 632 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_150);

#line 660 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__660__1_2_p_0(
#line 660 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Args_17,
#line 660 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_127);

#line 687 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__687__1_2_p_0(
#line 687 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Args_17,
#line 687 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_107);

#line 695 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__695__1_2_p_0(
#line 695 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Args_17,
#line 695 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_100);

#line 549 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__549__1_2_p_0(
#line 549 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Lang_29,
#line 549 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_200);

#line 670 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__670__1_2_p_0(
#line 670 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Args_17,
#line 670 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_117);

#line 710 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__710__1_2_p_0(
#line 710 "unify_gen.m"
  MR_Word ll_backend__unify_gen__MaybeSize_22,
#line 710 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_91);

#line 708 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__708__1_2_p_0(
#line 708 "unify_gen.m"
  MR_Word ll_backend__unify_gen__TakeAddr_21,
#line 708 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_86);

#line 642 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__642__1_2_p_0(
#line 642 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Args_17,
#line 642 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_139);

#line 487 "unify_gen.m"
static MR_Word MR_CALL 
ll_backend__unify_gen__IntroducedFrom__func__raw_tag_test__487__1_3_f_0(
#line 487 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Rval_4,
#line 487 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_48,
#line 487 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__3_49);

#line 418 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__raw_tag_test__418__1_2_p_0(
#line 418 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ForeignLang_10,
#line 418 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_113);

#line 225 "unify_gen.m"
static MR_Word MR_CALL 
ll_backend__unify_gen__IntroducedFrom__func__get_cons_arg_widths__225__1_1_f_0(
#line 225 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__1_21);

#line 110 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen____Compare____uni_val_0_0(
#line 110 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__HeadVar__1_1,
#line 110 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_2,
#line 110 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__3_3);

#line 110 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____uni_val_0_0(
#line 110 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__1_1,
#line 110 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_2);

#line 116 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen____Compare____field_addr_0_0(
#line 116 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__HeadVar__1_1,
#line 116 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_2,
#line 116 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__3_3);

#line 116 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____field_addr_0_0(
#line 116 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__1_1,
#line 116 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_2);

#line 1969 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen____Compare____active_ground_term_map_0_0(
#line 1969 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__HeadVar__1_1,
#line 1969 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_2,
#line 1969 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__3_3);

#line 1969 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____active_ground_term_map_0_0(
#line 1969 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__1_1,
#line 1969 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_2);

#line 2265 "unify_gen.m"
static MR_Word MR_CALL 
ll_backend__unify_gen__bitwise_or_cell_arg_2_f_0(
#line 2265 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CellArgA_4,
#line 2265 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CellArgB_5);

#line 2260 "unify_gen.m"
static MR_Word MR_CALL 
ll_backend__unify_gen__right_shift_rval_2_f_0(
#line 2260 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Rval_4,
#line 2260 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__Shift_5);

#line 2242 "unify_gen.m"
static MR_Word MR_CALL 
ll_backend__unify_gen__maybe_left_shift_rval_2_f_0(
#line 2242 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Rval_4,
#line 2242 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__Shift_5);

#line 2222 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__shift_combine_rval_type_8_p_0(
#line 2222 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ArgA_9,
#line 2222 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__Shift_10,
#line 2222 "unify_gen.m"
  MR_Word ll_backend__unify_gen__MaybeArgB_11,
#line 2222 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__FinalArg_12);

#line 2195 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__shift_combine_arg_9_p_0_1(
#line 2195 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg);

#line 2159 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__shift_combine_arg_9_p_0(
#line 2159 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CI_10,
#line 2159 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CellArgA_11,
#line 2159 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__Shift_12,
#line 2159 "unify_gen.m"
  MR_Word ll_backend__unify_gen__MaybeCellArgB_13,
#line 2159 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__FinalCellArg_14,
#line 2159 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_Code_0_30,
#line 2159 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_Code_31,
#line 2159 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_32,
#line 2159 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_33);

#line 2155 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__pack_ground_term_args_3_p_0_1(
#line 2155 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg,
#line 2155 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
#line 2155 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
#line 2155 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_3,
#line 2155 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_4,
#line 2155 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_5,
#line 2155 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_6,
#line 2155 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_7,
#line 2155 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_8);

#line 2151 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__pack_ground_term_args_3_p_0(
#line 2151 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Widths_4,
#line 2151 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_TypedRvals_0_8,
#line 2151 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_TypedRvals_9);

#line 2134 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_ground_term_arg_5_p_0(
#line 2134 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Var_6,
#line 2134 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConsArgWidth_7,
#line 2134 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__TypedRval_8,
#line 2134 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_12,
#line 2134 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_13);

#line 2131 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_ground_term_args_5_p_0_1(
#line 2131 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg,
#line 2131 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
#line 2131 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
#line 2131 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_3,
#line 2131 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_4,
#line 2131 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_5);

#line 2126 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_ground_term_args_5_p_0(
#line 2126 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Vars_6,
#line 2126 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConsArgWidths_7,
#line 2126 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__TypedRvals_8,
#line 2126 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_10,
#line 2126 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_11);

#line 2024 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__generate_ground_term_conjunct_tag_9_p_0_1(
#line 2024 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg);

#line 2006 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_ground_term_conjunct_tag_9_p_0(
#line 2006 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Var_10,
#line 2006 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConsTag_11,
#line 2006 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Args_12,
#line 2006 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConsArgWidths_13,
#line 2006 "unify_gen.m"
  MR_Word ll_backend__unify_gen__UnboxedFloats_14,
#line 2006 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_67,
#line 2006 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_68,
#line 2006 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_69,
#line 2006 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_70);

#line 1971 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_ground_term_conjuncts_7_p_0(
#line 1971 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__1_1,
#line 1971 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_2,
#line 1971 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__3_3,
#line 1971 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_4,
#line 1971 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_5,
#line 1971 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_6,
#line 1971 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_7);

#line 1915 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__det_single_arg_width_2_p_0(
#line 1915 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ArgWidths_3,
#line 1915 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__ArgWidth_4);

#line 1815 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_const_struct_arg_6_p_0(
#line 1815 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ModuleInfo_7,
#line 1815 "unify_gen.m"
  MR_Word ll_backend__unify_gen__UnboxedFloats_8,
#line 1815 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConstStructMap_9,
#line 1815 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConstArg_10,
#line 1815 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ArgWidth_11,
#line 1815 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__TypedRval_12);

#line 1812 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_const_struct_args_6_p_0_1(
#line 1812 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg,
#line 1812 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
#line 1812 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
#line 1812 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_3);

#line 1805 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_const_struct_args_6_p_0(
#line 1805 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ModuleInfo_7,
#line 1805 "unify_gen.m"
  MR_Word ll_backend__unify_gen__UnboxedFloats_8,
#line 1805 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConstStructMap_9,
#line 1805 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConstArgs_10,
#line 1805 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ArgWidths_11,
#line 1805 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__TypedRvals_12);

#line 1701 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_const_struct_7_p_0(
#line 1701 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ModuleInfo_8,
#line 1701 "unify_gen.m"
  MR_Word ll_backend__unify_gen__UnboxedFloats_9,
#line 1701 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__3_3,
#line 1701 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_ConstStructMap_0_21,
#line 1701 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_ConstStructMap_22,
#line 1701 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_23,
#line 1701 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_24);

#line 1635 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_direct_arg_deconstruct_9_p_0(
#line 1635 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Var_10,
#line 1635 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ArgVar_11,
#line 1635 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__Ptag_12,
#line 1635 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Mode_13,
#line 1635 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Type_14,
#line 1635 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_15,
#line 1635 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CI_16,
#line 1635 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_26,
#line 1635 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_27);

#line 1589 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_direct_arg_construct_9_p_0(
#line 1589 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Var_10,
#line 1589 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Arg_11,
#line 1589 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__Ptag_12,
#line 1589 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Mode_13,
#line 1589 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Type_14,
#line 1589 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_15,
#line 1589 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CI_16,
#line 1589 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_25,
#line 1589 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_26);

#line 1577 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__field_offset_pair_3_p_0(
#line 1577 "unify_gen.m"
  MR_Word ll_backend__unify_gen__LvalA_4,
#line 1577 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__LvalA_2,
#line 1577 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__LvalB_5);

#line 1487 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_sub_assign_6_p_0(
#line 1487 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Left_7,
#line 1487 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Right_8,
#line 1487 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_9,
#line 1487 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CI_10,
#line 1487 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_40,
#line 1487 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_41);

#line 1446 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_sub_unify_8_p_0(
#line 1446 "unify_gen.m"
  MR_Word ll_backend__unify_gen__L_9,
#line 1446 "unify_gen.m"
  MR_Word ll_backend__unify_gen__R_10,
#line 1446 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Mode_11,
#line 1446 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Type_12,
#line 1446 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_13,
#line 1446 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CI_14,
#line 1446 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_23,
#line 1446 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_24);

#line 1431 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__generate_unify_args_2_8_p_0(
#line 1431 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__1_1,
#line 1431 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_2,
#line 1431 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__3_3,
#line 1431 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__4_4,
#line 1431 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__HeadVar__5_5,
#line 1431 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__6_6,
#line 1431 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_7,
#line 1431 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_8);

#line 1420 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_unify_args_8_p_0(
#line 1420 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Ls_9,
#line 1420 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Rs_10,
#line 1420 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Ms_11,
#line 1420 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Ts_12,
#line 1420 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_13,
#line 1420 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CI_14,
#line 1420 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_17,
#line 1420 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_18);

#line 1396 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_semi_deconstruction_10_p_0(
#line 1396 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Var_11,
#line 1396 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Tag_12,
#line 1396 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Args_13,
#line 1396 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Modes_14,
#line 1396 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ArgWidths_15,
#line 1396 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_16,
#line 1396 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_27,
#line 1396 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_28,
#line 1396 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_29,
#line 1396 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_30);

#line 1270 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_det_deconstruction_9_p_0(
#line 1270 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Var_10,
#line 1270 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Cons_11,
#line 1270 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Args_12,
#line 1270 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Modes_13,
#line 1270 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ArgWidths_14,
#line 1270 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_15,
#line 1270 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CI_16,
#line 1270 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_20,
#line 1270 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_21);

#line 1231 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__make_fields_and_argvars_7_p_0(
#line 1231 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__1_1,
#line 1231 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_2,
#line 1231 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Rval_3,
#line 1231 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__PrevOffset0_4,
#line 1231 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__TagNum_5,
#line 1231 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__HeadVar__6_6,
#line 1231 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__HeadVar__7_7);

#line 1218 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__var_types_3_p_0(
#line 1218 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CI_4,
#line 1218 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Vars_5,
#line 1218 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Types_6);

#line 1202 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_field_take_address_assigns_6_p_0(
#line 1202 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__1_1,
#line 1202 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CellVar_2,
#line 1202 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__CellPtag_3,
#line 1202 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__HeadVar__4_4,
#line 1202 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_5,
#line 1202 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_6);

#line 1183 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_field_addr_5_p_0(
#line 1183 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CellArg_6,
#line 1183 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__ArgOffset_7,
#line 1183 "unify_gen.m"
  MR_Integer * ll_backend__unify_gen__NextOffset_8,
#line 1183 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_RevFieldAddrs_0_16,
#line 1183 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_RevFieldAddrs_17);

#line 1162 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__maybe_add_alloc_site_info_6_p_0(
#line 1162 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Context_7,
#line 1162 "unify_gen.m"
  MR_String ll_backend__unify_gen__VarTypeMsg_8,
#line 1162 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__Size_9,
#line 1162 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__MaybeAllocId_10,
#line 1162 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_15,
#line 1162 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_16);

#line 1180 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__construct_cell_12_p_0_1(
#line 1180 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg,
#line 1180 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
#line 1180 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
#line 1180 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_3,
#line 1180 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_4,
#line 1180 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_5);

#line 1118 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__construct_cell_12_p_0(
#line 1118 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Var_13,
#line 1118 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__Ptag_14,
#line 1118 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CellArgs_15,
#line 1118 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HowToConstruct_16,
#line 1118 "unify_gen.m"
  MR_Word ll_backend__unify_gen__MaybeSize_17,
#line 1118 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Context_18,
#line 1118 "unify_gen.m"
  MR_Word ll_backend__unify_gen__MayUseAtomic_19,
#line 1118 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_20,
#line 1118 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_35,
#line 1118 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_36,
#line 1118 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_37,
#line 1118 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_38);

#line 1109 "unify_gen.m"
static MR_Word MR_CALL 
ll_backend__unify_gen__condense_needs_updates_1_f_0(
#line 1109 "unify_gen.m"
  MR_Word ll_backend__unify_gen__NeedsUpdatess_3);

#line 1104 "unify_gen.m"
static MR_Box MR_CALL 
ll_backend__unify_gen__pack_how_to_construct_3_p_0_1(
#line 1104 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg,
#line 1104 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_1);

#line 1088 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__pack_how_to_construct_3_p_0(
#line 1088 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ArgWidths_4,
#line 1088 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_HowToConstruct_0_14,
#line 1088 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_HowToConstruct_15);

#line 1085 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__pack_cell_rvals_7_p_0_1(
#line 1085 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg,
#line 1085 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
#line 1085 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
#line 1085 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_3,
#line 1085 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_4,
#line 1085 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_5,
#line 1085 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_6,
#line 1085 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_7,
#line 1085 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_8);

#line 1080 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__pack_cell_rvals_7_p_0(
#line 1080 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ArgWidths_8,
#line 1080 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CellArgs0_9,
#line 1080 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__CellArgs_10,
#line 1080 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_11,
#line 1080 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CI_12,
#line 1080 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_14,
#line 1080 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_15);

#line 1067 "unify_gen.m"
static MR_Word MR_CALL 
ll_backend__unify_gen__initial_may_use_atomic_1_f_0(
#line 1067 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ModuleInfo_3);

#line 1017 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__generate_cons_args_2_10_p_0(
#line 1017 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__1_1,
#line 1017 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_2,
#line 1017 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__3_3,
#line 1017 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__4_4,
#line 1017 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__HeadVar__5_5,
#line 1017 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__6_6,
#line 1017 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__7_7,
#line 1017 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__HeadVar__8_8,
#line 1017 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_0_9,
#line 1017 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_10);

#line 994 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_cons_args_8_p_0(
#line 994 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Vars_9,
#line 994 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Types_10,
#line 994 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Modes_11,
#line 994 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Widths_12,
#line 994 "unify_gen.m"
  MR_Word ll_backend__unify_gen__TakeAddr_13,
#line 994 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CI_14,
#line 994 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_Args_19,
#line 994 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_20);

#line 952 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_pred_args_8_p_0(
#line 952 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CI_1,
#line 952 "unify_gen.m"
  MR_Word ll_backend__unify_gen__VarTypes_2,
#line 952 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__3_3,
#line 952 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__4_4,
#line 952 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__HeadVar__5_5,
#line 952 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__HeadVar__6_6,
#line 952 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_0_7,
#line 952 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_8);

#line 919 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_extra_closure_args_7_p_0(
#line 919 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__1_1,
#line 919 "unify_gen.m"
  MR_Word ll_backend__unify_gen__LoopCounter_2,
#line 919 "unify_gen.m"
  MR_Word ll_backend__unify_gen__NewClosure_3,
#line 919 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__HeadVar__4_4,
#line 919 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__5_5,
#line 919 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_6,
#line 919 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_7);

#line 632 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_14_p_0_9(
#line 632 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg);

#line 660 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_14_p_0_8(
#line 660 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg);

#line 687 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_14_p_0_7(
#line 687 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg);

#line 695 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_14_p_0_6(
#line 695 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg);

#line 549 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_14_p_0_5(
#line 549 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg);

#line 670 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_14_p_0_4(
#line 670 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg);

#line 710 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_14_p_0_3(
#line 710 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg);

#line 708 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_14_p_0_2(
#line 708 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg);

#line 642 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_14_p_0_1(
#line 642 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg);

#line 530 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_construction_2_14_p_0(
#line 530 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConsTag_15,
#line 530 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Var_16,
#line 530 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Args_17,
#line 530 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Modes_18,
#line 530 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ArgWidths_19,
#line 530 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HowToConstruct0_20,
#line 530 "unify_gen.m"
  MR_Word ll_backend__unify_gen__TakeAddr_21,
#line 530 "unify_gen.m"
  MR_Word ll_backend__unify_gen__MaybeSize_22,
#line 530 "unify_gen.m"
  MR_Word ll_backend__unify_gen__GoalInfo_23,
#line 530 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_24,
#line 530 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_78,
#line 530 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_79,
#line 530 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_80,
#line 530 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_81);

#line 516 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_construction_14_p_0(
#line 516 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Var_15,
#line 516 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConsId_16,
#line 516 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Args_17,
#line 516 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Modes_18,
#line 516 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ArgWidths_19,
#line 516 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HowToConstruct_20,
#line 516 "unify_gen.m"
  MR_Word ll_backend__unify_gen__TakeAddr_21,
#line 516 "unify_gen.m"
  MR_Word ll_backend__unify_gen__MaybeSize_22,
#line 516 "unify_gen.m"
  MR_Word ll_backend__unify_gen__GoalInfo_23,
#line 516 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_24,
#line 516 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_29,
#line 516 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_30,
#line 516 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_31,
#line 516 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_32);

#line 497 "unify_gen.m"
static MR_Word MR_CALL 
ll_backend__unify_gen__generate_reserved_address_1_f_0(
#line 497 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__1_1);

#line 487 "unify_gen.m"
static MR_Box MR_CALL 
ll_backend__unify_gen__raw_tag_test_3_p_0_2(
#line 487 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg,
#line 487 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
#line 487 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_2);

#line 418 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__raw_tag_test_3_p_0_1(
#line 418 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg);

#line 404 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__raw_tag_test_3_p_0(
#line 404 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Rval_4,
#line 404 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConsTag_5,
#line 404 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__TestRval_6);

#line 326 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__disjoin_tag_tests_3_p_0(
#line 326 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CurTestRval_4,
#line 326 "unify_gen.m"
  MR_Word ll_backend__unify_gen__OtherTestRvals_5,
#line 326 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__TestRval_6);

#line 267 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_test_7_p_0(
#line 267 "unify_gen.m"
  MR_Word ll_backend__unify_gen__VarA_8,
#line 267 "unify_gen.m"
  MR_Word ll_backend__unify_gen__VarB_9,
#line 267 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_10,
#line 267 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_21,
#line 267 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_22,
#line 267 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_23,
#line 267 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_24);

#line 247 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_assignment_5_p_0(
#line 247 "unify_gen.m"
  MR_Word ll_backend__unify_gen__VarA_6,
#line 247 "unify_gen.m"
  MR_Word ll_backend__unify_gen__VarB_7,
#line 247 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__HeadVar__3_3,
#line 247 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_9,
#line 247 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_10);

#line 225 "unify_gen.m"
static MR_Box MR_CALL 
ll_backend__unify_gen__get_cons_arg_widths_4_p_0_1(
#line 225 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg,
#line 225 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_1);

#line 216 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__get_cons_arg_widths_4_p_0(
#line 216 "unify_gen.m"
  MR_Word ll_backend__unify_gen__TypeInfo_for_T_41,
#line 216 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ModuleInfo_5,
#line 216 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConsId_6,
#line 216 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Args_7,
#line 216 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__AllArgWidths_8);

#line 1697 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_const_structs_4_p_0_1(
#line 1697 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg,
#line 1697 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
#line 1697 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
#line 1697 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_3,
#line 1697 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_4,
#line 1697 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_5);

#line 188 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_unification_8_p_0_1(
#line 188 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg,
#line 188 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
#line 188 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
#line 188 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_3);


static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_1[14][2];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_2[10][3];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_3[3][6];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_4[1][10];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_5[7][5];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_6[6][1];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_7[1][7];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_8[1][12];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_9[2][8];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_10[1][9];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_11[1][11];




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

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_2[10][3] = {
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
    ((MR_Box) (ll_backend__unify_gen__generate_unification_8_p_0_1)),
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
    ((MR_Box) (&ll_backend__unify_gen_scalar_common_5[5])),
    ((MR_Box) (ll_backend__unify_gen__pack_how_to_construct_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ll_backend__unify_gen_scalar_common_9[0])),
    ((MR_Box) (ll_backend__unify_gen__construct_cell_12_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ll_backend__unify_gen_scalar_common_9[1])),
    ((MR_Box) (ll_backend__unify_gen__generate_ground_term_args_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ll_backend__unify_gen_scalar_common_11[0])),
    ((MR_Box) (ll_backend__unify_gen__pack_ground_term_args_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
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
    ((MR_Box) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_code_loc_dep_0)),
    ((MR_Box) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_code_loc_dep_0))
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

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_8[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_cell_arg_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__unify_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_cell_arg_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_cell_arg_0)),
    ((MR_Box) (&ll_backend__unify_gen__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0)),
    ((MR_Box) (&ll_backend__unify_gen__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0)),
    ((MR_Box) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_code_loc_dep_0)),
    ((MR_Box) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_code_loc_dep_0))
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

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_11[1][11] = {
  /* row 0 */
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



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1986 "ll_backend.unify_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__unify_gen__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__const_struct__type_ctor_info_const_struct_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0
  }
};

#line 1995 "ll_backend.unify_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__unify_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_typed_rval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0
  }
};

#line 2004 "ll_backend.unify_gen.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__unify_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2012 "ll_backend.unify_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__unify_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2020 "ll_backend.unify_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2028 "ll_backend.unify_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_term_size_value_0
  }
};

#line 2036 "ll_backend.unify_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_cell_arg_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_cell_arg_0
  }
};

#line 2044 "ll_backend.unify_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

#line 2052 "ll_backend.unify_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_needs_update_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0
  }
};

#line 2060 "ll_backend.unify_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__list__pti_list_1__plain_ll_backend__unify_gen__type_ctor_info_field_addr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__unify_gen__ll_backend__unify_gen__type_ctor_info_field_addr_0
  }
};

#line 2068 "ll_backend.unify_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2076 "ll_backend.unify_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__unify_gen__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_ll_backend__llds__type_ctor_info_typed_rval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__unify_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0
  }
};

#line 2085 "ll_backend.unify_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_typed_rval_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0
  }
};

#line 2093 "ll_backend.unify_gen.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__unify_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ll_backend__llds__type_ctor_info_typed_rval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__unify_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0
  }
};

#line 2102 "ll_backend.unify_gen.c"
const MR_TypeCtorInfo_Struct ll_backend__unify_gen__ll_backend__unify_gen__type_ctor_info_active_ground_term_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__unify_gen____Unify____active_ground_term_map_0_0_10001)),
  ((MR_Box) (ll_backend__unify_gen____Compare____active_ground_term_map_0_0_10001)),
  (MR_String) "ll_backend.unify_gen",
  (MR_String) "active_ground_term_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ll_backend__unify_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ll_backend__llds__type_ctor_info_typed_rval_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2119 "ll_backend.unify_gen.c"
static const MR_PseudoTypeInfo ll_backend__unify_gen__ll_backend__unify_gen__field_types_field_addr_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__unify_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2125 "ll_backend.unify_gen.c"
static const MR_ConstString ll_backend__unify_gen__ll_backend__unify_gen__field_names_field_addr_0_0[2] = {
  (MR_String) "fa_offset",
  (MR_String) "fa_var"
};

#line 2131 "ll_backend.unify_gen.c"
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

#line 2146 "ll_backend.unify_gen.c"
static const MR_DuFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__du_stag_ordered_field_addr_0_0[1] = {
  &ll_backend__unify_gen__ll_backend__unify_gen__du_functor_desc_field_addr_0_0
};

#line 2151 "ll_backend.unify_gen.c"
static const MR_DuPtagLayout ll_backend__unify_gen__ll_backend__unify_gen__du_ptag_ordered_field_addr_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__unify_gen__ll_backend__unify_gen__du_stag_ordered_field_addr_0_0
  }
};

#line 2160 "ll_backend.unify_gen.c"
static const MR_DuFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__du_name_ordered_field_addr_0[1] = {
  &ll_backend__unify_gen__ll_backend__unify_gen__du_functor_desc_field_addr_0_0
};

#line 2165 "ll_backend.unify_gen.c"
static const MR_Integer ll_backend__unify_gen__ll_backend__unify_gen__functor_number_map_field_addr_0[1] = {
  (MR_Integer) 0
};

#line 2170 "ll_backend.unify_gen.c"
const MR_TypeCtorInfo_Struct ll_backend__unify_gen__ll_backend__unify_gen__type_ctor_info_field_addr_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__unify_gen____Unify____field_addr_0_0_10001)),
  ((MR_Box) (ll_backend__unify_gen____Compare____field_addr_0_0_10001)),
  (MR_String) "ll_backend.unify_gen",
  (MR_String) "field_addr",
  {     ll_backend__unify_gen__ll_backend__unify_gen__du_name_ordered_field_addr_0 },
  {     ll_backend__unify_gen__ll_backend__unify_gen__du_ptag_ordered_field_addr_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__unify_gen__ll_backend__unify_gen__functor_number_map_field_addr_0
};

#line 2187 "ll_backend.unify_gen.c"
static const MR_EnumFunctorDesc ll_backend__unify_gen__ll_backend__unify_gen__enum_functor_desc_test_sense_0_0 = {
  (MR_String) "branch_on_success",
  (MR_Integer) 0
};

#line 2193 "ll_backend.unify_gen.c"
static const MR_EnumFunctorDesc ll_backend__unify_gen__ll_backend__unify_gen__enum_functor_desc_test_sense_0_1 = {
  (MR_String) "branch_on_failure",
  (MR_Integer) 1
};

#line 2199 "ll_backend.unify_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__enum_value_ordered_test_sense_0[2] = {
  &ll_backend__unify_gen__ll_backend__unify_gen__enum_functor_desc_test_sense_0_0,
  &ll_backend__unify_gen__ll_backend__unify_gen__enum_functor_desc_test_sense_0_1
};

#line 2205 "ll_backend.unify_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__enum_name_ordered_test_sense_0[2] = {
  &ll_backend__unify_gen__ll_backend__unify_gen__enum_functor_desc_test_sense_0_1,
  &ll_backend__unify_gen__ll_backend__unify_gen__enum_functor_desc_test_sense_0_0
};

#line 2211 "ll_backend.unify_gen.c"
static const MR_Integer ll_backend__unify_gen__ll_backend__unify_gen__functor_number_map_test_sense_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2217 "ll_backend.unify_gen.c"
const MR_TypeCtorInfo_Struct ll_backend__unify_gen__ll_backend__unify_gen__type_ctor_info_test_sense_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__unify_gen____Unify____test_sense_0_0_10001)),
  ((MR_Box) (ll_backend__unify_gen____Compare____test_sense_0_0_10001)),
  (MR_String) "ll_backend.unify_gen",
  (MR_String) "test_sense",
  {     ll_backend__unify_gen__ll_backend__unify_gen__enum_name_ordered_test_sense_0 },
  {     ll_backend__unify_gen__ll_backend__unify_gen__enum_value_ordered_test_sense_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__unify_gen__ll_backend__unify_gen__functor_number_map_test_sense_0
};

#line 2234 "ll_backend.unify_gen.c"
static const MR_PseudoTypeInfo ll_backend__unify_gen__ll_backend__unify_gen__field_types_uni_val_0_0[1] = {
  (MR_PseudoTypeInfo) &ll_backend__unify_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2239 "ll_backend.unify_gen.c"
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

#line 2254 "ll_backend.unify_gen.c"
static const MR_PseudoTypeInfo ll_backend__unify_gen__ll_backend__unify_gen__field_types_uni_val_0_1[2] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0
};

#line 2260 "ll_backend.unify_gen.c"
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

#line 2275 "ll_backend.unify_gen.c"
static const MR_DuFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__du_stag_ordered_uni_val_0_0[1] = {
  &ll_backend__unify_gen__ll_backend__unify_gen__du_functor_desc_uni_val_0_0
};

#line 2280 "ll_backend.unify_gen.c"
static const MR_DuFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__du_stag_ordered_uni_val_0_1[1] = {
  &ll_backend__unify_gen__ll_backend__unify_gen__du_functor_desc_uni_val_0_1
};

#line 2285 "ll_backend.unify_gen.c"
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

#line 2299 "ll_backend.unify_gen.c"
static const MR_DuFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__du_name_ordered_uni_val_0[2] = {
  &ll_backend__unify_gen__ll_backend__unify_gen__du_functor_desc_uni_val_0_1,
  &ll_backend__unify_gen__ll_backend__unify_gen__du_functor_desc_uni_val_0_0
};

#line 2305 "ll_backend.unify_gen.c"
static const MR_Integer ll_backend__unify_gen__ll_backend__unify_gen__functor_number_map_uni_val_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2311 "ll_backend.unify_gen.c"
const MR_TypeCtorInfo_Struct ll_backend__unify_gen__ll_backend__unify_gen__type_ctor_info_uni_val_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__unify_gen____Unify____uni_val_0_0_10001)),
  ((MR_Box) (ll_backend__unify_gen____Compare____uni_val_0_0_10001)),
  (MR_String) "ll_backend.unify_gen",
  (MR_String) "uni_val",
  {     ll_backend__unify_gen__ll_backend__unify_gen__du_name_ordered_uni_val_0 },
  {     ll_backend__unify_gen__ll_backend__unify_gen__du_ptag_ordered_uni_val_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__unify_gen__ll_backend__unify_gen__functor_number_map_uni_val_0
};

#line 2328 "ll_backend.unify_gen.c"
static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____active_ground_term_map_0_0_10001(
#line 2331 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
#line 2333 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_2)
#line 2335 "ll_backend.unify_gen.c"
{
#line 2337 "ll_backend.unify_gen.c"
  {
#line 2339 "ll_backend.unify_gen.c"
    MR_bool ll_backend__unify_gen__succeeded;

#line 2342 "ll_backend.unify_gen.c"
    {
#line 2344 "ll_backend.unify_gen.c"
      ll_backend__unify_gen__succeeded = ll_backend__unify_gen____Unify____active_ground_term_map_0_0(((MR_Word) ll_backend__unify_gen__wrapper_arg_1), ((MR_Word) ll_backend__unify_gen__wrapper_arg_2));
    }
#line 2347 "ll_backend.unify_gen.c"
    return ll_backend__unify_gen__succeeded;
#line 2349 "ll_backend.unify_gen.c"
  }
#line 2351 "ll_backend.unify_gen.c"
}

#line 2354 "ll_backend.unify_gen.c"
static void MR_CALL 
ll_backend__unify_gen____Compare____active_ground_term_map_0_0_10001(
#line 2357 "ll_backend.unify_gen.c"
  MR_Box * ll_backend__unify_gen__wrapper_arg_1,
#line 2359 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
#line 2361 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_3)
#line 2363 "ll_backend.unify_gen.c"
{
#line 2365 "ll_backend.unify_gen.c"
  {
#line 2367 "ll_backend.unify_gen.c"
    MR_Word ll_backend__unify_gen__conv0_HeadVar__1_1;

#line 2370 "ll_backend.unify_gen.c"
    {
#line 2372 "ll_backend.unify_gen.c"
      ll_backend__unify_gen____Compare____active_ground_term_map_0_0(&ll_backend__unify_gen__conv0_HeadVar__1_1, ((MR_Word) ll_backend__unify_gen__wrapper_arg_2), ((MR_Word) ll_backend__unify_gen__wrapper_arg_3));
    }
#line 2375 "ll_backend.unify_gen.c"
    *ll_backend__unify_gen__wrapper_arg_1 = ((MR_Box) (ll_backend__unify_gen__conv0_HeadVar__1_1));
#line 2377 "ll_backend.unify_gen.c"
  }
#line 2379 "ll_backend.unify_gen.c"
}

#line 2382 "ll_backend.unify_gen.c"
static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____field_addr_0_0_10001(
#line 2385 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
#line 2387 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_2)
#line 2389 "ll_backend.unify_gen.c"
{
#line 2391 "ll_backend.unify_gen.c"
  {
#line 2393 "ll_backend.unify_gen.c"
    MR_bool ll_backend__unify_gen__succeeded;

#line 2396 "ll_backend.unify_gen.c"
    {
#line 2398 "ll_backend.unify_gen.c"
      ll_backend__unify_gen__succeeded = ll_backend__unify_gen____Unify____field_addr_0_0(((MR_Word) ll_backend__unify_gen__wrapper_arg_1), ((MR_Word) ll_backend__unify_gen__wrapper_arg_2));
    }
#line 2401 "ll_backend.unify_gen.c"
    return ll_backend__unify_gen__succeeded;
#line 2403 "ll_backend.unify_gen.c"
  }
#line 2405 "ll_backend.unify_gen.c"
}

#line 2408 "ll_backend.unify_gen.c"
static void MR_CALL 
ll_backend__unify_gen____Compare____field_addr_0_0_10001(
#line 2411 "ll_backend.unify_gen.c"
  MR_Box * ll_backend__unify_gen__wrapper_arg_1,
#line 2413 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
#line 2415 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_3)
#line 2417 "ll_backend.unify_gen.c"
{
#line 2419 "ll_backend.unify_gen.c"
  {
#line 2421 "ll_backend.unify_gen.c"
    MR_Word ll_backend__unify_gen__conv0_HeadVar__1_1;

#line 2424 "ll_backend.unify_gen.c"
    {
#line 2426 "ll_backend.unify_gen.c"
      ll_backend__unify_gen____Compare____field_addr_0_0(&ll_backend__unify_gen__conv0_HeadVar__1_1, ((MR_Word) ll_backend__unify_gen__wrapper_arg_2), ((MR_Word) ll_backend__unify_gen__wrapper_arg_3));
    }
#line 2429 "ll_backend.unify_gen.c"
    *ll_backend__unify_gen__wrapper_arg_1 = ((MR_Box) (ll_backend__unify_gen__conv0_HeadVar__1_1));
#line 2431 "ll_backend.unify_gen.c"
  }
#line 2433 "ll_backend.unify_gen.c"
}

#line 2436 "ll_backend.unify_gen.c"
static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____test_sense_0_0_10001(
#line 2439 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
#line 2441 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_2)
#line 2443 "ll_backend.unify_gen.c"
{
#line 2445 "ll_backend.unify_gen.c"
  {
#line 2447 "ll_backend.unify_gen.c"
    MR_bool ll_backend__unify_gen__succeeded;

#line 2450 "ll_backend.unify_gen.c"
    {
#line 2452 "ll_backend.unify_gen.c"
      ll_backend__unify_gen__succeeded = ll_backend__unify_gen____Unify____test_sense_0_0(((MR_Word) ll_backend__unify_gen__wrapper_arg_1), ((MR_Word) ll_backend__unify_gen__wrapper_arg_2));
    }
#line 2455 "ll_backend.unify_gen.c"
    return ll_backend__unify_gen__succeeded;
#line 2457 "ll_backend.unify_gen.c"
  }
#line 2459 "ll_backend.unify_gen.c"
}

#line 2462 "ll_backend.unify_gen.c"
static void MR_CALL 
ll_backend__unify_gen____Compare____test_sense_0_0_10001(
#line 2465 "ll_backend.unify_gen.c"
  MR_Box * ll_backend__unify_gen__wrapper_arg_1,
#line 2467 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
#line 2469 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_3)
#line 2471 "ll_backend.unify_gen.c"
{
#line 2473 "ll_backend.unify_gen.c"
  {
#line 2475 "ll_backend.unify_gen.c"
    MR_Word ll_backend__unify_gen__conv0_HeadVar__1_1;

#line 2478 "ll_backend.unify_gen.c"
    {
#line 2480 "ll_backend.unify_gen.c"
      ll_backend__unify_gen____Compare____test_sense_0_0(&ll_backend__unify_gen__conv0_HeadVar__1_1, ((MR_Word) ll_backend__unify_gen__wrapper_arg_2), ((MR_Word) ll_backend__unify_gen__wrapper_arg_3));
    }
#line 2483 "ll_backend.unify_gen.c"
    *ll_backend__unify_gen__wrapper_arg_1 = ((MR_Box) (ll_backend__unify_gen__conv0_HeadVar__1_1));
#line 2485 "ll_backend.unify_gen.c"
  }
#line 2487 "ll_backend.unify_gen.c"
}

#line 2490 "ll_backend.unify_gen.c"
static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____uni_val_0_0_10001(
#line 2493 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
#line 2495 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_2)
#line 2497 "ll_backend.unify_gen.c"
{
#line 2499 "ll_backend.unify_gen.c"
  {
#line 2501 "ll_backend.unify_gen.c"
    MR_bool ll_backend__unify_gen__succeeded;

#line 2504 "ll_backend.unify_gen.c"
    {
#line 2506 "ll_backend.unify_gen.c"
      ll_backend__unify_gen__succeeded = ll_backend__unify_gen____Unify____uni_val_0_0(((MR_Word) ll_backend__unify_gen__wrapper_arg_1), ((MR_Word) ll_backend__unify_gen__wrapper_arg_2));
    }
#line 2509 "ll_backend.unify_gen.c"
    return ll_backend__unify_gen__succeeded;
#line 2511 "ll_backend.unify_gen.c"
  }
#line 2513 "ll_backend.unify_gen.c"
}

#line 2516 "ll_backend.unify_gen.c"
static void MR_CALL 
ll_backend__unify_gen____Compare____uni_val_0_0_10001(
#line 2519 "ll_backend.unify_gen.c"
  MR_Box * ll_backend__unify_gen__wrapper_arg_1,
#line 2521 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
#line 2523 "ll_backend.unify_gen.c"
  MR_Box ll_backend__unify_gen__wrapper_arg_3)
#line 2525 "ll_backend.unify_gen.c"
{
#line 2527 "ll_backend.unify_gen.c"
  {
#line 2529 "ll_backend.unify_gen.c"
    MR_Word ll_backend__unify_gen__conv0_HeadVar__1_1;

#line 2532 "ll_backend.unify_gen.c"
    {
#line 2534 "ll_backend.unify_gen.c"
      ll_backend__unify_gen____Compare____uni_val_0_0(&ll_backend__unify_gen__conv0_HeadVar__1_1, ((MR_Word) ll_backend__unify_gen__wrapper_arg_2), ((MR_Word) ll_backend__unify_gen__wrapper_arg_3));
    }
#line 2537 "ll_backend.unify_gen.c"
    *ll_backend__unify_gen__wrapper_arg_1 = ((MR_Box) (ll_backend__unify_gen__conv0_HeadVar__1_1));
#line 2539 "ll_backend.unify_gen.c"
  }
#line 2541 "ll_backend.unify_gen.c"
}

#line 1847 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_95_115_116_114_117_99_116_95_97_114_103_95_116_97_103_95_95_91_49_44_32_51_93_95_48_6_p_0_1(
#line 1847 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg)
#line 1847 "unify_gen.m"
{
#line 1847 "unify_gen.m"
  {
#line 1847 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 1847 "unify_gen.m"
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;

#line 1847 "unify_gen.m"
    {
#line 1847 "unify_gen.m"
      return ll_backend__unify_gen__succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_const_struct_arg_tag__1847__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 4))));
    }
#line 1847 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 1847 "unify_gen.m"
  }
#line 1847 "unify_gen.m"
}

#line 1831 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_95_115_116_114_117_99_116_95_97_114_103_95_116_97_103_95_95_91_49_44_32_51_93_95_48_6_p_0(
#line 1831 "unify_gen.m"
  MR_Word ll_backend__unify_gen__UnboxedFloats_8,
#line 1831 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConsTag_10,
#line 1831 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ArgWidth_11,
#line 1831 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__TypedRval_12)
#line 1831 "unify_gen.m"
{
#line 1867 "unify_gen.m"
  while (MR_TRUE)
#line 1867 "unify_gen.m"
    {
#line 1867 "unify_gen.m"
      /* tailcall optimized into a loop */
#line 1867 "unify_gen.m"
      {
#line 1867 "unify_gen.m"
        MR_bool ll_backend__unify_gen__succeeded;

#line 1867 "unify_gen.m"
#line 1867 "unify_gen.m"
        switch (MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_10)) {
#line 1867 "unify_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1867 "unify_gen.m"
          case (MR_Integer) 0:
#line 1911 "unify_gen.m"
            {
#line 1912 "unify_gen.m"
              {
#line 1912 "unify_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_const_struct_arg_tag\'/6", (MR_String) "unexpected tag");
#line 1912 "unify_gen.m"
                return;
              }
#line 1911 "unify_gen.m"
            }
#line 1867 "unify_gen.m"
            break;
#line 1867 "unify_gen.m"
          case (MR_Integer) 1:
#line 1867 "unify_gen.m"
            {
#line 1867 "unify_gen.m"
              MR_String ll_backend__unify_gen__String_13 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ConsTag_10, (MR_Integer) 0)));
#line 1867 "unify_gen.m"
              MR_Word ll_backend__unify_gen__Const_89;
#line 1867 "unify_gen.m"
              MR_Word ll_backend__unify_gen__V_91_91;

#line 1839 "unify_gen.m"
              {
#line 1839 "unify_gen.m"
                ll_backend__unify_gen__Const_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1839 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Const_89, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1839 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Const_89, 1) = ((MR_Box) (ll_backend__unify_gen__String_13));
#line 1839 "unify_gen.m"
              }
#line 1868 "unify_gen.m"
              {
#line 1868 "unify_gen.m"
                ll_backend__unify_gen__V_91_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1868 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_91_91, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1868 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_91_91, 1) = ((MR_Box) (ll_backend__unify_gen__Const_89));
#line 1868 "unify_gen.m"
              }
#line 1868 "unify_gen.m"
              {
#line 1868 "unify_gen.m"
                MR_Word base;
#line 1868 "unify_gen.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1868 "unify_gen.m"
                *ll_backend__unify_gen__TypedRval_12 = base;
#line 1868 "unify_gen.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__unify_gen__V_91_91));
#line 1868 "unify_gen.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 10));
#line 1868 "unify_gen.m"
              }
#line 1867 "unify_gen.m"
            }
#line 1867 "unify_gen.m"
            break;
#line 1867 "unify_gen.m"
          case (MR_Integer) 2:
#line 1867 "unify_gen.m"
            {
#line 1867 "unify_gen.m"
              MR_Word ll_backend__unify_gen__Const_14;
#line 1867 "unify_gen.m"
              MR_Word ll_backend__unify_gen__Type_15;
#line 1867 "unify_gen.m"
              MR_Float ll_backend__unify_gen__Float_19 = MR_unbox_float((MR_hl_field(MR_mktag(2), ll_backend__unify_gen__ConsTag_10, (MR_Integer) 0)));
#line 1867 "unify_gen.m"
              MR_Word ll_backend__unify_gen__V_73_73;

#line 1853 "unify_gen.m"
              {
#line 1853 "unify_gen.m"
                ll_backend__unify_gen__Const_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1853 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Const_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1853 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Const_14, 1) = MR_box_float(ll_backend__unify_gen__Float_19);
#line 1853 "unify_gen.m"
              }
#line 1857 "unify_gen.m"
#line 1857 "unify_gen.m"
              switch (ll_backend__unify_gen__UnboxedFloats_8) {
#line 1857 "unify_gen.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1857 "unify_gen.m"
                case (MR_Integer) 1:
#line 1863 "unify_gen.m"
                  {
#line 1861 "unify_gen.m"
                    ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__ArgWidth_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1863 "unify_gen.m"
                    if (ll_backend__unify_gen__succeeded)
#line 1862 "unify_gen.m"
                      ll_backend__unify_gen__Type_15 = (MR_Integer) 9;
#line 1863 "unify_gen.m"
                    else
#line 1864 "unify_gen.m"
                      ll_backend__unify_gen__Type_15 = (MR_Integer) 11;
#line 1863 "unify_gen.m"
                  }
#line 1857 "unify_gen.m"
                  break;
#line 1857 "unify_gen.m"
                case (MR_Integer) 0:
#line 1856 "unify_gen.m"
                  ll_backend__unify_gen__Type_15 = (MR_Integer) 9;
#line 1857 "unify_gen.m"
                  break;
#line 1857 "unify_gen.m"
              }
#line 1868 "unify_gen.m"
              {
#line 1868 "unify_gen.m"
                ll_backend__unify_gen__V_73_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1868 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_73_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1868 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_73_73, 1) = ((MR_Box) (ll_backend__unify_gen__Const_14));
#line 1868 "unify_gen.m"
              }
#line 1868 "unify_gen.m"
              {
#line 1868 "unify_gen.m"
                MR_Word base;
#line 1868 "unify_gen.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1868 "unify_gen.m"
                *ll_backend__unify_gen__TypedRval_12 = base;
#line 1868 "unify_gen.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__unify_gen__V_73_73));
#line 1868 "unify_gen.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__unify_gen__Type_15));
#line 1868 "unify_gen.m"
              }
#line 1867 "unify_gen.m"
            }
#line 1867 "unify_gen.m"
            break;
#line 1867 "unify_gen.m"
          case (MR_Integer) 3:
#line 1867 "unify_gen.m"
#line 1867 "unify_gen.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_10, (MR_Integer) 0)))) {
#line 1867 "unify_gen.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1867 "unify_gen.m"
              case (MR_Integer) 0:
#line 1867 "unify_gen.m"
                {
#line 1867 "unify_gen.m"
                  MR_Integer ll_backend__unify_gen__Int_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_10, (MR_Integer) 1)));
#line 1867 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__Const_86;
#line 1867 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_88_88;

#line 1843 "unify_gen.m"
                  {
#line 1843 "unify_gen.m"
                    ll_backend__unify_gen__Const_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1843 "unify_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Const_86, 0) = ((MR_Box) (ll_backend__unify_gen__Int_16));
#line 1843 "unify_gen.m"
                  }
#line 1868 "unify_gen.m"
                  {
#line 1868 "unify_gen.m"
                    ll_backend__unify_gen__V_88_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1868 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_88_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1868 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_88_88, 1) = ((MR_Box) (ll_backend__unify_gen__Const_86));
#line 1868 "unify_gen.m"
                  }
#line 1868 "unify_gen.m"
                  {
#line 1868 "unify_gen.m"
                    MR_Word base;
#line 1868 "unify_gen.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1868 "unify_gen.m"
                    *ll_backend__unify_gen__TypedRval_12 = base;
#line 1868 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__unify_gen__V_88_88));
#line 1868 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 7));
#line 1868 "unify_gen.m"
                  }
#line 1867 "unify_gen.m"
                }
#line 1867 "unify_gen.m"
                break;
#line 1867 "unify_gen.m"
              case (MR_Integer) 1:
#line 1867 "unify_gen.m"
                {
#line 1867 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__Lang_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_10, (MR_Integer) 1)));
#line 1867 "unify_gen.m"
                  MR_String ll_backend__unify_gen__Val_18 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_10, (MR_Integer) 2)));
#line 1867 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_67_67;
#line 1867 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__Const_83;
#line 1867 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_85_85;

#line 1847 "unify_gen.m"
                  {
#line 1847 "unify_gen.m"
                    ll_backend__unify_gen__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1847 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_67_67, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_5[1]));
#line 1847 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_67_67, 1) = ((MR_Box) (ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_95_115_116_114_117_99_116_95_97_114_103_95_116_97_103_95_95_91_49_44_32_51_93_95_48_6_p_0_1));
#line 1847 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_67_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1847 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_67_67, 3) = ((MR_Box) (ll_backend__unify_gen__Lang_17));
#line 1847 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_67_67, 4) = ((MR_Box) ((MR_Integer) 0));
#line 1847 "unify_gen.m"
                  }
#line 1847 "unify_gen.m"
                  {
#line 1847 "unify_gen.m"
                    mercury__require__expect_4_p_0(ll_backend__unify_gen__V_67_67, (MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_const_struct_arg_tag\'/6", (MR_String) "foreign_tag for language other than C");
                  }
#line 1849 "unify_gen.m"
                  {
#line 1849 "unify_gen.m"
                    ll_backend__unify_gen__Const_83 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1849 "unify_gen.m"
                    MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Const_83, 0) = ((MR_Box) (ll_backend__unify_gen__Val_18));
#line 1849 "unify_gen.m"
                    MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Const_83, 1) = ((MR_Box) ((MR_Integer) 7));
#line 1849 "unify_gen.m"
                  }
#line 1868 "unify_gen.m"
                  {
#line 1868 "unify_gen.m"
                    ll_backend__unify_gen__V_85_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1868 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_85_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1868 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_85_85, 1) = ((MR_Box) (ll_backend__unify_gen__Const_83));
#line 1868 "unify_gen.m"
                  }
#line 1868 "unify_gen.m"
                  {
#line 1868 "unify_gen.m"
                    MR_Word base;
#line 1868 "unify_gen.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1868 "unify_gen.m"
                    *ll_backend__unify_gen__TypedRval_12 = base;
#line 1868 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__unify_gen__V_85_85));
#line 1868 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 7));
#line 1868 "unify_gen.m"
                  }
#line 1867 "unify_gen.m"
                }
#line 1867 "unify_gen.m"
                break;
#line 1867 "unify_gen.m"
              case (MR_Integer) 2:
#line 1867 "unify_gen.m"
              case (MR_Integer) 5:
#line 1867 "unify_gen.m"
              case (MR_Integer) 6:
#line 1867 "unify_gen.m"
              case (MR_Integer) 7:
#line 1867 "unify_gen.m"
              case (MR_Integer) 8:
#line 1867 "unify_gen.m"
              case (MR_Integer) 9:
#line 1867 "unify_gen.m"
              case (MR_Integer) 10:
#line 1867 "unify_gen.m"
              case (MR_Integer) 11:
#line 1867 "unify_gen.m"
              case (MR_Integer) 12:
#line 1867 "unify_gen.m"
              case (MR_Integer) 13:
#line 1911 "unify_gen.m"
                {
#line 1912 "unify_gen.m"
                  {
#line 1912 "unify_gen.m"
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_const_struct_arg_tag\'/6", (MR_String) "unexpected tag");
#line 1912 "unify_gen.m"
                    return;
                  }
#line 1911 "unify_gen.m"
                }
#line 1867 "unify_gen.m"
                break;
#line 1867 "unify_gen.m"
              case (MR_Integer) 3:
#line 1883 "unify_gen.m"
                {
#line 1883 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__ModuleName_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_10, (MR_Integer) 1)));
#line 1883 "unify_gen.m"
                  MR_String ll_backend__unify_gen__TypeName_27 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_10, (MR_Integer) 2)));
#line 1883 "unify_gen.m"
                  MR_Integer ll_backend__unify_gen__TypeArity_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_10, (MR_Integer) 3)));
#line 1883 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__RttiTypeCtor_29;
#line 1883 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__DataId_30;
#line 1883 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_58_58;
#line 1883 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_60_60;
#line 1883 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__Rval_77;

#line 1884 "unify_gen.m"
                  {
#line 1884 "unify_gen.m"
                    ll_backend__unify_gen__RttiTypeCtor_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1884 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiTypeCtor_29, 0) = ((MR_Box) (ll_backend__unify_gen__ModuleName_26));
#line 1884 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiTypeCtor_29, 1) = ((MR_Box) (ll_backend__unify_gen__TypeName_27));
#line 1884 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiTypeCtor_29, 2) = ((MR_Box) (ll_backend__unify_gen__TypeArity_28));
#line 1884 "unify_gen.m"
                  }
#line 1885 "unify_gen.m"
                  {
#line 1885 "unify_gen.m"
                    ll_backend__unify_gen__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1885 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_58_58, 0) = ((MR_Box) (ll_backend__unify_gen__RttiTypeCtor_29));
#line 1885 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
#line 1885 "unify_gen.m"
                  }
#line 1885 "unify_gen.m"
                  {
#line 1885 "unify_gen.m"
                    ll_backend__unify_gen__DataId_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1885 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__DataId_30, 0) = ((MR_Box) (ll_backend__unify_gen__V_58_58));
#line 1885 "unify_gen.m"
                  }
#line 1887 "unify_gen.m"
                  {
#line 1887 "unify_gen.m"
                    ll_backend__unify_gen__V_60_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1887 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_60_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1887 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_60_60, 1) = ((MR_Box) (ll_backend__unify_gen__DataId_30));
#line 1887 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_60_60, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1887 "unify_gen.m"
                  }
#line 1887 "unify_gen.m"
                  {
#line 1887 "unify_gen.m"
                    ll_backend__unify_gen__Rval_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1887 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Rval_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1887 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Rval_77, 1) = ((MR_Box) (ll_backend__unify_gen__V_60_60));
#line 1887 "unify_gen.m"
                  }
#line 1889 "unify_gen.m"
                  {
#line 1889 "unify_gen.m"
                    MR_Word base;
#line 1889 "unify_gen.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1889 "unify_gen.m"
                    *ll_backend__unify_gen__TypedRval_12 = base;
#line 1889 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__unify_gen__Rval_77));
#line 1889 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 11));
#line 1889 "unify_gen.m"
                  }
#line 1883 "unify_gen.m"
                }
#line 1867 "unify_gen.m"
                break;
#line 1867 "unify_gen.m"
              case (MR_Integer) 4:
#line 1891 "unify_gen.m"
                {
#line 1891 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__ClassId_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_10, (MR_Integer) 2)));
#line 1891 "unify_gen.m"
                  MR_String ll_backend__unify_gen__Instance_32 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_10, (MR_Integer) 3)));
#line 1891 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__TCName_33;
#line 1891 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_54_54;
#line 1891 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_55_55;
#line 1891 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_56_56;
#line 1891 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__Rval_79;
#line 1891 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__ModuleName_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_10, (MR_Integer) 1)));
#line 1891 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__DataId_81;

#line 1892 "unify_gen.m"
                  {
#line 1892 "unify_gen.m"
                    ll_backend__unify_gen__TCName_33 = backend_libs__type_class_info__generate_class_name_1_f_0(ll_backend__unify_gen__ClassId_31);
                  }
#line 1894 "unify_gen.m"
                  {
#line 1894 "unify_gen.m"
                    ll_backend__unify_gen__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1894 "unify_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_55_55, 0) = ((MR_Box) (ll_backend__unify_gen__ModuleName_80));
#line 1894 "unify_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_55_55, 1) = ((MR_Box) (ll_backend__unify_gen__Instance_32));
#line 1894 "unify_gen.m"
                  }
#line 1893 "unify_gen.m"
                  {
#line 1893 "unify_gen.m"
                    ll_backend__unify_gen__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1893 "unify_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_54_54, 0) = ((MR_Box) (ll_backend__unify_gen__TCName_33));
#line 1893 "unify_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_54_54, 1) = ((MR_Box) (ll_backend__unify_gen__V_55_55));
#line 1893 "unify_gen.m"
                  }
#line 1893 "unify_gen.m"
                  {
#line 1893 "unify_gen.m"
                    ll_backend__unify_gen__DataId_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1893 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__DataId_81, 0) = ((MR_Box) (ll_backend__unify_gen__V_54_54));
#line 1893 "unify_gen.m"
                  }
#line 1895 "unify_gen.m"
                  {
#line 1895 "unify_gen.m"
                    ll_backend__unify_gen__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1895 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1895 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_56_56, 1) = ((MR_Box) (ll_backend__unify_gen__DataId_81));
#line 1895 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_56_56, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1895 "unify_gen.m"
                  }
#line 1895 "unify_gen.m"
                  {
#line 1895 "unify_gen.m"
                    ll_backend__unify_gen__Rval_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1895 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Rval_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1895 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Rval_79, 1) = ((MR_Box) (ll_backend__unify_gen__V_56_56));
#line 1895 "unify_gen.m"
                  }
#line 1897 "unify_gen.m"
                  {
#line 1897 "unify_gen.m"
                    MR_Word base;
#line 1897 "unify_gen.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1897 "unify_gen.m"
                    *ll_backend__unify_gen__TypedRval_12 = base;
#line 1897 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__unify_gen__Rval_79));
#line 1897 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 11));
#line 1897 "unify_gen.m"
                  }
#line 1891 "unify_gen.m"
                }
#line 1867 "unify_gen.m"
                break;
#line 1867 "unify_gen.m"
              case (MR_Integer) 14:
#line 1870 "unify_gen.m"
                {
#line 1870 "unify_gen.m"
                  MR_Integer ll_backend__unify_gen__Ptag_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_10, (MR_Integer) 1)));
#line 1870 "unify_gen.m"
                  MR_Integer ll_backend__unify_gen__Stag_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_10, (MR_Integer) 2)));
#line 1870 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__Rval_22;
#line 1870 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_62_62;
#line 1870 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_64_64;
#line 1870 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_65_65;

#line 1871 "unify_gen.m"
                  {
#line 1871 "unify_gen.m"
                    ll_backend__unify_gen__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1871 "unify_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_65_65, 0) = ((MR_Box) (ll_backend__unify_gen__Stag_21));
#line 1871 "unify_gen.m"
                  }
#line 1871 "unify_gen.m"
                  {
#line 1871 "unify_gen.m"
                    ll_backend__unify_gen__V_64_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1871 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_64_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1871 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_64_64, 1) = ((MR_Box) (ll_backend__unify_gen__V_65_65));
#line 1871 "unify_gen.m"
                  }
#line 1871 "unify_gen.m"
                  {
#line 1871 "unify_gen.m"
                    ll_backend__unify_gen__V_62_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1871 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_62_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1871 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_62_62, 1) = ((MR_Box) ((MR_Integer) 4));
#line 1871 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_62_62, 2) = ((MR_Box) (ll_backend__unify_gen__V_64_64));
#line 1871 "unify_gen.m"
                  }
#line 1871 "unify_gen.m"
                  {
#line 1871 "unify_gen.m"
                    ll_backend__unify_gen__Rval_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1871 "unify_gen.m"
                    MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Rval_22, 0) = ((MR_Box) (ll_backend__unify_gen__Ptag_20));
#line 1871 "unify_gen.m"
                    MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Rval_22, 1) = ((MR_Box) (ll_backend__unify_gen__V_62_62));
#line 1871 "unify_gen.m"
                  }
#line 1872 "unify_gen.m"
                  {
#line 1872 "unify_gen.m"
                    MR_Word base;
#line 1872 "unify_gen.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1872 "unify_gen.m"
                    *ll_backend__unify_gen__TypedRval_12 = base;
#line 1872 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__unify_gen__Rval_22));
#line 1872 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 11));
#line 1872 "unify_gen.m"
                  }
#line 1870 "unify_gen.m"
                }
#line 1867 "unify_gen.m"
                break;
#line 1867 "unify_gen.m"
              case (MR_Integer) 15:
#line 1874 "unify_gen.m"
                {
#line 1874 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__RA_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_10, (MR_Integer) 1)));
#line 1874 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__Type_74;
#line 1874 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__Rval_75;

#line 1875 "unify_gen.m"
                  {
#line 1875 "unify_gen.m"
                    ll_backend__unify_gen__Rval_75 = ll_backend__unify_gen__generate_reserved_address_1_f_0(ll_backend__unify_gen__RA_23);
                  }
#line 1876 "unify_gen.m"
                  {
#line 1876 "unify_gen.m"
                    ll_backend__llds__rval_type_2_p_0(ll_backend__unify_gen__Rval_75, &ll_backend__unify_gen__Type_74);
                  }
#line 1877 "unify_gen.m"
                  {
#line 1877 "unify_gen.m"
                    MR_Word base;
#line 1877 "unify_gen.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1877 "unify_gen.m"
                    *ll_backend__unify_gen__TypedRval_12 = base;
#line 1877 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__unify_gen__Rval_75));
#line 1877 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__unify_gen__Type_74));
#line 1877 "unify_gen.m"
                  }
#line 1874 "unify_gen.m"
                }
#line 1867 "unify_gen.m"
                break;
#line 1867 "unify_gen.m"
              case (MR_Integer) 16:
#line 1879 "unify_gen.m"
                {
#line 1879 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__ActualConsTag_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_10, (MR_Integer) 2)));
#line 1879 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_10, (MR_Integer) 1)));

#line 1880 "unify_gen.m"
                  /* direct tailcall eliminated */
#line 1880 "unify_gen.m"
                  {
#line 1880 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__ConsTag__tmp_copy_10 = ll_backend__unify_gen__ActualConsTag_25;

#line 1880 "unify_gen.m"
                    ll_backend__unify_gen__ConsTag_10 = ll_backend__unify_gen__ConsTag__tmp_copy_10;
#line 1880 "unify_gen.m"
                  }
#line 1880 "unify_gen.m"
                  continue;
#line 1879 "unify_gen.m"
                }
#line 1867 "unify_gen.m"
                break;
#line 1867 "unify_gen.m"
            }
#line 1867 "unify_gen.m"
            break;
#line 1867 "unify_gen.m"
        }
#line 1867 "unify_gen.m"
      }
#line 1867 "unify_gen.m"
      break;
#line 1867 "unify_gen.m"
    }
#line 1831 "unify_gen.m"
}

#line 1715 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_95_115_116_114_117_99_116_95_114_118_97_108_95_95_91_52_93_95_48_10_p_0(
#line 1715 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ModuleInfo_11,
#line 1715 "unify_gen.m"
  MR_Word ll_backend__unify_gen__UnboxedFloats_12,
#line 1715 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConstStructMap_13,
#line 1715 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConsTag_15,
#line 1715 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConstArgs_16,
#line 1715 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConsArgWidths_17,
#line 1715 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__TypedRval_18,
#line 1715 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_70,
#line 1715 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_71)
#line 1715 "unify_gen.m"
{
#line 1724 "unify_gen.m"
  while (MR_TRUE)
#line 1724 "unify_gen.m"
    {
#line 1724 "unify_gen.m"
      /* tailcall optimized into a loop */
#line 1724 "unify_gen.m"
      {
#line 1724 "unify_gen.m"
        MR_bool ll_backend__unify_gen__succeeded;

#line 1724 "unify_gen.m"
#line 1724 "unify_gen.m"
        switch (MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_15)) {
#line 1724 "unify_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1724 "unify_gen.m"
          case (MR_Integer) 0:
#line 1724 "unify_gen.m"
#line 1724 "unify_gen.m"
            switch (MR_unmkbody(ll_backend__unify_gen__ConsTag_15)) {
#line 1724 "unify_gen.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1724 "unify_gen.m"
              case (MR_Integer) 0:
#line 1764 "unify_gen.m"
                {
#line 1764 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__ArgTypedRvals_35;
#line 1764 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__PackArgTypedRvals_36;
#line 1764 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__DataAddr_37;
#line 1764 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__CellPtrConst_39;
#line 1764 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_82_82;
#line 1764 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__Rval_106;

#line 1765 "unify_gen.m"
                  {
#line 1765 "unify_gen.m"
                    ll_backend__unify_gen__generate_const_struct_args_6_p_0(ll_backend__unify_gen__ModuleInfo_11, ll_backend__unify_gen__UnboxedFloats_12, ll_backend__unify_gen__ConstStructMap_13, ll_backend__unify_gen__ConstArgs_16, ll_backend__unify_gen__ConsArgWidths_17, &ll_backend__unify_gen__ArgTypedRvals_35);
                  }
#line 1767 "unify_gen.m"
                  {
#line 1767 "unify_gen.m"
                    ll_backend__unify_gen__pack_ground_term_args_3_p_0(ll_backend__unify_gen__ConsArgWidths_17, ll_backend__unify_gen__ArgTypedRvals_35, &ll_backend__unify_gen__PackArgTypedRvals_36);
                  }
#line 1768 "unify_gen.m"
                  {
#line 1768 "unify_gen.m"
                    ll_backend__global_data__add_scalar_static_cell_4_p_0(ll_backend__unify_gen__PackArgTypedRvals_36, &ll_backend__unify_gen__DataAddr_37, ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_70, ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_71);
                  }
#line 1770 "unify_gen.m"
                  {
#line 1770 "unify_gen.m"
                    ll_backend__unify_gen__V_82_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1770 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_82_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1770 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_82_82, 1) = ((MR_Box) (ll_backend__unify_gen__DataAddr_37));
#line 1770 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_82_82, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1770 "unify_gen.m"
                  }
#line 1770 "unify_gen.m"
                  {
#line 1770 "unify_gen.m"
                    ll_backend__unify_gen__CellPtrConst_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1770 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__CellPtrConst_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1770 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__CellPtrConst_39, 1) = ((MR_Box) (ll_backend__unify_gen__V_82_82));
#line 1770 "unify_gen.m"
                  }
#line 1771 "unify_gen.m"
                  {
#line 1771 "unify_gen.m"
                    ll_backend__unify_gen__Rval_106 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1771 "unify_gen.m"
                    MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Rval_106, 0) = ((MR_Box) ((MR_Integer) 0));
#line 1771 "unify_gen.m"
                    MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Rval_106, 1) = ((MR_Box) (ll_backend__unify_gen__CellPtrConst_39));
#line 1771 "unify_gen.m"
                  }
#line 1772 "unify_gen.m"
                  {
#line 1772 "unify_gen.m"
                    MR_Word base;
#line 1772 "unify_gen.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1772 "unify_gen.m"
                    *ll_backend__unify_gen__TypedRval_18 = base;
#line 1772 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__unify_gen__Rval_106));
#line 1772 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 11));
#line 1772 "unify_gen.m"
                  }
#line 1764 "unify_gen.m"
                }
#line 1724 "unify_gen.m"
                break;
#line 1724 "unify_gen.m"
              case (MR_Integer) 1:
#line 1729 "unify_gen.m"
                {
#line 1736 "unify_gen.m"
                  if ((ll_backend__unify_gen__ConstArgs_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1739 "unify_gen.m"
                    {
#line 1740 "unify_gen.m"
                      {
#line 1740 "unify_gen.m"
                        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_const_struct_rval\'/10", (MR_String) "no_tag arity != 1");
#line 1740 "unify_gen.m"
                        return;
                      }
#line 1739 "unify_gen.m"
                    }
#line 1736 "unify_gen.m"
                  else
#line 1736 "unify_gen.m"
                    {
#line 1736 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ConstArgs_16, (MR_Integer) 1)));
#line 1736 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ConstArgs_16, (MR_Integer) 0)));

#line 1736 "unify_gen.m"
                      if ((ll_backend__unify_gen__V_137_137 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1731 "unify_gen.m"
                        {
#line 1731 "unify_gen.m"
                          MR_Word ll_backend__unify_gen__ConsArgWidth_23;

#line 1732 "unify_gen.m"
                          {
#line 1732 "unify_gen.m"
                            ll_backend__unify_gen__det_single_arg_width_2_p_0(ll_backend__unify_gen__ConsArgWidths_17, &ll_backend__unify_gen__ConsArgWidth_23);
                          }
#line 1733 "unify_gen.m"
                          {
#line 1733 "unify_gen.m"
                            ll_backend__unify_gen__generate_const_struct_arg_6_p_0(ll_backend__unify_gen__ModuleInfo_11, ll_backend__unify_gen__UnboxedFloats_12, ll_backend__unify_gen__ConstStructMap_13, ll_backend__unify_gen__V_138_138, ll_backend__unify_gen__ConsArgWidth_23, ll_backend__unify_gen__TypedRval_18);
                          }
#line 1731 "unify_gen.m"
                        }
#line 1736 "unify_gen.m"
                      else
#line 1739 "unify_gen.m"
                        {
#line 1740 "unify_gen.m"
                          {
#line 1740 "unify_gen.m"
                            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_const_struct_rval\'/10", (MR_String) "no_tag arity != 1");
#line 1740 "unify_gen.m"
                            return;
                          }
#line 1739 "unify_gen.m"
                        }
#line 1736 "unify_gen.m"
                    }
#line 1729 "unify_gen.m"
                  *ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_71 = ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_70;
#line 1729 "unify_gen.m"
                }
#line 1724 "unify_gen.m"
                break;
#line 1724 "unify_gen.m"
            }
#line 1724 "unify_gen.m"
            break;
#line 1724 "unify_gen.m"
          case (MR_Integer) 1:
#line 1724 "unify_gen.m"
          case (MR_Integer) 2:
#line 1801 "unify_gen.m"
            {
#line 1802 "unify_gen.m"
              {
#line 1802 "unify_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_const_struct_rval\'/10", (MR_String) "unexpected tag");
#line 1802 "unify_gen.m"
                return;
              }
#line 1801 "unify_gen.m"
            }
#line 1724 "unify_gen.m"
            break;
#line 1724 "unify_gen.m"
          case (MR_Integer) 3:
#line 1724 "unify_gen.m"
#line 1724 "unify_gen.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 0)))) {
#line 1724 "unify_gen.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1724 "unify_gen.m"
              case (MR_Integer) 0:
#line 1724 "unify_gen.m"
              case (MR_Integer) 1:
#line 1724 "unify_gen.m"
              case (MR_Integer) 2:
#line 1724 "unify_gen.m"
              case (MR_Integer) 3:
#line 1724 "unify_gen.m"
              case (MR_Integer) 4:
#line 1724 "unify_gen.m"
              case (MR_Integer) 5:
#line 1724 "unify_gen.m"
              case (MR_Integer) 6:
#line 1724 "unify_gen.m"
              case (MR_Integer) 7:
#line 1724 "unify_gen.m"
              case (MR_Integer) 8:
#line 1724 "unify_gen.m"
              case (MR_Integer) 9:
#line 1724 "unify_gen.m"
              case (MR_Integer) 10:
#line 1724 "unify_gen.m"
              case (MR_Integer) 14:
#line 1724 "unify_gen.m"
              case (MR_Integer) 15:
#line 1801 "unify_gen.m"
                {
#line 1802 "unify_gen.m"
                  {
#line 1802 "unify_gen.m"
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_const_struct_rval\'/10", (MR_String) "unexpected tag");
#line 1802 "unify_gen.m"
                    return;
                  }
#line 1801 "unify_gen.m"
                }
#line 1724 "unify_gen.m"
                break;
#line 1724 "unify_gen.m"
              case (MR_Integer) 11:
#line 1764 "unify_gen.m"
                {
#line 1764 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__ArgTypedRvals_126;
#line 1764 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__PackArgTypedRvals_127;
#line 1764 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__DataAddr_128;
#line 1764 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__CellPtrConst_130;
#line 1764 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_131_131;
#line 1764 "unify_gen.m"
                  MR_Integer ll_backend__unify_gen__Ptag_133 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 1)));
#line 1764 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__Rval_134;

#line 1765 "unify_gen.m"
                  {
#line 1765 "unify_gen.m"
                    ll_backend__unify_gen__generate_const_struct_args_6_p_0(ll_backend__unify_gen__ModuleInfo_11, ll_backend__unify_gen__UnboxedFloats_12, ll_backend__unify_gen__ConstStructMap_13, ll_backend__unify_gen__ConstArgs_16, ll_backend__unify_gen__ConsArgWidths_17, &ll_backend__unify_gen__ArgTypedRvals_126);
                  }
#line 1767 "unify_gen.m"
                  {
#line 1767 "unify_gen.m"
                    ll_backend__unify_gen__pack_ground_term_args_3_p_0(ll_backend__unify_gen__ConsArgWidths_17, ll_backend__unify_gen__ArgTypedRvals_126, &ll_backend__unify_gen__PackArgTypedRvals_127);
                  }
#line 1768 "unify_gen.m"
                  {
#line 1768 "unify_gen.m"
                    ll_backend__global_data__add_scalar_static_cell_4_p_0(ll_backend__unify_gen__PackArgTypedRvals_127, &ll_backend__unify_gen__DataAddr_128, ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_70, ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_71);
                  }
#line 1770 "unify_gen.m"
                  {
#line 1770 "unify_gen.m"
                    ll_backend__unify_gen__V_131_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1770 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_131_131, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1770 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_131_131, 1) = ((MR_Box) (ll_backend__unify_gen__DataAddr_128));
#line 1770 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_131_131, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1770 "unify_gen.m"
                  }
#line 1770 "unify_gen.m"
                  {
#line 1770 "unify_gen.m"
                    ll_backend__unify_gen__CellPtrConst_130 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1770 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__CellPtrConst_130, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1770 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__CellPtrConst_130, 1) = ((MR_Box) (ll_backend__unify_gen__V_131_131));
#line 1770 "unify_gen.m"
                  }
#line 1771 "unify_gen.m"
                  {
#line 1771 "unify_gen.m"
                    ll_backend__unify_gen__Rval_134 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1771 "unify_gen.m"
                    MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Rval_134, 0) = ((MR_Box) (ll_backend__unify_gen__Ptag_133));
#line 1771 "unify_gen.m"
                    MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Rval_134, 1) = ((MR_Box) (ll_backend__unify_gen__CellPtrConst_130));
#line 1771 "unify_gen.m"
                  }
#line 1772 "unify_gen.m"
                  {
#line 1772 "unify_gen.m"
                    MR_Word base;
#line 1772 "unify_gen.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1772 "unify_gen.m"
                    *ll_backend__unify_gen__TypedRval_18 = base;
#line 1772 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__unify_gen__Rval_134));
#line 1772 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 11));
#line 1772 "unify_gen.m"
                  }
#line 1764 "unify_gen.m"
                }
#line 1724 "unify_gen.m"
                break;
#line 1724 "unify_gen.m"
              case (MR_Integer) 12:
#line 1743 "unify_gen.m"
                {
#line 1743 "unify_gen.m"
                  MR_Integer ll_backend__unify_gen__Ptag_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 1)));

#line 1752 "unify_gen.m"
                  if ((ll_backend__unify_gen__ConstArgs_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1755 "unify_gen.m"
                    {
#line 1756 "unify_gen.m"
                      {
#line 1756 "unify_gen.m"
                        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_const_struct_rval\'/10", (MR_String) "direct_arg_tag: arity != 1");
#line 1756 "unify_gen.m"
                        return;
                      }
#line 1755 "unify_gen.m"
                    }
#line 1752 "unify_gen.m"
                  else
#line 1752 "unify_gen.m"
                    {
#line 1752 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ConstArgs_16, (MR_Integer) 1)));
#line 1752 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ConstArgs_16, (MR_Integer) 0)));

#line 1752 "unify_gen.m"
                      if ((ll_backend__unify_gen__V_135_135 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1745 "unify_gen.m"
                        {
#line 1745 "unify_gen.m"
                          MR_Word ll_backend__unify_gen__ArgRval_29;
#line 1745 "unify_gen.m"
                          MR_Word ll_backend__unify_gen__Rval_31;
#line 1745 "unify_gen.m"
                          MR_Word ll_backend__unify_gen__ConsArgWidth_97;
#line 1745 "unify_gen.m"
                          MR_Word ll_backend__unify_gen__ArgTypedRval_98;
#line 1749 "unify_gen.m"
                          MR_Word ll_backend__unify_gen___RvalType_30;

#line 1746 "unify_gen.m"
                          {
#line 1746 "unify_gen.m"
                            ll_backend__unify_gen__det_single_arg_width_2_p_0(ll_backend__unify_gen__ConsArgWidths_17, &ll_backend__unify_gen__ConsArgWidth_97);
                          }
#line 1747 "unify_gen.m"
                          {
#line 1747 "unify_gen.m"
                            ll_backend__unify_gen__generate_const_struct_arg_6_p_0(ll_backend__unify_gen__ModuleInfo_11, ll_backend__unify_gen__UnboxedFloats_12, ll_backend__unify_gen__ConstStructMap_13, ll_backend__unify_gen__V_136_136, ll_backend__unify_gen__ConsArgWidth_97, &ll_backend__unify_gen__ArgTypedRval_98);
                          }
#line 1749 "unify_gen.m"
                          ll_backend__unify_gen__ArgRval_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ArgTypedRval_98, (MR_Integer) 0)));
#line 1749 "unify_gen.m"
                          ll_backend__unify_gen___RvalType_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ArgTypedRval_98, (MR_Integer) 1)));
#line 1750 "unify_gen.m"
                          {
#line 1750 "unify_gen.m"
                            ll_backend__unify_gen__Rval_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1750 "unify_gen.m"
                            MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Rval_31, 0) = ((MR_Box) (ll_backend__unify_gen__Ptag_28));
#line 1750 "unify_gen.m"
                            MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Rval_31, 1) = ((MR_Box) (ll_backend__unify_gen__ArgRval_29));
#line 1750 "unify_gen.m"
                          }
#line 1751 "unify_gen.m"
                          {
#line 1751 "unify_gen.m"
                            MR_Word base;
#line 1751 "unify_gen.m"
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1751 "unify_gen.m"
                            *ll_backend__unify_gen__TypedRval_18 = base;
#line 1751 "unify_gen.m"
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__unify_gen__Rval_31));
#line 1751 "unify_gen.m"
                            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 11));
#line 1751 "unify_gen.m"
                          }
#line 1745 "unify_gen.m"
                        }
#line 1752 "unify_gen.m"
                      else
#line 1755 "unify_gen.m"
                        {
#line 1756 "unify_gen.m"
                          {
#line 1756 "unify_gen.m"
                            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_const_struct_rval\'/10", (MR_String) "direct_arg_tag: arity != 1");
#line 1756 "unify_gen.m"
                            return;
                          }
#line 1755 "unify_gen.m"
                        }
#line 1752 "unify_gen.m"
                    }
#line 1743 "unify_gen.m"
                  *ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_71 = ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_70;
#line 1743 "unify_gen.m"
                }
#line 1724 "unify_gen.m"
                break;
#line 1724 "unify_gen.m"
              case (MR_Integer) 13:
#line 1774 "unify_gen.m"
                {
#line 1774 "unify_gen.m"
                  MR_Integer ll_backend__unify_gen__Stag_40 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 2)));
#line 1774 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__StagTypedRval_41;
#line 1774 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__AllTypedRvals_42;
#line 1774 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_75_75;
#line 1774 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_76_76;
#line 1774 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_79_79;
#line 1774 "unify_gen.m"
                  MR_Integer ll_backend__unify_gen__Ptag_107 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 1)));
#line 1774 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__Rval_108;
#line 1774 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__ArgTypedRvals_109;
#line 1774 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__PackArgTypedRvals_110;
#line 1774 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__DataAddr_111;
#line 1774 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__CellPtrConst_113;

#line 1775 "unify_gen.m"
                  {
#line 1775 "unify_gen.m"
                    ll_backend__unify_gen__generate_const_struct_args_6_p_0(ll_backend__unify_gen__ModuleInfo_11, ll_backend__unify_gen__UnboxedFloats_12, ll_backend__unify_gen__ConstStructMap_13, ll_backend__unify_gen__ConstArgs_16, ll_backend__unify_gen__ConsArgWidths_17, &ll_backend__unify_gen__ArgTypedRvals_109);
                  }
#line 1777 "unify_gen.m"
                  {
#line 1777 "unify_gen.m"
                    ll_backend__unify_gen__pack_ground_term_args_3_p_0(ll_backend__unify_gen__ConsArgWidths_17, ll_backend__unify_gen__ArgTypedRvals_109, &ll_backend__unify_gen__PackArgTypedRvals_110);
                  }
#line 1778 "unify_gen.m"
                  {
#line 1778 "unify_gen.m"
                    ll_backend__unify_gen__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1778 "unify_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_76_76, 0) = ((MR_Box) (ll_backend__unify_gen__Stag_40));
#line 1778 "unify_gen.m"
                  }
#line 1778 "unify_gen.m"
                  {
#line 1778 "unify_gen.m"
                    ll_backend__unify_gen__V_75_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1778 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_75_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1778 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_75_75, 1) = ((MR_Box) (ll_backend__unify_gen__V_76_76));
#line 1778 "unify_gen.m"
                  }
#line 1778 "unify_gen.m"
                  {
#line 1778 "unify_gen.m"
                    ll_backend__unify_gen__StagTypedRval_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1778 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__StagTypedRval_41, 0) = ((MR_Box) (ll_backend__unify_gen__V_75_75));
#line 1778 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__StagTypedRval_41, 1) = ((MR_Box) ((MR_Integer) 7));
#line 1778 "unify_gen.m"
                  }
#line 1779 "unify_gen.m"
                  {
#line 1779 "unify_gen.m"
                    ll_backend__unify_gen__AllTypedRvals_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1779 "unify_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__AllTypedRvals_42, 0) = ((MR_Box) (ll_backend__unify_gen__StagTypedRval_41));
#line 1779 "unify_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__AllTypedRvals_42, 1) = ((MR_Box) (ll_backend__unify_gen__PackArgTypedRvals_110));
#line 1779 "unify_gen.m"
                  }
#line 1780 "unify_gen.m"
                  {
#line 1780 "unify_gen.m"
                    ll_backend__global_data__add_scalar_static_cell_4_p_0(ll_backend__unify_gen__AllTypedRvals_42, &ll_backend__unify_gen__DataAddr_111, ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_70, ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_71);
                  }
#line 1782 "unify_gen.m"
                  {
#line 1782 "unify_gen.m"
                    ll_backend__unify_gen__V_79_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1782 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_79_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1782 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_79_79, 1) = ((MR_Box) (ll_backend__unify_gen__DataAddr_111));
#line 1782 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_79_79, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1782 "unify_gen.m"
                  }
#line 1782 "unify_gen.m"
                  {
#line 1782 "unify_gen.m"
                    ll_backend__unify_gen__CellPtrConst_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1782 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__CellPtrConst_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1782 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__CellPtrConst_113, 1) = ((MR_Box) (ll_backend__unify_gen__V_79_79));
#line 1782 "unify_gen.m"
                  }
#line 1783 "unify_gen.m"
                  {
#line 1783 "unify_gen.m"
                    ll_backend__unify_gen__Rval_108 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1783 "unify_gen.m"
                    MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Rval_108, 0) = ((MR_Box) (ll_backend__unify_gen__Ptag_107));
#line 1783 "unify_gen.m"
                    MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Rval_108, 1) = ((MR_Box) (ll_backend__unify_gen__CellPtrConst_113));
#line 1783 "unify_gen.m"
                  }
#line 1784 "unify_gen.m"
                  {
#line 1784 "unify_gen.m"
                    MR_Word base;
#line 1784 "unify_gen.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1784 "unify_gen.m"
                    *ll_backend__unify_gen__TypedRval_18 = base;
#line 1784 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__unify_gen__Rval_108));
#line 1784 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 11));
#line 1784 "unify_gen.m"
                  }
#line 1774 "unify_gen.m"
                }
#line 1724 "unify_gen.m"
                break;
#line 1724 "unify_gen.m"
              case (MR_Integer) 16:
#line 1724 "unify_gen.m"
                {
#line 1724 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__ActualConsTag_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 2)));
#line 1724 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 1)));

#line 1725 "unify_gen.m"
                  /* direct tailcall eliminated */
#line 1725 "unify_gen.m"
                  {
#line 1725 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__ConsTag__tmp_copy_15 = ll_backend__unify_gen__ActualConsTag_21;

#line 1725 "unify_gen.m"
                    ll_backend__unify_gen__ConsTag_15 = ll_backend__unify_gen__ConsTag__tmp_copy_15;
#line 1725 "unify_gen.m"
                  }
#line 1725 "unify_gen.m"
                  continue;
#line 1724 "unify_gen.m"
                }
#line 1724 "unify_gen.m"
                break;
#line 1724 "unify_gen.m"
            }
#line 1724 "unify_gen.m"
            break;
#line 1724 "unify_gen.m"
        }
#line 1724 "unify_gen.m"
      }
#line 1724 "unify_gen.m"
      break;
#line 1724 "unify_gen.m"
    }
#line 1715 "unify_gen.m"
}

#line 1281 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_10_p_0(
#line 1281 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Var_11,
#line 1281 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Args_13,
#line 1281 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Modes_14,
#line 1281 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ArgWidths_15,
#line 1281 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Tag_16,
#line 1281 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_17,
#line 1281 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CI_18,
#line 1281 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_64,
#line 1281 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_65)
#line 1281 "unify_gen.m"
{
#line 1301 "unify_gen.m"
  while (MR_TRUE)
#line 1301 "unify_gen.m"
    {
#line 1301 "unify_gen.m"
      /* tailcall optimized into a loop */
#line 1301 "unify_gen.m"
      {
#line 1301 "unify_gen.m"
        MR_bool ll_backend__unify_gen__succeeded;

#line 1301 "unify_gen.m"
#line 1301 "unify_gen.m"
        switch (MR_tag((MR_Word) ll_backend__unify_gen__Tag_16)) {
#line 1301 "unify_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1301 "unify_gen.m"
          case (MR_Integer) 0:
#line 1301 "unify_gen.m"
#line 1301 "unify_gen.m"
            switch (MR_unmkbody(ll_backend__unify_gen__Tag_16)) {
#line 1301 "unify_gen.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1301 "unify_gen.m"
              case (MR_Integer) 0:
#line 1350 "unify_gen.m"
                {
#line 1352 "unify_gen.m"
                  /* direct tailcall eliminated */
#line 1352 "unify_gen.m"
                  {
#line 1352 "unify_gen.m"
                    ll_backend__unify_gen__Tag_16 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[13]);
#line 1352 "unify_gen.m"
                  }
#line 1352 "unify_gen.m"
                  continue;
#line 1350 "unify_gen.m"
                }
#line 1301 "unify_gen.m"
                break;
#line 1301 "unify_gen.m"
              case (MR_Integer) 1:
#line 1346 "unify_gen.m"
                {
#line 1346 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__Arg_47;
#line 1346 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__Mode_48;
#line 1318 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_81_81;
#line 1318 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_82_82;
#line 1318 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_83_83;
#line 1320 "unify_gen.m"
                  MR_Word ll_backend__unify_gen___ArgWidth_49;

#line 1318 "unify_gen.m"
                  ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__Args_13)) == (MR_mktag((MR_Integer) 1)));
#line 1318 "unify_gen.m"
                  if (ll_backend__unify_gen__succeeded)
#line 1318 "unify_gen.m"
                    {
#line 1318 "unify_gen.m"
                      ll_backend__unify_gen__Arg_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Args_13, (MR_Integer) 0)));
#line 1318 "unify_gen.m"
                      ll_backend__unify_gen__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Args_13, (MR_Integer) 1)));
#line 1318 "unify_gen.m"
                      ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__V_81_81 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1318 "unify_gen.m"
                      if (ll_backend__unify_gen__succeeded)
#line 1318 "unify_gen.m"
                        {
#line 1319 "unify_gen.m"
                          ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__Modes_14)) == (MR_mktag((MR_Integer) 1)));
#line 1319 "unify_gen.m"
                          if (ll_backend__unify_gen__succeeded)
#line 1319 "unify_gen.m"
                            {
#line 1319 "unify_gen.m"
                              ll_backend__unify_gen__Mode_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Modes_14, (MR_Integer) 0)));
#line 1319 "unify_gen.m"
                              ll_backend__unify_gen__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Modes_14, (MR_Integer) 1)));
#line 1319 "unify_gen.m"
                              ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__V_82_82 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1318 "unify_gen.m"
                              if (ll_backend__unify_gen__succeeded)
#line 1318 "unify_gen.m"
                                {
#line 1320 "unify_gen.m"
                                  ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__ArgWidths_15)) == (MR_mktag((MR_Integer) 1)));
#line 1320 "unify_gen.m"
                                  if (ll_backend__unify_gen__succeeded)
#line 1320 "unify_gen.m"
                                    {
#line 1320 "unify_gen.m"
                                      ll_backend__unify_gen___ArgWidth_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ArgWidths_15, (MR_Integer) 0)));
#line 1320 "unify_gen.m"
                                      ll_backend__unify_gen__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ArgWidths_15, (MR_Integer) 1)));
#line 1320 "unify_gen.m"
                                      ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__V_83_83 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1320 "unify_gen.m"
                                    }
#line 1318 "unify_gen.m"
                                }
#line 1319 "unify_gen.m"
                            }
#line 1318 "unify_gen.m"
                        }
#line 1318 "unify_gen.m"
                    }
#line 1346 "unify_gen.m"
                  if (ll_backend__unify_gen__succeeded)
#line 1322 "unify_gen.m"
                    {
#line 1322 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__VarType_50;
#line 1322 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__ModuleInfo_51;
#line 1322 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__IsDummy_52;

#line 1322 "unify_gen.m"
                      {
#line 1322 "unify_gen.m"
                        ll_backend__unify_gen__VarType_50 = ll_backend__code_info__variable_type_2_f_0(ll_backend__unify_gen__CI_18, ll_backend__unify_gen__Var_11);
                      }
#line 1323 "unify_gen.m"
                      {
#line 1323 "unify_gen.m"
                        ll_backend__code_info__get_module_info_2_p_0(ll_backend__unify_gen__CI_18, &ll_backend__unify_gen__ModuleInfo_51);
                      }
#line 1324 "unify_gen.m"
                      {
#line 1324 "unify_gen.m"
                        ll_backend__unify_gen__IsDummy_52 = check_hlds__type_util__check_dummy_type_2_f_0(ll_backend__unify_gen__ModuleInfo_51, ll_backend__unify_gen__VarType_50);
                      }
#line 1340 "unify_gen.m"
#line 1340 "unify_gen.m"
                      switch (ll_backend__unify_gen__IsDummy_52) {
#line 1340 "unify_gen.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 1340 "unify_gen.m"
                        case (MR_Integer) 0:
#line 1326 "unify_gen.m"
                          {
#line 1334 "unify_gen.m"
                            {
#line 1334 "unify_gen.m"
                              ll_backend__unify_gen__succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CLD_0_64, ll_backend__unify_gen__Arg_47);
                            }
#line 1336 "unify_gen.m"
                            if (ll_backend__unify_gen__succeeded)
#line 1335 "unify_gen.m"
                              {
#line 1335 "unify_gen.m"
                                {
#line 1335 "unify_gen.m"
                                  ll_backend__code_loc_dep__assign_const_to_var_5_p_0(ll_backend__unify_gen__Arg_47, (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[8]), ll_backend__unify_gen__CI_18, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_64, ll_backend__unify_gen__STATE_VARIABLE_CLD_65);
                                }
#line 1335 "unify_gen.m"
                              }
#line 1336 "unify_gen.m"
                            else
#line 1336 "unify_gen.m"
                              *ll_backend__unify_gen__STATE_VARIABLE_CLD_65 = ll_backend__unify_gen__STATE_VARIABLE_CLD_0_64;
#line 1339 "unify_gen.m"
                            {
#line 1339 "unify_gen.m"
                              *ll_backend__unify_gen__Code_17 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                            }
#line 1326 "unify_gen.m"
                          }
#line 1340 "unify_gen.m"
                          break;
#line 1340 "unify_gen.m"
                        case (MR_Integer) 1:
#line 1341 "unify_gen.m"
                          {
#line 1341 "unify_gen.m"
                            MR_Word ll_backend__unify_gen__ArgType_53;
#line 1341 "unify_gen.m"
                            MR_Word ll_backend__unify_gen__V_84_84;
#line 1341 "unify_gen.m"
                            MR_Word ll_backend__unify_gen__V_85_85;

#line 1342 "unify_gen.m"
                            {
#line 1342 "unify_gen.m"
                              ll_backend__unify_gen__ArgType_53 = ll_backend__code_info__variable_type_2_f_0(ll_backend__unify_gen__CI_18, ll_backend__unify_gen__Arg_47);
                            }
#line 1343 "unify_gen.m"
                            {
#line 1343 "unify_gen.m"
                              ll_backend__unify_gen__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1343 "unify_gen.m"
                              MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_84_84, 0) = ((MR_Box) (ll_backend__unify_gen__Var_11));
#line 1343 "unify_gen.m"
                            }
#line 1343 "unify_gen.m"
                            {
#line 1343 "unify_gen.m"
                              ll_backend__unify_gen__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1343 "unify_gen.m"
                              MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_85_85, 0) = ((MR_Box) (ll_backend__unify_gen__Arg_47));
#line 1343 "unify_gen.m"
                            }
#line 1343 "unify_gen.m"
                            {
#line 1343 "unify_gen.m"
                              ll_backend__unify_gen__generate_sub_unify_8_p_0(ll_backend__unify_gen__V_84_84, ll_backend__unify_gen__V_85_85, ll_backend__unify_gen__Mode_48, ll_backend__unify_gen__ArgType_53, ll_backend__unify_gen__Code_17, ll_backend__unify_gen__CI_18, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_64, ll_backend__unify_gen__STATE_VARIABLE_CLD_65);
#line 1343 "unify_gen.m"
                              return;
                            }
#line 1341 "unify_gen.m"
                          }
#line 1340 "unify_gen.m"
                          break;
#line 1340 "unify_gen.m"
                      }
#line 1322 "unify_gen.m"
                    }
#line 1346 "unify_gen.m"
                  else
#line 1347 "unify_gen.m"
                    {
#line 1347 "unify_gen.m"
                      {
#line 1347 "unify_gen.m"
                        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_det_deconstruction_2\'/10", (MR_String) "no_tag: arity != 1");
#line 1347 "unify_gen.m"
                        return;
                      }
#line 1347 "unify_gen.m"
                    }
#line 1346 "unify_gen.m"
                }
#line 1301 "unify_gen.m"
                break;
#line 1301 "unify_gen.m"
            }
#line 1301 "unify_gen.m"
            break;
#line 1301 "unify_gen.m"
          case (MR_Integer) 1:
#line 1301 "unify_gen.m"
          case (MR_Integer) 2:
#line 1301 "unify_gen.m"
            {
#line 1302 "unify_gen.m"
              {
#line 1302 "unify_gen.m"
                *ll_backend__unify_gen__Code_17 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
#line 1301 "unify_gen.m"
              *ll_backend__unify_gen__STATE_VARIABLE_CLD_65 = ll_backend__unify_gen__STATE_VARIABLE_CLD_0_64;
#line 1301 "unify_gen.m"
            }
#line 1301 "unify_gen.m"
            break;
#line 1301 "unify_gen.m"
          case (MR_Integer) 3:
#line 1301 "unify_gen.m"
#line 1301 "unify_gen.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Tag_16, (MR_Integer) 0)))) {
#line 1301 "unify_gen.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1301 "unify_gen.m"
              case (MR_Integer) 0:
#line 1301 "unify_gen.m"
              case (MR_Integer) 1:
#line 1301 "unify_gen.m"
              case (MR_Integer) 2:
#line 1301 "unify_gen.m"
              case (MR_Integer) 3:
#line 1301 "unify_gen.m"
              case (MR_Integer) 4:
#line 1301 "unify_gen.m"
              case (MR_Integer) 8:
#line 1301 "unify_gen.m"
              case (MR_Integer) 9:
#line 1301 "unify_gen.m"
              case (MR_Integer) 14:
#line 1301 "unify_gen.m"
              case (MR_Integer) 15:
#line 1301 "unify_gen.m"
                {
#line 1302 "unify_gen.m"
                  {
#line 1302 "unify_gen.m"
                    *ll_backend__unify_gen__Code_17 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                  }
#line 1301 "unify_gen.m"
                  *ll_backend__unify_gen__STATE_VARIABLE_CLD_65 = ll_backend__unify_gen__STATE_VARIABLE_CLD_0_64;
#line 1301 "unify_gen.m"
                }
#line 1301 "unify_gen.m"
                break;
#line 1301 "unify_gen.m"
              case (MR_Integer) 5:
#line 1304 "unify_gen.m"
                {
#line 1305 "unify_gen.m"
                  {
#line 1305 "unify_gen.m"
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_det_deconstruction_2\'/10", (MR_String) "type_info_const_tag");
#line 1305 "unify_gen.m"
                    return;
                  }
#line 1304 "unify_gen.m"
                }
#line 1301 "unify_gen.m"
                break;
#line 1301 "unify_gen.m"
              case (MR_Integer) 6:
#line 1307 "unify_gen.m"
                {
#line 1308 "unify_gen.m"
                  {
#line 1308 "unify_gen.m"
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_det_deconstruction_2\'/10", (MR_String) "typeclass_info_const_tag");
#line 1308 "unify_gen.m"
                    return;
                  }
#line 1307 "unify_gen.m"
                }
#line 1301 "unify_gen.m"
                break;
#line 1301 "unify_gen.m"
              case (MR_Integer) 7:
#line 1310 "unify_gen.m"
                {
#line 1311 "unify_gen.m"
                  {
#line 1311 "unify_gen.m"
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_det_deconstruction_2\'/10", (MR_String) "ground_term_const_tag");
#line 1311 "unify_gen.m"
                    return;
                  }
#line 1310 "unify_gen.m"
                }
#line 1301 "unify_gen.m"
                break;
#line 1301 "unify_gen.m"
              case (MR_Integer) 10:
#line 1313 "unify_gen.m"
                {
#line 1314 "unify_gen.m"
                  {
#line 1314 "unify_gen.m"
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_det_deconstruction_2\'/10", (MR_String) "table_io_entry_tag");
#line 1314 "unify_gen.m"
                    return;
                  }
#line 1313 "unify_gen.m"
                }
#line 1301 "unify_gen.m"
                break;
#line 1301 "unify_gen.m"
              case (MR_Integer) 11:
#line 1355 "unify_gen.m"
                {
#line 1355 "unify_gen.m"
                  MR_Integer ll_backend__unify_gen__Ptag_54 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Tag_16, (MR_Integer) 1)));
#line 1355 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__Rval_55;
#line 1355 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__Fields_56;
#line 1355 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__ArgVars_57;
#line 1355 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__ArgTypes_58;

#line 1356 "unify_gen.m"
                  {
#line 1356 "unify_gen.m"
                    ll_backend__unify_gen__Rval_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1356 "unify_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Rval_55, 0) = ((MR_Box) (ll_backend__unify_gen__Var_11));
#line 1356 "unify_gen.m"
                  }
#line 1357 "unify_gen.m"
                  {
#line 1357 "unify_gen.m"
                    ll_backend__unify_gen__make_fields_and_argvars_7_p_0(ll_backend__unify_gen__Args_13, ll_backend__unify_gen__ArgWidths_15, ll_backend__unify_gen__Rval_55, (MR_Integer) -1, ll_backend__unify_gen__Ptag_54, &ll_backend__unify_gen__Fields_56, &ll_backend__unify_gen__ArgVars_57);
                  }
#line 1359 "unify_gen.m"
                  {
#line 1359 "unify_gen.m"
                    ll_backend__unify_gen__var_types_3_p_0(ll_backend__unify_gen__CI_18, ll_backend__unify_gen__Args_13, &ll_backend__unify_gen__ArgTypes_58);
                  }
#line 1360 "unify_gen.m"
                  {
#line 1360 "unify_gen.m"
                    ll_backend__unify_gen__generate_unify_args_8_p_0(ll_backend__unify_gen__Fields_56, ll_backend__unify_gen__ArgVars_57, ll_backend__unify_gen__Modes_14, ll_backend__unify_gen__ArgTypes_58, ll_backend__unify_gen__Code_17, ll_backend__unify_gen__CI_18, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_64, ll_backend__unify_gen__STATE_VARIABLE_CLD_65);
#line 1360 "unify_gen.m"
                    return;
                  }
#line 1355 "unify_gen.m"
                }
#line 1301 "unify_gen.m"
                break;
#line 1301 "unify_gen.m"
              case (MR_Integer) 12:
#line 1362 "unify_gen.m"
                {
#line 1362 "unify_gen.m"
                  MR_Integer ll_backend__unify_gen__Ptag_110 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Tag_16, (MR_Integer) 1)));
#line 1371 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__Arg_106;
#line 1371 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__Mode_107;
#line 1364 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_69_69;
#line 1364 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_70_70;
#line 1364 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_71_71;
#line 1366 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_59_59;

#line 1364 "unify_gen.m"
                  ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__Args_13)) == (MR_mktag((MR_Integer) 1)));
#line 1364 "unify_gen.m"
                  if (ll_backend__unify_gen__succeeded)
#line 1364 "unify_gen.m"
                    {
#line 1364 "unify_gen.m"
                      ll_backend__unify_gen__Arg_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Args_13, (MR_Integer) 0)));
#line 1364 "unify_gen.m"
                      ll_backend__unify_gen__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Args_13, (MR_Integer) 1)));
#line 1364 "unify_gen.m"
                      ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__V_69_69 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1364 "unify_gen.m"
                      if (ll_backend__unify_gen__succeeded)
#line 1364 "unify_gen.m"
                        {
#line 1365 "unify_gen.m"
                          ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__Modes_14)) == (MR_mktag((MR_Integer) 1)));
#line 1365 "unify_gen.m"
                          if (ll_backend__unify_gen__succeeded)
#line 1365 "unify_gen.m"
                            {
#line 1365 "unify_gen.m"
                              ll_backend__unify_gen__Mode_107 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Modes_14, (MR_Integer) 0)));
#line 1365 "unify_gen.m"
                              ll_backend__unify_gen__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Modes_14, (MR_Integer) 1)));
#line 1365 "unify_gen.m"
                              ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__V_70_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1364 "unify_gen.m"
                              if (ll_backend__unify_gen__succeeded)
#line 1364 "unify_gen.m"
                                {
#line 1366 "unify_gen.m"
                                  ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__ArgWidths_15)) == (MR_mktag((MR_Integer) 1)));
#line 1366 "unify_gen.m"
                                  if (ll_backend__unify_gen__succeeded)
#line 1366 "unify_gen.m"
                                    {
#line 1366 "unify_gen.m"
                                      ll_backend__unify_gen__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ArgWidths_15, (MR_Integer) 0)));
#line 1366 "unify_gen.m"
                                      ll_backend__unify_gen__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ArgWidths_15, (MR_Integer) 1)));
#line 1366 "unify_gen.m"
                                      ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__V_71_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1366 "unify_gen.m"
                                    }
#line 1364 "unify_gen.m"
                                }
#line 1365 "unify_gen.m"
                            }
#line 1364 "unify_gen.m"
                        }
#line 1364 "unify_gen.m"
                    }
#line 1371 "unify_gen.m"
                  if (ll_backend__unify_gen__succeeded)
#line 1368 "unify_gen.m"
                    {
#line 1368 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__Type_60;

#line 1368 "unify_gen.m"
                      {
#line 1368 "unify_gen.m"
                        ll_backend__unify_gen__Type_60 = ll_backend__code_info__variable_type_2_f_0(ll_backend__unify_gen__CI_18, ll_backend__unify_gen__Arg_106);
                      }
#line 1369 "unify_gen.m"
                      {
#line 1369 "unify_gen.m"
                        ll_backend__unify_gen__generate_direct_arg_deconstruct_9_p_0(ll_backend__unify_gen__Var_11, ll_backend__unify_gen__Arg_106, ll_backend__unify_gen__Ptag_110, ll_backend__unify_gen__Mode_107, ll_backend__unify_gen__Type_60, ll_backend__unify_gen__Code_17, ll_backend__unify_gen__CI_18, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_64, ll_backend__unify_gen__STATE_VARIABLE_CLD_65);
#line 1369 "unify_gen.m"
                        return;
                      }
#line 1368 "unify_gen.m"
                    }
#line 1371 "unify_gen.m"
                  else
#line 1372 "unify_gen.m"
                    {
#line 1372 "unify_gen.m"
                      {
#line 1372 "unify_gen.m"
                        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_det_deconstruction_2\'/10", (MR_String) "direct_arg_tag: arity != 1");
#line 1372 "unify_gen.m"
                        return;
                      }
#line 1372 "unify_gen.m"
                    }
#line 1362 "unify_gen.m"
                }
#line 1301 "unify_gen.m"
                break;
#line 1301 "unify_gen.m"
              case (MR_Integer) 13:
#line 1375 "unify_gen.m"
                {
#line 1375 "unify_gen.m"
                  MR_Integer ll_backend__unify_gen__Ptag_111 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Tag_16, (MR_Integer) 1)));
#line 1375 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__Rval_112;
#line 1375 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__Fields_113;
#line 1375 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__ArgVars_114;
#line 1375 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__ArgTypes_115;
#line 1375 "unify_gen.m"
                  MR_Integer ll_backend__unify_gen___Sectag1_61 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Tag_16, (MR_Integer) 2)));

#line 1376 "unify_gen.m"
                  {
#line 1376 "unify_gen.m"
                    ll_backend__unify_gen__Rval_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1376 "unify_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Rval_112, 0) = ((MR_Box) (ll_backend__unify_gen__Var_11));
#line 1376 "unify_gen.m"
                  }
#line 1377 "unify_gen.m"
                  {
#line 1377 "unify_gen.m"
                    ll_backend__unify_gen__make_fields_and_argvars_7_p_0(ll_backend__unify_gen__Args_13, ll_backend__unify_gen__ArgWidths_15, ll_backend__unify_gen__Rval_112, (MR_Integer) 0, ll_backend__unify_gen__Ptag_111, &ll_backend__unify_gen__Fields_113, &ll_backend__unify_gen__ArgVars_114);
                  }
#line 1379 "unify_gen.m"
                  {
#line 1379 "unify_gen.m"
                    ll_backend__unify_gen__var_types_3_p_0(ll_backend__unify_gen__CI_18, ll_backend__unify_gen__Args_13, &ll_backend__unify_gen__ArgTypes_115);
                  }
#line 1380 "unify_gen.m"
                  {
#line 1380 "unify_gen.m"
                    ll_backend__unify_gen__generate_unify_args_8_p_0(ll_backend__unify_gen__Fields_113, ll_backend__unify_gen__ArgVars_114, ll_backend__unify_gen__Modes_14, ll_backend__unify_gen__ArgTypes_115, ll_backend__unify_gen__Code_17, ll_backend__unify_gen__CI_18, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_64, ll_backend__unify_gen__STATE_VARIABLE_CLD_65);
#line 1380 "unify_gen.m"
                    return;
                  }
#line 1375 "unify_gen.m"
                }
#line 1301 "unify_gen.m"
                break;
#line 1301 "unify_gen.m"
              case (MR_Integer) 16:
#line 1385 "unify_gen.m"
                {
#line 1385 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__ThisTag_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Tag_16, (MR_Integer) 2)));
#line 1385 "unify_gen.m"
                  MR_Word ll_backend__unify_gen___RAs_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Tag_16, (MR_Integer) 1)));

#line 1386 "unify_gen.m"
                  /* direct tailcall eliminated */
#line 1386 "unify_gen.m"
                  {
#line 1386 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__Tag__tmp_copy_16 = ll_backend__unify_gen__ThisTag_63;

#line 1386 "unify_gen.m"
                    ll_backend__unify_gen__Tag_16 = ll_backend__unify_gen__Tag__tmp_copy_16;
#line 1386 "unify_gen.m"
                  }
#line 1386 "unify_gen.m"
                  continue;
#line 1385 "unify_gen.m"
                }
#line 1301 "unify_gen.m"
                break;
#line 1301 "unify_gen.m"
            }
#line 1301 "unify_gen.m"
            break;
#line 1301 "unify_gen.m"
        }
#line 1301 "unify_gen.m"
      }
#line 1301 "unify_gen.m"
      break;
#line 1301 "unify_gen.m"
    }
#line 1281 "unify_gen.m"
}

#line 719 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_11_p_0(
#line 719 "unify_gen.m"
  MR_Word ll_backend__unify_gen__PredId_12,
#line 719 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__ProcId_13,
#line 719 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Var_15,
#line 719 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Args_16,
#line 719 "unify_gen.m"
  MR_Word ll_backend__unify_gen__GoalInfo_17,
#line 719 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_18,
#line 719 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_99,
#line 719 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_100,
#line 719 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_101,
#line 719 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_102)
#line 719 "unify_gen.m"
{
#line 724 "unify_gen.m"
  {
#line 724 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 724 "unify_gen.m"
    MR_Word ll_backend__unify_gen__ModuleInfo_21;
#line 724 "unify_gen.m"
    MR_Word ll_backend__unify_gen__Preds_22;
#line 724 "unify_gen.m"
    MR_Word ll_backend__unify_gen__PredInfo_23;
#line 724 "unify_gen.m"
    MR_Word ll_backend__unify_gen__Procs_24;
#line 724 "unify_gen.m"
    MR_Word ll_backend__unify_gen__ProcInfo_25;
#line 724 "unify_gen.m"
    MR_Word ll_backend__unify_gen__ProcInfoGoal_26;
#line 724 "unify_gen.m"
    MR_Word ll_backend__unify_gen__CodeModel_27;
#line 724 "unify_gen.m"
    MR_Word ll_backend__unify_gen__ProcHeadVars_28;
#line 727 "unify_gen.m"
    MR_Box ll_backend__unify_gen__conv0_PredInfo_23;
#line 729 "unify_gen.m"
    MR_Box ll_backend__unify_gen__conv1_ProcInfo_25;
#line 867 "unify_gen.m"
    MR_Word ll_backend__unify_gen__CallPred_29;
#line 867 "unify_gen.m"
    MR_Word ll_backend__unify_gen__CallArgs_30;
#line 759 "unify_gen.m"
    MR_Word ll_backend__unify_gen__TypeInfo_288_288;
#line 759 "unify_gen.m"
    MR_Word ll_backend__unify_gen__TypeInfo_289_289;
#line 759 "unify_gen.m"
    MR_Word ll_backend__unify_gen__ProcPred_31;
#line 759 "unify_gen.m"
    MR_Word ll_backend__unify_gen__ProcArgs_32;
#line 759 "unify_gen.m"
    MR_Word ll_backend__unify_gen__CallDeterminism_38;
#line 759 "unify_gen.m"
    MR_Word ll_backend__unify_gen__CallCodeModel_40;
#line 759 "unify_gen.m"
    MR_Word ll_backend__unify_gen__Globals_41;
#line 759 "unify_gen.m"
    MR_Word ll_backend__unify_gen__Deep_42;
#line 759 "unify_gen.m"
    MR_Word ll_backend__unify_gen__UseFloatRegs_43;
#line 759 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_103_103;
#line 759 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_104_104;
#line 759 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_105_105;
#line 759 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_106_106;
#line 759 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_286_286;
#line 759 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_287_287;
#line 762 "unify_gen.m"
    MR_Word ll_backend__unify_gen___GoalInfo_39;
#line 762 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_36_36;
#line 762 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_37_37;
#line 762 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_33_33;
#line 762 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_34_34;
#line 762 "unify_gen.m"
    MR_Integer ll_backend__unify_gen__V_35_35;

#line 725 "unify_gen.m"
    {
#line 725 "unify_gen.m"
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_99, &ll_backend__unify_gen__ModuleInfo_21);
    }
#line 726 "unify_gen.m"
    {
#line 726 "unify_gen.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(ll_backend__unify_gen__ModuleInfo_21, &ll_backend__unify_gen__Preds_22);
    }
#line 727 "unify_gen.m"
    {
#line 727 "unify_gen.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, ll_backend__unify_gen__Preds_22, ((MR_Box) (ll_backend__unify_gen__PredId_12)), &ll_backend__unify_gen__conv0_PredInfo_23);
    }
#line 727 "unify_gen.m"
    ll_backend__unify_gen__PredInfo_23 = ((MR_Word) ll_backend__unify_gen__conv0_PredInfo_23);
#line 728 "unify_gen.m"
    {
#line 728 "unify_gen.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(ll_backend__unify_gen__PredInfo_23, &ll_backend__unify_gen__Procs_24);
    }
#line 729 "unify_gen.m"
    {
#line 729 "unify_gen.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, ll_backend__unify_gen__Procs_24, ll_backend__unify_gen__ProcId_13, &ll_backend__unify_gen__conv1_ProcInfo_25);
    }
#line 729 "unify_gen.m"
    ll_backend__unify_gen__ProcInfo_25 = ((MR_Word) ll_backend__unify_gen__conv1_ProcInfo_25);
#line 755 "unify_gen.m"
    {
#line 755 "unify_gen.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(ll_backend__unify_gen__ProcInfo_25, &ll_backend__unify_gen__ProcInfoGoal_26);
    }
#line 756 "unify_gen.m"
    {
#line 756 "unify_gen.m"
      ll_backend__unify_gen__CodeModel_27 = hlds__code_model__proc_info_interface_code_model_1_f_0(ll_backend__unify_gen__ProcInfo_25);
    }
#line 757 "unify_gen.m"
    {
#line 757 "unify_gen.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ll_backend__unify_gen__ProcInfo_25, &ll_backend__unify_gen__ProcHeadVars_28);
    }
#line 760 "unify_gen.m"
    ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__Args_16)) == (MR_mktag((MR_Integer) 1)));
#line 760 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 760 "unify_gen.m"
      {
#line 760 "unify_gen.m"
        ll_backend__unify_gen__CallPred_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Args_16, (MR_Integer) 0)));
#line 760 "unify_gen.m"
        ll_backend__unify_gen__CallArgs_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Args_16, (MR_Integer) 1)));
#line 761 "unify_gen.m"
        ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__ProcHeadVars_28)) == (MR_mktag((MR_Integer) 1)));
#line 761 "unify_gen.m"
        if (ll_backend__unify_gen__succeeded)
#line 761 "unify_gen.m"
          {
#line 761 "unify_gen.m"
            ll_backend__unify_gen__ProcPred_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ProcHeadVars_28, (MR_Integer) 0)));
#line 761 "unify_gen.m"
            ll_backend__unify_gen__ProcArgs_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ProcHeadVars_28, (MR_Integer) 1)));
#line 762 "unify_gen.m"
            ll_backend__unify_gen__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ProcInfoGoal_26, (MR_Integer) 0)));
#line 762 "unify_gen.m"
            ll_backend__unify_gen___GoalInfo_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ProcInfoGoal_26, (MR_Integer) 1)));
#line 762 "unify_gen.m"
            ll_backend__unify_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__unify_gen__V_103_103)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_103_103, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 762 "unify_gen.m"
            if (ll_backend__unify_gen__succeeded)
#line 762 "unify_gen.m"
              {
#line 762 "unify_gen.m"
                ll_backend__unify_gen__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_103_103, (MR_Integer) 1)));
#line 762 "unify_gen.m"
                ll_backend__unify_gen__V_286_286 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_103_103, (MR_Integer) 2)));
#line 762 "unify_gen.m"
                ll_backend__unify_gen__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_103_103, (MR_Integer) 3)));
#line 762 "unify_gen.m"
                ll_backend__unify_gen__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_103_103, (MR_Integer) 4)));
#line 762 "unify_gen.m"
                ll_backend__unify_gen__CallDeterminism_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_103_103, (MR_Integer) 5)));
#line 4675 "ll_backend.unify_gen.c"
                ll_backend__unify_gen__TypeInfo_288_288 = (MR_Word) &ll_backend__unify_gen_scalar_common_1[1];
#line 762 "unify_gen.m"
                {
#line 762 "unify_gen.m"
                  ll_backend__unify_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__unify_gen__TypeInfo_288_288, ((MR_Box) (ll_backend__unify_gen__ProcArgs_32)), ((MR_Box) (ll_backend__unify_gen__V_286_286)));
                }
#line 759 "unify_gen.m"
                if (ll_backend__unify_gen__succeeded)
#line 759 "unify_gen.m"
                  {
#line 762 "unify_gen.m"
                    ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__V_104_104)) == (MR_mktag((MR_Integer) 0)));
#line 762 "unify_gen.m"
                    if (ll_backend__unify_gen__succeeded)
#line 762 "unify_gen.m"
                      {
#line 762 "unify_gen.m"
                        ll_backend__unify_gen__V_287_287 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_104_104, (MR_Integer) 0)));
#line 762 "unify_gen.m"
                        ll_backend__unify_gen__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_104_104, (MR_Integer) 1)));
#line 762 "unify_gen.m"
                        ll_backend__unify_gen__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_104_104, (MR_Integer) 2)));
#line 762 "unify_gen.m"
                        ll_backend__unify_gen__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_104_104, (MR_Integer) 3)));
#line 4700 "ll_backend.unify_gen.c"
                        ll_backend__unify_gen__TypeInfo_289_289 = (MR_Word) &ll_backend__unify_gen_scalar_common_1[0];
#line 762 "unify_gen.m"
                        {
#line 762 "unify_gen.m"
                          ll_backend__unify_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__unify_gen__TypeInfo_289_289, ((MR_Box) (ll_backend__unify_gen__ProcPred_31)), ((MR_Box) (ll_backend__unify_gen__V_287_287)));
                        }
#line 759 "unify_gen.m"
                        if (ll_backend__unify_gen__succeeded)
#line 759 "unify_gen.m"
                          {
#line 764 "unify_gen.m"
                            {
#line 764 "unify_gen.m"
                              hlds__code_model__determinism_to_code_model_2_p_0(ll_backend__unify_gen__CallDeterminism_38, &ll_backend__unify_gen__CallCodeModel_40);
                            }
#line 770 "unify_gen.m"
                            ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__CodeModel_27 == ll_backend__unify_gen__CallCodeModel_40);
#line 771 "unify_gen.m"
                            if (!(ll_backend__unify_gen__succeeded))
#line 772 "unify_gen.m"
                              {
#line 772 "unify_gen.m"
                                ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__CodeModel_27 == (MR_Integer) 2);
#line 772 "unify_gen.m"
                                if (ll_backend__unify_gen__succeeded)
#line 773 "unify_gen.m"
                                  ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__CallCodeModel_40 == (MR_Integer) 0);
#line 772 "unify_gen.m"
                              }
#line 759 "unify_gen.m"
                            if (ll_backend__unify_gen__succeeded)
#line 759 "unify_gen.m"
                              {
#line 777 "unify_gen.m"
                                {
#line 777 "unify_gen.m"
                                  hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__unify_gen__ModuleInfo_21, &ll_backend__unify_gen__Globals_41);
                                }
#line 778 "unify_gen.m"
                                ll_backend__unify_gen__V_105_105 = (MR_Integer) 196;
#line 778 "unify_gen.m"
                                {
#line 778 "unify_gen.m"
                                  libs__globals__lookup_bool_option_3_p_0(ll_backend__unify_gen__Globals_41, ll_backend__unify_gen__V_105_105, &ll_backend__unify_gen__Deep_42);
                                }
#line 779 "unify_gen.m"
                                ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__Deep_42 == (MR_Integer) 0);
#line 759 "unify_gen.m"
                                if (ll_backend__unify_gen__succeeded)
#line 759 "unify_gen.m"
                                  {
#line 783 "unify_gen.m"
                                    ll_backend__unify_gen__V_106_106 = (MR_Integer) 254;
#line 783 "unify_gen.m"
                                    {
#line 783 "unify_gen.m"
                                      libs__globals__lookup_bool_option_3_p_0(ll_backend__unify_gen__Globals_41, ll_backend__unify_gen__V_106_106, &ll_backend__unify_gen__UseFloatRegs_43);
                                    }
#line 784 "unify_gen.m"
                                    ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__UseFloatRegs_43 == (MR_Integer) 0);
#line 759 "unify_gen.m"
                                  }
#line 759 "unify_gen.m"
                              }
#line 759 "unify_gen.m"
                          }
#line 762 "unify_gen.m"
                      }
#line 759 "unify_gen.m"
                  }
#line 762 "unify_gen.m"
              }
#line 761 "unify_gen.m"
          }
#line 760 "unify_gen.m"
      }
#line 867 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 791 "unify_gen.m"
      if ((ll_backend__unify_gen__CallArgs_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 787 "unify_gen.m"
        {
#line 789 "unify_gen.m"
          {
#line 789 "unify_gen.m"
            ll_backend__code_loc_dep__assign_var_to_var_4_p_0(ll_backend__unify_gen__Var_15, ll_backend__unify_gen__CallPred_29, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_101, ll_backend__unify_gen__STATE_VARIABLE_CLD_102);
          }
#line 790 "unify_gen.m"
          {
#line 790 "unify_gen.m"
            *ll_backend__unify_gen__Code_18 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
          }
#line 787 "unify_gen.m"
          *ll_backend__unify_gen__STATE_VARIABLE_CI_100 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_99;
#line 787 "unify_gen.m"
        }
#line 791 "unify_gen.m"
      else
#line 792 "unify_gen.m"
        {
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__TypeCtorInfo_284_284;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__LoopStart_46;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__LoopTest_47;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__LoopCounter_48;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__NumOldArgs_49;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__NewClosure_50;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__Zero_51;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__One_52;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__Two_53;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__Three_54;
#line 792 "unify_gen.m"
          MR_Integer ll_backend__unify_gen__NumNewArgs_55;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__NumNewArgs_Rval_56;
#line 792 "unify_gen.m"
          MR_Integer ll_backend__unify_gen__NumNewArgsPlusThree_57;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__NumNewArgsPlusThree_Rval_58;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__OldClosureCode_59;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__OldClosure_60;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__Context_61;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__MaybeAllocId_62;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__NewClosureCode_64;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__ExtraArgsCode_65;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__AssignCode_66;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_107_107;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_108_108;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_110_110;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_112_112;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_114_114;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_123_123;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_125_125;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_126_126;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_129_129;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_134_134;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_135_135;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_136_136;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_137_137;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_138_138;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_139_139;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_142_142;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_143_143;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_144_144;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_147_147;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_149_149;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_153_153;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_154_154;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_155_155;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_156_156;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_159_159;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_160_160;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_161_161;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_165_165;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_166_166;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_167_167;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_168_168;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_172_172;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_173_173;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_177_177;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_178_178;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_179_179;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_180_180;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_184_184;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_188_188;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_189_189;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_190_190;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_191_191;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_195_195;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_196_196;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_197_197;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_199_199;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_200_200;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_201_201;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_202_202;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_204_204;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_205_205;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_206_206;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_208_208;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_209_209;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_210_210;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_211_211;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_215_215;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_216_216;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_217_217;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_222_222;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_223_223;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_224_224;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_225_225;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_229_229;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_230_230;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_231_231;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_233_233;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_234_234;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_235_235;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_236_236;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_240_240;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_243_243;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_244_244;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_245_245;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_246_246;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_248_248;
#line 792 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_249_249;

#line 793 "unify_gen.m"
          {
#line 793 "unify_gen.m"
            ll_backend__code_info__get_next_label_3_p_0(&ll_backend__unify_gen__LoopStart_46, ll_backend__unify_gen__STATE_VARIABLE_CI_0_99, &ll_backend__unify_gen__STATE_VARIABLE_CI_107_107);
          }
#line 794 "unify_gen.m"
          {
#line 794 "unify_gen.m"
            ll_backend__code_info__get_next_label_3_p_0(&ll_backend__unify_gen__LoopTest_47, ll_backend__unify_gen__STATE_VARIABLE_CI_107_107, &ll_backend__unify_gen__STATE_VARIABLE_CI_108_108);
          }
#line 795 "unify_gen.m"
          {
#line 795 "unify_gen.m"
            ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__unify_gen__LoopCounter_48, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_101, &ll_backend__unify_gen__STATE_VARIABLE_CLD_110_110);
          }
#line 796 "unify_gen.m"
          {
#line 796 "unify_gen.m"
            ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__unify_gen__NumOldArgs_49, ll_backend__unify_gen__STATE_VARIABLE_CLD_110_110, &ll_backend__unify_gen__STATE_VARIABLE_CLD_112_112);
          }
#line 797 "unify_gen.m"
          {
#line 797 "unify_gen.m"
            ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__unify_gen__NewClosure_50, ll_backend__unify_gen__STATE_VARIABLE_CLD_112_112, &ll_backend__unify_gen__STATE_VARIABLE_CLD_114_114);
          }
#line 798 "unify_gen.m"
          ll_backend__unify_gen__Zero_51 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[8]);
#line 799 "unify_gen.m"
          ll_backend__unify_gen__One_52 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[9]);
#line 800 "unify_gen.m"
          ll_backend__unify_gen__Two_53 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[10]);
#line 801 "unify_gen.m"
          ll_backend__unify_gen__Three_54 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[11]);
#line 802 "unify_gen.m"
          {
#line 802 "unify_gen.m"
            mercury__list__length_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], ll_backend__unify_gen__CallArgs_30, &ll_backend__unify_gen__NumNewArgs_55);
          }
#line 803 "unify_gen.m"
          {
#line 803 "unify_gen.m"
            ll_backend__unify_gen__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 803 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_123_123, 0) = ((MR_Box) (ll_backend__unify_gen__NumNewArgs_55));
#line 803 "unify_gen.m"
          }
#line 803 "unify_gen.m"
          {
#line 803 "unify_gen.m"
            ll_backend__unify_gen__NumNewArgs_Rval_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 803 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__NumNewArgs_Rval_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 803 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__NumNewArgs_Rval_56, 1) = ((MR_Box) (ll_backend__unify_gen__V_123_123));
#line 803 "unify_gen.m"
          }
#line 804 "unify_gen.m"
          ll_backend__unify_gen__NumNewArgsPlusThree_57 = (ll_backend__unify_gen__NumNewArgs_55 + (MR_Integer) 3);
#line 805 "unify_gen.m"
          {
#line 805 "unify_gen.m"
            ll_backend__unify_gen__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 805 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_125_125, 0) = ((MR_Box) (ll_backend__unify_gen__NumNewArgsPlusThree_57));
#line 805 "unify_gen.m"
          }
#line 805 "unify_gen.m"
          {
#line 805 "unify_gen.m"
            ll_backend__unify_gen__NumNewArgsPlusThree_Rval_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 805 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__NumNewArgsPlusThree_Rval_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 805 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__NumNewArgsPlusThree_Rval_58, 1) = ((MR_Box) (ll_backend__unify_gen__V_125_125));
#line 805 "unify_gen.m"
          }
#line 806 "unify_gen.m"
          {
#line 806 "unify_gen.m"
            ll_backend__code_loc_dep__produce_variable_6_p_0(ll_backend__unify_gen__CallPred_29, &ll_backend__unify_gen__OldClosureCode_59, &ll_backend__unify_gen__OldClosure_60, ll_backend__unify_gen__STATE_VARIABLE_CI_108_108, ll_backend__unify_gen__STATE_VARIABLE_CLD_114_114, &ll_backend__unify_gen__STATE_VARIABLE_CLD_126_126);
          }
#line 807 "unify_gen.m"
          {
#line 807 "unify_gen.m"
            ll_backend__unify_gen__Context_61 = hlds__hlds_goal__goal_info_get_context_1_f_0(ll_backend__unify_gen__GoalInfo_17);
          }
#line 808 "unify_gen.m"
          {
#line 808 "unify_gen.m"
            ll_backend__unify_gen__maybe_add_alloc_site_info_6_p_0(ll_backend__unify_gen__Context_61, (MR_String) "closure", ll_backend__unify_gen__NumNewArgsPlusThree_57, &ll_backend__unify_gen__MaybeAllocId_62, ll_backend__unify_gen__STATE_VARIABLE_CI_108_108, ll_backend__unify_gen__STATE_VARIABLE_CI_100);
          }
#line 5089 "ll_backend.unify_gen.c"
          ll_backend__unify_gen__TypeCtorInfo_284_284 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 815 "unify_gen.m"
          ll_backend__unify_gen__V_139_139 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__unify_gen_scalar_common_6[0]);
#line 815 "unify_gen.m"
          {
#line 815 "unify_gen.m"
            ll_backend__unify_gen__V_138_138 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 815 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_138_138, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 815 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_138_138, 1) = ((MR_Box) (ll_backend__unify_gen__V_139_139));
#line 815 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_138_138, 2) = ((MR_Box) (ll_backend__unify_gen__OldClosure_60));
#line 815 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_138_138, 3) = ((MR_Box) (ll_backend__unify_gen__Two_53));
#line 815 "unify_gen.m"
          }
#line 815 "unify_gen.m"
          {
#line 815 "unify_gen.m"
            ll_backend__unify_gen__V_137_137 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 815 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_137_137, 0) = ((MR_Box) (ll_backend__unify_gen__V_138_138));
#line 815 "unify_gen.m"
          }
#line 815 "unify_gen.m"
          {
#line 815 "unify_gen.m"
            ll_backend__unify_gen__V_136_136 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 815 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_136_136, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 815 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_136_136, 1) = ((MR_Box) (ll_backend__unify_gen__NumOldArgs_49));
#line 815 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_136_136, 2) = ((MR_Box) (ll_backend__unify_gen__V_137_137));
#line 815 "unify_gen.m"
          }
#line 814 "unify_gen.m"
          {
#line 814 "unify_gen.m"
            ll_backend__unify_gen__V_135_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 814 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_135_135, 0) = ((MR_Box) (ll_backend__unify_gen__V_136_136));
#line 814 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_135_135, 1) = ((MR_Box) ((MR_String) "get number of arguments"));
#line 814 "unify_gen.m"
          }
#line 818 "unify_gen.m"
          {
#line 818 "unify_gen.m"
            ll_backend__unify_gen__V_149_149 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 818 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_149_149, 0) = ((MR_Box) (ll_backend__unify_gen__NumOldArgs_49));
#line 818 "unify_gen.m"
          }
#line 818 "unify_gen.m"
          {
#line 818 "unify_gen.m"
            ll_backend__unify_gen__V_147_147 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 818 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_147_147, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 818 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_147_147, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 818 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_147_147, 2) = ((MR_Box) (ll_backend__unify_gen__V_149_149));
#line 818 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_147_147, 3) = ((MR_Box) (ll_backend__unify_gen__NumNewArgsPlusThree_Rval_58));
#line 818 "unify_gen.m"
          }
#line 817 "unify_gen.m"
          {
#line 817 "unify_gen.m"
            ll_backend__unify_gen__V_144_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL));
#line 817 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_144_144, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 817 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_144_144, 1) = ((MR_Box) (ll_backend__unify_gen__NewClosure_50));
#line 817 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_144_144, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 817 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_144_144, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 817 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_144_144, 4) = ((MR_Box) (ll_backend__unify_gen__V_147_147));
#line 817 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_144_144, 5) = ((MR_Box) (ll_backend__unify_gen__MaybeAllocId_62));
#line 817 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_144_144, 6) = ((MR_Box) ((MR_Integer) 1));
#line 817 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_144_144, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 817 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_144_144, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 817 "unify_gen.m"
          }
#line 817 "unify_gen.m"
          {
#line 817 "unify_gen.m"
            ll_backend__unify_gen__V_143_143 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 817 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_143_143, 0) = ((MR_Box) (ll_backend__unify_gen__V_144_144));
#line 817 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_143_143, 1) = ((MR_Box) ((MR_String) "allocate new closure"));
#line 817 "unify_gen.m"
          }
#line 821 "unify_gen.m"
          {
#line 821 "unify_gen.m"
            ll_backend__unify_gen__V_159_159 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 821 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_159_159, 0) = ((MR_Box) (ll_backend__unify_gen__NewClosure_50));
#line 821 "unify_gen.m"
          }
#line 821 "unify_gen.m"
          {
#line 821 "unify_gen.m"
            ll_backend__unify_gen__V_156_156 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 821 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_156_156, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 821 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_156_156, 1) = ((MR_Box) (ll_backend__unify_gen__V_139_139));
#line 821 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_156_156, 2) = ((MR_Box) (ll_backend__unify_gen__V_159_159));
#line 821 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_156_156, 3) = ((MR_Box) (ll_backend__unify_gen__Zero_51));
#line 821 "unify_gen.m"
          }
#line 822 "unify_gen.m"
          {
#line 822 "unify_gen.m"
            ll_backend__unify_gen__V_161_161 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 822 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_161_161, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 822 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_161_161, 1) = ((MR_Box) (ll_backend__unify_gen__V_139_139));
#line 822 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_161_161, 2) = ((MR_Box) (ll_backend__unify_gen__OldClosure_60));
#line 822 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_161_161, 3) = ((MR_Box) (ll_backend__unify_gen__Zero_51));
#line 822 "unify_gen.m"
          }
#line 822 "unify_gen.m"
          {
#line 822 "unify_gen.m"
            ll_backend__unify_gen__V_160_160 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 822 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_160_160, 0) = ((MR_Box) (ll_backend__unify_gen__V_161_161));
#line 822 "unify_gen.m"
          }
#line 821 "unify_gen.m"
          {
#line 821 "unify_gen.m"
            ll_backend__unify_gen__V_155_155 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 821 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_155_155, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 821 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_155_155, 1) = ((MR_Box) (ll_backend__unify_gen__V_156_156));
#line 821 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_155_155, 2) = ((MR_Box) (ll_backend__unify_gen__V_160_160));
#line 821 "unify_gen.m"
          }
#line 821 "unify_gen.m"
          {
#line 821 "unify_gen.m"
            ll_backend__unify_gen__V_154_154 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 821 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_154_154, 0) = ((MR_Box) (ll_backend__unify_gen__V_155_155));
#line 821 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_154_154, 1) = ((MR_Box) ((MR_String) "set closure layout structure"));
#line 821 "unify_gen.m"
          }
#line 824 "unify_gen.m"
          {
#line 824 "unify_gen.m"
            ll_backend__unify_gen__V_168_168 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 824 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_168_168, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 824 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_168_168, 1) = ((MR_Box) (ll_backend__unify_gen__V_139_139));
#line 824 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_168_168, 2) = ((MR_Box) (ll_backend__unify_gen__V_159_159));
#line 824 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_168_168, 3) = ((MR_Box) (ll_backend__unify_gen__One_52));
#line 824 "unify_gen.m"
          }
#line 825 "unify_gen.m"
          {
#line 825 "unify_gen.m"
            ll_backend__unify_gen__V_173_173 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 825 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_173_173, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 825 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_173_173, 1) = ((MR_Box) (ll_backend__unify_gen__V_139_139));
#line 825 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_173_173, 2) = ((MR_Box) (ll_backend__unify_gen__OldClosure_60));
#line 825 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_173_173, 3) = ((MR_Box) (ll_backend__unify_gen__One_52));
#line 825 "unify_gen.m"
          }
#line 825 "unify_gen.m"
          {
#line 825 "unify_gen.m"
            ll_backend__unify_gen__V_172_172 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 825 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_172_172, 0) = ((MR_Box) (ll_backend__unify_gen__V_173_173));
#line 825 "unify_gen.m"
          }
#line 824 "unify_gen.m"
          {
#line 824 "unify_gen.m"
            ll_backend__unify_gen__V_167_167 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 824 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_167_167, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 824 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_167_167, 1) = ((MR_Box) (ll_backend__unify_gen__V_168_168));
#line 824 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_167_167, 2) = ((MR_Box) (ll_backend__unify_gen__V_172_172));
#line 824 "unify_gen.m"
          }
#line 824 "unify_gen.m"
          {
#line 824 "unify_gen.m"
            ll_backend__unify_gen__V_166_166 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 824 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_166_166, 0) = ((MR_Box) (ll_backend__unify_gen__V_167_167));
#line 824 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_166_166, 1) = ((MR_Box) ((MR_String) "set closure code pointer"));
#line 824 "unify_gen.m"
          }
#line 827 "unify_gen.m"
          {
#line 827 "unify_gen.m"
            ll_backend__unify_gen__V_180_180 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 827 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_180_180, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 827 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_180_180, 1) = ((MR_Box) (ll_backend__unify_gen__V_139_139));
#line 827 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_180_180, 2) = ((MR_Box) (ll_backend__unify_gen__V_159_159));
#line 827 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_180_180, 3) = ((MR_Box) (ll_backend__unify_gen__Two_53));
#line 827 "unify_gen.m"
          }
#line 828 "unify_gen.m"
          {
#line 828 "unify_gen.m"
            ll_backend__unify_gen__V_184_184 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 828 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_184_184, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 828 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_184_184, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 828 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_184_184, 2) = ((MR_Box) (ll_backend__unify_gen__V_149_149));
#line 828 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_184_184, 3) = ((MR_Box) (ll_backend__unify_gen__NumNewArgs_Rval_56));
#line 828 "unify_gen.m"
          }
#line 827 "unify_gen.m"
          {
#line 827 "unify_gen.m"
            ll_backend__unify_gen__V_179_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 827 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_179_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 827 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_179_179, 1) = ((MR_Box) (ll_backend__unify_gen__V_180_180));
#line 827 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_179_179, 2) = ((MR_Box) (ll_backend__unify_gen__V_184_184));
#line 827 "unify_gen.m"
          }
#line 827 "unify_gen.m"
          {
#line 827 "unify_gen.m"
            ll_backend__unify_gen__V_178_178 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 827 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_178_178, 0) = ((MR_Box) (ll_backend__unify_gen__V_179_179));
#line 827 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_178_178, 1) = ((MR_Box) ((MR_String) "set new number of arguments"));
#line 827 "unify_gen.m"
          }
#line 832 "unify_gen.m"
          {
#line 832 "unify_gen.m"
            ll_backend__unify_gen__V_191_191 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 832 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_191_191, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 832 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_191_191, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 832 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_191_191, 2) = ((MR_Box) (ll_backend__unify_gen__V_149_149));
#line 832 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_191_191, 3) = ((MR_Box) (ll_backend__unify_gen__Three_54));
#line 832 "unify_gen.m"
          }
#line 831 "unify_gen.m"
          {
#line 831 "unify_gen.m"
            ll_backend__unify_gen__V_190_190 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 831 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_190_190, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 831 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_190_190, 1) = ((MR_Box) (ll_backend__unify_gen__NumOldArgs_49));
#line 831 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_190_190, 2) = ((MR_Box) (ll_backend__unify_gen__V_191_191));
#line 831 "unify_gen.m"
          }
#line 830 "unify_gen.m"
          {
#line 830 "unify_gen.m"
            ll_backend__unify_gen__V_189_189 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 830 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_189_189, 0) = ((MR_Box) (ll_backend__unify_gen__V_190_190));
#line 830 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_189_189, 1) = ((MR_Box) ((MR_String) "set up loop limit"));
#line 830 "unify_gen.m"
          }
#line 834 "unify_gen.m"
          {
#line 834 "unify_gen.m"
            ll_backend__unify_gen__V_197_197 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 834 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_197_197, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 834 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_197_197, 1) = ((MR_Box) (ll_backend__unify_gen__LoopCounter_48));
#line 834 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_197_197, 2) = ((MR_Box) (ll_backend__unify_gen__Three_54));
#line 834 "unify_gen.m"
          }
#line 834 "unify_gen.m"
          {
#line 834 "unify_gen.m"
            ll_backend__unify_gen__V_196_196 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 834 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_196_196, 0) = ((MR_Box) (ll_backend__unify_gen__V_197_197));
#line 834 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_196_196, 1) = ((MR_Box) ((MR_String) "initialize loop counter"));
#line 834 "unify_gen.m"
          }
#line 839 "unify_gen.m"
          {
#line 839 "unify_gen.m"
            ll_backend__unify_gen__V_202_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 839 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_202_202, 0) = ((MR_Box) (ll_backend__unify_gen__LoopTest_47));
#line 839 "unify_gen.m"
          }
#line 839 "unify_gen.m"
          {
#line 839 "unify_gen.m"
            ll_backend__unify_gen__V_201_201 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 839 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_201_201, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 839 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_201_201, 1) = ((MR_Box) (ll_backend__unify_gen__V_202_202));
#line 839 "unify_gen.m"
          }
#line 839 "unify_gen.m"
          {
#line 839 "unify_gen.m"
            ll_backend__unify_gen__V_200_200 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 839 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_200_200, 0) = ((MR_Box) (ll_backend__unify_gen__V_201_201));
#line 839 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_200_200, 1) = ((MR_Box) ((MR_String) "enter the copy loop at the conceptual top"));
#line 839 "unify_gen.m"
          }
#line 841 "unify_gen.m"
          {
#line 841 "unify_gen.m"
            ll_backend__unify_gen__V_206_206 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 841 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_206_206, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 841 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_206_206, 1) = ((MR_Box) (ll_backend__unify_gen__LoopStart_46));
#line 841 "unify_gen.m"
          }
#line 841 "unify_gen.m"
          {
#line 841 "unify_gen.m"
            ll_backend__unify_gen__V_205_205 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 841 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_205_205, 0) = ((MR_Box) (ll_backend__unify_gen__V_206_206));
#line 841 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_205_205, 1) = ((MR_Box) ((MR_String) "start of loop, nofulljump"));
#line 841 "unify_gen.m"
          }
#line 844 "unify_gen.m"
          {
#line 844 "unify_gen.m"
            ll_backend__unify_gen__V_215_215 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 844 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_215_215, 0) = ((MR_Box) (ll_backend__unify_gen__LoopCounter_48));
#line 844 "unify_gen.m"
          }
#line 844 "unify_gen.m"
          {
#line 844 "unify_gen.m"
            ll_backend__unify_gen__V_211_211 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 844 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_211_211, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 844 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_211_211, 1) = ((MR_Box) (ll_backend__unify_gen__V_139_139));
#line 844 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_211_211, 2) = ((MR_Box) (ll_backend__unify_gen__V_159_159));
#line 844 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_211_211, 3) = ((MR_Box) (ll_backend__unify_gen__V_215_215));
#line 844 "unify_gen.m"
          }
#line 845 "unify_gen.m"
          {
#line 845 "unify_gen.m"
            ll_backend__unify_gen__V_217_217 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 845 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_217_217, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 845 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_217_217, 1) = ((MR_Box) (ll_backend__unify_gen__V_139_139));
#line 845 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_217_217, 2) = ((MR_Box) (ll_backend__unify_gen__OldClosure_60));
#line 845 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_217_217, 3) = ((MR_Box) (ll_backend__unify_gen__V_215_215));
#line 845 "unify_gen.m"
          }
#line 845 "unify_gen.m"
          {
#line 845 "unify_gen.m"
            ll_backend__unify_gen__V_216_216 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 845 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_216_216, 0) = ((MR_Box) (ll_backend__unify_gen__V_217_217));
#line 845 "unify_gen.m"
          }
#line 844 "unify_gen.m"
          {
#line 844 "unify_gen.m"
            ll_backend__unify_gen__V_210_210 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 844 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_210_210, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 844 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_210_210, 1) = ((MR_Box) (ll_backend__unify_gen__V_211_211));
#line 844 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_210_210, 2) = ((MR_Box) (ll_backend__unify_gen__V_216_216));
#line 844 "unify_gen.m"
          }
#line 843 "unify_gen.m"
          {
#line 843 "unify_gen.m"
            ll_backend__unify_gen__V_209_209 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 843 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_209_209, 0) = ((MR_Box) (ll_backend__unify_gen__V_210_210));
#line 843 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_209_209, 1) = ((MR_Box) ((MR_String) "copy old hidden argument"));
#line 843 "unify_gen.m"
          }
#line 849 "unify_gen.m"
          {
#line 849 "unify_gen.m"
            ll_backend__unify_gen__V_225_225 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 849 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_225_225, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 849 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_225_225, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 849 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_225_225, 2) = ((MR_Box) (ll_backend__unify_gen__V_215_215));
#line 849 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_225_225, 3) = ((MR_Box) (ll_backend__unify_gen__One_52));
#line 849 "unify_gen.m"
          }
#line 848 "unify_gen.m"
          {
#line 848 "unify_gen.m"
            ll_backend__unify_gen__V_224_224 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 848 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_224_224, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 848 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_224_224, 1) = ((MR_Box) (ll_backend__unify_gen__LoopCounter_48));
#line 848 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_224_224, 2) = ((MR_Box) (ll_backend__unify_gen__V_225_225));
#line 848 "unify_gen.m"
          }
#line 847 "unify_gen.m"
          {
#line 847 "unify_gen.m"
            ll_backend__unify_gen__V_223_223 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 847 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_223_223, 0) = ((MR_Box) (ll_backend__unify_gen__V_224_224));
#line 847 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_223_223, 1) = ((MR_Box) ((MR_String) "increment loop counter"));
#line 847 "unify_gen.m"
          }
#line 851 "unify_gen.m"
          {
#line 851 "unify_gen.m"
            ll_backend__unify_gen__V_231_231 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 851 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_231_231, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 851 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_231_231, 1) = ((MR_Box) (ll_backend__unify_gen__LoopTest_47));
#line 851 "unify_gen.m"
          }
#line 851 "unify_gen.m"
          {
#line 851 "unify_gen.m"
            ll_backend__unify_gen__V_230_230 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 851 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_230_230, 0) = ((MR_Box) (ll_backend__unify_gen__V_231_231));
#line 851 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_230_230, 1) = ((MR_Box) ((MR_String) "do we have more old arguments to copy\? nofulljump"));
#line 851 "unify_gen.m"
          }
#line 854 "unify_gen.m"
          {
#line 854 "unify_gen.m"
            ll_backend__unify_gen__V_236_236 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 854 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_236_236, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 854 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_236_236, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 23))));
#line 854 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_236_236, 2) = ((MR_Box) (ll_backend__unify_gen__V_215_215));
#line 854 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_236_236, 3) = ((MR_Box) (ll_backend__unify_gen__V_149_149));
#line 854 "unify_gen.m"
          }
#line 855 "unify_gen.m"
          {
#line 855 "unify_gen.m"
            ll_backend__unify_gen__V_240_240 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 855 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_240_240, 0) = ((MR_Box) (ll_backend__unify_gen__LoopStart_46));
#line 855 "unify_gen.m"
          }
#line 854 "unify_gen.m"
          {
#line 854 "unify_gen.m"
            ll_backend__unify_gen__V_235_235 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 854 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_235_235, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 854 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_235_235, 1) = ((MR_Box) (ll_backend__unify_gen__V_236_236));
#line 854 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_235_235, 2) = ((MR_Box) (ll_backend__unify_gen__V_240_240));
#line 854 "unify_gen.m"
          }
#line 853 "unify_gen.m"
          {
#line 853 "unify_gen.m"
            ll_backend__unify_gen__V_234_234 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 853 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_234_234, 0) = ((MR_Box) (ll_backend__unify_gen__V_235_235));
#line 853 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_234_234, 1) = ((MR_Box) ((MR_String) "repeat the loop\?"));
#line 853 "unify_gen.m"
          }
#line 857 "unify_gen.m"
          {
#line 857 "unify_gen.m"
            ll_backend__unify_gen__V_233_233 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 857 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_233_233, 0) = ((MR_Box) (ll_backend__unify_gen__V_234_234));
#line 857 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_233_233, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 857 "unify_gen.m"
          }
#line 852 "unify_gen.m"
          {
#line 852 "unify_gen.m"
            ll_backend__unify_gen__V_229_229 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 852 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_229_229, 0) = ((MR_Box) (ll_backend__unify_gen__V_230_230));
#line 852 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_229_229, 1) = ((MR_Box) (ll_backend__unify_gen__V_233_233));
#line 852 "unify_gen.m"
          }
#line 850 "unify_gen.m"
          {
#line 850 "unify_gen.m"
            ll_backend__unify_gen__V_222_222 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 850 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_222_222, 0) = ((MR_Box) (ll_backend__unify_gen__V_223_223));
#line 850 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_222_222, 1) = ((MR_Box) (ll_backend__unify_gen__V_229_229));
#line 850 "unify_gen.m"
          }
#line 846 "unify_gen.m"
          {
#line 846 "unify_gen.m"
            ll_backend__unify_gen__V_208_208 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 846 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_208_208, 0) = ((MR_Box) (ll_backend__unify_gen__V_209_209));
#line 846 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_208_208, 1) = ((MR_Box) (ll_backend__unify_gen__V_222_222));
#line 846 "unify_gen.m"
          }
#line 842 "unify_gen.m"
          {
#line 842 "unify_gen.m"
            ll_backend__unify_gen__V_204_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 842 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_204_204, 0) = ((MR_Box) (ll_backend__unify_gen__V_205_205));
#line 842 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_204_204, 1) = ((MR_Box) (ll_backend__unify_gen__V_208_208));
#line 842 "unify_gen.m"
          }
#line 840 "unify_gen.m"
          {
#line 840 "unify_gen.m"
            ll_backend__unify_gen__V_199_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 840 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_199_199, 0) = ((MR_Box) (ll_backend__unify_gen__V_200_200));
#line 840 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_199_199, 1) = ((MR_Box) (ll_backend__unify_gen__V_204_204));
#line 840 "unify_gen.m"
          }
#line 835 "unify_gen.m"
          {
#line 835 "unify_gen.m"
            ll_backend__unify_gen__V_195_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 835 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_195_195, 0) = ((MR_Box) (ll_backend__unify_gen__V_196_196));
#line 835 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_195_195, 1) = ((MR_Box) (ll_backend__unify_gen__V_199_199));
#line 835 "unify_gen.m"
          }
#line 833 "unify_gen.m"
          {
#line 833 "unify_gen.m"
            ll_backend__unify_gen__V_188_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 833 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_188_188, 0) = ((MR_Box) (ll_backend__unify_gen__V_189_189));
#line 833 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_188_188, 1) = ((MR_Box) (ll_backend__unify_gen__V_195_195));
#line 833 "unify_gen.m"
          }
#line 829 "unify_gen.m"
          {
#line 829 "unify_gen.m"
            ll_backend__unify_gen__V_177_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 829 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_177_177, 0) = ((MR_Box) (ll_backend__unify_gen__V_178_178));
#line 829 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_177_177, 1) = ((MR_Box) (ll_backend__unify_gen__V_188_188));
#line 829 "unify_gen.m"
          }
#line 826 "unify_gen.m"
          {
#line 826 "unify_gen.m"
            ll_backend__unify_gen__V_165_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 826 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_165_165, 0) = ((MR_Box) (ll_backend__unify_gen__V_166_166));
#line 826 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_165_165, 1) = ((MR_Box) (ll_backend__unify_gen__V_177_177));
#line 826 "unify_gen.m"
          }
#line 823 "unify_gen.m"
          {
#line 823 "unify_gen.m"
            ll_backend__unify_gen__V_153_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 823 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_153_153, 0) = ((MR_Box) (ll_backend__unify_gen__V_154_154));
#line 823 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_153_153, 1) = ((MR_Box) (ll_backend__unify_gen__V_165_165));
#line 823 "unify_gen.m"
          }
#line 820 "unify_gen.m"
          {
#line 820 "unify_gen.m"
            ll_backend__unify_gen__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 820 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_142_142, 0) = ((MR_Box) (ll_backend__unify_gen__V_143_143));
#line 820 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_142_142, 1) = ((MR_Box) (ll_backend__unify_gen__V_153_153));
#line 820 "unify_gen.m"
          }
#line 816 "unify_gen.m"
          {
#line 816 "unify_gen.m"
            ll_backend__unify_gen__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 816 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_134_134, 0) = ((MR_Box) (ll_backend__unify_gen__V_135_135));
#line 816 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_134_134, 1) = ((MR_Box) (ll_backend__unify_gen__V_142_142));
#line 816 "unify_gen.m"
          }
#line 813 "unify_gen.m"
          {
#line 813 "unify_gen.m"
            ll_backend__unify_gen__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 813 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_129_129, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_1[12]));
#line 813 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_129_129, 1) = ((MR_Box) (ll_backend__unify_gen__V_134_134));
#line 813 "unify_gen.m"
          }
#line 812 "unify_gen.m"
          {
#line 812 "unify_gen.m"
            ll_backend__unify_gen__NewClosureCode_64 = mercury__cord__from_list_1_f_0(ll_backend__unify_gen__TypeCtorInfo_284_284, ll_backend__unify_gen__V_129_129);
          }
#line 858 "unify_gen.m"
          {
#line 858 "unify_gen.m"
            ll_backend__unify_gen__generate_extra_closure_args_7_p_0(ll_backend__unify_gen__CallArgs_30, ll_backend__unify_gen__LoopCounter_48, ll_backend__unify_gen__NewClosure_50, &ll_backend__unify_gen__ExtraArgsCode_65, *ll_backend__unify_gen__STATE_VARIABLE_CI_100, ll_backend__unify_gen__STATE_VARIABLE_CLD_126_126, &ll_backend__unify_gen__STATE_VARIABLE_CLD_243_243);
          }
#line 860 "unify_gen.m"
          {
#line 860 "unify_gen.m"
            ll_backend__code_loc_dep__release_reg_3_p_0(ll_backend__unify_gen__LoopCounter_48, ll_backend__unify_gen__STATE_VARIABLE_CLD_243_243, &ll_backend__unify_gen__STATE_VARIABLE_CLD_244_244);
          }
#line 861 "unify_gen.m"
          {
#line 861 "unify_gen.m"
            ll_backend__code_loc_dep__release_reg_3_p_0(ll_backend__unify_gen__NumOldArgs_49, ll_backend__unify_gen__STATE_VARIABLE_CLD_244_244, &ll_backend__unify_gen__STATE_VARIABLE_CLD_245_245);
          }
#line 862 "unify_gen.m"
          {
#line 862 "unify_gen.m"
            ll_backend__code_loc_dep__release_reg_3_p_0(ll_backend__unify_gen__NewClosure_50, ll_backend__unify_gen__STATE_VARIABLE_CLD_245_245, &ll_backend__unify_gen__STATE_VARIABLE_CLD_246_246);
          }
#line 863 "unify_gen.m"
          {
#line 863 "unify_gen.m"
            ll_backend__code_loc_dep__assign_lval_to_var_6_p_0(ll_backend__unify_gen__Var_15, ll_backend__unify_gen__NewClosure_50, &ll_backend__unify_gen__AssignCode_66, *ll_backend__unify_gen__STATE_VARIABLE_CI_100, ll_backend__unify_gen__STATE_VARIABLE_CLD_246_246, ll_backend__unify_gen__STATE_VARIABLE_CLD_102);
          }
#line 864 "unify_gen.m"
          {
#line 864 "unify_gen.m"
            ll_backend__unify_gen__V_249_249 = mercury__cord__f_43_43_2_f_0(ll_backend__unify_gen__TypeCtorInfo_284_284, ll_backend__unify_gen__ExtraArgsCode_65, ll_backend__unify_gen__AssignCode_66);
          }
#line 864 "unify_gen.m"
          {
#line 864 "unify_gen.m"
            ll_backend__unify_gen__V_248_248 = mercury__cord__f_43_43_2_f_0(ll_backend__unify_gen__TypeCtorInfo_284_284, ll_backend__unify_gen__NewClosureCode_64, ll_backend__unify_gen__V_249_249);
          }
#line 864 "unify_gen.m"
          {
#line 864 "unify_gen.m"
            *ll_backend__unify_gen__Code_18 = mercury__cord__f_43_43_2_f_0(ll_backend__unify_gen__TypeCtorInfo_284_284, ll_backend__unify_gen__OldClosureCode_59, ll_backend__unify_gen__V_248_248);
          }
#line 792 "unify_gen.m"
        }
#line 867 "unify_gen.m"
    else
#line 868 "unify_gen.m"
      {
#line 868 "unify_gen.m"
        MR_Word ll_backend__unify_gen__TypeCtorInfo_285_285;
#line 868 "unify_gen.m"
        MR_Word ll_backend__unify_gen__CodeAddr_67;
#line 868 "unify_gen.m"
        MR_Word ll_backend__unify_gen__ProcLabel_68;
#line 868 "unify_gen.m"
        MR_Word ll_backend__unify_gen__CodeAddrRval_69;
#line 868 "unify_gen.m"
        MR_Word ll_backend__unify_gen__ClosureInfo_70;
#line 868 "unify_gen.m"
        MR_Word ll_backend__unify_gen__ModuleName_71;
#line 868 "unify_gen.m"
        MR_String ll_backend__unify_gen__FileName_72;
#line 868 "unify_gen.m"
        MR_Integer ll_backend__unify_gen__LineNumber_73;
#line 868 "unify_gen.m"
        MR_Word ll_backend__unify_gen__GoalId_74;
#line 868 "unify_gen.m"
        MR_Integer ll_backend__unify_gen__GoalIdNum_75;
#line 868 "unify_gen.m"
        MR_String ll_backend__unify_gen__GoalIdStr_76;
#line 868 "unify_gen.m"
        MR_Word ll_backend__unify_gen__CallerProcLabel_77;
#line 868 "unify_gen.m"
        MR_Integer ll_backend__unify_gen__SeqNo_78;
#line 868 "unify_gen.m"
        MR_Word ll_backend__unify_gen__StaticCellInfo0_79;
#line 868 "unify_gen.m"
        MR_Word ll_backend__unify_gen__PredOrigin_80;
#line 868 "unify_gen.m"
        MR_Word ll_backend__unify_gen__StaticCellInfo_81;
#line 868 "unify_gen.m"
        MR_Word ll_backend__unify_gen__ClosureLayoutTypedRvals_82;
#line 868 "unify_gen.m"
        MR_Word ll_backend__unify_gen__Data_83;
#line 868 "unify_gen.m"
        MR_Word ll_backend__unify_gen__ClosureDataAddr_84;
#line 868 "unify_gen.m"
        MR_Word ll_backend__unify_gen__ClosureLayoutRval_85;
#line 868 "unify_gen.m"
        MR_Word ll_backend__unify_gen__ArgInfo_86;
#line 868 "unify_gen.m"
        MR_Word ll_backend__unify_gen__VarTypes_87;
#line 868 "unify_gen.m"
        MR_Word ll_backend__unify_gen__MayUseAtomic0_88;
#line 868 "unify_gen.m"
        MR_Word ll_backend__unify_gen__ArgsR_89;
#line 868 "unify_gen.m"
        MR_Word ll_backend__unify_gen__ArgsF_90;
#line 868 "unify_gen.m"
        MR_Word ll_backend__unify_gen__MayUseAtomic_91;
#line 868 "unify_gen.m"
        MR_Integer ll_backend__unify_gen__NumArgsR_92;
#line 868 "unify_gen.m"
        MR_Integer ll_backend__unify_gen__NumArgsF_93;
#line 868 "unify_gen.m"
        MR_Integer ll_backend__unify_gen__NumArgsRF_94;
#line 868 "unify_gen.m"
        MR_Word ll_backend__unify_gen__ArgsRF_95;
#line 868 "unify_gen.m"
        MR_Word ll_backend__unify_gen__Vector_96;
#line 868 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_252_252;
#line 868 "unify_gen.m"
        MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_253_253;
#line 868 "unify_gen.m"
        MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_254_254;
#line 868 "unify_gen.m"
        MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_255_255;
#line 868 "unify_gen.m"
        MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_256_256;
#line 868 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_257_257;
#line 868 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_259_259;
#line 868 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_261_261;
#line 868 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_262_262;
#line 868 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_264_264;
#line 868 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_265_265;
#line 868 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_266_266;
#line 868 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_267_267;
#line 868 "unify_gen.m"
        MR_Integer ll_backend__unify_gen__V_270_270;
#line 868 "unify_gen.m"
        MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_271_271;
#line 868 "unify_gen.m"
        MR_Word ll_backend__unify_gen__Context_276;
#line 868 "unify_gen.m"
        MR_Word ll_backend__unify_gen__MaybeAllocId_277;

#line 868 "unify_gen.m"
        {
#line 868 "unify_gen.m"
          ll_backend__unify_gen__CodeAddr_67 = ll_backend__code_info__make_proc_entry_label_5_f_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_99, ll_backend__unify_gen__ModuleInfo_21, ll_backend__unify_gen__PredId_12, ll_backend__unify_gen__ProcId_13, (MR_Integer) 0);
        }
#line 869 "unify_gen.m"
        {
#line 869 "unify_gen.m"
          ll_backend__unify_gen__ProcLabel_68 = ll_backend__code_util__extract_proc_label_from_code_addr_1_f_0(ll_backend__unify_gen__CodeAddr_67);
        }
#line 870 "unify_gen.m"
        {
#line 870 "unify_gen.m"
          ll_backend__unify_gen__V_252_252 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 870 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_252_252, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 870 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_252_252, 1) = ((MR_Box) (ll_backend__unify_gen__CodeAddr_67));
#line 870 "unify_gen.m"
        }
#line 870 "unify_gen.m"
        {
#line 870 "unify_gen.m"
          ll_backend__unify_gen__CodeAddrRval_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 870 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__CodeAddrRval_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 870 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__CodeAddrRval_69, 1) = ((MR_Box) (ll_backend__unify_gen__V_252_252));
#line 870 "unify_gen.m"
        }
#line 871 "unify_gen.m"
        {
#line 871 "unify_gen.m"
          ll_backend__continuation_info__generate_closure_layout_4_p_0(ll_backend__unify_gen__ModuleInfo_21, ll_backend__unify_gen__PredId_12, ll_backend__unify_gen__ProcId_13, &ll_backend__unify_gen__ClosureInfo_70);
        }
#line 873 "unify_gen.m"
        {
#line 873 "unify_gen.m"
          hlds__hlds_module__module_info_get_name_2_p_0(ll_backend__unify_gen__ModuleInfo_21, &ll_backend__unify_gen__ModuleName_71);
        }
#line 874 "unify_gen.m"
        {
#line 874 "unify_gen.m"
          ll_backend__unify_gen__Context_276 = hlds__hlds_goal__goal_info_get_context_1_f_0(ll_backend__unify_gen__GoalInfo_17);
        }
#line 875 "unify_gen.m"
        {
#line 875 "unify_gen.m"
          mercury__term__context_file_2_p_0(ll_backend__unify_gen__Context_276, &ll_backend__unify_gen__FileName_72);
        }
#line 876 "unify_gen.m"
        {
#line 876 "unify_gen.m"
          mercury__term__context_line_2_p_0(ll_backend__unify_gen__Context_276, &ll_backend__unify_gen__LineNumber_73);
        }
#line 877 "unify_gen.m"
        {
#line 877 "unify_gen.m"
          ll_backend__unify_gen__GoalId_74 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(ll_backend__unify_gen__GoalInfo_17);
        }
#line 878 "unify_gen.m"
        ll_backend__unify_gen__GoalIdNum_75 = (MR_Integer) ll_backend__unify_gen__GoalId_74;
#line 879 "unify_gen.m"
        {
#line 879 "unify_gen.m"
          ll_backend__unify_gen__GoalIdStr_76 = mercury__string__int_to_string_1_f_0(ll_backend__unify_gen__GoalIdNum_75);
        }
#line 880 "unify_gen.m"
        {
#line 880 "unify_gen.m"
          ll_backend__code_info__get_proc_label_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_99, &ll_backend__unify_gen__CallerProcLabel_77);
        }
#line 881 "unify_gen.m"
        {
#line 881 "unify_gen.m"
          ll_backend__code_info__get_next_closure_seq_no_3_p_0(&ll_backend__unify_gen__SeqNo_78, ll_backend__unify_gen__STATE_VARIABLE_CI_0_99, &ll_backend__unify_gen__STATE_VARIABLE_CI_253_253);
        }
#line 882 "unify_gen.m"
        {
#line 882 "unify_gen.m"
          ll_backend__code_info__get_static_cell_info_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_253_253, &ll_backend__unify_gen__StaticCellInfo0_79);
        }
#line 883 "unify_gen.m"
        {
#line 883 "unify_gen.m"
          hlds__hlds_pred__pred_info_get_origin_2_p_0(ll_backend__unify_gen__PredInfo_23, &ll_backend__unify_gen__PredOrigin_80);
        }
#line 884 "unify_gen.m"
        {
#line 884 "unify_gen.m"
          ll_backend__stack_layout__construct_closure_layout_13_p_0(ll_backend__unify_gen__CallerProcLabel_77, ll_backend__unify_gen__SeqNo_78, ll_backend__unify_gen__ClosureInfo_70, ll_backend__unify_gen__ProcLabel_68, ll_backend__unify_gen__ModuleName_71, ll_backend__unify_gen__FileName_72, ll_backend__unify_gen__LineNumber_73, ll_backend__unify_gen__PredOrigin_80, ll_backend__unify_gen__GoalIdStr_76, ll_backend__unify_gen__StaticCellInfo0_79, &ll_backend__unify_gen__StaticCellInfo_81, &ll_backend__unify_gen__ClosureLayoutTypedRvals_82, &ll_backend__unify_gen__Data_83);
        }
#line 888 "unify_gen.m"
        {
#line 888 "unify_gen.m"
          ll_backend__code_info__set_static_cell_info_3_p_0(ll_backend__unify_gen__StaticCellInfo_81, ll_backend__unify_gen__STATE_VARIABLE_CI_253_253, &ll_backend__unify_gen__STATE_VARIABLE_CI_254_254);
        }
#line 889 "unify_gen.m"
        {
#line 889 "unify_gen.m"
          ll_backend__code_info__add_closure_layout_3_p_0(ll_backend__unify_gen__Data_83, ll_backend__unify_gen__STATE_VARIABLE_CI_254_254, &ll_backend__unify_gen__STATE_VARIABLE_CI_255_255);
        }
#line 892 "unify_gen.m"
        {
#line 892 "unify_gen.m"
          ll_backend__code_info__add_scalar_static_cell_4_p_0(ll_backend__unify_gen__ClosureLayoutTypedRvals_82, &ll_backend__unify_gen__ClosureDataAddr_84, ll_backend__unify_gen__STATE_VARIABLE_CI_255_255, &ll_backend__unify_gen__STATE_VARIABLE_CI_256_256);
        }
#line 893 "unify_gen.m"
        {
#line 893 "unify_gen.m"
          ll_backend__unify_gen__V_257_257 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 893 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_257_257, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 893 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_257_257, 1) = ((MR_Box) (ll_backend__unify_gen__ClosureDataAddr_84));
#line 893 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_257_257, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 893 "unify_gen.m"
        }
#line 893 "unify_gen.m"
        {
#line 893 "unify_gen.m"
          ll_backend__unify_gen__ClosureLayoutRval_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 893 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ClosureLayoutRval_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 893 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ClosureLayoutRval_85, 1) = ((MR_Box) (ll_backend__unify_gen__V_257_257));
#line 893 "unify_gen.m"
        }
#line 894 "unify_gen.m"
        {
#line 894 "unify_gen.m"
          hlds__hlds_pred__proc_info_arg_info_2_p_0(ll_backend__unify_gen__ProcInfo_25, &ll_backend__unify_gen__ArgInfo_86);
        }
#line 895 "unify_gen.m"
        {
#line 895 "unify_gen.m"
          ll_backend__code_info__get_vartypes_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_256_256, &ll_backend__unify_gen__VarTypes_87);
        }
#line 896 "unify_gen.m"
        {
#line 896 "unify_gen.m"
          ll_backend__unify_gen__MayUseAtomic0_88 = ll_backend__unify_gen__initial_may_use_atomic_1_f_0(ll_backend__unify_gen__ModuleInfo_21);
        }
#line 897 "unify_gen.m"
        {
#line 897 "unify_gen.m"
          ll_backend__unify_gen__generate_pred_args_8_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_256_256, ll_backend__unify_gen__VarTypes_87, ll_backend__unify_gen__Args_16, ll_backend__unify_gen__ArgInfo_86, &ll_backend__unify_gen__ArgsR_89, &ll_backend__unify_gen__ArgsF_90, ll_backend__unify_gen__MayUseAtomic0_88, &ll_backend__unify_gen__MayUseAtomic_91);
        }
#line 6076 "ll_backend.unify_gen.c"
        ll_backend__unify_gen__TypeCtorInfo_285_285 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_cell_arg_0;
#line 899 "unify_gen.m"
        {
#line 899 "unify_gen.m"
          mercury__list__length_2_p_0(ll_backend__unify_gen__TypeCtorInfo_285_285, ll_backend__unify_gen__ArgsR_89, &ll_backend__unify_gen__NumArgsR_92);
        }
#line 900 "unify_gen.m"
        {
#line 900 "unify_gen.m"
          mercury__list__length_2_p_0(ll_backend__unify_gen__TypeCtorInfo_285_285, ll_backend__unify_gen__ArgsF_90, &ll_backend__unify_gen__NumArgsF_93);
        }
#line 901 "unify_gen.m"
        {
#line 901 "unify_gen.m"
          ll_backend__unify_gen__NumArgsRF_94 = ll_backend__code_util__encode_num_generic_call_vars_2_f_0(ll_backend__unify_gen__NumArgsR_92, ll_backend__unify_gen__NumArgsF_93);
        }
#line 902 "unify_gen.m"
        {
#line 902 "unify_gen.m"
          mercury__list__append_3_p_1(ll_backend__unify_gen__TypeCtorInfo_285_285, ll_backend__unify_gen__ArgsR_89, ll_backend__unify_gen__ArgsF_90, &ll_backend__unify_gen__ArgsRF_95);
        }
#line 904 "unify_gen.m"
        {
#line 904 "unify_gen.m"
          ll_backend__unify_gen__V_259_259 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 904 "unify_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_259_259, 0) = ((MR_Box) (ll_backend__unify_gen__ClosureLayoutRval_85));
#line 904 "unify_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_259_259, 1) = ((MR_Box) ((MR_Integer) 0));
#line 904 "unify_gen.m"
        }
#line 905 "unify_gen.m"
        {
#line 905 "unify_gen.m"
          ll_backend__unify_gen__V_262_262 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 905 "unify_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_262_262, 0) = ((MR_Box) (ll_backend__unify_gen__CodeAddrRval_69));
#line 905 "unify_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_262_262, 1) = ((MR_Box) ((MR_Integer) 0));
#line 905 "unify_gen.m"
        }
#line 906 "unify_gen.m"
        {
#line 906 "unify_gen.m"
          ll_backend__unify_gen__V_267_267 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 906 "unify_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_267_267, 0) = ((MR_Box) (ll_backend__unify_gen__NumArgsRF_94));
#line 906 "unify_gen.m"
        }
#line 906 "unify_gen.m"
        {
#line 906 "unify_gen.m"
          ll_backend__unify_gen__V_266_266 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 906 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_266_266, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 906 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_266_266, 1) = ((MR_Box) (ll_backend__unify_gen__V_267_267));
#line 906 "unify_gen.m"
        }
#line 906 "unify_gen.m"
        {
#line 906 "unify_gen.m"
          ll_backend__unify_gen__V_265_265 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 906 "unify_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_265_265, 0) = ((MR_Box) (ll_backend__unify_gen__V_266_266));
#line 906 "unify_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_265_265, 1) = ((MR_Box) ((MR_Integer) 0));
#line 906 "unify_gen.m"
        }
#line 907 "unify_gen.m"
        {
#line 907 "unify_gen.m"
          ll_backend__unify_gen__V_264_264 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 907 "unify_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_264_264, 0) = ((MR_Box) (ll_backend__unify_gen__V_265_265));
#line 907 "unify_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_264_264, 1) = ((MR_Box) (ll_backend__unify_gen__ArgsRF_95));
#line 907 "unify_gen.m"
        }
#line 905 "unify_gen.m"
        {
#line 905 "unify_gen.m"
          ll_backend__unify_gen__V_261_261 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 905 "unify_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_261_261, 0) = ((MR_Box) (ll_backend__unify_gen__V_262_262));
#line 905 "unify_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_261_261, 1) = ((MR_Box) (ll_backend__unify_gen__V_264_264));
#line 905 "unify_gen.m"
        }
#line 904 "unify_gen.m"
        {
#line 904 "unify_gen.m"
          ll_backend__unify_gen__Vector_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 904 "unify_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Vector_96, 0) = ((MR_Box) (ll_backend__unify_gen__V_259_259));
#line 904 "unify_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Vector_96, 1) = ((MR_Box) (ll_backend__unify_gen__V_261_261));
#line 904 "unify_gen.m"
        }
#line 913 "unify_gen.m"
        {
#line 913 "unify_gen.m"
          ll_backend__unify_gen__V_270_270 = mercury__list__length_1_f_0(ll_backend__unify_gen__TypeCtorInfo_285_285, ll_backend__unify_gen__Vector_96);
        }
#line 913 "unify_gen.m"
        {
#line 913 "unify_gen.m"
          ll_backend__unify_gen__maybe_add_alloc_site_info_6_p_0(ll_backend__unify_gen__Context_276, (MR_String) "closure", ll_backend__unify_gen__V_270_270, &ll_backend__unify_gen__MaybeAllocId_277, ll_backend__unify_gen__STATE_VARIABLE_CI_256_256, &ll_backend__unify_gen__STATE_VARIABLE_CI_271_271);
        }
#line 915 "unify_gen.m"
        {
#line 915 "unify_gen.m"
          ll_backend__code_loc_dep__assign_cell_to_var_13_p_0(ll_backend__unify_gen__Var_15, (MR_Integer) 0, (MR_Integer) 0, ll_backend__unify_gen__Vector_96, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__unify_gen__MaybeAllocId_277, ll_backend__unify_gen__MayUseAtomic_91, ll_backend__unify_gen__Code_18, ll_backend__unify_gen__STATE_VARIABLE_CI_271_271, ll_backend__unify_gen__STATE_VARIABLE_CI_100, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_101, ll_backend__unify_gen__STATE_VARIABLE_CLD_102);
#line 915 "unify_gen.m"
          return;
        }
#line 868 "unify_gen.m"
      }
#line 724 "unify_gen.m"
  }
#line 719 "unify_gen.m"
}

#line 349 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_97_119_95_116_97_103_95_116_101_115_116_95_95_91_50_93_95_48_11_p_0(
#line 349 "unify_gen.m"
  MR_Word ll_backend__unify_gen__VarRval_12,
#line 349 "unify_gen.m"
  MR_String ll_backend__unify_gen__VarName_14,
#line 349 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConsId_15,
#line 349 "unify_gen.m"
  MR_Word ll_backend__unify_gen__MaybeConsTag_16,
#line 349 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CheaperTagTest_17,
#line 349 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Sense_18,
#line 349 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__ElseLabel_19,
#line 349 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_20,
#line 349 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_33,
#line 349 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_34)
#line 349 "unify_gen.m"
{
#line 355 "unify_gen.m"
  {
#line 355 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 355 "unify_gen.m"
    MR_String ll_backend__unify_gen__ConsIdName_22;
#line 355 "unify_gen.m"
    MR_String ll_backend__unify_gen__Comment_27;
#line 355 "unify_gen.m"
    MR_Word ll_backend__unify_gen__TestRval_29;
#line 355 "unify_gen.m"
    MR_Word ll_backend__unify_gen__TheRval_32;
#line 355 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_46_46;
#line 355 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_47_47;
#line 355 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_48_48;
#line 370 "unify_gen.m"
    MR_Word ll_backend__unify_gen__CheapConsTag_26;
#line 363 "unify_gen.m"
    MR_Word ll_backend__unify_gen__ExpensiveConsId_23;
#line 362 "unify_gen.m"
    MR_Word ll_backend__unify_gen___ExpensiveConsTag_24;
#line 362 "unify_gen.m"
    MR_Word ll_backend__unify_gen___CheapConsId_25;

#line 356 "unify_gen.m"
    {
#line 356 "unify_gen.m"
      ll_backend__unify_gen__ConsIdName_22 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(ll_backend__unify_gen__ConsId_15);
    }
#line 362 "unify_gen.m"
    ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__CheaperTagTest_17)) == (MR_mktag((MR_Integer) 1)));
#line 362 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 362 "unify_gen.m"
      {
#line 362 "unify_gen.m"
        ll_backend__unify_gen__ExpensiveConsId_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CheaperTagTest_17, (MR_Integer) 0)));
#line 362 "unify_gen.m"
        ll_backend__unify_gen___ExpensiveConsTag_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CheaperTagTest_17, (MR_Integer) 1)));
#line 362 "unify_gen.m"
        ll_backend__unify_gen___CheapConsId_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CheaperTagTest_17, (MR_Integer) 2)));
#line 362 "unify_gen.m"
        ll_backend__unify_gen__CheapConsTag_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CheaperTagTest_17, (MR_Integer) 3)));
#line 364 "unify_gen.m"
        {
#line 364 "unify_gen.m"
          ll_backend__unify_gen__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ll_backend__unify_gen__ConsId_15, ll_backend__unify_gen__ExpensiveConsId_23);
        }
#line 362 "unify_gen.m"
      }
#line 370 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 367 "unify_gen.m"
      {
#line 367 "unify_gen.m"
        MR_Word ll_backend__unify_gen__NegTestRval_28;
#line 367 "unify_gen.m"
        MR_String ll_backend__unify_gen__V_35_35;
#line 367 "unify_gen.m"
        MR_String ll_backend__unify_gen__V_36_36;
#line 367 "unify_gen.m"
        MR_String ll_backend__unify_gen__V_37_37;
#line 367 "unify_gen.m"
        MR_String ll_backend__unify_gen__V_39_39;

#line 397 "unify_gen.m"
#line 397 "unify_gen.m"
        switch (ll_backend__unify_gen__Sense_18) {
#line 397 "unify_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 397 "unify_gen.m"
          case (MR_Integer) 1:
#line 400 "unify_gen.m"
            ll_backend__unify_gen__V_35_35 = (MR_String) "branch away unless ";
#line 397 "unify_gen.m"
            break;
#line 397 "unify_gen.m"
          case (MR_Integer) 0:
#line 398 "unify_gen.m"
            ll_backend__unify_gen__V_35_35 = (MR_String) "branch away if ";
#line 397 "unify_gen.m"
            break;
#line 397 "unify_gen.m"
        }
#line 367 "unify_gen.m"
        {
#line 367 "unify_gen.m"
          ll_backend__unify_gen__V_39_39 = mercury__string__f_43_43_2_f_0(ll_backend__unify_gen__ConsIdName_22, (MR_String) " (inverted test)");
        }
#line 367 "unify_gen.m"
        {
#line 367 "unify_gen.m"
          ll_backend__unify_gen__V_37_37 = mercury__string__f_43_43_2_f_0((MR_String) " has functor ", ll_backend__unify_gen__V_39_39);
        }
#line 366 "unify_gen.m"
        {
#line 366 "unify_gen.m"
          ll_backend__unify_gen__V_36_36 = mercury__string__f_43_43_2_f_0(ll_backend__unify_gen__VarName_14, ll_backend__unify_gen__V_37_37);
        }
#line 366 "unify_gen.m"
        {
#line 366 "unify_gen.m"
          ll_backend__unify_gen__Comment_27 = mercury__string__f_43_43_2_f_0(ll_backend__unify_gen__V_35_35, ll_backend__unify_gen__V_36_36);
        }
#line 368 "unify_gen.m"
        {
#line 368 "unify_gen.m"
          ll_backend__unify_gen__raw_tag_test_3_p_0(ll_backend__unify_gen__VarRval_12, ll_backend__unify_gen__CheapConsTag_26, &ll_backend__unify_gen__NegTestRval_28);
        }
#line 369 "unify_gen.m"
        {
#line 369 "unify_gen.m"
          ll_backend__code_util__neg_rval_2_p_0(ll_backend__unify_gen__NegTestRval_28, &ll_backend__unify_gen__TestRval_29);
        }
#line 367 "unify_gen.m"
      }
#line 370 "unify_gen.m"
    else
#line 372 "unify_gen.m"
      {
#line 372 "unify_gen.m"
        MR_Word ll_backend__unify_gen__ConsTag_30;
#line 372 "unify_gen.m"
        MR_String ll_backend__unify_gen__V_41_41;
#line 372 "unify_gen.m"
        MR_String ll_backend__unify_gen__V_42_42;
#line 372 "unify_gen.m"
        MR_String ll_backend__unify_gen__V_43_43;

#line 397 "unify_gen.m"
#line 397 "unify_gen.m"
        switch (ll_backend__unify_gen__Sense_18) {
#line 397 "unify_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 397 "unify_gen.m"
          case (MR_Integer) 1:
#line 400 "unify_gen.m"
            ll_backend__unify_gen__V_41_41 = (MR_String) "branch away unless ";
#line 397 "unify_gen.m"
            break;
#line 397 "unify_gen.m"
          case (MR_Integer) 0:
#line 398 "unify_gen.m"
            ll_backend__unify_gen__V_41_41 = (MR_String) "branch away if ";
#line 397 "unify_gen.m"
            break;
#line 397 "unify_gen.m"
        }
#line 372 "unify_gen.m"
        {
#line 372 "unify_gen.m"
          ll_backend__unify_gen__V_43_43 = mercury__string__f_43_43_2_f_0((MR_String) " has functor ", ll_backend__unify_gen__ConsIdName_22);
        }
#line 371 "unify_gen.m"
        {
#line 371 "unify_gen.m"
          ll_backend__unify_gen__V_42_42 = mercury__string__f_43_43_2_f_0(ll_backend__unify_gen__VarName_14, ll_backend__unify_gen__V_43_43);
        }
#line 371 "unify_gen.m"
        {
#line 371 "unify_gen.m"
          ll_backend__unify_gen__Comment_27 = mercury__string__f_43_43_2_f_0(ll_backend__unify_gen__V_41_41, ll_backend__unify_gen__V_42_42);
        }
#line 376 "unify_gen.m"
        if ((ll_backend__unify_gen__MaybeConsTag_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 377 "unify_gen.m"
          {
#line 377 "unify_gen.m"
            MR_Word ll_backend__unify_gen__ModuleInfo_31;

#line 378 "unify_gen.m"
            {
#line 378 "unify_gen.m"
              ll_backend__code_info__get_module_info_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_33, &ll_backend__unify_gen__ModuleInfo_31);
            }
#line 379 "unify_gen.m"
            {
#line 379 "unify_gen.m"
              ll_backend__unify_gen__ConsTag_30 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ll_backend__unify_gen__ModuleInfo_31, ll_backend__unify_gen__ConsId_15);
            }
#line 377 "unify_gen.m"
          }
#line 376 "unify_gen.m"
        else
#line 374 "unify_gen.m"
          ll_backend__unify_gen__ConsTag_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__MaybeConsTag_16, (MR_Integer) 0)));
#line 381 "unify_gen.m"
        {
#line 381 "unify_gen.m"
          ll_backend__unify_gen__raw_tag_test_3_p_0(ll_backend__unify_gen__VarRval_12, ll_backend__unify_gen__ConsTag_30, &ll_backend__unify_gen__TestRval_29);
        }
#line 372 "unify_gen.m"
      }
#line 383 "unify_gen.m"
    {
#line 383 "unify_gen.m"
      ll_backend__code_info__get_next_label_3_p_0(ll_backend__unify_gen__ElseLabel_19, ll_backend__unify_gen__STATE_VARIABLE_CI_0_33, ll_backend__unify_gen__STATE_VARIABLE_CI_34);
    }
#line 387 "unify_gen.m"
#line 387 "unify_gen.m"
    switch (ll_backend__unify_gen__Sense_18) {
#line 387 "unify_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 387 "unify_gen.m"
      case (MR_Integer) 1:
#line 389 "unify_gen.m"
        {
#line 389 "unify_gen.m"
          ll_backend__code_util__neg_rval_2_p_0(ll_backend__unify_gen__TestRval_29, &ll_backend__unify_gen__TheRval_32);
        }
#line 387 "unify_gen.m"
        break;
#line 387 "unify_gen.m"
      case (MR_Integer) 0:
#line 386 "unify_gen.m"
        ll_backend__unify_gen__TheRval_32 = ll_backend__unify_gen__TestRval_29;
#line 387 "unify_gen.m"
        break;
#line 387 "unify_gen.m"
    }
#line 392 "unify_gen.m"
    {
#line 392 "unify_gen.m"
      ll_backend__unify_gen__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 392 "unify_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_48_48, 0) = ((MR_Box) (*ll_backend__unify_gen__ElseLabel_19));
#line 392 "unify_gen.m"
    }
#line 392 "unify_gen.m"
    {
#line 392 "unify_gen.m"
      ll_backend__unify_gen__V_47_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 392 "unify_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_47_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 392 "unify_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_47_47, 1) = ((MR_Box) (ll_backend__unify_gen__TheRval_32));
#line 392 "unify_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_47_47, 2) = ((MR_Box) (ll_backend__unify_gen__V_48_48));
#line 392 "unify_gen.m"
    }
#line 392 "unify_gen.m"
    {
#line 392 "unify_gen.m"
      ll_backend__unify_gen__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 392 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_46_46, 0) = ((MR_Box) (ll_backend__unify_gen__V_47_47));
#line 392 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_46_46, 1) = ((MR_Box) (ll_backend__unify_gen__Comment_27));
#line 392 "unify_gen.m"
    }
#line 391 "unify_gen.m"
    {
#line 391 "unify_gen.m"
      *ll_backend__unify_gen__Code_20 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__unify_gen__V_46_46)));
    }
#line 355 "unify_gen.m"
  }
#line 349 "unify_gen.m"
}

#line 311 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_97_119_95_116_97_103_95_116_101_115_116_95_99_97_115_101_95_95_91_50_93_95_48_11_p_0_2(
#line 311 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg,
#line 311 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
#line 311 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_2)
#line 311 "unify_gen.m"
{
#line 311 "unify_gen.m"
  {
#line 311 "unify_gen.m"
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;
#line 311 "unify_gen.m"
    MR_Word ll_backend__unify_gen__conv2_TestRval_6;

#line 311 "unify_gen.m"
    {
#line 311 "unify_gen.m"
      ll_backend__unify_gen__raw_tag_test_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__unify_gen__wrapper_arg_1), &ll_backend__unify_gen__conv2_TestRval_6);
    }
#line 311 "unify_gen.m"
    *ll_backend__unify_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__unify_gen__conv2_TestRval_6));
#line 311 "unify_gen.m"
  }
#line 311 "unify_gen.m"
}

#line 306 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_97_119_95_116_97_103_95_116_101_115_116_95_99_97_115_101_95_95_91_50_93_95_48_11_p_0_1(
#line 306 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg,
#line 306 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
#line 306 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_2,
#line 306 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_3)
#line 306 "unify_gen.m"
{
#line 306 "unify_gen.m"
  {
#line 306 "unify_gen.m"
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;
#line 306 "unify_gen.m"
    MR_String ll_backend__unify_gen__conv1_HeadVar__2_2;
#line 306 "unify_gen.m"
    MR_Word ll_backend__unify_gen__conv0_HeadVar__3_3;

#line 306 "unify_gen.m"
    {
#line 306 "unify_gen.m"
      hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_p_0(((MR_Word) ll_backend__unify_gen__wrapper_arg_1), &ll_backend__unify_gen__conv1_HeadVar__2_2, &ll_backend__unify_gen__conv0_HeadVar__3_3);
    }
#line 306 "unify_gen.m"
    *ll_backend__unify_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__unify_gen__conv1_HeadVar__2_2));
#line 306 "unify_gen.m"
    *ll_backend__unify_gen__wrapper_arg_3 = ((MR_Box) (ll_backend__unify_gen__conv0_HeadVar__3_3));
#line 306 "unify_gen.m"
  }
#line 306 "unify_gen.m"
}

#line 50 "unify_gen.m"
void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_97_119_95_116_97_103_95_116_101_115_116_95_99_97_115_101_95_95_91_50_93_95_48_11_p_0(
#line 50 "unify_gen.m"
  MR_Word ll_backend__unify_gen__VarRval_12,
#line 50 "unify_gen.m"
  MR_String ll_backend__unify_gen__VarName_14,
#line 50 "unify_gen.m"
  MR_Word ll_backend__unify_gen__MainTaggedConsId_15,
#line 50 "unify_gen.m"
  MR_Word ll_backend__unify_gen__OtherTaggedConsIds_16,
#line 50 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CheaperTagTest_17,
#line 50 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Sense_18,
#line 50 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__ElseLabel_19,
#line 50 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_20,
#line 50 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_34,
#line 50 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_35)
#line 50 "unify_gen.m"
{
#line 297 "unify_gen.m"
  {
#line 297 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;

#line 297 "unify_gen.m"
    if ((ll_backend__unify_gen__OtherTaggedConsIds_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 297 "unify_gen.m"
      {
#line 297 "unify_gen.m"
        MR_Word ll_backend__unify_gen__MainConsId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__MainTaggedConsId_15, (MR_Integer) 0)));
#line 297 "unify_gen.m"
        MR_Word ll_backend__unify_gen__MainConsTag_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__MainTaggedConsId_15, (MR_Integer) 1)));
#line 297 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_44_44;

#line 300 "unify_gen.m"
        {
#line 300 "unify_gen.m"
          ll_backend__unify_gen__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 300 "unify_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_44_44, 0) = ((MR_Box) (ll_backend__unify_gen__MainConsTag_23));
#line 300 "unify_gen.m"
        }
#line 299 "unify_gen.m"
        {
#line 299 "unify_gen.m"
          ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_97_119_95_116_97_103_95_116_101_115_116_95_95_91_50_93_95_48_11_p_0(ll_backend__unify_gen__VarRval_12, ll_backend__unify_gen__VarName_14, ll_backend__unify_gen__MainConsId_22, ll_backend__unify_gen__V_44_44, ll_backend__unify_gen__CheaperTagTest_17, ll_backend__unify_gen__Sense_18, ll_backend__unify_gen__ElseLabel_19, ll_backend__unify_gen__Code_20, ll_backend__unify_gen__STATE_VARIABLE_CI_0_34, ll_backend__unify_gen__STATE_VARIABLE_CI_35);
#line 299 "unify_gen.m"
          return;
        }
#line 297 "unify_gen.m"
      }
#line 297 "unify_gen.m"
    else
#line 303 "unify_gen.m"
      {
#line 303 "unify_gen.m"
        MR_Word ll_backend__unify_gen__TypeCtorInfo_52_52;
#line 303 "unify_gen.m"
        MR_String ll_backend__unify_gen__MainConsName_26;
#line 303 "unify_gen.m"
        MR_Word ll_backend__unify_gen__OtherConsNames_27;
#line 303 "unify_gen.m"
        MR_Word ll_backend__unify_gen__OtherConsTags_28;
#line 303 "unify_gen.m"
        MR_String ll_backend__unify_gen__Comment_29;
#line 303 "unify_gen.m"
        MR_Word ll_backend__unify_gen__MainTagTestRval_30;
#line 303 "unify_gen.m"
        MR_Word ll_backend__unify_gen__OtherTagTestRvals_31;
#line 303 "unify_gen.m"
        MR_Word ll_backend__unify_gen__TestRval_32;
#line 303 "unify_gen.m"
        MR_Word ll_backend__unify_gen__TheRval_33;
#line 303 "unify_gen.m"
        MR_String ll_backend__unify_gen__V_37_37;
#line 303 "unify_gen.m"
        MR_String ll_backend__unify_gen__V_38_38;
#line 303 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_39_39;
#line 303 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_41_41;
#line 303 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_42_42;
#line 303 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_43_43;
#line 303 "unify_gen.m"
        MR_Word ll_backend__unify_gen__MainConsTag_46;

#line 305 "unify_gen.m"
        {
#line 305 "unify_gen.m"
          hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_p_0(ll_backend__unify_gen__MainTaggedConsId_15, &ll_backend__unify_gen__MainConsName_26, &ll_backend__unify_gen__MainConsTag_46);
        }
#line 6654 "ll_backend.unify_gen.c"
        ll_backend__unify_gen__TypeCtorInfo_52_52 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
#line 306 "unify_gen.m"
        {
#line 306 "unify_gen.m"
          mercury__list__map2_4_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ll_backend__unify_gen__TypeCtorInfo_52_52, (MR_Word) &ll_backend__unify_gen_scalar_common_2[9], ll_backend__unify_gen__OtherTaggedConsIds_16, &ll_backend__unify_gen__OtherConsNames_27, &ll_backend__unify_gen__OtherConsTags_28);
        }
#line 309 "unify_gen.m"
        {
#line 309 "unify_gen.m"
          ll_backend__unify_gen__V_38_38 = hlds__hlds_out__hlds_out_goal__case_comment_3_f_0(ll_backend__unify_gen__VarName_14, ll_backend__unify_gen__MainConsName_26, ll_backend__unify_gen__OtherConsNames_27);
        }
#line 310 "unify_gen.m"
        {
#line 310 "unify_gen.m"
          ll_backend__unify_gen__raw_tag_test_3_p_0(ll_backend__unify_gen__VarRval_12, ll_backend__unify_gen__MainConsTag_46, &ll_backend__unify_gen__MainTagTestRval_30);
        }
#line 311 "unify_gen.m"
        {
#line 311 "unify_gen.m"
          ll_backend__unify_gen__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 311 "unify_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_39_39, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[2]));
#line 311 "unify_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_39_39, 1) = ((MR_Box) (ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_97_119_95_116_97_103_95_116_101_115_116_95_99_97_115_101_95_95_91_50_93_95_48_11_p_0_2));
#line 311 "unify_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_39_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 311 "unify_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_39_39, 3) = ((MR_Box) (ll_backend__unify_gen__VarRval_12));
#line 311 "unify_gen.m"
        }
#line 311 "unify_gen.m"
        {
#line 311 "unify_gen.m"
          mercury__list__map_3_p_0(ll_backend__unify_gen__TypeCtorInfo_52_52, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ll_backend__unify_gen__V_39_39, ll_backend__unify_gen__OtherConsTags_28, &ll_backend__unify_gen__OtherTagTestRvals_31);
        }
#line 312 "unify_gen.m"
        {
#line 312 "unify_gen.m"
          ll_backend__unify_gen__disjoin_tag_tests_3_p_0(ll_backend__unify_gen__MainTagTestRval_30, ll_backend__unify_gen__OtherTagTestRvals_31, &ll_backend__unify_gen__TestRval_32);
        }
#line 313 "unify_gen.m"
        {
#line 313 "unify_gen.m"
          ll_backend__code_info__get_next_label_3_p_0(ll_backend__unify_gen__ElseLabel_19, ll_backend__unify_gen__STATE_VARIABLE_CI_0_34, ll_backend__unify_gen__STATE_VARIABLE_CI_35);
        }
#line 6700 "ll_backend.unify_gen.c"
#line 6701 "ll_backend.unify_gen.c"
        switch (ll_backend__unify_gen__Sense_18) {
#line 6703 "ll_backend.unify_gen.c"
          default: /*NOTREACHED*/ MR_assert(0);
#line 6705 "ll_backend.unify_gen.c"
          case (MR_Integer) 1:
#line 6707 "ll_backend.unify_gen.c"
            {
#line 400 "unify_gen.m"
              ll_backend__unify_gen__V_37_37 = (MR_String) "branch away unless ";
#line 319 "unify_gen.m"
              {
#line 319 "unify_gen.m"
                ll_backend__code_util__neg_rval_2_p_0(ll_backend__unify_gen__TestRval_32, &ll_backend__unify_gen__TheRval_33);
              }
#line 6716 "ll_backend.unify_gen.c"
            }
#line 6718 "ll_backend.unify_gen.c"
            break;
#line 6720 "ll_backend.unify_gen.c"
          case (MR_Integer) 0:
#line 6722 "ll_backend.unify_gen.c"
            {
#line 398 "unify_gen.m"
              ll_backend__unify_gen__V_37_37 = (MR_String) "branch away if ";
#line 316 "unify_gen.m"
              ll_backend__unify_gen__TheRval_33 = ll_backend__unify_gen__TestRval_32;
#line 6728 "ll_backend.unify_gen.c"
            }
#line 6730 "ll_backend.unify_gen.c"
            break;
#line 6732 "ll_backend.unify_gen.c"
        }
#line 308 "unify_gen.m"
        {
#line 308 "unify_gen.m"
          ll_backend__unify_gen__Comment_29 = mercury__string__f_43_43_2_f_0(ll_backend__unify_gen__V_37_37, ll_backend__unify_gen__V_38_38);
        }
#line 322 "unify_gen.m"
        {
#line 322 "unify_gen.m"
          ll_backend__unify_gen__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 322 "unify_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_43_43, 0) = ((MR_Box) (*ll_backend__unify_gen__ElseLabel_19));
#line 322 "unify_gen.m"
        }
#line 322 "unify_gen.m"
        {
#line 322 "unify_gen.m"
          ll_backend__unify_gen__V_42_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 322 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_42_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 322 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_42_42, 1) = ((MR_Box) (ll_backend__unify_gen__TheRval_33));
#line 322 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_42_42, 2) = ((MR_Box) (ll_backend__unify_gen__V_43_43));
#line 322 "unify_gen.m"
        }
#line 322 "unify_gen.m"
        {
#line 322 "unify_gen.m"
          ll_backend__unify_gen__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 322 "unify_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_41_41, 0) = ((MR_Box) (ll_backend__unify_gen__V_42_42));
#line 322 "unify_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_41_41, 1) = ((MR_Box) (ll_backend__unify_gen__Comment_29));
#line 322 "unify_gen.m"
        }
#line 321 "unify_gen.m"
        {
#line 321 "unify_gen.m"
          *ll_backend__unify_gen__Code_20 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__unify_gen__V_41_41)));
        }
#line 303 "unify_gen.m"
      }
#line 297 "unify_gen.m"
  }
#line 50 "unify_gen.m"
}

#line 2195 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__shift_combine_arg__2195__1_2_p_0(
#line 2195 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__Shift_12,
#line 2195 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__HeadVar__2_41)
#line 2195 "unify_gen.m"
{
#line 2195 "unify_gen.m"
  {
#line 2195 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__Shift_12 == ll_backend__unify_gen__HeadVar__2_41);

#line 2195 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 2195 "unify_gen.m"
  }
#line 2195 "unify_gen.m"
}

#line 2024 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_ground_term_conjunct_tag__2024__1_2_p_0(
#line 2024 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Lang_21,
#line 2024 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_119)
#line 2024 "unify_gen.m"
{
#line 2024 "unify_gen.m"
  {
#line 2024 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__Lang_21 == ll_backend__unify_gen__HeadVar__2_119);

#line 2024 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 2024 "unify_gen.m"
  }
#line 2024 "unify_gen.m"
}

#line 1847 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_const_struct_arg_tag__1847__1_2_p_0(
#line 1847 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Lang_17,
#line 1847 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_71)
#line 1847 "unify_gen.m"
{
#line 1847 "unify_gen.m"
  {
#line 1847 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__Lang_17 == ll_backend__unify_gen__HeadVar__2_71);

#line 1847 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 1847 "unify_gen.m"
  }
#line 1847 "unify_gen.m"
}

#line 632 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__632__1_2_p_0(
#line 632 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Args_17,
#line 632 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_150)
#line 632 "unify_gen.m"
{
#line 632 "unify_gen.m"
  {
#line 632 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;

#line 632 "unify_gen.m"
    {
#line 632 "unify_gen.m"
      return ll_backend__unify_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[1], ((MR_Box) (ll_backend__unify_gen__Args_17)), ((MR_Box) (ll_backend__unify_gen__HeadVar__2_150)));
    }
#line 632 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 632 "unify_gen.m"
  }
#line 632 "unify_gen.m"
}

#line 660 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__660__1_2_p_0(
#line 660 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Args_17,
#line 660 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_127)
#line 660 "unify_gen.m"
{
#line 660 "unify_gen.m"
  {
#line 660 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;

#line 660 "unify_gen.m"
    {
#line 660 "unify_gen.m"
      return ll_backend__unify_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[1], ((MR_Box) (ll_backend__unify_gen__Args_17)), ((MR_Box) (ll_backend__unify_gen__HeadVar__2_127)));
    }
#line 660 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 660 "unify_gen.m"
  }
#line 660 "unify_gen.m"
}

#line 687 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__687__1_2_p_0(
#line 687 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Args_17,
#line 687 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_107)
#line 687 "unify_gen.m"
{
#line 687 "unify_gen.m"
  {
#line 687 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;

#line 687 "unify_gen.m"
    {
#line 687 "unify_gen.m"
      return ll_backend__unify_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[1], ((MR_Box) (ll_backend__unify_gen__Args_17)), ((MR_Box) (ll_backend__unify_gen__HeadVar__2_107)));
    }
#line 687 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 687 "unify_gen.m"
  }
#line 687 "unify_gen.m"
}

#line 695 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__695__1_2_p_0(
#line 695 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Args_17,
#line 695 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_100)
#line 695 "unify_gen.m"
{
#line 695 "unify_gen.m"
  {
#line 695 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;

#line 695 "unify_gen.m"
    {
#line 695 "unify_gen.m"
      return ll_backend__unify_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[1], ((MR_Box) (ll_backend__unify_gen__Args_17)), ((MR_Box) (ll_backend__unify_gen__HeadVar__2_100)));
    }
#line 695 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 695 "unify_gen.m"
  }
#line 695 "unify_gen.m"
}

#line 549 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__549__1_2_p_0(
#line 549 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Lang_29,
#line 549 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_200)
#line 549 "unify_gen.m"
{
#line 549 "unify_gen.m"
  {
#line 549 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__Lang_29 == ll_backend__unify_gen__HeadVar__2_200);

#line 549 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 549 "unify_gen.m"
  }
#line 549 "unify_gen.m"
}

#line 670 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__670__1_2_p_0(
#line 670 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Args_17,
#line 670 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_117)
#line 670 "unify_gen.m"
{
#line 670 "unify_gen.m"
  {
#line 670 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;

#line 670 "unify_gen.m"
    {
#line 670 "unify_gen.m"
      return ll_backend__unify_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[1], ((MR_Box) (ll_backend__unify_gen__Args_17)), ((MR_Box) (ll_backend__unify_gen__HeadVar__2_117)));
    }
#line 670 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 670 "unify_gen.m"
  }
#line 670 "unify_gen.m"
}

#line 710 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__710__1_2_p_0(
#line 710 "unify_gen.m"
  MR_Word ll_backend__unify_gen__MaybeSize_22,
#line 710 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_91)
#line 710 "unify_gen.m"
{
#line 710 "unify_gen.m"
  {
#line 710 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;

#line 710 "unify_gen.m"
    {
#line 710 "unify_gen.m"
      return ll_backend__unify_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[3], ((MR_Box) (ll_backend__unify_gen__MaybeSize_22)), ((MR_Box) (ll_backend__unify_gen__HeadVar__2_91)));
    }
#line 710 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 710 "unify_gen.m"
  }
#line 710 "unify_gen.m"
}

#line 708 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__708__1_2_p_0(
#line 708 "unify_gen.m"
  MR_Word ll_backend__unify_gen__TakeAddr_21,
#line 708 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_86)
#line 708 "unify_gen.m"
{
#line 708 "unify_gen.m"
  {
#line 708 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;

#line 708 "unify_gen.m"
    {
#line 708 "unify_gen.m"
      return ll_backend__unify_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[2], ((MR_Box) (ll_backend__unify_gen__TakeAddr_21)), ((MR_Box) (ll_backend__unify_gen__HeadVar__2_86)));
    }
#line 708 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 708 "unify_gen.m"
  }
#line 708 "unify_gen.m"
}

#line 642 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__642__1_2_p_0(
#line 642 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Args_17,
#line 642 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_139)
#line 642 "unify_gen.m"
{
#line 642 "unify_gen.m"
  {
#line 642 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;

#line 642 "unify_gen.m"
    {
#line 642 "unify_gen.m"
      return ll_backend__unify_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[1], ((MR_Box) (ll_backend__unify_gen__Args_17)), ((MR_Box) (ll_backend__unify_gen__HeadVar__2_139)));
    }
#line 642 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 642 "unify_gen.m"
  }
#line 642 "unify_gen.m"
}

#line 487 "unify_gen.m"
static MR_Word MR_CALL 
ll_backend__unify_gen__IntroducedFrom__func__raw_tag_test__487__1_3_f_0(
#line 487 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Rval_4,
#line 487 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_48,
#line 487 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__3_49)
#line 487 "unify_gen.m"
{
#line 487 "unify_gen.m"
  {
#line 487 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 487 "unify_gen.m"
    MR_Word ll_backend__unify_gen__HeadVar__4_50;
#line 487 "unify_gen.m"
    MR_Word ll_backend__unify_gen__EqualRA_46;
#line 487 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_51_51;
#line 487 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_53_53;

#line 488 "unify_gen.m"
    {
#line 488 "unify_gen.m"
      ll_backend__unify_gen__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 488 "unify_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_51_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
#line 488 "unify_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_51_51, 1) = ((MR_Box) (ll_backend__unify_gen__HeadVar__2_48));
#line 488 "unify_gen.m"
    }
#line 488 "unify_gen.m"
    {
#line 488 "unify_gen.m"
      ll_backend__unify_gen__raw_tag_test_3_p_0(ll_backend__unify_gen__Rval_4, ll_backend__unify_gen__V_51_51, &ll_backend__unify_gen__EqualRA_46);
    }
#line 490 "unify_gen.m"
    {
#line 490 "unify_gen.m"
      ll_backend__unify_gen__V_53_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 490 "unify_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_53_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 490 "unify_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_53_53, 1) = ((MR_Box) ((MR_Integer) 7));
#line 490 "unify_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_53_53, 2) = ((MR_Box) (ll_backend__unify_gen__EqualRA_46));
#line 490 "unify_gen.m"
    }
#line 489 "unify_gen.m"
    {
#line 489 "unify_gen.m"
      ll_backend__unify_gen__HeadVar__4_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 489 "unify_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__HeadVar__4_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 489 "unify_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__HeadVar__4_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
#line 489 "unify_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__HeadVar__4_50, 2) = ((MR_Box) (ll_backend__unify_gen__V_53_53));
#line 489 "unify_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__HeadVar__4_50, 3) = ((MR_Box) (ll_backend__unify_gen__HeadVar__3_49));
#line 489 "unify_gen.m"
    }
#line 487 "unify_gen.m"
    return ll_backend__unify_gen__HeadVar__4_50;
#line 487 "unify_gen.m"
  }
#line 487 "unify_gen.m"
}

#line 418 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__raw_tag_test__418__1_2_p_0(
#line 418 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ForeignLang_10,
#line 418 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_113)
#line 418 "unify_gen.m"
{
#line 418 "unify_gen.m"
  {
#line 418 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__ForeignLang_10 == ll_backend__unify_gen__HeadVar__2_113);

#line 418 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 418 "unify_gen.m"
  }
#line 418 "unify_gen.m"
}

#line 225 "unify_gen.m"
static MR_Word MR_CALL 
ll_backend__unify_gen__IntroducedFrom__func__get_cons_arg_widths__225__1_1_f_0(
#line 225 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__1_21)
#line 225 "unify_gen.m"
{
#line 225 "unify_gen.m"
  {
#line 225 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 225 "unify_gen.m"
    MR_Word ll_backend__unify_gen__HeadVar__2_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__HeadVar__1_21, (MR_Integer) 2)));
#line 225 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__HeadVar__1_21, (MR_Integer) 0)));
#line 225 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__HeadVar__1_21, (MR_Integer) 1)));
#line 225 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__HeadVar__1_21, (MR_Integer) 3)));

#line 225 "unify_gen.m"
    return ll_backend__unify_gen__HeadVar__2_22;
#line 225 "unify_gen.m"
  }
#line 225 "unify_gen.m"
}

#line 110 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen____Compare____uni_val_0_0(
#line 110 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__HeadVar__1_1,
#line 110 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_2,
#line 110 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__3_3)
#line 110 "unify_gen.m"
{
#line 110 "unify_gen.m"
  {
#line 110 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 110 "unify_gen.m"
    MR_Integer ll_backend__unify_gen__CastX_17 = (MR_Integer) ll_backend__unify_gen__HeadVar__2_2;
#line 110 "unify_gen.m"
    MR_Integer ll_backend__unify_gen__CastY_18 = (MR_Integer) ll_backend__unify_gen__HeadVar__3_3;

#line 110 "unify_gen.m"
    ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__CastX_17 == ll_backend__unify_gen__CastY_18);
#line 110 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 7217 "ll_backend.unify_gen.c"
      *ll_backend__unify_gen__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "unify_gen.m"
    else
#line 110 "unify_gen.m"
    if (((MR_tag((MR_Word) ll_backend__unify_gen__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 110 "unify_gen.m"
      {
#line 110 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 110 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__2_2, (MR_Integer) 0)));

#line 110 "unify_gen.m"
        if (((MR_tag((MR_Word) ll_backend__unify_gen__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 110 "unify_gen.m"
          {
#line 110 "unify_gen.m"
            MR_Word ll_backend__unify_gen__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__3_3, (MR_Integer) 0)));
#line 110 "unify_gen.m"
            MR_Word ll_backend__unify_gen__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__3_3, (MR_Integer) 1)));
#line 110 "unify_gen.m"
            MR_Word ll_backend__unify_gen__V_16_16;

#line 110 "unify_gen.m"
            {
#line 110 "unify_gen.m"
              ll_backend__llds____Compare____lval_0_0(&ll_backend__unify_gen__V_16_16, ll_backend__unify_gen__V_23_23, ll_backend__unify_gen__V_14_14);
            }
#line 7246 "ll_backend.unify_gen.c"
            ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__V_16_16 == (MR_Integer) 0);
#line 110 "unify_gen.m"
            ll_backend__unify_gen__succeeded = !(ll_backend__unify_gen__succeeded);
#line 110 "unify_gen.m"
            if (ll_backend__unify_gen__succeeded)
#line 110 "unify_gen.m"
              *ll_backend__unify_gen__HeadVar__1_1 = ll_backend__unify_gen__V_16_16;
#line 110 "unify_gen.m"
            else
#line 110 "unify_gen.m"
              {
#line 110 "unify_gen.m"
                parse_tree__prog_data____Compare____arg_width_0_0(ll_backend__unify_gen__HeadVar__1_1, ll_backend__unify_gen__V_22_22, ll_backend__unify_gen__V_15_15);
#line 110 "unify_gen.m"
                return;
              }
#line 110 "unify_gen.m"
          }
#line 110 "unify_gen.m"
        else
#line 7267 "ll_backend.unify_gen.c"
          *ll_backend__unify_gen__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "unify_gen.m"
      }
#line 110 "unify_gen.m"
    else
#line 110 "unify_gen.m"
      {
#line 110 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__HeadVar__2_2, (MR_Integer) 0)));

#line 110 "unify_gen.m"
        if (((MR_tag((MR_Word) ll_backend__unify_gen__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7280 "ll_backend.unify_gen.c"
          *ll_backend__unify_gen__HeadVar__1_1 = (MR_Integer) 1;
#line 110 "unify_gen.m"
        else
#line 110 "unify_gen.m"
          {
#line 110 "unify_gen.m"
            MR_Word ll_backend__unify_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__HeadVar__3_3, (MR_Integer) 0)));

#line 110 "unify_gen.m"
            {
#line 110 "unify_gen.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], ll_backend__unify_gen__HeadVar__1_1, ((MR_Box) (ll_backend__unify_gen__V_24_24)), ((MR_Box) (ll_backend__unify_gen__V_5_5)));
#line 110 "unify_gen.m"
              return;
            }
#line 110 "unify_gen.m"
          }
#line 110 "unify_gen.m"
      }
#line 110 "unify_gen.m"
  }
#line 110 "unify_gen.m"
}

#line 110 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____uni_val_0_0(
#line 110 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__1_1,
#line 110 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_2)
#line 110 "unify_gen.m"
{
#line 110 "unify_gen.m"
  {
#line 110 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 110 "unify_gen.m"
    MR_Integer ll_backend__unify_gen__CastX_9 = (MR_Integer) ll_backend__unify_gen__HeadVar__1_1;
#line 110 "unify_gen.m"
    MR_Integer ll_backend__unify_gen__CastY_10 = (MR_Integer) ll_backend__unify_gen__HeadVar__2_2;

#line 110 "unify_gen.m"
    ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__CastX_9 == ll_backend__unify_gen__CastY_10);
#line 110 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 110 "unify_gen.m"
      ll_backend__unify_gen__succeeded = MR_TRUE;
#line 110 "unify_gen.m"
    else
#line 110 "unify_gen.m"
    if (((MR_tag((MR_Word) ll_backend__unify_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 110 "unify_gen.m"
      {
#line 110 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 110 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 110 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_7_7;
#line 110 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_8_8;

#line 110 "unify_gen.m"
        ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 110 "unify_gen.m"
        if (ll_backend__unify_gen__succeeded)
#line 110 "unify_gen.m"
          {
#line 110 "unify_gen.m"
            ll_backend__unify_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 110 "unify_gen.m"
            ll_backend__unify_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 7354 "ll_backend.unify_gen.c"
            {
#line 7356 "ll_backend.unify_gen.c"
              ll_backend__unify_gen__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__unify_gen__V_5_5, ll_backend__unify_gen__V_7_7);
            }
#line 110 "unify_gen.m"
            if (ll_backend__unify_gen__succeeded)
#line 7361 "ll_backend.unify_gen.c"
              {
#line 7363 "ll_backend.unify_gen.c"
                return ll_backend__unify_gen__succeeded = parse_tree__prog_data____Unify____arg_width_0_0(ll_backend__unify_gen__V_6_6, ll_backend__unify_gen__V_8_8);
              }
#line 110 "unify_gen.m"
          }
#line 110 "unify_gen.m"
      }
#line 110 "unify_gen.m"
    else
#line 110 "unify_gen.m"
      {
#line 110 "unify_gen.m"
        MR_Word ll_backend__unify_gen__TypeInfo_13_13;
#line 110 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 110 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_4_4;

#line 110 "unify_gen.m"
        ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 110 "unify_gen.m"
        if (ll_backend__unify_gen__succeeded)
#line 110 "unify_gen.m"
          {
#line 110 "unify_gen.m"
            ll_backend__unify_gen__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 7389 "ll_backend.unify_gen.c"
            ll_backend__unify_gen__TypeInfo_13_13 = (MR_Word) &ll_backend__unify_gen_scalar_common_1[0];
#line 7391 "ll_backend.unify_gen.c"
            {
#line 7393 "ll_backend.unify_gen.c"
              return ll_backend__unify_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__unify_gen__TypeInfo_13_13, ((MR_Box) (ll_backend__unify_gen__V_3_3)), ((MR_Box) (ll_backend__unify_gen__V_4_4)));
            }
#line 110 "unify_gen.m"
          }
#line 110 "unify_gen.m"
      }
#line 110 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 110 "unify_gen.m"
  }
#line 110 "unify_gen.m"
}

#line 38 "unify_gen.m"
void MR_CALL 
ll_backend__unify_gen____Compare____test_sense_0_0(
#line 38 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__HeadVar__1_1,
#line 38 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_2,
#line 38 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__3_3)
#line 38 "unify_gen.m"
{
#line 38 "unify_gen.m"
  {
#line 38 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 38 "unify_gen.m"
    MR_Integer ll_backend__unify_gen__Cast_HeadVar1_4 = (MR_Integer) ll_backend__unify_gen__HeadVar__2_2;
#line 38 "unify_gen.m"
    MR_Integer ll_backend__unify_gen__Cast_HeadVar2_5 = (MR_Integer) ll_backend__unify_gen__HeadVar__3_3;

#line 38 "unify_gen.m"
    {
#line 38 "unify_gen.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__unify_gen__HeadVar__1_1, ll_backend__unify_gen__Cast_HeadVar1_4, ll_backend__unify_gen__Cast_HeadVar2_5);
#line 38 "unify_gen.m"
      return;
    }
#line 38 "unify_gen.m"
  }
#line 38 "unify_gen.m"
}

#line 38 "unify_gen.m"
MR_bool MR_CALL 
ll_backend__unify_gen____Unify____test_sense_0_0(
#line 38 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_1,
#line 38 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_2)
#line 38 "unify_gen.m"
{
#line 7448 "ll_backend.unify_gen.c"
  {
#line 7450 "ll_backend.unify_gen.c"
    MR_bool ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__HeadVar__2_1 == ll_backend__unify_gen__HeadVar__2_2);

#line 7453 "ll_backend.unify_gen.c"
    return ll_backend__unify_gen__succeeded;
#line 7455 "ll_backend.unify_gen.c"
  }
#line 38 "unify_gen.m"
}

#line 116 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen____Compare____field_addr_0_0(
#line 116 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__HeadVar__1_1,
#line 116 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_2,
#line 116 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__3_3)
#line 116 "unify_gen.m"
{
#line 116 "unify_gen.m"
  {
#line 116 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 116 "unify_gen.m"
    MR_Integer ll_backend__unify_gen__CastX_9 = (MR_Integer) ll_backend__unify_gen__HeadVar__2_2;
#line 116 "unify_gen.m"
    MR_Integer ll_backend__unify_gen__CastY_10 = (MR_Integer) ll_backend__unify_gen__HeadVar__3_3;

#line 116 "unify_gen.m"
    ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__CastX_9 == ll_backend__unify_gen__CastY_10);
#line 116 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 7484 "ll_backend.unify_gen.c"
      *ll_backend__unify_gen__HeadVar__1_1 = (MR_Integer) 0;
#line 116 "unify_gen.m"
    else
#line 116 "unify_gen.m"
      {
#line 116 "unify_gen.m"
        MR_Integer ll_backend__unify_gen__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 116 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 116 "unify_gen.m"
        MR_Integer ll_backend__unify_gen__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__HeadVar__3_3, (MR_Integer) 0)));
#line 116 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__HeadVar__3_3, (MR_Integer) 1)));
#line 116 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_8_8;

#line 116 "unify_gen.m"
        {
#line 116 "unify_gen.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__unify_gen__V_8_8, ll_backend__unify_gen__V_4_4, ll_backend__unify_gen__V_6_6);
        }
#line 7506 "ll_backend.unify_gen.c"
        ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__V_8_8 == (MR_Integer) 0);
#line 116 "unify_gen.m"
        ll_backend__unify_gen__succeeded = !(ll_backend__unify_gen__succeeded);
#line 116 "unify_gen.m"
        if (ll_backend__unify_gen__succeeded)
#line 116 "unify_gen.m"
          *ll_backend__unify_gen__HeadVar__1_1 = ll_backend__unify_gen__V_8_8;
#line 116 "unify_gen.m"
        else
#line 116 "unify_gen.m"
          {
#line 116 "unify_gen.m"
            {
#line 116 "unify_gen.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], ll_backend__unify_gen__HeadVar__1_1, ((MR_Box) (ll_backend__unify_gen__V_5_5)), ((MR_Box) (ll_backend__unify_gen__V_7_7)));
#line 116 "unify_gen.m"
              return;
            }
#line 116 "unify_gen.m"
          }
#line 116 "unify_gen.m"
      }
#line 116 "unify_gen.m"
  }
#line 116 "unify_gen.m"
}

#line 116 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____field_addr_0_0(
#line 116 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__1_1,
#line 116 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_2)
#line 116 "unify_gen.m"
{
#line 116 "unify_gen.m"
  {
#line 116 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 116 "unify_gen.m"
    MR_Integer ll_backend__unify_gen__CastX_7 = (MR_Integer) ll_backend__unify_gen__HeadVar__1_1;
#line 116 "unify_gen.m"
    MR_Integer ll_backend__unify_gen__CastY_8 = (MR_Integer) ll_backend__unify_gen__HeadVar__2_2;

#line 116 "unify_gen.m"
    ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__CastX_7 == ll_backend__unify_gen__CastY_8);
#line 116 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 116 "unify_gen.m"
      ll_backend__unify_gen__succeeded = MR_TRUE;
#line 116 "unify_gen.m"
    else
#line 116 "unify_gen.m"
      {
#line 116 "unify_gen.m"
        MR_Word ll_backend__unify_gen__TypeInfo_9_9;
#line 116 "unify_gen.m"
        MR_Integer ll_backend__unify_gen__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 116 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 116 "unify_gen.m"
        MR_Integer ll_backend__unify_gen__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 116 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__HeadVar__2_2, (MR_Integer) 1)));

#line 7573 "ll_backend.unify_gen.c"
        ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__V_3_3 == ll_backend__unify_gen__V_5_5);
#line 116 "unify_gen.m"
        if (ll_backend__unify_gen__succeeded)
#line 116 "unify_gen.m"
          {
#line 7579 "ll_backend.unify_gen.c"
            ll_backend__unify_gen__TypeInfo_9_9 = (MR_Word) &ll_backend__unify_gen_scalar_common_1[0];
#line 7581 "ll_backend.unify_gen.c"
            {
#line 7583 "ll_backend.unify_gen.c"
              return ll_backend__unify_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__unify_gen__TypeInfo_9_9, ((MR_Box) (ll_backend__unify_gen__V_4_4)), ((MR_Box) (ll_backend__unify_gen__V_6_6)));
            }
#line 116 "unify_gen.m"
          }
#line 116 "unify_gen.m"
      }
#line 116 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 116 "unify_gen.m"
  }
#line 116 "unify_gen.m"
}

#line 1969 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen____Compare____active_ground_term_map_0_0(
#line 1969 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__HeadVar__1_1,
#line 1969 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_2,
#line 1969 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__3_3)
#line 1969 "unify_gen.m"
{
#line 1969 "unify_gen.m"
  {
#line 1969 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 1969 "unify_gen.m"
    MR_Word ll_backend__unify_gen__Cast_HeadVar1_4 = ll_backend__unify_gen__HeadVar__2_2;
#line 1969 "unify_gen.m"
    MR_Word ll_backend__unify_gen__Cast_HeadVar2_5 = ll_backend__unify_gen__HeadVar__3_3;

#line 1969 "unify_gen.m"
    {
#line 1969 "unify_gen.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_2[2], ll_backend__unify_gen__HeadVar__1_1, ((MR_Box) (ll_backend__unify_gen__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__unify_gen__Cast_HeadVar2_5)));
#line 1969 "unify_gen.m"
      return;
    }
#line 1969 "unify_gen.m"
  }
#line 1969 "unify_gen.m"
}

#line 1969 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____active_ground_term_map_0_0(
#line 1969 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__1_1,
#line 1969 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_2)
#line 1969 "unify_gen.m"
{
#line 1969 "unify_gen.m"
  {
#line 1969 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 1969 "unify_gen.m"
    MR_Word ll_backend__unify_gen__Cast_HeadVar1_3 = ll_backend__unify_gen__HeadVar__1_1;
#line 1969 "unify_gen.m"
    MR_Word ll_backend__unify_gen__Cast_HeadVar2_4 = ll_backend__unify_gen__HeadVar__2_2;

#line 1969 "unify_gen.m"
    {
#line 1969 "unify_gen.m"
      return ll_backend__unify_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_2[2], ((MR_Box) (ll_backend__unify_gen__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__unify_gen__Cast_HeadVar2_4)));
    }
#line 1969 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 1969 "unify_gen.m"
  }
#line 1969 "unify_gen.m"
}

#line 2265 "unify_gen.m"
static MR_Word MR_CALL 
ll_backend__unify_gen__bitwise_or_cell_arg_2_f_0(
#line 2265 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CellArgA_4,
#line 2265 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CellArgB_5)
#line 2265 "unify_gen.m"
{
#line 2270 "unify_gen.m"
  {
#line 2270 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 2270 "unify_gen.m"
    MR_Word ll_backend__unify_gen__CellArg_6;
#line 2270 "unify_gen.m"
    MR_Word ll_backend__unify_gen__CellArgPrime_7;

#line 2279 "unify_gen.m"
    if ((ll_backend__unify_gen__CellArgA_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2279 "unify_gen.m"
      if ((ll_backend__unify_gen__CellArgB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2293 "unify_gen.m"
        {
#line 2293 "unify_gen.m"
          ll_backend__unify_gen__CellArgPrime_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2293 "unify_gen.m"
          ll_backend__unify_gen__succeeded = MR_TRUE;
#line 2293 "unify_gen.m"
        }
#line 2279 "unify_gen.m"
      else
#line 2279 "unify_gen.m"
      if (((MR_tag((MR_Word) ll_backend__unify_gen__CellArgB_5)) == (MR_mktag((MR_Integer) 1))))
#line 2289 "unify_gen.m"
        {
#line 2289 "unify_gen.m"
          MR_Word ll_backend__unify_gen__Rval_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArgB_5, (MR_Integer) 0)));
#line 2290 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArgB_5, (MR_Integer) 1)));

#line 2291 "unify_gen.m"
          {
#line 2291 "unify_gen.m"
            ll_backend__unify_gen__CellArgPrime_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2291 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArgPrime_7, 0) = ((MR_Box) (ll_backend__unify_gen__Rval_26));
#line 2291 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArgPrime_7, 1) = ((MR_Box) ((MR_Integer) 1));
#line 2291 "unify_gen.m"
          }
#line 2289 "unify_gen.m"
          ll_backend__unify_gen__succeeded = MR_TRUE;
#line 2289 "unify_gen.m"
        }
#line 2279 "unify_gen.m"
      else
#line 2279 "unify_gen.m"
        ll_backend__unify_gen__succeeded = MR_FALSE;
#line 2279 "unify_gen.m"
    else
#line 2279 "unify_gen.m"
    if (((MR_tag((MR_Word) ll_backend__unify_gen__CellArgA_4)) == (MR_mktag((MR_Integer) 1))))
#line 2279 "unify_gen.m"
      {
#line 2279 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArgA_4, (MR_Integer) 1)));
#line 2279 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArgA_4, (MR_Integer) 0)));

#line 2279 "unify_gen.m"
        if ((ll_backend__unify_gen__CellArgB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2285 "unify_gen.m"
          {
#line 2287 "unify_gen.m"
            {
#line 2287 "unify_gen.m"
              ll_backend__unify_gen__CellArgPrime_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2287 "unify_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArgPrime_7, 0) = ((MR_Box) (ll_backend__unify_gen__V_28_28));
#line 2287 "unify_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArgPrime_7, 1) = ((MR_Box) ((MR_Integer) 1));
#line 2287 "unify_gen.m"
            }
#line 2285 "unify_gen.m"
            ll_backend__unify_gen__succeeded = MR_TRUE;
#line 2285 "unify_gen.m"
          }
#line 2279 "unify_gen.m"
        else
#line 2279 "unify_gen.m"
        if (((MR_tag((MR_Word) ll_backend__unify_gen__CellArgB_5)) == (MR_mktag((MR_Integer) 1))))
#line 2279 "unify_gen.m"
          {
#line 2279 "unify_gen.m"
            MR_Word ll_backend__unify_gen__RvalB_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArgB_5, (MR_Integer) 0)));
#line 2279 "unify_gen.m"
            MR_Word ll_backend__unify_gen__CompletenessB_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArgB_5, (MR_Integer) 1)));
#line 2279 "unify_gen.m"
            MR_Word ll_backend__unify_gen__Expr_18;
#line 2279 "unify_gen.m"
            MR_Word ll_backend__unify_gen__Completeness_19;

#line 2281 "unify_gen.m"
            {
#line 2281 "unify_gen.m"
              ll_backend__unify_gen__Expr_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2281 "unify_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Expr_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2281 "unify_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Expr_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
#line 2281 "unify_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Expr_18, 2) = ((MR_Box) (ll_backend__unify_gen__V_28_28));
#line 2281 "unify_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Expr_18, 3) = ((MR_Box) (ll_backend__unify_gen__RvalB_16));
#line 2281 "unify_gen.m"
            }
#line 2300 "unify_gen.m"
#line 2300 "unify_gen.m"
            switch (ll_backend__unify_gen__V_27_27) {
#line 2300 "unify_gen.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 2300 "unify_gen.m"
              case (MR_Integer) 0:
#line 2300 "unify_gen.m"
#line 2300 "unify_gen.m"
                switch (ll_backend__unify_gen__CompletenessB_17) {
#line 2300 "unify_gen.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 2300 "unify_gen.m"
                  case (MR_Integer) 0:
#line 2300 "unify_gen.m"
                    ll_backend__unify_gen__Completeness_19 = (MR_Integer) 0;
#line 2300 "unify_gen.m"
                    break;
#line 2300 "unify_gen.m"
                  case (MR_Integer) 1:
#line 2302 "unify_gen.m"
                    ll_backend__unify_gen__Completeness_19 = (MR_Integer) 1;
#line 2300 "unify_gen.m"
                    break;
#line 2300 "unify_gen.m"
                }
#line 2300 "unify_gen.m"
                break;
#line 2300 "unify_gen.m"
              case (MR_Integer) 1:
#line 2300 "unify_gen.m"
#line 2300 "unify_gen.m"
                switch (ll_backend__unify_gen__CompletenessB_17) {
#line 2300 "unify_gen.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 2300 "unify_gen.m"
                  case (MR_Integer) 0:
#line 2301 "unify_gen.m"
                    ll_backend__unify_gen__Completeness_19 = (MR_Integer) 1;
#line 2300 "unify_gen.m"
                    break;
#line 2300 "unify_gen.m"
                  case (MR_Integer) 1:
#line 2303 "unify_gen.m"
                    ll_backend__unify_gen__Completeness_19 = (MR_Integer) 1;
#line 2300 "unify_gen.m"
                    break;
#line 2300 "unify_gen.m"
                }
#line 2300 "unify_gen.m"
                break;
#line 2300 "unify_gen.m"
            }
#line 2283 "unify_gen.m"
            {
#line 2283 "unify_gen.m"
              ll_backend__unify_gen__CellArgPrime_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2283 "unify_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArgPrime_7, 0) = ((MR_Box) (ll_backend__unify_gen__Expr_18));
#line 2283 "unify_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArgPrime_7, 1) = ((MR_Box) (ll_backend__unify_gen__Completeness_19));
#line 2283 "unify_gen.m"
            }
#line 2279 "unify_gen.m"
            ll_backend__unify_gen__succeeded = MR_TRUE;
#line 2279 "unify_gen.m"
          }
#line 2279 "unify_gen.m"
        else
#line 2279 "unify_gen.m"
          ll_backend__unify_gen__succeeded = MR_FALSE;
#line 2279 "unify_gen.m"
      }
#line 2279 "unify_gen.m"
    else
#line 2279 "unify_gen.m"
      ll_backend__unify_gen__succeeded = MR_FALSE;
#line 2270 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 2269 "unify_gen.m"
      ll_backend__unify_gen__CellArg_6 = ll_backend__unify_gen__CellArgPrime_7;
#line 2270 "unify_gen.m"
    else
#line 2271 "unify_gen.m"
      {
#line 2271 "unify_gen.m"
        {
#line 2271 "unify_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "function \140ll_backend.unify_gen.bitwise_or_cell_arg\'/2", (MR_String) "invalid combination");
        }
#line 2271 "unify_gen.m"
      }
#line 2270 "unify_gen.m"
    return ll_backend__unify_gen__CellArg_6;
#line 2270 "unify_gen.m"
  }
#line 2265 "unify_gen.m"
}

#line 2260 "unify_gen.m"
static MR_Word MR_CALL 
ll_backend__unify_gen__right_shift_rval_2_f_0(
#line 2260 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Rval_4,
#line 2260 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__Shift_5)
#line 2260 "unify_gen.m"
{
#line 2262 "unify_gen.m"
  {
#line 2262 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 2262 "unify_gen.m"
    MR_Word ll_backend__unify_gen__HeadVar__3_3;
#line 2262 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_7_7;
#line 2262 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_8_8;

#line 2263 "unify_gen.m"
    {
#line 2263 "unify_gen.m"
      ll_backend__unify_gen__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2263 "unify_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_8_8, 0) = ((MR_Box) (ll_backend__unify_gen__Shift_5));
#line 2263 "unify_gen.m"
    }
#line 2263 "unify_gen.m"
    {
#line 2263 "unify_gen.m"
      ll_backend__unify_gen__V_7_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2263 "unify_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_7_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2263 "unify_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_7_7, 1) = ((MR_Box) (ll_backend__unify_gen__V_8_8));
#line 2263 "unify_gen.m"
    }
#line 2263 "unify_gen.m"
    {
#line 2263 "unify_gen.m"
      ll_backend__unify_gen__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2263 "unify_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2263 "unify_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 2263 "unify_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__HeadVar__3_3, 2) = ((MR_Box) (ll_backend__unify_gen__Rval_4));
#line 2263 "unify_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__HeadVar__3_3, 3) = ((MR_Box) (ll_backend__unify_gen__V_7_7));
#line 2263 "unify_gen.m"
    }
#line 2262 "unify_gen.m"
    return ll_backend__unify_gen__HeadVar__3_3;
#line 2262 "unify_gen.m"
  }
#line 2260 "unify_gen.m"
}

#line 2242 "unify_gen.m"
static MR_Word MR_CALL 
ll_backend__unify_gen__maybe_left_shift_rval_2_f_0(
#line 2242 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Rval_4,
#line 2242 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__Shift_5)
#line 2242 "unify_gen.m"
{
#line 2244 "unify_gen.m"
  {
#line 2244 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__Shift_5 == (MR_Integer) 0);
#line 2244 "unify_gen.m"
    MR_Word ll_backend__unify_gen__HeadVar__3_3;

#line 2244 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 2246 "unify_gen.m"
      ll_backend__unify_gen__HeadVar__3_3 = ll_backend__unify_gen__Rval_4;
#line 2244 "unify_gen.m"
    else
#line 2248 "unify_gen.m"
      {
#line 2248 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_7_7;
#line 2248 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_8_8;

#line 2248 "unify_gen.m"
        {
#line 2248 "unify_gen.m"
          ll_backend__unify_gen__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2248 "unify_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_8_8, 0) = ((MR_Box) (ll_backend__unify_gen__Shift_5));
#line 2248 "unify_gen.m"
        }
#line 2248 "unify_gen.m"
        {
#line 2248 "unify_gen.m"
          ll_backend__unify_gen__V_7_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2248 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_7_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2248 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_7_7, 1) = ((MR_Box) (ll_backend__unify_gen__V_8_8));
#line 2248 "unify_gen.m"
        }
#line 2248 "unify_gen.m"
        {
#line 2248 "unify_gen.m"
          ll_backend__unify_gen__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2248 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2248 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 2248 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__HeadVar__3_3, 2) = ((MR_Box) (ll_backend__unify_gen__Rval_4));
#line 2248 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__HeadVar__3_3, 3) = ((MR_Box) (ll_backend__unify_gen__V_7_7));
#line 2248 "unify_gen.m"
        }
#line 2248 "unify_gen.m"
      }
#line 2244 "unify_gen.m"
    return ll_backend__unify_gen__HeadVar__3_3;
#line 2244 "unify_gen.m"
  }
#line 2242 "unify_gen.m"
}

#line 2222 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__shift_combine_rval_type_8_p_0(
#line 2222 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ArgA_9,
#line 2222 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__Shift_10,
#line 2222 "unify_gen.m"
  MR_Word ll_backend__unify_gen__MaybeArgB_11,
#line 2222 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__FinalArg_12)
#line 2222 "unify_gen.m"
{
#line 2226 "unify_gen.m"
  {
#line 2226 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__Shift_10 == (MR_Integer) 0);
#line 2226 "unify_gen.m"
    MR_Word ll_backend__unify_gen__RvalA_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ArgA_9, (MR_Integer) 0)));
#line 2226 "unify_gen.m"
    MR_Word ll_backend__unify_gen__TypeA_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ArgA_9, (MR_Integer) 1)));
#line 2226 "unify_gen.m"
    MR_Word ll_backend__unify_gen__ShiftRvalA_17;
#line 2226 "unify_gen.m"
    MR_Word ll_backend__unify_gen__FinalRval_20;

#line 2244 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 2246 "unify_gen.m"
      ll_backend__unify_gen__ShiftRvalA_17 = ll_backend__unify_gen__RvalA_15;
#line 2244 "unify_gen.m"
    else
#line 2248 "unify_gen.m"
      {
#line 2248 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_33_33;
#line 2248 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_34_34;

#line 2248 "unify_gen.m"
        {
#line 2248 "unify_gen.m"
          ll_backend__unify_gen__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2248 "unify_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_34_34, 0) = ((MR_Box) (ll_backend__unify_gen__Shift_10));
#line 2248 "unify_gen.m"
        }
#line 2248 "unify_gen.m"
        {
#line 2248 "unify_gen.m"
          ll_backend__unify_gen__V_33_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2248 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_33_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2248 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_33_33, 1) = ((MR_Box) (ll_backend__unify_gen__V_34_34));
#line 2248 "unify_gen.m"
        }
#line 2248 "unify_gen.m"
        {
#line 2248 "unify_gen.m"
          ll_backend__unify_gen__ShiftRvalA_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2248 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ShiftRvalA_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2248 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ShiftRvalA_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 2248 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ShiftRvalA_17, 2) = ((MR_Box) (ll_backend__unify_gen__RvalA_15));
#line 2248 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ShiftRvalA_17, 3) = ((MR_Box) (ll_backend__unify_gen__V_33_33));
#line 2248 "unify_gen.m"
        }
#line 2248 "unify_gen.m"
      }
#line 2236 "unify_gen.m"
    if ((ll_backend__unify_gen__MaybeArgB_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2238 "unify_gen.m"
      ll_backend__unify_gen__FinalRval_20 = ll_backend__unify_gen__ShiftRvalA_17;
#line 2236 "unify_gen.m"
    else
#line 2230 "unify_gen.m"
      {
#line 2230 "unify_gen.m"
        MR_Word ll_backend__unify_gen__RvalB_18;
#line 2230 "unify_gen.m"
        MR_Word ll_backend__unify_gen__TypeB_19;
#line 2230 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__MaybeArgB_11, (MR_Integer) 0)));

#line 2230 "unify_gen.m"
        ll_backend__unify_gen__RvalB_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_25_25, (MR_Integer) 0)));
#line 2230 "unify_gen.m"
        ll_backend__unify_gen__TypeB_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_25_25, (MR_Integer) 1)));
#line 2231 "unify_gen.m"
        ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__TypeA_16 == ll_backend__unify_gen__TypeB_19);
#line 2233 "unify_gen.m"
        if (ll_backend__unify_gen__succeeded)
#line 2232 "unify_gen.m"
          {
#line 2232 "unify_gen.m"
            {
#line 2232 "unify_gen.m"
              ll_backend__unify_gen__FinalRval_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2232 "unify_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__FinalRval_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2232 "unify_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__FinalRval_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
#line 2232 "unify_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__FinalRval_20, 2) = ((MR_Box) (ll_backend__unify_gen__ShiftRvalA_17));
#line 2232 "unify_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__FinalRval_20, 3) = ((MR_Box) (ll_backend__unify_gen__RvalB_18));
#line 2232 "unify_gen.m"
            }
#line 2232 "unify_gen.m"
          }
#line 2233 "unify_gen.m"
        else
#line 2234 "unify_gen.m"
          {
#line 2234 "unify_gen.m"
            {
#line 2234 "unify_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.shift_combine_rval_type\'/8", (MR_String) "mismatched llds_types");
#line 2234 "unify_gen.m"
              return;
            }
#line 2234 "unify_gen.m"
          }
#line 2230 "unify_gen.m"
      }
#line 2240 "unify_gen.m"
    {
#line 2240 "unify_gen.m"
      MR_Word base;
#line 2240 "unify_gen.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2240 "unify_gen.m"
      *ll_backend__unify_gen__FinalArg_12 = base;
#line 2240 "unify_gen.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__unify_gen__FinalRval_20));
#line 2240 "unify_gen.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__unify_gen__TypeA_16));
#line 2240 "unify_gen.m"
    }
#line 2226 "unify_gen.m"
  }
#line 2222 "unify_gen.m"
}

#line 2195 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__shift_combine_arg_9_p_0_1(
#line 2195 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg)
#line 2195 "unify_gen.m"
{
#line 2195 "unify_gen.m"
  {
#line 2195 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 2195 "unify_gen.m"
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;

#line 2195 "unify_gen.m"
    {
#line 2195 "unify_gen.m"
      return ll_backend__unify_gen__succeeded = ll_backend__unify_gen__IntroducedFrom__pred__shift_combine_arg__2195__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 4))));
    }
#line 2195 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 2195 "unify_gen.m"
  }
#line 2195 "unify_gen.m"
}

#line 2159 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__shift_combine_arg_9_p_0(
#line 2159 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CI_10,
#line 2159 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CellArgA_11,
#line 2159 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__Shift_12,
#line 2159 "unify_gen.m"
  MR_Word ll_backend__unify_gen__MaybeCellArgB_13,
#line 2159 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__FinalCellArg_14,
#line 2159 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_Code_0_30,
#line 2159 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_Code_31,
#line 2159 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_32,
#line 2159 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_33)
#line 2159 "unify_gen.m"
{
#line 2170 "unify_gen.m"
  {
#line 2170 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__Shift_12 == (MR_Integer) 0);

#line 2166 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 2167 "unify_gen.m"
      ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__MaybeCellArgB_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2170 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 2169 "unify_gen.m"
      {
#line 2169 "unify_gen.m"
        *ll_backend__unify_gen__FinalCellArg_14 = ll_backend__unify_gen__CellArgA_11;
#line 2169 "unify_gen.m"
        *ll_backend__unify_gen__STATE_VARIABLE_CLD_33 = ll_backend__unify_gen__STATE_VARIABLE_CLD_0_32;
#line 2169 "unify_gen.m"
        *ll_backend__unify_gen__STATE_VARIABLE_Code_31 = ll_backend__unify_gen__STATE_VARIABLE_Code_0_30;
#line 2169 "unify_gen.m"
      }
#line 2170 "unify_gen.m"
    else
#line 2212 "unify_gen.m"
      {
#line 2212 "unify_gen.m"
        MR_Word ll_backend__unify_gen__ShiftCellArgA_21;

#line 2193 "unify_gen.m"
#line 2193 "unify_gen.m"
        switch (MR_tag((MR_Word) ll_backend__unify_gen__CellArgA_11)) {
#line 2193 "unify_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 2193 "unify_gen.m"
          case (MR_Integer) 0:
#line 2207 "unify_gen.m"
            {
#line 2208 "unify_gen.m"
              ll_backend__unify_gen__ShiftCellArgA_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2207 "unify_gen.m"
              *ll_backend__unify_gen__STATE_VARIABLE_Code_31 = ll_backend__unify_gen__STATE_VARIABLE_Code_0_30;
#line 2207 "unify_gen.m"
              *ll_backend__unify_gen__STATE_VARIABLE_CLD_33 = ll_backend__unify_gen__STATE_VARIABLE_CLD_0_32;
#line 2207 "unify_gen.m"
            }
#line 2193 "unify_gen.m"
            break;
#line 2193 "unify_gen.m"
          case (MR_Integer) 1:
#line 2172 "unify_gen.m"
            {
#line 2172 "unify_gen.m"
              MR_Word ll_backend__unify_gen__RvalA_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArgA_11, (MR_Integer) 0)));
#line 2172 "unify_gen.m"
              MR_Word ll_backend__unify_gen__Completeness_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArgA_11, (MR_Integer) 1)));
#line 2186 "unify_gen.m"
              MR_Word ll_backend__unify_gen__Var_19;

#line 2173 "unify_gen.m"
              ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__RvalA_17)) == (MR_mktag((MR_Integer) 1)));
#line 2173 "unify_gen.m"
              if (ll_backend__unify_gen__succeeded)
#line 2173 "unify_gen.m"
                {
#line 2173 "unify_gen.m"
                  ll_backend__unify_gen__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__RvalA_17, (MR_Integer) 0)));
#line 2174 "unify_gen.m"
                  {
#line 2174 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__IsDummy_20;

#line 2174 "unify_gen.m"
                    {
#line 2174 "unify_gen.m"
                      ll_backend__unify_gen__IsDummy_20 = ll_backend__code_info__variable_is_of_dummy_type_2_f_0(ll_backend__unify_gen__CI_10, ll_backend__unify_gen__Var_19);
                    }
#line 2178 "unify_gen.m"
#line 2178 "unify_gen.m"
                    switch (ll_backend__unify_gen__IsDummy_20) {
#line 2178 "unify_gen.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 2178 "unify_gen.m"
                      case (MR_Integer) 0:
#line 2176 "unify_gen.m"
                        {
#line 2177 "unify_gen.m"
                          ll_backend__unify_gen__ShiftCellArgA_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2176 "unify_gen.m"
                          *ll_backend__unify_gen__STATE_VARIABLE_Code_31 = ll_backend__unify_gen__STATE_VARIABLE_Code_0_30;
#line 2176 "unify_gen.m"
                          *ll_backend__unify_gen__STATE_VARIABLE_CLD_33 = ll_backend__unify_gen__STATE_VARIABLE_CLD_0_32;
#line 2176 "unify_gen.m"
                        }
#line 2178 "unify_gen.m"
                        break;
#line 2178 "unify_gen.m"
                      case (MR_Integer) 1:
#line 2179 "unify_gen.m"
                        {
#line 2179 "unify_gen.m"
                          MR_Word ll_backend__unify_gen__VarCode_22;
#line 2179 "unify_gen.m"
                          MR_Word ll_backend__unify_gen__VarRval_23;
#line 2179 "unify_gen.m"
                          MR_Word ll_backend__unify_gen__V_49_49;

#line 2180 "unify_gen.m"
                          {
#line 2180 "unify_gen.m"
                            ll_backend__code_loc_dep__produce_variable_6_p_0(ll_backend__unify_gen__Var_19, &ll_backend__unify_gen__VarCode_22, &ll_backend__unify_gen__VarRval_23, ll_backend__unify_gen__CI_10, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_32, ll_backend__unify_gen__STATE_VARIABLE_CLD_33);
                          }
#line 2245 "unify_gen.m"
                          ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__Shift_12 == (MR_Integer) 0);
#line 2244 "unify_gen.m"
                          if (ll_backend__unify_gen__succeeded)
#line 2246 "unify_gen.m"
                            ll_backend__unify_gen__V_49_49 = ll_backend__unify_gen__VarRval_23;
#line 2244 "unify_gen.m"
                          else
#line 2248 "unify_gen.m"
                            {
#line 2248 "unify_gen.m"
                              MR_Word ll_backend__unify_gen__V_72_72;
#line 2248 "unify_gen.m"
                              MR_Word ll_backend__unify_gen__V_73_73;

#line 2248 "unify_gen.m"
                              {
#line 2248 "unify_gen.m"
                                ll_backend__unify_gen__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2248 "unify_gen.m"
                                MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_73_73, 0) = ((MR_Box) (ll_backend__unify_gen__Shift_12));
#line 2248 "unify_gen.m"
                              }
#line 2248 "unify_gen.m"
                              {
#line 2248 "unify_gen.m"
                                ll_backend__unify_gen__V_72_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2248 "unify_gen.m"
                                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_72_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2248 "unify_gen.m"
                                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_72_72, 1) = ((MR_Box) (ll_backend__unify_gen__V_73_73));
#line 2248 "unify_gen.m"
                              }
#line 2248 "unify_gen.m"
                              {
#line 2248 "unify_gen.m"
                                ll_backend__unify_gen__V_49_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2248 "unify_gen.m"
                                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_49_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2248 "unify_gen.m"
                                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 2248 "unify_gen.m"
                                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_49_49, 2) = ((MR_Box) (ll_backend__unify_gen__VarRval_23));
#line 2248 "unify_gen.m"
                                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_49_49, 3) = ((MR_Box) (ll_backend__unify_gen__V_72_72));
#line 2248 "unify_gen.m"
                              }
#line 2248 "unify_gen.m"
                            }
#line 2181 "unify_gen.m"
                          {
#line 2181 "unify_gen.m"
                            ll_backend__unify_gen__ShiftCellArgA_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2181 "unify_gen.m"
                            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ShiftCellArgA_21, 0) = ((MR_Box) (ll_backend__unify_gen__V_49_49));
#line 2181 "unify_gen.m"
                            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ShiftCellArgA_21, 1) = ((MR_Box) (ll_backend__unify_gen__Completeness_18));
#line 2181 "unify_gen.m"
                          }
#line 2184 "unify_gen.m"
                          {
#line 2184 "unify_gen.m"
                            *ll_backend__unify_gen__STATE_VARIABLE_Code_31 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__unify_gen__STATE_VARIABLE_Code_0_30, ll_backend__unify_gen__VarCode_22);
                          }
#line 2179 "unify_gen.m"
                        }
#line 2178 "unify_gen.m"
                        break;
#line 2178 "unify_gen.m"
                    }
#line 2174 "unify_gen.m"
                  }
#line 2173 "unify_gen.m"
                }
#line 2173 "unify_gen.m"
              else
#line 2190 "unify_gen.m"
                {
#line 2190 "unify_gen.m"
                  MR_Integer ll_backend__unify_gen__Int_24;
#line 2186 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_51_51;

#line 2186 "unify_gen.m"
                  ll_backend__unify_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__unify_gen__RvalA_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__RvalA_17, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 2186 "unify_gen.m"
                  if (ll_backend__unify_gen__succeeded)
#line 2186 "unify_gen.m"
                    {
#line 2186 "unify_gen.m"
                      ll_backend__unify_gen__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__RvalA_17, (MR_Integer) 1)));
#line 2186 "unify_gen.m"
                      ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__V_51_51)) == (MR_mktag((MR_Integer) 1)));
#line 2186 "unify_gen.m"
                      if (ll_backend__unify_gen__succeeded)
#line 2186 "unify_gen.m"
                        ll_backend__unify_gen__Int_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_51_51, (MR_Integer) 0)));
#line 2186 "unify_gen.m"
                    }
#line 2190 "unify_gen.m"
                  if (ll_backend__unify_gen__succeeded)
#line 2187 "unify_gen.m"
                    {
#line 2187 "unify_gen.m"
                      MR_Integer ll_backend__unify_gen__NewInt_25;
#line 2187 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__V_52_52;
#line 2187 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__V_53_53;

#line 2254 "unify_gen.m"
                      ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__Shift_12 == (MR_Integer) 0);
#line 2253 "unify_gen.m"
                      if (ll_backend__unify_gen__succeeded)
#line 2255 "unify_gen.m"
                        ll_backend__unify_gen__NewInt_25 = ll_backend__unify_gen__Int_24;
#line 2253 "unify_gen.m"
                      else
#line 2257 "unify_gen.m"
                        {
#line 2257 "unify_gen.m"
                          ll_backend__unify_gen__NewInt_25 = mercury__int__f_60_60_2_f_0(ll_backend__unify_gen__Int_24, ll_backend__unify_gen__Shift_12);
                        }
#line 2188 "unify_gen.m"
                      {
#line 2188 "unify_gen.m"
                        ll_backend__unify_gen__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2188 "unify_gen.m"
                        MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_53_53, 0) = ((MR_Box) (ll_backend__unify_gen__NewInt_25));
#line 2188 "unify_gen.m"
                      }
#line 2188 "unify_gen.m"
                      {
#line 2188 "unify_gen.m"
                        ll_backend__unify_gen__V_52_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2188 "unify_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_52_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2188 "unify_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_52_52, 1) = ((MR_Box) (ll_backend__unify_gen__V_53_53));
#line 2188 "unify_gen.m"
                      }
#line 2188 "unify_gen.m"
                      {
#line 2188 "unify_gen.m"
                        ll_backend__unify_gen__ShiftCellArgA_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2188 "unify_gen.m"
                        MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ShiftCellArgA_21, 0) = ((MR_Box) (ll_backend__unify_gen__V_52_52));
#line 2188 "unify_gen.m"
                        MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ShiftCellArgA_21, 1) = ((MR_Box) (ll_backend__unify_gen__Completeness_18));
#line 2188 "unify_gen.m"
                      }
#line 2187 "unify_gen.m"
                    }
#line 2190 "unify_gen.m"
                  else
#line 2191 "unify_gen.m"
                    {
#line 2191 "unify_gen.m"
                      {
#line 2191 "unify_gen.m"
                        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.shift_combine_arg\'/9", (MR_String) "non-var or int argument");
#line 2191 "unify_gen.m"
                        return;
                      }
#line 2191 "unify_gen.m"
                    }
#line 2190 "unify_gen.m"
                  *ll_backend__unify_gen__STATE_VARIABLE_CLD_33 = ll_backend__unify_gen__STATE_VARIABLE_CLD_0_32;
#line 2190 "unify_gen.m"
                  *ll_backend__unify_gen__STATE_VARIABLE_Code_31 = ll_backend__unify_gen__STATE_VARIABLE_Code_0_30;
#line 2190 "unify_gen.m"
                }
#line 2172 "unify_gen.m"
            }
#line 2193 "unify_gen.m"
            break;
#line 2193 "unify_gen.m"
          case (MR_Integer) 2:
#line 2194 "unify_gen.m"
            {
#line 2194 "unify_gen.m"
              MR_Word ll_backend__unify_gen__V_37_37;
#line 2194 "unify_gen.m"
              MR_Word ll_backend__unify_gen__RvalA_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__unify_gen__CellArgA_11, (MR_Integer) 0)));
#line 2201 "unify_gen.m"
              MR_Word ll_backend__unify_gen__Var_59;

#line 2195 "unify_gen.m"
              {
#line 2195 "unify_gen.m"
                ll_backend__unify_gen__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 2195 "unify_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_37_37, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_5[6]));
#line 2195 "unify_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_37_37, 1) = ((MR_Box) (ll_backend__unify_gen__shift_combine_arg_9_p_0_1));
#line 2195 "unify_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_37_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2195 "unify_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_37_37, 3) = ((MR_Box) (ll_backend__unify_gen__Shift_12));
#line 2195 "unify_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_37_37, 4) = ((MR_Box) ((MR_Integer) 0));
#line 2195 "unify_gen.m"
              }
#line 2195 "unify_gen.m"
              {
#line 2195 "unify_gen.m"
                mercury__require__expect_4_p_0(ll_backend__unify_gen__V_37_37, (MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.shift_combine_arg\'/9", (MR_String) "double word rval cannot be shifted");
              }
#line 2197 "unify_gen.m"
              ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__RvalA_62)) == (MR_mktag((MR_Integer) 1)));
#line 2197 "unify_gen.m"
              if (ll_backend__unify_gen__succeeded)
#line 2197 "unify_gen.m"
                {
#line 2197 "unify_gen.m"
                  ll_backend__unify_gen__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__RvalA_62, (MR_Integer) 0)));
#line 2198 "unify_gen.m"
                  {
#line 2198 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__VarCode_57;
#line 2198 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__VarRval_58;

#line 2198 "unify_gen.m"
                    {
#line 2198 "unify_gen.m"
                      ll_backend__code_loc_dep__produce_variable_6_p_0(ll_backend__unify_gen__Var_59, &ll_backend__unify_gen__VarCode_57, &ll_backend__unify_gen__VarRval_58, ll_backend__unify_gen__CI_10, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_32, ll_backend__unify_gen__STATE_VARIABLE_CLD_33);
                    }
#line 2199 "unify_gen.m"
                    {
#line 2199 "unify_gen.m"
                      ll_backend__unify_gen__ShiftCellArgA_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2199 "unify_gen.m"
                      MR_hl_field(MR_mktag(2), ll_backend__unify_gen__ShiftCellArgA_21, 0) = ((MR_Box) (ll_backend__unify_gen__VarRval_58));
#line 2199 "unify_gen.m"
                    }
#line 2200 "unify_gen.m"
                    {
#line 2200 "unify_gen.m"
                      *ll_backend__unify_gen__STATE_VARIABLE_Code_31 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__unify_gen__STATE_VARIABLE_Code_0_30, ll_backend__unify_gen__VarCode_57);
                    }
#line 2198 "unify_gen.m"
                  }
#line 2197 "unify_gen.m"
                }
#line 2197 "unify_gen.m"
              else
#line 2203 "unify_gen.m"
                {
#line 2201 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_44_44;
#line 2201 "unify_gen.m"
                  MR_Float ll_backend__unify_gen__V_26_26;

#line 2201 "unify_gen.m"
                  ll_backend__unify_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__unify_gen__RvalA_62)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__RvalA_62, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 2201 "unify_gen.m"
                  if (ll_backend__unify_gen__succeeded)
#line 2201 "unify_gen.m"
                    {
#line 2201 "unify_gen.m"
                      ll_backend__unify_gen__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__RvalA_62, (MR_Integer) 1)));
#line 2201 "unify_gen.m"
                      ll_backend__unify_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__unify_gen__V_44_44)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_44_44, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 2201 "unify_gen.m"
                      if (ll_backend__unify_gen__succeeded)
#line 2201 "unify_gen.m"
                        ll_backend__unify_gen__V_26_26 = MR_unbox_float((MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_44_44, (MR_Integer) 1)));
#line 2201 "unify_gen.m"
                    }
#line 2203 "unify_gen.m"
                  if (ll_backend__unify_gen__succeeded)
#line 2202 "unify_gen.m"
                    ll_backend__unify_gen__ShiftCellArgA_21 = ll_backend__unify_gen__CellArgA_11;
#line 2203 "unify_gen.m"
                  else
#line 2204 "unify_gen.m"
                    {
#line 2204 "unify_gen.m"
                      {
#line 2204 "unify_gen.m"
                        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.shift_combine_arg\'/9", (MR_String) "non-var or float argument");
#line 2204 "unify_gen.m"
                        return;
                      }
#line 2204 "unify_gen.m"
                    }
#line 2203 "unify_gen.m"
                  *ll_backend__unify_gen__STATE_VARIABLE_CLD_33 = ll_backend__unify_gen__STATE_VARIABLE_CLD_0_32;
#line 2203 "unify_gen.m"
                  *ll_backend__unify_gen__STATE_VARIABLE_Code_31 = ll_backend__unify_gen__STATE_VARIABLE_Code_0_30;
#line 2203 "unify_gen.m"
                }
#line 2194 "unify_gen.m"
            }
#line 2193 "unify_gen.m"
            break;
#line 2193 "unify_gen.m"
          case (MR_Integer) 3:
#line 2210 "unify_gen.m"
            {
#line 2211 "unify_gen.m"
              {
#line 2211 "unify_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.shift_combine_arg\'/9", (MR_String) "cell_arg_take_addr");
#line 2211 "unify_gen.m"
                return;
              }
#line 2210 "unify_gen.m"
            }
#line 2193 "unify_gen.m"
            break;
#line 2193 "unify_gen.m"
        }
#line 2216 "unify_gen.m"
        if ((ll_backend__unify_gen__MaybeCellArgB_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2218 "unify_gen.m"
          *ll_backend__unify_gen__FinalCellArg_14 = ll_backend__unify_gen__ShiftCellArgA_21;
#line 2216 "unify_gen.m"
        else
#line 2214 "unify_gen.m"
          {
#line 2214 "unify_gen.m"
            MR_Word ll_backend__unify_gen__CellArgB_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__MaybeCellArgB_13, (MR_Integer) 0)));

#line 2215 "unify_gen.m"
            {
#line 2215 "unify_gen.m"
              *ll_backend__unify_gen__FinalCellArg_14 = ll_backend__unify_gen__bitwise_or_cell_arg_2_f_0(ll_backend__unify_gen__ShiftCellArgA_21, ll_backend__unify_gen__CellArgB_29);
            }
#line 2214 "unify_gen.m"
          }
#line 2212 "unify_gen.m"
      }
#line 2170 "unify_gen.m"
  }
#line 2159 "unify_gen.m"
}

#line 2155 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__pack_ground_term_args_3_p_0_1(
#line 2155 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg,
#line 2155 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
#line 2155 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
#line 2155 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_3,
#line 2155 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_4,
#line 2155 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_5,
#line 2155 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_6,
#line 2155 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_7,
#line 2155 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_8)
#line 2155 "unify_gen.m"
{
#line 2155 "unify_gen.m"
  {
#line 2155 "unify_gen.m"
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;
#line 2155 "unify_gen.m"
    MR_Word ll_backend__unify_gen__conv0_FinalArg_12;

#line 2155 "unify_gen.m"
    {
#line 2155 "unify_gen.m"
      ll_backend__unify_gen__shift_combine_rval_type_8_p_0(((MR_Word) ll_backend__unify_gen__wrapper_arg_1), ((MR_Integer) ll_backend__unify_gen__wrapper_arg_2), ((MR_Word) ll_backend__unify_gen__wrapper_arg_3), &ll_backend__unify_gen__conv0_FinalArg_12);
    }
#line 2155 "unify_gen.m"
    *ll_backend__unify_gen__wrapper_arg_4 = ((MR_Box) (ll_backend__unify_gen__conv0_FinalArg_12));
#line 2155 "unify_gen.m"
  }
#line 2155 "unify_gen.m"
}

#line 2151 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__pack_ground_term_args_3_p_0(
#line 2151 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Widths_4,
#line 2151 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_TypedRvals_0_8,
#line 2151 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_TypedRvals_9)
#line 2151 "unify_gen.m"
{
#line 2154 "unify_gen.m"
  {
#line 2154 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 2154 "unify_gen.m"
    MR_Word ll_backend__unify_gen__TypeCtorInfo_23_23;
#line 2155 "unify_gen.m"
    MR_Box ll_backend__unify_gen__conv2_V_6_6;
#line 2155 "unify_gen.m"
    MR_Box ll_backend__unify_gen__conv1_V_7_7;

#line 2155 "unify_gen.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 2155 "unify_gen.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 8719 "ll_backend.unify_gen.c"
    ll_backend__unify_gen__TypeCtorInfo_23_23 = (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0;
#line 2155 "unify_gen.m"
    {
#line 2155 "unify_gen.m"
      backend_libs__arg_pack__pack_args_8_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ll_backend__unify_gen__TypeCtorInfo_23_23, ll_backend__unify_gen__TypeCtorInfo_23_23, (MR_Word) &ll_backend__unify_gen_scalar_common_2[8], ll_backend__unify_gen__Widths_4, ll_backend__unify_gen__STATE_VARIABLE_TypedRvals_0_8, ll_backend__unify_gen__STATE_VARIABLE_TypedRvals_9, ((MR_Box) ((MR_Integer) 0)), &ll_backend__unify_gen__conv2_V_6_6, ((MR_Box) ((MR_Integer) 0)), &ll_backend__unify_gen__conv1_V_7_7);
    }
#line 2154 "unify_gen.m"
  }
#line 2151 "unify_gen.m"
}

#line 2134 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_ground_term_arg_5_p_0(
#line 2134 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Var_6,
#line 2134 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConsArgWidth_7,
#line 2134 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__TypedRval_8,
#line 2134 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_12,
#line 2134 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_13)
#line 2134 "unify_gen.m"
{
#line 2138 "unify_gen.m"
  {
#line 2138 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 2138 "unify_gen.m"
    MR_Word ll_backend__unify_gen__TypedRval0_10;
#line 2139 "unify_gen.m"
    MR_Box ll_backend__unify_gen__conv0_TypedRval0_10;
#line 2147 "unify_gen.m"
    MR_Word ll_backend__unify_gen__Rval_11;
#line 2143 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_15_15;

#line 2139 "unify_gen.m"
    {
#line 2139 "unify_gen.m"
      mercury__map__det_remove_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ((MR_Box) (ll_backend__unify_gen__Var_6)), &ll_backend__unify_gen__conv0_TypedRval0_10, ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_12, ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_13);
    }
#line 2139 "unify_gen.m"
    ll_backend__unify_gen__TypedRval0_10 = ((MR_Word) ll_backend__unify_gen__conv0_TypedRval0_10);
#line 2143 "unify_gen.m"
    ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__ConsArgWidth_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 2143 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 2143 "unify_gen.m"
      {
#line 2144 "unify_gen.m"
        ll_backend__unify_gen__Rval_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__TypedRval0_10, (MR_Integer) 0)));
#line 2144 "unify_gen.m"
        ll_backend__unify_gen__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__TypedRval0_10, (MR_Integer) 1)));
#line 2144 "unify_gen.m"
        ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__V_15_15 == (MR_Integer) 11);
#line 2143 "unify_gen.m"
      }
#line 2147 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 2146 "unify_gen.m"
      {
#line 2146 "unify_gen.m"
        {
#line 2146 "unify_gen.m"
          MR_Word base;
#line 2146 "unify_gen.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2146 "unify_gen.m"
          *ll_backend__unify_gen__TypedRval_8 = base;
#line 2146 "unify_gen.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__unify_gen__Rval_11));
#line 2146 "unify_gen.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 9));
#line 2146 "unify_gen.m"
        }
#line 2146 "unify_gen.m"
      }
#line 2147 "unify_gen.m"
    else
#line 2148 "unify_gen.m"
      *ll_backend__unify_gen__TypedRval_8 = ll_backend__unify_gen__TypedRval0_10;
#line 2138 "unify_gen.m"
  }
#line 2134 "unify_gen.m"
}

#line 2131 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_ground_term_args_5_p_0_1(
#line 2131 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg,
#line 2131 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
#line 2131 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
#line 2131 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_3,
#line 2131 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_4,
#line 2131 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_5)
#line 2131 "unify_gen.m"
{
#line 2131 "unify_gen.m"
  {
#line 2131 "unify_gen.m"
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;
#line 2131 "unify_gen.m"
    MR_Word ll_backend__unify_gen__conv1_TypedRval_8;
#line 2131 "unify_gen.m"
    MR_Word ll_backend__unify_gen__conv0_STATE_VARIABLE_ActiveMap_13;

#line 2131 "unify_gen.m"
    {
#line 2131 "unify_gen.m"
      ll_backend__unify_gen__generate_ground_term_arg_5_p_0(((MR_Word) ll_backend__unify_gen__wrapper_arg_1), ((MR_Word) ll_backend__unify_gen__wrapper_arg_2), &ll_backend__unify_gen__conv1_TypedRval_8, ((MR_Word) ll_backend__unify_gen__wrapper_arg_4), &ll_backend__unify_gen__conv0_STATE_VARIABLE_ActiveMap_13);
    }
#line 2131 "unify_gen.m"
    *ll_backend__unify_gen__wrapper_arg_3 = ((MR_Box) (ll_backend__unify_gen__conv1_TypedRval_8));
#line 2131 "unify_gen.m"
    *ll_backend__unify_gen__wrapper_arg_5 = ((MR_Box) (ll_backend__unify_gen__conv0_STATE_VARIABLE_ActiveMap_13));
#line 2131 "unify_gen.m"
  }
#line 2131 "unify_gen.m"
}

#line 2126 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_ground_term_args_5_p_0(
#line 2126 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Vars_6,
#line 2126 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConsArgWidths_7,
#line 2126 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__TypedRvals_8,
#line 2126 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_10,
#line 2126 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_11)
#line 2126 "unify_gen.m"
{
#line 2130 "unify_gen.m"
  {
#line 2130 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 2131 "unify_gen.m"
    MR_Box ll_backend__unify_gen__conv2_STATE_VARIABLE_ActiveMap_11;

#line 2131 "unify_gen.m"
    {
#line 2131 "unify_gen.m"
      mercury__list__map_corresponding_foldl_6_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, (MR_Word) &ll_backend__unify_gen_scalar_common_2[2], (MR_Word) &ll_backend__unify_gen_scalar_common_2[7], ll_backend__unify_gen__Vars_6, ll_backend__unify_gen__ConsArgWidths_7, ll_backend__unify_gen__TypedRvals_8, ((MR_Box) (ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_10)), &ll_backend__unify_gen__conv2_STATE_VARIABLE_ActiveMap_11);
    }
#line 2131 "unify_gen.m"
    *ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_11 = ((MR_Word) ll_backend__unify_gen__conv2_STATE_VARIABLE_ActiveMap_11);
#line 2130 "unify_gen.m"
  }
#line 2126 "unify_gen.m"
}

#line 2024 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__generate_ground_term_conjunct_tag_9_p_0_1(
#line 2024 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg)
#line 2024 "unify_gen.m"
{
#line 2024 "unify_gen.m"
  {
#line 2024 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 2024 "unify_gen.m"
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;

#line 2024 "unify_gen.m"
    {
#line 2024 "unify_gen.m"
      return ll_backend__unify_gen__succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_ground_term_conjunct_tag__2024__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 4))));
    }
#line 2024 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 2024 "unify_gen.m"
  }
#line 2024 "unify_gen.m"
}

#line 2006 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_ground_term_conjunct_tag_9_p_0(
#line 2006 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Var_10,
#line 2006 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConsTag_11,
#line 2006 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Args_12,
#line 2006 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConsArgWidths_13,
#line 2006 "unify_gen.m"
  MR_Word ll_backend__unify_gen__UnboxedFloats_14,
#line 2006 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_67,
#line 2006 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_68,
#line 2006 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_69,
#line 2006 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_70)
#line 2006 "unify_gen.m"
{
#line 2038 "unify_gen.m"
  while (MR_TRUE)
#line 2038 "unify_gen.m"
    {
#line 2038 "unify_gen.m"
      /* tailcall optimized into a loop */
#line 2038 "unify_gen.m"
      {
#line 2038 "unify_gen.m"
        MR_bool ll_backend__unify_gen__succeeded;

#line 2038 "unify_gen.m"
#line 2038 "unify_gen.m"
        switch (MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_11)) {
#line 2038 "unify_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 2038 "unify_gen.m"
          case (MR_Integer) 0:
#line 2038 "unify_gen.m"
#line 2038 "unify_gen.m"
            switch (MR_unmkbody(ll_backend__unify_gen__ConsTag_11)) {
#line 2038 "unify_gen.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 2038 "unify_gen.m"
              case (MR_Integer) 0:
#line 2075 "unify_gen.m"
                {
#line 2075 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__ArgTypedRvals_36;
#line 2075 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__PackArgTypedRvals_37;
#line 2075 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__DataAddr_38;
#line 2075 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__CellPtrConst_40;
#line 2075 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_91_91;
#line 2075 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_93_93;
#line 2075 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__ActiveGroundTerm_129;
#line 2075 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__Rval_131;

#line 2076 "unify_gen.m"
                  {
#line 2076 "unify_gen.m"
                    ll_backend__unify_gen__generate_ground_term_args_5_p_0(ll_backend__unify_gen__Args_12, ll_backend__unify_gen__ConsArgWidths_13, &ll_backend__unify_gen__ArgTypedRvals_36, ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_69, &ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_91_91);
                  }
#line 2078 "unify_gen.m"
                  {
#line 2078 "unify_gen.m"
                    ll_backend__unify_gen__pack_ground_term_args_3_p_0(ll_backend__unify_gen__ConsArgWidths_13, ll_backend__unify_gen__ArgTypedRvals_36, &ll_backend__unify_gen__PackArgTypedRvals_37);
                  }
#line 2079 "unify_gen.m"
                  {
#line 2079 "unify_gen.m"
                    ll_backend__global_data__add_scalar_static_cell_4_p_0(ll_backend__unify_gen__PackArgTypedRvals_37, &ll_backend__unify_gen__DataAddr_38, ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_67, ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_68);
                  }
#line 2081 "unify_gen.m"
                  {
#line 2081 "unify_gen.m"
                    ll_backend__unify_gen__V_93_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 2081 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_93_93, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 2081 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_93_93, 1) = ((MR_Box) (ll_backend__unify_gen__DataAddr_38));
#line 2081 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_93_93, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2081 "unify_gen.m"
                  }
#line 2081 "unify_gen.m"
                  {
#line 2081 "unify_gen.m"
                    ll_backend__unify_gen__CellPtrConst_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2081 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__CellPtrConst_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2081 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__CellPtrConst_40, 1) = ((MR_Box) (ll_backend__unify_gen__V_93_93));
#line 2081 "unify_gen.m"
                  }
#line 2082 "unify_gen.m"
                  {
#line 2082 "unify_gen.m"
                    ll_backend__unify_gen__Rval_131 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2082 "unify_gen.m"
                    MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Rval_131, 0) = ((MR_Box) ((MR_Integer) 0));
#line 2082 "unify_gen.m"
                    MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Rval_131, 1) = ((MR_Box) (ll_backend__unify_gen__CellPtrConst_40));
#line 2082 "unify_gen.m"
                  }
#line 2083 "unify_gen.m"
                  {
#line 2083 "unify_gen.m"
                    ll_backend__unify_gen__ActiveGroundTerm_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2083 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_129, 0) = ((MR_Box) (ll_backend__unify_gen__Rval_131));
#line 2083 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_129, 1) = ((MR_Box) ((MR_Integer) 11));
#line 2083 "unify_gen.m"
                  }
#line 2084 "unify_gen.m"
                  {
#line 2084 "unify_gen.m"
                    mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ((MR_Box) (ll_backend__unify_gen__Var_10)), ((MR_Box) (ll_backend__unify_gen__ActiveGroundTerm_129)), ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_91_91, ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_70);
#line 2084 "unify_gen.m"
                    return;
                  }
#line 2075 "unify_gen.m"
                }
#line 2038 "unify_gen.m"
                break;
#line 2038 "unify_gen.m"
              case (MR_Integer) 1:
#line 2057 "unify_gen.m"
                {
#line 2061 "unify_gen.m"
                  if ((ll_backend__unify_gen__Args_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2059 "unify_gen.m"
                    {
#line 2060 "unify_gen.m"
                      {
#line 2060 "unify_gen.m"
                        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term_conjunct_tag\'/9", (MR_String) "no_tag arity != 1");
#line 2060 "unify_gen.m"
                        return;
                      }
#line 2059 "unify_gen.m"
                    }
#line 2061 "unify_gen.m"
                  else
#line 2061 "unify_gen.m"
                    {
#line 2061 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Args_12, (MR_Integer) 1)));
#line 2061 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Args_12, (MR_Integer) 0)));

#line 2061 "unify_gen.m"
                      if ((ll_backend__unify_gen__V_205_205 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2062 "unify_gen.m"
                        {
#line 2062 "unify_gen.m"
                          MR_Word ll_backend__unify_gen__TypeInfo_158_158 = (MR_Word) &ll_backend__unify_gen_scalar_common_1[0];
#line 2062 "unify_gen.m"
                          MR_Word ll_backend__unify_gen__TypeCtorInfo_159_159 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0;
#line 2062 "unify_gen.m"
                          MR_Word ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_101_101;
#line 2062 "unify_gen.m"
                          MR_Word ll_backend__unify_gen__RvalType_126;
#line 2063 "unify_gen.m"
                          MR_Box ll_backend__unify_gen__conv1_RvalType_126;

#line 2063 "unify_gen.m"
                          {
#line 2063 "unify_gen.m"
                            mercury__map__det_remove_4_p_0(ll_backend__unify_gen__TypeInfo_158_158, ll_backend__unify_gen__TypeCtorInfo_159_159, ((MR_Box) (ll_backend__unify_gen__V_206_206)), &ll_backend__unify_gen__conv1_RvalType_126, ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_69, &ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_101_101);
                          }
#line 2063 "unify_gen.m"
                          ll_backend__unify_gen__RvalType_126 = ((MR_Word) ll_backend__unify_gen__conv1_RvalType_126);
#line 2064 "unify_gen.m"
                          {
#line 2064 "unify_gen.m"
                            mercury__map__det_insert_4_p_0(ll_backend__unify_gen__TypeInfo_158_158, ll_backend__unify_gen__TypeCtorInfo_159_159, ((MR_Box) (ll_backend__unify_gen__Var_10)), ((MR_Box) (ll_backend__unify_gen__RvalType_126)), ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_101_101, ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_70);
                          }
#line 2062 "unify_gen.m"
                        }
#line 2061 "unify_gen.m"
                      else
#line 2066 "unify_gen.m"
                        {
#line 2067 "unify_gen.m"
                          {
#line 2067 "unify_gen.m"
                            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term_conjunct_tag\'/9", (MR_String) "no_tag arity != 1");
#line 2067 "unify_gen.m"
                            return;
                          }
#line 2066 "unify_gen.m"
                        }
#line 2061 "unify_gen.m"
                    }
#line 2057 "unify_gen.m"
                  *ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_68 = ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_67;
#line 2057 "unify_gen.m"
                }
#line 2038 "unify_gen.m"
                break;
#line 2038 "unify_gen.m"
            }
#line 2038 "unify_gen.m"
            break;
#line 2038 "unify_gen.m"
          case (MR_Integer) 1:
#line 2038 "unify_gen.m"
            {
#line 2038 "unify_gen.m"
              MR_String ll_backend__unify_gen__String_17 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ConsTag_11, (MR_Integer) 0)));
#line 2038 "unify_gen.m"
              MR_Word ll_backend__unify_gen__Const_184;
#line 2038 "unify_gen.m"
              MR_Word ll_backend__unify_gen__ActiveGroundTerm_186;
#line 2038 "unify_gen.m"
              MR_Word ll_backend__unify_gen__V_187_187;

#line 2016 "unify_gen.m"
              {
#line 2016 "unify_gen.m"
                ll_backend__unify_gen__Const_184 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2016 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Const_184, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2016 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Const_184, 1) = ((MR_Box) (ll_backend__unify_gen__String_17));
#line 2016 "unify_gen.m"
              }
#line 2039 "unify_gen.m"
              {
#line 2039 "unify_gen.m"
                ll_backend__unify_gen__V_187_187 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2039 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_187_187, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2039 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_187_187, 1) = ((MR_Box) (ll_backend__unify_gen__Const_184));
#line 2039 "unify_gen.m"
              }
#line 2039 "unify_gen.m"
              {
#line 2039 "unify_gen.m"
                ll_backend__unify_gen__ActiveGroundTerm_186 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2039 "unify_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_186, 0) = ((MR_Box) (ll_backend__unify_gen__V_187_187));
#line 2039 "unify_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_186, 1) = ((MR_Box) ((MR_Integer) 10));
#line 2039 "unify_gen.m"
              }
#line 2040 "unify_gen.m"
              {
#line 2040 "unify_gen.m"
                mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ((MR_Box) (ll_backend__unify_gen__Var_10)), ((MR_Box) (ll_backend__unify_gen__ActiveGroundTerm_186)), ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_69, ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_70);
              }
#line 2038 "unify_gen.m"
              *ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_68 = ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_67;
#line 2038 "unify_gen.m"
            }
#line 2038 "unify_gen.m"
            break;
#line 2038 "unify_gen.m"
          case (MR_Integer) 2:
#line 2038 "unify_gen.m"
            {
#line 2038 "unify_gen.m"
              MR_Word ll_backend__unify_gen__Const_18;
#line 2038 "unify_gen.m"
              MR_Word ll_backend__unify_gen__Type_19;
#line 2038 "unify_gen.m"
              MR_Float ll_backend__unify_gen__Float_23 = MR_unbox_float((MR_hl_field(MR_mktag(2), ll_backend__unify_gen__ConsTag_11, (MR_Integer) 0)));
#line 2038 "unify_gen.m"
              MR_Word ll_backend__unify_gen__ActiveGroundTerm_24;
#line 2038 "unify_gen.m"
              MR_Word ll_backend__unify_gen__V_121_121;

#line 2030 "unify_gen.m"
              {
#line 2030 "unify_gen.m"
                ll_backend__unify_gen__Const_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2030 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Const_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 2030 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Const_18, 1) = MR_box_float(ll_backend__unify_gen__Float_23);
#line 2030 "unify_gen.m"
              }
#line 2034 "unify_gen.m"
#line 2034 "unify_gen.m"
              switch (ll_backend__unify_gen__UnboxedFloats_14) {
#line 2034 "unify_gen.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 2034 "unify_gen.m"
                case (MR_Integer) 1:
#line 2035 "unify_gen.m"
                  ll_backend__unify_gen__Type_19 = (MR_Integer) 11;
#line 2034 "unify_gen.m"
                  break;
#line 2034 "unify_gen.m"
                case (MR_Integer) 0:
#line 2032 "unify_gen.m"
                  ll_backend__unify_gen__Type_19 = (MR_Integer) 9;
#line 2034 "unify_gen.m"
                  break;
#line 2034 "unify_gen.m"
              }
#line 2039 "unify_gen.m"
              {
#line 2039 "unify_gen.m"
                ll_backend__unify_gen__V_121_121 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2039 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_121_121, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2039 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_121_121, 1) = ((MR_Box) (ll_backend__unify_gen__Const_18));
#line 2039 "unify_gen.m"
              }
#line 2039 "unify_gen.m"
              {
#line 2039 "unify_gen.m"
                ll_backend__unify_gen__ActiveGroundTerm_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2039 "unify_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_24, 0) = ((MR_Box) (ll_backend__unify_gen__V_121_121));
#line 2039 "unify_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_24, 1) = ((MR_Box) (ll_backend__unify_gen__Type_19));
#line 2039 "unify_gen.m"
              }
#line 2040 "unify_gen.m"
              {
#line 2040 "unify_gen.m"
                mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ((MR_Box) (ll_backend__unify_gen__Var_10)), ((MR_Box) (ll_backend__unify_gen__ActiveGroundTerm_24)), ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_69, ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_70);
              }
#line 2038 "unify_gen.m"
              *ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_68 = ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_67;
#line 2038 "unify_gen.m"
            }
#line 2038 "unify_gen.m"
            break;
#line 2038 "unify_gen.m"
          case (MR_Integer) 3:
#line 2038 "unify_gen.m"
#line 2038 "unify_gen.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_11, (MR_Integer) 0)))) {
#line 2038 "unify_gen.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 2038 "unify_gen.m"
              case (MR_Integer) 0:
#line 2038 "unify_gen.m"
                {
#line 2038 "unify_gen.m"
                  MR_Integer ll_backend__unify_gen__Int_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_11, (MR_Integer) 1)));
#line 2038 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__Const_178;
#line 2038 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__ActiveGroundTerm_180;
#line 2038 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_181_181;

#line 2020 "unify_gen.m"
                  {
#line 2020 "unify_gen.m"
                    ll_backend__unify_gen__Const_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2020 "unify_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Const_178, 0) = ((MR_Box) (ll_backend__unify_gen__Int_20));
#line 2020 "unify_gen.m"
                  }
#line 2039 "unify_gen.m"
                  {
#line 2039 "unify_gen.m"
                    ll_backend__unify_gen__V_181_181 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2039 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_181_181, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2039 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_181_181, 1) = ((MR_Box) (ll_backend__unify_gen__Const_178));
#line 2039 "unify_gen.m"
                  }
#line 2039 "unify_gen.m"
                  {
#line 2039 "unify_gen.m"
                    ll_backend__unify_gen__ActiveGroundTerm_180 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2039 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_180, 0) = ((MR_Box) (ll_backend__unify_gen__V_181_181));
#line 2039 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_180, 1) = ((MR_Box) ((MR_Integer) 7));
#line 2039 "unify_gen.m"
                  }
#line 2040 "unify_gen.m"
                  {
#line 2040 "unify_gen.m"
                    mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ((MR_Box) (ll_backend__unify_gen__Var_10)), ((MR_Box) (ll_backend__unify_gen__ActiveGroundTerm_180)), ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_69, ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_70);
                  }
#line 2038 "unify_gen.m"
                  *ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_68 = ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_67;
#line 2038 "unify_gen.m"
                }
#line 2038 "unify_gen.m"
                break;
#line 2038 "unify_gen.m"
              case (MR_Integer) 1:
#line 2038 "unify_gen.m"
                {
#line 2038 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__Lang_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_11, (MR_Integer) 1)));
#line 2038 "unify_gen.m"
                  MR_String ll_backend__unify_gen__Val_22 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_11, (MR_Integer) 2)));
#line 2038 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_115_115;
#line 2038 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__Const_172;
#line 2038 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__ActiveGroundTerm_174;
#line 2038 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_175_175;

#line 2024 "unify_gen.m"
                  {
#line 2024 "unify_gen.m"
                    ll_backend__unify_gen__V_115_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 2024 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_115_115, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_5[1]));
#line 2024 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_115_115, 1) = ((MR_Box) (ll_backend__unify_gen__generate_ground_term_conjunct_tag_9_p_0_1));
#line 2024 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_115_115, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2024 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_115_115, 3) = ((MR_Box) (ll_backend__unify_gen__Lang_21));
#line 2024 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_115_115, 4) = ((MR_Box) ((MR_Integer) 0));
#line 2024 "unify_gen.m"
                  }
#line 2024 "unify_gen.m"
                  {
#line 2024 "unify_gen.m"
                    mercury__require__expect_4_p_0(ll_backend__unify_gen__V_115_115, (MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term_conjunct_tag\'/9", (MR_String) "foreign_tag for language other than C");
                  }
#line 2026 "unify_gen.m"
                  {
#line 2026 "unify_gen.m"
                    ll_backend__unify_gen__Const_172 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2026 "unify_gen.m"
                    MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Const_172, 0) = ((MR_Box) (ll_backend__unify_gen__Val_22));
#line 2026 "unify_gen.m"
                    MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Const_172, 1) = ((MR_Box) ((MR_Integer) 7));
#line 2026 "unify_gen.m"
                  }
#line 2039 "unify_gen.m"
                  {
#line 2039 "unify_gen.m"
                    ll_backend__unify_gen__V_175_175 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2039 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_175_175, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2039 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_175_175, 1) = ((MR_Box) (ll_backend__unify_gen__Const_172));
#line 2039 "unify_gen.m"
                  }
#line 2039 "unify_gen.m"
                  {
#line 2039 "unify_gen.m"
                    ll_backend__unify_gen__ActiveGroundTerm_174 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2039 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_174, 0) = ((MR_Box) (ll_backend__unify_gen__V_175_175));
#line 2039 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_174, 1) = ((MR_Box) ((MR_Integer) 7));
#line 2039 "unify_gen.m"
                  }
#line 2040 "unify_gen.m"
                  {
#line 2040 "unify_gen.m"
                    mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ((MR_Box) (ll_backend__unify_gen__Var_10)), ((MR_Box) (ll_backend__unify_gen__ActiveGroundTerm_174)), ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_69, ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_70);
                  }
#line 2038 "unify_gen.m"
                  *ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_68 = ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_67;
#line 2038 "unify_gen.m"
                }
#line 2038 "unify_gen.m"
                break;
#line 2038 "unify_gen.m"
              case (MR_Integer) 2:
#line 2038 "unify_gen.m"
              case (MR_Integer) 3:
#line 2038 "unify_gen.m"
              case (MR_Integer) 4:
#line 2038 "unify_gen.m"
              case (MR_Integer) 5:
#line 2038 "unify_gen.m"
              case (MR_Integer) 6:
#line 2038 "unify_gen.m"
              case (MR_Integer) 7:
#line 2038 "unify_gen.m"
              case (MR_Integer) 8:
#line 2038 "unify_gen.m"
              case (MR_Integer) 9:
#line 2038 "unify_gen.m"
              case (MR_Integer) 10:
#line 2122 "unify_gen.m"
                {
#line 2123 "unify_gen.m"
                  {
#line 2123 "unify_gen.m"
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term_conjunct_tag\'/9", (MR_String) "unexpected tag");
#line 2123 "unify_gen.m"
                    return;
                  }
#line 2122 "unify_gen.m"
                }
#line 2038 "unify_gen.m"
                break;
#line 2038 "unify_gen.m"
              case (MR_Integer) 11:
#line 2075 "unify_gen.m"
                {
#line 2075 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__ArgTypedRvals_190;
#line 2075 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__PackArgTypedRvals_191;
#line 2075 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__DataAddr_192;
#line 2075 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__CellPtrConst_194;
#line 2075 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_91_195;
#line 2075 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_196_196;
#line 2075 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__ActiveGroundTerm_198;
#line 2075 "unify_gen.m"
                  MR_Integer ll_backend__unify_gen__Ptag_199 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_11, (MR_Integer) 1)));
#line 2075 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__Rval_200;

#line 2076 "unify_gen.m"
                  {
#line 2076 "unify_gen.m"
                    ll_backend__unify_gen__generate_ground_term_args_5_p_0(ll_backend__unify_gen__Args_12, ll_backend__unify_gen__ConsArgWidths_13, &ll_backend__unify_gen__ArgTypedRvals_190, ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_69, &ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_91_195);
                  }
#line 2078 "unify_gen.m"
                  {
#line 2078 "unify_gen.m"
                    ll_backend__unify_gen__pack_ground_term_args_3_p_0(ll_backend__unify_gen__ConsArgWidths_13, ll_backend__unify_gen__ArgTypedRvals_190, &ll_backend__unify_gen__PackArgTypedRvals_191);
                  }
#line 2079 "unify_gen.m"
                  {
#line 2079 "unify_gen.m"
                    ll_backend__global_data__add_scalar_static_cell_4_p_0(ll_backend__unify_gen__PackArgTypedRvals_191, &ll_backend__unify_gen__DataAddr_192, ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_67, ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_68);
                  }
#line 2081 "unify_gen.m"
                  {
#line 2081 "unify_gen.m"
                    ll_backend__unify_gen__V_196_196 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 2081 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_196_196, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 2081 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_196_196, 1) = ((MR_Box) (ll_backend__unify_gen__DataAddr_192));
#line 2081 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_196_196, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2081 "unify_gen.m"
                  }
#line 2081 "unify_gen.m"
                  {
#line 2081 "unify_gen.m"
                    ll_backend__unify_gen__CellPtrConst_194 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2081 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__CellPtrConst_194, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2081 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__CellPtrConst_194, 1) = ((MR_Box) (ll_backend__unify_gen__V_196_196));
#line 2081 "unify_gen.m"
                  }
#line 2082 "unify_gen.m"
                  {
#line 2082 "unify_gen.m"
                    ll_backend__unify_gen__Rval_200 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2082 "unify_gen.m"
                    MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Rval_200, 0) = ((MR_Box) (ll_backend__unify_gen__Ptag_199));
#line 2082 "unify_gen.m"
                    MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Rval_200, 1) = ((MR_Box) (ll_backend__unify_gen__CellPtrConst_194));
#line 2082 "unify_gen.m"
                  }
#line 2083 "unify_gen.m"
                  {
#line 2083 "unify_gen.m"
                    ll_backend__unify_gen__ActiveGroundTerm_198 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2083 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_198, 0) = ((MR_Box) (ll_backend__unify_gen__Rval_200));
#line 2083 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_198, 1) = ((MR_Box) ((MR_Integer) 11));
#line 2083 "unify_gen.m"
                  }
#line 2084 "unify_gen.m"
                  {
#line 2084 "unify_gen.m"
                    mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ((MR_Box) (ll_backend__unify_gen__Var_10)), ((MR_Box) (ll_backend__unify_gen__ActiveGroundTerm_198)), ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_91_195, ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_70);
#line 2084 "unify_gen.m"
                    return;
                  }
#line 2075 "unify_gen.m"
                }
#line 2038 "unify_gen.m"
                break;
#line 2038 "unify_gen.m"
              case (MR_Integer) 12:
#line 2086 "unify_gen.m"
                {
#line 2086 "unify_gen.m"
                  MR_Integer ll_backend__unify_gen__Ptag_139 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_11, (MR_Integer) 1)));

#line 2093 "unify_gen.m"
                  if ((ll_backend__unify_gen__Args_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2096 "unify_gen.m"
                    {
#line 2097 "unify_gen.m"
                      {
#line 2097 "unify_gen.m"
                        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term_conjunct_tag\'/9", (MR_String) "direct_arg_tag: arity != 1");
#line 2097 "unify_gen.m"
                        return;
                      }
#line 2096 "unify_gen.m"
                    }
#line 2093 "unify_gen.m"
                  else
#line 2093 "unify_gen.m"
                    {
#line 2093 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Args_12, (MR_Integer) 1)));
#line 2093 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Args_12, (MR_Integer) 0)));

#line 2093 "unify_gen.m"
                      if ((ll_backend__unify_gen__V_203_203 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2088 "unify_gen.m"
                        {
#line 2088 "unify_gen.m"
                          MR_Word ll_backend__unify_gen__TypeInfo_162_162 = (MR_Word) &ll_backend__unify_gen_scalar_common_1[0];
#line 2088 "unify_gen.m"
                          MR_Word ll_backend__unify_gen__TypeCtorInfo_163_163 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0;
#line 2088 "unify_gen.m"
                          MR_Word ll_backend__unify_gen__ArgRval_41;
#line 2088 "unify_gen.m"
                          MR_Word ll_backend__unify_gen__V_87_87;
#line 2088 "unify_gen.m"
                          MR_Word ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_88_88;
#line 2088 "unify_gen.m"
                          MR_Word ll_backend__unify_gen__ActiveGroundTerm_132;
#line 2088 "unify_gen.m"
                          MR_Word ll_backend__unify_gen__Rval_133;
#line 2089 "unify_gen.m"
                          MR_Box ll_backend__unify_gen__conv0_V_87_87;
#line 2089 "unify_gen.m"
                          MR_Word ll_backend__unify_gen___RvalType_42;

#line 2089 "unify_gen.m"
                          {
#line 2089 "unify_gen.m"
                            mercury__map__det_remove_4_p_0(ll_backend__unify_gen__TypeInfo_162_162, ll_backend__unify_gen__TypeCtorInfo_163_163, ((MR_Box) (ll_backend__unify_gen__V_204_204)), &ll_backend__unify_gen__conv0_V_87_87, ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_69, &ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_88_88);
                          }
#line 2089 "unify_gen.m"
                          ll_backend__unify_gen__V_87_87 = ((MR_Word) ll_backend__unify_gen__conv0_V_87_87);
#line 2089 "unify_gen.m"
                          ll_backend__unify_gen__ArgRval_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_87_87, (MR_Integer) 0)));
#line 2089 "unify_gen.m"
                          ll_backend__unify_gen___RvalType_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_87_87, (MR_Integer) 1)));
#line 2090 "unify_gen.m"
                          {
#line 2090 "unify_gen.m"
                            ll_backend__unify_gen__Rval_133 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2090 "unify_gen.m"
                            MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Rval_133, 0) = ((MR_Box) (ll_backend__unify_gen__Ptag_139));
#line 2090 "unify_gen.m"
                            MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Rval_133, 1) = ((MR_Box) (ll_backend__unify_gen__ArgRval_41));
#line 2090 "unify_gen.m"
                          }
#line 2091 "unify_gen.m"
                          {
#line 2091 "unify_gen.m"
                            ll_backend__unify_gen__ActiveGroundTerm_132 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2091 "unify_gen.m"
                            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_132, 0) = ((MR_Box) (ll_backend__unify_gen__Rval_133));
#line 2091 "unify_gen.m"
                            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_132, 1) = ((MR_Box) ((MR_Integer) 11));
#line 2091 "unify_gen.m"
                          }
#line 2092 "unify_gen.m"
                          {
#line 2092 "unify_gen.m"
                            mercury__map__det_insert_4_p_0(ll_backend__unify_gen__TypeInfo_162_162, ll_backend__unify_gen__TypeCtorInfo_163_163, ((MR_Box) (ll_backend__unify_gen__Var_10)), ((MR_Box) (ll_backend__unify_gen__ActiveGroundTerm_132)), ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_88_88, ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_70);
                          }
#line 2088 "unify_gen.m"
                        }
#line 2093 "unify_gen.m"
                      else
#line 2096 "unify_gen.m"
                        {
#line 2097 "unify_gen.m"
                          {
#line 2097 "unify_gen.m"
                            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term_conjunct_tag\'/9", (MR_String) "direct_arg_tag: arity != 1");
#line 2097 "unify_gen.m"
                            return;
                          }
#line 2096 "unify_gen.m"
                        }
#line 2093 "unify_gen.m"
                    }
#line 2086 "unify_gen.m"
                  *ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_68 = ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_67;
#line 2086 "unify_gen.m"
                }
#line 2038 "unify_gen.m"
                break;
#line 2038 "unify_gen.m"
              case (MR_Integer) 13:
#line 2100 "unify_gen.m"
                {
#line 2100 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__StagTypedRval_46;
#line 2100 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__AllTypedRvals_47;
#line 2100 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_74_74;
#line 2100 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_75_75;
#line 2100 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_76_76;
#line 2100 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_79_79;
#line 2100 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__ActiveGroundTerm_142;
#line 2100 "unify_gen.m"
                  MR_Integer ll_backend__unify_gen__Ptag_143 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_11, (MR_Integer) 1)));
#line 2100 "unify_gen.m"
                  MR_Integer ll_backend__unify_gen__Stag_144 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_11, (MR_Integer) 2)));
#line 2100 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__Rval_145;
#line 2100 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__ArgTypedRvals_146;
#line 2100 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__PackArgTypedRvals_147;
#line 2100 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__DataAddr_148;
#line 2100 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__CellPtrConst_150;

#line 2101 "unify_gen.m"
                  {
#line 2101 "unify_gen.m"
                    ll_backend__unify_gen__generate_ground_term_args_5_p_0(ll_backend__unify_gen__Args_12, ll_backend__unify_gen__ConsArgWidths_13, &ll_backend__unify_gen__ArgTypedRvals_146, ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_69, &ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_74_74);
                  }
#line 2103 "unify_gen.m"
                  {
#line 2103 "unify_gen.m"
                    ll_backend__unify_gen__pack_ground_term_args_3_p_0(ll_backend__unify_gen__ConsArgWidths_13, ll_backend__unify_gen__ArgTypedRvals_146, &ll_backend__unify_gen__PackArgTypedRvals_147);
                  }
#line 2104 "unify_gen.m"
                  {
#line 2104 "unify_gen.m"
                    ll_backend__unify_gen__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2104 "unify_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_76_76, 0) = ((MR_Box) (ll_backend__unify_gen__Stag_144));
#line 2104 "unify_gen.m"
                  }
#line 2104 "unify_gen.m"
                  {
#line 2104 "unify_gen.m"
                    ll_backend__unify_gen__V_75_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2104 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_75_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2104 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_75_75, 1) = ((MR_Box) (ll_backend__unify_gen__V_76_76));
#line 2104 "unify_gen.m"
                  }
#line 2104 "unify_gen.m"
                  {
#line 2104 "unify_gen.m"
                    ll_backend__unify_gen__StagTypedRval_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2104 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__StagTypedRval_46, 0) = ((MR_Box) (ll_backend__unify_gen__V_75_75));
#line 2104 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__StagTypedRval_46, 1) = ((MR_Box) ((MR_Integer) 7));
#line 2104 "unify_gen.m"
                  }
#line 2105 "unify_gen.m"
                  {
#line 2105 "unify_gen.m"
                    ll_backend__unify_gen__AllTypedRvals_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2105 "unify_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__AllTypedRvals_47, 0) = ((MR_Box) (ll_backend__unify_gen__StagTypedRval_46));
#line 2105 "unify_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__AllTypedRvals_47, 1) = ((MR_Box) (ll_backend__unify_gen__PackArgTypedRvals_147));
#line 2105 "unify_gen.m"
                  }
#line 2106 "unify_gen.m"
                  {
#line 2106 "unify_gen.m"
                    ll_backend__global_data__add_scalar_static_cell_4_p_0(ll_backend__unify_gen__AllTypedRvals_47, &ll_backend__unify_gen__DataAddr_148, ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_67, ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_68);
                  }
#line 2108 "unify_gen.m"
                  {
#line 2108 "unify_gen.m"
                    ll_backend__unify_gen__V_79_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 2108 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_79_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 2108 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_79_79, 1) = ((MR_Box) (ll_backend__unify_gen__DataAddr_148));
#line 2108 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_79_79, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2108 "unify_gen.m"
                  }
#line 2108 "unify_gen.m"
                  {
#line 2108 "unify_gen.m"
                    ll_backend__unify_gen__CellPtrConst_150 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2108 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__CellPtrConst_150, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2108 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__CellPtrConst_150, 1) = ((MR_Box) (ll_backend__unify_gen__V_79_79));
#line 2108 "unify_gen.m"
                  }
#line 2109 "unify_gen.m"
                  {
#line 2109 "unify_gen.m"
                    ll_backend__unify_gen__Rval_145 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2109 "unify_gen.m"
                    MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Rval_145, 0) = ((MR_Box) (ll_backend__unify_gen__Ptag_143));
#line 2109 "unify_gen.m"
                    MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Rval_145, 1) = ((MR_Box) (ll_backend__unify_gen__CellPtrConst_150));
#line 2109 "unify_gen.m"
                  }
#line 2110 "unify_gen.m"
                  {
#line 2110 "unify_gen.m"
                    ll_backend__unify_gen__ActiveGroundTerm_142 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2110 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_142, 0) = ((MR_Box) (ll_backend__unify_gen__Rval_145));
#line 2110 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_142, 1) = ((MR_Box) ((MR_Integer) 11));
#line 2110 "unify_gen.m"
                  }
#line 2111 "unify_gen.m"
                  {
#line 2111 "unify_gen.m"
                    mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ((MR_Box) (ll_backend__unify_gen__Var_10)), ((MR_Box) (ll_backend__unify_gen__ActiveGroundTerm_142)), ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_74_74, ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_70);
#line 2111 "unify_gen.m"
                    return;
                  }
#line 2100 "unify_gen.m"
                }
#line 2038 "unify_gen.m"
                break;
#line 2038 "unify_gen.m"
              case (MR_Integer) 14:
#line 2042 "unify_gen.m"
                {
#line 2042 "unify_gen.m"
                  MR_Integer ll_backend__unify_gen__Ptag_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_11, (MR_Integer) 1)));
#line 2042 "unify_gen.m"
                  MR_Integer ll_backend__unify_gen__Stag_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_11, (MR_Integer) 2)));
#line 2042 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__Rval_27;
#line 2042 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_109_109;
#line 2042 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_111_111;
#line 2042 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_112_112;
#line 2042 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__ActiveGroundTerm_123;

#line 2043 "unify_gen.m"
                  {
#line 2043 "unify_gen.m"
                    ll_backend__unify_gen__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2043 "unify_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_112_112, 0) = ((MR_Box) (ll_backend__unify_gen__Stag_26));
#line 2043 "unify_gen.m"
                  }
#line 2043 "unify_gen.m"
                  {
#line 2043 "unify_gen.m"
                    ll_backend__unify_gen__V_111_111 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2043 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_111_111, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2043 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_111_111, 1) = ((MR_Box) (ll_backend__unify_gen__V_112_112));
#line 2043 "unify_gen.m"
                  }
#line 2043 "unify_gen.m"
                  {
#line 2043 "unify_gen.m"
                    ll_backend__unify_gen__V_109_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 2043 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_109_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2043 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_109_109, 1) = ((MR_Box) ((MR_Integer) 4));
#line 2043 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_109_109, 2) = ((MR_Box) (ll_backend__unify_gen__V_111_111));
#line 2043 "unify_gen.m"
                  }
#line 2043 "unify_gen.m"
                  {
#line 2043 "unify_gen.m"
                    ll_backend__unify_gen__Rval_27 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2043 "unify_gen.m"
                    MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Rval_27, 0) = ((MR_Box) (ll_backend__unify_gen__Ptag_25));
#line 2043 "unify_gen.m"
                    MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Rval_27, 1) = ((MR_Box) (ll_backend__unify_gen__V_109_109));
#line 2043 "unify_gen.m"
                  }
#line 2044 "unify_gen.m"
                  {
#line 2044 "unify_gen.m"
                    ll_backend__unify_gen__ActiveGroundTerm_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2044 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_123, 0) = ((MR_Box) (ll_backend__unify_gen__Rval_27));
#line 2044 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_123, 1) = ((MR_Box) ((MR_Integer) 11));
#line 2044 "unify_gen.m"
                  }
#line 2045 "unify_gen.m"
                  {
#line 2045 "unify_gen.m"
                    mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ((MR_Box) (ll_backend__unify_gen__Var_10)), ((MR_Box) (ll_backend__unify_gen__ActiveGroundTerm_123)), ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_69, ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_70);
                  }
#line 2042 "unify_gen.m"
                  *ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_68 = ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_67;
#line 2042 "unify_gen.m"
                }
#line 2038 "unify_gen.m"
                break;
#line 2038 "unify_gen.m"
              case (MR_Integer) 15:
#line 2047 "unify_gen.m"
                {
#line 2047 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__RA_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_11, (MR_Integer) 1)));
#line 2047 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__RvalType_29;
#line 2047 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__ActiveGroundTerm_124;
#line 2047 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__Rval_125;

#line 2048 "unify_gen.m"
                  {
#line 2048 "unify_gen.m"
                    ll_backend__unify_gen__Rval_125 = ll_backend__unify_gen__generate_reserved_address_1_f_0(ll_backend__unify_gen__RA_28);
                  }
#line 2049 "unify_gen.m"
                  {
#line 2049 "unify_gen.m"
                    ll_backend__llds__rval_type_2_p_0(ll_backend__unify_gen__Rval_125, &ll_backend__unify_gen__RvalType_29);
                  }
#line 2050 "unify_gen.m"
                  {
#line 2050 "unify_gen.m"
                    ll_backend__unify_gen__ActiveGroundTerm_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2050 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_124, 0) = ((MR_Box) (ll_backend__unify_gen__Rval_125));
#line 2050 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_124, 1) = ((MR_Box) (ll_backend__unify_gen__RvalType_29));
#line 2050 "unify_gen.m"
                  }
#line 2051 "unify_gen.m"
                  {
#line 2051 "unify_gen.m"
                    mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ((MR_Box) (ll_backend__unify_gen__Var_10)), ((MR_Box) (ll_backend__unify_gen__ActiveGroundTerm_124)), ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_69, ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_70);
                  }
#line 2047 "unify_gen.m"
                  *ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_68 = ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_67;
#line 2047 "unify_gen.m"
                }
#line 2038 "unify_gen.m"
                break;
#line 2038 "unify_gen.m"
              case (MR_Integer) 16:
#line 2053 "unify_gen.m"
                {
#line 2053 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__ActualConsTag_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_11, (MR_Integer) 2)));
#line 2053 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_11, (MR_Integer) 1)));

#line 2054 "unify_gen.m"
                  /* direct tailcall eliminated */
#line 2054 "unify_gen.m"
                  {
#line 2054 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__ConsTag__tmp_copy_11 = ll_backend__unify_gen__ActualConsTag_31;

#line 2054 "unify_gen.m"
                    ll_backend__unify_gen__ConsTag_11 = ll_backend__unify_gen__ConsTag__tmp_copy_11;
#line 2054 "unify_gen.m"
                  }
#line 2054 "unify_gen.m"
                  continue;
#line 2053 "unify_gen.m"
                }
#line 2038 "unify_gen.m"
                break;
#line 2038 "unify_gen.m"
            }
#line 2038 "unify_gen.m"
            break;
#line 2038 "unify_gen.m"
        }
#line 2038 "unify_gen.m"
      }
#line 2038 "unify_gen.m"
      break;
#line 2038 "unify_gen.m"
    }
#line 2006 "unify_gen.m"
}

#line 1971 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_ground_term_conjuncts_7_p_0(
#line 1971 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__1_1,
#line 1971 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_2,
#line 1971 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__3_3,
#line 1971 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_4,
#line 1971 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_5,
#line 1971 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_6,
#line 1971 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_7)
#line 1971 "unify_gen.m"
{
#line 1976 "unify_gen.m"
  while (MR_TRUE)
#line 1976 "unify_gen.m"
    {
#line 1976 "unify_gen.m"
      /* tailcall optimized into a loop */
#line 1976 "unify_gen.m"
      {
#line 1976 "unify_gen.m"
        MR_bool ll_backend__unify_gen__succeeded;

#line 1976 "unify_gen.m"
        if ((ll_backend__unify_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1976 "unify_gen.m"
          {
#line 1977 "unify_gen.m"
            *ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_7 = ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_6;
#line 1977 "unify_gen.m"
            *ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_5 = ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_4;
#line 1976 "unify_gen.m"
          }
#line 1976 "unify_gen.m"
        else
#line 1979 "unify_gen.m"
          {
#line 1979 "unify_gen.m"
            MR_Word ll_backend__unify_gen__Goal_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 1979 "unify_gen.m"
            MR_Word ll_backend__unify_gen__Goals_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 1979 "unify_gen.m"
            MR_Word ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_26_26;
#line 1979 "unify_gen.m"
            MR_Word ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_27_27;
#line 1979 "unify_gen.m"
            MR_Word ll_backend__unify_gen__GoalExpr_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Goal_17, (MR_Integer) 0)));
#line 1992 "unify_gen.m"
            MR_Word ll_backend__unify_gen___GoalInfo_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Goal_17, (MR_Integer) 1)));
#line 2002 "unify_gen.m"
            MR_Word ll_backend__unify_gen__Var_46;
#line 2002 "unify_gen.m"
            MR_Word ll_backend__unify_gen__ConsId_47;
#line 2002 "unify_gen.m"
            MR_Word ll_backend__unify_gen__Args_48;
#line 1994 "unify_gen.m"
            MR_Word ll_backend__unify_gen__Unify_44;
#line 1994 "unify_gen.m"
            MR_Word ll_backend__unify_gen__SubInfo_52;
#line 1994 "unify_gen.m"
            MR_Word ll_backend__unify_gen__V_41_41;
#line 1994 "unify_gen.m"
            MR_Word ll_backend__unify_gen__V_42_42;
#line 1994 "unify_gen.m"
            MR_Word ll_backend__unify_gen__V_43_43;
#line 1994 "unify_gen.m"
            MR_Word ll_backend__unify_gen__V_45_45;
#line 1995 "unify_gen.m"
            MR_Word ll_backend__unify_gen__V_49_49;
#line 1995 "unify_gen.m"
            MR_Word ll_backend__unify_gen__V_50_50;
#line 1995 "unify_gen.m"
            MR_Word ll_backend__unify_gen__V_51_51;

#line 1994 "unify_gen.m"
            ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__GoalExpr_39)) == (MR_mktag((MR_Integer) 1)));
#line 1994 "unify_gen.m"
            if (ll_backend__unify_gen__succeeded)
#line 1994 "unify_gen.m"
              {
#line 1994 "unify_gen.m"
                ll_backend__unify_gen__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__GoalExpr_39, (MR_Integer) 0)));
#line 1994 "unify_gen.m"
                ll_backend__unify_gen__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__GoalExpr_39, (MR_Integer) 1)));
#line 1994 "unify_gen.m"
                ll_backend__unify_gen__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__GoalExpr_39, (MR_Integer) 2)));
#line 1994 "unify_gen.m"
                ll_backend__unify_gen__Unify_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__GoalExpr_39, (MR_Integer) 3)));
#line 1994 "unify_gen.m"
                ll_backend__unify_gen__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__GoalExpr_39, (MR_Integer) 4)));
#line 1995 "unify_gen.m"
                ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__Unify_44)) == (MR_mktag((MR_Integer) 0)));
#line 1995 "unify_gen.m"
                if (ll_backend__unify_gen__succeeded)
#line 1995 "unify_gen.m"
                  {
#line 1995 "unify_gen.m"
                    ll_backend__unify_gen__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Unify_44, (MR_Integer) 0)));
#line 1995 "unify_gen.m"
                    ll_backend__unify_gen__ConsId_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Unify_44, (MR_Integer) 1)));
#line 1995 "unify_gen.m"
                    ll_backend__unify_gen__Args_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Unify_44, (MR_Integer) 2)));
#line 1995 "unify_gen.m"
                    ll_backend__unify_gen__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Unify_44, (MR_Integer) 3)));
#line 1995 "unify_gen.m"
                    ll_backend__unify_gen__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Unify_44, (MR_Integer) 4)));
#line 1995 "unify_gen.m"
                    ll_backend__unify_gen__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Unify_44, (MR_Integer) 5)));
#line 1995 "unify_gen.m"
                    ll_backend__unify_gen__SubInfo_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Unify_44, (MR_Integer) 6)));
#line 1996 "unify_gen.m"
                    ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__SubInfo_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1995 "unify_gen.m"
                  }
#line 1994 "unify_gen.m"
              }
#line 2002 "unify_gen.m"
            if (ll_backend__unify_gen__succeeded)
#line 1998 "unify_gen.m"
              {
#line 1998 "unify_gen.m"
                MR_Word ll_backend__unify_gen__ConsTag_53;
#line 1998 "unify_gen.m"
                MR_Word ll_backend__unify_gen__ConsArgWidths_54;

#line 1998 "unify_gen.m"
                {
#line 1998 "unify_gen.m"
                  ll_backend__unify_gen__ConsTag_53 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ll_backend__unify_gen__HeadVar__1_1, ll_backend__unify_gen__ConsId_47);
                }
#line 1999 "unify_gen.m"
                {
#line 1999 "unify_gen.m"
                  ll_backend__unify_gen__get_cons_arg_widths_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], ll_backend__unify_gen__HeadVar__1_1, ll_backend__unify_gen__ConsId_47, ll_backend__unify_gen__Args_48, &ll_backend__unify_gen__ConsArgWidths_54);
                }
#line 2000 "unify_gen.m"
                {
#line 2000 "unify_gen.m"
                  ll_backend__unify_gen__generate_ground_term_conjunct_tag_9_p_0(ll_backend__unify_gen__Var_46, ll_backend__unify_gen__ConsTag_53, ll_backend__unify_gen__Args_48, ll_backend__unify_gen__ConsArgWidths_54, ll_backend__unify_gen__HeadVar__3_3, ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_4, &ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_26_26, ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_6, &ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_27_27);
                }
#line 1998 "unify_gen.m"
              }
#line 2002 "unify_gen.m"
            else
#line 2003 "unify_gen.m"
              {
#line 2003 "unify_gen.m"
                {
#line 2003 "unify_gen.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term_conjunct\'/7", (MR_String) "malformed goal");
#line 2003 "unify_gen.m"
                  return;
                }
#line 2003 "unify_gen.m"
              }
#line 1982 "unify_gen.m"
            /* direct tailcall eliminated */
#line 1982 "unify_gen.m"
            {
#line 1982 "unify_gen.m"
              MR_Word ll_backend__unify_gen__HeadVar__2__tmp_copy_2 = ll_backend__unify_gen__Goals_18;
#line 1982 "unify_gen.m"
              MR_Word ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0__tmp_copy_4 = ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_26_26;
#line 1982 "unify_gen.m"
              MR_Word ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0__tmp_copy_6 = ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_27_27;

#line 1982 "unify_gen.m"
              ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_6 = ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0__tmp_copy_6;
#line 1982 "unify_gen.m"
              ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_4 = ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0__tmp_copy_4;
#line 1982 "unify_gen.m"
              ll_backend__unify_gen__HeadVar__2_2 = ll_backend__unify_gen__HeadVar__2__tmp_copy_2;
#line 1982 "unify_gen.m"
            }
#line 1982 "unify_gen.m"
            continue;
#line 1979 "unify_gen.m"
          }
#line 1976 "unify_gen.m"
      }
#line 1976 "unify_gen.m"
      break;
#line 1976 "unify_gen.m"
    }
#line 1971 "unify_gen.m"
}

#line 1915 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__det_single_arg_width_2_p_0(
#line 1915 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ArgWidths_3,
#line 1915 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__ArgWidth_4)
#line 1915 "unify_gen.m"
{
#line 1919 "unify_gen.m"
  {
#line 1919 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;

#line 1919 "unify_gen.m"
    if ((ll_backend__unify_gen__ArgWidths_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1923 "unify_gen.m"
      {
#line 1924 "unify_gen.m"
        {
#line 1924 "unify_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.det_single_arg_width\'/2", (MR_String) "unexpected arg_width list");
#line 1924 "unify_gen.m"
          return;
        }
#line 1923 "unify_gen.m"
      }
#line 1919 "unify_gen.m"
    else
#line 1919 "unify_gen.m"
      {
#line 1919 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ArgWidths_3, (MR_Integer) 1)));
#line 1919 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ArgWidths_3, (MR_Integer) 0)));

#line 1919 "unify_gen.m"
        if ((ll_backend__unify_gen__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1919 "unify_gen.m"
          *ll_backend__unify_gen__ArgWidth_4 = ll_backend__unify_gen__V_20_20;
#line 1919 "unify_gen.m"
        else
#line 1923 "unify_gen.m"
          {
#line 1924 "unify_gen.m"
            {
#line 1924 "unify_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.det_single_arg_width\'/2", (MR_String) "unexpected arg_width list");
#line 1924 "unify_gen.m"
              return;
            }
#line 1923 "unify_gen.m"
          }
#line 1919 "unify_gen.m"
      }
#line 1919 "unify_gen.m"
  }
#line 1915 "unify_gen.m"
}

#line 1815 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_const_struct_arg_6_p_0(
#line 1815 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ModuleInfo_7,
#line 1815 "unify_gen.m"
  MR_Word ll_backend__unify_gen__UnboxedFloats_8,
#line 1815 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConstStructMap_9,
#line 1815 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConstArg_10,
#line 1815 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ArgWidth_11,
#line 1815 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__TypedRval_12)
#line 1815 "unify_gen.m"
{
#line 1822 "unify_gen.m"
  {
#line 1822 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;

#line 1822 "unify_gen.m"
    if (((MR_tag((MR_Word) ll_backend__unify_gen__ConstArg_10)) == (MR_mktag((MR_Integer) 0))))
#line 1822 "unify_gen.m"
      {
#line 1822 "unify_gen.m"
        MR_Integer ll_backend__unify_gen__ConstNum_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ConstArg_10, (MR_Integer) 0)));
#line 1823 "unify_gen.m"
        MR_Box ll_backend__unify_gen__conv0_TypedRval_12;

#line 1823 "unify_gen.m"
        {
#line 1823 "unify_gen.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ll_backend__unify_gen__ConstStructMap_9, ll_backend__unify_gen__ConstNum_13, &ll_backend__unify_gen__conv0_TypedRval_12);
        }
#line 1823 "unify_gen.m"
        *ll_backend__unify_gen__TypedRval_12 = ((MR_Word) ll_backend__unify_gen__conv0_TypedRval_12);
#line 1822 "unify_gen.m"
      }
#line 1822 "unify_gen.m"
    else
#line 1825 "unify_gen.m"
      {
#line 1825 "unify_gen.m"
        MR_Word ll_backend__unify_gen__ConsId_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ConstArg_10, (MR_Integer) 0)));
#line 1825 "unify_gen.m"
        MR_Word ll_backend__unify_gen__ConsTag_16;
#line 1825 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ConstArg_10, (MR_Integer) 1)));

#line 1826 "unify_gen.m"
        {
#line 1826 "unify_gen.m"
          ll_backend__unify_gen__ConsTag_16 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ll_backend__unify_gen__ModuleInfo_7, ll_backend__unify_gen__ConsId_14);
        }
#line 1827 "unify_gen.m"
        {
#line 1827 "unify_gen.m"
          ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_95_115_116_114_117_99_116_95_97_114_103_95_116_97_103_95_95_91_49_44_32_51_93_95_48_6_p_0(ll_backend__unify_gen__UnboxedFloats_8, ll_backend__unify_gen__ConsTag_16, ll_backend__unify_gen__ArgWidth_11, ll_backend__unify_gen__TypedRval_12);
#line 1827 "unify_gen.m"
          return;
        }
#line 1825 "unify_gen.m"
      }
#line 1822 "unify_gen.m"
  }
#line 1815 "unify_gen.m"
}

#line 1812 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_const_struct_args_6_p_0_1(
#line 1812 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg,
#line 1812 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
#line 1812 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
#line 1812 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_3)
#line 1812 "unify_gen.m"
{
#line 1812 "unify_gen.m"
  {
#line 1812 "unify_gen.m"
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;
#line 1812 "unify_gen.m"
    MR_Word ll_backend__unify_gen__conv0_TypedRval_12;

#line 1812 "unify_gen.m"
    {
#line 1812 "unify_gen.m"
      ll_backend__unify_gen__generate_const_struct_arg_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 5))), ((MR_Word) ll_backend__unify_gen__wrapper_arg_1), ((MR_Word) ll_backend__unify_gen__wrapper_arg_2), &ll_backend__unify_gen__conv0_TypedRval_12);
    }
#line 1812 "unify_gen.m"
    *ll_backend__unify_gen__wrapper_arg_3 = ((MR_Box) (ll_backend__unify_gen__conv0_TypedRval_12));
#line 1812 "unify_gen.m"
  }
#line 1812 "unify_gen.m"
}

#line 1805 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_const_struct_args_6_p_0(
#line 1805 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ModuleInfo_7,
#line 1805 "unify_gen.m"
  MR_Word ll_backend__unify_gen__UnboxedFloats_8,
#line 1805 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConstStructMap_9,
#line 1805 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConstArgs_10,
#line 1805 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ArgWidths_11,
#line 1805 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__TypedRvals_12)
#line 1805 "unify_gen.m"
{
#line 1810 "unify_gen.m"
  {
#line 1810 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 1810 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_13_13;

#line 1812 "unify_gen.m"
    {
#line 1812 "unify_gen.m"
      ll_backend__unify_gen__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1812 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_13_13, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_10[0]));
#line 1812 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_13_13, 1) = ((MR_Box) (ll_backend__unify_gen__generate_const_struct_args_6_p_0_1));
#line 1812 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1812 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_13_13, 3) = ((MR_Box) (ll_backend__unify_gen__ModuleInfo_7));
#line 1812 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_13_13, 4) = ((MR_Box) (ll_backend__unify_gen__UnboxedFloats_8));
#line 1812 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_13_13, 5) = ((MR_Box) (ll_backend__unify_gen__ConstStructMap_9));
#line 1812 "unify_gen.m"
    }
#line 1811 "unify_gen.m"
    {
#line 1811 "unify_gen.m"
      mercury__list__map_corresponding_4_p_0((MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ll_backend__unify_gen__V_13_13, ll_backend__unify_gen__ConstArgs_10, ll_backend__unify_gen__ArgWidths_11, ll_backend__unify_gen__TypedRvals_12);
#line 1811 "unify_gen.m"
      return;
    }
#line 1810 "unify_gen.m"
  }
#line 1805 "unify_gen.m"
}

#line 1701 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_const_struct_7_p_0(
#line 1701 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ModuleInfo_8,
#line 1701 "unify_gen.m"
  MR_Word ll_backend__unify_gen__UnboxedFloats_9,
#line 1701 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__3_3,
#line 1701 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_ConstStructMap_0_21,
#line 1701 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_ConstStructMap_22,
#line 1701 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_23,
#line 1701 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_24)
#line 1701 "unify_gen.m"
{
#line 1707 "unify_gen.m"
  {
#line 1707 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 1707 "unify_gen.m"
    MR_Integer ll_backend__unify_gen__ConstNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__HeadVar__3_3, (MR_Integer) 0)));
#line 1707 "unify_gen.m"
    MR_Word ll_backend__unify_gen__ConstStruct_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__HeadVar__3_3, (MR_Integer) 1)));
#line 1707 "unify_gen.m"
    MR_Word ll_backend__unify_gen__ConsId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ConstStruct_11, (MR_Integer) 0)));
#line 1707 "unify_gen.m"
    MR_Word ll_backend__unify_gen__ConstArgs_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ConstStruct_11, (MR_Integer) 1)));
#line 1707 "unify_gen.m"
    MR_Word ll_backend__unify_gen__ConsTag_18;
#line 1707 "unify_gen.m"
    MR_Word ll_backend__unify_gen__ConsArgWidths_19;
#line 1707 "unify_gen.m"
    MR_Word ll_backend__unify_gen__Rval_20;
#line 1708 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ConstStruct_11, (MR_Integer) 2)));
#line 1708 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ConstStruct_11, (MR_Integer) 3)));

#line 1709 "unify_gen.m"
    {
#line 1709 "unify_gen.m"
      ll_backend__unify_gen__ConsTag_18 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ll_backend__unify_gen__ModuleInfo_8, ll_backend__unify_gen__ConsId_14);
    }
#line 1710 "unify_gen.m"
    {
#line 1710 "unify_gen.m"
      ll_backend__unify_gen__get_cons_arg_widths_4_p_0((MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0, ll_backend__unify_gen__ModuleInfo_8, ll_backend__unify_gen__ConsId_14, ll_backend__unify_gen__ConstArgs_15, &ll_backend__unify_gen__ConsArgWidths_19);
    }
#line 1711 "unify_gen.m"
    {
#line 1711 "unify_gen.m"
      ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_95_115_116_114_117_99_116_95_114_118_97_108_95_95_91_52_93_95_48_10_p_0(ll_backend__unify_gen__ModuleInfo_8, ll_backend__unify_gen__UnboxedFloats_9, ll_backend__unify_gen__STATE_VARIABLE_ConstStructMap_0_21, ll_backend__unify_gen__ConsTag_18, ll_backend__unify_gen__ConstArgs_15, ll_backend__unify_gen__ConsArgWidths_19, &ll_backend__unify_gen__Rval_20, ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_23, ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_24);
    }
#line 1713 "unify_gen.m"
    {
#line 1713 "unify_gen.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ll_backend__unify_gen__ConstNum_10, ((MR_Box) (ll_backend__unify_gen__Rval_20)), ll_backend__unify_gen__STATE_VARIABLE_ConstStructMap_0_21, ll_backend__unify_gen__STATE_VARIABLE_ConstStructMap_22);
#line 1713 "unify_gen.m"
      return;
    }
#line 1707 "unify_gen.m"
  }
#line 1701 "unify_gen.m"
}

#line 1635 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_direct_arg_deconstruct_9_p_0(
#line 1635 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Var_10,
#line 1635 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ArgVar_11,
#line 1635 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__Ptag_12,
#line 1635 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Mode_13,
#line 1635 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Type_14,
#line 1635 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_15,
#line 1635 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CI_16,
#line 1635 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_26,
#line 1635 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_27)
#line 1635 "unify_gen.m"
{
#line 1640 "unify_gen.m"
  {
#line 1640 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 1640 "unify_gen.m"
    MR_Word ll_backend__unify_gen__LI_18;
#line 1640 "unify_gen.m"
    MR_Word ll_backend__unify_gen__RI_19;
#line 1640 "unify_gen.m"
    MR_Word ll_backend__unify_gen__LF_20;
#line 1640 "unify_gen.m"
    MR_Word ll_backend__unify_gen__RF_21;
#line 1640 "unify_gen.m"
    MR_Word ll_backend__unify_gen__ModuleInfo_22;
#line 1640 "unify_gen.m"
    MR_Word ll_backend__unify_gen__LeftMode_23;
#line 1640 "unify_gen.m"
    MR_Word ll_backend__unify_gen__RightMode_24;
#line 1640 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Mode_13, (MR_Integer) 0)));
#line 1640 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Mode_13, (MR_Integer) 1)));
#line 1640 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_30_30;
#line 1640 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_31_31;

#line 1641 "unify_gen.m"
    ll_backend__unify_gen__LI_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_28_28, (MR_Integer) 0)));
#line 1641 "unify_gen.m"
    ll_backend__unify_gen__RI_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_28_28, (MR_Integer) 1)));
#line 1641 "unify_gen.m"
    ll_backend__unify_gen__LF_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_29_29, (MR_Integer) 0)));
#line 1641 "unify_gen.m"
    ll_backend__unify_gen__RF_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_29_29, (MR_Integer) 1)));
#line 1642 "unify_gen.m"
    {
#line 1642 "unify_gen.m"
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__unify_gen__CI_16, &ll_backend__unify_gen__ModuleInfo_22);
    }
#line 1643 "unify_gen.m"
    {
#line 1643 "unify_gen.m"
      ll_backend__unify_gen__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1643 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_30_30, 0) = ((MR_Box) (ll_backend__unify_gen__LI_18));
#line 1643 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_30_30, 1) = ((MR_Box) (ll_backend__unify_gen__LF_20));
#line 1643 "unify_gen.m"
    }
#line 1643 "unify_gen.m"
    {
#line 1643 "unify_gen.m"
      check_hlds__mode_util__mode_to_arg_mode_4_p_0(ll_backend__unify_gen__ModuleInfo_22, ll_backend__unify_gen__V_30_30, ll_backend__unify_gen__Type_14, &ll_backend__unify_gen__LeftMode_23);
    }
#line 1644 "unify_gen.m"
    {
#line 1644 "unify_gen.m"
      ll_backend__unify_gen__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1644 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_31_31, 0) = ((MR_Box) (ll_backend__unify_gen__RI_19));
#line 1644 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_31_31, 1) = ((MR_Box) (ll_backend__unify_gen__RF_21));
#line 1644 "unify_gen.m"
    }
#line 1644 "unify_gen.m"
    {
#line 1644 "unify_gen.m"
      check_hlds__mode_util__mode_to_arg_mode_4_p_0(ll_backend__unify_gen__ModuleInfo_22, ll_backend__unify_gen__V_31_31, ll_backend__unify_gen__Type_14, &ll_backend__unify_gen__RightMode_24);
    }
#line 1647 "unify_gen.m"
    ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__LeftMode_23 == (MR_Integer) 0);
#line 1647 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 1648 "unify_gen.m"
      ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__RightMode_24 == (MR_Integer) 1);
#line 1656 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 1653 "unify_gen.m"
      {
#line 1650 "unify_gen.m"
        {
#line 1650 "unify_gen.m"
          ll_backend__unify_gen__succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CLD_0_26, ll_backend__unify_gen__ArgVar_11);
        }
#line 1653 "unify_gen.m"
        if (ll_backend__unify_gen__succeeded)
#line 1651 "unify_gen.m"
          {
#line 1651 "unify_gen.m"
            MR_Word ll_backend__unify_gen__BodyRval_25;
#line 1651 "unify_gen.m"
            MR_Word ll_backend__unify_gen__V_33_33;
#line 1651 "unify_gen.m"
            MR_Word ll_backend__unify_gen__V_34_34;
#line 1651 "unify_gen.m"
            MR_Word ll_backend__unify_gen__V_35_35;

#line 1651 "unify_gen.m"
            {
#line 1651 "unify_gen.m"
              ll_backend__unify_gen__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1651 "unify_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_33_33, 0) = ((MR_Box) (ll_backend__unify_gen__Var_10));
#line 1651 "unify_gen.m"
            }
#line 1651 "unify_gen.m"
            {
#line 1651 "unify_gen.m"
              ll_backend__unify_gen__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1651 "unify_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_35_35, 0) = ((MR_Box) (ll_backend__unify_gen__Ptag_12));
#line 1651 "unify_gen.m"
            }
#line 1651 "unify_gen.m"
            {
#line 1651 "unify_gen.m"
              ll_backend__unify_gen__V_34_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1651 "unify_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_34_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1651 "unify_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_34_34, 1) = ((MR_Box) (ll_backend__unify_gen__V_35_35));
#line 1651 "unify_gen.m"
            }
#line 1651 "unify_gen.m"
            {
#line 1651 "unify_gen.m"
              ll_backend__unify_gen__BodyRval_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1651 "unify_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__BodyRval_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1651 "unify_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__BodyRval_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14))));
#line 1651 "unify_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__BodyRval_25, 2) = ((MR_Box) (ll_backend__unify_gen__V_33_33));
#line 1651 "unify_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__BodyRval_25, 3) = ((MR_Box) (ll_backend__unify_gen__V_34_34));
#line 1651 "unify_gen.m"
            }
#line 1652 "unify_gen.m"
            {
#line 1652 "unify_gen.m"
              ll_backend__code_loc_dep__assign_expr_to_var_5_p_0(ll_backend__unify_gen__ArgVar_11, ll_backend__unify_gen__BodyRval_25, ll_backend__unify_gen__Code_15, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_26, ll_backend__unify_gen__STATE_VARIABLE_CLD_27);
#line 1652 "unify_gen.m"
              return;
            }
#line 1651 "unify_gen.m"
          }
#line 1653 "unify_gen.m"
        else
#line 1654 "unify_gen.m"
          {
#line 1654 "unify_gen.m"
            {
#line 1654 "unify_gen.m"
              *ll_backend__unify_gen__Code_15 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
            }
#line 1654 "unify_gen.m"
            *ll_backend__unify_gen__STATE_VARIABLE_CLD_27 = ll_backend__unify_gen__STATE_VARIABLE_CLD_0_26;
#line 1654 "unify_gen.m"
          }
#line 1653 "unify_gen.m"
      }
#line 1656 "unify_gen.m"
    else
#line 1662 "unify_gen.m"
      {
#line 1658 "unify_gen.m"
        ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__LeftMode_23 == (MR_Integer) 1);
#line 1658 "unify_gen.m"
        if (ll_backend__unify_gen__succeeded)
#line 1659 "unify_gen.m"
          ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__RightMode_24 == (MR_Integer) 0);
#line 1662 "unify_gen.m"
        if (ll_backend__unify_gen__succeeded)
#line 1661 "unify_gen.m"
          {
#line 1661 "unify_gen.m"
            MR_Word ll_backend__unify_gen__V_37_37;

#line 1661 "unify_gen.m"
            {
#line 1661 "unify_gen.m"
              ll_backend__unify_gen__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1661 "unify_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_37_37, 0) = ((MR_Box) (ll_backend__unify_gen__ArgVar_11));
#line 1661 "unify_gen.m"
            }
#line 1661 "unify_gen.m"
            {
#line 1661 "unify_gen.m"
              ll_backend__code_loc_dep__reassign_mkword_hole_var_6_p_0(ll_backend__unify_gen__Var_10, ll_backend__unify_gen__Ptag_12, ll_backend__unify_gen__V_37_37, ll_backend__unify_gen__Code_15, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_26, ll_backend__unify_gen__STATE_VARIABLE_CLD_27);
#line 1661 "unify_gen.m"
              return;
            }
#line 1661 "unify_gen.m"
          }
#line 1662 "unify_gen.m"
        else
#line 1669 "unify_gen.m"
          {
#line 1663 "unify_gen.m"
            ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__LeftMode_23 == (MR_Integer) 2);
#line 1663 "unify_gen.m"
            if (ll_backend__unify_gen__succeeded)
#line 1664 "unify_gen.m"
              ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__RightMode_24 == (MR_Integer) 2);
#line 1669 "unify_gen.m"
            if (ll_backend__unify_gen__succeeded)
#line 1666 "unify_gen.m"
              {
#line 1666 "unify_gen.m"
                {
#line 1666 "unify_gen.m"
                  *ll_backend__unify_gen__Code_15 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                }
#line 1666 "unify_gen.m"
              }
#line 1669 "unify_gen.m"
            else
#line 1678 "unify_gen.m"
              {
#line 1671 "unify_gen.m"
                ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__LeftMode_23 == (MR_Integer) 0);
#line 1671 "unify_gen.m"
                if (ll_backend__unify_gen__succeeded)
#line 1672 "unify_gen.m"
                  ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__RightMode_24 == (MR_Integer) 0);
#line 1678 "unify_gen.m"
                if (ll_backend__unify_gen__succeeded)
#line 1677 "unify_gen.m"
                  {
#line 1677 "unify_gen.m"
                    {
#line 1677 "unify_gen.m"
                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_direct_arg_deconstruct\'/9", (MR_String) "test in arg of [de]construction");
#line 1677 "unify_gen.m"
                      return;
                    }
#line 1677 "unify_gen.m"
                  }
#line 1678 "unify_gen.m"
                else
#line 1679 "unify_gen.m"
                  {
#line 1679 "unify_gen.m"
                    {
#line 1679 "unify_gen.m"
                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_direct_arg_deconstruct\'/9", (MR_String) "some strange unify");
#line 1679 "unify_gen.m"
                      return;
                    }
#line 1679 "unify_gen.m"
                  }
#line 1678 "unify_gen.m"
              }
#line 1669 "unify_gen.m"
            *ll_backend__unify_gen__STATE_VARIABLE_CLD_27 = ll_backend__unify_gen__STATE_VARIABLE_CLD_0_26;
#line 1669 "unify_gen.m"
          }
#line 1662 "unify_gen.m"
      }
#line 1640 "unify_gen.m"
  }
#line 1635 "unify_gen.m"
}

#line 1589 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_direct_arg_construct_9_p_0(
#line 1589 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Var_10,
#line 1589 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Arg_11,
#line 1589 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__Ptag_12,
#line 1589 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Mode_13,
#line 1589 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Type_14,
#line 1589 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_15,
#line 1589 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CI_16,
#line 1589 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_25,
#line 1589 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_26)
#line 1589 "unify_gen.m"
{
#line 1593 "unify_gen.m"
  {
#line 1593 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 1593 "unify_gen.m"
    MR_Word ll_backend__unify_gen__LI_18;
#line 1593 "unify_gen.m"
    MR_Word ll_backend__unify_gen__RI_19;
#line 1593 "unify_gen.m"
    MR_Word ll_backend__unify_gen__LF_20;
#line 1593 "unify_gen.m"
    MR_Word ll_backend__unify_gen__RF_21;
#line 1593 "unify_gen.m"
    MR_Word ll_backend__unify_gen__ModuleInfo_22;
#line 1593 "unify_gen.m"
    MR_Word ll_backend__unify_gen__LeftMode_23;
#line 1593 "unify_gen.m"
    MR_Word ll_backend__unify_gen__RightMode_24;
#line 1593 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Mode_13, (MR_Integer) 0)));
#line 1593 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Mode_13, (MR_Integer) 1)));
#line 1593 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_29_29;
#line 1593 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_30_30;

#line 1594 "unify_gen.m"
    ll_backend__unify_gen__LI_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_27_27, (MR_Integer) 0)));
#line 1594 "unify_gen.m"
    ll_backend__unify_gen__RI_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_27_27, (MR_Integer) 1)));
#line 1594 "unify_gen.m"
    ll_backend__unify_gen__LF_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_28_28, (MR_Integer) 0)));
#line 1594 "unify_gen.m"
    ll_backend__unify_gen__RF_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_28_28, (MR_Integer) 1)));
#line 1595 "unify_gen.m"
    {
#line 1595 "unify_gen.m"
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__unify_gen__CI_16, &ll_backend__unify_gen__ModuleInfo_22);
    }
#line 1596 "unify_gen.m"
    {
#line 1596 "unify_gen.m"
      ll_backend__unify_gen__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1596 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_29_29, 0) = ((MR_Box) (ll_backend__unify_gen__LI_18));
#line 1596 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_29_29, 1) = ((MR_Box) (ll_backend__unify_gen__LF_20));
#line 1596 "unify_gen.m"
    }
#line 1596 "unify_gen.m"
    {
#line 1596 "unify_gen.m"
      check_hlds__mode_util__mode_to_arg_mode_4_p_0(ll_backend__unify_gen__ModuleInfo_22, ll_backend__unify_gen__V_29_29, ll_backend__unify_gen__Type_14, &ll_backend__unify_gen__LeftMode_23);
    }
#line 1597 "unify_gen.m"
    {
#line 1597 "unify_gen.m"
      ll_backend__unify_gen__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1597 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_30_30, 0) = ((MR_Box) (ll_backend__unify_gen__RI_19));
#line 1597 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_30_30, 1) = ((MR_Box) (ll_backend__unify_gen__RF_21));
#line 1597 "unify_gen.m"
    }
#line 1597 "unify_gen.m"
    {
#line 1597 "unify_gen.m"
      check_hlds__mode_util__mode_to_arg_mode_4_p_0(ll_backend__unify_gen__ModuleInfo_22, ll_backend__unify_gen__V_30_30, ll_backend__unify_gen__Type_14, &ll_backend__unify_gen__RightMode_24);
    }
#line 1600 "unify_gen.m"
    ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__LeftMode_23 == (MR_Integer) 0);
#line 1600 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 1601 "unify_gen.m"
      ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__RightMode_24 == (MR_Integer) 0);
#line 1607 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 1606 "unify_gen.m"
      {
#line 1606 "unify_gen.m"
        {
#line 1606 "unify_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_direct_arg_construct\'/9", (MR_String) "test in arg of [de]construction");
#line 1606 "unify_gen.m"
          return;
        }
#line 1606 "unify_gen.m"
      }
#line 1607 "unify_gen.m"
    else
#line 1613 "unify_gen.m"
      {
#line 1609 "unify_gen.m"
        ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__LeftMode_23 == (MR_Integer) 0);
#line 1609 "unify_gen.m"
        if (ll_backend__unify_gen__succeeded)
#line 1610 "unify_gen.m"
          ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__RightMode_24 == (MR_Integer) 1);
#line 1613 "unify_gen.m"
        if (ll_backend__unify_gen__succeeded)
#line 1612 "unify_gen.m"
          {
#line 1612 "unify_gen.m"
            {
#line 1612 "unify_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_direct_arg_construct\'/9", (MR_String) "left-to-right data flow in construction");
#line 1612 "unify_gen.m"
              return;
            }
#line 1612 "unify_gen.m"
          }
#line 1613 "unify_gen.m"
        else
#line 1619 "unify_gen.m"
          {
#line 1615 "unify_gen.m"
            ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__LeftMode_23 == (MR_Integer) 1);
#line 1615 "unify_gen.m"
            if (ll_backend__unify_gen__succeeded)
#line 1616 "unify_gen.m"
              ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__RightMode_24 == (MR_Integer) 0);
#line 1619 "unify_gen.m"
            if (ll_backend__unify_gen__succeeded)
#line 1618 "unify_gen.m"
              {
#line 1618 "unify_gen.m"
                MR_Word ll_backend__unify_gen__V_37_37;
#line 1618 "unify_gen.m"
                MR_Word ll_backend__unify_gen__V_39_39;

#line 1618 "unify_gen.m"
                {
#line 1618 "unify_gen.m"
                  ll_backend__unify_gen__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1618 "unify_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_39_39, 0) = ((MR_Box) (ll_backend__unify_gen__Arg_11));
#line 1618 "unify_gen.m"
                }
#line 1618 "unify_gen.m"
                {
#line 1618 "unify_gen.m"
                  ll_backend__unify_gen__V_37_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1618 "unify_gen.m"
                  MR_hl_field(MR_mktag(2), ll_backend__unify_gen__V_37_37, 0) = ((MR_Box) (ll_backend__unify_gen__Ptag_12));
#line 1618 "unify_gen.m"
                  MR_hl_field(MR_mktag(2), ll_backend__unify_gen__V_37_37, 1) = ((MR_Box) (ll_backend__unify_gen__V_39_39));
#line 1618 "unify_gen.m"
                }
#line 1618 "unify_gen.m"
                {
#line 1618 "unify_gen.m"
                  ll_backend__code_loc_dep__assign_expr_to_var_5_p_0(ll_backend__unify_gen__Var_10, ll_backend__unify_gen__V_37_37, ll_backend__unify_gen__Code_15, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_25, ll_backend__unify_gen__STATE_VARIABLE_CLD_26);
#line 1618 "unify_gen.m"
                  return;
                }
#line 1618 "unify_gen.m"
              }
#line 1619 "unify_gen.m"
            else
#line 1627 "unify_gen.m"
              {
#line 1620 "unify_gen.m"
                ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__LeftMode_23 == (MR_Integer) 2);
#line 1620 "unify_gen.m"
                if (ll_backend__unify_gen__succeeded)
#line 1621 "unify_gen.m"
                  ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__RightMode_24 == (MR_Integer) 2);
#line 1627 "unify_gen.m"
                if (ll_backend__unify_gen__succeeded)
#line 1625 "unify_gen.m"
                  {
#line 1625 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__V_40_40;

#line 1625 "unify_gen.m"
                    {
#line 1625 "unify_gen.m"
                      ll_backend__unify_gen__V_40_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1625 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_40_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1625 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_40_40, 1) = ((MR_Box) (ll_backend__unify_gen__Ptag_12));
#line 1625 "unify_gen.m"
                    }
#line 1625 "unify_gen.m"
                    {
#line 1625 "unify_gen.m"
                      ll_backend__code_loc_dep__assign_const_to_var_5_p_0(ll_backend__unify_gen__Var_10, ll_backend__unify_gen__V_40_40, ll_backend__unify_gen__CI_16, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_25, ll_backend__unify_gen__STATE_VARIABLE_CLD_26);
                    }
#line 1626 "unify_gen.m"
                    {
#line 1626 "unify_gen.m"
                      *ll_backend__unify_gen__Code_15 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                    }
#line 1625 "unify_gen.m"
                  }
#line 1627 "unify_gen.m"
                else
#line 1628 "unify_gen.m"
                  {
#line 1628 "unify_gen.m"
                    {
#line 1628 "unify_gen.m"
                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_direct_arg_construct\'/9", (MR_String) "some strange unify");
#line 1628 "unify_gen.m"
                      return;
                    }
#line 1628 "unify_gen.m"
                  }
#line 1627 "unify_gen.m"
              }
#line 1619 "unify_gen.m"
          }
#line 1613 "unify_gen.m"
      }
#line 1593 "unify_gen.m"
  }
#line 1589 "unify_gen.m"
}

#line 1577 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__field_offset_pair_3_p_0(
#line 1577 "unify_gen.m"
  MR_Word ll_backend__unify_gen__LvalA_4,
#line 1577 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__LvalA_2,
#line 1577 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__LvalB_5)
#line 1577 "unify_gen.m"
{
#line 1579 "unify_gen.m"
  {
#line 1579 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 1579 "unify_gen.m"
    MR_Word ll_backend__unify_gen__Ptag_6;
#line 1579 "unify_gen.m"
    MR_Word ll_backend__unify_gen__Address_7;
#line 1579 "unify_gen.m"
    MR_Integer ll_backend__unify_gen__Offset_8;
#line 1579 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_9_9;
#line 1579 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_10_10;
#line 1579 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_11_11;
#line 1579 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_12_12;
#line 1579 "unify_gen.m"
    MR_Integer ll_backend__unify_gen__V_13_13;
#line 1579 "unify_gen.m"
    MR_Integer ll_backend__unify_gen__V_14_14;

#line 1579 "unify_gen.m"
    *ll_backend__unify_gen__LvalA_2 = ll_backend__unify_gen__LvalA_4;
#line 1580 "unify_gen.m"
    ll_backend__unify_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__unify_gen__LvalA_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__LvalA_4, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 1580 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 1580 "unify_gen.m"
      {
#line 1580 "unify_gen.m"
        ll_backend__unify_gen__Ptag_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__LvalA_4, (MR_Integer) 1)));
#line 1580 "unify_gen.m"
        ll_backend__unify_gen__Address_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__LvalA_4, (MR_Integer) 2)));
#line 1580 "unify_gen.m"
        ll_backend__unify_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__LvalA_4, (MR_Integer) 3)));
#line 1580 "unify_gen.m"
        ll_backend__unify_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__unify_gen__V_9_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_9_9, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1580 "unify_gen.m"
        if (ll_backend__unify_gen__succeeded)
#line 1580 "unify_gen.m"
          {
#line 1580 "unify_gen.m"
            ll_backend__unify_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_9_9, (MR_Integer) 1)));
#line 1580 "unify_gen.m"
            ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__V_10_10)) == (MR_mktag((MR_Integer) 1)));
#line 1580 "unify_gen.m"
            if (ll_backend__unify_gen__succeeded)
#line 1580 "unify_gen.m"
              {
#line 1580 "unify_gen.m"
                ll_backend__unify_gen__Offset_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_10_10, (MR_Integer) 0)));
#line 1581 "unify_gen.m"
                ll_backend__unify_gen__V_14_14 = (MR_Integer) 1;
#line 1581 "unify_gen.m"
                ll_backend__unify_gen__V_13_13 = (ll_backend__unify_gen__Offset_8 + ll_backend__unify_gen__V_14_14);
#line 1581 "unify_gen.m"
                {
#line 1581 "unify_gen.m"
                  ll_backend__unify_gen__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1581 "unify_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_12_12, 0) = ((MR_Box) (ll_backend__unify_gen__V_13_13));
#line 1581 "unify_gen.m"
                }
#line 1581 "unify_gen.m"
                {
#line 1581 "unify_gen.m"
                  ll_backend__unify_gen__V_11_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1581 "unify_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_11_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1581 "unify_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_11_11, 1) = ((MR_Box) (ll_backend__unify_gen__V_12_12));
#line 1581 "unify_gen.m"
                }
#line 1581 "unify_gen.m"
                {
#line 1581 "unify_gen.m"
                  MR_Word base;
#line 1581 "unify_gen.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1581 "unify_gen.m"
                  *ll_backend__unify_gen__LvalB_5 = base;
#line 1581 "unify_gen.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 1581 "unify_gen.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__unify_gen__Ptag_6));
#line 1581 "unify_gen.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__unify_gen__Address_7));
#line 1581 "unify_gen.m"
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__unify_gen__V_11_11));
#line 1581 "unify_gen.m"
                }
#line 1581 "unify_gen.m"
                ll_backend__unify_gen__succeeded = MR_TRUE;
#line 1580 "unify_gen.m"
              }
#line 1580 "unify_gen.m"
          }
#line 1580 "unify_gen.m"
      }
#line 1579 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 1579 "unify_gen.m"
  }
#line 1577 "unify_gen.m"
}

#line 1487 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_sub_assign_6_p_0(
#line 1487 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Left_7,
#line 1487 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Right_8,
#line 1487 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_9,
#line 1487 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CI_10,
#line 1487 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_40,
#line 1487 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_41)
#line 1487 "unify_gen.m"
{
#line 1492 "unify_gen.m"
  {
#line 1492 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;

#line 1492 "unify_gen.m"
    if (((MR_tag((MR_Word) ll_backend__unify_gen__Left_7)) == (MR_mktag((MR_Integer) 1))))
#line 1492 "unify_gen.m"
      {
#line 1492 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Left_7, (MR_Integer) 1)));
#line 1492 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Left_7, (MR_Integer) 0)));

#line 1492 "unify_gen.m"
        if (((MR_tag((MR_Word) ll_backend__unify_gen__Right_8)) == (MR_mktag((MR_Integer) 1))))
#line 1492 "unify_gen.m"
          {
#line 1495 "unify_gen.m"
            {
#line 1495 "unify_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_sub_assign\'/6", (MR_String) "lval/lval");
#line 1495 "unify_gen.m"
              return;
            }
#line 1492 "unify_gen.m"
          }
#line 1492 "unify_gen.m"
        else
#line 1497 "unify_gen.m"
          {
#line 1497 "unify_gen.m"
            MR_Word ll_backend__unify_gen__TypeCtorInfo_135_135;
#line 1497 "unify_gen.m"
            MR_Word ll_backend__unify_gen__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Right_8, (MR_Integer) 0)));
#line 1497 "unify_gen.m"
            MR_Word ll_backend__unify_gen__SourceCode_19;
#line 1497 "unify_gen.m"
            MR_Word ll_backend__unify_gen__Source_20;
#line 1497 "unify_gen.m"
            MR_Word ll_backend__unify_gen__Lval_21;
#line 1497 "unify_gen.m"
            MR_Word ll_backend__unify_gen__MaterializeCode_22;
#line 1497 "unify_gen.m"
            MR_Word ll_backend__unify_gen__AssignCode_23;
#line 1497 "unify_gen.m"
            MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_61_61;
#line 1497 "unify_gen.m"
            MR_Word ll_backend__unify_gen__V_93_93;

#line 1501 "unify_gen.m"
            {
#line 1501 "unify_gen.m"
              ll_backend__code_loc_dep__produce_variable_6_p_0(ll_backend__unify_gen__Var_18, &ll_backend__unify_gen__SourceCode_19, &ll_backend__unify_gen__Source_20, ll_backend__unify_gen__CI_10, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_40, &ll_backend__unify_gen__STATE_VARIABLE_CLD_61_61);
            }
#line 1502 "unify_gen.m"
            {
#line 1502 "unify_gen.m"
              ll_backend__code_loc_dep__materialize_vars_in_lval_6_p_0(ll_backend__unify_gen__V_163_163, &ll_backend__unify_gen__Lval_21, &ll_backend__unify_gen__MaterializeCode_22, ll_backend__unify_gen__CI_10, ll_backend__unify_gen__STATE_VARIABLE_CLD_61_61, ll_backend__unify_gen__STATE_VARIABLE_CLD_41);
            }
#line 1507 "unify_gen.m"
#line 1507 "unify_gen.m"
            switch (MR_tag((MR_Word) ll_backend__unify_gen__V_162_162)) {
#line 1507 "unify_gen.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1507 "unify_gen.m"
              case (MR_Integer) 0:
#line 1507 "unify_gen.m"
#line 1507 "unify_gen.m"
                switch (MR_unmkbody(ll_backend__unify_gen__V_162_162)) {
#line 1507 "unify_gen.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1507 "unify_gen.m"
                  case (MR_Integer) 0:
#line 1504 "unify_gen.m"
                    {
#line 1504 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__V_90_90;
#line 1504 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__V_91_91;

#line 1505 "unify_gen.m"
                      {
#line 1505 "unify_gen.m"
                        ll_backend__unify_gen__V_91_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1505 "unify_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_91_91, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1505 "unify_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_91_91, 1) = ((MR_Box) (ll_backend__unify_gen__Lval_21));
#line 1505 "unify_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_91_91, 2) = ((MR_Box) (ll_backend__unify_gen__Source_20));
#line 1505 "unify_gen.m"
                      }
#line 1505 "unify_gen.m"
                      {
#line 1505 "unify_gen.m"
                        ll_backend__unify_gen__V_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1505 "unify_gen.m"
                        MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_90_90, 0) = ((MR_Box) (ll_backend__unify_gen__V_91_91));
#line 1505 "unify_gen.m"
                        MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_90_90, 1) = ((MR_Box) ((MR_String) "Copy value"));
#line 1505 "unify_gen.m"
                      }
#line 1505 "unify_gen.m"
                      {
#line 1505 "unify_gen.m"
                        ll_backend__unify_gen__AssignCode_23 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__unify_gen__V_90_90)));
                      }
#line 1504 "unify_gen.m"
                    }
#line 1507 "unify_gen.m"
                    break;
#line 1507 "unify_gen.m"
                  case (MR_Integer) 1:
#line 1521 "unify_gen.m"
                    {
#line 1521 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__LvalA_30;
#line 1521 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__LvalB_31;

#line 1522 "unify_gen.m"
                      {
#line 1522 "unify_gen.m"
                        ll_backend__unify_gen__succeeded = ll_backend__unify_gen__field_offset_pair_3_p_0(ll_backend__unify_gen__Lval_21, &ll_backend__unify_gen__LvalA_30, &ll_backend__unify_gen__LvalB_31);
                      }
#line 1521 "unify_gen.m"
                      if (ll_backend__unify_gen__succeeded)
#line 1523 "unify_gen.m"
                        {
#line 1523 "unify_gen.m"
                          MR_Word ll_backend__unify_gen__SrcA_32;
#line 1523 "unify_gen.m"
                          MR_Word ll_backend__unify_gen__SrcB_33;
#line 1523 "unify_gen.m"
                          MR_Word ll_backend__unify_gen__V_71_71;
#line 1523 "unify_gen.m"
                          MR_Word ll_backend__unify_gen__V_72_72;
#line 1523 "unify_gen.m"
                          MR_Word ll_backend__unify_gen__V_73_73;
#line 1523 "unify_gen.m"
                          MR_Word ll_backend__unify_gen__V_74_74;
#line 1523 "unify_gen.m"
                          MR_Word ll_backend__unify_gen__V_75_75;
#line 1523 "unify_gen.m"
                          MR_Word ll_backend__unify_gen__V_76_76;

#line 1523 "unify_gen.m"
                          {
#line 1523 "unify_gen.m"
                            ll_backend__unify_gen__SrcA_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1523 "unify_gen.m"
                            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__SrcA_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1523 "unify_gen.m"
                            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__SrcA_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 38))));
#line 1523 "unify_gen.m"
                            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__SrcA_32, 2) = ((MR_Box) (ll_backend__unify_gen__Source_20));
#line 1523 "unify_gen.m"
                            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__SrcA_32, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[8])));
#line 1523 "unify_gen.m"
                          }
#line 1524 "unify_gen.m"
                          {
#line 1524 "unify_gen.m"
                            ll_backend__unify_gen__SrcB_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1524 "unify_gen.m"
                            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__SrcB_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1524 "unify_gen.m"
                            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__SrcB_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 38))));
#line 1524 "unify_gen.m"
                            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__SrcB_33, 2) = ((MR_Box) (ll_backend__unify_gen__Source_20));
#line 1524 "unify_gen.m"
                            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__SrcB_33, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[9])));
#line 1524 "unify_gen.m"
                          }
#line 1527 "unify_gen.m"
                          {
#line 1527 "unify_gen.m"
                            ll_backend__unify_gen__V_73_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1527 "unify_gen.m"
                            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_73_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1527 "unify_gen.m"
                            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_73_73, 1) = ((MR_Box) (ll_backend__unify_gen__LvalA_30));
#line 1527 "unify_gen.m"
                            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_73_73, 2) = ((MR_Box) (ll_backend__unify_gen__SrcA_32));
#line 1527 "unify_gen.m"
                          }
#line 1527 "unify_gen.m"
                          {
#line 1527 "unify_gen.m"
                            ll_backend__unify_gen__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1527 "unify_gen.m"
                            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_72_72, 0) = ((MR_Box) (ll_backend__unify_gen__V_73_73));
#line 1527 "unify_gen.m"
                            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_72_72, 1) = ((MR_Box) ((MR_String) "Update double word"));
#line 1527 "unify_gen.m"
                          }
#line 1528 "unify_gen.m"
                          {
#line 1528 "unify_gen.m"
                            ll_backend__unify_gen__V_76_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1528 "unify_gen.m"
                            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_76_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1528 "unify_gen.m"
                            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_76_76, 1) = ((MR_Box) (ll_backend__unify_gen__LvalB_31));
#line 1528 "unify_gen.m"
                            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_76_76, 2) = ((MR_Box) (ll_backend__unify_gen__SrcB_33));
#line 1528 "unify_gen.m"
                          }
#line 1528 "unify_gen.m"
                          {
#line 1528 "unify_gen.m"
                            ll_backend__unify_gen__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1528 "unify_gen.m"
                            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_75_75, 0) = ((MR_Box) (ll_backend__unify_gen__V_76_76));
#line 1528 "unify_gen.m"
                            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_75_75, 1) = ((MR_Box) ((MR_String) "Update double word"));
#line 1528 "unify_gen.m"
                          }
#line 1529 "unify_gen.m"
                          {
#line 1529 "unify_gen.m"
                            ll_backend__unify_gen__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1529 "unify_gen.m"
                            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_74_74, 0) = ((MR_Box) (ll_backend__unify_gen__V_75_75));
#line 1529 "unify_gen.m"
                            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1529 "unify_gen.m"
                          }
#line 1527 "unify_gen.m"
                          {
#line 1527 "unify_gen.m"
                            ll_backend__unify_gen__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1527 "unify_gen.m"
                            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_71_71, 0) = ((MR_Box) (ll_backend__unify_gen__V_72_72));
#line 1527 "unify_gen.m"
                            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_71_71, 1) = ((MR_Box) (ll_backend__unify_gen__V_74_74));
#line 1527 "unify_gen.m"
                          }
#line 1526 "unify_gen.m"
                          {
#line 1526 "unify_gen.m"
                            ll_backend__unify_gen__AssignCode_23 = mercury__cord__from_list_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__unify_gen__V_71_71);
                          }
#line 1523 "unify_gen.m"
                        }
#line 1521 "unify_gen.m"
                      else
#line 1531 "unify_gen.m"
                        {
#line 1531 "unify_gen.m"
                          {
#line 1531 "unify_gen.m"
                            mercury__require__sorry_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_sub_assign\'/6", (MR_String) "double_word: non-field lval");
#line 1531 "unify_gen.m"
                            return;
                          }
#line 1531 "unify_gen.m"
                        }
#line 1521 "unify_gen.m"
                    }
#line 1507 "unify_gen.m"
                    break;
#line 1507 "unify_gen.m"
                }
#line 1507 "unify_gen.m"
                break;
#line 1507 "unify_gen.m"
              case (MR_Integer) 1:
#line 1513 "unify_gen.m"
                {
#line 1513 "unify_gen.m"
                  MR_Integer ll_backend__unify_gen__Mask_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_162_162, (MR_Integer) 0)));
#line 1513 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__ComplementMask_26;
#line 1513 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__MaskOld_27;
#line 1513 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__ShiftNew_28;
#line 1513 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__Combined_29;
#line 1513 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_81_81;
#line 1513 "unify_gen.m"
                  MR_Integer ll_backend__unify_gen__V_82_82;
#line 1513 "unify_gen.m"
                  MR_Integer ll_backend__unify_gen__V_83_83;
#line 1513 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_85_85;
#line 1513 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_87_87;
#line 1513 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_88_88;

#line 1514 "unify_gen.m"
                  {
#line 1514 "unify_gen.m"
                    ll_backend__unify_gen__V_83_83 = mercury__int__f_60_60_2_f_0(ll_backend__unify_gen__Mask_24, (MR_Integer) 0);
                  }
#line 1514 "unify_gen.m"
                  ll_backend__unify_gen__V_82_82 = ~(ll_backend__unify_gen__V_83_83);
#line 1514 "unify_gen.m"
                  {
#line 1514 "unify_gen.m"
                    ll_backend__unify_gen__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1514 "unify_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_81_81, 0) = ((MR_Box) (ll_backend__unify_gen__V_82_82));
#line 1514 "unify_gen.m"
                  }
#line 1514 "unify_gen.m"
                  {
#line 1514 "unify_gen.m"
                    ll_backend__unify_gen__ComplementMask_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1514 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ComplementMask_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1514 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ComplementMask_26, 1) = ((MR_Box) (ll_backend__unify_gen__V_81_81));
#line 1514 "unify_gen.m"
                  }
#line 1515 "unify_gen.m"
                  {
#line 1515 "unify_gen.m"
                    ll_backend__unify_gen__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1515 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_85_85, 0) = ((MR_Box) (ll_backend__unify_gen__Lval_21));
#line 1515 "unify_gen.m"
                  }
#line 1515 "unify_gen.m"
                  {
#line 1515 "unify_gen.m"
                    ll_backend__unify_gen__MaskOld_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1515 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__MaskOld_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1515 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__MaskOld_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 1515 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__MaskOld_27, 2) = ((MR_Box) (ll_backend__unify_gen__V_85_85));
#line 1515 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__MaskOld_27, 3) = ((MR_Box) (ll_backend__unify_gen__ComplementMask_26));
#line 1515 "unify_gen.m"
                  }
#line 1516 "unify_gen.m"
                  {
#line 1516 "unify_gen.m"
                    ll_backend__unify_gen__ShiftNew_28 = ll_backend__unify_gen__maybe_left_shift_rval_2_f_0(ll_backend__unify_gen__Source_20, (MR_Integer) 0);
                  }
#line 1517 "unify_gen.m"
                  {
#line 1517 "unify_gen.m"
                    ll_backend__unify_gen__Combined_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1517 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Combined_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1517 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Combined_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
#line 1517 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Combined_29, 2) = ((MR_Box) (ll_backend__unify_gen__MaskOld_27));
#line 1517 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Combined_29, 3) = ((MR_Box) (ll_backend__unify_gen__ShiftNew_28));
#line 1517 "unify_gen.m"
                  }
#line 1518 "unify_gen.m"
                  {
#line 1518 "unify_gen.m"
                    ll_backend__unify_gen__V_88_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1518 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_88_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1518 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_88_88, 1) = ((MR_Box) (ll_backend__unify_gen__Lval_21));
#line 1518 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_88_88, 2) = ((MR_Box) (ll_backend__unify_gen__Combined_29));
#line 1518 "unify_gen.m"
                  }
#line 1518 "unify_gen.m"
                  {
#line 1518 "unify_gen.m"
                    ll_backend__unify_gen__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1518 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_87_87, 0) = ((MR_Box) (ll_backend__unify_gen__V_88_88));
#line 1518 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_87_87, 1) = ((MR_Box) ((MR_String) "Update part of word"));
#line 1518 "unify_gen.m"
                  }
#line 1518 "unify_gen.m"
                  {
#line 1518 "unify_gen.m"
                    ll_backend__unify_gen__AssignCode_23 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__unify_gen__V_87_87)));
                  }
#line 1513 "unify_gen.m"
                }
#line 1507 "unify_gen.m"
                break;
#line 1507 "unify_gen.m"
              case (MR_Integer) 2:
#line 1513 "unify_gen.m"
                {
#line 1513 "unify_gen.m"
                  MR_Integer ll_backend__unify_gen__Mask_138 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__unify_gen__V_162_162, (MR_Integer) 1)));
#line 1513 "unify_gen.m"
                  MR_Integer ll_backend__unify_gen__Shift_139 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__unify_gen__V_162_162, (MR_Integer) 0)));
#line 1513 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__ComplementMask_140;
#line 1513 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__MaskOld_141;
#line 1513 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__ShiftNew_142;
#line 1513 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__Combined_143;
#line 1513 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_144_144;
#line 1513 "unify_gen.m"
                  MR_Integer ll_backend__unify_gen__V_145_145;
#line 1513 "unify_gen.m"
                  MR_Integer ll_backend__unify_gen__V_146_146;
#line 1513 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_148_148;
#line 1513 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_150_150;
#line 1513 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_151_151;

#line 1514 "unify_gen.m"
                  {
#line 1514 "unify_gen.m"
                    ll_backend__unify_gen__V_146_146 = mercury__int__f_60_60_2_f_0(ll_backend__unify_gen__Mask_138, ll_backend__unify_gen__Shift_139);
                  }
#line 1514 "unify_gen.m"
                  ll_backend__unify_gen__V_145_145 = ~(ll_backend__unify_gen__V_146_146);
#line 1514 "unify_gen.m"
                  {
#line 1514 "unify_gen.m"
                    ll_backend__unify_gen__V_144_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1514 "unify_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_144_144, 0) = ((MR_Box) (ll_backend__unify_gen__V_145_145));
#line 1514 "unify_gen.m"
                  }
#line 1514 "unify_gen.m"
                  {
#line 1514 "unify_gen.m"
                    ll_backend__unify_gen__ComplementMask_140 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1514 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ComplementMask_140, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1514 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ComplementMask_140, 1) = ((MR_Box) (ll_backend__unify_gen__V_144_144));
#line 1514 "unify_gen.m"
                  }
#line 1515 "unify_gen.m"
                  {
#line 1515 "unify_gen.m"
                    ll_backend__unify_gen__V_148_148 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1515 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_148_148, 0) = ((MR_Box) (ll_backend__unify_gen__Lval_21));
#line 1515 "unify_gen.m"
                  }
#line 1515 "unify_gen.m"
                  {
#line 1515 "unify_gen.m"
                    ll_backend__unify_gen__MaskOld_141 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1515 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__MaskOld_141, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1515 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__MaskOld_141, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 1515 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__MaskOld_141, 2) = ((MR_Box) (ll_backend__unify_gen__V_148_148));
#line 1515 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__MaskOld_141, 3) = ((MR_Box) (ll_backend__unify_gen__ComplementMask_140));
#line 1515 "unify_gen.m"
                  }
#line 1516 "unify_gen.m"
                  {
#line 1516 "unify_gen.m"
                    ll_backend__unify_gen__ShiftNew_142 = ll_backend__unify_gen__maybe_left_shift_rval_2_f_0(ll_backend__unify_gen__Source_20, ll_backend__unify_gen__Shift_139);
                  }
#line 1517 "unify_gen.m"
                  {
#line 1517 "unify_gen.m"
                    ll_backend__unify_gen__Combined_143 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1517 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Combined_143, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1517 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Combined_143, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
#line 1517 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Combined_143, 2) = ((MR_Box) (ll_backend__unify_gen__MaskOld_141));
#line 1517 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Combined_143, 3) = ((MR_Box) (ll_backend__unify_gen__ShiftNew_142));
#line 1517 "unify_gen.m"
                  }
#line 1518 "unify_gen.m"
                  {
#line 1518 "unify_gen.m"
                    ll_backend__unify_gen__V_151_151 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1518 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_151_151, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1518 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_151_151, 1) = ((MR_Box) (ll_backend__unify_gen__Lval_21));
#line 1518 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_151_151, 2) = ((MR_Box) (ll_backend__unify_gen__Combined_143));
#line 1518 "unify_gen.m"
                  }
#line 1518 "unify_gen.m"
                  {
#line 1518 "unify_gen.m"
                    ll_backend__unify_gen__V_150_150 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1518 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_150_150, 0) = ((MR_Box) (ll_backend__unify_gen__V_151_151));
#line 1518 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_150_150, 1) = ((MR_Box) ((MR_String) "Update part of word"));
#line 1518 "unify_gen.m"
                  }
#line 1518 "unify_gen.m"
                  {
#line 1518 "unify_gen.m"
                    ll_backend__unify_gen__AssignCode_23 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__unify_gen__V_150_150)));
                  }
#line 1513 "unify_gen.m"
                }
#line 1507 "unify_gen.m"
                break;
#line 1507 "unify_gen.m"
            }
#line 11595 "ll_backend.unify_gen.c"
            ll_backend__unify_gen__TypeCtorInfo_135_135 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 1534 "unify_gen.m"
            {
#line 1534 "unify_gen.m"
              ll_backend__unify_gen__V_93_93 = mercury__cord__f_43_43_2_f_0(ll_backend__unify_gen__TypeCtorInfo_135_135, ll_backend__unify_gen__MaterializeCode_22, ll_backend__unify_gen__AssignCode_23);
            }
#line 1534 "unify_gen.m"
            {
#line 1534 "unify_gen.m"
              *ll_backend__unify_gen__Code_9 = mercury__cord__f_43_43_2_f_0(ll_backend__unify_gen__TypeCtorInfo_135_135, ll_backend__unify_gen__SourceCode_19, ll_backend__unify_gen__V_93_93);
            }
#line 1497 "unify_gen.m"
          }
#line 1492 "unify_gen.m"
      }
#line 1492 "unify_gen.m"
    else
#line 1536 "unify_gen.m"
      {
#line 1536 "unify_gen.m"
        MR_Word ll_backend__unify_gen__Lvar_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Left_7, (MR_Integer) 0)));

#line 1537 "unify_gen.m"
        {
#line 1537 "unify_gen.m"
          ll_backend__unify_gen__succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CLD_0_40, ll_backend__unify_gen__Lvar_35);
        }
#line 1572 "unify_gen.m"
        if (ll_backend__unify_gen__succeeded)
#line 1566 "unify_gen.m"
          if (((MR_tag((MR_Word) ll_backend__unify_gen__Right_8)) == (MR_mktag((MR_Integer) 1))))
#line 1539 "unify_gen.m"
            {
#line 1539 "unify_gen.m"
              MR_Word ll_backend__unify_gen__RightWidth_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Right_8, (MR_Integer) 1)));
#line 1539 "unify_gen.m"
              MR_Word ll_backend__unify_gen__Lval_112 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Right_8, (MR_Integer) 0)));

#line 1544 "unify_gen.m"
#line 1544 "unify_gen.m"
              switch (MR_tag((MR_Word) ll_backend__unify_gen__RightWidth_36)) {
#line 1544 "unify_gen.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1544 "unify_gen.m"
                case (MR_Integer) 0:
#line 1544 "unify_gen.m"
#line 1544 "unify_gen.m"
                  switch (MR_unmkbody(ll_backend__unify_gen__RightWidth_36)) {
#line 1544 "unify_gen.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1544 "unify_gen.m"
                    case (MR_Integer) 0:
#line 1542 "unify_gen.m"
                      {
#line 1542 "unify_gen.m"
                        ll_backend__code_loc_dep__assign_lval_to_var_6_p_0(ll_backend__unify_gen__Lvar_35, ll_backend__unify_gen__Lval_112, ll_backend__unify_gen__Code_9, ll_backend__unify_gen__CI_10, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_40, ll_backend__unify_gen__STATE_VARIABLE_CLD_41);
#line 1542 "unify_gen.m"
                        return;
                      }
#line 1544 "unify_gen.m"
                      break;
#line 1544 "unify_gen.m"
                    case (MR_Integer) 1:
#line 1556 "unify_gen.m"
                      {
#line 1556 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__LvalA_102;
#line 1556 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__LvalB_103;

#line 1557 "unify_gen.m"
                        {
#line 1557 "unify_gen.m"
                          ll_backend__unify_gen__succeeded = ll_backend__unify_gen__field_offset_pair_3_p_0(ll_backend__unify_gen__Lval_112, &ll_backend__unify_gen__LvalA_102, &ll_backend__unify_gen__LvalB_103);
                        }
#line 1556 "unify_gen.m"
                        if (ll_backend__unify_gen__succeeded)
#line 1559 "unify_gen.m"
                          {
#line 1559 "unify_gen.m"
                            MR_Word ll_backend__unify_gen__V_44_44;
#line 1559 "unify_gen.m"
                            MR_Word ll_backend__unify_gen__V_45_45;
#line 1559 "unify_gen.m"
                            MR_Word ll_backend__unify_gen__V_46_46;
#line 1559 "unify_gen.m"
                            MR_Word ll_backend__unify_gen__V_48_48;
#line 1559 "unify_gen.m"
                            MR_Word ll_backend__unify_gen__Rval_101;

#line 1559 "unify_gen.m"
                            {
#line 1559 "unify_gen.m"
                              ll_backend__unify_gen__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1559 "unify_gen.m"
                              MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_44_44, 0) = ((MR_Box) (ll_backend__unify_gen__LvalA_102));
#line 1559 "unify_gen.m"
                            }
#line 1559 "unify_gen.m"
                            {
#line 1559 "unify_gen.m"
                              ll_backend__unify_gen__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1559 "unify_gen.m"
                              MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_45_45, 0) = ((MR_Box) (ll_backend__unify_gen__LvalB_103));
#line 1559 "unify_gen.m"
                            }
#line 1558 "unify_gen.m"
                            {
#line 1558 "unify_gen.m"
                              ll_backend__unify_gen__Rval_101 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1558 "unify_gen.m"
                              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Rval_101, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1558 "unify_gen.m"
                              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Rval_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 39))));
#line 1558 "unify_gen.m"
                              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Rval_101, 2) = ((MR_Box) (ll_backend__unify_gen__V_44_44));
#line 1558 "unify_gen.m"
                              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Rval_101, 3) = ((MR_Box) (ll_backend__unify_gen__V_45_45));
#line 1558 "unify_gen.m"
                            }
#line 1560 "unify_gen.m"
                            {
#line 1560 "unify_gen.m"
                              ll_backend__unify_gen__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1560 "unify_gen.m"
                              MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_48_48, 0) = ((MR_Box) (ll_backend__unify_gen__LvalB_103));
#line 1560 "unify_gen.m"
                              MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1560 "unify_gen.m"
                            }
#line 1560 "unify_gen.m"
                            {
#line 1560 "unify_gen.m"
                              ll_backend__unify_gen__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1560 "unify_gen.m"
                              MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_46_46, 0) = ((MR_Box) (ll_backend__unify_gen__LvalA_102));
#line 1560 "unify_gen.m"
                              MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_46_46, 1) = ((MR_Box) (ll_backend__unify_gen__V_48_48));
#line 1560 "unify_gen.m"
                            }
#line 1560 "unify_gen.m"
                            {
#line 1560 "unify_gen.m"
                              ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0(ll_backend__unify_gen__Lvar_35, ll_backend__unify_gen__V_46_46, ll_backend__unify_gen__Rval_101, ll_backend__unify_gen__Code_9, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_40, ll_backend__unify_gen__STATE_VARIABLE_CLD_41);
#line 1560 "unify_gen.m"
                              return;
                            }
#line 1559 "unify_gen.m"
                          }
#line 1556 "unify_gen.m"
                        else
#line 1563 "unify_gen.m"
                          {
#line 1563 "unify_gen.m"
                            {
#line 1563 "unify_gen.m"
                              mercury__require__sorry_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_sub_assign\'/6", (MR_String) "double_word: non-field lval");
#line 1563 "unify_gen.m"
                              return;
                            }
#line 1563 "unify_gen.m"
                          }
#line 1556 "unify_gen.m"
                      }
#line 1544 "unify_gen.m"
                      break;
#line 1544 "unify_gen.m"
                  }
#line 1544 "unify_gen.m"
                  break;
#line 1544 "unify_gen.m"
                case (MR_Integer) 1:
#line 1551 "unify_gen.m"
                  {
#line 1551 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__Rval0_37;
#line 1551 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__Rval_38;
#line 1551 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__V_55_55;
#line 1551 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__V_56_56;
#line 1551 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__V_57_57;
#line 1551 "unify_gen.m"
                    MR_Integer ll_backend__unify_gen__Mask_99 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__RightWidth_36, (MR_Integer) 0)));

#line 1547 "unify_gen.m"
                    {
#line 1547 "unify_gen.m"
                      ll_backend__unify_gen__Rval0_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1547 "unify_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Rval0_37, 0) = ((MR_Box) (ll_backend__unify_gen__Lval_112));
#line 1547 "unify_gen.m"
                    }
#line 1552 "unify_gen.m"
                    {
#line 1552 "unify_gen.m"
                      ll_backend__unify_gen__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1552 "unify_gen.m"
                      MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_56_56, 0) = ((MR_Box) (ll_backend__unify_gen__Mask_99));
#line 1552 "unify_gen.m"
                    }
#line 1552 "unify_gen.m"
                    {
#line 1552 "unify_gen.m"
                      ll_backend__unify_gen__V_55_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1552 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_55_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1552 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_55_55, 1) = ((MR_Box) (ll_backend__unify_gen__V_56_56));
#line 1552 "unify_gen.m"
                    }
#line 1552 "unify_gen.m"
                    {
#line 1552 "unify_gen.m"
                      ll_backend__unify_gen__Rval_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1552 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Rval_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1552 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Rval_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 1552 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Rval_38, 2) = ((MR_Box) (ll_backend__unify_gen__Rval0_37));
#line 1552 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Rval_38, 3) = ((MR_Box) (ll_backend__unify_gen__V_55_55));
#line 1552 "unify_gen.m"
                    }
#line 1553 "unify_gen.m"
                    {
#line 1553 "unify_gen.m"
                      ll_backend__unify_gen__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1553 "unify_gen.m"
                      MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_57_57, 0) = ((MR_Box) (ll_backend__unify_gen__Lval_112));
#line 1553 "unify_gen.m"
                      MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1553 "unify_gen.m"
                    }
#line 1553 "unify_gen.m"
                    {
#line 1553 "unify_gen.m"
                      ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0(ll_backend__unify_gen__Lvar_35, ll_backend__unify_gen__V_57_57, ll_backend__unify_gen__Rval_38, ll_backend__unify_gen__Code_9, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_40, ll_backend__unify_gen__STATE_VARIABLE_CLD_41);
#line 1553 "unify_gen.m"
                      return;
                    }
#line 1551 "unify_gen.m"
                  }
#line 1544 "unify_gen.m"
                  break;
#line 1544 "unify_gen.m"
                case (MR_Integer) 2:
#line 1551 "unify_gen.m"
                  {
#line 1551 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__V_53_53;
#line 1551 "unify_gen.m"
                    MR_Integer ll_backend__unify_gen__Shift_97 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__unify_gen__RightWidth_36, (MR_Integer) 0)));
#line 1551 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__Rval0_154;
#line 1551 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__Rval_155;
#line 1551 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__V_157_157;
#line 1551 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__V_158_158;
#line 1551 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__V_159_159;
#line 1551 "unify_gen.m"
                    MR_Integer ll_backend__unify_gen__Mask_161 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__unify_gen__RightWidth_36, (MR_Integer) 1)));

#line 1550 "unify_gen.m"
                    {
#line 1550 "unify_gen.m"
                      ll_backend__unify_gen__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1550 "unify_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_53_53, 0) = ((MR_Box) (ll_backend__unify_gen__Lval_112));
#line 1550 "unify_gen.m"
                    }
#line 1550 "unify_gen.m"
                    {
#line 1550 "unify_gen.m"
                      ll_backend__unify_gen__Rval0_154 = ll_backend__unify_gen__right_shift_rval_2_f_0(ll_backend__unify_gen__V_53_53, ll_backend__unify_gen__Shift_97);
                    }
#line 1552 "unify_gen.m"
                    {
#line 1552 "unify_gen.m"
                      ll_backend__unify_gen__V_158_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1552 "unify_gen.m"
                      MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_158_158, 0) = ((MR_Box) (ll_backend__unify_gen__Mask_161));
#line 1552 "unify_gen.m"
                    }
#line 1552 "unify_gen.m"
                    {
#line 1552 "unify_gen.m"
                      ll_backend__unify_gen__V_157_157 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1552 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_157_157, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1552 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_157_157, 1) = ((MR_Box) (ll_backend__unify_gen__V_158_158));
#line 1552 "unify_gen.m"
                    }
#line 1552 "unify_gen.m"
                    {
#line 1552 "unify_gen.m"
                      ll_backend__unify_gen__Rval_155 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1552 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Rval_155, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1552 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Rval_155, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 1552 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Rval_155, 2) = ((MR_Box) (ll_backend__unify_gen__Rval0_154));
#line 1552 "unify_gen.m"
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Rval_155, 3) = ((MR_Box) (ll_backend__unify_gen__V_157_157));
#line 1552 "unify_gen.m"
                    }
#line 1553 "unify_gen.m"
                    {
#line 1553 "unify_gen.m"
                      ll_backend__unify_gen__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1553 "unify_gen.m"
                      MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_159_159, 0) = ((MR_Box) (ll_backend__unify_gen__Lval_112));
#line 1553 "unify_gen.m"
                      MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_159_159, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1553 "unify_gen.m"
                    }
#line 1553 "unify_gen.m"
                    {
#line 1553 "unify_gen.m"
                      ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0(ll_backend__unify_gen__Lvar_35, ll_backend__unify_gen__V_159_159, ll_backend__unify_gen__Rval_155, ll_backend__unify_gen__Code_9, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_40, ll_backend__unify_gen__STATE_VARIABLE_CLD_41);
#line 1553 "unify_gen.m"
                      return;
                    }
#line 1551 "unify_gen.m"
                  }
#line 1544 "unify_gen.m"
                  break;
#line 1544 "unify_gen.m"
              }
#line 1539 "unify_gen.m"
            }
#line 1566 "unify_gen.m"
          else
#line 1567 "unify_gen.m"
            {
#line 1567 "unify_gen.m"
              MR_Word ll_backend__unify_gen__Rvar_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Right_8, (MR_Integer) 0)));

#line 1569 "unify_gen.m"
              {
#line 1569 "unify_gen.m"
                ll_backend__code_loc_dep__assign_var_to_var_4_p_0(ll_backend__unify_gen__Lvar_35, ll_backend__unify_gen__Rvar_39, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_40, ll_backend__unify_gen__STATE_VARIABLE_CLD_41);
              }
#line 1570 "unify_gen.m"
              {
#line 1570 "unify_gen.m"
                *ll_backend__unify_gen__Code_9 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
#line 1567 "unify_gen.m"
            }
#line 1572 "unify_gen.m"
        else
#line 1573 "unify_gen.m"
          {
#line 1573 "unify_gen.m"
            {
#line 1573 "unify_gen.m"
              *ll_backend__unify_gen__Code_9 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
            }
#line 1573 "unify_gen.m"
            *ll_backend__unify_gen__STATE_VARIABLE_CLD_41 = ll_backend__unify_gen__STATE_VARIABLE_CLD_0_40;
#line 1573 "unify_gen.m"
          }
#line 1536 "unify_gen.m"
      }
#line 1492 "unify_gen.m"
  }
#line 1487 "unify_gen.m"
}

#line 1446 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_sub_unify_8_p_0(
#line 1446 "unify_gen.m"
  MR_Word ll_backend__unify_gen__L_9,
#line 1446 "unify_gen.m"
  MR_Word ll_backend__unify_gen__R_10,
#line 1446 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Mode_11,
#line 1446 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Type_12,
#line 1446 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_13,
#line 1446 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CI_14,
#line 1446 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_23,
#line 1446 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_24)
#line 1446 "unify_gen.m"
{
#line 1450 "unify_gen.m"
  {
#line 1450 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 1450 "unify_gen.m"
    MR_Word ll_backend__unify_gen__LI_16;
#line 1450 "unify_gen.m"
    MR_Word ll_backend__unify_gen__RI_17;
#line 1450 "unify_gen.m"
    MR_Word ll_backend__unify_gen__LF_18;
#line 1450 "unify_gen.m"
    MR_Word ll_backend__unify_gen__RF_19;
#line 1450 "unify_gen.m"
    MR_Word ll_backend__unify_gen__ModuleInfo_20;
#line 1450 "unify_gen.m"
    MR_Word ll_backend__unify_gen__LeftMode_21;
#line 1450 "unify_gen.m"
    MR_Word ll_backend__unify_gen__RightMode_22;
#line 1450 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Mode_11, (MR_Integer) 0)));
#line 1450 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Mode_11, (MR_Integer) 1)));
#line 1450 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_27_27;
#line 1450 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_28_28;

#line 1451 "unify_gen.m"
    ll_backend__unify_gen__LI_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_25_25, (MR_Integer) 0)));
#line 1451 "unify_gen.m"
    ll_backend__unify_gen__RI_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_25_25, (MR_Integer) 1)));
#line 1451 "unify_gen.m"
    ll_backend__unify_gen__LF_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_26_26, (MR_Integer) 0)));
#line 1451 "unify_gen.m"
    ll_backend__unify_gen__RF_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_26_26, (MR_Integer) 1)));
#line 1452 "unify_gen.m"
    {
#line 1452 "unify_gen.m"
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__unify_gen__CI_14, &ll_backend__unify_gen__ModuleInfo_20);
    }
#line 1453 "unify_gen.m"
    {
#line 1453 "unify_gen.m"
      ll_backend__unify_gen__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1453 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_27_27, 0) = ((MR_Box) (ll_backend__unify_gen__LI_16));
#line 1453 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_27_27, 1) = ((MR_Box) (ll_backend__unify_gen__LF_18));
#line 1453 "unify_gen.m"
    }
#line 1453 "unify_gen.m"
    {
#line 1453 "unify_gen.m"
      check_hlds__mode_util__mode_to_arg_mode_4_p_0(ll_backend__unify_gen__ModuleInfo_20, ll_backend__unify_gen__V_27_27, ll_backend__unify_gen__Type_12, &ll_backend__unify_gen__LeftMode_21);
    }
#line 1454 "unify_gen.m"
    {
#line 1454 "unify_gen.m"
      ll_backend__unify_gen__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1454 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_28_28, 0) = ((MR_Box) (ll_backend__unify_gen__RI_17));
#line 1454 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_28_28, 1) = ((MR_Box) (ll_backend__unify_gen__RF_19));
#line 1454 "unify_gen.m"
    }
#line 1454 "unify_gen.m"
    {
#line 1454 "unify_gen.m"
      check_hlds__mode_util__mode_to_arg_mode_4_p_0(ll_backend__unify_gen__ModuleInfo_20, ll_backend__unify_gen__V_28_28, ll_backend__unify_gen__Type_12, &ll_backend__unify_gen__RightMode_22);
    }
#line 1457 "unify_gen.m"
    ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__LeftMode_21 == (MR_Integer) 0);
#line 1457 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 1458 "unify_gen.m"
      ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__RightMode_22 == (MR_Integer) 0);
#line 1464 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 1463 "unify_gen.m"
      {
#line 1463 "unify_gen.m"
        {
#line 1463 "unify_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_sub_unify\'/8", (MR_String) "test in arg of [de]construction");
#line 1463 "unify_gen.m"
          return;
        }
#line 1463 "unify_gen.m"
      }
#line 1464 "unify_gen.m"
    else
#line 1470 "unify_gen.m"
      {
#line 1466 "unify_gen.m"
        ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__LeftMode_21 == (MR_Integer) 0);
#line 1466 "unify_gen.m"
        if (ll_backend__unify_gen__succeeded)
#line 1467 "unify_gen.m"
          ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__RightMode_22 == (MR_Integer) 1);
#line 1470 "unify_gen.m"
        if (ll_backend__unify_gen__succeeded)
#line 1469 "unify_gen.m"
          {
#line 1469 "unify_gen.m"
            ll_backend__unify_gen__generate_sub_assign_6_p_0(ll_backend__unify_gen__R_10, ll_backend__unify_gen__L_9, ll_backend__unify_gen__Code_13, ll_backend__unify_gen__CI_14, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_23, ll_backend__unify_gen__STATE_VARIABLE_CLD_24);
#line 1469 "unify_gen.m"
            return;
          }
#line 1470 "unify_gen.m"
        else
#line 1476 "unify_gen.m"
          {
#line 1472 "unify_gen.m"
            ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__LeftMode_21 == (MR_Integer) 1);
#line 1472 "unify_gen.m"
            if (ll_backend__unify_gen__succeeded)
#line 1473 "unify_gen.m"
              ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__RightMode_22 == (MR_Integer) 0);
#line 1476 "unify_gen.m"
            if (ll_backend__unify_gen__succeeded)
#line 1475 "unify_gen.m"
              {
#line 1475 "unify_gen.m"
                ll_backend__unify_gen__generate_sub_assign_6_p_0(ll_backend__unify_gen__L_9, ll_backend__unify_gen__R_10, ll_backend__unify_gen__Code_13, ll_backend__unify_gen__CI_14, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_23, ll_backend__unify_gen__STATE_VARIABLE_CLD_24);
#line 1475 "unify_gen.m"
                return;
              }
#line 1476 "unify_gen.m"
            else
#line 1483 "unify_gen.m"
              {
#line 1477 "unify_gen.m"
                ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__LeftMode_21 == (MR_Integer) 2);
#line 1477 "unify_gen.m"
                if (ll_backend__unify_gen__succeeded)
#line 1478 "unify_gen.m"
                  ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__RightMode_22 == (MR_Integer) 2);
#line 1483 "unify_gen.m"
                if (ll_backend__unify_gen__succeeded)
#line 1480 "unify_gen.m"
                  {
#line 1480 "unify_gen.m"
                    {
#line 1480 "unify_gen.m"
                      *ll_backend__unify_gen__Code_13 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                    }
#line 1480 "unify_gen.m"
                  }
#line 1483 "unify_gen.m"
                else
#line 1484 "unify_gen.m"
                  {
#line 1484 "unify_gen.m"
                    {
#line 1484 "unify_gen.m"
                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_sub_unify\'/8", (MR_String) "some strange unify");
#line 1484 "unify_gen.m"
                      return;
                    }
#line 1484 "unify_gen.m"
                  }
#line 1483 "unify_gen.m"
                *ll_backend__unify_gen__STATE_VARIABLE_CLD_24 = ll_backend__unify_gen__STATE_VARIABLE_CLD_0_23;
#line 1483 "unify_gen.m"
              }
#line 1476 "unify_gen.m"
          }
#line 1470 "unify_gen.m"
      }
#line 1450 "unify_gen.m"
  }
#line 1446 "unify_gen.m"
}

#line 1431 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__generate_unify_args_2_8_p_0(
#line 1431 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__1_1,
#line 1431 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_2,
#line 1431 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__3_3,
#line 1431 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__4_4,
#line 1431 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__HeadVar__5_5,
#line 1431 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__6_6,
#line 1431 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_7,
#line 1431 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_8)
#line 1431 "unify_gen.m"
{
#line 1435 "unify_gen.m"
  {
#line 1435 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;

#line 1435 "unify_gen.m"
    if ((ll_backend__unify_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1435 "unify_gen.m"
      {
#line 1435 "unify_gen.m"
        MR_Word ll_backend__unify_gen__TypeCtorInfo_30_30;

#line 1435 "unify_gen.m"
        ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1435 "unify_gen.m"
        if (ll_backend__unify_gen__succeeded)
#line 1435 "unify_gen.m"
          {
#line 1435 "unify_gen.m"
            ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1435 "unify_gen.m"
            if (ll_backend__unify_gen__succeeded)
#line 1435 "unify_gen.m"
              {
#line 1435 "unify_gen.m"
                ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1435 "unify_gen.m"
                if (ll_backend__unify_gen__succeeded)
#line 1435 "unify_gen.m"
                  {
#line 12220 "ll_backend.unify_gen.c"
                    ll_backend__unify_gen__TypeCtorInfo_30_30 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 1435 "unify_gen.m"
                    {
#line 1435 "unify_gen.m"
                      *ll_backend__unify_gen__HeadVar__5_5 = mercury__cord__empty_0_f_0(ll_backend__unify_gen__TypeCtorInfo_30_30);
                    }
#line 1435 "unify_gen.m"
                    *ll_backend__unify_gen__STATE_VARIABLE_CLD_8 = ll_backend__unify_gen__STATE_VARIABLE_CLD_0_7;
#line 1435 "unify_gen.m"
                    ll_backend__unify_gen__succeeded = MR_TRUE;
#line 1435 "unify_gen.m"
                  }
#line 1435 "unify_gen.m"
              }
#line 1435 "unify_gen.m"
          }
#line 1435 "unify_gen.m"
      }
#line 1435 "unify_gen.m"
    else
#line 1437 "unify_gen.m"
      {
#line 1437 "unify_gen.m"
        MR_Word ll_backend__unify_gen__TypeCtorInfo_31_31;
#line 1437 "unify_gen.m"
        MR_Word ll_backend__unify_gen__L_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 1437 "unify_gen.m"
        MR_Word ll_backend__unify_gen__Ls_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 1437 "unify_gen.m"
        MR_Word ll_backend__unify_gen__R_15;
#line 1437 "unify_gen.m"
        MR_Word ll_backend__unify_gen__Rs_16;
#line 1437 "unify_gen.m"
        MR_Word ll_backend__unify_gen__M_17;
#line 1437 "unify_gen.m"
        MR_Word ll_backend__unify_gen__Ms_18;
#line 1437 "unify_gen.m"
        MR_Word ll_backend__unify_gen__T_19;
#line 1437 "unify_gen.m"
        MR_Word ll_backend__unify_gen__Ts_20;
#line 1437 "unify_gen.m"
        MR_Word ll_backend__unify_gen__CodeA_24;
#line 1437 "unify_gen.m"
        MR_Word ll_backend__unify_gen__CodeB_25;
#line 1437 "unify_gen.m"
        MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_28_28;
#line 1437 "unify_gen.m"
        MR_Word ll_backend__unify_gen__LI_41;
#line 1437 "unify_gen.m"
        MR_Word ll_backend__unify_gen__RI_42;
#line 1437 "unify_gen.m"
        MR_Word ll_backend__unify_gen__LF_43;
#line 1437 "unify_gen.m"
        MR_Word ll_backend__unify_gen__RF_44;
#line 1437 "unify_gen.m"
        MR_Word ll_backend__unify_gen__ModuleInfo_45;
#line 1437 "unify_gen.m"
        MR_Word ll_backend__unify_gen__LeftMode_46;
#line 1437 "unify_gen.m"
        MR_Word ll_backend__unify_gen__RightMode_47;
#line 1437 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_48_48;
#line 1437 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_49_49;
#line 1437 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_50_50;
#line 1437 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_51_51;

#line 1436 "unify_gen.m"
        ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1436 "unify_gen.m"
        if (ll_backend__unify_gen__succeeded)
#line 1436 "unify_gen.m"
          {
#line 1436 "unify_gen.m"
            ll_backend__unify_gen__R_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 1436 "unify_gen.m"
            ll_backend__unify_gen__Rs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 1436 "unify_gen.m"
            ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 1436 "unify_gen.m"
            if (ll_backend__unify_gen__succeeded)
#line 1436 "unify_gen.m"
              {
#line 1436 "unify_gen.m"
                ll_backend__unify_gen__M_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__3_3, (MR_Integer) 0)));
#line 1436 "unify_gen.m"
                ll_backend__unify_gen__Ms_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__3_3, (MR_Integer) 1)));
#line 1436 "unify_gen.m"
                ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
#line 1436 "unify_gen.m"
                if (ll_backend__unify_gen__succeeded)
#line 1436 "unify_gen.m"
                  {
#line 1436 "unify_gen.m"
                    ll_backend__unify_gen__T_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__4_4, (MR_Integer) 0)));
#line 1436 "unify_gen.m"
                    ll_backend__unify_gen__Ts_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__4_4, (MR_Integer) 1)));
#line 1451 "unify_gen.m"
                    ll_backend__unify_gen__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__M_17, (MR_Integer) 0)));
#line 1451 "unify_gen.m"
                    ll_backend__unify_gen__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__M_17, (MR_Integer) 1)));
#line 1451 "unify_gen.m"
                    ll_backend__unify_gen__LI_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_48_48, (MR_Integer) 0)));
#line 1451 "unify_gen.m"
                    ll_backend__unify_gen__RI_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_48_48, (MR_Integer) 1)));
#line 1451 "unify_gen.m"
                    ll_backend__unify_gen__LF_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_49_49, (MR_Integer) 0)));
#line 1451 "unify_gen.m"
                    ll_backend__unify_gen__RF_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_49_49, (MR_Integer) 1)));
#line 1452 "unify_gen.m"
                    {
#line 1452 "unify_gen.m"
                      ll_backend__code_info__get_module_info_2_p_0(ll_backend__unify_gen__HeadVar__6_6, &ll_backend__unify_gen__ModuleInfo_45);
                    }
#line 1453 "unify_gen.m"
                    {
#line 1453 "unify_gen.m"
                      ll_backend__unify_gen__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1453 "unify_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_50_50, 0) = ((MR_Box) (ll_backend__unify_gen__LI_41));
#line 1453 "unify_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_50_50, 1) = ((MR_Box) (ll_backend__unify_gen__LF_43));
#line 1453 "unify_gen.m"
                    }
#line 1453 "unify_gen.m"
                    {
#line 1453 "unify_gen.m"
                      check_hlds__mode_util__mode_to_arg_mode_4_p_0(ll_backend__unify_gen__ModuleInfo_45, ll_backend__unify_gen__V_50_50, ll_backend__unify_gen__T_19, &ll_backend__unify_gen__LeftMode_46);
                    }
#line 1454 "unify_gen.m"
                    {
#line 1454 "unify_gen.m"
                      ll_backend__unify_gen__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1454 "unify_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_51_51, 0) = ((MR_Box) (ll_backend__unify_gen__RI_42));
#line 1454 "unify_gen.m"
                      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_51_51, 1) = ((MR_Box) (ll_backend__unify_gen__RF_44));
#line 1454 "unify_gen.m"
                    }
#line 1454 "unify_gen.m"
                    {
#line 1454 "unify_gen.m"
                      check_hlds__mode_util__mode_to_arg_mode_4_p_0(ll_backend__unify_gen__ModuleInfo_45, ll_backend__unify_gen__V_51_51, ll_backend__unify_gen__T_19, &ll_backend__unify_gen__RightMode_47);
                    }
#line 1457 "unify_gen.m"
                    ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__LeftMode_46 == (MR_Integer) 0);
#line 1457 "unify_gen.m"
                    if (ll_backend__unify_gen__succeeded)
#line 1458 "unify_gen.m"
                      ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__RightMode_47 == (MR_Integer) 0);
#line 1464 "unify_gen.m"
                    if (ll_backend__unify_gen__succeeded)
#line 1463 "unify_gen.m"
                      {
#line 1463 "unify_gen.m"
                        {
#line 1463 "unify_gen.m"
                          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_sub_unify\'/8", (MR_String) "test in arg of [de]construction");
                        }
#line 1463 "unify_gen.m"
                      }
#line 1464 "unify_gen.m"
                    else
#line 1470 "unify_gen.m"
                      {
#line 1466 "unify_gen.m"
                        ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__LeftMode_46 == (MR_Integer) 0);
#line 1466 "unify_gen.m"
                        if (ll_backend__unify_gen__succeeded)
#line 1467 "unify_gen.m"
                          ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__RightMode_47 == (MR_Integer) 1);
#line 1470 "unify_gen.m"
                        if (ll_backend__unify_gen__succeeded)
#line 1469 "unify_gen.m"
                          {
#line 1469 "unify_gen.m"
                            ll_backend__unify_gen__generate_sub_assign_6_p_0(ll_backend__unify_gen__R_15, ll_backend__unify_gen__L_13, &ll_backend__unify_gen__CodeA_24, ll_backend__unify_gen__HeadVar__6_6, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_7, &ll_backend__unify_gen__STATE_VARIABLE_CLD_28_28);
                          }
#line 1470 "unify_gen.m"
                        else
#line 1476 "unify_gen.m"
                          {
#line 1472 "unify_gen.m"
                            ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__LeftMode_46 == (MR_Integer) 1);
#line 1472 "unify_gen.m"
                            if (ll_backend__unify_gen__succeeded)
#line 1473 "unify_gen.m"
                              ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__RightMode_47 == (MR_Integer) 0);
#line 1476 "unify_gen.m"
                            if (ll_backend__unify_gen__succeeded)
#line 1475 "unify_gen.m"
                              {
#line 1475 "unify_gen.m"
                                ll_backend__unify_gen__generate_sub_assign_6_p_0(ll_backend__unify_gen__L_13, ll_backend__unify_gen__R_15, &ll_backend__unify_gen__CodeA_24, ll_backend__unify_gen__HeadVar__6_6, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_7, &ll_backend__unify_gen__STATE_VARIABLE_CLD_28_28);
                              }
#line 1476 "unify_gen.m"
                            else
#line 1483 "unify_gen.m"
                              {
#line 1477 "unify_gen.m"
                                ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__LeftMode_46 == (MR_Integer) 2);
#line 1477 "unify_gen.m"
                                if (ll_backend__unify_gen__succeeded)
#line 1478 "unify_gen.m"
                                  ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__RightMode_47 == (MR_Integer) 2);
#line 1483 "unify_gen.m"
                                if (ll_backend__unify_gen__succeeded)
#line 1480 "unify_gen.m"
                                  {
#line 1480 "unify_gen.m"
                                    {
#line 1480 "unify_gen.m"
                                      ll_backend__unify_gen__CodeA_24 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                                    }
#line 1480 "unify_gen.m"
                                  }
#line 1483 "unify_gen.m"
                                else
#line 1484 "unify_gen.m"
                                  {
#line 1484 "unify_gen.m"
                                    {
#line 1484 "unify_gen.m"
                                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_sub_unify\'/8", (MR_String) "some strange unify");
                                    }
#line 1484 "unify_gen.m"
                                  }
#line 1483 "unify_gen.m"
                                ll_backend__unify_gen__STATE_VARIABLE_CLD_28_28 = ll_backend__unify_gen__STATE_VARIABLE_CLD_0_7;
#line 1483 "unify_gen.m"
                              }
#line 1476 "unify_gen.m"
                          }
#line 1470 "unify_gen.m"
                      }
#line 1439 "unify_gen.m"
                    {
#line 1439 "unify_gen.m"
                      ll_backend__unify_gen__succeeded = ll_backend__unify_gen__generate_unify_args_2_8_p_0(ll_backend__unify_gen__Ls_14, ll_backend__unify_gen__Rs_16, ll_backend__unify_gen__Ms_18, ll_backend__unify_gen__Ts_20, &ll_backend__unify_gen__CodeB_25, ll_backend__unify_gen__HeadVar__6_6, ll_backend__unify_gen__STATE_VARIABLE_CLD_28_28, ll_backend__unify_gen__STATE_VARIABLE_CLD_8);
                    }
#line 1437 "unify_gen.m"
                    if (ll_backend__unify_gen__succeeded)
#line 1437 "unify_gen.m"
                      {
#line 12467 "ll_backend.unify_gen.c"
                        ll_backend__unify_gen__TypeCtorInfo_31_31 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 1440 "unify_gen.m"
                        {
#line 1440 "unify_gen.m"
                          *ll_backend__unify_gen__HeadVar__5_5 = mercury__cord__f_43_43_2_f_0(ll_backend__unify_gen__TypeCtorInfo_31_31, ll_backend__unify_gen__CodeA_24, ll_backend__unify_gen__CodeB_25);
                        }
#line 1440 "unify_gen.m"
                        ll_backend__unify_gen__succeeded = MR_TRUE;
#line 1437 "unify_gen.m"
                      }
#line 1436 "unify_gen.m"
                  }
#line 1436 "unify_gen.m"
              }
#line 1436 "unify_gen.m"
          }
#line 1437 "unify_gen.m"
      }
#line 1435 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 1435 "unify_gen.m"
  }
#line 1431 "unify_gen.m"
}

#line 1420 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_unify_args_8_p_0(
#line 1420 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Ls_9,
#line 1420 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Rs_10,
#line 1420 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Ms_11,
#line 1420 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Ts_12,
#line 1420 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_13,
#line 1420 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CI_14,
#line 1420 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_17,
#line 1420 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_18)
#line 1420 "unify_gen.m"
{
#line 1427 "unify_gen.m"
  {
#line 1427 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 1427 "unify_gen.m"
    MR_Word ll_backend__unify_gen__Code0_16;
#line 1427 "unify_gen.m"
    MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_19_19;

#line 1425 "unify_gen.m"
    {
#line 1425 "unify_gen.m"
      ll_backend__unify_gen__succeeded = ll_backend__unify_gen__generate_unify_args_2_8_p_0(ll_backend__unify_gen__Ls_9, ll_backend__unify_gen__Rs_10, ll_backend__unify_gen__Ms_11, ll_backend__unify_gen__Ts_12, &ll_backend__unify_gen__Code0_16, ll_backend__unify_gen__CI_14, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_17, &ll_backend__unify_gen__STATE_VARIABLE_CLD_19_19);
    }
#line 1427 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 1426 "unify_gen.m"
      {
#line 1426 "unify_gen.m"
        *ll_backend__unify_gen__STATE_VARIABLE_CLD_18 = ll_backend__unify_gen__STATE_VARIABLE_CLD_19_19;
#line 1426 "unify_gen.m"
        *ll_backend__unify_gen__Code_13 = ll_backend__unify_gen__Code0_16;
#line 1426 "unify_gen.m"
      }
#line 1427 "unify_gen.m"
    else
#line 1428 "unify_gen.m"
      {
#line 1428 "unify_gen.m"
        {
#line 1428 "unify_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_unify_args\'/8", (MR_String) "length mismatch");
#line 1428 "unify_gen.m"
          return;
        }
#line 1428 "unify_gen.m"
      }
#line 1427 "unify_gen.m"
  }
#line 1420 "unify_gen.m"
}

#line 1396 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_semi_deconstruction_10_p_0(
#line 1396 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Var_11,
#line 1396 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Tag_12,
#line 1396 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Args_13,
#line 1396 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Modes_14,
#line 1396 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ArgWidths_15,
#line 1396 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_16,
#line 1396 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_27,
#line 1396 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_28,
#line 1396 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_29,
#line 1396 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_30)
#line 1396 "unify_gen.m"
{
#line 1402 "unify_gen.m"
  {
#line 1402 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 1402 "unify_gen.m"
    MR_Word ll_backend__unify_gen__TypeCtorInfo_42_42;
#line 1402 "unify_gen.m"
    MR_Word ll_backend__unify_gen__VarType_19;
#line 1402 "unify_gen.m"
    MR_Word ll_backend__unify_gen__CheaperTagTest_20;
#line 1402 "unify_gen.m"
    MR_Word ll_backend__unify_gen__SuccLabel_21;
#line 1402 "unify_gen.m"
    MR_Word ll_backend__unify_gen__TagTestCode_22;
#line 1402 "unify_gen.m"
    MR_Word ll_backend__unify_gen__AfterUnify_23;
#line 1402 "unify_gen.m"
    MR_Word ll_backend__unify_gen__FailCode_24;
#line 1402 "unify_gen.m"
    MR_Word ll_backend__unify_gen__DeconsCode_25;
#line 1402 "unify_gen.m"
    MR_Word ll_backend__unify_gen__SuccessLabelCode_26;
#line 1402 "unify_gen.m"
    MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_32_32;
#line 1402 "unify_gen.m"
    MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_33_33;
#line 1402 "unify_gen.m"
    MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_35_35;
#line 1402 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_37_37;
#line 1402 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_38_38;
#line 1402 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_40_40;
#line 1402 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_41_41;
#line 1402 "unify_gen.m"
    MR_Word ll_backend__unify_gen__ModuleInfo_53;
#line 1402 "unify_gen.m"
    MR_Word ll_backend__unify_gen__Tag_54;

#line 1403 "unify_gen.m"
    {
#line 1403 "unify_gen.m"
      ll_backend__unify_gen__VarType_19 = ll_backend__code_info__variable_type_2_f_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_27, ll_backend__unify_gen__Var_11);
    }
#line 1404 "unify_gen.m"
    {
#line 1404 "unify_gen.m"
      ll_backend__unify_gen__CheaperTagTest_20 = ll_backend__code_info__lookup_cheaper_tag_test_2_f_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_27, ll_backend__unify_gen__VarType_19);
    }
#line 1405 "unify_gen.m"
    {
#line 1405 "unify_gen.m"
      ll_backend__unify_gen__generate_tag_test_10_p_0(ll_backend__unify_gen__Var_11, ll_backend__unify_gen__Tag_12, ll_backend__unify_gen__CheaperTagTest_20, (MR_Integer) 0, &ll_backend__unify_gen__SuccLabel_21, &ll_backend__unify_gen__TagTestCode_22, ll_backend__unify_gen__STATE_VARIABLE_CI_0_27, &ll_backend__unify_gen__STATE_VARIABLE_CI_32_32, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_29, &ll_backend__unify_gen__STATE_VARIABLE_CLD_33_33);
    }
#line 1407 "unify_gen.m"
    {
#line 1407 "unify_gen.m"
      ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CLD_33_33, &ll_backend__unify_gen__AfterUnify_23);
    }
#line 1408 "unify_gen.m"
    {
#line 1408 "unify_gen.m"
      ll_backend__code_loc_dep__generate_failure_4_p_0(&ll_backend__unify_gen__FailCode_24, ll_backend__unify_gen__STATE_VARIABLE_CI_32_32, ll_backend__unify_gen__STATE_VARIABLE_CI_28, ll_backend__unify_gen__STATE_VARIABLE_CLD_33_33);
    }
#line 1409 "unify_gen.m"
    {
#line 1409 "unify_gen.m"
      ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__unify_gen__AfterUnify_23, *ll_backend__unify_gen__STATE_VARIABLE_CI_28, &ll_backend__unify_gen__STATE_VARIABLE_CLD_35_35);
    }
#line 1276 "unify_gen.m"
    {
#line 1276 "unify_gen.m"
      ll_backend__code_info__get_module_info_2_p_0(*ll_backend__unify_gen__STATE_VARIABLE_CI_28, &ll_backend__unify_gen__ModuleInfo_53);
    }
#line 1277 "unify_gen.m"
    {
#line 1277 "unify_gen.m"
      ll_backend__unify_gen__Tag_54 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ll_backend__unify_gen__ModuleInfo_53, ll_backend__unify_gen__Tag_12);
    }
#line 1278 "unify_gen.m"
    {
#line 1278 "unify_gen.m"
      ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_10_p_0(ll_backend__unify_gen__Var_11, ll_backend__unify_gen__Args_13, ll_backend__unify_gen__Modes_14, ll_backend__unify_gen__ArgWidths_15, ll_backend__unify_gen__Tag_54, &ll_backend__unify_gen__DeconsCode_25, *ll_backend__unify_gen__STATE_VARIABLE_CI_28, ll_backend__unify_gen__STATE_VARIABLE_CLD_35_35, ll_backend__unify_gen__STATE_VARIABLE_CLD_30);
    }
#line 12667 "ll_backend.unify_gen.c"
    ll_backend__unify_gen__TypeCtorInfo_42_42 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 1412 "unify_gen.m"
    {
#line 1412 "unify_gen.m"
      ll_backend__unify_gen__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1412 "unify_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1412 "unify_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_38_38, 1) = ((MR_Box) (ll_backend__unify_gen__SuccLabel_21));
#line 1412 "unify_gen.m"
    }
#line 1412 "unify_gen.m"
    {
#line 1412 "unify_gen.m"
      ll_backend__unify_gen__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1412 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_37_37, 0) = ((MR_Box) (ll_backend__unify_gen__V_38_38));
#line 1412 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_37_37, 1) = ((MR_Box) ((MR_String) ""));
#line 1412 "unify_gen.m"
    }
#line 1412 "unify_gen.m"
    {
#line 1412 "unify_gen.m"
      ll_backend__unify_gen__SuccessLabelCode_26 = mercury__cord__singleton_1_f_0(ll_backend__unify_gen__TypeCtorInfo_42_42, ((MR_Box) (ll_backend__unify_gen__V_37_37)));
    }
#line 1413 "unify_gen.m"
    {
#line 1413 "unify_gen.m"
      ll_backend__unify_gen__V_41_41 = mercury__cord__f_43_43_2_f_0(ll_backend__unify_gen__TypeCtorInfo_42_42, ll_backend__unify_gen__SuccessLabelCode_26, ll_backend__unify_gen__DeconsCode_25);
    }
#line 1413 "unify_gen.m"
    {
#line 1413 "unify_gen.m"
      ll_backend__unify_gen__V_40_40 = mercury__cord__f_43_43_2_f_0(ll_backend__unify_gen__TypeCtorInfo_42_42, ll_backend__unify_gen__FailCode_24, ll_backend__unify_gen__V_41_41);
    }
#line 1413 "unify_gen.m"
    {
#line 1413 "unify_gen.m"
      *ll_backend__unify_gen__Code_16 = mercury__cord__f_43_43_2_f_0(ll_backend__unify_gen__TypeCtorInfo_42_42, ll_backend__unify_gen__TagTestCode_22, ll_backend__unify_gen__V_40_40);
    }
#line 1402 "unify_gen.m"
  }
#line 1396 "unify_gen.m"
}

#line 1270 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_det_deconstruction_9_p_0(
#line 1270 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Var_10,
#line 1270 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Cons_11,
#line 1270 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Args_12,
#line 1270 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Modes_13,
#line 1270 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ArgWidths_14,
#line 1270 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_15,
#line 1270 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CI_16,
#line 1270 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_20,
#line 1270 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_21)
#line 1270 "unify_gen.m"
{
#line 1275 "unify_gen.m"
  {
#line 1275 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 1275 "unify_gen.m"
    MR_Word ll_backend__unify_gen__ModuleInfo_18;
#line 1275 "unify_gen.m"
    MR_Word ll_backend__unify_gen__Tag_19;

#line 1276 "unify_gen.m"
    {
#line 1276 "unify_gen.m"
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__unify_gen__CI_16, &ll_backend__unify_gen__ModuleInfo_18);
    }
#line 1277 "unify_gen.m"
    {
#line 1277 "unify_gen.m"
      ll_backend__unify_gen__Tag_19 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ll_backend__unify_gen__ModuleInfo_18, ll_backend__unify_gen__Cons_11);
    }
#line 1278 "unify_gen.m"
    {
#line 1278 "unify_gen.m"
      ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_10_p_0(ll_backend__unify_gen__Var_10, ll_backend__unify_gen__Args_12, ll_backend__unify_gen__Modes_13, ll_backend__unify_gen__ArgWidths_14, ll_backend__unify_gen__Tag_19, ll_backend__unify_gen__Code_15, ll_backend__unify_gen__CI_16, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_20, ll_backend__unify_gen__STATE_VARIABLE_CLD_21);
#line 1278 "unify_gen.m"
      return;
    }
#line 1275 "unify_gen.m"
  }
#line 1270 "unify_gen.m"
}

#line 1231 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__make_fields_and_argvars_7_p_0(
#line 1231 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__1_1,
#line 1231 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_2,
#line 1231 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Rval_3,
#line 1231 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__PrevOffset0_4,
#line 1231 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__TagNum_5,
#line 1231 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__HeadVar__6_6,
#line 1231 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__HeadVar__7_7)
#line 1231 "unify_gen.m"
{
#line 1234 "unify_gen.m"
  {
#line 1234 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;

#line 1234 "unify_gen.m"
    if ((ll_backend__unify_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1234 "unify_gen.m"
      if ((ll_backend__unify_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1234 "unify_gen.m"
        {
#line 1234 "unify_gen.m"
          *ll_backend__unify_gen__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1234 "unify_gen.m"
          *ll_backend__unify_gen__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1234 "unify_gen.m"
        }
#line 1234 "unify_gen.m"
      else
#line 1255 "unify_gen.m"
        {
#line 1256 "unify_gen.m"
          {
#line 1256 "unify_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.make_fields_and_argvars\'/7", (MR_String) "mismatched lists");
#line 1256 "unify_gen.m"
            return;
          }
#line 1255 "unify_gen.m"
        }
#line 1234 "unify_gen.m"
    else
#line 1234 "unify_gen.m"
      {
#line 1234 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 1234 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__1_1, (MR_Integer) 0)));

#line 1234 "unify_gen.m"
        if ((ll_backend__unify_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1257 "unify_gen.m"
          {
#line 1258 "unify_gen.m"
            {
#line 1258 "unify_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.make_fields_and_argvars\'/7", (MR_String) "mismatched lists");
#line 1258 "unify_gen.m"
              return;
            }
#line 1257 "unify_gen.m"
          }
#line 1234 "unify_gen.m"
        else
#line 1236 "unify_gen.m"
          {
#line 1236 "unify_gen.m"
            MR_Word ll_backend__unify_gen__Width_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 1236 "unify_gen.m"
            MR_Word ll_backend__unify_gen__Widths_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 1236 "unify_gen.m"
            MR_Word ll_backend__unify_gen__F_18;
#line 1236 "unify_gen.m"
            MR_Word ll_backend__unify_gen__Fs_19;
#line 1236 "unify_gen.m"
            MR_Word ll_backend__unify_gen__A_20;
#line 1236 "unify_gen.m"
            MR_Word ll_backend__unify_gen__As_21;
#line 1236 "unify_gen.m"
            MR_Integer ll_backend__unify_gen__Offset_23;
#line 1236 "unify_gen.m"
            MR_Integer ll_backend__unify_gen__PrevOffset_24;
#line 1236 "unify_gen.m"
            MR_Word ll_backend__unify_gen__V_29_29;
#line 1236 "unify_gen.m"
            MR_Word ll_backend__unify_gen__V_30_30;
#line 1236 "unify_gen.m"
            MR_Word ll_backend__unify_gen__V_31_31;
#line 1236 "unify_gen.m"
            MR_Word ll_backend__unify_gen__V_32_32;

#line 1243 "unify_gen.m"
#line 1243 "unify_gen.m"
            switch (MR_tag((MR_Word) ll_backend__unify_gen__Width_13)) {
#line 1243 "unify_gen.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1243 "unify_gen.m"
              case (MR_Integer) 0:
#line 1243 "unify_gen.m"
#line 1243 "unify_gen.m"
                switch (MR_unmkbody(ll_backend__unify_gen__Width_13)) {
#line 1243 "unify_gen.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1243 "unify_gen.m"
                  case (MR_Integer) 0:
#line 1240 "unify_gen.m"
                    {
#line 1241 "unify_gen.m"
                      ll_backend__unify_gen__Offset_23 = (ll_backend__unify_gen__PrevOffset0_4 + (MR_Integer) 1);
#line 1242 "unify_gen.m"
                      ll_backend__unify_gen__PrevOffset_24 = ll_backend__unify_gen__Offset_23;
#line 1240 "unify_gen.m"
                    }
#line 1243 "unify_gen.m"
                    break;
#line 1243 "unify_gen.m"
                  case (MR_Integer) 1:
#line 1248 "unify_gen.m"
                    {
#line 1249 "unify_gen.m"
                      ll_backend__unify_gen__Offset_23 = (ll_backend__unify_gen__PrevOffset0_4 + (MR_Integer) 1);
#line 1250 "unify_gen.m"
                      ll_backend__unify_gen__PrevOffset_24 = (ll_backend__unify_gen__Offset_23 + (MR_Integer) 1);
#line 1248 "unify_gen.m"
                    }
#line 1243 "unify_gen.m"
                    break;
#line 1243 "unify_gen.m"
                }
#line 1243 "unify_gen.m"
                break;
#line 1243 "unify_gen.m"
              case (MR_Integer) 1:
#line 1240 "unify_gen.m"
                {
#line 1241 "unify_gen.m"
                  ll_backend__unify_gen__Offset_23 = (ll_backend__unify_gen__PrevOffset0_4 + (MR_Integer) 1);
#line 1242 "unify_gen.m"
                  ll_backend__unify_gen__PrevOffset_24 = ll_backend__unify_gen__Offset_23;
#line 1240 "unify_gen.m"
                }
#line 1243 "unify_gen.m"
                break;
#line 1243 "unify_gen.m"
              case (MR_Integer) 2:
#line 1244 "unify_gen.m"
                {
#line 1245 "unify_gen.m"
                  ll_backend__unify_gen__Offset_23 = ll_backend__unify_gen__PrevOffset0_4;
#line 1246 "unify_gen.m"
                  ll_backend__unify_gen__PrevOffset_24 = ll_backend__unify_gen__Offset_23;
#line 1244 "unify_gen.m"
                }
#line 1243 "unify_gen.m"
                break;
#line 1243 "unify_gen.m"
            }
#line 1252 "unify_gen.m"
            {
#line 1252 "unify_gen.m"
              ll_backend__unify_gen__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1252 "unify_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_30_30, 0) = ((MR_Box) (ll_backend__unify_gen__TagNum_5));
#line 1252 "unify_gen.m"
            }
#line 1252 "unify_gen.m"
            {
#line 1252 "unify_gen.m"
              ll_backend__unify_gen__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1252 "unify_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_32_32, 0) = ((MR_Box) (ll_backend__unify_gen__Offset_23));
#line 1252 "unify_gen.m"
            }
#line 1252 "unify_gen.m"
            {
#line 1252 "unify_gen.m"
              ll_backend__unify_gen__V_31_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1252 "unify_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_31_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1252 "unify_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_31_31, 1) = ((MR_Box) (ll_backend__unify_gen__V_32_32));
#line 1252 "unify_gen.m"
            }
#line 1252 "unify_gen.m"
            {
#line 1252 "unify_gen.m"
              ll_backend__unify_gen__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1252 "unify_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 1252 "unify_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_29_29, 1) = ((MR_Box) (ll_backend__unify_gen__V_30_30));
#line 1252 "unify_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_29_29, 2) = ((MR_Box) (ll_backend__unify_gen__Rval_3));
#line 1252 "unify_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_29_29, 3) = ((MR_Box) (ll_backend__unify_gen__V_31_31));
#line 1252 "unify_gen.m"
            }
#line 1252 "unify_gen.m"
            {
#line 1252 "unify_gen.m"
              ll_backend__unify_gen__F_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1252 "unify_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__unify_gen__F_18, 0) = ((MR_Box) (ll_backend__unify_gen__V_29_29));
#line 1252 "unify_gen.m"
              MR_hl_field(MR_mktag(1), ll_backend__unify_gen__F_18, 1) = ((MR_Box) (ll_backend__unify_gen__Width_13));
#line 1252 "unify_gen.m"
            }
#line 1253 "unify_gen.m"
            {
#line 1253 "unify_gen.m"
              ll_backend__unify_gen__A_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1253 "unify_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__unify_gen__A_20, 0) = ((MR_Box) (ll_backend__unify_gen__V_56_56));
#line 1253 "unify_gen.m"
            }
#line 1254 "unify_gen.m"
            {
#line 1254 "unify_gen.m"
              ll_backend__unify_gen__make_fields_and_argvars_7_p_0(ll_backend__unify_gen__V_55_55, ll_backend__unify_gen__Widths_14, ll_backend__unify_gen__Rval_3, ll_backend__unify_gen__PrevOffset_24, ll_backend__unify_gen__TagNum_5, &ll_backend__unify_gen__Fs_19, &ll_backend__unify_gen__As_21);
            }
#line 1236 "unify_gen.m"
            {
#line 1236 "unify_gen.m"
              MR_Word base;
#line 1236 "unify_gen.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1236 "unify_gen.m"
              *ll_backend__unify_gen__HeadVar__6_6 = base;
#line 1236 "unify_gen.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__unify_gen__F_18));
#line 1236 "unify_gen.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__unify_gen__Fs_19));
#line 1236 "unify_gen.m"
            }
#line 1236 "unify_gen.m"
            {
#line 1236 "unify_gen.m"
              MR_Word base;
#line 1236 "unify_gen.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1236 "unify_gen.m"
              *ll_backend__unify_gen__HeadVar__7_7 = base;
#line 1236 "unify_gen.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__unify_gen__A_20));
#line 1236 "unify_gen.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__unify_gen__As_21));
#line 1236 "unify_gen.m"
            }
#line 1236 "unify_gen.m"
          }
#line 1234 "unify_gen.m"
      }
#line 1234 "unify_gen.m"
  }
#line 1231 "unify_gen.m"
}

#line 1218 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__var_types_3_p_0(
#line 1218 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CI_4,
#line 1218 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Vars_5,
#line 1218 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Types_6)
#line 1218 "unify_gen.m"
{
#line 1221 "unify_gen.m"
  {
#line 1221 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 1221 "unify_gen.m"
    MR_Word ll_backend__unify_gen__ProcInfo_7;
#line 1221 "unify_gen.m"
    MR_Word ll_backend__unify_gen__VarTypes_8;

#line 1222 "unify_gen.m"
    {
#line 1222 "unify_gen.m"
      ll_backend__code_info__get_proc_info_2_p_0(ll_backend__unify_gen__CI_4, &ll_backend__unify_gen__ProcInfo_7);
    }
#line 1223 "unify_gen.m"
    {
#line 1223 "unify_gen.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__unify_gen__ProcInfo_7, &ll_backend__unify_gen__VarTypes_8);
    }
#line 1224 "unify_gen.m"
    {
#line 1224 "unify_gen.m"
      hlds__vartypes__lookup_var_types_3_p_0(ll_backend__unify_gen__VarTypes_8, ll_backend__unify_gen__Vars_5, ll_backend__unify_gen__Types_6);
#line 1224 "unify_gen.m"
      return;
    }
#line 1221 "unify_gen.m"
  }
#line 1218 "unify_gen.m"
}

#line 1202 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_field_take_address_assigns_6_p_0(
#line 1202 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__1_1,
#line 1202 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CellVar_2,
#line 1202 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__CellPtag_3,
#line 1202 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__HeadVar__4_4,
#line 1202 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_5,
#line 1202 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_6)
#line 1202 "unify_gen.m"
{
#line 1206 "unify_gen.m"
  {
#line 1206 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;

#line 1206 "unify_gen.m"
    if ((ll_backend__unify_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1206 "unify_gen.m"
      {
#line 1206 "unify_gen.m"
        {
#line 1206 "unify_gen.m"
          *ll_backend__unify_gen__HeadVar__4_4 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 1206 "unify_gen.m"
        *ll_backend__unify_gen__STATE_VARIABLE_CLD_6 = ll_backend__unify_gen__STATE_VARIABLE_CLD_0_5;
#line 1206 "unify_gen.m"
      }
#line 1206 "unify_gen.m"
    else
#line 1208 "unify_gen.m"
      {
#line 1208 "unify_gen.m"
        MR_Word ll_backend__unify_gen__FieldAddr_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 1208 "unify_gen.m"
        MR_Word ll_backend__unify_gen__FieldAddrs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 1208 "unify_gen.m"
        MR_Word ll_backend__unify_gen__ThisCode_16;
#line 1208 "unify_gen.m"
        MR_Word ll_backend__unify_gen__RestCode_17;
#line 1208 "unify_gen.m"
        MR_Integer ll_backend__unify_gen__FieldNum_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__FieldAddr_12, (MR_Integer) 0)));
#line 1208 "unify_gen.m"
        MR_Word ll_backend__unify_gen__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__FieldAddr_12, (MR_Integer) 1)));
#line 1208 "unify_gen.m"
        MR_Word ll_backend__unify_gen__FieldNumRval_21;
#line 1208 "unify_gen.m"
        MR_Word ll_backend__unify_gen__Addr_22;
#line 1208 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_25_25;
#line 1208 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_26_26;
#line 1208 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_27_27;
#line 1208 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_28_28;
#line 1208 "unify_gen.m"
        MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_29_29;

#line 1210 "unify_gen.m"
        {
#line 1210 "unify_gen.m"
          ll_backend__unify_gen__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1210 "unify_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_25_25, 0) = ((MR_Box) (ll_backend__unify_gen__FieldNum_19));
#line 1210 "unify_gen.m"
        }
#line 1210 "unify_gen.m"
        {
#line 1210 "unify_gen.m"
          ll_backend__unify_gen__FieldNumRval_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1210 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__FieldNumRval_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1210 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__FieldNumRval_21, 1) = ((MR_Box) (ll_backend__unify_gen__V_25_25));
#line 1210 "unify_gen.m"
        }
#line 1211 "unify_gen.m"
        {
#line 1211 "unify_gen.m"
          ll_backend__unify_gen__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1211 "unify_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_27_27, 0) = ((MR_Box) (ll_backend__unify_gen__CellVar_2));
#line 1211 "unify_gen.m"
        }
#line 1211 "unify_gen.m"
        {
#line 1211 "unify_gen.m"
          ll_backend__unify_gen__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1211 "unify_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_28_28, 0) = ((MR_Box) (ll_backend__unify_gen__CellPtag_3));
#line 1211 "unify_gen.m"
        }
#line 1211 "unify_gen.m"
        {
#line 1211 "unify_gen.m"
          ll_backend__unify_gen__V_26_26 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1211 "unify_gen.m"
          MR_hl_field(MR_mktag(2), ll_backend__unify_gen__V_26_26, 0) = ((MR_Box) (ll_backend__unify_gen__V_27_27));
#line 1211 "unify_gen.m"
          MR_hl_field(MR_mktag(2), ll_backend__unify_gen__V_26_26, 1) = ((MR_Box) (ll_backend__unify_gen__V_28_28));
#line 1211 "unify_gen.m"
          MR_hl_field(MR_mktag(2), ll_backend__unify_gen__V_26_26, 2) = ((MR_Box) (ll_backend__unify_gen__FieldNumRval_21));
#line 1211 "unify_gen.m"
        }
#line 1211 "unify_gen.m"
        {
#line 1211 "unify_gen.m"
          ll_backend__unify_gen__Addr_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1211 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Addr_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1211 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Addr_22, 1) = ((MR_Box) (ll_backend__unify_gen__V_26_26));
#line 1211 "unify_gen.m"
        }
#line 1212 "unify_gen.m"
        {
#line 1212 "unify_gen.m"
          ll_backend__code_loc_dep__assign_expr_to_var_5_p_0(ll_backend__unify_gen__Var_20, ll_backend__unify_gen__Addr_22, &ll_backend__unify_gen__ThisCode_16, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_5, &ll_backend__unify_gen__STATE_VARIABLE_CLD_29_29);
        }
#line 1213 "unify_gen.m"
        {
#line 1213 "unify_gen.m"
          ll_backend__unify_gen__generate_field_take_address_assigns_6_p_0(ll_backend__unify_gen__FieldAddrs_13, ll_backend__unify_gen__CellVar_2, ll_backend__unify_gen__CellPtag_3, &ll_backend__unify_gen__RestCode_17, ll_backend__unify_gen__STATE_VARIABLE_CLD_29_29, ll_backend__unify_gen__STATE_VARIABLE_CLD_6);
        }
#line 1208 "unify_gen.m"
        {
#line 1208 "unify_gen.m"
          *ll_backend__unify_gen__HeadVar__4_4 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__unify_gen__ThisCode_16, ll_backend__unify_gen__RestCode_17);
        }
#line 1208 "unify_gen.m"
      }
#line 1206 "unify_gen.m"
  }
#line 1202 "unify_gen.m"
}

#line 1183 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_field_addr_5_p_0(
#line 1183 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CellArg_6,
#line 1183 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__ArgOffset_7,
#line 1183 "unify_gen.m"
  MR_Integer * ll_backend__unify_gen__NextOffset_8,
#line 1183 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_RevFieldAddrs_0_16,
#line 1183 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_RevFieldAddrs_17)
#line 1183 "unify_gen.m"
{
#line 1190 "unify_gen.m"
  {
#line 1190 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;

#line 1190 "unify_gen.m"
#line 1190 "unify_gen.m"
    switch (MR_tag((MR_Word) ll_backend__unify_gen__CellArg_6)) {
#line 1190 "unify_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1190 "unify_gen.m"
      case (MR_Integer) 0:
#line 1190 "unify_gen.m"
        {
#line 1191 "unify_gen.m"
          *ll_backend__unify_gen__NextOffset_8 = (ll_backend__unify_gen__ArgOffset_7 + (MR_Integer) 1);
#line 1190 "unify_gen.m"
          *ll_backend__unify_gen__STATE_VARIABLE_RevFieldAddrs_17 = ll_backend__unify_gen__STATE_VARIABLE_RevFieldAddrs_0_16;
#line 1190 "unify_gen.m"
        }
#line 1190 "unify_gen.m"
        break;
#line 1190 "unify_gen.m"
      case (MR_Integer) 1:
#line 1190 "unify_gen.m"
        {
#line 1191 "unify_gen.m"
          *ll_backend__unify_gen__NextOffset_8 = (ll_backend__unify_gen__ArgOffset_7 + (MR_Integer) 1);
#line 1190 "unify_gen.m"
          *ll_backend__unify_gen__STATE_VARIABLE_RevFieldAddrs_17 = ll_backend__unify_gen__STATE_VARIABLE_RevFieldAddrs_0_16;
#line 1190 "unify_gen.m"
        }
#line 1190 "unify_gen.m"
        break;
#line 1190 "unify_gen.m"
      case (MR_Integer) 2:
#line 1193 "unify_gen.m"
        {
#line 1194 "unify_gen.m"
          *ll_backend__unify_gen__NextOffset_8 = (ll_backend__unify_gen__ArgOffset_7 + (MR_Integer) 2);
#line 1193 "unify_gen.m"
          *ll_backend__unify_gen__STATE_VARIABLE_RevFieldAddrs_17 = ll_backend__unify_gen__STATE_VARIABLE_RevFieldAddrs_0_16;
#line 1193 "unify_gen.m"
        }
#line 1190 "unify_gen.m"
        break;
#line 1190 "unify_gen.m"
      case (MR_Integer) 3:
#line 1196 "unify_gen.m"
        {
#line 1196 "unify_gen.m"
          MR_Word ll_backend__unify_gen__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__CellArg_6, (MR_Integer) 0)));
#line 1196 "unify_gen.m"
          MR_Word ll_backend__unify_gen__FieldAddr_15;
#line 1196 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__CellArg_6, (MR_Integer) 1)));

#line 1197 "unify_gen.m"
          *ll_backend__unify_gen__NextOffset_8 = (ll_backend__unify_gen__ArgOffset_7 + (MR_Integer) 1);
#line 1198 "unify_gen.m"
          {
#line 1198 "unify_gen.m"
            ll_backend__unify_gen__FieldAddr_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1198 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__FieldAddr_15, 0) = ((MR_Box) (ll_backend__unify_gen__ArgOffset_7));
#line 1198 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__FieldAddr_15, 1) = ((MR_Box) (ll_backend__unify_gen__Var_13));
#line 1198 "unify_gen.m"
          }
#line 1199 "unify_gen.m"
          {
#line 1199 "unify_gen.m"
            MR_Word base;
#line 1199 "unify_gen.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1199 "unify_gen.m"
            *ll_backend__unify_gen__STATE_VARIABLE_RevFieldAddrs_17 = base;
#line 1199 "unify_gen.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__unify_gen__FieldAddr_15));
#line 1199 "unify_gen.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__unify_gen__STATE_VARIABLE_RevFieldAddrs_0_16));
#line 1199 "unify_gen.m"
          }
#line 1196 "unify_gen.m"
        }
#line 1190 "unify_gen.m"
        break;
#line 1190 "unify_gen.m"
    }
#line 1190 "unify_gen.m"
  }
#line 1183 "unify_gen.m"
}

#line 1162 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__maybe_add_alloc_site_info_6_p_0(
#line 1162 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Context_7,
#line 1162 "unify_gen.m"
  MR_String ll_backend__unify_gen__VarTypeMsg_8,
#line 1162 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__Size_9,
#line 1162 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__MaybeAllocId_10,
#line 1162 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_15,
#line 1162 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_16)
#line 1162 "unify_gen.m"
{
#line 1165 "unify_gen.m"
  {
#line 1165 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 1165 "unify_gen.m"
    MR_Word ll_backend__unify_gen__Globals_12;
#line 1165 "unify_gen.m"
    MR_Word ll_backend__unify_gen__ProfileMemory_13;

#line 1166 "unify_gen.m"
    {
#line 1166 "unify_gen.m"
      ll_backend__code_info__get_globals_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_15, &ll_backend__unify_gen__Globals_12);
    }
#line 1167 "unify_gen.m"
    {
#line 1167 "unify_gen.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__unify_gen__Globals_12, (MR_Integer) 195, &ll_backend__unify_gen__ProfileMemory_13);
    }
#line 1172 "unify_gen.m"
#line 1172 "unify_gen.m"
    switch (ll_backend__unify_gen__ProfileMemory_13) {
#line 1172 "unify_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1172 "unify_gen.m"
      case (MR_Integer) 0:
#line 1173 "unify_gen.m"
        {
#line 1174 "unify_gen.m"
          *ll_backend__unify_gen__MaybeAllocId_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1173 "unify_gen.m"
          *ll_backend__unify_gen__STATE_VARIABLE_CI_16 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_15;
#line 1173 "unify_gen.m"
        }
#line 1172 "unify_gen.m"
        break;
#line 1172 "unify_gen.m"
      case (MR_Integer) 1:
#line 1169 "unify_gen.m"
        {
#line 1169 "unify_gen.m"
          MR_Word ll_backend__unify_gen__AllocId_14;

#line 1170 "unify_gen.m"
          {
#line 1170 "unify_gen.m"
            ll_backend__code_info__add_alloc_site_info_6_p_0(ll_backend__unify_gen__Context_7, ll_backend__unify_gen__VarTypeMsg_8, ll_backend__unify_gen__Size_9, &ll_backend__unify_gen__AllocId_14, ll_backend__unify_gen__STATE_VARIABLE_CI_0_15, ll_backend__unify_gen__STATE_VARIABLE_CI_16);
          }
#line 1171 "unify_gen.m"
          {
#line 1171 "unify_gen.m"
            MR_Word base;
#line 1171 "unify_gen.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1171 "unify_gen.m"
            *ll_backend__unify_gen__MaybeAllocId_10 = base;
#line 1171 "unify_gen.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__unify_gen__AllocId_14));
#line 1171 "unify_gen.m"
          }
#line 1169 "unify_gen.m"
        }
#line 1172 "unify_gen.m"
        break;
#line 1172 "unify_gen.m"
    }
#line 1165 "unify_gen.m"
  }
#line 1162 "unify_gen.m"
}

#line 1180 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__construct_cell_12_p_0_1(
#line 1180 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg,
#line 1180 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
#line 1180 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
#line 1180 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_3,
#line 1180 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_4,
#line 1180 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_5)
#line 1180 "unify_gen.m"
{
#line 1180 "unify_gen.m"
  {
#line 1180 "unify_gen.m"
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;
#line 1180 "unify_gen.m"
    MR_Integer ll_backend__unify_gen__conv1_NextOffset_8;
#line 1180 "unify_gen.m"
    MR_Word ll_backend__unify_gen__conv0_STATE_VARIABLE_RevFieldAddrs_17;

#line 1180 "unify_gen.m"
    {
#line 1180 "unify_gen.m"
      ll_backend__unify_gen__generate_field_addr_5_p_0(((MR_Word) ll_backend__unify_gen__wrapper_arg_1), ((MR_Integer) ll_backend__unify_gen__wrapper_arg_2), &ll_backend__unify_gen__conv1_NextOffset_8, ((MR_Word) ll_backend__unify_gen__wrapper_arg_4), &ll_backend__unify_gen__conv0_STATE_VARIABLE_RevFieldAddrs_17);
    }
#line 1180 "unify_gen.m"
    *ll_backend__unify_gen__wrapper_arg_3 = ((MR_Box) (ll_backend__unify_gen__conv1_NextOffset_8));
#line 1180 "unify_gen.m"
    *ll_backend__unify_gen__wrapper_arg_5 = ((MR_Box) (ll_backend__unify_gen__conv0_STATE_VARIABLE_RevFieldAddrs_17));
#line 1180 "unify_gen.m"
  }
#line 1180 "unify_gen.m"
}

#line 1118 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__construct_cell_12_p_0(
#line 1118 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Var_13,
#line 1118 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__Ptag_14,
#line 1118 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CellArgs_15,
#line 1118 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HowToConstruct_16,
#line 1118 "unify_gen.m"
  MR_Word ll_backend__unify_gen__MaybeSize_17,
#line 1118 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Context_18,
#line 1118 "unify_gen.m"
  MR_Word ll_backend__unify_gen__MayUseAtomic_19,
#line 1118 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_20,
#line 1118 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_35,
#line 1118 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_36,
#line 1118 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_37,
#line 1118 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_38)
#line 1118 "unify_gen.m"
{
#line 1124 "unify_gen.m"
  {
#line 1124 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 1124 "unify_gen.m"
    MR_Word ll_backend__unify_gen__VarType_23;
#line 1124 "unify_gen.m"
    MR_String ll_backend__unify_gen__VarTypeMsg_24;
#line 1124 "unify_gen.m"
    MR_Word ll_backend__unify_gen__ReserveWordAtStart_27;
#line 1124 "unify_gen.m"
    MR_Integer ll_backend__unify_gen__Size_28;
#line 1124 "unify_gen.m"
    MR_Word ll_backend__unify_gen__MaybeAllocId_29;
#line 1124 "unify_gen.m"
    MR_Word ll_backend__unify_gen__CellCode_30;
#line 1124 "unify_gen.m"
    MR_Word ll_backend__unify_gen__FieldAddrs_31;
#line 1124 "unify_gen.m"
    MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_39_39;
#line 1124 "unify_gen.m"
    MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_41_41;
#line 1124 "unify_gen.m"
    MR_Word ll_backend__unify_gen__TypeCtor_46;
#line 1124 "unify_gen.m"
    MR_Word ll_backend__unify_gen__TypeSym_47;
#line 1124 "unify_gen.m"
    MR_Integer ll_backend__unify_gen__TypeArity_48;
#line 1124 "unify_gen.m"
    MR_String ll_backend__unify_gen__TypeSymStr_49;
#line 1124 "unify_gen.m"
    MR_String ll_backend__unify_gen__TypeArityStr_50;
#line 1124 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_51_51;
#line 1124 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_52_52;
#line 1124 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_54_54;
#line 1124 "unify_gen.m"
    MR_Word ll_backend__unify_gen__Globals_63;
#line 1124 "unify_gen.m"
    MR_Word ll_backend__unify_gen__ProfileMemory_64;
#line 1124 "unify_gen.m"
    MR_Word ll_backend__unify_gen__RevFieldAddrs_71;
#line 1134 "unify_gen.m"
    MR_Word ll_backend__unify_gen__Globals_25;
#line 1134 "unify_gen.m"
    MR_Word ll_backend__unify_gen__GCMethod_26;
#line 1180 "unify_gen.m"
    MR_Integer ll_backend__unify_gen__V_70_70;
#line 1180 "unify_gen.m"
    MR_Box ll_backend__unify_gen__conv3_V_70_70;
#line 1180 "unify_gen.m"
    MR_Box ll_backend__unify_gen__conv2_RevFieldAddrs_71;

#line 1125 "unify_gen.m"
    {
#line 1125 "unify_gen.m"
      ll_backend__unify_gen__VarType_23 = ll_backend__code_info__variable_type_2_f_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_35, ll_backend__unify_gen__Var_13);
    }
#line 2310 "unify_gen.m"
    {
#line 2310 "unify_gen.m"
      parse_tree__prog_type__type_to_ctor_det_2_p_0(ll_backend__unify_gen__VarType_23, &ll_backend__unify_gen__TypeCtor_46);
    }
#line 2311 "unify_gen.m"
    ll_backend__unify_gen__TypeSym_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__TypeCtor_46, (MR_Integer) 0)));
#line 2311 "unify_gen.m"
    ll_backend__unify_gen__TypeArity_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__TypeCtor_46, (MR_Integer) 1)));
#line 2312 "unify_gen.m"
    {
#line 2312 "unify_gen.m"
      ll_backend__unify_gen__TypeSymStr_49 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ll_backend__unify_gen__TypeSym_47);
    }
#line 2313 "unify_gen.m"
    {
#line 2313 "unify_gen.m"
      mercury__string__int_to_string_2_p_0(ll_backend__unify_gen__TypeArity_48, &ll_backend__unify_gen__TypeArityStr_50);
    }
#line 2314 "unify_gen.m"
    {
#line 2314 "unify_gen.m"
      ll_backend__unify_gen__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2314 "unify_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_54_54, 0) = ((MR_Box) (ll_backend__unify_gen__TypeArityStr_50));
#line 2314 "unify_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2314 "unify_gen.m"
    }
#line 2314 "unify_gen.m"
    {
#line 2314 "unify_gen.m"
      ll_backend__unify_gen__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2314 "unify_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_52_52, 0) = ((MR_Box) ((MR_String) "/"));
#line 2314 "unify_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_52_52, 1) = ((MR_Box) (ll_backend__unify_gen__V_54_54));
#line 2314 "unify_gen.m"
    }
#line 2314 "unify_gen.m"
    {
#line 2314 "unify_gen.m"
      ll_backend__unify_gen__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2314 "unify_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_51_51, 0) = ((MR_Box) (ll_backend__unify_gen__TypeSymStr_49));
#line 2314 "unify_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_51_51, 1) = ((MR_Box) (ll_backend__unify_gen__V_52_52));
#line 2314 "unify_gen.m"
    }
#line 2314 "unify_gen.m"
    {
#line 2314 "unify_gen.m"
      mercury__string__append_list_2_p_0(ll_backend__unify_gen__V_51_51, &ll_backend__unify_gen__VarTypeMsg_24);
    }
#line 1134 "unify_gen.m"
    {
#line 1134 "unify_gen.m"
      ll_backend__code_info__get_globals_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_35, &ll_backend__unify_gen__Globals_25);
    }
#line 1135 "unify_gen.m"
    {
#line 1135 "unify_gen.m"
      libs__globals__get_gc_method_2_p_0(ll_backend__unify_gen__Globals_25, &ll_backend__unify_gen__GCMethod_26);
    }
#line 1136 "unify_gen.m"
    ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__GCMethod_26 == (MR_Integer) 5);
#line 1134 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 1137 "unify_gen.m"
      {
#line 1137 "unify_gen.m"
        ll_backend__unify_gen__succeeded = parse_tree__prog_type__is_introduced_type_info_type_1_p_0(ll_backend__unify_gen__VarType_23);
      }
#line 1140 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 1139 "unify_gen.m"
      ll_backend__unify_gen__ReserveWordAtStart_27 = (MR_Integer) 1;
#line 1140 "unify_gen.m"
    else
#line 1141 "unify_gen.m"
      ll_backend__unify_gen__ReserveWordAtStart_27 = (MR_Integer) 0;
#line 1143 "unify_gen.m"
    {
#line 1143 "unify_gen.m"
      ll_backend__unify_gen__Size_28 = ll_backend__code_util__size_of_cell_args_1_f_0(ll_backend__unify_gen__CellArgs_15);
    }
#line 1166 "unify_gen.m"
    {
#line 1166 "unify_gen.m"
      ll_backend__code_info__get_globals_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_35, &ll_backend__unify_gen__Globals_63);
    }
#line 1167 "unify_gen.m"
    {
#line 1167 "unify_gen.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__unify_gen__Globals_63, (MR_Integer) 195, &ll_backend__unify_gen__ProfileMemory_64);
    }
#line 1172 "unify_gen.m"
#line 1172 "unify_gen.m"
    switch (ll_backend__unify_gen__ProfileMemory_64) {
#line 1172 "unify_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1172 "unify_gen.m"
      case (MR_Integer) 0:
#line 1173 "unify_gen.m"
        {
#line 1174 "unify_gen.m"
          ll_backend__unify_gen__MaybeAllocId_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1173 "unify_gen.m"
          ll_backend__unify_gen__STATE_VARIABLE_CI_39_39 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_35;
#line 1173 "unify_gen.m"
        }
#line 1172 "unify_gen.m"
        break;
#line 1172 "unify_gen.m"
      case (MR_Integer) 1:
#line 1169 "unify_gen.m"
        {
#line 1169 "unify_gen.m"
          MR_Word ll_backend__unify_gen__AllocId_65;

#line 1170 "unify_gen.m"
          {
#line 1170 "unify_gen.m"
            ll_backend__code_info__add_alloc_site_info_6_p_0(ll_backend__unify_gen__Context_18, ll_backend__unify_gen__VarTypeMsg_24, ll_backend__unify_gen__Size_28, &ll_backend__unify_gen__AllocId_65, ll_backend__unify_gen__STATE_VARIABLE_CI_0_35, &ll_backend__unify_gen__STATE_VARIABLE_CI_39_39);
          }
#line 1171 "unify_gen.m"
          {
#line 1171 "unify_gen.m"
            ll_backend__unify_gen__MaybeAllocId_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1171 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__MaybeAllocId_29, 0) = ((MR_Box) (ll_backend__unify_gen__AllocId_65));
#line 1171 "unify_gen.m"
          }
#line 1169 "unify_gen.m"
        }
#line 1172 "unify_gen.m"
        break;
#line 1172 "unify_gen.m"
    }
#line 1145 "unify_gen.m"
    {
#line 1145 "unify_gen.m"
      ll_backend__code_loc_dep__assign_cell_to_var_13_p_0(ll_backend__unify_gen__Var_13, ll_backend__unify_gen__ReserveWordAtStart_27, ll_backend__unify_gen__Ptag_14, ll_backend__unify_gen__CellArgs_15, ll_backend__unify_gen__HowToConstruct_16, ll_backend__unify_gen__MaybeSize_17, ll_backend__unify_gen__MaybeAllocId_29, ll_backend__unify_gen__MayUseAtomic_19, &ll_backend__unify_gen__CellCode_30, ll_backend__unify_gen__STATE_VARIABLE_CI_39_39, ll_backend__unify_gen__STATE_VARIABLE_CI_36, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_37, &ll_backend__unify_gen__STATE_VARIABLE_CLD_41_41);
    }
#line 1180 "unify_gen.m"
    {
#line 1180 "unify_gen.m"
      mercury__list__foldl2_6_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_cell_arg_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__unify_gen_scalar_common_1[6], (MR_Word) &ll_backend__unify_gen_scalar_common_2[6], ll_backend__unify_gen__CellArgs_15, ((MR_Box) ((MR_Integer) 0)), &ll_backend__unify_gen__conv3_V_70_70, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &ll_backend__unify_gen__conv2_RevFieldAddrs_71);
    }
#line 1180 "unify_gen.m"
    ll_backend__unify_gen__V_70_70 = ((MR_Integer) ll_backend__unify_gen__conv3_V_70_70);
#line 1180 "unify_gen.m"
    ll_backend__unify_gen__RevFieldAddrs_71 = ((MR_Word) ll_backend__unify_gen__conv2_RevFieldAddrs_71);
#line 1181 "unify_gen.m"
    {
#line 1181 "unify_gen.m"
      mercury__list__reverse_2_p_0((MR_Word) &ll_backend__unify_gen__ll_backend__unify_gen__type_ctor_info_field_addr_0, ll_backend__unify_gen__RevFieldAddrs_71, &ll_backend__unify_gen__FieldAddrs_31);
    }
#line 1152 "unify_gen.m"
    if ((ll_backend__unify_gen__FieldAddrs_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1149 "unify_gen.m"
      {
#line 1151 "unify_gen.m"
        *ll_backend__unify_gen__Code_20 = ll_backend__unify_gen__CellCode_30;
#line 1149 "unify_gen.m"
        *ll_backend__unify_gen__STATE_VARIABLE_CLD_38 = ll_backend__unify_gen__STATE_VARIABLE_CLD_41_41;
#line 1149 "unify_gen.m"
      }
#line 1152 "unify_gen.m"
    else
#line 1153 "unify_gen.m"
      {
#line 1153 "unify_gen.m"
        MR_Word ll_backend__unify_gen__FieldCode_34;

#line 1157 "unify_gen.m"
        {
#line 1157 "unify_gen.m"
          ll_backend__unify_gen__generate_field_take_address_assigns_6_p_0(ll_backend__unify_gen__FieldAddrs_31, ll_backend__unify_gen__Var_13, ll_backend__unify_gen__Ptag_14, &ll_backend__unify_gen__FieldCode_34, ll_backend__unify_gen__STATE_VARIABLE_CLD_41_41, ll_backend__unify_gen__STATE_VARIABLE_CLD_38);
        }
#line 1159 "unify_gen.m"
        {
#line 1159 "unify_gen.m"
          *ll_backend__unify_gen__Code_20 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__unify_gen__CellCode_30, ll_backend__unify_gen__FieldCode_34);
        }
#line 1153 "unify_gen.m"
      }
#line 1124 "unify_gen.m"
  }
#line 1118 "unify_gen.m"
}

#line 1109 "unify_gen.m"
static MR_Word MR_CALL 
ll_backend__unify_gen__condense_needs_updates_1_f_0(
#line 1109 "unify_gen.m"
  MR_Word ll_backend__unify_gen__NeedsUpdatess_3)
#line 1109 "unify_gen.m"
{
#line 1111 "unify_gen.m"
  {
#line 1111 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 1111 "unify_gen.m"
    MR_Word ll_backend__unify_gen__HeadVar__2_2;

#line 1112 "unify_gen.m"
    {
#line 1112 "unify_gen.m"
      ll_backend__unify_gen__succeeded = mercury__list__member_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0, ((MR_Box) ((MR_Integer) 0)), ll_backend__unify_gen__NeedsUpdatess_3);
    }
#line 1111 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 1113 "unify_gen.m"
      ll_backend__unify_gen__HeadVar__2_2 = (MR_Integer) 0;
#line 1111 "unify_gen.m"
    else
#line 1115 "unify_gen.m"
      ll_backend__unify_gen__HeadVar__2_2 = (MR_Integer) 1;
#line 1111 "unify_gen.m"
    return ll_backend__unify_gen__HeadVar__2_2;
#line 1111 "unify_gen.m"
  }
#line 1109 "unify_gen.m"
}

#line 1104 "unify_gen.m"
static MR_Box MR_CALL 
ll_backend__unify_gen__pack_how_to_construct_3_p_0_1(
#line 1104 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg,
#line 1104 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_1)
#line 1104 "unify_gen.m"
{
#line 1104 "unify_gen.m"
  {
#line 1104 "unify_gen.m"
    MR_Box ll_backend__unify_gen__wrapper_arg_2;
#line 1104 "unify_gen.m"
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;
#line 1104 "unify_gen.m"
    MR_Word ll_backend__unify_gen__conv0_HeadVar__2_2;

#line 1104 "unify_gen.m"
    {
#line 1104 "unify_gen.m"
      ll_backend__unify_gen__conv0_HeadVar__2_2 = ll_backend__unify_gen__condense_needs_updates_1_f_0(((MR_Word) ll_backend__unify_gen__wrapper_arg_1));
    }
#line 1104 "unify_gen.m"
    ll_backend__unify_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__unify_gen__conv0_HeadVar__2_2));
#line 1104 "unify_gen.m"
    return ll_backend__unify_gen__wrapper_arg_2;
#line 1104 "unify_gen.m"
  }
#line 1104 "unify_gen.m"
}

#line 1088 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__pack_how_to_construct_3_p_0(
#line 1088 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ArgWidths_4,
#line 1088 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_HowToConstruct_0_14,
#line 1088 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_HowToConstruct_15)
#line 1088 "unify_gen.m"
{
#line 1093 "unify_gen.m"
  {
#line 1093 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;

#line 1093 "unify_gen.m"
#line 1093 "unify_gen.m"
    switch (MR_tag((MR_Word) ll_backend__unify_gen__STATE_VARIABLE_HowToConstruct_0_14)) {
#line 1093 "unify_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1093 "unify_gen.m"
      case (MR_Integer) 0:
#line 1093 "unify_gen.m"
#line 1093 "unify_gen.m"
        switch (MR_unmkbody(ll_backend__unify_gen__STATE_VARIABLE_HowToConstruct_0_14)) {
#line 1093 "unify_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1093 "unify_gen.m"
          case (MR_Integer) 0:
#line 1093 "unify_gen.m"
            *ll_backend__unify_gen__STATE_VARIABLE_HowToConstruct_15 = ll_backend__unify_gen__STATE_VARIABLE_HowToConstruct_0_14;
#line 1093 "unify_gen.m"
            break;
#line 1093 "unify_gen.m"
          case (MR_Integer) 1:
#line 1095 "unify_gen.m"
            *ll_backend__unify_gen__STATE_VARIABLE_HowToConstruct_15 = ll_backend__unify_gen__STATE_VARIABLE_HowToConstruct_0_14;
#line 1093 "unify_gen.m"
            break;
#line 1093 "unify_gen.m"
        }
#line 1093 "unify_gen.m"
        break;
#line 1093 "unify_gen.m"
      case (MR_Integer) 1:
#line 1099 "unify_gen.m"
        {
#line 1099 "unify_gen.m"
          MR_Word ll_backend__unify_gen__TypeCtorInfo_18_18 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0;
#line 1099 "unify_gen.m"
          MR_Word ll_backend__unify_gen__CellToReuse0_7 = (MR_Word) MR_body(((MR_Word) ll_backend__unify_gen__STATE_VARIABLE_HowToConstruct_0_14), (MR_Integer) 1);
#line 1099 "unify_gen.m"
          MR_Word ll_backend__unify_gen__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__CellToReuse0_7, (MR_Integer) 0)));
#line 1099 "unify_gen.m"
          MR_Word ll_backend__unify_gen__ConsIds_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__CellToReuse0_7, (MR_Integer) 1)));
#line 1099 "unify_gen.m"
          MR_Word ll_backend__unify_gen__NeedsUpdates0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__CellToReuse0_7, (MR_Integer) 2)));
#line 1099 "unify_gen.m"
          MR_Word ll_backend__unify_gen__NeedsUpdates1_11;
#line 1099 "unify_gen.m"
          MR_Word ll_backend__unify_gen__NeedsUpdates_12;
#line 1099 "unify_gen.m"
          MR_Word ll_backend__unify_gen__CellToReuse_13;

#line 1103 "unify_gen.m"
          {
#line 1103 "unify_gen.m"
            backend_libs__arg_pack__group_same_word_elements_3_p_0(ll_backend__unify_gen__TypeCtorInfo_18_18, ll_backend__unify_gen__ArgWidths_4, ll_backend__unify_gen__NeedsUpdates0_10, &ll_backend__unify_gen__NeedsUpdates1_11);
          }
#line 1104 "unify_gen.m"
          {
#line 1104 "unify_gen.m"
            ll_backend__unify_gen__NeedsUpdates_12 = mercury__list__map_2_f_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[5], ll_backend__unify_gen__TypeCtorInfo_18_18, (MR_Word) &ll_backend__unify_gen_scalar_common_2[5], ll_backend__unify_gen__NeedsUpdates1_11);
          }
#line 1105 "unify_gen.m"
          {
#line 1105 "unify_gen.m"
            ll_backend__unify_gen__CellToReuse_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1105 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__CellToReuse_13, 0) = ((MR_Box) (ll_backend__unify_gen__Var_8));
#line 1105 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__CellToReuse_13, 1) = ((MR_Box) (ll_backend__unify_gen__ConsIds_9));
#line 1105 "unify_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__CellToReuse_13, 2) = ((MR_Box) (ll_backend__unify_gen__NeedsUpdates_12));
#line 1105 "unify_gen.m"
          }
#line 1106 "unify_gen.m"
          *ll_backend__unify_gen__STATE_VARIABLE_HowToConstruct_15 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ll_backend__unify_gen__CellToReuse_13);
#line 1099 "unify_gen.m"
        }
#line 1093 "unify_gen.m"
        break;
#line 1093 "unify_gen.m"
      case (MR_Integer) 2:
#line 1097 "unify_gen.m"
        *ll_backend__unify_gen__STATE_VARIABLE_HowToConstruct_15 = ll_backend__unify_gen__STATE_VARIABLE_HowToConstruct_0_14;
#line 1093 "unify_gen.m"
        break;
#line 1093 "unify_gen.m"
    }
#line 1093 "unify_gen.m"
  }
#line 1088 "unify_gen.m"
}

#line 1085 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__pack_cell_rvals_7_p_0_1(
#line 1085 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg,
#line 1085 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
#line 1085 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
#line 1085 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_3,
#line 1085 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_4,
#line 1085 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_5,
#line 1085 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_6,
#line 1085 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_7,
#line 1085 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_8)
#line 1085 "unify_gen.m"
{
#line 1085 "unify_gen.m"
  {
#line 1085 "unify_gen.m"
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;
#line 1085 "unify_gen.m"
    MR_Word ll_backend__unify_gen__conv2_FinalCellArg_14;
#line 1085 "unify_gen.m"
    MR_Word ll_backend__unify_gen__conv1_STATE_VARIABLE_Code_31;
#line 1085 "unify_gen.m"
    MR_Word ll_backend__unify_gen__conv0_STATE_VARIABLE_CLD_33;

#line 1085 "unify_gen.m"
    {
#line 1085 "unify_gen.m"
      ll_backend__unify_gen__shift_combine_arg_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__unify_gen__wrapper_arg_1), ((MR_Integer) ll_backend__unify_gen__wrapper_arg_2), ((MR_Word) ll_backend__unify_gen__wrapper_arg_3), &ll_backend__unify_gen__conv2_FinalCellArg_14, ((MR_Word) ll_backend__unify_gen__wrapper_arg_5), &ll_backend__unify_gen__conv1_STATE_VARIABLE_Code_31, ((MR_Word) ll_backend__unify_gen__wrapper_arg_7), &ll_backend__unify_gen__conv0_STATE_VARIABLE_CLD_33);
    }
#line 1085 "unify_gen.m"
    *ll_backend__unify_gen__wrapper_arg_4 = ((MR_Box) (ll_backend__unify_gen__conv2_FinalCellArg_14));
#line 1085 "unify_gen.m"
    *ll_backend__unify_gen__wrapper_arg_6 = ((MR_Box) (ll_backend__unify_gen__conv1_STATE_VARIABLE_Code_31));
#line 1085 "unify_gen.m"
    *ll_backend__unify_gen__wrapper_arg_8 = ((MR_Box) (ll_backend__unify_gen__conv0_STATE_VARIABLE_CLD_33));
#line 1085 "unify_gen.m"
  }
#line 1085 "unify_gen.m"
}

#line 1080 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__pack_cell_rvals_7_p_0(
#line 1080 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ArgWidths_8,
#line 1080 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CellArgs0_9,
#line 1080 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__CellArgs_10,
#line 1080 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_11,
#line 1080 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CI_12,
#line 1080 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_14,
#line 1080 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_15)
#line 1080 "unify_gen.m"
{
#line 1084 "unify_gen.m"
  {
#line 1084 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 1084 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_16_16;
#line 1084 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_17_17;
#line 1085 "unify_gen.m"
    MR_Box ll_backend__unify_gen__conv4_Code_11;
#line 1085 "unify_gen.m"
    MR_Box ll_backend__unify_gen__conv3_STATE_VARIABLE_CLD_15;

#line 1085 "unify_gen.m"
    {
#line 1085 "unify_gen.m"
      ll_backend__unify_gen__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1085 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_16_16, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_8[0]));
#line 1085 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_16_16, 1) = ((MR_Box) (ll_backend__unify_gen__pack_cell_rvals_7_p_0_1));
#line 1085 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1085 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_16_16, 3) = ((MR_Box) (ll_backend__unify_gen__CI_12));
#line 1085 "unify_gen.m"
    }
#line 1086 "unify_gen.m"
    {
#line 1086 "unify_gen.m"
      ll_backend__unify_gen__V_17_17 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
    }
#line 1085 "unify_gen.m"
    {
#line 1085 "unify_gen.m"
      backend_libs__arg_pack__pack_args_8_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_cell_arg_0, (MR_Word) &ll_backend__unify_gen_scalar_common_1[4], (MR_Word) &ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_code_loc_dep_0, ll_backend__unify_gen__V_16_16, ll_backend__unify_gen__ArgWidths_8, ll_backend__unify_gen__CellArgs0_9, ll_backend__unify_gen__CellArgs_10, ((MR_Box) (ll_backend__unify_gen__V_17_17)), &ll_backend__unify_gen__conv4_Code_11, ((MR_Box) (ll_backend__unify_gen__STATE_VARIABLE_CLD_0_14)), &ll_backend__unify_gen__conv3_STATE_VARIABLE_CLD_15);
    }
#line 1085 "unify_gen.m"
    *ll_backend__unify_gen__Code_11 = ((MR_Word) ll_backend__unify_gen__conv4_Code_11);
#line 1085 "unify_gen.m"
    *ll_backend__unify_gen__STATE_VARIABLE_CLD_15 = ((MR_Word) ll_backend__unify_gen__conv3_STATE_VARIABLE_CLD_15);
#line 1084 "unify_gen.m"
  }
#line 1080 "unify_gen.m"
}

#line 1067 "unify_gen.m"
static MR_Word MR_CALL 
ll_backend__unify_gen__initial_may_use_atomic_1_f_0(
#line 1067 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ModuleInfo_3)
#line 1067 "unify_gen.m"
{
#line 1069 "unify_gen.m"
  {
#line 1069 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 1069 "unify_gen.m"
    MR_Word ll_backend__unify_gen__InitMayUseAtomic_4;
#line 1069 "unify_gen.m"
    MR_Word ll_backend__unify_gen__Globals_5;
#line 1069 "unify_gen.m"
    MR_Word ll_backend__unify_gen__UseAtomicCells_6;

#line 1070 "unify_gen.m"
    {
#line 1070 "unify_gen.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__unify_gen__ModuleInfo_3, &ll_backend__unify_gen__Globals_5);
    }
#line 1071 "unify_gen.m"
    {
#line 1071 "unify_gen.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__unify_gen__Globals_5, (MR_Integer) 454, &ll_backend__unify_gen__UseAtomicCells_6);
    }
#line 1075 "unify_gen.m"
#line 1075 "unify_gen.m"
    switch (ll_backend__unify_gen__UseAtomicCells_6) {
#line 1075 "unify_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1075 "unify_gen.m"
      case (MR_Integer) 0:
#line 1074 "unify_gen.m"
        ll_backend__unify_gen__InitMayUseAtomic_4 = (MR_Integer) 1;
#line 1075 "unify_gen.m"
        break;
#line 1075 "unify_gen.m"
      case (MR_Integer) 1:
#line 1077 "unify_gen.m"
        ll_backend__unify_gen__InitMayUseAtomic_4 = (MR_Integer) 0;
#line 1075 "unify_gen.m"
        break;
#line 1075 "unify_gen.m"
    }
#line 1069 "unify_gen.m"
    return ll_backend__unify_gen__InitMayUseAtomic_4;
#line 1069 "unify_gen.m"
  }
#line 1067 "unify_gen.m"
}

#line 1017 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__generate_cons_args_2_10_p_0(
#line 1017 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__1_1,
#line 1017 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__2_2,
#line 1017 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__3_3,
#line 1017 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__4_4,
#line 1017 "unify_gen.m"
  MR_Integer ll_backend__unify_gen__HeadVar__5_5,
#line 1017 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__6_6,
#line 1017 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__7_7,
#line 1017 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__HeadVar__8_8,
#line 1017 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_0_9,
#line 1017 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_10)
#line 1017 "unify_gen.m"
{
#line 1022 "unify_gen.m"
  {
#line 1022 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;

#line 1022 "unify_gen.m"
    if ((ll_backend__unify_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1022 "unify_gen.m"
      {
#line 1022 "unify_gen.m"
        ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1022 "unify_gen.m"
        if (ll_backend__unify_gen__succeeded)
#line 1022 "unify_gen.m"
          {
#line 1022 "unify_gen.m"
            ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1022 "unify_gen.m"
            if (ll_backend__unify_gen__succeeded)
#line 1022 "unify_gen.m"
              {
#line 1022 "unify_gen.m"
                ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1022 "unify_gen.m"
                if (ll_backend__unify_gen__succeeded)
#line 1022 "unify_gen.m"
                  {
#line 1022 "unify_gen.m"
                    *ll_backend__unify_gen__HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1023 "unify_gen.m"
                    *ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_10 = ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_0_9;
#line 1023 "unify_gen.m"
                    ll_backend__unify_gen__succeeded = MR_TRUE;
#line 1022 "unify_gen.m"
                  }
#line 1022 "unify_gen.m"
              }
#line 1022 "unify_gen.m"
          }
#line 1022 "unify_gen.m"
      }
#line 1022 "unify_gen.m"
    else
#line 1026 "unify_gen.m"
      {
#line 1026 "unify_gen.m"
        MR_Word ll_backend__unify_gen__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 1026 "unify_gen.m"
        MR_Word ll_backend__unify_gen__Vars_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 1026 "unify_gen.m"
        MR_Word ll_backend__unify_gen__Type_19;
#line 1026 "unify_gen.m"
        MR_Word ll_backend__unify_gen__Types_20;
#line 1026 "unify_gen.m"
        MR_Word ll_backend__unify_gen__UniMode_21;
#line 1026 "unify_gen.m"
        MR_Word ll_backend__unify_gen__UniModes_22;
#line 1026 "unify_gen.m"
        MR_Word ll_backend__unify_gen__Width_23;
#line 1026 "unify_gen.m"
        MR_Word ll_backend__unify_gen__Widths_24;
#line 1026 "unify_gen.m"
        MR_Word ll_backend__unify_gen__CellArg_28;
#line 1026 "unify_gen.m"
        MR_Word ll_backend__unify_gen__CellArgs_29;
#line 1026 "unify_gen.m"
        MR_Word ll_backend__unify_gen__ModuleInfo_31;
#line 1026 "unify_gen.m"
        MR_Word ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_45_45;
#line 1042 "unify_gen.m"
        MR_Word ll_backend__unify_gen__STATE_VARIABLE_TakeAddr_46_46;
#line 1029 "unify_gen.m"
        MR_Integer ll_backend__unify_gen__V_66_66;

#line 1024 "unify_gen.m"
        ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1024 "unify_gen.m"
        if (ll_backend__unify_gen__succeeded)
#line 1024 "unify_gen.m"
          {
#line 1024 "unify_gen.m"
            ll_backend__unify_gen__Type_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 1024 "unify_gen.m"
            ll_backend__unify_gen__Types_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 1024 "unify_gen.m"
            ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 1024 "unify_gen.m"
            if (ll_backend__unify_gen__succeeded)
#line 1024 "unify_gen.m"
              {
#line 1024 "unify_gen.m"
                ll_backend__unify_gen__UniMode_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__3_3, (MR_Integer) 0)));
#line 1024 "unify_gen.m"
                ll_backend__unify_gen__UniModes_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__3_3, (MR_Integer) 1)));
#line 1025 "unify_gen.m"
                ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
#line 1025 "unify_gen.m"
                if (ll_backend__unify_gen__succeeded)
#line 1025 "unify_gen.m"
                  {
#line 1025 "unify_gen.m"
                    ll_backend__unify_gen__Width_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__4_4, (MR_Integer) 0)));
#line 1025 "unify_gen.m"
                    ll_backend__unify_gen__Widths_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__4_4, (MR_Integer) 1)));
#line 1027 "unify_gen.m"
                    {
#line 1027 "unify_gen.m"
                      ll_backend__code_info__get_module_info_2_p_0(ll_backend__unify_gen__HeadVar__7_7, &ll_backend__unify_gen__ModuleInfo_31);
                    }
#line 1028 "unify_gen.m"
                    {
#line 1028 "unify_gen.m"
                      check_hlds__type_util__update_type_may_use_atomic_alloc_4_p_0(ll_backend__unify_gen__ModuleInfo_31, ll_backend__unify_gen__Type_19, ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_0_9, &ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_45_45);
                    }
#line 1029 "unify_gen.m"
                    ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__HeadVar__6_6)) == (MR_mktag((MR_Integer) 1)));
#line 1029 "unify_gen.m"
                    if (ll_backend__unify_gen__succeeded)
#line 1029 "unify_gen.m"
                      {
#line 1029 "unify_gen.m"
                        ll_backend__unify_gen__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__6_6, (MR_Integer) 0)));
#line 1029 "unify_gen.m"
                        ll_backend__unify_gen__STATE_VARIABLE_TakeAddr_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__6_6, (MR_Integer) 1)));
#line 1029 "unify_gen.m"
                        ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__HeadVar__5_5 == ll_backend__unify_gen__V_66_66);
#line 1029 "unify_gen.m"
                      }
#line 1042 "unify_gen.m"
                    if (ll_backend__unify_gen__succeeded)
#line 1030 "unify_gen.m"
                      {
#line 1030 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__LCMCNull_32;
#line 1030 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__MaybeNull_33;
#line 1030 "unify_gen.m"
                        MR_Integer ll_backend__unify_gen__V_51_51;

#line 1030 "unify_gen.m"
                        {
#line 1030 "unify_gen.m"
                          ll_backend__code_info__get_lcmc_null_2_p_0(ll_backend__unify_gen__HeadVar__7_7, &ll_backend__unify_gen__LCMCNull_32);
                        }
#line 1034 "unify_gen.m"
#line 1034 "unify_gen.m"
                        switch (ll_backend__unify_gen__LCMCNull_32) {
#line 1034 "unify_gen.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 1034 "unify_gen.m"
                          case (MR_Integer) 0:
#line 1033 "unify_gen.m"
                            ll_backend__unify_gen__MaybeNull_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1034 "unify_gen.m"
                            break;
#line 1034 "unify_gen.m"
                          case (MR_Integer) 1:
#line 1035 "unify_gen.m"
                            {
#line 1036 "unify_gen.m"
                              ll_backend__unify_gen__MaybeNull_33 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__unify_gen_scalar_common_6[2]);
#line 1035 "unify_gen.m"
                            }
#line 1034 "unify_gen.m"
                            break;
#line 1034 "unify_gen.m"
                        }
#line 1040 "unify_gen.m"
                        ll_backend__unify_gen__V_51_51 = (ll_backend__unify_gen__HeadVar__5_5 + (MR_Integer) 1);
#line 1038 "unify_gen.m"
                        {
#line 1038 "unify_gen.m"
                          ll_backend__unify_gen__CellArg_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1038 "unify_gen.m"
                          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__CellArg_28, 0) = ((MR_Box) (ll_backend__unify_gen__Var_17));
#line 1038 "unify_gen.m"
                          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__CellArg_28, 1) = ((MR_Box) (ll_backend__unify_gen__MaybeNull_33));
#line 1038 "unify_gen.m"
                        }
#line 1040 "unify_gen.m"
                        {
#line 1040 "unify_gen.m"
                          ll_backend__unify_gen__succeeded = ll_backend__unify_gen__generate_cons_args_2_10_p_0(ll_backend__unify_gen__Vars_18, ll_backend__unify_gen__Types_20, ll_backend__unify_gen__UniModes_22, ll_backend__unify_gen__Widths_24, ll_backend__unify_gen__V_51_51, ll_backend__unify_gen__STATE_VARIABLE_TakeAddr_46_46, ll_backend__unify_gen__HeadVar__7_7, &ll_backend__unify_gen__CellArgs_29, (MR_Integer) 1, ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_10);
                        }
#line 1030 "unify_gen.m"
                      }
#line 1042 "unify_gen.m"
                    else
#line 1043 "unify_gen.m"
                      {
#line 1043 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__RI_35;
#line 1043 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__RF_37;
#line 1043 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__ArgMode_38;
#line 1043 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__UniMode_21, (MR_Integer) 0)));
#line 1043 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__UniMode_21, (MR_Integer) 1)));
#line 1043 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__V_56_56;
#line 1043 "unify_gen.m"
                        MR_Integer ll_backend__unify_gen__V_60_60;
#line 1043 "unify_gen.m"
                        MR_Word ll_backend__unify_gen___LI_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_54_54, (MR_Integer) 0)));
#line 1043 "unify_gen.m"
                        MR_Word ll_backend__unify_gen___LF_36;

#line 1043 "unify_gen.m"
                        ll_backend__unify_gen__RI_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_54_54, (MR_Integer) 1)));
#line 1043 "unify_gen.m"
                        ll_backend__unify_gen___LF_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_55_55, (MR_Integer) 0)));
#line 1043 "unify_gen.m"
                        ll_backend__unify_gen__RF_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_55_55, (MR_Integer) 1)));
#line 1044 "unify_gen.m"
                        {
#line 1044 "unify_gen.m"
                          ll_backend__unify_gen__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1044 "unify_gen.m"
                          MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_56_56, 0) = ((MR_Box) (ll_backend__unify_gen__RI_35));
#line 1044 "unify_gen.m"
                          MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_56_56, 1) = ((MR_Box) (ll_backend__unify_gen__RF_37));
#line 1044 "unify_gen.m"
                        }
#line 1044 "unify_gen.m"
                        {
#line 1044 "unify_gen.m"
                          check_hlds__mode_util__mode_to_arg_mode_4_p_0(ll_backend__unify_gen__ModuleInfo_31, ll_backend__unify_gen__V_56_56, ll_backend__unify_gen__Type_19, &ll_backend__unify_gen__ArgMode_38);
                        }
#line 1057 "unify_gen.m"
#line 1057 "unify_gen.m"
                        switch (ll_backend__unify_gen__ArgMode_38) {
#line 1057 "unify_gen.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 1057 "unify_gen.m"
                          case (MR_Integer) 0:
#line 1053 "unify_gen.m"
#line 1053 "unify_gen.m"
                            switch (MR_tag((MR_Word) ll_backend__unify_gen__Width_23)) {
#line 1053 "unify_gen.m"
                              default: /*NOTREACHED*/ MR_assert(0);
#line 1053 "unify_gen.m"
                              case (MR_Integer) 0:
#line 1053 "unify_gen.m"
#line 1053 "unify_gen.m"
                                switch (MR_unmkbody(ll_backend__unify_gen__Width_23)) {
#line 1053 "unify_gen.m"
                                  default: /*NOTREACHED*/ MR_assert(0);
#line 1053 "unify_gen.m"
                                  case (MR_Integer) 0:
#line 1051 "unify_gen.m"
                                    {
#line 1051 "unify_gen.m"
                                      MR_Word ll_backend__unify_gen__V_58_58;

#line 1052 "unify_gen.m"
                                      {
#line 1052 "unify_gen.m"
                                        ll_backend__unify_gen__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1052 "unify_gen.m"
                                        MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_58_58, 0) = ((MR_Box) (ll_backend__unify_gen__Var_17));
#line 1052 "unify_gen.m"
                                      }
#line 1052 "unify_gen.m"
                                      {
#line 1052 "unify_gen.m"
                                        ll_backend__unify_gen__CellArg_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1052 "unify_gen.m"
                                        MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArg_28, 0) = ((MR_Box) (ll_backend__unify_gen__V_58_58));
#line 1052 "unify_gen.m"
                                        MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArg_28, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1052 "unify_gen.m"
                                      }
#line 1051 "unify_gen.m"
                                    }
#line 1053 "unify_gen.m"
                                    break;
#line 1053 "unify_gen.m"
                                  case (MR_Integer) 1:
#line 1054 "unify_gen.m"
                                    {
#line 1054 "unify_gen.m"
                                      MR_Word ll_backend__unify_gen__V_57_57;

#line 1055 "unify_gen.m"
                                      {
#line 1055 "unify_gen.m"
                                        ll_backend__unify_gen__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1055 "unify_gen.m"
                                        MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_57_57, 0) = ((MR_Box) (ll_backend__unify_gen__Var_17));
#line 1055 "unify_gen.m"
                                      }
#line 1055 "unify_gen.m"
                                      {
#line 1055 "unify_gen.m"
                                        ll_backend__unify_gen__CellArg_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1055 "unify_gen.m"
                                        MR_hl_field(MR_mktag(2), ll_backend__unify_gen__CellArg_28, 0) = ((MR_Box) (ll_backend__unify_gen__V_57_57));
#line 1055 "unify_gen.m"
                                      }
#line 1054 "unify_gen.m"
                                    }
#line 1053 "unify_gen.m"
                                    break;
#line 1053 "unify_gen.m"
                                }
#line 1053 "unify_gen.m"
                                break;
#line 1053 "unify_gen.m"
                              case (MR_Integer) 1:
#line 1053 "unify_gen.m"
                              case (MR_Integer) 2:
#line 1051 "unify_gen.m"
                                {
#line 1051 "unify_gen.m"
                                  MR_Word ll_backend__unify_gen__V_58_58;

#line 1052 "unify_gen.m"
                                  {
#line 1052 "unify_gen.m"
                                    ll_backend__unify_gen__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1052 "unify_gen.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_58_58, 0) = ((MR_Box) (ll_backend__unify_gen__Var_17));
#line 1052 "unify_gen.m"
                                  }
#line 1052 "unify_gen.m"
                                  {
#line 1052 "unify_gen.m"
                                    ll_backend__unify_gen__CellArg_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1052 "unify_gen.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArg_28, 0) = ((MR_Box) (ll_backend__unify_gen__V_58_58));
#line 1052 "unify_gen.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArg_28, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1052 "unify_gen.m"
                                  }
#line 1051 "unify_gen.m"
                                }
#line 1053 "unify_gen.m"
                                break;
#line 1053 "unify_gen.m"
                            }
#line 1057 "unify_gen.m"
                            break;
#line 1057 "unify_gen.m"
                          case (MR_Integer) 1:
#line 1057 "unify_gen.m"
                          case (MR_Integer) 2:
#line 1061 "unify_gen.m"
                            ll_backend__unify_gen__CellArg_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1057 "unify_gen.m"
                            break;
#line 1057 "unify_gen.m"
                        }
#line 1063 "unify_gen.m"
                        ll_backend__unify_gen__V_60_60 = (ll_backend__unify_gen__HeadVar__5_5 + (MR_Integer) 1);
#line 1063 "unify_gen.m"
                        {
#line 1063 "unify_gen.m"
                          ll_backend__unify_gen__succeeded = ll_backend__unify_gen__generate_cons_args_2_10_p_0(ll_backend__unify_gen__Vars_18, ll_backend__unify_gen__Types_20, ll_backend__unify_gen__UniModes_22, ll_backend__unify_gen__Widths_24, ll_backend__unify_gen__V_60_60, ll_backend__unify_gen__HeadVar__6_6, ll_backend__unify_gen__HeadVar__7_7, &ll_backend__unify_gen__CellArgs_29, ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_45_45, ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_10);
                        }
#line 1043 "unify_gen.m"
                      }
#line 1026 "unify_gen.m"
                    if (ll_backend__unify_gen__succeeded)
#line 1026 "unify_gen.m"
                      {
#line 1025 "unify_gen.m"
                        {
#line 1025 "unify_gen.m"
                          MR_Word base;
#line 1025 "unify_gen.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1025 "unify_gen.m"
                          *ll_backend__unify_gen__HeadVar__8_8 = base;
#line 1025 "unify_gen.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__unify_gen__CellArg_28));
#line 1025 "unify_gen.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__unify_gen__CellArgs_29));
#line 1025 "unify_gen.m"
                        }
#line 1025 "unify_gen.m"
                        ll_backend__unify_gen__succeeded = MR_TRUE;
#line 1026 "unify_gen.m"
                      }
#line 1025 "unify_gen.m"
                  }
#line 1024 "unify_gen.m"
              }
#line 1024 "unify_gen.m"
          }
#line 1026 "unify_gen.m"
      }
#line 1022 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 1022 "unify_gen.m"
  }
#line 1017 "unify_gen.m"
}

#line 994 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_cons_args_8_p_0(
#line 994 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Vars_9,
#line 994 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Types_10,
#line 994 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Modes_11,
#line 994 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Widths_12,
#line 994 "unify_gen.m"
  MR_Word ll_backend__unify_gen__TakeAddr_13,
#line 994 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CI_14,
#line 994 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_Args_19,
#line 994 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_20)
#line 994 "unify_gen.m"
{
#line 999 "unify_gen.m"
  {
#line 999 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 999 "unify_gen.m"
    MR_Word ll_backend__unify_gen__ModuleInfo_17;
#line 999 "unify_gen.m"
    MR_Word ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_21_21;
#line 999 "unify_gen.m"
    MR_Word ll_backend__unify_gen__Globals_31;
#line 999 "unify_gen.m"
    MR_Word ll_backend__unify_gen__UseAtomicCells_32;
#line 1008 "unify_gen.m"
    MR_Word ll_backend__unify_gen__STATE_VARIABLE_Args_22_22;
#line 1008 "unify_gen.m"
    MR_Word ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_23_23;

#line 1000 "unify_gen.m"
    {
#line 1000 "unify_gen.m"
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__unify_gen__CI_14, &ll_backend__unify_gen__ModuleInfo_17);
    }
#line 1070 "unify_gen.m"
    {
#line 1070 "unify_gen.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__unify_gen__ModuleInfo_17, &ll_backend__unify_gen__Globals_31);
    }
#line 1071 "unify_gen.m"
    {
#line 1071 "unify_gen.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__unify_gen__Globals_31, (MR_Integer) 454, &ll_backend__unify_gen__UseAtomicCells_32);
    }
#line 1075 "unify_gen.m"
#line 1075 "unify_gen.m"
    switch (ll_backend__unify_gen__UseAtomicCells_32) {
#line 1075 "unify_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1075 "unify_gen.m"
      case (MR_Integer) 0:
#line 1074 "unify_gen.m"
        ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_21_21 = (MR_Integer) 1;
#line 1075 "unify_gen.m"
        break;
#line 1075 "unify_gen.m"
      case (MR_Integer) 1:
#line 1077 "unify_gen.m"
        ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_21_21 = (MR_Integer) 0;
#line 1075 "unify_gen.m"
        break;
#line 1075 "unify_gen.m"
    }
#line 1004 "unify_gen.m"
    {
#line 1004 "unify_gen.m"
      ll_backend__unify_gen__succeeded = ll_backend__unify_gen__generate_cons_args_2_10_p_0(ll_backend__unify_gen__Vars_9, ll_backend__unify_gen__Types_10, ll_backend__unify_gen__Modes_11, ll_backend__unify_gen__Widths_12, (MR_Integer) 1, ll_backend__unify_gen__TakeAddr_13, ll_backend__unify_gen__CI_14, &ll_backend__unify_gen__STATE_VARIABLE_Args_22_22, ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_21_21, &ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_23_23);
    }
#line 1008 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 1007 "unify_gen.m"
      {
#line 1007 "unify_gen.m"
        *ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_20 = ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_23_23;
#line 1007 "unify_gen.m"
        *ll_backend__unify_gen__STATE_VARIABLE_Args_19 = ll_backend__unify_gen__STATE_VARIABLE_Args_22_22;
#line 1007 "unify_gen.m"
      }
#line 1008 "unify_gen.m"
    else
#line 1009 "unify_gen.m"
      {
#line 1009 "unify_gen.m"
        {
#line 1009 "unify_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_cons_args\'/8", (MR_String) "length mismatch");
#line 1009 "unify_gen.m"
          return;
        }
#line 1009 "unify_gen.m"
      }
#line 999 "unify_gen.m"
  }
#line 994 "unify_gen.m"
}

#line 952 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_pred_args_8_p_0(
#line 952 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CI_1,
#line 952 "unify_gen.m"
  MR_Word ll_backend__unify_gen__VarTypes_2,
#line 952 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__3_3,
#line 952 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__4_4,
#line 952 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__HeadVar__5_5,
#line 952 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__HeadVar__6_6,
#line 952 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_0_7,
#line 952 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_8)
#line 952 "unify_gen.m"
{
#line 956 "unify_gen.m"
  {
#line 956 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;

#line 956 "unify_gen.m"
    if ((ll_backend__unify_gen__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 956 "unify_gen.m"
      {
#line 956 "unify_gen.m"
        *ll_backend__unify_gen__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 956 "unify_gen.m"
        *ll_backend__unify_gen__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 956 "unify_gen.m"
        *ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_8 = ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_0_7;
#line 956 "unify_gen.m"
      }
#line 956 "unify_gen.m"
    else
#line 956 "unify_gen.m"
      {
#line 956 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__3_3, (MR_Integer) 1)));
#line 956 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__3_3, (MR_Integer) 0)));

#line 956 "unify_gen.m"
        if ((ll_backend__unify_gen__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 957 "unify_gen.m"
          {
#line 958 "unify_gen.m"
            {
#line 958 "unify_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_pred_args\'/8", (MR_String) "insufficient args");
#line 958 "unify_gen.m"
              return;
            }
#line 957 "unify_gen.m"
          }
#line 956 "unify_gen.m"
        else
#line 960 "unify_gen.m"
          {
#line 960 "unify_gen.m"
            MR_Word ll_backend__unify_gen__ArgInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__4_4, (MR_Integer) 0)));
#line 960 "unify_gen.m"
            MR_Word ll_backend__unify_gen__ArgInfos_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__4_4, (MR_Integer) 1)));
#line 960 "unify_gen.m"
            MR_Word ll_backend__unify_gen__RegType_36;
#line 960 "unify_gen.m"
            MR_Word ll_backend__unify_gen__ArgMode_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ArgInfo_31, (MR_Integer) 1)));
#line 960 "unify_gen.m"
            MR_Word ll_backend__unify_gen__CellArg_41;
#line 960 "unify_gen.m"
            MR_Word ll_backend__unify_gen__Type_42;
#line 960 "unify_gen.m"
            MR_Word ll_backend__unify_gen__ModuleInfo_43;
#line 960 "unify_gen.m"
            MR_Word ll_backend__unify_gen__ArgsR0_44;
#line 960 "unify_gen.m"
            MR_Word ll_backend__unify_gen__ArgsF0_45;
#line 960 "unify_gen.m"
            MR_Word ll_backend__unify_gen__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ArgInfo_31, (MR_Integer) 0)));
#line 960 "unify_gen.m"
            MR_Word ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_52_52;
#line 961 "unify_gen.m"
            MR_Integer ll_backend__unify_gen__V_37_37;

#line 961 "unify_gen.m"
            ll_backend__unify_gen__RegType_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_48_48, (MR_Integer) 0)));
#line 961 "unify_gen.m"
            ll_backend__unify_gen__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_48_48, (MR_Integer) 1)));
#line 973 "unify_gen.m"
#line 973 "unify_gen.m"
            switch (ll_backend__unify_gen__ArgMode_38) {
#line 973 "unify_gen.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 973 "unify_gen.m"
              case (MR_Integer) 0:
#line 963 "unify_gen.m"
                {
#line 963 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__IsDummy_39;
#line 963 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__Rval_40;

#line 964 "unify_gen.m"
                  {
#line 964 "unify_gen.m"
                    ll_backend__unify_gen__IsDummy_39 = ll_backend__code_info__variable_is_of_dummy_type_2_f_0(ll_backend__unify_gen__CI_1, ll_backend__unify_gen__V_55_55);
                  }
#line 968 "unify_gen.m"
#line 968 "unify_gen.m"
                  switch (ll_backend__unify_gen__IsDummy_39) {
#line 968 "unify_gen.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 968 "unify_gen.m"
                    case (MR_Integer) 0:
#line 966 "unify_gen.m"
                      {
#line 967 "unify_gen.m"
                        ll_backend__unify_gen__Rval_40 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[8]);
#line 966 "unify_gen.m"
                      }
#line 968 "unify_gen.m"
                      break;
#line 968 "unify_gen.m"
                    case (MR_Integer) 1:
#line 969 "unify_gen.m"
                      {
#line 969 "unify_gen.m"
                        ll_backend__unify_gen__Rval_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 969 "unify_gen.m"
                        MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Rval_40, 0) = ((MR_Box) (ll_backend__unify_gen__V_55_55));
#line 969 "unify_gen.m"
                      }
#line 968 "unify_gen.m"
                      break;
#line 968 "unify_gen.m"
                  }
#line 972 "unify_gen.m"
                  {
#line 972 "unify_gen.m"
                    ll_backend__unify_gen__CellArg_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 972 "unify_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArg_41, 0) = ((MR_Box) (ll_backend__unify_gen__Rval_40));
#line 972 "unify_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArg_41, 1) = ((MR_Box) ((MR_Integer) 0));
#line 972 "unify_gen.m"
                  }
#line 963 "unify_gen.m"
                }
#line 973 "unify_gen.m"
                break;
#line 973 "unify_gen.m"
              case (MR_Integer) 1:
#line 973 "unify_gen.m"
              case (MR_Integer) 2:
#line 976 "unify_gen.m"
                ll_backend__unify_gen__CellArg_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 973 "unify_gen.m"
                break;
#line 973 "unify_gen.m"
            }
#line 979 "unify_gen.m"
            {
#line 979 "unify_gen.m"
              hlds__vartypes__lookup_var_type_3_p_0(ll_backend__unify_gen__VarTypes_2, ll_backend__unify_gen__V_55_55, &ll_backend__unify_gen__Type_42);
            }
#line 980 "unify_gen.m"
            {
#line 980 "unify_gen.m"
              ll_backend__code_info__get_module_info_2_p_0(ll_backend__unify_gen__CI_1, &ll_backend__unify_gen__ModuleInfo_43);
            }
#line 981 "unify_gen.m"
            {
#line 981 "unify_gen.m"
              check_hlds__type_util__update_type_may_use_atomic_alloc_4_p_0(ll_backend__unify_gen__ModuleInfo_43, ll_backend__unify_gen__Type_42, ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_0_7, &ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_52_52);
            }
#line 982 "unify_gen.m"
            {
#line 982 "unify_gen.m"
              ll_backend__unify_gen__generate_pred_args_8_p_0(ll_backend__unify_gen__CI_1, ll_backend__unify_gen__VarTypes_2, ll_backend__unify_gen__V_54_54, ll_backend__unify_gen__ArgInfos_32, &ll_backend__unify_gen__ArgsR0_44, &ll_backend__unify_gen__ArgsF0_45, ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_52_52, ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_8);
            }
#line 988 "unify_gen.m"
#line 988 "unify_gen.m"
            switch (ll_backend__unify_gen__RegType_36) {
#line 988 "unify_gen.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 988 "unify_gen.m"
              case (MR_Integer) 1:
#line 989 "unify_gen.m"
                {
#line 990 "unify_gen.m"
                  *ll_backend__unify_gen__HeadVar__5_5 = ll_backend__unify_gen__ArgsR0_44;
#line 991 "unify_gen.m"
                  {
#line 991 "unify_gen.m"
                    MR_Word base;
#line 991 "unify_gen.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 991 "unify_gen.m"
                    *ll_backend__unify_gen__HeadVar__6_6 = base;
#line 991 "unify_gen.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__unify_gen__CellArg_41));
#line 991 "unify_gen.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__unify_gen__ArgsF0_45));
#line 991 "unify_gen.m"
                  }
#line 989 "unify_gen.m"
                }
#line 988 "unify_gen.m"
                break;
#line 988 "unify_gen.m"
              case (MR_Integer) 0:
#line 985 "unify_gen.m"
                {
#line 986 "unify_gen.m"
                  {
#line 986 "unify_gen.m"
                    MR_Word base;
#line 986 "unify_gen.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 986 "unify_gen.m"
                    *ll_backend__unify_gen__HeadVar__5_5 = base;
#line 986 "unify_gen.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__unify_gen__CellArg_41));
#line 986 "unify_gen.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__unify_gen__ArgsR0_44));
#line 986 "unify_gen.m"
                  }
#line 987 "unify_gen.m"
                  *ll_backend__unify_gen__HeadVar__6_6 = ll_backend__unify_gen__ArgsF0_45;
#line 985 "unify_gen.m"
                }
#line 988 "unify_gen.m"
                break;
#line 988 "unify_gen.m"
            }
#line 960 "unify_gen.m"
          }
#line 956 "unify_gen.m"
      }
#line 956 "unify_gen.m"
  }
#line 952 "unify_gen.m"
}

#line 919 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_extra_closure_args_7_p_0(
#line 919 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__1_1,
#line 919 "unify_gen.m"
  MR_Word ll_backend__unify_gen__LoopCounter_2,
#line 919 "unify_gen.m"
  MR_Word ll_backend__unify_gen__NewClosure_3,
#line 919 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__HeadVar__4_4,
#line 919 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__5_5,
#line 919 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_6,
#line 919 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_7)
#line 919 "unify_gen.m"
{
#line 923 "unify_gen.m"
  {
#line 923 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;

#line 923 "unify_gen.m"
    if ((ll_backend__unify_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 923 "unify_gen.m"
      {
#line 923 "unify_gen.m"
        {
#line 923 "unify_gen.m"
          *ll_backend__unify_gen__HeadVar__4_4 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
#line 923 "unify_gen.m"
        *ll_backend__unify_gen__STATE_VARIABLE_CLD_7 = ll_backend__unify_gen__STATE_VARIABLE_CLD_0_6;
#line 923 "unify_gen.m"
      }
#line 923 "unify_gen.m"
    else
#line 925 "unify_gen.m"
      {
#line 925 "unify_gen.m"
        MR_Word ll_backend__unify_gen__TypeCtorInfo_59_59;
#line 925 "unify_gen.m"
        MR_Word ll_backend__unify_gen__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 925 "unify_gen.m"
        MR_Word ll_backend__unify_gen__Vars_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 925 "unify_gen.m"
        MR_Word ll_backend__unify_gen__FieldLval_21;
#line 925 "unify_gen.m"
        MR_Word ll_backend__unify_gen__IsDummy_22;
#line 925 "unify_gen.m"
        MR_Word ll_backend__unify_gen__ProduceCode_23;
#line 925 "unify_gen.m"
        MR_Word ll_backend__unify_gen__AssignCode_24;
#line 925 "unify_gen.m"
        MR_Word ll_backend__unify_gen__IncrCode_26;
#line 925 "unify_gen.m"
        MR_Word ll_backend__unify_gen__VarsCode_27;
#line 925 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_32_32;
#line 925 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_33_33;
#line 925 "unify_gen.m"
        MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_34_34;
#line 925 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_44_44;
#line 925 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_45_45;
#line 925 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_46_46;
#line 925 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_54_54;
#line 925 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_55_55;

#line 926 "unify_gen.m"
        {
#line 926 "unify_gen.m"
          ll_backend__unify_gen__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 926 "unify_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_32_32, 0) = ((MR_Box) (ll_backend__unify_gen__NewClosure_3));
#line 926 "unify_gen.m"
        }
#line 926 "unify_gen.m"
        {
#line 926 "unify_gen.m"
          ll_backend__unify_gen__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 926 "unify_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_33_33, 0) = ((MR_Box) (ll_backend__unify_gen__LoopCounter_2));
#line 926 "unify_gen.m"
        }
#line 926 "unify_gen.m"
        {
#line 926 "unify_gen.m"
          ll_backend__unify_gen__FieldLval_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 926 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__FieldLval_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 926 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__FieldLval_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__unify_gen_scalar_common_6[0])));
#line 926 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__FieldLval_21, 2) = ((MR_Box) (ll_backend__unify_gen__V_32_32));
#line 926 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__FieldLval_21, 3) = ((MR_Box) (ll_backend__unify_gen__V_33_33));
#line 926 "unify_gen.m"
        }
#line 927 "unify_gen.m"
        {
#line 927 "unify_gen.m"
          ll_backend__unify_gen__IsDummy_22 = ll_backend__code_info__variable_is_of_dummy_type_2_f_0(ll_backend__unify_gen__HeadVar__5_5, ll_backend__unify_gen__Var_14);
        }
#line 935 "unify_gen.m"
#line 935 "unify_gen.m"
        switch (ll_backend__unify_gen__IsDummy_22) {
#line 935 "unify_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 935 "unify_gen.m"
          case (MR_Integer) 0:
#line 929 "unify_gen.m"
            {
#line 929 "unify_gen.m"
              MR_Word ll_backend__unify_gen__TypeCtorInfo_57_57 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 929 "unify_gen.m"
              MR_Word ll_backend__unify_gen__V_38_38;
#line 929 "unify_gen.m"
              MR_Word ll_backend__unify_gen__V_39_39;

#line 930 "unify_gen.m"
              {
#line 930 "unify_gen.m"
                ll_backend__unify_gen__ProduceCode_23 = mercury__cord__empty_0_f_0(ll_backend__unify_gen__TypeCtorInfo_57_57);
              }
#line 932 "unify_gen.m"
              {
#line 932 "unify_gen.m"
                ll_backend__unify_gen__V_39_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 932 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_39_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 932 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_39_39, 1) = ((MR_Box) (ll_backend__unify_gen__FieldLval_21));
#line 932 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_39_39, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[8])));
#line 932 "unify_gen.m"
              }
#line 932 "unify_gen.m"
              {
#line 932 "unify_gen.m"
                ll_backend__unify_gen__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 932 "unify_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_38_38, 0) = ((MR_Box) (ll_backend__unify_gen__V_39_39));
#line 932 "unify_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_38_38, 1) = ((MR_Box) ((MR_String) "set new argument field (dummy type)"));
#line 932 "unify_gen.m"
              }
#line 931 "unify_gen.m"
              {
#line 931 "unify_gen.m"
                ll_backend__unify_gen__AssignCode_24 = mercury__cord__singleton_1_f_0(ll_backend__unify_gen__TypeCtorInfo_57_57, ((MR_Box) (ll_backend__unify_gen__V_38_38)));
              }
#line 929 "unify_gen.m"
              ll_backend__unify_gen__STATE_VARIABLE_CLD_34_34 = ll_backend__unify_gen__STATE_VARIABLE_CLD_0_6;
#line 929 "unify_gen.m"
            }
#line 935 "unify_gen.m"
            break;
#line 935 "unify_gen.m"
          case (MR_Integer) 1:
#line 936 "unify_gen.m"
            {
#line 936 "unify_gen.m"
              MR_Word ll_backend__unify_gen__Value_25;
#line 936 "unify_gen.m"
              MR_Word ll_backend__unify_gen__V_35_35;
#line 936 "unify_gen.m"
              MR_Word ll_backend__unify_gen__V_36_36;

#line 937 "unify_gen.m"
              {
#line 937 "unify_gen.m"
                ll_backend__code_loc_dep__produce_variable_6_p_0(ll_backend__unify_gen__Var_14, &ll_backend__unify_gen__ProduceCode_23, &ll_backend__unify_gen__Value_25, ll_backend__unify_gen__HeadVar__5_5, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_6, &ll_backend__unify_gen__STATE_VARIABLE_CLD_34_34);
              }
#line 939 "unify_gen.m"
              {
#line 939 "unify_gen.m"
                ll_backend__unify_gen__V_36_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 939 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_36_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 939 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_36_36, 1) = ((MR_Box) (ll_backend__unify_gen__FieldLval_21));
#line 939 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_36_36, 2) = ((MR_Box) (ll_backend__unify_gen__Value_25));
#line 939 "unify_gen.m"
              }
#line 939 "unify_gen.m"
              {
#line 939 "unify_gen.m"
                ll_backend__unify_gen__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 939 "unify_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_35_35, 0) = ((MR_Box) (ll_backend__unify_gen__V_36_36));
#line 939 "unify_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_35_35, 1) = ((MR_Box) ((MR_String) "set new argument field"));
#line 939 "unify_gen.m"
              }
#line 938 "unify_gen.m"
              {
#line 938 "unify_gen.m"
                ll_backend__unify_gen__AssignCode_24 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__unify_gen__V_35_35)));
              }
#line 936 "unify_gen.m"
            }
#line 935 "unify_gen.m"
            break;
#line 935 "unify_gen.m"
        }
#line 15072 "ll_backend.unify_gen.c"
        ll_backend__unify_gen__TypeCtorInfo_59_59 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 945 "unify_gen.m"
        {
#line 945 "unify_gen.m"
          ll_backend__unify_gen__V_46_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 945 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_46_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 945 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 945 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_46_46, 2) = ((MR_Box) (ll_backend__unify_gen__V_33_33));
#line 945 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_46_46, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[9])));
#line 945 "unify_gen.m"
        }
#line 944 "unify_gen.m"
        {
#line 944 "unify_gen.m"
          ll_backend__unify_gen__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 944 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 944 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_45_45, 1) = ((MR_Box) (ll_backend__unify_gen__LoopCounter_2));
#line 944 "unify_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_45_45, 2) = ((MR_Box) (ll_backend__unify_gen__V_46_46));
#line 944 "unify_gen.m"
        }
#line 944 "unify_gen.m"
        {
#line 944 "unify_gen.m"
          ll_backend__unify_gen__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 944 "unify_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_44_44, 0) = ((MR_Box) (ll_backend__unify_gen__V_45_45));
#line 944 "unify_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_44_44, 1) = ((MR_Box) ((MR_String) "increment argument counter"));
#line 944 "unify_gen.m"
        }
#line 943 "unify_gen.m"
        {
#line 943 "unify_gen.m"
          ll_backend__unify_gen__IncrCode_26 = mercury__cord__singleton_1_f_0(ll_backend__unify_gen__TypeCtorInfo_59_59, ((MR_Box) (ll_backend__unify_gen__V_44_44)));
        }
#line 948 "unify_gen.m"
        {
#line 948 "unify_gen.m"
          ll_backend__unify_gen__generate_extra_closure_args_7_p_0(ll_backend__unify_gen__Vars_15, ll_backend__unify_gen__LoopCounter_2, ll_backend__unify_gen__NewClosure_3, &ll_backend__unify_gen__VarsCode_27, ll_backend__unify_gen__HeadVar__5_5, ll_backend__unify_gen__STATE_VARIABLE_CLD_34_34, ll_backend__unify_gen__STATE_VARIABLE_CLD_7);
        }
#line 950 "unify_gen.m"
        {
#line 950 "unify_gen.m"
          ll_backend__unify_gen__V_55_55 = mercury__cord__f_43_43_2_f_0(ll_backend__unify_gen__TypeCtorInfo_59_59, ll_backend__unify_gen__IncrCode_26, ll_backend__unify_gen__VarsCode_27);
        }
#line 950 "unify_gen.m"
        {
#line 950 "unify_gen.m"
          ll_backend__unify_gen__V_54_54 = mercury__cord__f_43_43_2_f_0(ll_backend__unify_gen__TypeCtorInfo_59_59, ll_backend__unify_gen__AssignCode_24, ll_backend__unify_gen__V_55_55);
        }
#line 950 "unify_gen.m"
        {
#line 950 "unify_gen.m"
          *ll_backend__unify_gen__HeadVar__4_4 = mercury__cord__f_43_43_2_f_0(ll_backend__unify_gen__TypeCtorInfo_59_59, ll_backend__unify_gen__ProduceCode_23, ll_backend__unify_gen__V_54_54);
        }
#line 925 "unify_gen.m"
      }
#line 923 "unify_gen.m"
  }
#line 919 "unify_gen.m"
}

#line 632 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_14_p_0_9(
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

#line 660 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_14_p_0_8(
#line 660 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg)
#line 660 "unify_gen.m"
{
#line 660 "unify_gen.m"
  {
#line 660 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 660 "unify_gen.m"
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;

#line 660 "unify_gen.m"
    {
#line 660 "unify_gen.m"
      return ll_backend__unify_gen__succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__660__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 4))));
    }
#line 660 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 660 "unify_gen.m"
  }
#line 660 "unify_gen.m"
}

#line 687 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_14_p_0_7(
#line 687 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg)
#line 687 "unify_gen.m"
{
#line 687 "unify_gen.m"
  {
#line 687 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 687 "unify_gen.m"
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;

#line 687 "unify_gen.m"
    {
#line 687 "unify_gen.m"
      return ll_backend__unify_gen__succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__687__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 4))));
    }
#line 687 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 687 "unify_gen.m"
  }
#line 687 "unify_gen.m"
}

#line 695 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_14_p_0_6(
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

#line 549 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_14_p_0_5(
#line 549 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg)
#line 549 "unify_gen.m"
{
#line 549 "unify_gen.m"
  {
#line 549 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 549 "unify_gen.m"
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;

#line 549 "unify_gen.m"
    {
#line 549 "unify_gen.m"
      return ll_backend__unify_gen__succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__549__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 4))));
    }
#line 549 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 549 "unify_gen.m"
  }
#line 549 "unify_gen.m"
}

#line 670 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_14_p_0_4(
#line 670 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg)
#line 670 "unify_gen.m"
{
#line 670 "unify_gen.m"
  {
#line 670 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 670 "unify_gen.m"
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;

#line 670 "unify_gen.m"
    {
#line 670 "unify_gen.m"
      return ll_backend__unify_gen__succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__670__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 4))));
    }
#line 670 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 670 "unify_gen.m"
  }
#line 670 "unify_gen.m"
}

#line 710 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_14_p_0_3(
#line 710 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg)
#line 710 "unify_gen.m"
{
#line 710 "unify_gen.m"
  {
#line 710 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 710 "unify_gen.m"
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;

#line 710 "unify_gen.m"
    {
#line 710 "unify_gen.m"
      return ll_backend__unify_gen__succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__710__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 4))));
    }
#line 710 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 710 "unify_gen.m"
  }
#line 710 "unify_gen.m"
}

#line 708 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_14_p_0_2(
#line 708 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg)
#line 708 "unify_gen.m"
{
#line 708 "unify_gen.m"
  {
#line 708 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 708 "unify_gen.m"
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;

#line 708 "unify_gen.m"
    {
#line 708 "unify_gen.m"
      return ll_backend__unify_gen__succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__708__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 4))));
    }
#line 708 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 708 "unify_gen.m"
  }
#line 708 "unify_gen.m"
}

#line 642 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_14_p_0_1(
#line 642 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg)
#line 642 "unify_gen.m"
{
#line 642 "unify_gen.m"
  {
#line 642 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 642 "unify_gen.m"
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;

#line 642 "unify_gen.m"
    {
#line 642 "unify_gen.m"
      return ll_backend__unify_gen__succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__642__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 4))));
    }
#line 642 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 642 "unify_gen.m"
  }
#line 642 "unify_gen.m"
}

#line 530 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_construction_2_14_p_0(
#line 530 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConsTag_15,
#line 530 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Var_16,
#line 530 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Args_17,
#line 530 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Modes_18,
#line 530 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ArgWidths_19,
#line 530 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HowToConstruct0_20,
#line 530 "unify_gen.m"
  MR_Word ll_backend__unify_gen__TakeAddr_21,
#line 530 "unify_gen.m"
  MR_Word ll_backend__unify_gen__MaybeSize_22,
#line 530 "unify_gen.m"
  MR_Word ll_backend__unify_gen__GoalInfo_23,
#line 530 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_24,
#line 530 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_78,
#line 530 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_79,
#line 530 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_80,
#line 530 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_81)
#line 530 "unify_gen.m"
{
#line 540 "unify_gen.m"
  while (MR_TRUE)
#line 540 "unify_gen.m"
    {
#line 540 "unify_gen.m"
      /* tailcall optimized into a loop */
#line 540 "unify_gen.m"
      {
#line 540 "unify_gen.m"
        MR_bool ll_backend__unify_gen__succeeded;

#line 540 "unify_gen.m"
#line 540 "unify_gen.m"
        switch (MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_15)) {
#line 540 "unify_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 540 "unify_gen.m"
          case (MR_Integer) 0:
#line 540 "unify_gen.m"
#line 540 "unify_gen.m"
            switch (MR_unmkbody(ll_backend__unify_gen__ConsTag_15)) {
#line 540 "unify_gen.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 540 "unify_gen.m"
              case (MR_Integer) 0:
#line 583 "unify_gen.m"
                {
#line 583 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__ArgTypes_39;
#line 583 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__CellArgs0_40;
#line 583 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__MayUseAtomic_41;
#line 583 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__CellArgs_42;
#line 583 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__PackCode_43;
#line 583 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__HowToConstruct_44;
#line 583 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__Context_45;
#line 583 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__ConstructCode_46;
#line 583 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_179_179;

#line 584 "unify_gen.m"
                  {
#line 584 "unify_gen.m"
                    ll_backend__unify_gen__var_types_3_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_78, ll_backend__unify_gen__Args_17, &ll_backend__unify_gen__ArgTypes_39);
                  }
#line 585 "unify_gen.m"
                  {
#line 585 "unify_gen.m"
                    ll_backend__unify_gen__generate_cons_args_8_p_0(ll_backend__unify_gen__Args_17, ll_backend__unify_gen__ArgTypes_39, ll_backend__unify_gen__Modes_18, ll_backend__unify_gen__ArgWidths_19, ll_backend__unify_gen__TakeAddr_21, ll_backend__unify_gen__STATE_VARIABLE_CI_0_78, &ll_backend__unify_gen__CellArgs0_40, &ll_backend__unify_gen__MayUseAtomic_41);
                  }
#line 587 "unify_gen.m"
                  {
#line 587 "unify_gen.m"
                    ll_backend__unify_gen__pack_cell_rvals_7_p_0(ll_backend__unify_gen__ArgWidths_19, ll_backend__unify_gen__CellArgs0_40, &ll_backend__unify_gen__CellArgs_42, &ll_backend__unify_gen__PackCode_43, ll_backend__unify_gen__STATE_VARIABLE_CI_0_78, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_80, &ll_backend__unify_gen__STATE_VARIABLE_CLD_179_179);
                  }
#line 588 "unify_gen.m"
                  {
#line 588 "unify_gen.m"
                    ll_backend__unify_gen__pack_how_to_construct_3_p_0(ll_backend__unify_gen__ArgWidths_19, ll_backend__unify_gen__HowToConstruct0_20, &ll_backend__unify_gen__HowToConstruct_44);
                  }
#line 589 "unify_gen.m"
                  {
#line 589 "unify_gen.m"
                    ll_backend__unify_gen__Context_45 = hlds__hlds_goal__goal_info_get_context_1_f_0(ll_backend__unify_gen__GoalInfo_23);
                  }
#line 590 "unify_gen.m"
                  {
#line 590 "unify_gen.m"
                    ll_backend__unify_gen__construct_cell_12_p_0(ll_backend__unify_gen__Var_16, (MR_Integer) 0, ll_backend__unify_gen__CellArgs_42, ll_backend__unify_gen__HowToConstruct_44, ll_backend__unify_gen__MaybeSize_22, ll_backend__unify_gen__Context_45, ll_backend__unify_gen__MayUseAtomic_41, &ll_backend__unify_gen__ConstructCode_46, ll_backend__unify_gen__STATE_VARIABLE_CI_0_78, ll_backend__unify_gen__STATE_VARIABLE_CI_79, ll_backend__unify_gen__STATE_VARIABLE_CLD_179_179, ll_backend__unify_gen__STATE_VARIABLE_CLD_81);
                  }
#line 592 "unify_gen.m"
                  {
#line 592 "unify_gen.m"
                    *ll_backend__unify_gen__Code_24 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__unify_gen__PackCode_43, ll_backend__unify_gen__ConstructCode_46);
                  }
#line 583 "unify_gen.m"
                }
#line 540 "unify_gen.m"
                break;
#line 540 "unify_gen.m"
              case (MR_Integer) 1:
#line 559 "unify_gen.m"
                {
#line 573 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__Arg_33;
#line 573 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__Mode_34;
#line 561 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_182_182;
#line 561 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_183_183;

#line 561 "unify_gen.m"
                  ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__Args_17)) == (MR_mktag((MR_Integer) 1)));
#line 561 "unify_gen.m"
                  if (ll_backend__unify_gen__succeeded)
#line 561 "unify_gen.m"
                    {
#line 561 "unify_gen.m"
                      ll_backend__unify_gen__Arg_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Args_17, (MR_Integer) 0)));
#line 561 "unify_gen.m"
                      ll_backend__unify_gen__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Args_17, (MR_Integer) 1)));
#line 561 "unify_gen.m"
                      ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__V_182_182 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 561 "unify_gen.m"
                      if (ll_backend__unify_gen__succeeded)
#line 561 "unify_gen.m"
                        {
#line 562 "unify_gen.m"
                          ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__Modes_18)) == (MR_mktag((MR_Integer) 1)));
#line 562 "unify_gen.m"
                          if (ll_backend__unify_gen__succeeded)
#line 562 "unify_gen.m"
                            {
#line 562 "unify_gen.m"
                              ll_backend__unify_gen__Mode_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Modes_18, (MR_Integer) 0)));
#line 562 "unify_gen.m"
                              ll_backend__unify_gen__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Modes_18, (MR_Integer) 1)));
#line 562 "unify_gen.m"
                              ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__V_183_183 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 562 "unify_gen.m"
                            }
#line 561 "unify_gen.m"
                        }
#line 561 "unify_gen.m"
                    }
#line 573 "unify_gen.m"
                  if (ll_backend__unify_gen__succeeded)
#line 569 "unify_gen.m"
                    if ((ll_backend__unify_gen__TakeAddr_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 565 "unify_gen.m"
                      {
#line 565 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__Type_35;
#line 565 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__V_187_187;
#line 565 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__V_188_188;

#line 566 "unify_gen.m"
                        {
#line 566 "unify_gen.m"
                          ll_backend__unify_gen__Type_35 = ll_backend__code_info__variable_type_2_f_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_78, ll_backend__unify_gen__Arg_33);
                        }
#line 567 "unify_gen.m"
                        {
#line 567 "unify_gen.m"
                          ll_backend__unify_gen__V_187_187 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 567 "unify_gen.m"
                          MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_187_187, 0) = ((MR_Box) (ll_backend__unify_gen__Var_16));
#line 567 "unify_gen.m"
                        }
#line 567 "unify_gen.m"
                        {
#line 567 "unify_gen.m"
                          ll_backend__unify_gen__V_188_188 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 567 "unify_gen.m"
                          MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_188_188, 0) = ((MR_Box) (ll_backend__unify_gen__Arg_33));
#line 567 "unify_gen.m"
                        }
#line 567 "unify_gen.m"
                        {
#line 567 "unify_gen.m"
                          ll_backend__unify_gen__generate_sub_unify_8_p_0(ll_backend__unify_gen__V_187_187, ll_backend__unify_gen__V_188_188, ll_backend__unify_gen__Mode_34, ll_backend__unify_gen__Type_35, ll_backend__unify_gen__Code_24, ll_backend__unify_gen__STATE_VARIABLE_CI_0_78, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_80, ll_backend__unify_gen__STATE_VARIABLE_CLD_81);
                        }
#line 565 "unify_gen.m"
                      }
#line 569 "unify_gen.m"
                    else
#line 570 "unify_gen.m"
                      {
#line 571 "unify_gen.m"
                        {
#line 571 "unify_gen.m"
                          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_construction_2\'/14", (MR_String) "notag: take_addr");
#line 571 "unify_gen.m"
                          return;
                        }
#line 570 "unify_gen.m"
                      }
#line 573 "unify_gen.m"
                  else
#line 574 "unify_gen.m"
                    {
#line 574 "unify_gen.m"
                      {
#line 574 "unify_gen.m"
                        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_construction_2\'/14", (MR_String) "no_tag: arity != 1");
#line 574 "unify_gen.m"
                        return;
                      }
#line 574 "unify_gen.m"
                    }
#line 559 "unify_gen.m"
                  *ll_backend__unify_gen__STATE_VARIABLE_CI_79 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_78;
#line 559 "unify_gen.m"
                }
#line 540 "unify_gen.m"
                break;
#line 540 "unify_gen.m"
            }
#line 540 "unify_gen.m"
            break;
#line 540 "unify_gen.m"
          case (MR_Integer) 1:
#line 540 "unify_gen.m"
            {
#line 540 "unify_gen.m"
              MR_String ll_backend__unify_gen__String_27 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 0)));
#line 540 "unify_gen.m"
              MR_Word ll_backend__unify_gen__V_207_207;
#line 540 "unify_gen.m"
              MR_Word ll_backend__unify_gen__V_209_209;

#line 541 "unify_gen.m"
              {
#line 541 "unify_gen.m"
                ll_backend__unify_gen__V_209_209 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 541 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_209_209, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 541 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_209_209, 1) = ((MR_Box) (ll_backend__unify_gen__String_27));
#line 541 "unify_gen.m"
              }
#line 541 "unify_gen.m"
              {
#line 541 "unify_gen.m"
                ll_backend__unify_gen__V_207_207 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 541 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_207_207, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 541 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_207_207, 1) = ((MR_Box) (ll_backend__unify_gen__V_209_209));
#line 541 "unify_gen.m"
              }
#line 541 "unify_gen.m"
              {
#line 541 "unify_gen.m"
                ll_backend__code_loc_dep__assign_const_to_var_5_p_0(ll_backend__unify_gen__Var_16, ll_backend__unify_gen__V_207_207, ll_backend__unify_gen__STATE_VARIABLE_CI_0_78, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_80, ll_backend__unify_gen__STATE_VARIABLE_CLD_81);
              }
#line 542 "unify_gen.m"
              {
#line 542 "unify_gen.m"
                *ll_backend__unify_gen__Code_24 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
#line 540 "unify_gen.m"
              *ll_backend__unify_gen__STATE_VARIABLE_CI_79 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_78;
#line 540 "unify_gen.m"
            }
#line 540 "unify_gen.m"
            break;
#line 540 "unify_gen.m"
          case (MR_Integer) 2:
#line 555 "unify_gen.m"
            {
#line 555 "unify_gen.m"
              MR_Float ll_backend__unify_gen__Float_32 = MR_unbox_float((MR_hl_field(MR_mktag(2), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 0)));
#line 555 "unify_gen.m"
              MR_Word ll_backend__unify_gen__V_193_193;
#line 555 "unify_gen.m"
              MR_Word ll_backend__unify_gen__V_195_195;

#line 556 "unify_gen.m"
              {
#line 556 "unify_gen.m"
                ll_backend__unify_gen__V_195_195 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 556 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_195_195, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 556 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_195_195, 1) = MR_box_float(ll_backend__unify_gen__Float_32);
#line 556 "unify_gen.m"
              }
#line 556 "unify_gen.m"
              {
#line 556 "unify_gen.m"
                ll_backend__unify_gen__V_193_193 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 556 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_193_193, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 556 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_193_193, 1) = ((MR_Box) (ll_backend__unify_gen__V_195_195));
#line 556 "unify_gen.m"
              }
#line 556 "unify_gen.m"
              {
#line 556 "unify_gen.m"
                ll_backend__code_loc_dep__assign_const_to_var_5_p_0(ll_backend__unify_gen__Var_16, ll_backend__unify_gen__V_193_193, ll_backend__unify_gen__STATE_VARIABLE_CI_0_78, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_80, ll_backend__unify_gen__STATE_VARIABLE_CLD_81);
              }
#line 557 "unify_gen.m"
              {
#line 557 "unify_gen.m"
                *ll_backend__unify_gen__Code_24 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
#line 555 "unify_gen.m"
              *ll_backend__unify_gen__STATE_VARIABLE_CI_79 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_78;
#line 555 "unify_gen.m"
            }
#line 540 "unify_gen.m"
            break;
#line 540 "unify_gen.m"
          case (MR_Integer) 3:
#line 540 "unify_gen.m"
#line 540 "unify_gen.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 0)))) {
#line 540 "unify_gen.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 540 "unify_gen.m"
              case (MR_Integer) 0:
#line 544 "unify_gen.m"
                {
#line 544 "unify_gen.m"
                  MR_Integer ll_backend__unify_gen__Int_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 1)));
#line 544 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_204_204;
#line 544 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_206_206;

#line 545 "unify_gen.m"
                  {
#line 545 "unify_gen.m"
                    ll_backend__unify_gen__V_206_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 545 "unify_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_206_206, 0) = ((MR_Box) (ll_backend__unify_gen__Int_28));
#line 545 "unify_gen.m"
                  }
#line 545 "unify_gen.m"
                  {
#line 545 "unify_gen.m"
                    ll_backend__unify_gen__V_204_204 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 545 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_204_204, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 545 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_204_204, 1) = ((MR_Box) (ll_backend__unify_gen__V_206_206));
#line 545 "unify_gen.m"
                  }
#line 545 "unify_gen.m"
                  {
#line 545 "unify_gen.m"
                    ll_backend__code_loc_dep__assign_const_to_var_5_p_0(ll_backend__unify_gen__Var_16, ll_backend__unify_gen__V_204_204, ll_backend__unify_gen__STATE_VARIABLE_CI_0_78, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_80, ll_backend__unify_gen__STATE_VARIABLE_CLD_81);
                  }
#line 546 "unify_gen.m"
                  {
#line 546 "unify_gen.m"
                    *ll_backend__unify_gen__Code_24 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                  }
#line 544 "unify_gen.m"
                  *ll_backend__unify_gen__STATE_VARIABLE_CI_79 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_78;
#line 544 "unify_gen.m"
                }
#line 540 "unify_gen.m"
                break;
#line 540 "unify_gen.m"
              case (MR_Integer) 1:
#line 548 "unify_gen.m"
                {
#line 548 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__Lang_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 1)));
#line 548 "unify_gen.m"
                  MR_String ll_backend__unify_gen__Val_30 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 2)));
#line 548 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__ForeignConst_31;
#line 548 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_196_196;
#line 548 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_201_201;

#line 549 "unify_gen.m"
                  {
#line 549 "unify_gen.m"
                    ll_backend__unify_gen__V_196_196 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 549 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_196_196, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_5[1]));
#line 549 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_196_196, 1) = ((MR_Box) (ll_backend__unify_gen__generate_construction_2_14_p_0_5));
#line 549 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_196_196, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 549 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_196_196, 3) = ((MR_Box) (ll_backend__unify_gen__Lang_29));
#line 549 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_196_196, 4) = ((MR_Box) ((MR_Integer) 0));
#line 549 "unify_gen.m"
                  }
#line 549 "unify_gen.m"
                  {
#line 549 "unify_gen.m"
                    mercury__require__expect_4_p_0(ll_backend__unify_gen__V_196_196, (MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_construction_2\'/14", (MR_String) "foreign_tag for language other than C");
                  }
#line 551 "unify_gen.m"
                  {
#line 551 "unify_gen.m"
                    ll_backend__unify_gen__V_201_201 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 551 "unify_gen.m"
                    MR_hl_field(MR_mktag(2), ll_backend__unify_gen__V_201_201, 0) = ((MR_Box) (ll_backend__unify_gen__Val_30));
#line 551 "unify_gen.m"
                    MR_hl_field(MR_mktag(2), ll_backend__unify_gen__V_201_201, 1) = ((MR_Box) ((MR_Integer) 7));
#line 551 "unify_gen.m"
                  }
#line 551 "unify_gen.m"
                  {
#line 551 "unify_gen.m"
                    ll_backend__unify_gen__ForeignConst_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 551 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ForeignConst_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 551 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ForeignConst_31, 1) = ((MR_Box) (ll_backend__unify_gen__V_201_201));
#line 551 "unify_gen.m"
                  }
#line 552 "unify_gen.m"
                  {
#line 552 "unify_gen.m"
                    ll_backend__code_loc_dep__assign_const_to_var_5_p_0(ll_backend__unify_gen__Var_16, ll_backend__unify_gen__ForeignConst_31, ll_backend__unify_gen__STATE_VARIABLE_CI_0_78, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_80, ll_backend__unify_gen__STATE_VARIABLE_CLD_81);
                  }
#line 553 "unify_gen.m"
                  {
#line 553 "unify_gen.m"
                    *ll_backend__unify_gen__Code_24 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                  }
#line 548 "unify_gen.m"
                  *ll_backend__unify_gen__STATE_VARIABLE_CI_79 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_78;
#line 548 "unify_gen.m"
                }
#line 540 "unify_gen.m"
                break;
#line 540 "unify_gen.m"
              case (MR_Integer) 2:
#line 707 "unify_gen.m"
                {
#line 707 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_82_82;
#line 707 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_87_87;
#line 707 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__PredId_240 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 1)));
#line 707 "unify_gen.m"
                  MR_Integer ll_backend__unify_gen__ProcId_241 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 2)));

#line 708 "unify_gen.m"
                  {
#line 708 "unify_gen.m"
                    ll_backend__unify_gen__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 708 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_82_82, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_5[3]));
#line 708 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_82_82, 1) = ((MR_Box) (ll_backend__unify_gen__generate_construction_2_14_p_0_2));
#line 708 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_82_82, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 708 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_82_82, 3) = ((MR_Box) (ll_backend__unify_gen__TakeAddr_21));
#line 708 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_82_82, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 708 "unify_gen.m"
                  }
#line 708 "unify_gen.m"
                  {
#line 708 "unify_gen.m"
                    mercury__require__expect_4_p_0(ll_backend__unify_gen__V_82_82, (MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_construction_2\'/14", (MR_String) "closure_tag has take_addr");
                  }
#line 710 "unify_gen.m"
                  {
#line 710 "unify_gen.m"
                    ll_backend__unify_gen__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 710 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_87_87, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_5[4]));
#line 710 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_87_87, 1) = ((MR_Box) (ll_backend__unify_gen__generate_construction_2_14_p_0_3));
#line 710 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_87_87, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 710 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_87_87, 3) = ((MR_Box) (ll_backend__unify_gen__MaybeSize_22));
#line 710 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_87_87, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 710 "unify_gen.m"
                  }
#line 710 "unify_gen.m"
                  {
#line 710 "unify_gen.m"
                    mercury__require__expect_4_p_0(ll_backend__unify_gen__V_87_87, (MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_construction_2\'/14", (MR_String) "closure_tag has size");
                  }
#line 712 "unify_gen.m"
                  {
#line 712 "unify_gen.m"
                    ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_11_p_0(ll_backend__unify_gen__PredId_240, ll_backend__unify_gen__ProcId_241, ll_backend__unify_gen__Var_16, ll_backend__unify_gen__Args_17, ll_backend__unify_gen__GoalInfo_23, ll_backend__unify_gen__Code_24, ll_backend__unify_gen__STATE_VARIABLE_CI_0_78, ll_backend__unify_gen__STATE_VARIABLE_CI_79, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_80, ll_backend__unify_gen__STATE_VARIABLE_CLD_81);
#line 712 "unify_gen.m"
                    return;
                  }
#line 707 "unify_gen.m"
                }
#line 540 "unify_gen.m"
                break;
#line 540 "unify_gen.m"
              case (MR_Integer) 3:
#line 631 "unify_gen.m"
                {
#line 631 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__ModuleName_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 1)));
#line 631 "unify_gen.m"
                  MR_String ll_backend__unify_gen__TypeName_52 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 2)));
#line 631 "unify_gen.m"
                  MR_Integer ll_backend__unify_gen__TypeArity_53 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 3)));
#line 631 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__RttiTypeCtor_54;
#line 631 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__DataId_55;
#line 631 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_146_146;
#line 631 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_151_151;
#line 631 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_153_153;
#line 631 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_155_155;

#line 632 "unify_gen.m"
                  {
#line 632 "unify_gen.m"
                    ll_backend__unify_gen__V_146_146 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 632 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_146_146, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_5[2]));
#line 632 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_146_146, 1) = ((MR_Box) (ll_backend__unify_gen__generate_construction_2_14_p_0_9));
#line 632 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_146_146, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 632 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_146_146, 3) = ((MR_Box) (ll_backend__unify_gen__Args_17));
#line 632 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_146_146, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 632 "unify_gen.m"
                  }
#line 632 "unify_gen.m"
                  {
#line 632 "unify_gen.m"
                    mercury__require__expect_4_p_0(ll_backend__unify_gen__V_146_146, (MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_construction_2\'/14", (MR_String) "type_ctor_info constant has args");
                  }
#line 634 "unify_gen.m"
                  {
#line 634 "unify_gen.m"
                    ll_backend__unify_gen__RttiTypeCtor_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 634 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiTypeCtor_54, 0) = ((MR_Box) (ll_backend__unify_gen__ModuleName_51));
#line 634 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiTypeCtor_54, 1) = ((MR_Box) (ll_backend__unify_gen__TypeName_52));
#line 634 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiTypeCtor_54, 2) = ((MR_Box) (ll_backend__unify_gen__TypeArity_53));
#line 634 "unify_gen.m"
                  }
#line 635 "unify_gen.m"
                  {
#line 635 "unify_gen.m"
                    ll_backend__unify_gen__V_151_151 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 635 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_151_151, 0) = ((MR_Box) (ll_backend__unify_gen__RttiTypeCtor_54));
#line 635 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_151_151, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
#line 635 "unify_gen.m"
                  }
#line 635 "unify_gen.m"
                  {
#line 635 "unify_gen.m"
                    ll_backend__unify_gen__DataId_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 635 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__DataId_55, 0) = ((MR_Box) (ll_backend__unify_gen__V_151_151));
#line 635 "unify_gen.m"
                  }
#line 637 "unify_gen.m"
                  {
#line 637 "unify_gen.m"
                    ll_backend__unify_gen__V_155_155 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 637 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_155_155, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 637 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_155_155, 1) = ((MR_Box) (ll_backend__unify_gen__DataId_55));
#line 637 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_155_155, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 637 "unify_gen.m"
                  }
#line 637 "unify_gen.m"
                  {
#line 637 "unify_gen.m"
                    ll_backend__unify_gen__V_153_153 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 637 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_153_153, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 637 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_153_153, 1) = ((MR_Box) (ll_backend__unify_gen__V_155_155));
#line 637 "unify_gen.m"
                  }
#line 637 "unify_gen.m"
                  {
#line 637 "unify_gen.m"
                    ll_backend__code_loc_dep__assign_const_to_var_5_p_0(ll_backend__unify_gen__Var_16, ll_backend__unify_gen__V_153_153, ll_backend__unify_gen__STATE_VARIABLE_CI_0_78, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_80, ll_backend__unify_gen__STATE_VARIABLE_CLD_81);
                  }
#line 639 "unify_gen.m"
                  {
#line 639 "unify_gen.m"
                    *ll_backend__unify_gen__Code_24 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                  }
#line 631 "unify_gen.m"
                  *ll_backend__unify_gen__STATE_VARIABLE_CI_79 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_78;
#line 631 "unify_gen.m"
                }
#line 540 "unify_gen.m"
                break;
#line 540 "unify_gen.m"
              case (MR_Integer) 4:
#line 641 "unify_gen.m"
                {
#line 641 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__ClassId_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 2)));
#line 641 "unify_gen.m"
                  MR_String ll_backend__unify_gen__Instance_57 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 3)));
#line 641 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__TCName_58;
#line 641 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_135_135;
#line 641 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_140_140;
#line 641 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_141_141;
#line 641 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_142_142;
#line 641 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_144_144;
#line 641 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__ModuleName_230 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 1)));
#line 641 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__DataId_231;

#line 642 "unify_gen.m"
                  {
#line 642 "unify_gen.m"
                    ll_backend__unify_gen__V_135_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 642 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_135_135, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_5[2]));
#line 642 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_135_135, 1) = ((MR_Box) (ll_backend__unify_gen__generate_construction_2_14_p_0_1));
#line 642 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_135_135, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 642 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_135_135, 3) = ((MR_Box) (ll_backend__unify_gen__Args_17));
#line 642 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_135_135, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 642 "unify_gen.m"
                  }
#line 642 "unify_gen.m"
                  {
#line 642 "unify_gen.m"
                    mercury__require__expect_4_p_0(ll_backend__unify_gen__V_135_135, (MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_construction_2\'/14", (MR_String) "base_typeclass_info constant has args");
                  }
#line 644 "unify_gen.m"
                  {
#line 644 "unify_gen.m"
                    ll_backend__unify_gen__TCName_58 = backend_libs__type_class_info__generate_class_name_1_f_0(ll_backend__unify_gen__ClassId_56);
                  }
#line 646 "unify_gen.m"
                  {
#line 646 "unify_gen.m"
                    ll_backend__unify_gen__V_141_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 646 "unify_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_141_141, 0) = ((MR_Box) (ll_backend__unify_gen__ModuleName_230));
#line 646 "unify_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_141_141, 1) = ((MR_Box) (ll_backend__unify_gen__Instance_57));
#line 646 "unify_gen.m"
                  }
#line 645 "unify_gen.m"
                  {
#line 645 "unify_gen.m"
                    ll_backend__unify_gen__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 645 "unify_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_140_140, 0) = ((MR_Box) (ll_backend__unify_gen__TCName_58));
#line 645 "unify_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_140_140, 1) = ((MR_Box) (ll_backend__unify_gen__V_141_141));
#line 645 "unify_gen.m"
                  }
#line 645 "unify_gen.m"
                  {
#line 645 "unify_gen.m"
                    ll_backend__unify_gen__DataId_231 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 645 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__DataId_231, 0) = ((MR_Box) (ll_backend__unify_gen__V_140_140));
#line 645 "unify_gen.m"
                  }
#line 647 "unify_gen.m"
                  {
#line 647 "unify_gen.m"
                    ll_backend__unify_gen__V_144_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 647 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_144_144, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 647 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_144_144, 1) = ((MR_Box) (ll_backend__unify_gen__DataId_231));
#line 647 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_144_144, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 647 "unify_gen.m"
                  }
#line 647 "unify_gen.m"
                  {
#line 647 "unify_gen.m"
                    ll_backend__unify_gen__V_142_142 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 647 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_142_142, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 647 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_142_142, 1) = ((MR_Box) (ll_backend__unify_gen__V_144_144));
#line 647 "unify_gen.m"
                  }
#line 647 "unify_gen.m"
                  {
#line 647 "unify_gen.m"
                    ll_backend__code_loc_dep__assign_const_to_var_5_p_0(ll_backend__unify_gen__Var_16, ll_backend__unify_gen__V_142_142, ll_backend__unify_gen__STATE_VARIABLE_CI_0_78, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_80, ll_backend__unify_gen__STATE_VARIABLE_CLD_81);
                  }
#line 649 "unify_gen.m"
                  {
#line 649 "unify_gen.m"
                    *ll_backend__unify_gen__Code_24 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                  }
#line 641 "unify_gen.m"
                  *ll_backend__unify_gen__STATE_VARIABLE_CI_79 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_78;
#line 641 "unify_gen.m"
                }
#line 540 "unify_gen.m"
                break;
#line 540 "unify_gen.m"
              case (MR_Integer) 5:
#line 654 "unify_gen.m"
                {
#line 654 "unify_gen.m"
                  MR_Integer ll_backend__unify_gen__ConstNum_282 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 1)));
#line 654 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__ConstStructMap_283;
#line 654 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__Rval_284;
#line 654 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_286_286;
#line 656 "unify_gen.m"
                  MR_Box ll_backend__unify_gen__conv1_V_286_286;
#line 656 "unify_gen.m"
                  MR_Word ll_backend__unify_gen___Type_281;

#line 655 "unify_gen.m"
                  {
#line 655 "unify_gen.m"
                    ll_backend__code_info__get_const_struct_map_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_78, &ll_backend__unify_gen__ConstStructMap_283);
                  }
#line 656 "unify_gen.m"
                  {
#line 656 "unify_gen.m"
                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ll_backend__unify_gen__ConstStructMap_283, ll_backend__unify_gen__ConstNum_282, &ll_backend__unify_gen__conv1_V_286_286);
                  }
#line 656 "unify_gen.m"
                  ll_backend__unify_gen__V_286_286 = ((MR_Word) ll_backend__unify_gen__conv1_V_286_286);
#line 656 "unify_gen.m"
                  ll_backend__unify_gen__Rval_284 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_286_286, (MR_Integer) 0)));
#line 656 "unify_gen.m"
                  ll_backend__unify_gen___Type_281 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_286_286, (MR_Integer) 1)));
#line 657 "unify_gen.m"
                  {
#line 657 "unify_gen.m"
                    ll_backend__code_loc_dep__assign_expr_to_var_5_p_0(ll_backend__unify_gen__Var_16, ll_backend__unify_gen__Rval_284, ll_backend__unify_gen__Code_24, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_80, ll_backend__unify_gen__STATE_VARIABLE_CLD_81);
                  }
#line 654 "unify_gen.m"
                  *ll_backend__unify_gen__STATE_VARIABLE_CI_79 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_78;
#line 654 "unify_gen.m"
                }
#line 540 "unify_gen.m"
                break;
#line 540 "unify_gen.m"
              case (MR_Integer) 6:
#line 654 "unify_gen.m"
                {
#line 654 "unify_gen.m"
                  MR_Integer ll_backend__unify_gen__ConstNum_290 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 1)));
#line 654 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__ConstStructMap_291;
#line 654 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__Rval_292;
#line 654 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_294_294;
#line 656 "unify_gen.m"
                  MR_Box ll_backend__unify_gen__conv2_V_294_294;
#line 656 "unify_gen.m"
                  MR_Word ll_backend__unify_gen___Type_289;

#line 655 "unify_gen.m"
                  {
#line 655 "unify_gen.m"
                    ll_backend__code_info__get_const_struct_map_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_78, &ll_backend__unify_gen__ConstStructMap_291);
                  }
#line 656 "unify_gen.m"
                  {
#line 656 "unify_gen.m"
                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ll_backend__unify_gen__ConstStructMap_291, ll_backend__unify_gen__ConstNum_290, &ll_backend__unify_gen__conv2_V_294_294);
                  }
#line 656 "unify_gen.m"
                  ll_backend__unify_gen__V_294_294 = ((MR_Word) ll_backend__unify_gen__conv2_V_294_294);
#line 656 "unify_gen.m"
                  ll_backend__unify_gen__Rval_292 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_294_294, (MR_Integer) 0)));
#line 656 "unify_gen.m"
                  ll_backend__unify_gen___Type_289 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_294_294, (MR_Integer) 1)));
#line 657 "unify_gen.m"
                  {
#line 657 "unify_gen.m"
                    ll_backend__code_loc_dep__assign_expr_to_var_5_p_0(ll_backend__unify_gen__Var_16, ll_backend__unify_gen__Rval_292, ll_backend__unify_gen__Code_24, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_80, ll_backend__unify_gen__STATE_VARIABLE_CLD_81);
                  }
#line 654 "unify_gen.m"
                  *ll_backend__unify_gen__STATE_VARIABLE_CI_79 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_78;
#line 654 "unify_gen.m"
                }
#line 540 "unify_gen.m"
                break;
#line 540 "unify_gen.m"
              case (MR_Integer) 7:
#line 654 "unify_gen.m"
                {
#line 654 "unify_gen.m"
                  MR_Integer ll_backend__unify_gen__ConstNum_59 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 1)));
#line 654 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__ConstStructMap_61;
#line 654 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__Rval_62;
#line 654 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_133_133;
#line 653 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 2)));
#line 656 "unify_gen.m"
                  MR_Box ll_backend__unify_gen__conv0_V_133_133;
#line 656 "unify_gen.m"
                  MR_Word ll_backend__unify_gen___Type_63;

#line 655 "unify_gen.m"
                  {
#line 655 "unify_gen.m"
                    ll_backend__code_info__get_const_struct_map_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_78, &ll_backend__unify_gen__ConstStructMap_61);
                  }
#line 656 "unify_gen.m"
                  {
#line 656 "unify_gen.m"
                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ll_backend__unify_gen__ConstStructMap_61, ll_backend__unify_gen__ConstNum_59, &ll_backend__unify_gen__conv0_V_133_133);
                  }
#line 656 "unify_gen.m"
                  ll_backend__unify_gen__V_133_133 = ((MR_Word) ll_backend__unify_gen__conv0_V_133_133);
#line 656 "unify_gen.m"
                  ll_backend__unify_gen__Rval_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_133_133, (MR_Integer) 0)));
#line 656 "unify_gen.m"
                  ll_backend__unify_gen___Type_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_133_133, (MR_Integer) 1)));
#line 657 "unify_gen.m"
                  {
#line 657 "unify_gen.m"
                    ll_backend__code_loc_dep__assign_expr_to_var_5_p_0(ll_backend__unify_gen__Var_16, ll_backend__unify_gen__Rval_62, ll_backend__unify_gen__Code_24, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_80, ll_backend__unify_gen__STATE_VARIABLE_CLD_81);
                  }
#line 654 "unify_gen.m"
                  *ll_backend__unify_gen__STATE_VARIABLE_CI_79 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_78;
#line 654 "unify_gen.m"
                }
#line 540 "unify_gen.m"
                break;
#line 540 "unify_gen.m"
              case (MR_Integer) 8:
#line 659 "unify_gen.m"
                {
#line 659 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__PredId_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 1)));
#line 659 "unify_gen.m"
                  MR_Integer ll_backend__unify_gen__ProcId_65 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 2)));
#line 659 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__ModuleInfo_66;
#line 659 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__ProcLabel_67;
#line 659 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_123_123;
#line 659 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_129_129;
#line 659 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_131_131;
#line 659 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__DataId_232;

#line 660 "unify_gen.m"
                  {
#line 660 "unify_gen.m"
                    ll_backend__unify_gen__V_123_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 660 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_123_123, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_5[2]));
#line 660 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_123_123, 1) = ((MR_Box) (ll_backend__unify_gen__generate_construction_2_14_p_0_8));
#line 660 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_123_123, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 660 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_123_123, 3) = ((MR_Box) (ll_backend__unify_gen__Args_17));
#line 660 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_123_123, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 660 "unify_gen.m"
                  }
#line 660 "unify_gen.m"
                  {
#line 660 "unify_gen.m"
                    mercury__require__expect_4_p_0(ll_backend__unify_gen__V_123_123, (MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_construction_2\'/14", (MR_String) "tabling_info constant has args");
                  }
#line 662 "unify_gen.m"
                  {
#line 662 "unify_gen.m"
                    ll_backend__code_info__get_module_info_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_78, &ll_backend__unify_gen__ModuleInfo_66);
                  }
#line 663 "unify_gen.m"
                  {
#line 663 "unify_gen.m"
                    ll_backend__unify_gen__ProcLabel_67 = backend_libs__proc_label__make_proc_label_3_f_0(ll_backend__unify_gen__ModuleInfo_66, ll_backend__unify_gen__PredId_64, ll_backend__unify_gen__ProcId_65);
                  }
#line 664 "unify_gen.m"
                  {
#line 664 "unify_gen.m"
                    ll_backend__unify_gen__DataId_232 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 664 "unify_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__DataId_232, 0) = ((MR_Box) (ll_backend__unify_gen__ProcLabel_67));
#line 664 "unify_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__DataId_232, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 664 "unify_gen.m"
                  }
#line 665 "unify_gen.m"
                  {
#line 665 "unify_gen.m"
                    ll_backend__unify_gen__V_131_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 665 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_131_131, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 665 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_131_131, 1) = ((MR_Box) (ll_backend__unify_gen__DataId_232));
#line 665 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_131_131, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 665 "unify_gen.m"
                  }
#line 665 "unify_gen.m"
                  {
#line 665 "unify_gen.m"
                    ll_backend__unify_gen__V_129_129 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 665 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_129_129, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 665 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_129_129, 1) = ((MR_Box) (ll_backend__unify_gen__V_131_131));
#line 665 "unify_gen.m"
                  }
#line 665 "unify_gen.m"
                  {
#line 665 "unify_gen.m"
                    ll_backend__code_loc_dep__assign_const_to_var_5_p_0(ll_backend__unify_gen__Var_16, ll_backend__unify_gen__V_129_129, ll_backend__unify_gen__STATE_VARIABLE_CI_0_78, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_80, ll_backend__unify_gen__STATE_VARIABLE_CLD_81);
                  }
#line 667 "unify_gen.m"
                  {
#line 667 "unify_gen.m"
                    *ll_backend__unify_gen__Code_24 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                  }
#line 659 "unify_gen.m"
                  *ll_backend__unify_gen__STATE_VARIABLE_CI_79 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_78;
#line 659 "unify_gen.m"
                }
#line 540 "unify_gen.m"
                break;
#line 540 "unify_gen.m"
              case (MR_Integer) 9:
#line 669 "unify_gen.m"
                {
#line 669 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__RttiProcLabel_68;
#line 669 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__Origin_69;
#line 669 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__UserOrUCI_71;
#line 669 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__ProcKind_72;
#line 669 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_113_113;
#line 669 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_118_118;
#line 669 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_119_119;
#line 669 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_121_121;
#line 669 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__DataId_233;
#line 669 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__PredId_234 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 1)));
#line 669 "unify_gen.m"
                  MR_Integer ll_backend__unify_gen__ProcId_235 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 2)));
#line 669 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__ModuleInfo_236;
#line 674 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_242_242;
#line 674 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_243_243;
#line 674 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_244_244;
#line 674 "unify_gen.m"
                  MR_String ll_backend__unify_gen__V_245_245;
#line 674 "unify_gen.m"
                  MR_Integer ll_backend__unify_gen__V_246_246;
#line 674 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_247_247;
#line 674 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_248_248;
#line 674 "unify_gen.m"
                  MR_Integer ll_backend__unify_gen__V_249_249;
#line 674 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_250_250;
#line 674 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_251_251;
#line 674 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_252_252;
#line 674 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_253_253;
#line 674 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_254_254;
#line 674 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_255_255;
#line 674 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_256_256;
#line 675 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_70_70;

#line 670 "unify_gen.m"
                  {
#line 670 "unify_gen.m"
                    ll_backend__unify_gen__V_113_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 670 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_113_113, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_5[2]));
#line 670 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_113_113, 1) = ((MR_Box) (ll_backend__unify_gen__generate_construction_2_14_p_0_4));
#line 670 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_113_113, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 670 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_113_113, 3) = ((MR_Box) (ll_backend__unify_gen__Args_17));
#line 670 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_113_113, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 670 "unify_gen.m"
                  }
#line 670 "unify_gen.m"
                  {
#line 670 "unify_gen.m"
                    mercury__require__expect_4_p_0(ll_backend__unify_gen__V_113_113, (MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_construction_2\'/14", (MR_String) "deep_profiling_proc_static has args");
                  }
#line 672 "unify_gen.m"
                  {
#line 672 "unify_gen.m"
                    ll_backend__code_info__get_module_info_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_78, &ll_backend__unify_gen__ModuleInfo_236);
                  }
#line 673 "unify_gen.m"
                  {
#line 673 "unify_gen.m"
                    ll_backend__unify_gen__RttiProcLabel_68 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ll_backend__unify_gen__ModuleInfo_236, ll_backend__unify_gen__PredId_234, ll_backend__unify_gen__ProcId_235);
                  }
#line 674 "unify_gen.m"
                  ll_backend__unify_gen__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiProcLabel_68, (MR_Integer) 0)));
#line 674 "unify_gen.m"
                  ll_backend__unify_gen__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiProcLabel_68, (MR_Integer) 1)));
#line 674 "unify_gen.m"
                  ll_backend__unify_gen__V_244_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiProcLabel_68, (MR_Integer) 2)));
#line 674 "unify_gen.m"
                  ll_backend__unify_gen__V_245_245 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiProcLabel_68, (MR_Integer) 3)));
#line 674 "unify_gen.m"
                  ll_backend__unify_gen__V_246_246 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiProcLabel_68, (MR_Integer) 4)));
#line 674 "unify_gen.m"
                  ll_backend__unify_gen__V_247_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiProcLabel_68, (MR_Integer) 5)));
#line 674 "unify_gen.m"
                  ll_backend__unify_gen__V_248_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiProcLabel_68, (MR_Integer) 6)));
#line 674 "unify_gen.m"
                  ll_backend__unify_gen__V_249_249 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiProcLabel_68, (MR_Integer) 7)));
#line 674 "unify_gen.m"
                  ll_backend__unify_gen__V_250_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiProcLabel_68, (MR_Integer) 8)));
#line 674 "unify_gen.m"
                  ll_backend__unify_gen__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiProcLabel_68, (MR_Integer) 9)));
#line 674 "unify_gen.m"
                  ll_backend__unify_gen__V_252_252 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiProcLabel_68, (MR_Integer) 10)))) & (MR_Integer) 7);
#line 674 "unify_gen.m"
                  ll_backend__unify_gen__V_253_253 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiProcLabel_68, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 674 "unify_gen.m"
                  ll_backend__unify_gen__V_254_254 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiProcLabel_68, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 674 "unify_gen.m"
                  ll_backend__unify_gen__Origin_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiProcLabel_68, (MR_Integer) 11)));
#line 674 "unify_gen.m"
                  ll_backend__unify_gen__V_255_255 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiProcLabel_68, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 674 "unify_gen.m"
                  ll_backend__unify_gen__V_256_256 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiProcLabel_68, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 675 "unify_gen.m"
                  ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__Origin_69)) == (MR_mktag((MR_Integer) 0)));
#line 675 "unify_gen.m"
                  if (ll_backend__unify_gen__succeeded)
#line 675 "unify_gen.m"
                    {
#line 675 "unify_gen.m"
                      ll_backend__unify_gen__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Origin_69, (MR_Integer) 0)));
#line 676 "unify_gen.m"
                      ll_backend__unify_gen__UserOrUCI_71 = (MR_Integer) 1;
#line 675 "unify_gen.m"
                    }
#line 675 "unify_gen.m"
                  else
#line 678 "unify_gen.m"
                    ll_backend__unify_gen__UserOrUCI_71 = (MR_Integer) 0;
#line 680 "unify_gen.m"
                  {
#line 680 "unify_gen.m"
                    ll_backend__unify_gen__ProcKind_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 680 "unify_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ProcKind_72, 0) = ((MR_Box) (ll_backend__unify_gen__UserOrUCI_71));
#line 680 "unify_gen.m"
                  }
#line 681 "unify_gen.m"
                  {
#line 681 "unify_gen.m"
                    ll_backend__unify_gen__V_118_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 681 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_118_118, 0) = ((MR_Box) (ll_backend__unify_gen__RttiProcLabel_68));
#line 681 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_118_118, 1) = ((MR_Box) (ll_backend__unify_gen__ProcKind_72));
#line 681 "unify_gen.m"
                  }
#line 681 "unify_gen.m"
                  {
#line 681 "unify_gen.m"
                    ll_backend__unify_gen__DataId_233 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 681 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__DataId_233, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 681 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__DataId_233, 1) = ((MR_Box) (ll_backend__unify_gen__V_118_118));
#line 681 "unify_gen.m"
                  }
#line 682 "unify_gen.m"
                  {
#line 682 "unify_gen.m"
                    ll_backend__unify_gen__V_121_121 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 682 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_121_121, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 682 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_121_121, 1) = ((MR_Box) (ll_backend__unify_gen__DataId_233));
#line 682 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_121_121, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 682 "unify_gen.m"
                  }
#line 682 "unify_gen.m"
                  {
#line 682 "unify_gen.m"
                    ll_backend__unify_gen__V_119_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 682 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_119_119, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 682 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_119_119, 1) = ((MR_Box) (ll_backend__unify_gen__V_121_121));
#line 682 "unify_gen.m"
                  }
#line 682 "unify_gen.m"
                  {
#line 682 "unify_gen.m"
                    ll_backend__code_loc_dep__assign_const_to_var_5_p_0(ll_backend__unify_gen__Var_16, ll_backend__unify_gen__V_119_119, ll_backend__unify_gen__STATE_VARIABLE_CI_0_78, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_80, ll_backend__unify_gen__STATE_VARIABLE_CLD_81);
                  }
#line 684 "unify_gen.m"
                  {
#line 684 "unify_gen.m"
                    *ll_backend__unify_gen__Code_24 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                  }
#line 669 "unify_gen.m"
                  *ll_backend__unify_gen__STATE_VARIABLE_CI_79 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_78;
#line 669 "unify_gen.m"
                }
#line 540 "unify_gen.m"
                break;
#line 540 "unify_gen.m"
              case (MR_Integer) 10:
#line 686 "unify_gen.m"
                {
#line 686 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__PredProcId_73;
#line 686 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_103_103;
#line 686 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_109_109;
#line 686 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_111_111;
#line 686 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__DataId_237;
#line 686 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__PredId_238 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 1)));
#line 686 "unify_gen.m"
                  MR_Integer ll_backend__unify_gen__ProcId_239 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 2)));

#line 687 "unify_gen.m"
                  {
#line 687 "unify_gen.m"
                    ll_backend__unify_gen__V_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 687 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_103_103, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_5[2]));
#line 687 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_103_103, 1) = ((MR_Box) (ll_backend__unify_gen__generate_construction_2_14_p_0_7));
#line 687 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_103_103, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 687 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_103_103, 3) = ((MR_Box) (ll_backend__unify_gen__Args_17));
#line 687 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_103_103, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 687 "unify_gen.m"
                  }
#line 687 "unify_gen.m"
                  {
#line 687 "unify_gen.m"
                    mercury__require__expect_4_p_0(ll_backend__unify_gen__V_103_103, (MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_construction_2\'/14", (MR_String) "table_io_entry has args");
                  }
#line 688 "unify_gen.m"
                  {
#line 688 "unify_gen.m"
                    ll_backend__unify_gen__PredProcId_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 688 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__PredProcId_73, 0) = ((MR_Box) (ll_backend__unify_gen__PredId_238));
#line 688 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__PredProcId_73, 1) = ((MR_Box) (ll_backend__unify_gen__ProcId_239));
#line 688 "unify_gen.m"
                  }
#line 689 "unify_gen.m"
                  mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 689 "unify_gen.m"
                  {
#line 689 "unify_gen.m"
                    ll_backend__unify_gen__DataId_237 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 689 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__DataId_237, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 689 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__DataId_237, 1) = NULL;
#line 689 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__DataId_237, 2) = ((MR_Box) (ll_backend__unify_gen__PredProcId_73));
#line 689 "unify_gen.m"
                  }
#line 690 "unify_gen.m"
                  {
#line 690 "unify_gen.m"
                    ll_backend__unify_gen__V_111_111 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 690 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_111_111, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 690 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_111_111, 1) = ((MR_Box) (ll_backend__unify_gen__DataId_237));
#line 690 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_111_111, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 690 "unify_gen.m"
                  }
#line 690 "unify_gen.m"
                  {
#line 690 "unify_gen.m"
                    ll_backend__unify_gen__V_109_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 690 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_109_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 690 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_109_109, 1) = ((MR_Box) (ll_backend__unify_gen__V_111_111));
#line 690 "unify_gen.m"
                  }
#line 690 "unify_gen.m"
                  {
#line 690 "unify_gen.m"
                    ll_backend__code_loc_dep__assign_const_to_var_5_p_0(ll_backend__unify_gen__Var_16, ll_backend__unify_gen__V_109_109, ll_backend__unify_gen__STATE_VARIABLE_CI_0_78, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_80, ll_backend__unify_gen__STATE_VARIABLE_CLD_81);
                  }
#line 692 "unify_gen.m"
                  {
#line 692 "unify_gen.m"
                    *ll_backend__unify_gen__Code_24 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                  }
#line 686 "unify_gen.m"
                  *ll_backend__unify_gen__STATE_VARIABLE_CI_79 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_78;
#line 686 "unify_gen.m"
                }
#line 540 "unify_gen.m"
                break;
#line 540 "unify_gen.m"
              case (MR_Integer) 11:
#line 583 "unify_gen.m"
                {
#line 583 "unify_gen.m"
                  MR_Integer ll_backend__unify_gen__Ptag_297 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 1)));
#line 583 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__ArgTypes_298;
#line 583 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__CellArgs0_299;
#line 583 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__MayUseAtomic_300;
#line 583 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__CellArgs_301;
#line 583 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__PackCode_302;
#line 583 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__HowToConstruct_303;
#line 583 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__Context_304;
#line 583 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__ConstructCode_305;
#line 583 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_179_306;

#line 584 "unify_gen.m"
                  {
#line 584 "unify_gen.m"
                    ll_backend__unify_gen__var_types_3_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_78, ll_backend__unify_gen__Args_17, &ll_backend__unify_gen__ArgTypes_298);
                  }
#line 585 "unify_gen.m"
                  {
#line 585 "unify_gen.m"
                    ll_backend__unify_gen__generate_cons_args_8_p_0(ll_backend__unify_gen__Args_17, ll_backend__unify_gen__ArgTypes_298, ll_backend__unify_gen__Modes_18, ll_backend__unify_gen__ArgWidths_19, ll_backend__unify_gen__TakeAddr_21, ll_backend__unify_gen__STATE_VARIABLE_CI_0_78, &ll_backend__unify_gen__CellArgs0_299, &ll_backend__unify_gen__MayUseAtomic_300);
                  }
#line 587 "unify_gen.m"
                  {
#line 587 "unify_gen.m"
                    ll_backend__unify_gen__pack_cell_rvals_7_p_0(ll_backend__unify_gen__ArgWidths_19, ll_backend__unify_gen__CellArgs0_299, &ll_backend__unify_gen__CellArgs_301, &ll_backend__unify_gen__PackCode_302, ll_backend__unify_gen__STATE_VARIABLE_CI_0_78, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_80, &ll_backend__unify_gen__STATE_VARIABLE_CLD_179_306);
                  }
#line 588 "unify_gen.m"
                  {
#line 588 "unify_gen.m"
                    ll_backend__unify_gen__pack_how_to_construct_3_p_0(ll_backend__unify_gen__ArgWidths_19, ll_backend__unify_gen__HowToConstruct0_20, &ll_backend__unify_gen__HowToConstruct_303);
                  }
#line 589 "unify_gen.m"
                  {
#line 589 "unify_gen.m"
                    ll_backend__unify_gen__Context_304 = hlds__hlds_goal__goal_info_get_context_1_f_0(ll_backend__unify_gen__GoalInfo_23);
                  }
#line 590 "unify_gen.m"
                  {
#line 590 "unify_gen.m"
                    ll_backend__unify_gen__construct_cell_12_p_0(ll_backend__unify_gen__Var_16, ll_backend__unify_gen__Ptag_297, ll_backend__unify_gen__CellArgs_301, ll_backend__unify_gen__HowToConstruct_303, ll_backend__unify_gen__MaybeSize_22, ll_backend__unify_gen__Context_304, ll_backend__unify_gen__MayUseAtomic_300, &ll_backend__unify_gen__ConstructCode_305, ll_backend__unify_gen__STATE_VARIABLE_CI_0_78, ll_backend__unify_gen__STATE_VARIABLE_CI_79, ll_backend__unify_gen__STATE_VARIABLE_CLD_179_306, ll_backend__unify_gen__STATE_VARIABLE_CLD_81);
                  }
#line 592 "unify_gen.m"
                  {
#line 592 "unify_gen.m"
                    *ll_backend__unify_gen__Code_24 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__unify_gen__PackCode_302, ll_backend__unify_gen__ConstructCode_305);
                  }
#line 583 "unify_gen.m"
                }
#line 540 "unify_gen.m"
                break;
#line 540 "unify_gen.m"
              case (MR_Integer) 12:
#line 594 "unify_gen.m"
                {
#line 594 "unify_gen.m"
                  MR_Integer ll_backend__unify_gen__Ptag_218 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 1)));
#line 608 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__Arg_212;
#line 608 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__Mode_213;
#line 596 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_170_170;
#line 596 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_171_171;

#line 596 "unify_gen.m"
                  ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__Args_17)) == (MR_mktag((MR_Integer) 1)));
#line 596 "unify_gen.m"
                  if (ll_backend__unify_gen__succeeded)
#line 596 "unify_gen.m"
                    {
#line 596 "unify_gen.m"
                      ll_backend__unify_gen__Arg_212 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Args_17, (MR_Integer) 0)));
#line 596 "unify_gen.m"
                      ll_backend__unify_gen__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Args_17, (MR_Integer) 1)));
#line 596 "unify_gen.m"
                      ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__V_170_170 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 596 "unify_gen.m"
                      if (ll_backend__unify_gen__succeeded)
#line 596 "unify_gen.m"
                        {
#line 597 "unify_gen.m"
                          ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__Modes_18)) == (MR_mktag((MR_Integer) 1)));
#line 597 "unify_gen.m"
                          if (ll_backend__unify_gen__succeeded)
#line 597 "unify_gen.m"
                            {
#line 597 "unify_gen.m"
                              ll_backend__unify_gen__Mode_213 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Modes_18, (MR_Integer) 0)));
#line 597 "unify_gen.m"
                              ll_backend__unify_gen__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Modes_18, (MR_Integer) 1)));
#line 597 "unify_gen.m"
                              ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__V_171_171 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 597 "unify_gen.m"
                            }
#line 596 "unify_gen.m"
                        }
#line 596 "unify_gen.m"
                    }
#line 608 "unify_gen.m"
                  if (ll_backend__unify_gen__succeeded)
#line 604 "unify_gen.m"
                    if ((ll_backend__unify_gen__TakeAddr_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 600 "unify_gen.m"
                      {
#line 600 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__Type_210;

#line 601 "unify_gen.m"
                        {
#line 601 "unify_gen.m"
                          ll_backend__unify_gen__Type_210 = ll_backend__code_info__variable_type_2_f_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_78, ll_backend__unify_gen__Arg_212);
                        }
#line 602 "unify_gen.m"
                        {
#line 602 "unify_gen.m"
                          ll_backend__unify_gen__generate_direct_arg_construct_9_p_0(ll_backend__unify_gen__Var_16, ll_backend__unify_gen__Arg_212, ll_backend__unify_gen__Ptag_218, ll_backend__unify_gen__Mode_213, ll_backend__unify_gen__Type_210, ll_backend__unify_gen__Code_24, ll_backend__unify_gen__STATE_VARIABLE_CI_0_78, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_80, ll_backend__unify_gen__STATE_VARIABLE_CLD_81);
                        }
#line 600 "unify_gen.m"
                      }
#line 604 "unify_gen.m"
                    else
#line 605 "unify_gen.m"
                      {
#line 606 "unify_gen.m"
                        {
#line 606 "unify_gen.m"
                          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_construction_2\'/14", (MR_String) "direct_arg_tag: take_addr");
#line 606 "unify_gen.m"
                          return;
                        }
#line 605 "unify_gen.m"
                      }
#line 608 "unify_gen.m"
                  else
#line 609 "unify_gen.m"
                    {
#line 609 "unify_gen.m"
                      {
#line 609 "unify_gen.m"
                        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_construction_2\'/14", (MR_String) "direct_arg_tag: arity != 1");
#line 609 "unify_gen.m"
                        return;
                      }
#line 609 "unify_gen.m"
                    }
#line 594 "unify_gen.m"
                  *ll_backend__unify_gen__STATE_VARIABLE_CI_79 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_78;
#line 594 "unify_gen.m"
                }
#line 540 "unify_gen.m"
                break;
#line 540 "unify_gen.m"
              case (MR_Integer) 13:
#line 612 "unify_gen.m"
                {
#line 612 "unify_gen.m"
                  MR_Integer ll_backend__unify_gen__Sectag_49 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 2)));
#line 612 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__CellArgs1_50;
#line 612 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_163_163;
#line 612 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_164_164;
#line 612 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_165_165;
#line 612 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_166_166;
#line 612 "unify_gen.m"
                  MR_Integer ll_backend__unify_gen__Ptag_219 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 1)));
#line 612 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__ArgTypes_220;
#line 612 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__CellArgs0_221;
#line 612 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__MayUseAtomic_222;
#line 612 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__CellArgs_223;
#line 612 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__PackCode_224;
#line 612 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__HowToConstruct_225;
#line 612 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__Context_226;
#line 612 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__ConstructCode_227;

#line 613 "unify_gen.m"
                  {
#line 613 "unify_gen.m"
                    ll_backend__unify_gen__var_types_3_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_78, ll_backend__unify_gen__Args_17, &ll_backend__unify_gen__ArgTypes_220);
                  }
#line 614 "unify_gen.m"
                  {
#line 614 "unify_gen.m"
                    ll_backend__unify_gen__generate_cons_args_8_p_0(ll_backend__unify_gen__Args_17, ll_backend__unify_gen__ArgTypes_220, ll_backend__unify_gen__Modes_18, ll_backend__unify_gen__ArgWidths_19, ll_backend__unify_gen__TakeAddr_21, ll_backend__unify_gen__STATE_VARIABLE_CI_0_78, &ll_backend__unify_gen__CellArgs0_221, &ll_backend__unify_gen__MayUseAtomic_222);
                  }
#line 616 "unify_gen.m"
                  {
#line 616 "unify_gen.m"
                    ll_backend__unify_gen__pack_cell_rvals_7_p_0(ll_backend__unify_gen__ArgWidths_19, ll_backend__unify_gen__CellArgs0_221, &ll_backend__unify_gen__CellArgs1_50, &ll_backend__unify_gen__PackCode_224, ll_backend__unify_gen__STATE_VARIABLE_CI_0_78, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_80, &ll_backend__unify_gen__STATE_VARIABLE_CLD_163_163);
                  }
#line 617 "unify_gen.m"
                  {
#line 617 "unify_gen.m"
                    ll_backend__unify_gen__pack_how_to_construct_3_p_0(ll_backend__unify_gen__ArgWidths_19, ll_backend__unify_gen__HowToConstruct0_20, &ll_backend__unify_gen__HowToConstruct_225);
                  }
#line 618 "unify_gen.m"
                  {
#line 618 "unify_gen.m"
                    ll_backend__unify_gen__V_166_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 618 "unify_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_166_166, 0) = ((MR_Box) (ll_backend__unify_gen__Sectag_49));
#line 618 "unify_gen.m"
                  }
#line 618 "unify_gen.m"
                  {
#line 618 "unify_gen.m"
                    ll_backend__unify_gen__V_165_165 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 618 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_165_165, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 618 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_165_165, 1) = ((MR_Box) (ll_backend__unify_gen__V_166_166));
#line 618 "unify_gen.m"
                  }
#line 618 "unify_gen.m"
                  {
#line 618 "unify_gen.m"
                    ll_backend__unify_gen__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 618 "unify_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_164_164, 0) = ((MR_Box) (ll_backend__unify_gen__V_165_165));
#line 618 "unify_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_164_164, 1) = ((MR_Box) ((MR_Integer) 0));
#line 618 "unify_gen.m"
                  }
#line 619 "unify_gen.m"
                  {
#line 619 "unify_gen.m"
                    ll_backend__unify_gen__CellArgs_223 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 619 "unify_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArgs_223, 0) = ((MR_Box) (ll_backend__unify_gen__V_164_164));
#line 619 "unify_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArgs_223, 1) = ((MR_Box) (ll_backend__unify_gen__CellArgs1_50));
#line 619 "unify_gen.m"
                  }
#line 620 "unify_gen.m"
                  {
#line 620 "unify_gen.m"
                    ll_backend__unify_gen__Context_226 = hlds__hlds_goal__goal_info_get_context_1_f_0(ll_backend__unify_gen__GoalInfo_23);
                  }
#line 621 "unify_gen.m"
                  {
#line 621 "unify_gen.m"
                    ll_backend__unify_gen__construct_cell_12_p_0(ll_backend__unify_gen__Var_16, ll_backend__unify_gen__Ptag_219, ll_backend__unify_gen__CellArgs_223, ll_backend__unify_gen__HowToConstruct_225, ll_backend__unify_gen__MaybeSize_22, ll_backend__unify_gen__Context_226, ll_backend__unify_gen__MayUseAtomic_222, &ll_backend__unify_gen__ConstructCode_227, ll_backend__unify_gen__STATE_VARIABLE_CI_0_78, ll_backend__unify_gen__STATE_VARIABLE_CI_79, ll_backend__unify_gen__STATE_VARIABLE_CLD_163_163, ll_backend__unify_gen__STATE_VARIABLE_CLD_81);
                  }
#line 623 "unify_gen.m"
                  {
#line 623 "unify_gen.m"
                    *ll_backend__unify_gen__Code_24 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__unify_gen__PackCode_224, ll_backend__unify_gen__ConstructCode_227);
                  }
#line 612 "unify_gen.m"
                }
#line 540 "unify_gen.m"
                break;
#line 540 "unify_gen.m"
              case (MR_Integer) 14:
#line 625 "unify_gen.m"
                {
#line 625 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_157_157;
#line 625 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_159_159;
#line 625 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_161_161;
#line 625 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_162_162;
#line 625 "unify_gen.m"
                  MR_Integer ll_backend__unify_gen__Ptag_228 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 1)));
#line 625 "unify_gen.m"
                  MR_Integer ll_backend__unify_gen__Sectag_229 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 2)));

#line 627 "unify_gen.m"
                  {
#line 627 "unify_gen.m"
                    ll_backend__unify_gen__V_162_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 627 "unify_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_162_162, 0) = ((MR_Box) (ll_backend__unify_gen__Sectag_229));
#line 627 "unify_gen.m"
                  }
#line 627 "unify_gen.m"
                  {
#line 627 "unify_gen.m"
                    ll_backend__unify_gen__V_161_161 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 627 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_161_161, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 627 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_161_161, 1) = ((MR_Box) (ll_backend__unify_gen__V_162_162));
#line 627 "unify_gen.m"
                  }
#line 627 "unify_gen.m"
                  {
#line 627 "unify_gen.m"
                    ll_backend__unify_gen__V_159_159 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 627 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_159_159, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 627 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_159_159, 1) = ((MR_Box) ((MR_Integer) 4));
#line 627 "unify_gen.m"
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_159_159, 2) = ((MR_Box) (ll_backend__unify_gen__V_161_161));
#line 627 "unify_gen.m"
                  }
#line 627 "unify_gen.m"
                  {
#line 627 "unify_gen.m"
                    ll_backend__unify_gen__V_157_157 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 627 "unify_gen.m"
                    MR_hl_field(MR_mktag(2), ll_backend__unify_gen__V_157_157, 0) = ((MR_Box) (ll_backend__unify_gen__Ptag_228));
#line 627 "unify_gen.m"
                    MR_hl_field(MR_mktag(2), ll_backend__unify_gen__V_157_157, 1) = ((MR_Box) (ll_backend__unify_gen__V_159_159));
#line 627 "unify_gen.m"
                  }
#line 626 "unify_gen.m"
                  {
#line 626 "unify_gen.m"
                    ll_backend__code_loc_dep__assign_const_to_var_5_p_0(ll_backend__unify_gen__Var_16, ll_backend__unify_gen__V_157_157, ll_backend__unify_gen__STATE_VARIABLE_CI_0_78, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_80, ll_backend__unify_gen__STATE_VARIABLE_CLD_81);
                  }
#line 629 "unify_gen.m"
                  {
#line 629 "unify_gen.m"
                    *ll_backend__unify_gen__Code_24 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                  }
#line 625 "unify_gen.m"
                  *ll_backend__unify_gen__STATE_VARIABLE_CI_79 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_78;
#line 625 "unify_gen.m"
                }
#line 540 "unify_gen.m"
                break;
#line 540 "unify_gen.m"
              case (MR_Integer) 15:
#line 694 "unify_gen.m"
                {
#line 694 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__RA_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 1)));
#line 694 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_96_96;
#line 694 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__V_101_101;

#line 695 "unify_gen.m"
                  {
#line 695 "unify_gen.m"
                    ll_backend__unify_gen__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 695 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_96_96, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_5[2]));
#line 695 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_96_96, 1) = ((MR_Box) (ll_backend__unify_gen__generate_construction_2_14_p_0_6));
#line 695 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_96_96, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 695 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_96_96, 3) = ((MR_Box) (ll_backend__unify_gen__Args_17));
#line 695 "unify_gen.m"
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_96_96, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 695 "unify_gen.m"
                  }
#line 695 "unify_gen.m"
                  {
#line 695 "unify_gen.m"
                    mercury__require__expect_4_p_0(ll_backend__unify_gen__V_96_96, (MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_construction_2\'/14", (MR_String) "reserved_address constant has args");
                  }
#line 697 "unify_gen.m"
                  {
#line 697 "unify_gen.m"
                    ll_backend__unify_gen__V_101_101 = ll_backend__unify_gen__generate_reserved_address_1_f_0(ll_backend__unify_gen__RA_74);
                  }
#line 697 "unify_gen.m"
                  {
#line 697 "unify_gen.m"
                    ll_backend__code_loc_dep__assign_const_to_var_5_p_0(ll_backend__unify_gen__Var_16, ll_backend__unify_gen__V_101_101, ll_backend__unify_gen__STATE_VARIABLE_CI_0_78, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_80, ll_backend__unify_gen__STATE_VARIABLE_CLD_81);
                  }
#line 698 "unify_gen.m"
                  {
#line 698 "unify_gen.m"
                    *ll_backend__unify_gen__Code_24 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                  }
#line 694 "unify_gen.m"
                  *ll_backend__unify_gen__STATE_VARIABLE_CI_79 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_78;
#line 694 "unify_gen.m"
                }
#line 540 "unify_gen.m"
                break;
#line 540 "unify_gen.m"
              case (MR_Integer) 16:
#line 700 "unify_gen.m"
                {
#line 700 "unify_gen.m"
                  MR_Word ll_backend__unify_gen__ThisTag_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 2)));
#line 700 "unify_gen.m"
                  MR_Word ll_backend__unify_gen___RAs_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 1)));

#line 704 "unify_gen.m"
                  /* direct tailcall eliminated */
#line 704 "unify_gen.m"
                  {
#line 704 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__ConsTag__tmp_copy_15 = ll_backend__unify_gen__ThisTag_76;

#line 704 "unify_gen.m"
                    ll_backend__unify_gen__ConsTag_15 = ll_backend__unify_gen__ConsTag__tmp_copy_15;
#line 704 "unify_gen.m"
                  }
#line 704 "unify_gen.m"
                  continue;
#line 700 "unify_gen.m"
                }
#line 540 "unify_gen.m"
                break;
#line 540 "unify_gen.m"
            }
#line 540 "unify_gen.m"
            break;
#line 540 "unify_gen.m"
        }
#line 540 "unify_gen.m"
      }
#line 540 "unify_gen.m"
      break;
#line 540 "unify_gen.m"
    }
#line 530 "unify_gen.m"
}

#line 516 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_construction_14_p_0(
#line 516 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Var_15,
#line 516 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConsId_16,
#line 516 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Args_17,
#line 516 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Modes_18,
#line 516 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ArgWidths_19,
#line 516 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HowToConstruct_20,
#line 516 "unify_gen.m"
  MR_Word ll_backend__unify_gen__TakeAddr_21,
#line 516 "unify_gen.m"
  MR_Word ll_backend__unify_gen__MaybeSize_22,
#line 516 "unify_gen.m"
  MR_Word ll_backend__unify_gen__GoalInfo_23,
#line 516 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_24,
#line 516 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_29,
#line 516 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_30,
#line 516 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_31,
#line 516 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_32)
#line 516 "unify_gen.m"
{
#line 524 "unify_gen.m"
  {
#line 524 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 524 "unify_gen.m"
    MR_Word ll_backend__unify_gen__ModuleInfo_27;
#line 524 "unify_gen.m"
    MR_Word ll_backend__unify_gen__Tag_28;

#line 525 "unify_gen.m"
    {
#line 525 "unify_gen.m"
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_29, &ll_backend__unify_gen__ModuleInfo_27);
    }
#line 526 "unify_gen.m"
    {
#line 526 "unify_gen.m"
      ll_backend__unify_gen__Tag_28 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ll_backend__unify_gen__ModuleInfo_27, ll_backend__unify_gen__ConsId_16);
    }
#line 527 "unify_gen.m"
    {
#line 527 "unify_gen.m"
      ll_backend__unify_gen__generate_construction_2_14_p_0(ll_backend__unify_gen__Tag_28, ll_backend__unify_gen__Var_15, ll_backend__unify_gen__Args_17, ll_backend__unify_gen__Modes_18, ll_backend__unify_gen__ArgWidths_19, ll_backend__unify_gen__HowToConstruct_20, ll_backend__unify_gen__TakeAddr_21, ll_backend__unify_gen__MaybeSize_22, ll_backend__unify_gen__GoalInfo_23, ll_backend__unify_gen__Code_24, ll_backend__unify_gen__STATE_VARIABLE_CI_0_29, ll_backend__unify_gen__STATE_VARIABLE_CI_30, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_31, ll_backend__unify_gen__STATE_VARIABLE_CLD_32);
#line 527 "unify_gen.m"
      return;
    }
#line 524 "unify_gen.m"
  }
#line 516 "unify_gen.m"
}

#line 497 "unify_gen.m"
static MR_Word MR_CALL 
ll_backend__unify_gen__generate_reserved_address_1_f_0(
#line 497 "unify_gen.m"
  MR_Word ll_backend__unify_gen__HeadVar__1_1)
#line 497 "unify_gen.m"
{
#line 499 "unify_gen.m"
  {
#line 499 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 499 "unify_gen.m"
    MR_Word ll_backend__unify_gen__HeadVar__2_2;

#line 499 "unify_gen.m"
#line 499 "unify_gen.m"
    switch (MR_tag((MR_Word) ll_backend__unify_gen__HeadVar__1_1)) {
#line 499 "unify_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 499 "unify_gen.m"
      case (MR_Integer) 0:
#line 499 "unify_gen.m"
        {
#line 499 "unify_gen.m"
          ll_backend__unify_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[8]);
#line 499 "unify_gen.m"
        }
#line 499 "unify_gen.m"
        break;
#line 499 "unify_gen.m"
      case (MR_Integer) 1:
#line 500 "unify_gen.m"
        {
#line 500 "unify_gen.m"
          MR_Integer ll_backend__unify_gen__N_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 500 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_6_6;

#line 500 "unify_gen.m"
          {
#line 500 "unify_gen.m"
            ll_backend__unify_gen__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 500 "unify_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_6_6, 0) = ((MR_Box) (ll_backend__unify_gen__N_5));
#line 500 "unify_gen.m"
          }
#line 500 "unify_gen.m"
          {
#line 500 "unify_gen.m"
            ll_backend__unify_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 500 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 500 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__HeadVar__2_2, 1) = ((MR_Box) (ll_backend__unify_gen__V_6_6));
#line 500 "unify_gen.m"
          }
#line 500 "unify_gen.m"
        }
#line 499 "unify_gen.m"
        break;
#line 499 "unify_gen.m"
      case (MR_Integer) 2:
#line 501 "unify_gen.m"
        {
#line 503 "unify_gen.m"
          {
#line 503 "unify_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "function \140ll_backend.unify_gen.generate_reserved_address\'/1", (MR_String) "reserved_object");
          }
#line 501 "unify_gen.m"
        }
#line 499 "unify_gen.m"
        break;
#line 499 "unify_gen.m"
    }
#line 499 "unify_gen.m"
    return ll_backend__unify_gen__HeadVar__2_2;
#line 499 "unify_gen.m"
  }
#line 497 "unify_gen.m"
}

#line 487 "unify_gen.m"
static MR_Box MR_CALL 
ll_backend__unify_gen__raw_tag_test_3_p_0_2(
#line 487 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg,
#line 487 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
#line 487 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_2)
#line 487 "unify_gen.m"
{
#line 487 "unify_gen.m"
  {
#line 487 "unify_gen.m"
    MR_Box ll_backend__unify_gen__wrapper_arg_3;
#line 487 "unify_gen.m"
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;
#line 487 "unify_gen.m"
    MR_Word ll_backend__unify_gen__conv0_HeadVar__4_50;

#line 487 "unify_gen.m"
    {
#line 487 "unify_gen.m"
      ll_backend__unify_gen__conv0_HeadVar__4_50 = ll_backend__unify_gen__IntroducedFrom__func__raw_tag_test__487__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__unify_gen__wrapper_arg_1), ((MR_Word) ll_backend__unify_gen__wrapper_arg_2));
    }
#line 487 "unify_gen.m"
    ll_backend__unify_gen__wrapper_arg_3 = ((MR_Box) (ll_backend__unify_gen__conv0_HeadVar__4_50));
#line 487 "unify_gen.m"
    return ll_backend__unify_gen__wrapper_arg_3;
#line 487 "unify_gen.m"
  }
#line 487 "unify_gen.m"
}

#line 418 "unify_gen.m"
static MR_bool MR_CALL 
ll_backend__unify_gen__raw_tag_test_3_p_0_1(
#line 418 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg)
#line 418 "unify_gen.m"
{
#line 418 "unify_gen.m"
  {
#line 418 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 418 "unify_gen.m"
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;

#line 418 "unify_gen.m"
    {
#line 418 "unify_gen.m"
      return ll_backend__unify_gen__succeeded = ll_backend__unify_gen__IntroducedFrom__pred__raw_tag_test__418__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 4))));
    }
#line 418 "unify_gen.m"
    return ll_backend__unify_gen__succeeded;
#line 418 "unify_gen.m"
  }
#line 418 "unify_gen.m"
}

#line 404 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__raw_tag_test_3_p_0(
#line 404 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Rval_4,
#line 404 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConsTag_5,
#line 404 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__TestRval_6)
#line 404 "unify_gen.m"
{
#line 408 "unify_gen.m"
  {
#line 408 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;

#line 408 "unify_gen.m"
#line 408 "unify_gen.m"
    switch (MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_5)) {
#line 408 "unify_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 408 "unify_gen.m"
      case (MR_Integer) 0:
#line 408 "unify_gen.m"
#line 408 "unify_gen.m"
        switch (MR_unmkbody(ll_backend__unify_gen__ConsTag_5)) {
#line 408 "unify_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 408 "unify_gen.m"
          case (MR_Integer) 0:
#line 458 "unify_gen.m"
            {
#line 459 "unify_gen.m"
              *ll_backend__unify_gen__TestRval_6 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[7]);
#line 458 "unify_gen.m"
            }
#line 408 "unify_gen.m"
            break;
#line 408 "unify_gen.m"
          case (MR_Integer) 1:
#line 455 "unify_gen.m"
            {
#line 456 "unify_gen.m"
              *ll_backend__unify_gen__TestRval_6 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[7]);
#line 455 "unify_gen.m"
            }
#line 408 "unify_gen.m"
            break;
#line 408 "unify_gen.m"
        }
#line 408 "unify_gen.m"
        break;
#line 408 "unify_gen.m"
      case (MR_Integer) 1:
#line 408 "unify_gen.m"
        {
#line 408 "unify_gen.m"
          MR_String ll_backend__unify_gen__String_7 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ConsTag_5, (MR_Integer) 0)));
#line 408 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_125_125;
#line 408 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_126_126;

#line 409 "unify_gen.m"
          {
#line 409 "unify_gen.m"
            ll_backend__unify_gen__V_126_126 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 409 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_126_126, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 409 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_126_126, 1) = ((MR_Box) (ll_backend__unify_gen__String_7));
#line 409 "unify_gen.m"
          }
#line 409 "unify_gen.m"
          {
#line 409 "unify_gen.m"
            ll_backend__unify_gen__V_125_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 409 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_125_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 409 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_125_125, 1) = ((MR_Box) (ll_backend__unify_gen__V_126_126));
#line 409 "unify_gen.m"
          }
#line 409 "unify_gen.m"
          {
#line 409 "unify_gen.m"
            MR_Word base;
#line 409 "unify_gen.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 409 "unify_gen.m"
            *ll_backend__unify_gen__TestRval_6 = base;
#line 409 "unify_gen.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 409 "unify_gen.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
#line 409 "unify_gen.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__unify_gen__Rval_4));
#line 409 "unify_gen.m"
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__unify_gen__V_125_125));
#line 409 "unify_gen.m"
          }
#line 408 "unify_gen.m"
        }
#line 408 "unify_gen.m"
        break;
#line 408 "unify_gen.m"
      case (MR_Integer) 2:
#line 411 "unify_gen.m"
        {
#line 411 "unify_gen.m"
          MR_Float ll_backend__unify_gen__Float_8 = MR_unbox_float((MR_hl_field(MR_mktag(2), ll_backend__unify_gen__ConsTag_5, (MR_Integer) 0)));
#line 411 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_122_122;
#line 411 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_123_123;

#line 412 "unify_gen.m"
          {
#line 412 "unify_gen.m"
            ll_backend__unify_gen__V_123_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 412 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_123_123, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 412 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_123_123, 1) = MR_box_float(ll_backend__unify_gen__Float_8);
#line 412 "unify_gen.m"
          }
#line 412 "unify_gen.m"
          {
#line 412 "unify_gen.m"
            ll_backend__unify_gen__V_122_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 412 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_122_122, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 412 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_122_122, 1) = ((MR_Box) (ll_backend__unify_gen__V_123_123));
#line 412 "unify_gen.m"
          }
#line 412 "unify_gen.m"
          {
#line 412 "unify_gen.m"
            MR_Word base;
#line 412 "unify_gen.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 412 "unify_gen.m"
            *ll_backend__unify_gen__TestRval_6 = base;
#line 412 "unify_gen.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 412 "unify_gen.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 32))));
#line 412 "unify_gen.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__unify_gen__Rval_4));
#line 412 "unify_gen.m"
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__unify_gen__V_122_122));
#line 412 "unify_gen.m"
          }
#line 411 "unify_gen.m"
        }
#line 408 "unify_gen.m"
        break;
#line 408 "unify_gen.m"
      case (MR_Integer) 3:
#line 408 "unify_gen.m"
#line 408 "unify_gen.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_5, (MR_Integer) 0)))) {
#line 408 "unify_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 408 "unify_gen.m"
          case (MR_Integer) 0:
#line 414 "unify_gen.m"
            {
#line 414 "unify_gen.m"
              MR_Integer ll_backend__unify_gen__Int_9 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_5, (MR_Integer) 1)));
#line 414 "unify_gen.m"
              MR_Word ll_backend__unify_gen__V_119_119;
#line 414 "unify_gen.m"
              MR_Word ll_backend__unify_gen__V_120_120;

#line 415 "unify_gen.m"
              {
#line 415 "unify_gen.m"
                ll_backend__unify_gen__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 415 "unify_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_120_120, 0) = ((MR_Box) (ll_backend__unify_gen__Int_9));
#line 415 "unify_gen.m"
              }
#line 415 "unify_gen.m"
              {
#line 415 "unify_gen.m"
                ll_backend__unify_gen__V_119_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 415 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_119_119, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 415 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_119_119, 1) = ((MR_Box) (ll_backend__unify_gen__V_120_120));
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
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__unify_gen__V_119_119));
#line 415 "unify_gen.m"
              }
#line 414 "unify_gen.m"
            }
#line 408 "unify_gen.m"
            break;
#line 408 "unify_gen.m"
          case (MR_Integer) 1:
#line 417 "unify_gen.m"
            {
#line 417 "unify_gen.m"
              MR_Word ll_backend__unify_gen__ForeignLang_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_5, (MR_Integer) 1)));
#line 417 "unify_gen.m"
              MR_String ll_backend__unify_gen__ForeignVal_11 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_5, (MR_Integer) 2)));
#line 417 "unify_gen.m"
              MR_Word ll_backend__unify_gen__V_109_109;
#line 417 "unify_gen.m"
              MR_Word ll_backend__unify_gen__V_115_115;
#line 417 "unify_gen.m"
              MR_Word ll_backend__unify_gen__V_116_116;

#line 418 "unify_gen.m"
              {
#line 418 "unify_gen.m"
                ll_backend__unify_gen__V_109_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 418 "unify_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_109_109, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_5[1]));
#line 418 "unify_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_109_109, 1) = ((MR_Box) (ll_backend__unify_gen__raw_tag_test_3_p_0_1));
#line 418 "unify_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_109_109, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 418 "unify_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_109_109, 3) = ((MR_Box) (ll_backend__unify_gen__ForeignLang_10));
#line 418 "unify_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_109_109, 4) = ((MR_Box) ((MR_Integer) 0));
#line 418 "unify_gen.m"
              }
#line 418 "unify_gen.m"
              {
#line 418 "unify_gen.m"
                mercury__require__expect_4_p_0(ll_backend__unify_gen__V_109_109, (MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.raw_tag_test\'/3", (MR_String) "foreign tag for language other than C");
              }
#line 421 "unify_gen.m"
              {
#line 421 "unify_gen.m"
                ll_backend__unify_gen__V_116_116 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 421 "unify_gen.m"
                MR_hl_field(MR_mktag(2), ll_backend__unify_gen__V_116_116, 0) = ((MR_Box) (ll_backend__unify_gen__ForeignVal_11));
#line 421 "unify_gen.m"
                MR_hl_field(MR_mktag(2), ll_backend__unify_gen__V_116_116, 1) = ((MR_Box) ((MR_Integer) 7));
#line 421 "unify_gen.m"
              }
#line 421 "unify_gen.m"
              {
#line 421 "unify_gen.m"
                ll_backend__unify_gen__V_115_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 421 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_115_115, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 421 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_115_115, 1) = ((MR_Box) (ll_backend__unify_gen__V_116_116));
#line 421 "unify_gen.m"
              }
#line 420 "unify_gen.m"
              {
#line 420 "unify_gen.m"
                MR_Word base;
#line 420 "unify_gen.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 420 "unify_gen.m"
                *ll_backend__unify_gen__TestRval_6 = base;
#line 420 "unify_gen.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 420 "unify_gen.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
#line 420 "unify_gen.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__unify_gen__Rval_4));
#line 420 "unify_gen.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__unify_gen__V_115_115));
#line 420 "unify_gen.m"
              }
#line 417 "unify_gen.m"
            }
#line 408 "unify_gen.m"
            break;
#line 408 "unify_gen.m"
          case (MR_Integer) 2:
#line 423 "unify_gen.m"
            {
#line 426 "unify_gen.m"
              {
#line 426 "unify_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.raw_tag_test\'/3", (MR_String) "Attempted higher-order unification");
#line 426 "unify_gen.m"
                return;
              }
#line 423 "unify_gen.m"
            }
#line 408 "unify_gen.m"
            break;
#line 408 "unify_gen.m"
          case (MR_Integer) 3:
#line 428 "unify_gen.m"
            {
#line 429 "unify_gen.m"
              {
#line 429 "unify_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.raw_tag_test\'/3", (MR_String) "Attempted type_ctor_info unification");
#line 429 "unify_gen.m"
                return;
              }
#line 428 "unify_gen.m"
            }
#line 408 "unify_gen.m"
            break;
#line 408 "unify_gen.m"
          case (MR_Integer) 4:
#line 431 "unify_gen.m"
            {
#line 432 "unify_gen.m"
              {
#line 432 "unify_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.raw_tag_test\'/3", (MR_String) "Attempted base_typeclass_info unification");
#line 432 "unify_gen.m"
                return;
              }
#line 431 "unify_gen.m"
            }
#line 408 "unify_gen.m"
            break;
#line 408 "unify_gen.m"
          case (MR_Integer) 5:
#line 434 "unify_gen.m"
            {
#line 435 "unify_gen.m"
              {
#line 435 "unify_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.raw_tag_test\'/3", (MR_String) "Attempted type_info_const_tag unification");
#line 435 "unify_gen.m"
                return;
              }
#line 434 "unify_gen.m"
            }
#line 408 "unify_gen.m"
            break;
#line 408 "unify_gen.m"
          case (MR_Integer) 6:
#line 437 "unify_gen.m"
            {
#line 438 "unify_gen.m"
              {
#line 438 "unify_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.raw_tag_test\'/3", (MR_String) "Attempted typeclass_info_const_tag unification");
#line 438 "unify_gen.m"
                return;
              }
#line 437 "unify_gen.m"
            }
#line 408 "unify_gen.m"
            break;
#line 408 "unify_gen.m"
          case (MR_Integer) 7:
#line 441 "unify_gen.m"
            {
#line 442 "unify_gen.m"
              {
#line 442 "unify_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.raw_tag_test\'/3", (MR_String) "Attempted ground_term_const_tag unification");
#line 442 "unify_gen.m"
                return;
              }
#line 441 "unify_gen.m"
            }
#line 408 "unify_gen.m"
            break;
#line 408 "unify_gen.m"
          case (MR_Integer) 8:
#line 445 "unify_gen.m"
            {
#line 446 "unify_gen.m"
              {
#line 446 "unify_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.raw_tag_test\'/3", (MR_String) "Attempted tabling_info unification");
#line 446 "unify_gen.m"
                return;
              }
#line 445 "unify_gen.m"
            }
#line 408 "unify_gen.m"
            break;
#line 408 "unify_gen.m"
          case (MR_Integer) 9:
#line 448 "unify_gen.m"
            {
#line 449 "unify_gen.m"
              {
#line 449 "unify_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.raw_tag_test\'/3", (MR_String) "Attempted deep_profiling_proc_layout_tag unification");
#line 449 "unify_gen.m"
                return;
              }
#line 448 "unify_gen.m"
            }
#line 408 "unify_gen.m"
            break;
#line 408 "unify_gen.m"
          case (MR_Integer) 10:
#line 452 "unify_gen.m"
            {
#line 453 "unify_gen.m"
              {
#line 453 "unify_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.raw_tag_test\'/3", (MR_String) "Attempted table_io_entry_tag unification");
#line 453 "unify_gen.m"
                return;
              }
#line 452 "unify_gen.m"
            }
#line 408 "unify_gen.m"
            break;
#line 408 "unify_gen.m"
          case (MR_Integer) 11:
#line 463 "unify_gen.m"
            {
#line 463 "unify_gen.m"
              MR_Integer ll_backend__unify_gen__UnsharedTag_137 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_5, (MR_Integer) 1)));
#line 463 "unify_gen.m"
              MR_Word ll_backend__unify_gen__VarPtag_138;
#line 463 "unify_gen.m"
              MR_Word ll_backend__unify_gen__ConstPtag_139;
#line 463 "unify_gen.m"
              MR_Word ll_backend__unify_gen__V_142_142;
#line 463 "unify_gen.m"
              MR_Word ll_backend__unify_gen__V_143_143;

#line 464 "unify_gen.m"
              {
#line 464 "unify_gen.m"
                ll_backend__unify_gen__VarPtag_138 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 464 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__VarPtag_138, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 464 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__VarPtag_138, 1) = ((MR_Box) ((MR_Integer) 1));
#line 464 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__VarPtag_138, 2) = ((MR_Box) (ll_backend__unify_gen__Rval_4));
#line 464 "unify_gen.m"
              }
#line 465 "unify_gen.m"
              {
#line 465 "unify_gen.m"
                ll_backend__unify_gen__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 465 "unify_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_143_143, 0) = ((MR_Box) (ll_backend__unify_gen__UnsharedTag_137));
#line 465 "unify_gen.m"
              }
#line 465 "unify_gen.m"
              {
#line 465 "unify_gen.m"
                ll_backend__unify_gen__V_142_142 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 465 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_142_142, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 465 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_142_142, 1) = ((MR_Box) (ll_backend__unify_gen__V_143_143));
#line 465 "unify_gen.m"
              }
#line 465 "unify_gen.m"
              {
#line 465 "unify_gen.m"
                ll_backend__unify_gen__ConstPtag_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 465 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConstPtag_139, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 465 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConstPtag_139, 1) = ((MR_Box) ((MR_Integer) 0));
#line 465 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConstPtag_139, 2) = ((MR_Box) (ll_backend__unify_gen__V_142_142));
#line 465 "unify_gen.m"
              }
#line 466 "unify_gen.m"
              {
#line 466 "unify_gen.m"
                MR_Word base;
#line 466 "unify_gen.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 466 "unify_gen.m"
                *ll_backend__unify_gen__TestRval_6 = base;
#line 466 "unify_gen.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 466 "unify_gen.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
#line 466 "unify_gen.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__unify_gen__VarPtag_138));
#line 466 "unify_gen.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__unify_gen__ConstPtag_139));
#line 466 "unify_gen.m"
              }
#line 463 "unify_gen.m"
            }
#line 408 "unify_gen.m"
            break;
#line 408 "unify_gen.m"
          case (MR_Integer) 12:
#line 463 "unify_gen.m"
            {
#line 463 "unify_gen.m"
              MR_Integer ll_backend__unify_gen__UnsharedTag_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_5, (MR_Integer) 1)));
#line 463 "unify_gen.m"
              MR_Word ll_backend__unify_gen__VarPtag_32;
#line 463 "unify_gen.m"
              MR_Word ll_backend__unify_gen__ConstPtag_33;
#line 463 "unify_gen.m"
              MR_Word ll_backend__unify_gen__V_77_77;
#line 463 "unify_gen.m"
              MR_Word ll_backend__unify_gen__V_78_78;

#line 464 "unify_gen.m"
              {
#line 464 "unify_gen.m"
                ll_backend__unify_gen__VarPtag_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 464 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__VarPtag_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 464 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__VarPtag_32, 1) = ((MR_Box) ((MR_Integer) 1));
#line 464 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__VarPtag_32, 2) = ((MR_Box) (ll_backend__unify_gen__Rval_4));
#line 464 "unify_gen.m"
              }
#line 465 "unify_gen.m"
              {
#line 465 "unify_gen.m"
                ll_backend__unify_gen__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 465 "unify_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_78_78, 0) = ((MR_Box) (ll_backend__unify_gen__UnsharedTag_31));
#line 465 "unify_gen.m"
              }
#line 465 "unify_gen.m"
              {
#line 465 "unify_gen.m"
                ll_backend__unify_gen__V_77_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 465 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_77_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 465 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_77_77, 1) = ((MR_Box) (ll_backend__unify_gen__V_78_78));
#line 465 "unify_gen.m"
              }
#line 465 "unify_gen.m"
              {
#line 465 "unify_gen.m"
                ll_backend__unify_gen__ConstPtag_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 465 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConstPtag_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 465 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConstPtag_33, 1) = ((MR_Box) ((MR_Integer) 0));
#line 465 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConstPtag_33, 2) = ((MR_Box) (ll_backend__unify_gen__V_77_77));
#line 465 "unify_gen.m"
              }
#line 466 "unify_gen.m"
              {
#line 466 "unify_gen.m"
                MR_Word base;
#line 466 "unify_gen.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 466 "unify_gen.m"
                *ll_backend__unify_gen__TestRval_6 = base;
#line 466 "unify_gen.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 466 "unify_gen.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
#line 466 "unify_gen.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__unify_gen__VarPtag_32));
#line 466 "unify_gen.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__unify_gen__ConstPtag_33));
#line 466 "unify_gen.m"
              }
#line 463 "unify_gen.m"
            }
#line 408 "unify_gen.m"
            break;
#line 408 "unify_gen.m"
          case (MR_Integer) 13:
#line 468 "unify_gen.m"
            {
#line 468 "unify_gen.m"
              MR_Integer ll_backend__unify_gen__Bits_34 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_5, (MR_Integer) 1)));
#line 468 "unify_gen.m"
              MR_Integer ll_backend__unify_gen__Num_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_5, (MR_Integer) 2)));
#line 468 "unify_gen.m"
              MR_Word ll_backend__unify_gen__PtagTestRval_36;
#line 468 "unify_gen.m"
              MR_Word ll_backend__unify_gen__VarStag_37;
#line 468 "unify_gen.m"
              MR_Word ll_backend__unify_gen__ConstStag_38;
#line 468 "unify_gen.m"
              MR_Word ll_backend__unify_gen__StagTestRval_39;
#line 468 "unify_gen.m"
              MR_Word ll_backend__unify_gen__V_64_64;
#line 468 "unify_gen.m"
              MR_Word ll_backend__unify_gen__V_65_65;
#line 468 "unify_gen.m"
              MR_Word ll_backend__unify_gen__V_67_67;
#line 468 "unify_gen.m"
              MR_Word ll_backend__unify_gen__V_68_68;
#line 468 "unify_gen.m"
              MR_Word ll_backend__unify_gen__V_72_72;
#line 468 "unify_gen.m"
              MR_Word ll_backend__unify_gen__VarPtag_127;
#line 468 "unify_gen.m"
              MR_Word ll_backend__unify_gen__ConstPtag_128;

#line 469 "unify_gen.m"
              {
#line 469 "unify_gen.m"
                ll_backend__unify_gen__VarPtag_127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 469 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__VarPtag_127, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 469 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__VarPtag_127, 1) = ((MR_Box) ((MR_Integer) 1));
#line 469 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__VarPtag_127, 2) = ((MR_Box) (ll_backend__unify_gen__Rval_4));
#line 469 "unify_gen.m"
              }
#line 470 "unify_gen.m"
              {
#line 470 "unify_gen.m"
                ll_backend__unify_gen__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 470 "unify_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_65_65, 0) = ((MR_Box) (ll_backend__unify_gen__Bits_34));
#line 470 "unify_gen.m"
              }
#line 470 "unify_gen.m"
              {
#line 470 "unify_gen.m"
                ll_backend__unify_gen__V_64_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 470 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_64_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 470 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_64_64, 1) = ((MR_Box) (ll_backend__unify_gen__V_65_65));
#line 470 "unify_gen.m"
              }
#line 470 "unify_gen.m"
              {
#line 470 "unify_gen.m"
                ll_backend__unify_gen__ConstPtag_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 470 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConstPtag_128, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 470 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConstPtag_128, 1) = ((MR_Box) ((MR_Integer) 0));
#line 470 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConstPtag_128, 2) = ((MR_Box) (ll_backend__unify_gen__V_64_64));
#line 470 "unify_gen.m"
              }
#line 471 "unify_gen.m"
              {
#line 471 "unify_gen.m"
                ll_backend__unify_gen__PtagTestRval_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 471 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__PtagTestRval_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 471 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__PtagTestRval_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
#line 471 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__PtagTestRval_36, 2) = ((MR_Box) (ll_backend__unify_gen__VarPtag_127));
#line 471 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__PtagTestRval_36, 3) = ((MR_Box) (ll_backend__unify_gen__ConstPtag_128));
#line 471 "unify_gen.m"
              }
#line 472 "unify_gen.m"
              {
#line 472 "unify_gen.m"
                ll_backend__unify_gen__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 472 "unify_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_68_68, 0) = ((MR_Box) (ll_backend__unify_gen__Bits_34));
#line 472 "unify_gen.m"
              }
#line 472 "unify_gen.m"
              {
#line 472 "unify_gen.m"
                ll_backend__unify_gen__V_67_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 472 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_67_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 472 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_67_67, 1) = ((MR_Box) (ll_backend__unify_gen__V_68_68));
#line 472 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_67_67, 2) = ((MR_Box) (ll_backend__unify_gen__Rval_4));
#line 472 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_67_67, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[8])));
#line 472 "unify_gen.m"
              }
#line 472 "unify_gen.m"
              {
#line 472 "unify_gen.m"
                ll_backend__unify_gen__VarStag_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 472 "unify_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__VarStag_37, 0) = ((MR_Box) (ll_backend__unify_gen__V_67_67));
#line 472 "unify_gen.m"
              }
#line 473 "unify_gen.m"
              {
#line 473 "unify_gen.m"
                ll_backend__unify_gen__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 473 "unify_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_72_72, 0) = ((MR_Box) (ll_backend__unify_gen__Num_35));
#line 473 "unify_gen.m"
              }
#line 473 "unify_gen.m"
              {
#line 473 "unify_gen.m"
                ll_backend__unify_gen__ConstStag_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 473 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConstStag_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 473 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConstStag_38, 1) = ((MR_Box) (ll_backend__unify_gen__V_72_72));
#line 473 "unify_gen.m"
              }
#line 474 "unify_gen.m"
              {
#line 474 "unify_gen.m"
                ll_backend__unify_gen__StagTestRval_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 474 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__StagTestRval_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 474 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__StagTestRval_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
#line 474 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__StagTestRval_39, 2) = ((MR_Box) (ll_backend__unify_gen__VarStag_37));
#line 474 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__StagTestRval_39, 3) = ((MR_Box) (ll_backend__unify_gen__ConstStag_38));
#line 474 "unify_gen.m"
              }
#line 475 "unify_gen.m"
              {
#line 475 "unify_gen.m"
                MR_Word base;
#line 475 "unify_gen.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 475 "unify_gen.m"
                *ll_backend__unify_gen__TestRval_6 = base;
#line 475 "unify_gen.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 475 "unify_gen.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
#line 475 "unify_gen.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__unify_gen__PtagTestRval_36));
#line 475 "unify_gen.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__unify_gen__StagTestRval_39));
#line 475 "unify_gen.m"
              }
#line 468 "unify_gen.m"
            }
#line 408 "unify_gen.m"
            break;
#line 408 "unify_gen.m"
          case (MR_Integer) 14:
#line 477 "unify_gen.m"
            {
#line 477 "unify_gen.m"
              MR_Word ll_backend__unify_gen__V_57_57;
#line 477 "unify_gen.m"
              MR_Word ll_backend__unify_gen__V_59_59;
#line 477 "unify_gen.m"
              MR_Word ll_backend__unify_gen__V_60_60;
#line 477 "unify_gen.m"
              MR_Integer ll_backend__unify_gen__Bits_129 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_5, (MR_Integer) 1)));
#line 477 "unify_gen.m"
              MR_Integer ll_backend__unify_gen__Num_130 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_5, (MR_Integer) 2)));
#line 477 "unify_gen.m"
              MR_Word ll_backend__unify_gen__ConstStag_131;

#line 478 "unify_gen.m"
              {
#line 478 "unify_gen.m"
                ll_backend__unify_gen__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 478 "unify_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_60_60, 0) = ((MR_Box) (ll_backend__unify_gen__Num_130));
#line 478 "unify_gen.m"
              }
#line 478 "unify_gen.m"
              {
#line 478 "unify_gen.m"
                ll_backend__unify_gen__V_59_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 478 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_59_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 478 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_59_59, 1) = ((MR_Box) (ll_backend__unify_gen__V_60_60));
#line 478 "unify_gen.m"
              }
#line 478 "unify_gen.m"
              {
#line 478 "unify_gen.m"
                ll_backend__unify_gen__V_57_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 478 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_57_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 478 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_57_57, 1) = ((MR_Box) ((MR_Integer) 4));
#line 478 "unify_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_57_57, 2) = ((MR_Box) (ll_backend__unify_gen__V_59_59));
#line 478 "unify_gen.m"
              }
#line 478 "unify_gen.m"
              {
#line 478 "unify_gen.m"
                ll_backend__unify_gen__ConstStag_131 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 478 "unify_gen.m"
                MR_hl_field(MR_mktag(2), ll_backend__unify_gen__ConstStag_131, 0) = ((MR_Box) (ll_backend__unify_gen__Bits_129));
#line 478 "unify_gen.m"
                MR_hl_field(MR_mktag(2), ll_backend__unify_gen__ConstStag_131, 1) = ((MR_Box) (ll_backend__unify_gen__V_57_57));
#line 478 "unify_gen.m"
              }
#line 479 "unify_gen.m"
              {
#line 479 "unify_gen.m"
                MR_Word base;
#line 479 "unify_gen.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 479 "unify_gen.m"
                *ll_backend__unify_gen__TestRval_6 = base;
#line 479 "unify_gen.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 479 "unify_gen.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
#line 479 "unify_gen.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__unify_gen__Rval_4));
#line 479 "unify_gen.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__unify_gen__ConstStag_131));
#line 479 "unify_gen.m"
              }
#line 477 "unify_gen.m"
            }
#line 408 "unify_gen.m"
            break;
#line 408 "unify_gen.m"
          case (MR_Integer) 15:
#line 481 "unify_gen.m"
            {
#line 481 "unify_gen.m"
              MR_Word ll_backend__unify_gen__RA_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_5, (MR_Integer) 1)));
#line 481 "unify_gen.m"
              MR_Word ll_backend__unify_gen__V_56_56;

#line 482 "unify_gen.m"
              {
#line 482 "unify_gen.m"
                ll_backend__unify_gen__V_56_56 = ll_backend__unify_gen__generate_reserved_address_1_f_0(ll_backend__unify_gen__RA_40);
              }
#line 482 "unify_gen.m"
              {
#line 482 "unify_gen.m"
                MR_Word base;
#line 482 "unify_gen.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 482 "unify_gen.m"
                *ll_backend__unify_gen__TestRval_6 = base;
#line 482 "unify_gen.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 482 "unify_gen.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
#line 482 "unify_gen.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__unify_gen__Rval_4));
#line 482 "unify_gen.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__unify_gen__V_56_56));
#line 482 "unify_gen.m"
              }
#line 481 "unify_gen.m"
            }
#line 408 "unify_gen.m"
            break;
#line 408 "unify_gen.m"
          case (MR_Integer) 16:
#line 484 "unify_gen.m"
            {
#line 484 "unify_gen.m"
              MR_Word ll_backend__unify_gen__ReservedAddrs_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_5, (MR_Integer) 1)));
#line 484 "unify_gen.m"
              MR_Word ll_backend__unify_gen__ThisTag_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_5, (MR_Integer) 2)));
#line 484 "unify_gen.m"
              MR_Word ll_backend__unify_gen__CheckReservedAddrs_43;
#line 484 "unify_gen.m"
              MR_Word ll_backend__unify_gen__MatchesThisTag_47;
#line 493 "unify_gen.m"
              MR_Box ll_backend__unify_gen__conv1_TestRval_6;

#line 487 "unify_gen.m"
              {
#line 487 "unify_gen.m"
                ll_backend__unify_gen__CheckReservedAddrs_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 487 "unify_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__CheckReservedAddrs_43, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_7[0]));
#line 487 "unify_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__CheckReservedAddrs_43, 1) = ((MR_Box) (ll_backend__unify_gen__raw_tag_test_3_p_0_2));
#line 487 "unify_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__CheckReservedAddrs_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 487 "unify_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__CheckReservedAddrs_43, 3) = ((MR_Box) (ll_backend__unify_gen__Rval_4));
#line 487 "unify_gen.m"
              }
#line 492 "unify_gen.m"
              {
#line 492 "unify_gen.m"
                ll_backend__unify_gen__raw_tag_test_3_p_0(ll_backend__unify_gen__Rval_4, ll_backend__unify_gen__ThisTag_42, &ll_backend__unify_gen__MatchesThisTag_47);
              }
#line 493 "unify_gen.m"
              {
#line 493 "unify_gen.m"
                ll_backend__unify_gen__conv1_TestRval_6 = mercury__list__foldr_3_f_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_reserved_address_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ll_backend__unify_gen__CheckReservedAddrs_43, ll_backend__unify_gen__ReservedAddrs_41, ((MR_Box) (ll_backend__unify_gen__MatchesThisTag_47)));
              }
#line 493 "unify_gen.m"
              *ll_backend__unify_gen__TestRval_6 = ((MR_Word) ll_backend__unify_gen__conv1_TestRval_6);
#line 484 "unify_gen.m"
            }
#line 408 "unify_gen.m"
            break;
#line 408 "unify_gen.m"
        }
#line 408 "unify_gen.m"
        break;
#line 408 "unify_gen.m"
    }
#line 408 "unify_gen.m"
  }
#line 404 "unify_gen.m"
}

#line 326 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__disjoin_tag_tests_3_p_0(
#line 326 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CurTestRval_4,
#line 326 "unify_gen.m"
  MR_Word ll_backend__unify_gen__OtherTestRvals_5,
#line 326 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__TestRval_6)
#line 326 "unify_gen.m"
{
#line 330 "unify_gen.m"
  while (MR_TRUE)
#line 330 "unify_gen.m"
    {
#line 330 "unify_gen.m"
      /* tailcall optimized into a loop */
#line 330 "unify_gen.m"
      {
#line 330 "unify_gen.m"
        MR_bool ll_backend__unify_gen__succeeded;

#line 330 "unify_gen.m"
        if ((ll_backend__unify_gen__OtherTestRvals_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 331 "unify_gen.m"
          *ll_backend__unify_gen__TestRval_6 = ll_backend__unify_gen__CurTestRval_4;
#line 330 "unify_gen.m"
        else
#line 333 "unify_gen.m"
          {
#line 333 "unify_gen.m"
            MR_Word ll_backend__unify_gen__HeadTestRval_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__OtherTestRvals_5, (MR_Integer) 0)));
#line 333 "unify_gen.m"
            MR_Word ll_backend__unify_gen__TailTestRvals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__OtherTestRvals_5, (MR_Integer) 1)));
#line 333 "unify_gen.m"
            MR_Word ll_backend__unify_gen__NextTestRval_9;

#line 334 "unify_gen.m"
            {
#line 334 "unify_gen.m"
              ll_backend__unify_gen__NextTestRval_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 334 "unify_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__NextTestRval_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 334 "unify_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__NextTestRval_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
#line 334 "unify_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__NextTestRval_9, 2) = ((MR_Box) (ll_backend__unify_gen__CurTestRval_4));
#line 334 "unify_gen.m"
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__NextTestRval_9, 3) = ((MR_Box) (ll_backend__unify_gen__HeadTestRval_7));
#line 334 "unify_gen.m"
            }
#line 335 "unify_gen.m"
            /* direct tailcall eliminated */
#line 335 "unify_gen.m"
            {
#line 335 "unify_gen.m"
              MR_Word ll_backend__unify_gen__CurTestRval__tmp_copy_4 = ll_backend__unify_gen__NextTestRval_9;
#line 335 "unify_gen.m"
              MR_Word ll_backend__unify_gen__OtherTestRvals__tmp_copy_5 = ll_backend__unify_gen__TailTestRvals_8;

#line 335 "unify_gen.m"
              ll_backend__unify_gen__OtherTestRvals_5 = ll_backend__unify_gen__OtherTestRvals__tmp_copy_5;
#line 335 "unify_gen.m"
              ll_backend__unify_gen__CurTestRval_4 = ll_backend__unify_gen__CurTestRval__tmp_copy_4;
#line 335 "unify_gen.m"
            }
#line 335 "unify_gen.m"
            continue;
#line 333 "unify_gen.m"
          }
#line 330 "unify_gen.m"
      }
#line 330 "unify_gen.m"
      break;
#line 330 "unify_gen.m"
    }
#line 326 "unify_gen.m"
}

#line 267 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_test_7_p_0(
#line 267 "unify_gen.m"
  MR_Word ll_backend__unify_gen__VarA_8,
#line 267 "unify_gen.m"
  MR_Word ll_backend__unify_gen__VarB_9,
#line 267 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_10,
#line 267 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_21,
#line 267 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_22,
#line 267 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_23,
#line 267 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_24)
#line 267 "unify_gen.m"
{
#line 270 "unify_gen.m"
  {
#line 270 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 270 "unify_gen.m"
    MR_Word ll_backend__unify_gen__IsDummy_13;

#line 271 "unify_gen.m"
    {
#line 271 "unify_gen.m"
      ll_backend__unify_gen__IsDummy_13 = ll_backend__code_info__variable_is_of_dummy_type_2_f_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_21, ll_backend__unify_gen__VarA_8);
    }
#line 275 "unify_gen.m"
#line 275 "unify_gen.m"
    switch (ll_backend__unify_gen__IsDummy_13) {
#line 275 "unify_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 275 "unify_gen.m"
      case (MR_Integer) 0:
#line 273 "unify_gen.m"
        {
#line 274 "unify_gen.m"
          {
#line 274 "unify_gen.m"
            *ll_backend__unify_gen__Code_10 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
          }
#line 273 "unify_gen.m"
          *ll_backend__unify_gen__STATE_VARIABLE_CI_22 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_21;
#line 273 "unify_gen.m"
          *ll_backend__unify_gen__STATE_VARIABLE_CLD_24 = ll_backend__unify_gen__STATE_VARIABLE_CLD_0_23;
#line 273 "unify_gen.m"
        }
#line 275 "unify_gen.m"
        break;
#line 275 "unify_gen.m"
      case (MR_Integer) 1:
#line 276 "unify_gen.m"
        {
#line 276 "unify_gen.m"
          MR_Word ll_backend__unify_gen__TypeCtorInfo_34_34;
#line 276 "unify_gen.m"
          MR_Word ll_backend__unify_gen__CodeA_14;
#line 276 "unify_gen.m"
          MR_Word ll_backend__unify_gen__ValA_15;
#line 276 "unify_gen.m"
          MR_Word ll_backend__unify_gen__CodeB_16;
#line 276 "unify_gen.m"
          MR_Word ll_backend__unify_gen__ValB_17;
#line 276 "unify_gen.m"
          MR_Word ll_backend__unify_gen__Type_18;
#line 276 "unify_gen.m"
          MR_Word ll_backend__unify_gen__Op_19;
#line 276 "unify_gen.m"
          MR_Word ll_backend__unify_gen__FailCode_20;
#line 276 "unify_gen.m"
          MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_25_25;
#line 276 "unify_gen.m"
          MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_26_26;
#line 276 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_29_29;
#line 276 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_32_32;
#line 280 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_27_27;

#line 277 "unify_gen.m"
          {
#line 277 "unify_gen.m"
            ll_backend__code_loc_dep__produce_variable_6_p_0(ll_backend__unify_gen__VarA_8, &ll_backend__unify_gen__CodeA_14, &ll_backend__unify_gen__ValA_15, ll_backend__unify_gen__STATE_VARIABLE_CI_0_21, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_23, &ll_backend__unify_gen__STATE_VARIABLE_CLD_25_25);
          }
#line 278 "unify_gen.m"
          {
#line 278 "unify_gen.m"
            ll_backend__code_loc_dep__produce_variable_6_p_0(ll_backend__unify_gen__VarB_9, &ll_backend__unify_gen__CodeB_16, &ll_backend__unify_gen__ValB_17, ll_backend__unify_gen__STATE_VARIABLE_CI_0_21, ll_backend__unify_gen__STATE_VARIABLE_CLD_25_25, &ll_backend__unify_gen__STATE_VARIABLE_CLD_26_26);
          }
#line 279 "unify_gen.m"
          {
#line 279 "unify_gen.m"
            ll_backend__unify_gen__Type_18 = ll_backend__code_info__variable_type_2_f_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_21, ll_backend__unify_gen__VarA_8);
          }
#line 280 "unify_gen.m"
          ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__Type_18)) == (MR_mktag((MR_Integer) 2)));
#line 280 "unify_gen.m"
          if (ll_backend__unify_gen__succeeded)
#line 280 "unify_gen.m"
            {
#line 280 "unify_gen.m"
              ll_backend__unify_gen__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Type_18, (MR_Integer) 0)));
#line 280 "unify_gen.m"
              ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__V_27_27 == (MR_Integer) 2);
#line 280 "unify_gen.m"
            }
#line 282 "unify_gen.m"
          if (ll_backend__unify_gen__succeeded)
#line 281 "unify_gen.m"
            ll_backend__unify_gen__Op_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16));
#line 282 "unify_gen.m"
          else
#line 284 "unify_gen.m"
            {
#line 282 "unify_gen.m"
              MR_Word ll_backend__unify_gen__V_28_28;

#line 282 "unify_gen.m"
              ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__Type_18)) == (MR_mktag((MR_Integer) 2)));
#line 282 "unify_gen.m"
              if (ll_backend__unify_gen__succeeded)
#line 282 "unify_gen.m"
                {
#line 282 "unify_gen.m"
                  ll_backend__unify_gen__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Type_18, (MR_Integer) 0)));
#line 282 "unify_gen.m"
                  ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__V_28_28 == (MR_Integer) 1);
#line 282 "unify_gen.m"
                }
#line 284 "unify_gen.m"
              if (ll_backend__unify_gen__succeeded)
#line 283 "unify_gen.m"
                ll_backend__unify_gen__Op_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 32));
#line 284 "unify_gen.m"
              else
#line 285 "unify_gen.m"
                ll_backend__unify_gen__Op_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12));
#line 284 "unify_gen.m"
            }
#line 287 "unify_gen.m"
          {
#line 287 "unify_gen.m"
            ll_backend__unify_gen__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 287 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 287 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_29_29, 1) = ((MR_Box) (ll_backend__unify_gen__Op_19));
#line 287 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_29_29, 2) = ((MR_Box) (ll_backend__unify_gen__ValA_15));
#line 287 "unify_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_29_29, 3) = ((MR_Box) (ll_backend__unify_gen__ValB_17));
#line 287 "unify_gen.m"
          }
#line 287 "unify_gen.m"
          {
#line 287 "unify_gen.m"
            ll_backend__code_loc_dep__fail_if_rval_is_false_6_p_0(ll_backend__unify_gen__V_29_29, &ll_backend__unify_gen__FailCode_20, ll_backend__unify_gen__STATE_VARIABLE_CI_0_21, ll_backend__unify_gen__STATE_VARIABLE_CI_22, ll_backend__unify_gen__STATE_VARIABLE_CLD_26_26, ll_backend__unify_gen__STATE_VARIABLE_CLD_24);
          }
#line 18495 "ll_backend.unify_gen.c"
          ll_backend__unify_gen__TypeCtorInfo_34_34 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 288 "unify_gen.m"
          {
#line 288 "unify_gen.m"
            ll_backend__unify_gen__V_32_32 = mercury__cord__f_43_43_2_f_0(ll_backend__unify_gen__TypeCtorInfo_34_34, ll_backend__unify_gen__CodeB_16, ll_backend__unify_gen__FailCode_20);
          }
#line 288 "unify_gen.m"
          {
#line 288 "unify_gen.m"
            *ll_backend__unify_gen__Code_10 = mercury__cord__f_43_43_2_f_0(ll_backend__unify_gen__TypeCtorInfo_34_34, ll_backend__unify_gen__CodeA_14, ll_backend__unify_gen__V_32_32);
          }
#line 276 "unify_gen.m"
        }
#line 275 "unify_gen.m"
        break;
#line 275 "unify_gen.m"
    }
#line 270 "unify_gen.m"
  }
#line 267 "unify_gen.m"
}

#line 247 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_assignment_5_p_0(
#line 247 "unify_gen.m"
  MR_Word ll_backend__unify_gen__VarA_6,
#line 247 "unify_gen.m"
  MR_Word ll_backend__unify_gen__VarB_7,
#line 247 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__HeadVar__3_3,
#line 247 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_9,
#line 247 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_10)
#line 247 "unify_gen.m"
{
#line 250 "unify_gen.m"
  {
#line 250 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;

#line 250 "unify_gen.m"
    {
#line 250 "unify_gen.m"
      *ll_backend__unify_gen__HeadVar__3_3 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
    }
#line 251 "unify_gen.m"
    {
#line 251 "unify_gen.m"
      ll_backend__unify_gen__succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CLD_0_9, ll_backend__unify_gen__VarA_6);
    }
#line 253 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 252 "unify_gen.m"
      {
#line 252 "unify_gen.m"
        ll_backend__code_loc_dep__assign_var_to_var_4_p_0(ll_backend__unify_gen__VarA_6, ll_backend__unify_gen__VarB_7, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_9, ll_backend__unify_gen__STATE_VARIABLE_CLD_10);
#line 252 "unify_gen.m"
        return;
      }
#line 253 "unify_gen.m"
    else
#line 253 "unify_gen.m"
      *ll_backend__unify_gen__STATE_VARIABLE_CLD_10 = ll_backend__unify_gen__STATE_VARIABLE_CLD_0_9;
#line 250 "unify_gen.m"
  }
#line 247 "unify_gen.m"
}

#line 225 "unify_gen.m"
static MR_Box MR_CALL 
ll_backend__unify_gen__get_cons_arg_widths_4_p_0_1(
#line 225 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg,
#line 225 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_1)
#line 225 "unify_gen.m"
{
#line 225 "unify_gen.m"
  {
#line 225 "unify_gen.m"
    MR_Box ll_backend__unify_gen__wrapper_arg_2;
#line 225 "unify_gen.m"
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;
#line 225 "unify_gen.m"
    MR_Word ll_backend__unify_gen__conv0_HeadVar__2_22;

#line 225 "unify_gen.m"
    {
#line 225 "unify_gen.m"
      ll_backend__unify_gen__conv0_HeadVar__2_22 = ll_backend__unify_gen__IntroducedFrom__func__get_cons_arg_widths__225__1_1_f_0(((MR_Word) ll_backend__unify_gen__wrapper_arg_1));
    }
#line 225 "unify_gen.m"
    ll_backend__unify_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__unify_gen__conv0_HeadVar__2_22));
#line 225 "unify_gen.m"
    return ll_backend__unify_gen__wrapper_arg_2;
#line 225 "unify_gen.m"
  }
#line 225 "unify_gen.m"
}

#line 216 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__get_cons_arg_widths_4_p_0(
#line 216 "unify_gen.m"
  MR_Word ll_backend__unify_gen__TypeInfo_for_T_41,
#line 216 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ModuleInfo_5,
#line 216 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConsId_6,
#line 216 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Args_7,
#line 216 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__AllArgWidths_8)
#line 216 "unify_gen.m"
{
#line 237 "unify_gen.m"
  {
#line 237 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__unify_gen__ConsId_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsId_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 237 "unify_gen.m"
    MR_Word ll_backend__unify_gen__ConsDefn_12;
#line 221 "unify_gen.m"
    MR_Word ll_backend__unify_gen__TypeCtor_11;
#line 221 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_9_9;
#line 221 "unify_gen.m"
    MR_Integer ll_backend__unify_gen__V_10_10;

#line 221 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 221 "unify_gen.m"
      {
#line 221 "unify_gen.m"
        ll_backend__unify_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsId_6, (MR_Integer) 1)));
#line 221 "unify_gen.m"
        ll_backend__unify_gen__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsId_6, (MR_Integer) 2)));
#line 221 "unify_gen.m"
        ll_backend__unify_gen__TypeCtor_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsId_6, (MR_Integer) 3)));
#line 222 "unify_gen.m"
        {
#line 222 "unify_gen.m"
          ll_backend__unify_gen__succeeded = check_hlds__type_util__get_cons_defn_4_p_0(ll_backend__unify_gen__ModuleInfo_5, ll_backend__unify_gen__TypeCtor_11, ll_backend__unify_gen__ConsId_6, &ll_backend__unify_gen__ConsDefn_12);
        }
#line 221 "unify_gen.m"
      }
#line 237 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 224 "unify_gen.m"
      {
#line 224 "unify_gen.m"
        MR_Word ll_backend__unify_gen__TypeCtorInfo_42_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
#line 224 "unify_gen.m"
        MR_Word ll_backend__unify_gen__TypeCtorInfo_43_43 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0;
#line 224 "unify_gen.m"
        MR_Word ll_backend__unify_gen__ConsArgs_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ConsDefn_12, (MR_Integer) 6)));
#line 224 "unify_gen.m"
        MR_Word ll_backend__unify_gen__ArgWidths_14;
#line 224 "unify_gen.m"
        MR_Integer ll_backend__unify_gen__NumArgs_16;
#line 224 "unify_gen.m"
        MR_Integer ll_backend__unify_gen__NumConsArgs_17;
#line 224 "unify_gen.m"
        MR_Integer ll_backend__unify_gen__NumExtraArgs_18;
#line 224 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ConsDefn_12, (MR_Integer) 0)));
#line 224 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ConsDefn_12, (MR_Integer) 1)));
#line 224 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ConsDefn_12, (MR_Integer) 2)));
#line 224 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ConsDefn_12, (MR_Integer) 3)));
#line 224 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ConsDefn_12, (MR_Integer) 4)));
#line 224 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ConsDefn_12, (MR_Integer) 5)));
#line 224 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ConsDefn_12, (MR_Integer) 7)));

#line 225 "unify_gen.m"
        {
#line 225 "unify_gen.m"
          ll_backend__unify_gen__ArgWidths_14 = mercury__list__map_2_f_0(ll_backend__unify_gen__TypeCtorInfo_42_42, ll_backend__unify_gen__TypeCtorInfo_43_43, (MR_Word) &ll_backend__unify_gen_scalar_common_2[4], ll_backend__unify_gen__ConsArgs_13);
        }
#line 226 "unify_gen.m"
        {
#line 226 "unify_gen.m"
          mercury__list__length_2_p_0(ll_backend__unify_gen__TypeInfo_for_T_41, ll_backend__unify_gen__Args_7, &ll_backend__unify_gen__NumArgs_16);
        }
#line 227 "unify_gen.m"
        {
#line 227 "unify_gen.m"
          mercury__list__length_2_p_0(ll_backend__unify_gen__TypeCtorInfo_42_42, ll_backend__unify_gen__ConsArgs_13, &ll_backend__unify_gen__NumConsArgs_17);
        }
#line 228 "unify_gen.m"
        ll_backend__unify_gen__NumExtraArgs_18 = (ll_backend__unify_gen__NumArgs_16 - ll_backend__unify_gen__NumConsArgs_17);
#line 229 "unify_gen.m"
        ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__NumExtraArgs_18 == (MR_Integer) 0);
#line 231 "unify_gen.m"
        if (ll_backend__unify_gen__succeeded)
#line 230 "unify_gen.m"
          *ll_backend__unify_gen__AllArgWidths_8 = ll_backend__unify_gen__ArgWidths_14;
#line 231 "unify_gen.m"
        else
#line 234 "unify_gen.m"
          {
#line 231 "unify_gen.m"
            ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__NumExtraArgs_18 > (MR_Integer) 0);
#line 234 "unify_gen.m"
            if (ll_backend__unify_gen__succeeded)
#line 232 "unify_gen.m"
              {
#line 232 "unify_gen.m"
                MR_Word ll_backend__unify_gen__ExtraArgWidths_19;

#line 232 "unify_gen.m"
                {
#line 232 "unify_gen.m"
                  ll_backend__unify_gen__ExtraArgWidths_19 = mercury__list__duplicate_2_f_0(ll_backend__unify_gen__TypeCtorInfo_43_43, ll_backend__unify_gen__NumExtraArgs_18, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
                }
#line 233 "unify_gen.m"
                {
#line 233 "unify_gen.m"
                  *ll_backend__unify_gen__AllArgWidths_8 = mercury__list__f_43_43_2_f_0(ll_backend__unify_gen__TypeCtorInfo_43_43, ll_backend__unify_gen__ExtraArgWidths_19, ll_backend__unify_gen__ArgWidths_14);
                }
#line 232 "unify_gen.m"
              }
#line 234 "unify_gen.m"
            else
#line 235 "unify_gen.m"
              {
#line 235 "unify_gen.m"
                {
#line 235 "unify_gen.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.get_cons_arg_widths\'/4", (MR_String) "too few arguments");
#line 235 "unify_gen.m"
                  return;
                }
#line 235 "unify_gen.m"
              }
#line 234 "unify_gen.m"
          }
#line 224 "unify_gen.m"
      }
#line 237 "unify_gen.m"
    else
#line 238 "unify_gen.m"
      {
#line 238 "unify_gen.m"
        MR_Integer ll_backend__unify_gen__V_28_28;

#line 238 "unify_gen.m"
        {
#line 238 "unify_gen.m"
          ll_backend__unify_gen__V_28_28 = mercury__list__length_1_f_0(ll_backend__unify_gen__TypeInfo_for_T_41, ll_backend__unify_gen__Args_7);
        }
#line 238 "unify_gen.m"
        {
#line 238 "unify_gen.m"
          *ll_backend__unify_gen__AllArgWidths_8 = mercury__list__duplicate_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0, ll_backend__unify_gen__V_28_28, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
        }
#line 238 "unify_gen.m"
      }
#line 237 "unify_gen.m"
  }
#line 216 "unify_gen.m"
}

#line 1697 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_const_structs_4_p_0_1(
#line 1697 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg,
#line 1697 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
#line 1697 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
#line 1697 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_3,
#line 1697 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_4,
#line 1697 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_5)
#line 1697 "unify_gen.m"
{
#line 1697 "unify_gen.m"
  {
#line 1697 "unify_gen.m"
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;
#line 1697 "unify_gen.m"
    MR_Word ll_backend__unify_gen__conv1_STATE_VARIABLE_ConstStructMap_22;
#line 1697 "unify_gen.m"
    MR_Word ll_backend__unify_gen__conv0_STATE_VARIABLE_StaticCellInfo_24;

#line 1697 "unify_gen.m"
    {
#line 1697 "unify_gen.m"
      ll_backend__unify_gen__generate_const_struct_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__unify_gen__wrapper_arg_1), ((MR_Word) ll_backend__unify_gen__wrapper_arg_2), &ll_backend__unify_gen__conv1_STATE_VARIABLE_ConstStructMap_22, ((MR_Word) ll_backend__unify_gen__wrapper_arg_4), &ll_backend__unify_gen__conv0_STATE_VARIABLE_StaticCellInfo_24);
    }
#line 1697 "unify_gen.m"
    *ll_backend__unify_gen__wrapper_arg_3 = ((MR_Box) (ll_backend__unify_gen__conv1_STATE_VARIABLE_ConstStructMap_22));
#line 1697 "unify_gen.m"
    *ll_backend__unify_gen__wrapper_arg_5 = ((MR_Box) (ll_backend__unify_gen__conv0_STATE_VARIABLE_StaticCellInfo_24));
#line 1697 "unify_gen.m"
  }
#line 1697 "unify_gen.m"
}

#line 58 "unify_gen.m"
void MR_CALL 
ll_backend__unify_gen__generate_const_structs_4_p_0(
#line 58 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ModuleInfo_5,
#line 58 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__ConstStructMap_6,
#line 58 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_GlobalData_0_15,
#line 58 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_GlobalData_16)
#line 58 "unify_gen.m"
{
#line 1684 "unify_gen.m"
  {
#line 1684 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 1684 "unify_gen.m"
    MR_Word ll_backend__unify_gen__Globals_8;
#line 1684 "unify_gen.m"
    MR_Word ll_backend__unify_gen__UB_9;
#line 1684 "unify_gen.m"
    MR_Word ll_backend__unify_gen__UnboxedFloats_10;
#line 1684 "unify_gen.m"
    MR_Word ll_backend__unify_gen__ConstStructDb_11;
#line 1684 "unify_gen.m"
    MR_Word ll_backend__unify_gen__ConstStructs_12;
#line 1684 "unify_gen.m"
    MR_Word ll_backend__unify_gen__StaticCellInfo0_13;
#line 1684 "unify_gen.m"
    MR_Word ll_backend__unify_gen__StaticCellInfo_14;
#line 1684 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_18_18;
#line 1684 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_19_19;
#line 1697 "unify_gen.m"
    MR_Box ll_backend__unify_gen__conv3_ConstStructMap_6;
#line 1697 "unify_gen.m"
    MR_Box ll_backend__unify_gen__conv2_StaticCellInfo_14;

#line 1685 "unify_gen.m"
    {
#line 1685 "unify_gen.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__unify_gen__ModuleInfo_5, &ll_backend__unify_gen__Globals_8);
    }
#line 1686 "unify_gen.m"
    {
#line 1686 "unify_gen.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__unify_gen__Globals_8, (MR_Integer) 244, &ll_backend__unify_gen__UB_9);
    }
#line 1690 "unify_gen.m"
#line 1690 "unify_gen.m"
    switch (ll_backend__unify_gen__UB_9) {
#line 1690 "unify_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1690 "unify_gen.m"
      case (MR_Integer) 0:
#line 1692 "unify_gen.m"
        ll_backend__unify_gen__UnboxedFloats_10 = (MR_Integer) 1;
#line 1690 "unify_gen.m"
        break;
#line 1690 "unify_gen.m"
      case (MR_Integer) 1:
#line 1689 "unify_gen.m"
        ll_backend__unify_gen__UnboxedFloats_10 = (MR_Integer) 0;
#line 1690 "unify_gen.m"
        break;
#line 1690 "unify_gen.m"
    }
#line 1694 "unify_gen.m"
    {
#line 1694 "unify_gen.m"
      hlds__hlds_module__module_info_get_const_struct_db_2_p_0(ll_backend__unify_gen__ModuleInfo_5, &ll_backend__unify_gen__ConstStructDb_11);
    }
#line 1695 "unify_gen.m"
    {
#line 1695 "unify_gen.m"
      hlds__const_struct__const_struct_db_get_structs_2_p_0(ll_backend__unify_gen__ConstStructDb_11, &ll_backend__unify_gen__ConstStructs_12);
    }
#line 1696 "unify_gen.m"
    {
#line 1696 "unify_gen.m"
      ll_backend__global_data__global_data_get_static_cell_info_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_GlobalData_0_15, &ll_backend__unify_gen__StaticCellInfo0_13);
    }
#line 1697 "unify_gen.m"
    {
#line 1697 "unify_gen.m"
      ll_backend__unify_gen__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1697 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_18_18, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_4[0]));
#line 1697 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_18_18, 1) = ((MR_Box) (ll_backend__unify_gen__generate_const_structs_4_p_0_1));
#line 1697 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1697 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_18_18, 3) = ((MR_Box) (ll_backend__unify_gen__ModuleInfo_5));
#line 1697 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_18_18, 4) = ((MR_Box) (ll_backend__unify_gen__UnboxedFloats_10));
#line 1697 "unify_gen.m"
    }
#line 1698 "unify_gen.m"
    {
#line 1698 "unify_gen.m"
      ll_backend__unify_gen__V_19_19 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0);
    }
#line 1697 "unify_gen.m"
    {
#line 1697 "unify_gen.m"
      mercury__list__foldl2_6_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_2[0], (MR_Word) &ll_backend__unify_gen_scalar_common_2[1], (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0, ll_backend__unify_gen__V_18_18, ll_backend__unify_gen__ConstStructs_12, ((MR_Box) (ll_backend__unify_gen__V_19_19)), &ll_backend__unify_gen__conv3_ConstStructMap_6, ((MR_Box) (ll_backend__unify_gen__StaticCellInfo0_13)), &ll_backend__unify_gen__conv2_StaticCellInfo_14);
    }
#line 1697 "unify_gen.m"
    *ll_backend__unify_gen__ConstStructMap_6 = ((MR_Word) ll_backend__unify_gen__conv3_ConstStructMap_6);
#line 1697 "unify_gen.m"
    ll_backend__unify_gen__StaticCellInfo_14 = ((MR_Word) ll_backend__unify_gen__conv2_StaticCellInfo_14);
#line 1699 "unify_gen.m"
    {
#line 1699 "unify_gen.m"
      ll_backend__global_data__global_data_set_static_cell_info_3_p_0(ll_backend__unify_gen__StaticCellInfo_14, ll_backend__unify_gen__STATE_VARIABLE_GlobalData_0_15, ll_backend__unify_gen__STATE_VARIABLE_GlobalData_16);
#line 1699 "unify_gen.m"
      return;
    }
#line 1684 "unify_gen.m"
  }
#line 58 "unify_gen.m"
}

#line 55 "unify_gen.m"
void MR_CALL 
ll_backend__unify_gen__generate_ground_term_6_p_0(
#line 55 "unify_gen.m"
  MR_Word ll_backend__unify_gen__TermVar_7,
#line 55 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Goal_8,
#line 55 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_31,
#line 55 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_32,
#line 55 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_33,
#line 55 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_34)
#line 55 "unify_gen.m"
{
#line 1929 "unify_gen.m"
  {
#line 1929 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 1929 "unify_gen.m"
    MR_Word ll_backend__unify_gen__GoalExpr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Goal_8, (MR_Integer) 0)));
#line 1929 "unify_gen.m"
    MR_Word ll_backend__unify_gen__GoalInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Goal_8, (MR_Integer) 1)));
#line 1929 "unify_gen.m"
    MR_Word ll_backend__unify_gen__NonLocals_13;
#line 1929 "unify_gen.m"
    MR_Word ll_backend__unify_gen__NonLocalList_14;

#line 1931 "unify_gen.m"
    {
#line 1931 "unify_gen.m"
      ll_backend__unify_gen__NonLocals_13 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(ll_backend__unify_gen__GoalInfo_12);
    }
#line 1932 "unify_gen.m"
    {
#line 1932 "unify_gen.m"
      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__unify_gen__NonLocals_13, &ll_backend__unify_gen__NonLocalList_14);
    }
#line 1937 "unify_gen.m"
    if ((ll_backend__unify_gen__NonLocalList_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1934 "unify_gen.m"
      {
#line 1934 "unify_gen.m"
        *ll_backend__unify_gen__STATE_VARIABLE_CI_32 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_31;
#line 1934 "unify_gen.m"
        *ll_backend__unify_gen__STATE_VARIABLE_CLD_34 = ll_backend__unify_gen__STATE_VARIABLE_CLD_0_33;
#line 1934 "unify_gen.m"
      }
#line 1937 "unify_gen.m"
    else
#line 1937 "unify_gen.m"
      {
#line 1937 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__NonLocalList_14, (MR_Integer) 1)));
#line 1937 "unify_gen.m"
        MR_Word ll_backend__unify_gen__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__NonLocalList_14, (MR_Integer) 0)));

#line 1937 "unify_gen.m"
        if ((ll_backend__unify_gen__V_59_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1961 "unify_gen.m"
          {
#line 1939 "unify_gen.m"
            {
#line 1939 "unify_gen.m"
              ll_backend__unify_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], ((MR_Box) (ll_backend__unify_gen__V_60_60)), ((MR_Box) (ll_backend__unify_gen__TermVar_7)));
            }
#line 1961 "unify_gen.m"
            if (ll_backend__unify_gen__succeeded)
#line 1958 "unify_gen.m"
              {
#line 1958 "unify_gen.m"
                MR_Word ll_backend__unify_gen__Conjuncts_16;
#line 1940 "unify_gen.m"
                MR_Word ll_backend__unify_gen__V_40_40;

#line 1940 "unify_gen.m"
                ll_backend__unify_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__unify_gen__GoalExpr_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__GoalExpr_11, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1940 "unify_gen.m"
                if (ll_backend__unify_gen__succeeded)
#line 1940 "unify_gen.m"
                  {
#line 1940 "unify_gen.m"
                    ll_backend__unify_gen__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__GoalExpr_11, (MR_Integer) 1)));
#line 1940 "unify_gen.m"
                    ll_backend__unify_gen__Conjuncts_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__GoalExpr_11, (MR_Integer) 2)));
#line 1940 "unify_gen.m"
                    ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__V_40_40 == (MR_Integer) 0);
#line 1940 "unify_gen.m"
                  }
#line 1958 "unify_gen.m"
                if (ll_backend__unify_gen__succeeded)
#line 1941 "unify_gen.m"
                  {
#line 1941 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__TypeInfo_56_56;
#line 1941 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__TypeCtorInfo_57_57;
#line 1941 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__ModuleInfo_17;
#line 1941 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__ExprnOpts_18;
#line 1941 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__UnboxedFloats_19;
#line 1941 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__StaticCellInfo0_20;
#line 1941 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__ActiveMap0_21;
#line 1941 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__StaticCellInfo_22;
#line 1941 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__ActiveMap_23;
#line 1941 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__ActivePairs_24;
#line 1955 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__GroundTerm_25;
#line 1950 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__TypeInfo_62_62;
#line 1950 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__V_41_41;
#line 1950 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__V_42_42;
#line 1950 "unify_gen.m"
                    MR_Word ll_backend__unify_gen__V_58_58;

#line 1941 "unify_gen.m"
                    {
#line 1941 "unify_gen.m"
                      ll_backend__code_info__get_module_info_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_31, &ll_backend__unify_gen__ModuleInfo_17);
                    }
#line 1942 "unify_gen.m"
                    {
#line 1942 "unify_gen.m"
                      ll_backend__code_info__get_exprn_opts_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_31, &ll_backend__unify_gen__ExprnOpts_18);
                    }
#line 1943 "unify_gen.m"
                    {
#line 1943 "unify_gen.m"
                      ll_backend__unify_gen__UnboxedFloats_19 = ll_backend__llds__get_unboxed_floats_1_f_0(ll_backend__unify_gen__ExprnOpts_18);
                    }
#line 1944 "unify_gen.m"
                    {
#line 1944 "unify_gen.m"
                      ll_backend__code_info__get_static_cell_info_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_31, &ll_backend__unify_gen__StaticCellInfo0_20);
                    }
#line 19077 "ll_backend.unify_gen.c"
                    ll_backend__unify_gen__TypeInfo_56_56 = (MR_Word) &ll_backend__unify_gen_scalar_common_1[0];
#line 19079 "ll_backend.unify_gen.c"
                    ll_backend__unify_gen__TypeCtorInfo_57_57 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0;
#line 1945 "unify_gen.m"
                    {
#line 1945 "unify_gen.m"
                      mercury__map__init_1_p_0(ll_backend__unify_gen__TypeInfo_56_56, ll_backend__unify_gen__TypeCtorInfo_57_57, &ll_backend__unify_gen__ActiveMap0_21);
                    }
#line 1946 "unify_gen.m"
                    {
#line 1946 "unify_gen.m"
                      ll_backend__unify_gen__generate_ground_term_conjuncts_7_p_0(ll_backend__unify_gen__ModuleInfo_17, ll_backend__unify_gen__Conjuncts_16, ll_backend__unify_gen__UnboxedFloats_19, ll_backend__unify_gen__StaticCellInfo0_20, &ll_backend__unify_gen__StaticCellInfo_22, ll_backend__unify_gen__ActiveMap0_21, &ll_backend__unify_gen__ActiveMap_23);
                    }
#line 1949 "unify_gen.m"
                    {
#line 1949 "unify_gen.m"
                      mercury__map__to_assoc_list_2_p_0(ll_backend__unify_gen__TypeInfo_56_56, ll_backend__unify_gen__TypeCtorInfo_57_57, ll_backend__unify_gen__ActiveMap_23, &ll_backend__unify_gen__ActivePairs_24);
                    }
#line 1950 "unify_gen.m"
                    ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__ActivePairs_24)) == (MR_mktag((MR_Integer) 1)));
#line 1950 "unify_gen.m"
                    if (ll_backend__unify_gen__succeeded)
#line 1950 "unify_gen.m"
                      {
#line 1950 "unify_gen.m"
                        ll_backend__unify_gen__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ActivePairs_24, (MR_Integer) 0)));
#line 1950 "unify_gen.m"
                        ll_backend__unify_gen__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ActivePairs_24, (MR_Integer) 1)));
#line 1950 "unify_gen.m"
                        ll_backend__unify_gen__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_41_41, (MR_Integer) 0)));
#line 1950 "unify_gen.m"
                        ll_backend__unify_gen__GroundTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_41_41, (MR_Integer) 1)));
#line 19110 "ll_backend.unify_gen.c"
                        ll_backend__unify_gen__TypeInfo_62_62 = (MR_Word) &ll_backend__unify_gen_scalar_common_1[0];
#line 1950 "unify_gen.m"
                        {
#line 1950 "unify_gen.m"
                          ll_backend__unify_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__unify_gen__TypeInfo_62_62, ((MR_Box) (ll_backend__unify_gen__TermVar_7)), ((MR_Box) (ll_backend__unify_gen__V_58_58)));
                        }
#line 1950 "unify_gen.m"
                        if (ll_backend__unify_gen__succeeded)
#line 1950 "unify_gen.m"
                          ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__V_42_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1950 "unify_gen.m"
                      }
#line 1955 "unify_gen.m"
                    if (ll_backend__unify_gen__succeeded)
#line 1951 "unify_gen.m"
                      {
#line 1951 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__Rval_26;
#line 1951 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_43_43;
#line 1953 "unify_gen.m"
                        MR_Word ll_backend__unify_gen__V_27_27;

#line 1951 "unify_gen.m"
                        {
#line 1951 "unify_gen.m"
                          ll_backend__code_loc_dep__add_forward_live_vars_3_p_0(ll_backend__unify_gen__NonLocals_13, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_33, &ll_backend__unify_gen__STATE_VARIABLE_CLD_43_43);
                        }
#line 1952 "unify_gen.m"
                        {
#line 1952 "unify_gen.m"
                          ll_backend__code_info__set_static_cell_info_3_p_0(ll_backend__unify_gen__StaticCellInfo_22, ll_backend__unify_gen__STATE_VARIABLE_CI_0_31, ll_backend__unify_gen__STATE_VARIABLE_CI_32);
                        }
#line 1953 "unify_gen.m"
                        ll_backend__unify_gen__Rval_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__GroundTerm_25, (MR_Integer) 0)));
#line 1953 "unify_gen.m"
                        ll_backend__unify_gen__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__GroundTerm_25, (MR_Integer) 1)));
#line 1954 "unify_gen.m"
                        {
#line 1954 "unify_gen.m"
                          ll_backend__code_loc_dep__assign_const_to_var_5_p_0(ll_backend__unify_gen__TermVar_7, ll_backend__unify_gen__Rval_26, *ll_backend__unify_gen__STATE_VARIABLE_CI_32, ll_backend__unify_gen__STATE_VARIABLE_CLD_43_43, ll_backend__unify_gen__STATE_VARIABLE_CLD_34);
#line 1954 "unify_gen.m"
                          return;
                        }
#line 1951 "unify_gen.m"
                      }
#line 1955 "unify_gen.m"
                    else
#line 1956 "unify_gen.m"
                      {
#line 1956 "unify_gen.m"
                        {
#line 1956 "unify_gen.m"
                          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term\'/6", (MR_String) "no active pairs");
#line 1956 "unify_gen.m"
                          return;
                        }
#line 1956 "unify_gen.m"
                      }
#line 1941 "unify_gen.m"
                  }
#line 1958 "unify_gen.m"
                else
#line 1959 "unify_gen.m"
                  {
#line 1959 "unify_gen.m"
                    {
#line 1959 "unify_gen.m"
                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term\'/6", (MR_String) "malformed goal");
#line 1959 "unify_gen.m"
                      return;
                    }
#line 1959 "unify_gen.m"
                  }
#line 1958 "unify_gen.m"
              }
#line 1961 "unify_gen.m"
            else
#line 1962 "unify_gen.m"
              {
#line 1962 "unify_gen.m"
                {
#line 1962 "unify_gen.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term\'/6", (MR_String) "unexpected nonlocal");
#line 1962 "unify_gen.m"
                  return;
                }
#line 1962 "unify_gen.m"
              }
#line 1961 "unify_gen.m"
          }
#line 1937 "unify_gen.m"
        else
#line 1965 "unify_gen.m"
          {
#line 1966 "unify_gen.m"
            {
#line 1966 "unify_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term\'/6", (MR_String) "unexpected nonlocals");
#line 1966 "unify_gen.m"
              return;
            }
#line 1965 "unify_gen.m"
          }
#line 1937 "unify_gen.m"
      }
#line 1929 "unify_gen.m"
  }
#line 55 "unify_gen.m"
}

#line 50 "unify_gen.m"
void MR_CALL 
ll_backend__unify_gen__generate_raw_tag_test_case_11_p_0(
#line 50 "unify_gen.m"
  MR_Word ll_backend__unify_gen__VarRval_12,
#line 50 "unify_gen.m"
  MR_Word ll_backend__unify_gen__VarType_13,
#line 50 "unify_gen.m"
  MR_String ll_backend__unify_gen__VarName_14,
#line 50 "unify_gen.m"
  MR_Word ll_backend__unify_gen__MainTaggedConsId_15,
#line 50 "unify_gen.m"
  MR_Word ll_backend__unify_gen__OtherTaggedConsIds_16,
#line 50 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CheaperTagTest_17,
#line 50 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Sense_18,
#line 50 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__ElseLabel_19,
#line 50 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_20,
#line 50 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_34,
#line 50 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_35)
#line 50 "unify_gen.m"
{
#line 297 "unify_gen.m"
  {
#line 297 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;

#line 297 "unify_gen.m"
    {
#line 297 "unify_gen.m"
      ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_97_119_95_116_97_103_95_116_101_115_116_95_99_97_115_101_95_95_91_50_93_95_48_11_p_0(ll_backend__unify_gen__VarRval_12, ll_backend__unify_gen__VarName_14, ll_backend__unify_gen__MainTaggedConsId_15, ll_backend__unify_gen__OtherTaggedConsIds_16, ll_backend__unify_gen__CheaperTagTest_17, ll_backend__unify_gen__Sense_18, ll_backend__unify_gen__ElseLabel_19, ll_backend__unify_gen__Code_20, ll_backend__unify_gen__STATE_VARIABLE_CI_0_34, ll_backend__unify_gen__STATE_VARIABLE_CI_35);
#line 297 "unify_gen.m"
      return;
    }
#line 297 "unify_gen.m"
  }
#line 50 "unify_gen.m"
}

#line 46 "unify_gen.m"
void MR_CALL 
ll_backend__unify_gen__generate_tag_test_10_p_0(
#line 46 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Var_11,
#line 46 "unify_gen.m"
  MR_Word ll_backend__unify_gen__ConsId_12,
#line 46 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CheaperTagTest_13,
#line 46 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Sense_14,
#line 46 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__ElseLabel_15,
#line 46 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_16,
#line 46 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_24,
#line 46 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_25,
#line 46 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_26,
#line 46 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_27)
#line 46 "unify_gen.m"
{
#line 341 "unify_gen.m"
  {
#line 341 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;
#line 341 "unify_gen.m"
    MR_Word ll_backend__unify_gen__VarCode_19;
#line 341 "unify_gen.m"
    MR_Word ll_backend__unify_gen__VarRval_20;
#line 341 "unify_gen.m"
    MR_String ll_backend__unify_gen__VarName_22;
#line 341 "unify_gen.m"
    MR_Word ll_backend__unify_gen__TestCode_23;
#line 341 "unify_gen.m"
    MR_String ll_backend__unify_gen__ConsIdName_44;
#line 341 "unify_gen.m"
    MR_String ll_backend__unify_gen__Comment_49;
#line 341 "unify_gen.m"
    MR_Word ll_backend__unify_gen__TestRval_51;
#line 341 "unify_gen.m"
    MR_Word ll_backend__unify_gen__TheRval_54;
#line 341 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_66_66;
#line 341 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_67_67;
#line 341 "unify_gen.m"
    MR_Word ll_backend__unify_gen__V_68_68;
#line 343 "unify_gen.m"
    MR_Word ll_backend__unify_gen__VarType_21;
#line 370 "unify_gen.m"
    MR_Word ll_backend__unify_gen__CheapConsTag_48;
#line 363 "unify_gen.m"
    MR_Word ll_backend__unify_gen__ExpensiveConsId_45;
#line 362 "unify_gen.m"
    MR_Word ll_backend__unify_gen___ExpensiveConsTag_46;
#line 362 "unify_gen.m"
    MR_Word ll_backend__unify_gen___CheapConsId_47;

#line 342 "unify_gen.m"
    {
#line 342 "unify_gen.m"
      ll_backend__code_loc_dep__produce_variable_6_p_0(ll_backend__unify_gen__Var_11, &ll_backend__unify_gen__VarCode_19, &ll_backend__unify_gen__VarRval_20, ll_backend__unify_gen__STATE_VARIABLE_CI_0_24, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_26, ll_backend__unify_gen__STATE_VARIABLE_CLD_27);
    }
#line 343 "unify_gen.m"
    {
#line 343 "unify_gen.m"
      ll_backend__unify_gen__VarType_21 = ll_backend__code_info__variable_type_2_f_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_24, ll_backend__unify_gen__Var_11);
    }
#line 344 "unify_gen.m"
    {
#line 344 "unify_gen.m"
      ll_backend__unify_gen__VarName_22 = ll_backend__code_info__variable_name_2_f_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_24, ll_backend__unify_gen__Var_11);
    }
#line 356 "unify_gen.m"
    {
#line 356 "unify_gen.m"
      ll_backend__unify_gen__ConsIdName_44 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(ll_backend__unify_gen__ConsId_12);
    }
#line 362 "unify_gen.m"
    ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__CheaperTagTest_13)) == (MR_mktag((MR_Integer) 1)));
#line 362 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 362 "unify_gen.m"
      {
#line 362 "unify_gen.m"
        ll_backend__unify_gen__ExpensiveConsId_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CheaperTagTest_13, (MR_Integer) 0)));
#line 362 "unify_gen.m"
        ll_backend__unify_gen___ExpensiveConsTag_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CheaperTagTest_13, (MR_Integer) 1)));
#line 362 "unify_gen.m"
        ll_backend__unify_gen___CheapConsId_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CheaperTagTest_13, (MR_Integer) 2)));
#line 362 "unify_gen.m"
        ll_backend__unify_gen__CheapConsTag_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CheaperTagTest_13, (MR_Integer) 3)));
#line 364 "unify_gen.m"
        {
#line 364 "unify_gen.m"
          ll_backend__unify_gen__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ll_backend__unify_gen__ConsId_12, ll_backend__unify_gen__ExpensiveConsId_45);
        }
#line 362 "unify_gen.m"
      }
#line 370 "unify_gen.m"
    if (ll_backend__unify_gen__succeeded)
#line 367 "unify_gen.m"
      {
#line 367 "unify_gen.m"
        MR_Word ll_backend__unify_gen__NegTestRval_50;
#line 367 "unify_gen.m"
        MR_String ll_backend__unify_gen__V_55_55;
#line 367 "unify_gen.m"
        MR_String ll_backend__unify_gen__V_56_56;
#line 367 "unify_gen.m"
        MR_String ll_backend__unify_gen__V_57_57;
#line 367 "unify_gen.m"
        MR_String ll_backend__unify_gen__V_59_59;

#line 397 "unify_gen.m"
#line 397 "unify_gen.m"
        switch (ll_backend__unify_gen__Sense_14) {
#line 397 "unify_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 397 "unify_gen.m"
          case (MR_Integer) 1:
#line 400 "unify_gen.m"
            ll_backend__unify_gen__V_55_55 = (MR_String) "branch away unless ";
#line 397 "unify_gen.m"
            break;
#line 397 "unify_gen.m"
          case (MR_Integer) 0:
#line 398 "unify_gen.m"
            ll_backend__unify_gen__V_55_55 = (MR_String) "branch away if ";
#line 397 "unify_gen.m"
            break;
#line 397 "unify_gen.m"
        }
#line 367 "unify_gen.m"
        {
#line 367 "unify_gen.m"
          ll_backend__unify_gen__V_59_59 = mercury__string__f_43_43_2_f_0(ll_backend__unify_gen__ConsIdName_44, (MR_String) " (inverted test)");
        }
#line 367 "unify_gen.m"
        {
#line 367 "unify_gen.m"
          ll_backend__unify_gen__V_57_57 = mercury__string__f_43_43_2_f_0((MR_String) " has functor ", ll_backend__unify_gen__V_59_59);
        }
#line 366 "unify_gen.m"
        {
#line 366 "unify_gen.m"
          ll_backend__unify_gen__V_56_56 = mercury__string__f_43_43_2_f_0(ll_backend__unify_gen__VarName_22, ll_backend__unify_gen__V_57_57);
        }
#line 366 "unify_gen.m"
        {
#line 366 "unify_gen.m"
          ll_backend__unify_gen__Comment_49 = mercury__string__f_43_43_2_f_0(ll_backend__unify_gen__V_55_55, ll_backend__unify_gen__V_56_56);
        }
#line 368 "unify_gen.m"
        {
#line 368 "unify_gen.m"
          ll_backend__unify_gen__raw_tag_test_3_p_0(ll_backend__unify_gen__VarRval_20, ll_backend__unify_gen__CheapConsTag_48, &ll_backend__unify_gen__NegTestRval_50);
        }
#line 369 "unify_gen.m"
        {
#line 369 "unify_gen.m"
          ll_backend__code_util__neg_rval_2_p_0(ll_backend__unify_gen__NegTestRval_50, &ll_backend__unify_gen__TestRval_51);
        }
#line 367 "unify_gen.m"
      }
#line 370 "unify_gen.m"
    else
#line 372 "unify_gen.m"
      {
#line 372 "unify_gen.m"
        MR_Word ll_backend__unify_gen__ConsTag_52;
#line 372 "unify_gen.m"
        MR_Word ll_backend__unify_gen__ModuleInfo_53;
#line 372 "unify_gen.m"
        MR_String ll_backend__unify_gen__V_61_61;
#line 372 "unify_gen.m"
        MR_String ll_backend__unify_gen__V_62_62;
#line 372 "unify_gen.m"
        MR_String ll_backend__unify_gen__V_63_63;

#line 397 "unify_gen.m"
#line 397 "unify_gen.m"
        switch (ll_backend__unify_gen__Sense_14) {
#line 397 "unify_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 397 "unify_gen.m"
          case (MR_Integer) 1:
#line 400 "unify_gen.m"
            ll_backend__unify_gen__V_61_61 = (MR_String) "branch away unless ";
#line 397 "unify_gen.m"
            break;
#line 397 "unify_gen.m"
          case (MR_Integer) 0:
#line 398 "unify_gen.m"
            ll_backend__unify_gen__V_61_61 = (MR_String) "branch away if ";
#line 397 "unify_gen.m"
            break;
#line 397 "unify_gen.m"
        }
#line 372 "unify_gen.m"
        {
#line 372 "unify_gen.m"
          ll_backend__unify_gen__V_63_63 = mercury__string__f_43_43_2_f_0((MR_String) " has functor ", ll_backend__unify_gen__ConsIdName_44);
        }
#line 371 "unify_gen.m"
        {
#line 371 "unify_gen.m"
          ll_backend__unify_gen__V_62_62 = mercury__string__f_43_43_2_f_0(ll_backend__unify_gen__VarName_22, ll_backend__unify_gen__V_63_63);
        }
#line 371 "unify_gen.m"
        {
#line 371 "unify_gen.m"
          ll_backend__unify_gen__Comment_49 = mercury__string__f_43_43_2_f_0(ll_backend__unify_gen__V_61_61, ll_backend__unify_gen__V_62_62);
        }
#line 378 "unify_gen.m"
        {
#line 378 "unify_gen.m"
          ll_backend__code_info__get_module_info_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_24, &ll_backend__unify_gen__ModuleInfo_53);
        }
#line 379 "unify_gen.m"
        {
#line 379 "unify_gen.m"
          ll_backend__unify_gen__ConsTag_52 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ll_backend__unify_gen__ModuleInfo_53, ll_backend__unify_gen__ConsId_12);
        }
#line 381 "unify_gen.m"
        {
#line 381 "unify_gen.m"
          ll_backend__unify_gen__raw_tag_test_3_p_0(ll_backend__unify_gen__VarRval_20, ll_backend__unify_gen__ConsTag_52, &ll_backend__unify_gen__TestRval_51);
        }
#line 372 "unify_gen.m"
      }
#line 383 "unify_gen.m"
    {
#line 383 "unify_gen.m"
      ll_backend__code_info__get_next_label_3_p_0(ll_backend__unify_gen__ElseLabel_15, ll_backend__unify_gen__STATE_VARIABLE_CI_0_24, ll_backend__unify_gen__STATE_VARIABLE_CI_25);
    }
#line 387 "unify_gen.m"
#line 387 "unify_gen.m"
    switch (ll_backend__unify_gen__Sense_14) {
#line 387 "unify_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 387 "unify_gen.m"
      case (MR_Integer) 1:
#line 389 "unify_gen.m"
        {
#line 389 "unify_gen.m"
          ll_backend__code_util__neg_rval_2_p_0(ll_backend__unify_gen__TestRval_51, &ll_backend__unify_gen__TheRval_54);
        }
#line 387 "unify_gen.m"
        break;
#line 387 "unify_gen.m"
      case (MR_Integer) 0:
#line 386 "unify_gen.m"
        ll_backend__unify_gen__TheRval_54 = ll_backend__unify_gen__TestRval_51;
#line 387 "unify_gen.m"
        break;
#line 387 "unify_gen.m"
    }
#line 392 "unify_gen.m"
    {
#line 392 "unify_gen.m"
      ll_backend__unify_gen__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 392 "unify_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__unify_gen__V_68_68, 0) = ((MR_Box) (*ll_backend__unify_gen__ElseLabel_15));
#line 392 "unify_gen.m"
    }
#line 392 "unify_gen.m"
    {
#line 392 "unify_gen.m"
      ll_backend__unify_gen__V_67_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 392 "unify_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_67_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 392 "unify_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_67_67, 1) = ((MR_Box) (ll_backend__unify_gen__TheRval_54));
#line 392 "unify_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_67_67, 2) = ((MR_Box) (ll_backend__unify_gen__V_68_68));
#line 392 "unify_gen.m"
    }
#line 392 "unify_gen.m"
    {
#line 392 "unify_gen.m"
      ll_backend__unify_gen__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 392 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_66_66, 0) = ((MR_Box) (ll_backend__unify_gen__V_67_67));
#line 392 "unify_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_66_66, 1) = ((MR_Box) (ll_backend__unify_gen__Comment_49));
#line 392 "unify_gen.m"
    }
#line 391 "unify_gen.m"
    {
#line 391 "unify_gen.m"
      ll_backend__unify_gen__TestCode_23 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__unify_gen__V_66_66)));
    }
#line 347 "unify_gen.m"
    {
#line 347 "unify_gen.m"
      *ll_backend__unify_gen__Code_16 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__unify_gen__VarCode_19, ll_backend__unify_gen__TestCode_23);
    }
#line 341 "unify_gen.m"
  }
#line 46 "unify_gen.m"
}

#line 188 "unify_gen.m"
static void MR_CALL 
ll_backend__unify_gen__generate_unification_8_p_0_1(
#line 188 "unify_gen.m"
  MR_Box ll_backend__unify_gen__closure_arg,
#line 188 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
#line 188 "unify_gen.m"
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
#line 188 "unify_gen.m"
  MR_Box * ll_backend__unify_gen__wrapper_arg_3)
#line 188 "unify_gen.m"
{
#line 188 "unify_gen.m"
  {
#line 188 "unify_gen.m"
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;
#line 188 "unify_gen.m"
    MR_Word ll_backend__unify_gen__conv0_HeadVar__3_3;

#line 188 "unify_gen.m"
    {
#line 188 "unify_gen.m"
      ll_backend__code_loc_dep__release_reg_3_p_0(((MR_Word) ll_backend__unify_gen__wrapper_arg_1), ((MR_Word) ll_backend__unify_gen__wrapper_arg_2), &ll_backend__unify_gen__conv0_HeadVar__3_3);
    }
#line 188 "unify_gen.m"
    *ll_backend__unify_gen__wrapper_arg_3 = ((MR_Box) (ll_backend__unify_gen__conv0_HeadVar__3_3));
#line 188 "unify_gen.m"
  }
#line 188 "unify_gen.m"
}

#line 42 "unify_gen.m"
void MR_CALL 
ll_backend__unify_gen__generate_unification_8_p_0(
#line 42 "unify_gen.m"
  MR_Word ll_backend__unify_gen__CodeModel_9,
#line 42 "unify_gen.m"
  MR_Word ll_backend__unify_gen__Uni_10,
#line 42 "unify_gen.m"
  MR_Word ll_backend__unify_gen__GoalInfo_11,
#line 42 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__Code_12,
#line 42 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_44,
#line 42 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_45,
#line 42 "unify_gen.m"
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_46,
#line 42 "unify_gen.m"
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_47)
#line 42 "unify_gen.m"
{
#line 124 "unify_gen.m"
  {
#line 124 "unify_gen.m"
    MR_bool ll_backend__unify_gen__succeeded;

#line 127 "unify_gen.m"
#line 127 "unify_gen.m"
    switch (ll_backend__unify_gen__CodeModel_9) {
#line 127 "unify_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 127 "unify_gen.m"
      case (MR_Integer) 0:
#line 126 "unify_gen.m"
        {
#line 126 "unify_gen.m"
        }
#line 127 "unify_gen.m"
        break;
#line 127 "unify_gen.m"
      case (MR_Integer) 2:
#line 130 "unify_gen.m"
        {
#line 131 "unify_gen.m"
          {
#line 131 "unify_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_unification\'/8", (MR_String) "nondet unification");
#line 131 "unify_gen.m"
            return;
          }
#line 130 "unify_gen.m"
        }
#line 127 "unify_gen.m"
        break;
#line 127 "unify_gen.m"
      case (MR_Integer) 1:
#line 128 "unify_gen.m"
        {
#line 128 "unify_gen.m"
        }
#line 127 "unify_gen.m"
        break;
#line 127 "unify_gen.m"
    }
#line 140 "unify_gen.m"
#line 140 "unify_gen.m"
    switch (MR_tag((MR_Word) ll_backend__unify_gen__Uni_10)) {
#line 140 "unify_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 140 "unify_gen.m"
      case (MR_Integer) 0:
#line 141 "unify_gen.m"
        {
#line 141 "unify_gen.m"
          MR_Word ll_backend__unify_gen__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Uni_10, (MR_Integer) 0)));
#line 141 "unify_gen.m"
          MR_Word ll_backend__unify_gen__ConsId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Uni_10, (MR_Integer) 1)));
#line 141 "unify_gen.m"
          MR_Word ll_backend__unify_gen__Args_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Uni_10, (MR_Integer) 2)));
#line 141 "unify_gen.m"
          MR_Word ll_backend__unify_gen__Modes_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Uni_10, (MR_Integer) 3)));
#line 141 "unify_gen.m"
          MR_Word ll_backend__unify_gen__HowToConstruct_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Uni_10, (MR_Integer) 4)));
#line 141 "unify_gen.m"
          MR_Word ll_backend__unify_gen__SubInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Uni_10, (MR_Integer) 6)));
#line 141 "unify_gen.m"
          MR_Word ll_backend__unify_gen__MaybeTakeAddr_24;
#line 141 "unify_gen.m"
          MR_Word ll_backend__unify_gen__MaybeSize_25;
#line 141 "unify_gen.m"
          MR_Word ll_backend__unify_gen__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Uni_10, (MR_Integer) 5)));

#line 146 "unify_gen.m"
          if ((ll_backend__unify_gen__SubInfo_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 143 "unify_gen.m"
            {
#line 144 "unify_gen.m"
              ll_backend__unify_gen__MaybeTakeAddr_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 145 "unify_gen.m"
              ll_backend__unify_gen__MaybeSize_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 143 "unify_gen.m"
            }
#line 146 "unify_gen.m"
          else
#line 147 "unify_gen.m"
            {
#line 147 "unify_gen.m"
              ll_backend__unify_gen__MaybeTakeAddr_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__SubInfo_23, (MR_Integer) 0)));
#line 147 "unify_gen.m"
              ll_backend__unify_gen__MaybeSize_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__SubInfo_23, (MR_Integer) 1)));
#line 147 "unify_gen.m"
            }
#line 150 "unify_gen.m"
          {
#line 150 "unify_gen.m"
            ll_backend__unify_gen__succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CLD_0_46, ll_backend__unify_gen__Var_17);
          }
#line 151 "unify_gen.m"
          if (!(ll_backend__unify_gen__succeeded))
#line 151 "unify_gen.m"
            {
#line 151 "unify_gen.m"
              MR_Word ll_backend__unify_gen__V_26_26;

#line 151 "unify_gen.m"
              ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__MaybeTakeAddr_24)) == (MR_mktag((MR_Integer) 1)));
#line 151 "unify_gen.m"
              if (ll_backend__unify_gen__succeeded)
#line 151 "unify_gen.m"
                ll_backend__unify_gen__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__MaybeTakeAddr_24, (MR_Integer) 0)));
#line 151 "unify_gen.m"
            }
#line 164 "unify_gen.m"
          if (ll_backend__unify_gen__succeeded)
#line 159 "unify_gen.m"
            {
#line 159 "unify_gen.m"
              MR_Word ll_backend__unify_gen__TakeAddr_27;
#line 159 "unify_gen.m"
              MR_Word ll_backend__unify_gen__ModuleInfo_28;
#line 159 "unify_gen.m"
              MR_Word ll_backend__unify_gen__ConsArgWidths_29;

#line 156 "unify_gen.m"
              if ((ll_backend__unify_gen__MaybeTakeAddr_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 158 "unify_gen.m"
                ll_backend__unify_gen__TakeAddr_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 156 "unify_gen.m"
              else
#line 155 "unify_gen.m"
                ll_backend__unify_gen__TakeAddr_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__MaybeTakeAddr_24, (MR_Integer) 0)));
#line 160 "unify_gen.m"
              {
#line 160 "unify_gen.m"
                ll_backend__code_info__get_module_info_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_44, &ll_backend__unify_gen__ModuleInfo_28);
              }
#line 161 "unify_gen.m"
              {
#line 161 "unify_gen.m"
                ll_backend__unify_gen__get_cons_arg_widths_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], ll_backend__unify_gen__ModuleInfo_28, ll_backend__unify_gen__ConsId_18, ll_backend__unify_gen__Args_19, &ll_backend__unify_gen__ConsArgWidths_29);
              }
#line 162 "unify_gen.m"
              {
#line 162 "unify_gen.m"
                ll_backend__unify_gen__generate_construction_14_p_0(ll_backend__unify_gen__Var_17, ll_backend__unify_gen__ConsId_18, ll_backend__unify_gen__Args_19, ll_backend__unify_gen__Modes_20, ll_backend__unify_gen__ConsArgWidths_29, ll_backend__unify_gen__HowToConstruct_21, ll_backend__unify_gen__TakeAddr_27, ll_backend__unify_gen__MaybeSize_25, ll_backend__unify_gen__GoalInfo_11, ll_backend__unify_gen__Code_12, ll_backend__unify_gen__STATE_VARIABLE_CI_0_44, ll_backend__unify_gen__STATE_VARIABLE_CI_45, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_46, ll_backend__unify_gen__STATE_VARIABLE_CLD_47);
#line 162 "unify_gen.m"
                return;
              }
#line 159 "unify_gen.m"
            }
#line 164 "unify_gen.m"
          else
#line 165 "unify_gen.m"
            {
#line 165 "unify_gen.m"
              {
#line 165 "unify_gen.m"
                *ll_backend__unify_gen__Code_12 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
#line 165 "unify_gen.m"
              *ll_backend__unify_gen__STATE_VARIABLE_CLD_47 = ll_backend__unify_gen__STATE_VARIABLE_CLD_0_46;
#line 165 "unify_gen.m"
              *ll_backend__unify_gen__STATE_VARIABLE_CI_45 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_44;
#line 165 "unify_gen.m"
            }
#line 141 "unify_gen.m"
        }
#line 140 "unify_gen.m"
        break;
#line 140 "unify_gen.m"
      case (MR_Integer) 1:
#line 168 "unify_gen.m"
        {
#line 168 "unify_gen.m"
          MR_Word ll_backend__unify_gen__CanCGC_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Uni_10, (MR_Integer) 5)));
#line 168 "unify_gen.m"
          MR_Word ll_backend__unify_gen__Code0_32;
#line 168 "unify_gen.m"
          MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_61_61;
#line 168 "unify_gen.m"
          MR_Word ll_backend__unify_gen__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Uni_10, (MR_Integer) 0)));
#line 168 "unify_gen.m"
          MR_Word ll_backend__unify_gen__ConsId_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Uni_10, (MR_Integer) 1)));
#line 168 "unify_gen.m"
          MR_Word ll_backend__unify_gen__Args_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Uni_10, (MR_Integer) 2)));
#line 168 "unify_gen.m"
          MR_Word ll_backend__unify_gen__Modes_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Uni_10, (MR_Integer) 3)));
#line 168 "unify_gen.m"
          MR_Word ll_backend__unify_gen__ModuleInfo_81;
#line 168 "unify_gen.m"
          MR_Word ll_backend__unify_gen__ConsArgWidths_82;
#line 168 "unify_gen.m"
          MR_Word ll_backend__unify_gen___CanFail_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Uni_10, (MR_Integer) 4)));

#line 169 "unify_gen.m"
          {
#line 169 "unify_gen.m"
            ll_backend__code_info__get_module_info_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_44, &ll_backend__unify_gen__ModuleInfo_81);
          }
#line 170 "unify_gen.m"
          {
#line 170 "unify_gen.m"
            ll_backend__unify_gen__get_cons_arg_widths_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], ll_backend__unify_gen__ModuleInfo_81, ll_backend__unify_gen__ConsId_78, ll_backend__unify_gen__Args_79, &ll_backend__unify_gen__ConsArgWidths_82);
          }
#line 175 "unify_gen.m"
#line 175 "unify_gen.m"
          switch (ll_backend__unify_gen__CodeModel_9) {
#line 175 "unify_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 175 "unify_gen.m"
            case (MR_Integer) 0:
#line 172 "unify_gen.m"
              {
#line 173 "unify_gen.m"
                {
#line 173 "unify_gen.m"
                  ll_backend__unify_gen__generate_det_deconstruction_9_p_0(ll_backend__unify_gen__Var_77, ll_backend__unify_gen__ConsId_78, ll_backend__unify_gen__Args_79, ll_backend__unify_gen__Modes_80, ll_backend__unify_gen__ConsArgWidths_82, &ll_backend__unify_gen__Code0_32, ll_backend__unify_gen__STATE_VARIABLE_CI_0_44, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_46, &ll_backend__unify_gen__STATE_VARIABLE_CLD_61_61);
                }
#line 172 "unify_gen.m"
                *ll_backend__unify_gen__STATE_VARIABLE_CI_45 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_44;
#line 172 "unify_gen.m"
              }
#line 175 "unify_gen.m"
              break;
#line 175 "unify_gen.m"
            case (MR_Integer) 1:
#line 177 "unify_gen.m"
              {
#line 177 "unify_gen.m"
                ll_backend__unify_gen__generate_semi_deconstruction_10_p_0(ll_backend__unify_gen__Var_77, ll_backend__unify_gen__ConsId_78, ll_backend__unify_gen__Args_79, ll_backend__unify_gen__Modes_80, ll_backend__unify_gen__ConsArgWidths_82, &ll_backend__unify_gen__Code0_32, ll_backend__unify_gen__STATE_VARIABLE_CI_0_44, ll_backend__unify_gen__STATE_VARIABLE_CI_45, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_46, &ll_backend__unify_gen__STATE_VARIABLE_CLD_61_61);
              }
#line 175 "unify_gen.m"
              break;
#line 175 "unify_gen.m"
          }
#line 198 "unify_gen.m"
#line 198 "unify_gen.m"
          switch (ll_backend__unify_gen__CanCGC_31) {
#line 198 "unify_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 198 "unify_gen.m"
            case (MR_Integer) 0:
#line 181 "unify_gen.m"
              {
#line 181 "unify_gen.m"
                MR_String ll_backend__unify_gen__VarName_33;
#line 181 "unify_gen.m"
                MR_Word ll_backend__unify_gen__ProduceVar_34;
#line 181 "unify_gen.m"
                MR_Word ll_backend__unify_gen__VarRval_35;
#line 181 "unify_gen.m"
                MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_62_62;
#line 195 "unify_gen.m"
                MR_Word ll_backend__unify_gen__VarLval_36;

#line 182 "unify_gen.m"
                {
#line 182 "unify_gen.m"
                  ll_backend__unify_gen__VarName_33 = ll_backend__code_info__variable_name_2_f_0(*ll_backend__unify_gen__STATE_VARIABLE_CI_45, ll_backend__unify_gen__Var_77);
                }
#line 183 "unify_gen.m"
                {
#line 183 "unify_gen.m"
                  ll_backend__code_loc_dep__produce_variable_6_p_0(ll_backend__unify_gen__Var_77, &ll_backend__unify_gen__ProduceVar_34, &ll_backend__unify_gen__VarRval_35, *ll_backend__unify_gen__STATE_VARIABLE_CI_45, ll_backend__unify_gen__STATE_VARIABLE_CLD_61_61, &ll_backend__unify_gen__STATE_VARIABLE_CLD_62_62);
                }
#line 184 "unify_gen.m"
                ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__VarRval_35)) == (MR_mktag((MR_Integer) 0)));
#line 184 "unify_gen.m"
                if (ll_backend__unify_gen__succeeded)
#line 184 "unify_gen.m"
                  {
#line 184 "unify_gen.m"
                    ll_backend__unify_gen__VarLval_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__VarRval_35, (MR_Integer) 0)));
#line 186 "unify_gen.m"
                    {
#line 186 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__TypeCtorInfo_94_94;
#line 186 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__SaveArgs_37;
#line 186 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__Regs_38;
#line 186 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__FreeVar_39;
#line 186 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_63_63;
#line 186 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__V_66_66;
#line 186 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__V_67_67;
#line 186 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__V_68_68;
#line 186 "unify_gen.m"
                      MR_String ll_backend__unify_gen__V_70_70;
#line 186 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__V_72_72;
#line 186 "unify_gen.m"
                      MR_Word ll_backend__unify_gen__V_73_73;
#line 188 "unify_gen.m"
                      MR_Box ll_backend__unify_gen__conv1_STATE_VARIABLE_CLD_47;

#line 185 "unify_gen.m"
                      {
#line 185 "unify_gen.m"
                        ll_backend__code_loc_dep__save_reused_cell_fields_7_p_0(ll_backend__unify_gen__Var_77, ll_backend__unify_gen__VarLval_36, &ll_backend__unify_gen__SaveArgs_37, &ll_backend__unify_gen__Regs_38, *ll_backend__unify_gen__STATE_VARIABLE_CI_45, ll_backend__unify_gen__STATE_VARIABLE_CLD_62_62, &ll_backend__unify_gen__STATE_VARIABLE_CLD_63_63);
                      }
#line 188 "unify_gen.m"
                      {
#line 188 "unify_gen.m"
                        mercury__list__foldl_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, (MR_Word) &ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_code_loc_dep_0, (MR_Word) &ll_backend__unify_gen_scalar_common_2[3], ll_backend__unify_gen__Regs_38, ((MR_Box) (ll_backend__unify_gen__STATE_VARIABLE_CLD_63_63)), &ll_backend__unify_gen__conv1_STATE_VARIABLE_CLD_47);
                      }
#line 188 "unify_gen.m"
                      *ll_backend__unify_gen__STATE_VARIABLE_CLD_47 = ((MR_Word) ll_backend__unify_gen__conv1_STATE_VARIABLE_CLD_47);
#line 19937 "ll_backend.unify_gen.c"
                      ll_backend__unify_gen__TypeCtorInfo_94_94 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 191 "unify_gen.m"
                      {
#line 191 "unify_gen.m"
                        ll_backend__unify_gen__V_68_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 191 "unify_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_68_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 191 "unify_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_68_68, 1) = ((MR_Box) ((MR_Integer) 3));
#line 191 "unify_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_68_68, 2) = ((MR_Box) (ll_backend__unify_gen__VarRval_35));
#line 191 "unify_gen.m"
                      }
#line 191 "unify_gen.m"
                      {
#line 191 "unify_gen.m"
                        ll_backend__unify_gen__V_67_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 191 "unify_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_67_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
#line 191 "unify_gen.m"
                        MR_hl_field(MR_mktag(3), ll_backend__unify_gen__V_67_67, 1) = ((MR_Box) (ll_backend__unify_gen__V_68_68));
#line 191 "unify_gen.m"
                      }
#line 192 "unify_gen.m"
                      {
#line 192 "unify_gen.m"
                        ll_backend__unify_gen__V_70_70 = mercury__string__f_43_43_2_f_0((MR_String) "Free ", ll_backend__unify_gen__VarName_33);
                      }
#line 191 "unify_gen.m"
                      {
#line 191 "unify_gen.m"
                        ll_backend__unify_gen__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 191 "unify_gen.m"
                        MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_66_66, 0) = ((MR_Box) (ll_backend__unify_gen__V_67_67));
#line 191 "unify_gen.m"
                        MR_hl_field(MR_mktag(0), ll_backend__unify_gen__V_66_66, 1) = ((MR_Box) (ll_backend__unify_gen__V_70_70));
#line 191 "unify_gen.m"
                      }
#line 190 "unify_gen.m"
                      {
#line 190 "unify_gen.m"
                        ll_backend__unify_gen__FreeVar_39 = mercury__cord__singleton_1_f_0(ll_backend__unify_gen__TypeCtorInfo_94_94, ((MR_Box) (ll_backend__unify_gen__V_66_66)));
                      }
#line 194 "unify_gen.m"
                      {
#line 194 "unify_gen.m"
                        ll_backend__unify_gen__V_73_73 = mercury__cord__f_43_43_2_f_0(ll_backend__unify_gen__TypeCtorInfo_94_94, ll_backend__unify_gen__SaveArgs_37, ll_backend__unify_gen__FreeVar_39);
                      }
#line 194 "unify_gen.m"
                      {
#line 194 "unify_gen.m"
                        ll_backend__unify_gen__V_72_72 = mercury__cord__f_43_43_2_f_0(ll_backend__unify_gen__TypeCtorInfo_94_94, ll_backend__unify_gen__ProduceVar_34, ll_backend__unify_gen__V_73_73);
                      }
#line 194 "unify_gen.m"
                      {
#line 194 "unify_gen.m"
                        *ll_backend__unify_gen__Code_12 = mercury__cord__f_43_43_2_f_0(ll_backend__unify_gen__TypeCtorInfo_94_94, ll_backend__unify_gen__Code0_32, ll_backend__unify_gen__V_72_72);
                      }
#line 186 "unify_gen.m"
                    }
#line 184 "unify_gen.m"
                  }
#line 184 "unify_gen.m"
                else
#line 196 "unify_gen.m"
                  {
#line 196 "unify_gen.m"
                    *ll_backend__unify_gen__Code_12 = ll_backend__unify_gen__Code0_32;
#line 196 "unify_gen.m"
                    *ll_backend__unify_gen__STATE_VARIABLE_CLD_47 = ll_backend__unify_gen__STATE_VARIABLE_CLD_62_62;
#line 196 "unify_gen.m"
                  }
#line 181 "unify_gen.m"
              }
#line 198 "unify_gen.m"
              break;
#line 198 "unify_gen.m"
            case (MR_Integer) 1:
#line 199 "unify_gen.m"
              {
#line 200 "unify_gen.m"
                *ll_backend__unify_gen__Code_12 = ll_backend__unify_gen__Code0_32;
#line 199 "unify_gen.m"
                *ll_backend__unify_gen__STATE_VARIABLE_CLD_47 = ll_backend__unify_gen__STATE_VARIABLE_CLD_61_61;
#line 199 "unify_gen.m"
              }
#line 198 "unify_gen.m"
              break;
#line 198 "unify_gen.m"
          }
#line 168 "unify_gen.m"
        }
#line 140 "unify_gen.m"
        break;
#line 140 "unify_gen.m"
      case (MR_Integer) 2:
#line 134 "unify_gen.m"
        {
#line 134 "unify_gen.m"
          MR_Word ll_backend__unify_gen__Left_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Uni_10, (MR_Integer) 0)));
#line 134 "unify_gen.m"
          MR_Word ll_backend__unify_gen__Right_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Uni_10, (MR_Integer) 1)));

#line 135 "unify_gen.m"
          {
#line 135 "unify_gen.m"
            ll_backend__unify_gen__succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CLD_0_46, ll_backend__unify_gen__Left_15);
          }
#line 137 "unify_gen.m"
          if (ll_backend__unify_gen__succeeded)
#line 136 "unify_gen.m"
            {
#line 136 "unify_gen.m"
              ll_backend__unify_gen__generate_assignment_5_p_0(ll_backend__unify_gen__Left_15, ll_backend__unify_gen__Right_16, ll_backend__unify_gen__Code_12, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_46, ll_backend__unify_gen__STATE_VARIABLE_CLD_47);
            }
#line 137 "unify_gen.m"
          else
#line 138 "unify_gen.m"
            {
#line 138 "unify_gen.m"
              {
#line 138 "unify_gen.m"
                *ll_backend__unify_gen__Code_12 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
#line 138 "unify_gen.m"
              *ll_backend__unify_gen__STATE_VARIABLE_CLD_47 = ll_backend__unify_gen__STATE_VARIABLE_CLD_0_46;
#line 138 "unify_gen.m"
            }
#line 134 "unify_gen.m"
          *ll_backend__unify_gen__STATE_VARIABLE_CI_45 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_44;
#line 134 "unify_gen.m"
        }
#line 140 "unify_gen.m"
        break;
#line 140 "unify_gen.m"
      case (MR_Integer) 3:
#line 140 "unify_gen.m"
#line 140 "unify_gen.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Uni_10, (MR_Integer) 0)))) {
#line 140 "unify_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 140 "unify_gen.m"
          case (MR_Integer) 0:
#line 203 "unify_gen.m"
            {
#line 203 "unify_gen.m"
              MR_Word ll_backend__unify_gen__Var1_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Uni_10, (MR_Integer) 1)));
#line 203 "unify_gen.m"
              MR_Word ll_backend__unify_gen__Var2_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Uni_10, (MR_Integer) 2)));

#line 204 "unify_gen.m"
              ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__CodeModel_9 == (MR_Integer) 0);
#line 206 "unify_gen.m"
              if (ll_backend__unify_gen__succeeded)
#line 205 "unify_gen.m"
                {
#line 205 "unify_gen.m"
                  {
#line 205 "unify_gen.m"
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_unification\'/8", (MR_String) "det simple_test");
#line 205 "unify_gen.m"
                    return;
                  }
#line 205 "unify_gen.m"
                }
#line 206 "unify_gen.m"
              else
#line 207 "unify_gen.m"
                {
#line 207 "unify_gen.m"
                  ll_backend__unify_gen__generate_test_7_p_0(ll_backend__unify_gen__Var1_40, ll_backend__unify_gen__Var2_41, ll_backend__unify_gen__Code_12, ll_backend__unify_gen__STATE_VARIABLE_CI_0_44, ll_backend__unify_gen__STATE_VARIABLE_CI_45, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_46, ll_backend__unify_gen__STATE_VARIABLE_CLD_47);
#line 207 "unify_gen.m"
                  return;
                }
#line 203 "unify_gen.m"
            }
#line 140 "unify_gen.m"
            break;
#line 140 "unify_gen.m"
          case (MR_Integer) 1:
#line 212 "unify_gen.m"
            {
#line 213 "unify_gen.m"
              {
#line 213 "unify_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_unification\'/8", (MR_String) "complicated unify");
#line 213 "unify_gen.m"
                return;
              }
#line 212 "unify_gen.m"
            }
#line 140 "unify_gen.m"
            break;
#line 140 "unify_gen.m"
        }
#line 140 "unify_gen.m"
        break;
#line 140 "unify_gen.m"
    }
#line 124 "unify_gen.m"
  }
#line 42 "unify_gen.m"
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
