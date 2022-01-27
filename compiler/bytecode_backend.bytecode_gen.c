/*
** Automatically generated from `bytecode_gen.m'
** by the Mercury compiler,
** version rotd-2015-03-16
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


/* :- module bytecode_backend.bytecode_gen. */
/* :- implementation. */

/*
INIT mercury__bytecode_backend__bytecode_gen__init
ENDINIT
*/

#include "bytecode_backend.bytecode_gen.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "bytecode_backend.mih"
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
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "bytecode_backend.bytecode.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.arg_info.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_code_util.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.call_gen.mih"
#include "ll_backend.code_info.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
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
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 157 "bytecode_backend.bytecode_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 bytecode_backend__bytecode_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 160 "bytecode_backend.bytecode_gen.c"
static const MR_FA_TypeInfo_Struct1 bytecode_backend__bytecode_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 163 "bytecode_backend.bytecode_gen.c"
static const MR_FA_TypeInfo_Struct2 bytecode_backend__bytecode_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0;

#line 166 "bytecode_backend.bytecode_gen.c"
static const MR_FA_TypeInfo_Struct2 bytecode_backend__bytecode_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 169 "bytecode_backend.bytecode_gen.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__field_types_byte_info_0_0[5];

#line 172 "bytecode_backend.bytecode_gen.c"
static const MR_ConstString bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__field_names_byte_info_0_0[5];

#line 175 "bytecode_backend.bytecode_gen.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__du_functor_desc_byte_info_0_0;

#line 178 "bytecode_backend.bytecode_gen.c"
static const MR_DuFunctorDescPtr bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__du_stag_ordered_byte_info_0_0[1];

#line 181 "bytecode_backend.bytecode_gen.c"
static const MR_DuPtagLayout bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__du_ptag_ordered_byte_info_0[1];

#line 184 "bytecode_backend.bytecode_gen.c"
static const MR_DuFunctorDescPtr bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__du_name_ordered_byte_info_0[1];

#line 187 "bytecode_backend.bytecode_gen.c"
static const MR_Integer bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__functor_number_map_byte_info_0[1];

#line 190 "bytecode_backend.bytecode_gen.c"
static MR_bool MR_CALL 
bytecode_backend__bytecode_gen____Unify____byte_info_0_0_10001(
#line 193 "bytecode_backend.bytecode_gen.c"
  MR_Box bytecode_backend__bytecode_gen__wrapper_arg_1,
#line 195 "bytecode_backend.bytecode_gen.c"
  MR_Box bytecode_backend__bytecode_gen__wrapper_arg_2);

#line 198 "bytecode_backend.bytecode_gen.c"
static void MR_CALL 
bytecode_backend__bytecode_gen____Compare____byte_info_0_0_10001(
#line 201 "bytecode_backend.bytecode_gen.c"
  MR_Box * bytecode_backend__bytecode_gen__wrapper_arg_1,
#line 203 "bytecode_backend.bytecode_gen.c"
  MR_Box bytecode_backend__bytecode_gen__wrapper_arg_2,
#line 205 "bytecode_backend.bytecode_gen.c"
  MR_Box bytecode_backend__bytecode_gen__wrapper_arg_3);

#line 707 "bytecode_gen.m"
static void MR_CALL 
bytecode_backend__bytecode_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_p_0_1(
#line 707 "bytecode_gen.m"
  MR_Box bytecode_backend__bytecode_gen__closure_arg,
#line 707 "bytecode_gen.m"
  MR_Box bytecode_backend__bytecode_gen__wrapper_arg_1,
#line 707 "bytecode_gen.m"
  MR_Box * bytecode_backend__bytecode_gen__wrapper_arg_2);

#line 700 "bytecode_gen.m"
static void MR_CALL 
bytecode_backend__bytecode_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_p_0(
#line 700 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__HeadVar__1_1,
#line 700 "bytecode_gen.m"
  MR_Integer bytecode_backend__bytecode_gen__EndLabel_3,
#line 700 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_4,
#line 700 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_5,
#line 700 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__HeadVar__6_6);

#line 512 "bytecode_gen.m"
static void MR_CALL 
bytecode_backend__bytecode_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_p_0(
#line 512 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__HeadVar__1_1,
#line 512 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__HeadVar__4_4,
#line 512 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__HeadVar__5_5);

#line 879 "bytecode_gen.m"
static void MR_CALL 
bytecode_backend__bytecode_gen____Compare____byte_info_0_0(
#line 879 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__HeadVar__1_1,
#line 879 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__HeadVar__2_2,
#line 879 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__HeadVar__3_3);

#line 879 "bytecode_gen.m"
static MR_bool MR_CALL 
bytecode_backend__bytecode_gen____Unify____byte_info_0_0(
#line 879 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__HeadVar__1_1,
#line 879 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__HeadVar__2_2);

#line 941 "bytecode_gen.m"
static void MR_CALL 
bytecode_backend__bytecode_gen__get_counts_3_p_0(
#line 941 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__ByteInfo0_4,
#line 941 "bytecode_gen.m"
  MR_Integer * bytecode_backend__bytecode_gen__Label_5,
#line 941 "bytecode_gen.m"
  MR_Integer * bytecode_backend__bytecode_gen__Temp_6);

#line 933 "bytecode_gen.m"
static void MR_CALL 
bytecode_backend__bytecode_gen__get_next_temp_3_p_0(
#line 933 "bytecode_gen.m"
  MR_Integer * bytecode_backend__bytecode_gen__Temp_4,
#line 933 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_8,
#line 933 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_9);

#line 925 "bytecode_gen.m"
static void MR_CALL 
bytecode_backend__bytecode_gen__get_next_label_3_p_0(
#line 925 "bytecode_gen.m"
  MR_Integer * bytecode_backend__bytecode_gen__Label_4,
#line 925 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_8,
#line 925 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_9);

#line 919 "bytecode_gen.m"
static void MR_CALL 
bytecode_backend__bytecode_gen__get_var_type_3_p_0(
#line 919 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__ByteInfo_4,
#line 919 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__Var_5,
#line 919 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__Type_6);

#line 913 "bytecode_gen.m"
static void MR_CALL 
bytecode_backend__bytecode_gen__map_var_3_p_0(
#line 913 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__ByteInfo_4,
#line 913 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__Var_5,
#line 913 "bytecode_gen.m"
  MR_Integer * bytecode_backend__bytecode_gen__ByteVar_6);

#line 905 "bytecode_gen.m"
static void MR_CALL 
bytecode_backend__bytecode_gen__map_vars_2_3_p_0(
#line 905 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__HeadVar__1_1,
#line 905 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__HeadVar__2_2,
#line 905 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__HeadVar__3_3);

#line 899 "bytecode_gen.m"
static void MR_CALL 
bytecode_backend__bytecode_gen__map_vars_3_p_0(
#line 899 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__ByteInfo_4,
#line 899 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__Vars_5,
#line 899 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__ByteVars_6);

#line 864 "bytecode_gen.m"
static void MR_CALL 
bytecode_backend__bytecode_gen__create_varmap_7_p_0(
#line 864 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__HeadVar__1_1,
#line 864 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__VarSet_2,
#line 864 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__VarTypes_3,
#line 864 "bytecode_gen.m"
  MR_Integer bytecode_backend__bytecode_gen__N0_4,
#line 864 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_VarMap_0_5,
#line 864 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__STATE_VARIABLE_VarMap_6,
#line 864 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__HeadVar__7_7);

#line 802 "bytecode_gen.m"
static void MR_CALL 
bytecode_backend__bytecode_gen__map_cons_tag_2_p_0(
#line 802 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__HeadVar__1_1,
#line 802 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__HeadVar__2_2);

#line 719 "bytecode_gen.m"
static void MR_CALL 
bytecode_backend__bytecode_gen__map_cons_id_3_p_0(
#line 719 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__ByteInfo_4,
#line 719 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__ConsId_5,
#line 719 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__ByteConsId_6);

#line 674 "bytecode_gen.m"
static void MR_CALL 
bytecode_backend__bytecode_gen__gen_disj_5_p_0(
#line 674 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__HeadVar__1_1,
#line 674 "bytecode_gen.m"
  MR_Integer bytecode_backend__bytecode_gen__EndLabel_2,
#line 674 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_3,
#line 674 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_4,
#line 674 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__Code_5);

#line 661 "bytecode_gen.m"
static void MR_CALL 
bytecode_backend__bytecode_gen__gen_conj_4_p_0(
#line 661 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__HeadVar__1_1,
#line 661 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_2,
#line 661 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_3,
#line 661 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__HeadVar__4_4);

#line 650 "bytecode_gen.m"
static MR_bool MR_CALL 
bytecode_backend__bytecode_gen__all_dirs_same_2_p_0(
#line 650 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__HeadVar__1_1,
#line 650 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__Dir_2);

#line 615 "bytecode_gen.m"
static void MR_CALL 
bytecode_backend__bytecode_gen__map_uni_modes_4_p_0(
#line 615 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__HeadVar__1_1,
#line 615 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__HeadVar__2_2,
#line 615 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__ByteInfo_3,
#line 615 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__HeadVar__4_4);

#line 492 "bytecode_gen.m"
static void MR_CALL 
bytecode_backend__bytecode_gen__map_arg_3_p_0(
#line 492 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__ByteInfo_4,
#line 492 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__Expr_5,
#line 492 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__ByteArg_6);

#line 469 "bytecode_gen.m"
static void MR_CALL 
bytecode_backend__bytecode_gen__map_assign_4_p_0(
#line 469 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__ByteInfo_5,
#line 469 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__Var_6,
#line 469 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__Expr_7,
#line 469 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__Code_8);

#line 431 "bytecode_gen.m"
static void MR_CALL 
bytecode_backend__bytecode_gen__gen_builtin_5_p_0(
#line 431 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__PredId_6,
#line 431 "bytecode_gen.m"
  MR_Integer bytecode_backend__bytecode_gen__ProcId_7,
#line 431 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__Args_8,
#line 431 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__ByteInfo_9,
#line 431 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__Code_10);

#line 399 "bytecode_gen.m"
static void MR_CALL 
bytecode_backend__bytecode_gen__gen_call_6_p_0(
#line 399 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__PredId_7,
#line 399 "bytecode_gen.m"
  MR_Integer bytecode_backend__bytecode_gen__ProcId_8,
#line 399 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__ArgVars_9,
#line 399 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__Detism_10,
#line 399 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__ByteInfo_11,
#line 399 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__Code_12);

#line 372 "bytecode_gen.m"
static void MR_CALL 
bytecode_backend__bytecode_gen__gen_higher_order_call_6_p_0_1(
#line 372 "bytecode_gen.m"
  MR_Box bytecode_backend__bytecode_gen__closure_arg,
#line 372 "bytecode_gen.m"
  MR_Box bytecode_backend__bytecode_gen__wrapper_arg_1,
#line 372 "bytecode_gen.m"
  MR_Box * bytecode_backend__bytecode_gen__wrapper_arg_2);

#line 365 "bytecode_gen.m"
static void MR_CALL 
bytecode_backend__bytecode_gen__gen_higher_order_call_6_p_0(
#line 365 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__PredVar_7,
#line 365 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__ArgVars_8,
#line 365 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__ArgModes_9,
#line 365 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__Detism_10,
#line 365 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__ByteInfo_11,
#line 365 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__Code_12);

#line 345 "bytecode_gen.m"
static void MR_CALL 
bytecode_backend__bytecode_gen__gen_pickups_3_p_0(
#line 345 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__HeadVar__1_1,
#line 345 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__ByteInfo_2,
#line 345 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__HeadVar__3_3);

#line 329 "bytecode_gen.m"
static void MR_CALL 
bytecode_backend__bytecode_gen__gen_places_3_p_0(
#line 329 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__HeadVar__1_1,
#line 329 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__ByteInfo_2,
#line 329 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__HeadVar__3_3);

#line 211 "bytecode_gen.m"
static void MR_CALL 
bytecode_backend__bytecode_gen__gen_goal_expr_5_p_0(
#line 211 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__GoalExpr_6,
#line 211 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__GoalInfo_7,
#line 211 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_82,
#line 211 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_83,
#line 211 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__Code_9);

#line 202 "bytecode_gen.m"
static void MR_CALL 
bytecode_backend__bytecode_gen__gen_goal_4_p_0(
#line 202 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__HeadVar__1_1,
#line 202 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_12,
#line 202 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_13,
#line 202 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__Code_8);

#line 130 "bytecode_gen.m"
static void MR_CALL 
bytecode_backend__bytecode_gen__gen_proc_4_p_0(
#line 130 "bytecode_gen.m"
  MR_Integer bytecode_backend__bytecode_gen__ProcId_5,
#line 130 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__PredInfo_6,
#line 130 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__ModuleInfo_7,
#line 130 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__Code_8);

#line 119 "bytecode_gen.m"
static void MR_CALL 
bytecode_backend__bytecode_gen__gen_pred_7_p_0(
#line 119 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__HeadVar__1_1,
#line 119 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__HeadVar__2_2,
#line 119 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__HeadVar__3_3,
#line 119 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__HeadVar__4_4,
#line 119 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__HeadVar__5_5);

#line 93 "bytecode_gen.m"
static void MR_CALL 
bytecode_backend__bytecode_gen__gen_preds_5_p_0(
#line 93 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__HeadVar__1_1,
#line 93 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__HeadVar__2_2,
#line 93 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__HeadVar__3_3);


static /* final */ const MR_Box bytecode_backend__bytecode_gen_scalar_common_1[4][2];

static /* final */ const MR_Box bytecode_backend__bytecode_gen_scalar_common_2[2][3];

static /* final */ const MR_Box bytecode_backend__bytecode_gen_scalar_common_3[2][6];

static /* final */ const MR_Box bytecode_backend__bytecode_gen_scalar_common_4[2][1];




static /* final */ const MR_Box bytecode_backend__bytecode_gen_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) -1))
  },
};

static /* final */ const MR_Box bytecode_backend__bytecode_gen_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&bytecode_backend__bytecode_gen_scalar_common_1[0])),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&bytecode_backend__bytecode_gen_scalar_common_1[0])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box bytecode_backend__bytecode_gen_scalar_common_3[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__type_ctor_info_byte_info_0)),
    ((MR_Box) (&bytecode_backend__bytecode_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__type_ctor_info_byte_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0))
  },
};

static /* final */ const MR_Box bytecode_backend__bytecode_gen_scalar_common_4[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "builtin"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
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
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 671 "bytecode_backend.bytecode_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 bytecode_backend__bytecode_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 679 "bytecode_backend.bytecode_gen.c"
static const MR_FA_TypeInfo_Struct1 bytecode_backend__bytecode_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 687 "bytecode_backend.bytecode_gen.c"
static const MR_FA_TypeInfo_Struct2 bytecode_backend__bytecode_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &bytecode_backend__bytecode_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 696 "bytecode_backend.bytecode_gen.c"
static const MR_FA_TypeInfo_Struct2 bytecode_backend__bytecode_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &bytecode_backend__bytecode_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 705 "bytecode_backend.bytecode_gen.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__field_types_byte_info_0_0[5] = {
  (MR_PseudoTypeInfo) &bytecode_backend__bytecode_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &bytecode_backend__bytecode_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0
};

#line 714 "bytecode_backend.bytecode_gen.c"
static const MR_ConstString bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__field_names_byte_info_0_0[5] = {
  (MR_String) "byteinfo_varmap",
  (MR_String) "byteinfo_vartypes",
  (MR_String) "byteinfo_moduleinfo",
  (MR_String) "byteinfo_label_counter",
  (MR_String) "byteinfo_temp_counter"
};

#line 723 "bytecode_backend.bytecode_gen.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__du_functor_desc_byte_info_0_0 = {
  (MR_String) "byte_info",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__field_types_byte_info_0_0,
  bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__field_names_byte_info_0_0,
  NULL,
  NULL
};

#line 738 "bytecode_backend.bytecode_gen.c"
static const MR_DuFunctorDescPtr bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__du_stag_ordered_byte_info_0_0[1] = {
  &bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__du_functor_desc_byte_info_0_0
};

#line 743 "bytecode_backend.bytecode_gen.c"
static const MR_DuPtagLayout bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__du_ptag_ordered_byte_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__du_stag_ordered_byte_info_0_0
  }
};

#line 752 "bytecode_backend.bytecode_gen.c"
static const MR_DuFunctorDescPtr bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__du_name_ordered_byte_info_0[1] = {
  &bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__du_functor_desc_byte_info_0_0
};

#line 757 "bytecode_backend.bytecode_gen.c"
static const MR_Integer bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__functor_number_map_byte_info_0[1] = {
  (MR_Integer) 0
};

#line 762 "bytecode_backend.bytecode_gen.c"
const MR_TypeCtorInfo_Struct bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__type_ctor_info_byte_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (bytecode_backend__bytecode_gen____Unify____byte_info_0_0_10001)),
  ((MR_Box) (bytecode_backend__bytecode_gen____Compare____byte_info_0_0_10001)),
  (MR_String) "bytecode_backend.bytecode_gen",
  (MR_String) "byte_info",
  {     bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__du_name_ordered_byte_info_0 },
  {     bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__du_ptag_ordered_byte_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__functor_number_map_byte_info_0
};

#line 779 "bytecode_backend.bytecode_gen.c"
static MR_bool MR_CALL 
bytecode_backend__bytecode_gen____Unify____byte_info_0_0_10001(
#line 782 "bytecode_backend.bytecode_gen.c"
  MR_Box bytecode_backend__bytecode_gen__wrapper_arg_1,
#line 784 "bytecode_backend.bytecode_gen.c"
  MR_Box bytecode_backend__bytecode_gen__wrapper_arg_2)
#line 786 "bytecode_backend.bytecode_gen.c"
{
#line 788 "bytecode_backend.bytecode_gen.c"
  {
#line 790 "bytecode_backend.bytecode_gen.c"
    MR_bool bytecode_backend__bytecode_gen__succeeded;

#line 793 "bytecode_backend.bytecode_gen.c"
    {
#line 795 "bytecode_backend.bytecode_gen.c"
      bytecode_backend__bytecode_gen__succeeded = bytecode_backend__bytecode_gen____Unify____byte_info_0_0(((MR_Word) bytecode_backend__bytecode_gen__wrapper_arg_1), ((MR_Word) bytecode_backend__bytecode_gen__wrapper_arg_2));
    }
#line 798 "bytecode_backend.bytecode_gen.c"
    return bytecode_backend__bytecode_gen__succeeded;
#line 800 "bytecode_backend.bytecode_gen.c"
  }
#line 802 "bytecode_backend.bytecode_gen.c"
}

#line 805 "bytecode_backend.bytecode_gen.c"
static void MR_CALL 
bytecode_backend__bytecode_gen____Compare____byte_info_0_0_10001(
#line 808 "bytecode_backend.bytecode_gen.c"
  MR_Box * bytecode_backend__bytecode_gen__wrapper_arg_1,
#line 810 "bytecode_backend.bytecode_gen.c"
  MR_Box bytecode_backend__bytecode_gen__wrapper_arg_2,
#line 812 "bytecode_backend.bytecode_gen.c"
  MR_Box bytecode_backend__bytecode_gen__wrapper_arg_3)
#line 814 "bytecode_backend.bytecode_gen.c"
{
#line 816 "bytecode_backend.bytecode_gen.c"
  {
#line 818 "bytecode_backend.bytecode_gen.c"
    MR_Word bytecode_backend__bytecode_gen__conv0_HeadVar__1_1;

#line 821 "bytecode_backend.bytecode_gen.c"
    {
#line 823 "bytecode_backend.bytecode_gen.c"
      bytecode_backend__bytecode_gen____Compare____byte_info_0_0(&bytecode_backend__bytecode_gen__conv0_HeadVar__1_1, ((MR_Word) bytecode_backend__bytecode_gen__wrapper_arg_2), ((MR_Word) bytecode_backend__bytecode_gen__wrapper_arg_3));
    }
#line 826 "bytecode_backend.bytecode_gen.c"
    *bytecode_backend__bytecode_gen__wrapper_arg_1 = ((MR_Box) (bytecode_backend__bytecode_gen__conv0_HeadVar__1_1));
#line 828 "bytecode_backend.bytecode_gen.c"
  }
#line 830 "bytecode_backend.bytecode_gen.c"
}

#line 707 "bytecode_gen.m"
static void MR_CALL 
bytecode_backend__bytecode_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_p_0_1(
#line 707 "bytecode_gen.m"
  MR_Box bytecode_backend__bytecode_gen__closure_arg,
#line 707 "bytecode_gen.m"
  MR_Box bytecode_backend__bytecode_gen__wrapper_arg_1,
#line 707 "bytecode_gen.m"
  MR_Box * bytecode_backend__bytecode_gen__wrapper_arg_2)
#line 707 "bytecode_gen.m"
{
#line 707 "bytecode_gen.m"
  {
#line 707 "bytecode_gen.m"
    MR_Box bytecode_backend__bytecode_gen__closure = bytecode_backend__bytecode_gen__closure_arg;
#line 707 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__conv0_ByteConsId_6;

#line 707 "bytecode_gen.m"
    {
#line 707 "bytecode_gen.m"
      bytecode_backend__bytecode_gen__map_cons_id_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__closure, (MR_Integer) 3))), ((MR_Word) bytecode_backend__bytecode_gen__wrapper_arg_1), &bytecode_backend__bytecode_gen__conv0_ByteConsId_6);
    }
#line 707 "bytecode_gen.m"
    *bytecode_backend__bytecode_gen__wrapper_arg_2 = ((MR_Box) (bytecode_backend__bytecode_gen__conv0_ByteConsId_6));
#line 707 "bytecode_gen.m"
  }
#line 707 "bytecode_gen.m"
}

#line 700 "bytecode_gen.m"
static void MR_CALL 
bytecode_backend__bytecode_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_p_0(
#line 700 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__HeadVar__1_1,
#line 700 "bytecode_gen.m"
  MR_Integer bytecode_backend__bytecode_gen__EndLabel_3,
#line 700 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_4,
#line 700 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_5,
#line 700 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__HeadVar__6_6)
#line 700 "bytecode_gen.m"
{
#line 703 "bytecode_gen.m"
  {
#line 703 "bytecode_gen.m"
    MR_bool bytecode_backend__bytecode_gen__succeeded;

#line 703 "bytecode_gen.m"
    if ((bytecode_backend__bytecode_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 703 "bytecode_gen.m"
      {
#line 703 "bytecode_gen.m"
        {
#line 703 "bytecode_gen.m"
          *bytecode_backend__bytecode_gen__HeadVar__6_6 = mercury__cord__empty_0_f_0((MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0);
        }
#line 703 "bytecode_gen.m"
        *bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_5 = bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_4;
#line 703 "bytecode_gen.m"
      }
#line 703 "bytecode_gen.m"
    else
#line 704 "bytecode_gen.m"
      {
#line 704 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__TypeCtorInfo_47_47;
#line 704 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__TypeCtorInfo_17_60;
#line 704 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__Case_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 704 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__Cases_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 704 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__MainConsId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__Case_12, (MR_Integer) 0)));
#line 704 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__OtherConsIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__Case_12, (MR_Integer) 1)));
#line 704 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__Goal_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__Case_12, (MR_Integer) 2)));
#line 704 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__ByteMainConsId_21;
#line 704 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__ByteOtherConsIds_22;
#line 704 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__GoalCode_23;
#line 704 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__CasesCode_24;
#line 704 "bytecode_gen.m"
        MR_Integer bytecode_backend__bytecode_gen__NextLabel_25;
#line 704 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__EnterCode_26;
#line 704 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__EndofCode_27;
#line 704 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_30_30;
#line 704 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_31_31;
#line 704 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_32_32;
#line 704 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_34_34;
#line 704 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_35_35;
#line 704 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_36_36;
#line 704 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_37_37;
#line 704 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_38_38;
#line 704 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_40_40;
#line 704 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_41_41;
#line 704 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__GoalExpr_51;
#line 704 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__GoalInfo_52;
#line 704 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__GoalCode_54;
#line 704 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__Context_55;
#line 704 "bytecode_gen.m"
        MR_Integer bytecode_backend__bytecode_gen__Line_56;
#line 704 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_58_58;
#line 704 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_59_59;
#line 704 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__LabelCounter0_65;
#line 704 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__LabelCounter_66;
#line 929 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_68_68;
#line 929 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_69_69;
#line 929 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_70_70;
#line 929 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_71_71;
#line 931 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_72_72;
#line 931 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_73_73;
#line 931 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_74_74;
#line 931 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_76_76;
#line 931 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_75_75;

#line 706 "bytecode_gen.m"
        {
#line 706 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__map_cons_id_3_p_0(bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_4, bytecode_backend__bytecode_gen__MainConsId_18, &bytecode_backend__bytecode_gen__ByteMainConsId_21);
        }
#line 707 "bytecode_gen.m"
        {
#line 707 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 707 "bytecode_gen.m"
          MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__V_30_30, 0) = ((MR_Box) (&bytecode_backend__bytecode_gen_scalar_common_3[1]));
#line 707 "bytecode_gen.m"
          MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__V_30_30, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_p_0_1));
#line 707 "bytecode_gen.m"
          MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 707 "bytecode_gen.m"
          MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__V_30_30, 3) = ((MR_Box) (bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_4));
#line 707 "bytecode_gen.m"
        }
#line 707 "bytecode_gen.m"
        {
#line 707 "bytecode_gen.m"
          mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0, bytecode_backend__bytecode_gen__V_30_30, bytecode_backend__bytecode_gen__OtherConsIds_19, &bytecode_backend__bytecode_gen__ByteOtherConsIds_22);
        }
#line 205 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__GoalExpr_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__Goal_20, (MR_Integer) 0)));
#line 205 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__GoalInfo_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__Goal_20, (MR_Integer) 1)));
#line 206 "bytecode_gen.m"
        {
#line 206 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__gen_goal_expr_5_p_0(bytecode_backend__bytecode_gen__GoalExpr_51, bytecode_backend__bytecode_gen__GoalInfo_52, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_4, &bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_31_31, &bytecode_backend__bytecode_gen__GoalCode_54);
        }
#line 207 "bytecode_gen.m"
        {
#line 207 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__Context_55 = hlds__hlds_goal__goal_info_get_context_1_f_0(bytecode_backend__bytecode_gen__GoalInfo_52);
        }
#line 208 "bytecode_gen.m"
        {
#line 208 "bytecode_gen.m"
          mercury__term__context_line_2_p_0(bytecode_backend__bytecode_gen__Context_55, &bytecode_backend__bytecode_gen__Line_56);
        }
#line 1028 "bytecode_backend.bytecode_gen.c"
        bytecode_backend__bytecode_gen__TypeCtorInfo_17_60 = (MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0;
#line 209 "bytecode_gen.m"
        {
#line 209 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__V_59_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 209 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_59_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 29));
#line 209 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_59_59, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__Line_56));
#line 209 "bytecode_gen.m"
        }
#line 209 "bytecode_gen.m"
        {
#line 209 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__V_58_58 = mercury__cord__singleton_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_17_60, ((MR_Box) (bytecode_backend__bytecode_gen__V_59_59)));
        }
#line 209 "bytecode_gen.m"
        {
#line 209 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__GoalCode_23 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_17_60, bytecode_backend__bytecode_gen__V_58_58, bytecode_backend__bytecode_gen__GoalCode_54);
        }
#line 709 "bytecode_gen.m"
        {
#line 709 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_p_0(bytecode_backend__bytecode_gen__Cases_13, bytecode_backend__bytecode_gen__EndLabel_3, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_31_31, &bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_32_32, &bytecode_backend__bytecode_gen__CasesCode_24);
        }
#line 929 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_32_32, (MR_Integer) 0)));
#line 929 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_32_32, (MR_Integer) 1)));
#line 929 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_32_32, (MR_Integer) 2)));
#line 929 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__LabelCounter0_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_32_32, (MR_Integer) 3)));
#line 929 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_32_32, (MR_Integer) 4)));
#line 930 "bytecode_gen.m"
        {
#line 930 "bytecode_gen.m"
          mercury__counter__allocate_3_p_0(&bytecode_backend__bytecode_gen__NextLabel_25, bytecode_backend__bytecode_gen__LabelCounter0_65, &bytecode_backend__bytecode_gen__LabelCounter_66);
        }
#line 931 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_32_32, (MR_Integer) 0)));
#line 931 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_32_32, (MR_Integer) 1)));
#line 931 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_32_32, (MR_Integer) 2)));
#line 931 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_32_32, (MR_Integer) 3)));
#line 931 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_32_32, (MR_Integer) 4)));
#line 931 "bytecode_gen.m"
        {
#line 931 "bytecode_gen.m"
          MR_Word base;
#line 931 "bytecode_gen.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 931 "bytecode_gen.m"
          *bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_5 = base;
#line 931 "bytecode_gen.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__V_72_72));
#line 931 "bytecode_gen.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__V_73_73));
#line 931 "bytecode_gen.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__V_74_74));
#line 931 "bytecode_gen.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (bytecode_backend__bytecode_gen__LabelCounter_66));
#line 931 "bytecode_gen.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (bytecode_backend__bytecode_gen__V_76_76));
#line 931 "bytecode_gen.m"
        }
#line 1100 "bytecode_backend.bytecode_gen.c"
        bytecode_backend__bytecode_gen__TypeCtorInfo_47_47 = (MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0;
#line 711 "bytecode_gen.m"
        {
#line 711 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__V_34_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 711 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_34_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 711 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_34_34, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteMainConsId_21));
#line 711 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_34_34, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteOtherConsIds_22));
#line 711 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_34_34, 3) = ((MR_Box) (bytecode_backend__bytecode_gen__NextLabel_25));
#line 711 "bytecode_gen.m"
        }
#line 711 "bytecode_gen.m"
        {
#line 711 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__EnterCode_26 = mercury__cord__singleton_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_47_47, ((MR_Box) (bytecode_backend__bytecode_gen__V_34_34)));
        }
#line 713 "bytecode_gen.m"
        {
#line 713 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__V_36_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 713 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_36_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 713 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_36_36, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__EndLabel_3));
#line 713 "bytecode_gen.m"
        }
#line 714 "bytecode_gen.m"
        {
#line 714 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 714 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 714 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_38_38, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__NextLabel_25));
#line 714 "bytecode_gen.m"
        }
#line 714 "bytecode_gen.m"
        {
#line 714 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 714 "bytecode_gen.m"
          MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_37_37, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__V_38_38));
#line 714 "bytecode_gen.m"
          MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 714 "bytecode_gen.m"
        }
#line 713 "bytecode_gen.m"
        {
#line 713 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 713 "bytecode_gen.m"
          MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_35_35, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__V_36_36));
#line 713 "bytecode_gen.m"
          MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_35_35, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__V_37_37));
#line 713 "bytecode_gen.m"
        }
#line 713 "bytecode_gen.m"
        {
#line 713 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__EndofCode_27 = mercury__cord__from_list_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_47_47, bytecode_backend__bytecode_gen__V_35_35);
        }
#line 715 "bytecode_gen.m"
        {
#line 715 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__V_41_41 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_47_47, bytecode_backend__bytecode_gen__EndofCode_27, bytecode_backend__bytecode_gen__CasesCode_24);
        }
#line 715 "bytecode_gen.m"
        {
#line 715 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__V_40_40 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_47_47, bytecode_backend__bytecode_gen__GoalCode_23, bytecode_backend__bytecode_gen__V_41_41);
        }
#line 715 "bytecode_gen.m"
        {
#line 715 "bytecode_gen.m"
          *bytecode_backend__bytecode_gen__HeadVar__6_6 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_47_47, bytecode_backend__bytecode_gen__EnterCode_26, bytecode_backend__bytecode_gen__V_40_40);
        }
#line 704 "bytecode_gen.m"
      }
#line 703 "bytecode_gen.m"
  }
#line 700 "bytecode_gen.m"
}

#line 512 "bytecode_gen.m"
static void MR_CALL 
bytecode_backend__bytecode_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_p_0(
#line 512 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__HeadVar__1_1,
#line 512 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__HeadVar__4_4,
#line 512 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__HeadVar__5_5)
#line 512 "bytecode_gen.m"
{
#line 516 "bytecode_gen.m"
  {
#line 516 "bytecode_gen.m"
    MR_bool bytecode_backend__bytecode_gen__succeeded;

#line 516 "bytecode_gen.m"
    if (((MR_tag((MR_Word) bytecode_backend__bytecode_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 548 "bytecode_gen.m"
      {
#line 548 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__Target_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 548 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__Source_50 = ((MR_Word) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 548 "bytecode_gen.m"
        MR_Integer bytecode_backend__bytecode_gen__ByteTarget_55;
#line 548 "bytecode_gen.m"
        MR_Integer bytecode_backend__bytecode_gen__ByteSource_56;
#line 548 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_57_57;

#line 549 "bytecode_gen.m"
        {
#line 549 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__map_var_3_p_0(bytecode_backend__bytecode_gen__HeadVar__4_4, bytecode_backend__bytecode_gen__Target_49, &bytecode_backend__bytecode_gen__ByteTarget_55);
        }
#line 550 "bytecode_gen.m"
        {
#line 550 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__map_var_3_p_0(bytecode_backend__bytecode_gen__HeadVar__4_4, bytecode_backend__bytecode_gen__Source_50, &bytecode_backend__bytecode_gen__ByteSource_56);
        }
#line 551 "bytecode_gen.m"
        {
#line 551 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__V_57_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 551 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_57_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
#line 551 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_57_57, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteTarget_55));
#line 551 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_57_57, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteSource_56));
#line 551 "bytecode_gen.m"
        }
#line 551 "bytecode_gen.m"
        {
#line 551 "bytecode_gen.m"
          *bytecode_backend__bytecode_gen__HeadVar__5_5 = mercury__cord__singleton_1_f_0((MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0, ((MR_Box) (bytecode_backend__bytecode_gen__V_57_57)));
        }
#line 548 "bytecode_gen.m"
      }
#line 516 "bytecode_gen.m"
    else
#line 516 "bytecode_gen.m"
    if (((MR_tag((MR_Word) bytecode_backend__bytecode_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 516 "bytecode_gen.m"
      {
#line 516 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 516 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__ConsId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 516 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 2)));
#line 516 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__UniModes_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 3)));
#line 516 "bytecode_gen.m"
        MR_Integer bytecode_backend__bytecode_gen__ByteVar_17;
#line 516 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__ByteArgs_18;
#line 516 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__ByteConsId_19;
#line 515 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 4)));
#line 515 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 5)));
#line 515 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 6)));
#line 520 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_20_20;
#line 520 "bytecode_gen.m"
        MR_String bytecode_backend__bytecode_gen__V_21_21;
#line 520 "bytecode_gen.m"
        MR_Integer bytecode_backend__bytecode_gen__V_22_22;
#line 520 "bytecode_gen.m"
        MR_Integer bytecode_backend__bytecode_gen__V_23_23;
#line 520 "bytecode_gen.m"
        MR_Integer bytecode_backend__bytecode_gen__V_24_24;

#line 517 "bytecode_gen.m"
        {
#line 517 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__map_var_3_p_0(bytecode_backend__bytecode_gen__HeadVar__4_4, bytecode_backend__bytecode_gen__Var_6, &bytecode_backend__bytecode_gen__ByteVar_17);
        }
#line 518 "bytecode_gen.m"
        {
#line 518 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__map_vars_3_p_0(bytecode_backend__bytecode_gen__HeadVar__4_4, bytecode_backend__bytecode_gen__Args_8, &bytecode_backend__bytecode_gen__ByteArgs_18);
        }
#line 519 "bytecode_gen.m"
        {
#line 519 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__map_cons_id_3_p_0(bytecode_backend__bytecode_gen__HeadVar__4_4, bytecode_backend__bytecode_gen__ConsId_7, &bytecode_backend__bytecode_gen__ByteConsId_19);
        }
#line 520 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode_gen__ByteConsId_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__ByteConsId_19, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 520 "bytecode_gen.m"
        if (bytecode_backend__bytecode_gen__succeeded)
#line 520 "bytecode_gen.m"
          {
#line 520 "bytecode_gen.m"
            bytecode_backend__bytecode_gen__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__ByteConsId_19, (MR_Integer) 1)));
#line 520 "bytecode_gen.m"
            bytecode_backend__bytecode_gen__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__ByteConsId_19, (MR_Integer) 2)));
#line 520 "bytecode_gen.m"
            bytecode_backend__bytecode_gen__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__ByteConsId_19, (MR_Integer) 3)));
#line 520 "bytecode_gen.m"
            bytecode_backend__bytecode_gen__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__ByteConsId_19, (MR_Integer) 4)));
#line 520 "bytecode_gen.m"
            bytecode_backend__bytecode_gen__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__ByteConsId_19, (MR_Integer) 5)));
#line 521 "bytecode_gen.m"
            {
#line 521 "bytecode_gen.m"
              MR_Word bytecode_backend__bytecode_gen__V_27_27;

#line 521 "bytecode_gen.m"
              {
#line 521 "bytecode_gen.m"
                bytecode_backend__bytecode_gen__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 521 "bytecode_gen.m"
                MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
#line 521 "bytecode_gen.m"
                MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_27_27, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteVar_17));
#line 521 "bytecode_gen.m"
                MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_27_27, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteConsId_19));
#line 521 "bytecode_gen.m"
                MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_27_27, 3) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteArgs_18));
#line 521 "bytecode_gen.m"
              }
#line 521 "bytecode_gen.m"
              {
#line 521 "bytecode_gen.m"
                *bytecode_backend__bytecode_gen__HeadVar__5_5 = mercury__cord__singleton_1_f_0((MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0, ((MR_Box) (bytecode_backend__bytecode_gen__V_27_27)));
              }
#line 521 "bytecode_gen.m"
            }
#line 520 "bytecode_gen.m"
          }
#line 520 "bytecode_gen.m"
        else
#line 526 "bytecode_gen.m"
          {
#line 526 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__Dirs_25;

#line 526 "bytecode_gen.m"
            {
#line 526 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__map_uni_modes_4_p_0(bytecode_backend__bytecode_gen__UniModes_9, bytecode_backend__bytecode_gen__Args_8, bytecode_backend__bytecode_gen__HeadVar__4_4, &bytecode_backend__bytecode_gen__Dirs_25);
            }
#line 527 "bytecode_gen.m"
            {
#line 527 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__succeeded = bytecode_backend__bytecode_gen__all_dirs_same_2_p_0(bytecode_backend__bytecode_gen__Dirs_25, (MR_Integer) 1);
            }
#line 529 "bytecode_gen.m"
            if (bytecode_backend__bytecode_gen__succeeded)
#line 528 "bytecode_gen.m"
              {
#line 528 "bytecode_gen.m"
                MR_Word bytecode_backend__bytecode_gen__V_29_29;

#line 528 "bytecode_gen.m"
                {
#line 528 "bytecode_gen.m"
                  bytecode_backend__bytecode_gen__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 528 "bytecode_gen.m"
                  MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
#line 528 "bytecode_gen.m"
                  MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_29_29, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteVar_17));
#line 528 "bytecode_gen.m"
                  MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_29_29, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteConsId_19));
#line 528 "bytecode_gen.m"
                  MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_29_29, 3) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteArgs_18));
#line 528 "bytecode_gen.m"
                }
#line 528 "bytecode_gen.m"
                {
#line 528 "bytecode_gen.m"
                  *bytecode_backend__bytecode_gen__HeadVar__5_5 = mercury__cord__singleton_1_f_0((MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0, ((MR_Box) (bytecode_backend__bytecode_gen__V_29_29)));
                }
#line 528 "bytecode_gen.m"
              }
#line 529 "bytecode_gen.m"
            else
#line 530 "bytecode_gen.m"
              {
#line 530 "bytecode_gen.m"
                MR_Word bytecode_backend__bytecode_gen__Pairs_26;
#line 530 "bytecode_gen.m"
                MR_Word bytecode_backend__bytecode_gen__V_30_30;

#line 530 "bytecode_gen.m"
                {
#line 530 "bytecode_gen.m"
                  mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_dir_0, bytecode_backend__bytecode_gen__ByteArgs_18, bytecode_backend__bytecode_gen__Dirs_25, &bytecode_backend__bytecode_gen__Pairs_26);
                }
#line 531 "bytecode_gen.m"
                {
#line 531 "bytecode_gen.m"
                  bytecode_backend__bytecode_gen__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 531 "bytecode_gen.m"
                  MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
#line 531 "bytecode_gen.m"
                  MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_30_30, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteVar_17));
#line 531 "bytecode_gen.m"
                  MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_30_30, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteConsId_19));
#line 531 "bytecode_gen.m"
                  MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_30_30, 3) = ((MR_Box) (bytecode_backend__bytecode_gen__Pairs_26));
#line 531 "bytecode_gen.m"
                }
#line 531 "bytecode_gen.m"
                {
#line 531 "bytecode_gen.m"
                  *bytecode_backend__bytecode_gen__HeadVar__5_5 = mercury__cord__singleton_1_f_0((MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0, ((MR_Box) (bytecode_backend__bytecode_gen__V_30_30)));
                }
#line 530 "bytecode_gen.m"
              }
#line 526 "bytecode_gen.m"
          }
#line 516 "bytecode_gen.m"
      }
#line 516 "bytecode_gen.m"
    else
#line 516 "bytecode_gen.m"
    if (((MR_tag((MR_Word) bytecode_backend__bytecode_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 536 "bytecode_gen.m"
      {
#line 536 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 536 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__ConsId_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 536 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__Args_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 2)));
#line 536 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__UniModes_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 3)));
#line 536 "bytecode_gen.m"
        MR_Integer bytecode_backend__bytecode_gen__ByteVar_41;
#line 536 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__ByteArgs_42;
#line 536 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__ByteConsId_43;
#line 536 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__Dirs_44;
#line 535 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 4)));
#line 535 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 5)));

#line 537 "bytecode_gen.m"
        {
#line 537 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__map_var_3_p_0(bytecode_backend__bytecode_gen__HeadVar__4_4, bytecode_backend__bytecode_gen__Var_31, &bytecode_backend__bytecode_gen__ByteVar_41);
        }
#line 538 "bytecode_gen.m"
        {
#line 538 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__map_vars_3_p_0(bytecode_backend__bytecode_gen__HeadVar__4_4, bytecode_backend__bytecode_gen__Args_33, &bytecode_backend__bytecode_gen__ByteArgs_42);
        }
#line 539 "bytecode_gen.m"
        {
#line 539 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__map_cons_id_3_p_0(bytecode_backend__bytecode_gen__HeadVar__4_4, bytecode_backend__bytecode_gen__ConsId_32, &bytecode_backend__bytecode_gen__ByteConsId_43);
        }
#line 540 "bytecode_gen.m"
        {
#line 540 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__map_uni_modes_4_p_0(bytecode_backend__bytecode_gen__UniModes_34, bytecode_backend__bytecode_gen__Args_33, bytecode_backend__bytecode_gen__HeadVar__4_4, &bytecode_backend__bytecode_gen__Dirs_44);
        }
#line 541 "bytecode_gen.m"
        {
#line 541 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__succeeded = bytecode_backend__bytecode_gen__all_dirs_same_2_p_0(bytecode_backend__bytecode_gen__Dirs_44, (MR_Integer) 0);
        }
#line 543 "bytecode_gen.m"
        if (bytecode_backend__bytecode_gen__succeeded)
#line 542 "bytecode_gen.m"
          {
#line 542 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__V_47_47;

#line 542 "bytecode_gen.m"
            {
#line 542 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__V_47_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 542 "bytecode_gen.m"
              MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_47_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
#line 542 "bytecode_gen.m"
              MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_47_47, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteVar_41));
#line 542 "bytecode_gen.m"
              MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_47_47, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteConsId_43));
#line 542 "bytecode_gen.m"
              MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_47_47, 3) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteArgs_42));
#line 542 "bytecode_gen.m"
            }
#line 542 "bytecode_gen.m"
            {
#line 542 "bytecode_gen.m"
              *bytecode_backend__bytecode_gen__HeadVar__5_5 = mercury__cord__singleton_1_f_0((MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0, ((MR_Box) (bytecode_backend__bytecode_gen__V_47_47)));
            }
#line 542 "bytecode_gen.m"
          }
#line 543 "bytecode_gen.m"
        else
#line 544 "bytecode_gen.m"
          {
#line 544 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__Pairs_45;
#line 544 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__V_48_48;

#line 544 "bytecode_gen.m"
            {
#line 544 "bytecode_gen.m"
              mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_dir_0, bytecode_backend__bytecode_gen__ByteArgs_42, bytecode_backend__bytecode_gen__Dirs_44, &bytecode_backend__bytecode_gen__Pairs_45);
            }
#line 546 "bytecode_gen.m"
            {
#line 546 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 546 "bytecode_gen.m"
              MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
#line 546 "bytecode_gen.m"
              MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_48_48, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteVar_41));
#line 546 "bytecode_gen.m"
              MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_48_48, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteConsId_43));
#line 546 "bytecode_gen.m"
              MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_48_48, 3) = ((MR_Box) (bytecode_backend__bytecode_gen__Pairs_45));
#line 546 "bytecode_gen.m"
            }
#line 545 "bytecode_gen.m"
            {
#line 545 "bytecode_gen.m"
              *bytecode_backend__bytecode_gen__HeadVar__5_5 = mercury__cord__singleton_1_f_0((MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0, ((MR_Box) (bytecode_backend__bytecode_gen__V_48_48)));
            }
#line 544 "bytecode_gen.m"
          }
#line 536 "bytecode_gen.m"
      }
#line 516 "bytecode_gen.m"
    else
#line 516 "bytecode_gen.m"
    if (((((MR_tag((MR_Word) bytecode_backend__bytecode_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 612 "bytecode_gen.m"
      {
#line 613 "bytecode_gen.m"
        {
#line 613 "bytecode_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.gen_unify\'/5", (MR_String) "complicated unify");
#line 613 "bytecode_gen.m"
          return;
        }
#line 612 "bytecode_gen.m"
      }
#line 516 "bytecode_gen.m"
    else
#line 552 "bytecode_gen.m"
      {
#line 552 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__Var1_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 552 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__Var2_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 2)));
#line 552 "bytecode_gen.m"
        MR_Integer bytecode_backend__bytecode_gen__ByteVar1_64;
#line 552 "bytecode_gen.m"
        MR_Integer bytecode_backend__bytecode_gen__ByteVar2_65;
#line 552 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__Var1Type_66;
#line 552 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__Var2Type_67;
#line 552 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__TypeCtor_70;
#line 552 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__ModuleInfo_73;
#line 552 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__TypeCategory_76;
#line 552 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__TestId_77;
#line 552 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_113_113;
#line 566 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__TypeCtor1_68;
#line 566 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__TypeCtor2_69;
#line 569 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_71_71;
#line 569 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_72_72;
#line 569 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_74_74;
#line 569 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_75_75;

#line 553 "bytecode_gen.m"
        {
#line 553 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__map_var_3_p_0(bytecode_backend__bytecode_gen__HeadVar__4_4, bytecode_backend__bytecode_gen__Var1_58, &bytecode_backend__bytecode_gen__ByteVar1_64);
        }
#line 554 "bytecode_gen.m"
        {
#line 554 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__map_var_3_p_0(bytecode_backend__bytecode_gen__HeadVar__4_4, bytecode_backend__bytecode_gen__Var2_59, &bytecode_backend__bytecode_gen__ByteVar2_65);
        }
#line 555 "bytecode_gen.m"
        {
#line 555 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__get_var_type_3_p_0(bytecode_backend__bytecode_gen__HeadVar__4_4, bytecode_backend__bytecode_gen__Var1_58, &bytecode_backend__bytecode_gen__Var1Type_66);
        }
#line 556 "bytecode_gen.m"
        {
#line 556 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__get_var_type_3_p_0(bytecode_backend__bytecode_gen__HeadVar__4_4, bytecode_backend__bytecode_gen__Var2_59, &bytecode_backend__bytecode_gen__Var2Type_67);
        }
#line 558 "bytecode_gen.m"
        {
#line 558 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(bytecode_backend__bytecode_gen__Var1Type_66, &bytecode_backend__bytecode_gen__TypeCtor1_68);
        }
#line 558 "bytecode_gen.m"
        if (bytecode_backend__bytecode_gen__succeeded)
#line 559 "bytecode_gen.m"
          {
#line 559 "bytecode_gen.m"
            bytecode_backend__bytecode_gen__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(bytecode_backend__bytecode_gen__Var2Type_67, &bytecode_backend__bytecode_gen__TypeCtor2_69);
          }
#line 566 "bytecode_gen.m"
        if (bytecode_backend__bytecode_gen__succeeded)
#line 563 "bytecode_gen.m"
          {
#line 561 "bytecode_gen.m"
            {
#line 561 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(bytecode_backend__bytecode_gen__TypeCtor2_69, bytecode_backend__bytecode_gen__TypeCtor1_68);
            }
#line 563 "bytecode_gen.m"
            if (bytecode_backend__bytecode_gen__succeeded)
#line 562 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__TypeCtor_70 = bytecode_backend__bytecode_gen__TypeCtor1_68;
#line 563 "bytecode_gen.m"
            else
#line 564 "bytecode_gen.m"
              {
#line 564 "bytecode_gen.m"
                {
#line 564 "bytecode_gen.m"
                  mercury__require__unexpected_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.gen_unify\'/5", (MR_String) "simple_test between different types");
#line 564 "bytecode_gen.m"
                  return;
                }
#line 564 "bytecode_gen.m"
              }
#line 563 "bytecode_gen.m"
          }
#line 566 "bytecode_gen.m"
        else
#line 567 "bytecode_gen.m"
          {
#line 567 "bytecode_gen.m"
            {
#line 567 "bytecode_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.gen_unify\'/5", (MR_String) "failed lookup of type id");
#line 567 "bytecode_gen.m"
              return;
            }
#line 567 "bytecode_gen.m"
          }
#line 569 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__4_4, (MR_Integer) 0)));
#line 569 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__4_4, (MR_Integer) 1)));
#line 569 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__ModuleInfo_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__4_4, (MR_Integer) 2)));
#line 569 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__4_4, (MR_Integer) 3)));
#line 569 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__4_4, (MR_Integer) 4)));
#line 570 "bytecode_gen.m"
        {
#line 570 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__TypeCategory_76 = check_hlds__type_util__classify_type_ctor_2_f_0(bytecode_backend__bytecode_gen__ModuleInfo_73, bytecode_backend__bytecode_gen__TypeCtor_70);
        }
#line 574 "bytecode_gen.m"
        if ((bytecode_backend__bytecode_gen__TypeCategory_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 584 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__TestId_77 = (MR_Integer) 5;
#line 574 "bytecode_gen.m"
        else
#line 574 "bytecode_gen.m"
        if ((bytecode_backend__bytecode_gen__TypeCategory_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 593 "bytecode_gen.m"
          {
#line 594 "bytecode_gen.m"
            {
#line 594 "bytecode_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.gen_unify\'/5", (MR_String) "higher_order_type");
#line 594 "bytecode_gen.m"
              return;
            }
#line 593 "bytecode_gen.m"
          }
#line 574 "bytecode_gen.m"
        else
#line 574 "bytecode_gen.m"
        if ((bytecode_backend__bytecode_gen__TypeCategory_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 596 "bytecode_gen.m"
          {
#line 597 "bytecode_gen.m"
            {
#line 597 "bytecode_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.gen_unify\'/5", (MR_String) "tuple_type");
#line 597 "bytecode_gen.m"
              return;
            }
#line 596 "bytecode_gen.m"
          }
#line 574 "bytecode_gen.m"
        else
#line 574 "bytecode_gen.m"
        if ((bytecode_backend__bytecode_gen__TypeCategory_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 602 "bytecode_gen.m"
          {
#line 603 "bytecode_gen.m"
            {
#line 603 "bytecode_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.gen_unify\'/5", (MR_String) "variable_type");
#line 603 "bytecode_gen.m"
              return;
            }
#line 602 "bytecode_gen.m"
          }
#line 574 "bytecode_gen.m"
        else
#line 574 "bytecode_gen.m"
        if ((bytecode_backend__bytecode_gen__TypeCategory_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 605 "bytecode_gen.m"
          {
#line 606 "bytecode_gen.m"
            {
#line 606 "bytecode_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.gen_unify\'/5", (MR_String) "void_type");
#line 606 "bytecode_gen.m"
              return;
            }
#line 605 "bytecode_gen.m"
          }
#line 574 "bytecode_gen.m"
        else
#line 574 "bytecode_gen.m"
        if (((MR_tag((MR_Word) bytecode_backend__bytecode_gen__TypeCategory_76)) == (MR_mktag((MR_Integer) 1))))
#line 574 "bytecode_gen.m"
          {
#line 574 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__TypeCategory_76, (MR_Integer) 0)));

#line 574 "bytecode_gen.m"
            if ((bytecode_backend__bytecode_gen__V_135_135 == (MR_Integer) 2))
#line 576 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__TestId_77 = (MR_Integer) 1;
#line 574 "bytecode_gen.m"
            else
#line 574 "bytecode_gen.m"
            if ((bytecode_backend__bytecode_gen__V_135_135 == (MR_Integer) 1))
#line 582 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__TestId_77 = (MR_Integer) 3;
#line 574 "bytecode_gen.m"
            else
#line 574 "bytecode_gen.m"
            if ((bytecode_backend__bytecode_gen__V_135_135 == (MR_Integer) 0))
#line 573 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__TestId_77 = (MR_Integer) 0;
#line 574 "bytecode_gen.m"
            else
#line 579 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__TestId_77 = (MR_Integer) 2;
#line 574 "bytecode_gen.m"
          }
#line 574 "bytecode_gen.m"
        else
#line 574 "bytecode_gen.m"
        if (((MR_tag((MR_Word) bytecode_backend__bytecode_gen__TypeCategory_76)) == (MR_mktag((MR_Integer) 2))))
#line 574 "bytecode_gen.m"
          {
#line 574 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode_gen__TypeCategory_76, (MR_Integer) 0)));

#line 574 "bytecode_gen.m"
            if ((bytecode_backend__bytecode_gen__V_136_136 == (MR_Integer) 1))
#line 590 "bytecode_gen.m"
              {
#line 591 "bytecode_gen.m"
                {
#line 591 "bytecode_gen.m"
                  mercury__require__sorry_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.gen_unify\'/5", (MR_String) "foreign enums with bytecode backend");
#line 591 "bytecode_gen.m"
                  return;
                }
#line 590 "bytecode_gen.m"
              }
#line 574 "bytecode_gen.m"
            else
#line 588 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__TestId_77 = (MR_Integer) 4;
#line 574 "bytecode_gen.m"
          }
#line 574 "bytecode_gen.m"
        else
#line 574 "bytecode_gen.m"
        if (((((MR_tag((MR_Word) bytecode_backend__bytecode_gen__TypeCategory_76)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__TypeCategory_76, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 608 "bytecode_gen.m"
          {
#line 609 "bytecode_gen.m"
            {
#line 609 "bytecode_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.gen_unify\'/5", (MR_String) "system type");
#line 609 "bytecode_gen.m"
              return;
            }
#line 608 "bytecode_gen.m"
          }
#line 574 "bytecode_gen.m"
        else
#line 599 "bytecode_gen.m"
          {
#line 600 "bytecode_gen.m"
            {
#line 600 "bytecode_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.gen_unify\'/5", (MR_String) "user_ctor_type");
#line 600 "bytecode_gen.m"
              return;
            }
#line 599 "bytecode_gen.m"
          }
#line 611 "bytecode_gen.m"
        {
#line 611 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__V_113_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 611 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_113_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
#line 611 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_113_113, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteVar1_64));
#line 611 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_113_113, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteVar2_65));
#line 611 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_113_113, 3) = ((MR_Box) (bytecode_backend__bytecode_gen__TestId_77));
#line 611 "bytecode_gen.m"
        }
#line 611 "bytecode_gen.m"
        {
#line 611 "bytecode_gen.m"
          *bytecode_backend__bytecode_gen__HeadVar__5_5 = mercury__cord__singleton_1_f_0((MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0, ((MR_Box) (bytecode_backend__bytecode_gen__V_113_113)));
        }
#line 552 "bytecode_gen.m"
      }
#line 516 "bytecode_gen.m"
  }
#line 512 "bytecode_gen.m"
}

#line 879 "bytecode_gen.m"
static void MR_CALL 
bytecode_backend__bytecode_gen____Compare____byte_info_0_0(
#line 879 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__HeadVar__1_1,
#line 879 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__HeadVar__2_2,
#line 879 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__HeadVar__3_3)
#line 879 "bytecode_gen.m"
{
#line 879 "bytecode_gen.m"
  {
#line 879 "bytecode_gen.m"
    MR_bool bytecode_backend__bytecode_gen__succeeded;
#line 879 "bytecode_gen.m"
    MR_Integer bytecode_backend__bytecode_gen__CastX_18 = (MR_Integer) bytecode_backend__bytecode_gen__HeadVar__2_2;
#line 879 "bytecode_gen.m"
    MR_Integer bytecode_backend__bytecode_gen__CastY_19 = (MR_Integer) bytecode_backend__bytecode_gen__HeadVar__3_3;

#line 879 "bytecode_gen.m"
    bytecode_backend__bytecode_gen__succeeded = (bytecode_backend__bytecode_gen__CastX_18 == bytecode_backend__bytecode_gen__CastY_19);
#line 879 "bytecode_gen.m"
    if (bytecode_backend__bytecode_gen__succeeded)
#line 1888 "bytecode_backend.bytecode_gen.c"
      *bytecode_backend__bytecode_gen__HeadVar__1_1 = (MR_Integer) 0;
#line 879 "bytecode_gen.m"
    else
#line 879 "bytecode_gen.m"
      {
#line 879 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 879 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 879 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__2_2, (MR_Integer) 2)));
#line 879 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__2_2, (MR_Integer) 3)));
#line 879 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__2_2, (MR_Integer) 4)));
#line 879 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__3_3, (MR_Integer) 0)));
#line 879 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__3_3, (MR_Integer) 1)));
#line 879 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__3_3, (MR_Integer) 2)));
#line 879 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__3_3, (MR_Integer) 3)));
#line 879 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__3_3, (MR_Integer) 4)));
#line 879 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_14_14;

#line 879 "bytecode_gen.m"
        {
#line 879 "bytecode_gen.m"
          mercury__builtin__compare_3_p_0((MR_Word) &bytecode_backend__bytecode_gen_scalar_common_2[1], &bytecode_backend__bytecode_gen__V_14_14, ((MR_Box) (bytecode_backend__bytecode_gen__V_4_4)), ((MR_Box) (bytecode_backend__bytecode_gen__V_9_9)));
        }
#line 1922 "bytecode_backend.bytecode_gen.c"
        bytecode_backend__bytecode_gen__succeeded = (bytecode_backend__bytecode_gen__V_14_14 == (MR_Integer) 0);
#line 879 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__succeeded = !(bytecode_backend__bytecode_gen__succeeded);
#line 879 "bytecode_gen.m"
        if (bytecode_backend__bytecode_gen__succeeded)
#line 879 "bytecode_gen.m"
          *bytecode_backend__bytecode_gen__HeadVar__1_1 = bytecode_backend__bytecode_gen__V_14_14;
#line 879 "bytecode_gen.m"
        else
#line 879 "bytecode_gen.m"
          {
#line 879 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__V_15_15;

#line 879 "bytecode_gen.m"
            {
#line 879 "bytecode_gen.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, &bytecode_backend__bytecode_gen__V_15_15, ((MR_Box) (bytecode_backend__bytecode_gen__V_5_5)), ((MR_Box) (bytecode_backend__bytecode_gen__V_10_10)));
            }
#line 1942 "bytecode_backend.bytecode_gen.c"
            bytecode_backend__bytecode_gen__succeeded = (bytecode_backend__bytecode_gen__V_15_15 == (MR_Integer) 0);
#line 879 "bytecode_gen.m"
            bytecode_backend__bytecode_gen__succeeded = !(bytecode_backend__bytecode_gen__succeeded);
#line 879 "bytecode_gen.m"
            if (bytecode_backend__bytecode_gen__succeeded)
#line 879 "bytecode_gen.m"
              *bytecode_backend__bytecode_gen__HeadVar__1_1 = bytecode_backend__bytecode_gen__V_15_15;
#line 879 "bytecode_gen.m"
            else
#line 879 "bytecode_gen.m"
              {
#line 879 "bytecode_gen.m"
                MR_Word bytecode_backend__bytecode_gen__V_16_16;

#line 879 "bytecode_gen.m"
                {
#line 879 "bytecode_gen.m"
                  hlds__hlds_module____Compare____module_info_0_0(&bytecode_backend__bytecode_gen__V_16_16, bytecode_backend__bytecode_gen__V_6_6, bytecode_backend__bytecode_gen__V_11_11);
                }
#line 1962 "bytecode_backend.bytecode_gen.c"
                bytecode_backend__bytecode_gen__succeeded = (bytecode_backend__bytecode_gen__V_16_16 == (MR_Integer) 0);
#line 879 "bytecode_gen.m"
                bytecode_backend__bytecode_gen__succeeded = !(bytecode_backend__bytecode_gen__succeeded);
#line 879 "bytecode_gen.m"
                if (bytecode_backend__bytecode_gen__succeeded)
#line 879 "bytecode_gen.m"
                  *bytecode_backend__bytecode_gen__HeadVar__1_1 = bytecode_backend__bytecode_gen__V_16_16;
#line 879 "bytecode_gen.m"
                else
#line 879 "bytecode_gen.m"
                  {
#line 879 "bytecode_gen.m"
                    MR_Word bytecode_backend__bytecode_gen__V_17_17;

#line 879 "bytecode_gen.m"
                    {
#line 879 "bytecode_gen.m"
                      mercury__counter____Compare____counter_0_0(&bytecode_backend__bytecode_gen__V_17_17, bytecode_backend__bytecode_gen__V_7_7, bytecode_backend__bytecode_gen__V_12_12);
                    }
#line 1982 "bytecode_backend.bytecode_gen.c"
                    bytecode_backend__bytecode_gen__succeeded = (bytecode_backend__bytecode_gen__V_17_17 == (MR_Integer) 0);
#line 879 "bytecode_gen.m"
                    bytecode_backend__bytecode_gen__succeeded = !(bytecode_backend__bytecode_gen__succeeded);
#line 879 "bytecode_gen.m"
                    if (bytecode_backend__bytecode_gen__succeeded)
#line 879 "bytecode_gen.m"
                      *bytecode_backend__bytecode_gen__HeadVar__1_1 = bytecode_backend__bytecode_gen__V_17_17;
#line 879 "bytecode_gen.m"
                    else
#line 879 "bytecode_gen.m"
                      {
#line 879 "bytecode_gen.m"
                        mercury__counter____Compare____counter_0_0(bytecode_backend__bytecode_gen__HeadVar__1_1, bytecode_backend__bytecode_gen__V_8_8, bytecode_backend__bytecode_gen__V_13_13);
#line 879 "bytecode_gen.m"
                        return;
                      }
#line 879 "bytecode_gen.m"
                  }
#line 879 "bytecode_gen.m"
              }
#line 879 "bytecode_gen.m"
          }
#line 879 "bytecode_gen.m"
      }
#line 879 "bytecode_gen.m"
  }
#line 879 "bytecode_gen.m"
}

#line 879 "bytecode_gen.m"
static MR_bool MR_CALL 
bytecode_backend__bytecode_gen____Unify____byte_info_0_0(
#line 879 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__HeadVar__1_1,
#line 879 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__HeadVar__2_2)
#line 879 "bytecode_gen.m"
{
#line 879 "bytecode_gen.m"
  {
#line 879 "bytecode_gen.m"
    MR_bool bytecode_backend__bytecode_gen__succeeded;
#line 879 "bytecode_gen.m"
    MR_Integer bytecode_backend__bytecode_gen__CastX_13 = (MR_Integer) bytecode_backend__bytecode_gen__HeadVar__1_1;
#line 879 "bytecode_gen.m"
    MR_Integer bytecode_backend__bytecode_gen__CastY_14 = (MR_Integer) bytecode_backend__bytecode_gen__HeadVar__2_2;

#line 879 "bytecode_gen.m"
    bytecode_backend__bytecode_gen__succeeded = (bytecode_backend__bytecode_gen__CastX_13 == bytecode_backend__bytecode_gen__CastY_14);
#line 879 "bytecode_gen.m"
    if (bytecode_backend__bytecode_gen__succeeded)
#line 879 "bytecode_gen.m"
      bytecode_backend__bytecode_gen__succeeded = MR_TRUE;
#line 879 "bytecode_gen.m"
    else
#line 879 "bytecode_gen.m"
      {
#line 879 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__TypeCtorInfo_16_16;
#line 879 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 879 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 879 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 2)));
#line 879 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 3)));
#line 879 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 4)));
#line 879 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 879 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 879 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__2_2, (MR_Integer) 2)));
#line 879 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__2_2, (MR_Integer) 3)));
#line 879 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__2_2, (MR_Integer) 4)));

#line 2063 "bytecode_backend.bytecode_gen.c"
        {
#line 2065 "bytecode_backend.bytecode_gen.c"
          bytecode_backend__bytecode_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &bytecode_backend__bytecode_gen_scalar_common_2[1], ((MR_Box) (bytecode_backend__bytecode_gen__V_3_3)), ((MR_Box) (bytecode_backend__bytecode_gen__V_8_8)));
        }
#line 879 "bytecode_gen.m"
        if (bytecode_backend__bytecode_gen__succeeded)
#line 879 "bytecode_gen.m"
          {
#line 2072 "bytecode_backend.bytecode_gen.c"
            bytecode_backend__bytecode_gen__TypeCtorInfo_16_16 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0;
#line 2074 "bytecode_backend.bytecode_gen.c"
            {
#line 2076 "bytecode_backend.bytecode_gen.c"
              bytecode_backend__bytecode_gen__succeeded = mercury__builtin__unify_2_p_0(bytecode_backend__bytecode_gen__TypeCtorInfo_16_16, ((MR_Box) (bytecode_backend__bytecode_gen__V_4_4)), ((MR_Box) (bytecode_backend__bytecode_gen__V_9_9)));
            }
#line 879 "bytecode_gen.m"
            if (bytecode_backend__bytecode_gen__succeeded)
#line 879 "bytecode_gen.m"
              {
#line 2083 "bytecode_backend.bytecode_gen.c"
                {
#line 2085 "bytecode_backend.bytecode_gen.c"
                  bytecode_backend__bytecode_gen__succeeded = hlds__hlds_module____Unify____module_info_0_0(bytecode_backend__bytecode_gen__V_5_5, bytecode_backend__bytecode_gen__V_10_10);
                }
#line 879 "bytecode_gen.m"
                if (bytecode_backend__bytecode_gen__succeeded)
#line 879 "bytecode_gen.m"
                  {
#line 2092 "bytecode_backend.bytecode_gen.c"
                    {
#line 2094 "bytecode_backend.bytecode_gen.c"
                      bytecode_backend__bytecode_gen__succeeded = mercury__counter____Unify____counter_0_0(bytecode_backend__bytecode_gen__V_6_6, bytecode_backend__bytecode_gen__V_11_11);
                    }
#line 879 "bytecode_gen.m"
                    if (bytecode_backend__bytecode_gen__succeeded)
#line 2099 "bytecode_backend.bytecode_gen.c"
                      {
#line 2101 "bytecode_backend.bytecode_gen.c"
                        return bytecode_backend__bytecode_gen__succeeded = mercury__counter____Unify____counter_0_0(bytecode_backend__bytecode_gen__V_7_7, bytecode_backend__bytecode_gen__V_12_12);
                      }
#line 879 "bytecode_gen.m"
                  }
#line 879 "bytecode_gen.m"
              }
#line 879 "bytecode_gen.m"
          }
#line 879 "bytecode_gen.m"
      }
#line 879 "bytecode_gen.m"
    return bytecode_backend__bytecode_gen__succeeded;
#line 879 "bytecode_gen.m"
  }
#line 879 "bytecode_gen.m"
}

#line 941 "bytecode_gen.m"
static void MR_CALL 
bytecode_backend__bytecode_gen__get_counts_3_p_0(
#line 941 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__ByteInfo0_4,
#line 941 "bytecode_gen.m"
  MR_Integer * bytecode_backend__bytecode_gen__Label_5,
#line 941 "bytecode_gen.m"
  MR_Integer * bytecode_backend__bytecode_gen__Temp_6)
#line 941 "bytecode_gen.m"
{
#line 943 "bytecode_gen.m"
  {
#line 943 "bytecode_gen.m"
    MR_bool bytecode_backend__bytecode_gen__succeeded;
#line 943 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__LabelCounter0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo0_4, (MR_Integer) 3)));
#line 943 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__TempCounter0_9;
#line 944 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo0_4, (MR_Integer) 0)));
#line 944 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo0_4, (MR_Integer) 1)));
#line 944 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo0_4, (MR_Integer) 2)));
#line 944 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo0_4, (MR_Integer) 4)));
#line 945 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen___LabelCounter_8;
#line 946 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_15_15;
#line 946 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_16_16;
#line 946 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_17_17;
#line 946 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_18_18;
#line 947 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen___TempCounter_10;

#line 945 "bytecode_gen.m"
    {
#line 945 "bytecode_gen.m"
      mercury__counter__allocate_3_p_0(bytecode_backend__bytecode_gen__Label_5, bytecode_backend__bytecode_gen__LabelCounter0_7, &bytecode_backend__bytecode_gen___LabelCounter_8);
    }
#line 946 "bytecode_gen.m"
    bytecode_backend__bytecode_gen__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo0_4, (MR_Integer) 0)));
#line 946 "bytecode_gen.m"
    bytecode_backend__bytecode_gen__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo0_4, (MR_Integer) 1)));
#line 946 "bytecode_gen.m"
    bytecode_backend__bytecode_gen__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo0_4, (MR_Integer) 2)));
#line 946 "bytecode_gen.m"
    bytecode_backend__bytecode_gen__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo0_4, (MR_Integer) 3)));
#line 946 "bytecode_gen.m"
    bytecode_backend__bytecode_gen__TempCounter0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo0_4, (MR_Integer) 4)));
#line 947 "bytecode_gen.m"
    {
#line 947 "bytecode_gen.m"
      mercury__counter__allocate_3_p_0(bytecode_backend__bytecode_gen__Temp_6, bytecode_backend__bytecode_gen__TempCounter0_9, &bytecode_backend__bytecode_gen___TempCounter_10);
    }
#line 943 "bytecode_gen.m"
  }
#line 941 "bytecode_gen.m"
}

#line 933 "bytecode_gen.m"
static void MR_CALL 
bytecode_backend__bytecode_gen__get_next_temp_3_p_0(
#line 933 "bytecode_gen.m"
  MR_Integer * bytecode_backend__bytecode_gen__Temp_4,
#line 933 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_8,
#line 933 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_9)
#line 933 "bytecode_gen.m"
{
#line 936 "bytecode_gen.m"
  {
#line 936 "bytecode_gen.m"
    MR_bool bytecode_backend__bytecode_gen__succeeded;
#line 936 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__TempCounter0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_8, (MR_Integer) 4)));
#line 936 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__TempCounter_7;
#line 937 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_8, (MR_Integer) 0)));
#line 937 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_8, (MR_Integer) 1)));
#line 937 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_8, (MR_Integer) 2)));
#line 937 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_8, (MR_Integer) 3)));
#line 939 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_15_15;
#line 939 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_16_16;
#line 939 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_17_17;
#line 939 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_18_18;
#line 939 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_19_19;

#line 938 "bytecode_gen.m"
    {
#line 938 "bytecode_gen.m"
      mercury__counter__allocate_3_p_0(bytecode_backend__bytecode_gen__Temp_4, bytecode_backend__bytecode_gen__TempCounter0_6, &bytecode_backend__bytecode_gen__TempCounter_7);
    }
#line 939 "bytecode_gen.m"
    bytecode_backend__bytecode_gen__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_8, (MR_Integer) 0)));
#line 939 "bytecode_gen.m"
    bytecode_backend__bytecode_gen__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_8, (MR_Integer) 1)));
#line 939 "bytecode_gen.m"
    bytecode_backend__bytecode_gen__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_8, (MR_Integer) 2)));
#line 939 "bytecode_gen.m"
    bytecode_backend__bytecode_gen__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_8, (MR_Integer) 3)));
#line 939 "bytecode_gen.m"
    bytecode_backend__bytecode_gen__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_8, (MR_Integer) 4)));
#line 939 "bytecode_gen.m"
    {
#line 939 "bytecode_gen.m"
      MR_Word base;
#line 939 "bytecode_gen.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 939 "bytecode_gen.m"
      *bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_9 = base;
#line 939 "bytecode_gen.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__V_15_15));
#line 939 "bytecode_gen.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__V_16_16));
#line 939 "bytecode_gen.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__V_17_17));
#line 939 "bytecode_gen.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (bytecode_backend__bytecode_gen__V_18_18));
#line 939 "bytecode_gen.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (bytecode_backend__bytecode_gen__TempCounter_7));
#line 939 "bytecode_gen.m"
    }
#line 936 "bytecode_gen.m"
  }
#line 933 "bytecode_gen.m"
}

#line 925 "bytecode_gen.m"
static void MR_CALL 
bytecode_backend__bytecode_gen__get_next_label_3_p_0(
#line 925 "bytecode_gen.m"
  MR_Integer * bytecode_backend__bytecode_gen__Label_4,
#line 925 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_8,
#line 925 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_9)
#line 925 "bytecode_gen.m"
{
#line 928 "bytecode_gen.m"
  {
#line 928 "bytecode_gen.m"
    MR_bool bytecode_backend__bytecode_gen__succeeded;
#line 928 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__LabelCounter0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_8, (MR_Integer) 3)));
#line 928 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__LabelCounter_7;
#line 929 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_8, (MR_Integer) 0)));
#line 929 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_8, (MR_Integer) 1)));
#line 929 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_8, (MR_Integer) 2)));
#line 929 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_8, (MR_Integer) 4)));
#line 931 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_15_15;
#line 931 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_16_16;
#line 931 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_17_17;
#line 931 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_19_19;
#line 931 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_18_18;

#line 930 "bytecode_gen.m"
    {
#line 930 "bytecode_gen.m"
      mercury__counter__allocate_3_p_0(bytecode_backend__bytecode_gen__Label_4, bytecode_backend__bytecode_gen__LabelCounter0_6, &bytecode_backend__bytecode_gen__LabelCounter_7);
    }
#line 931 "bytecode_gen.m"
    bytecode_backend__bytecode_gen__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_8, (MR_Integer) 0)));
#line 931 "bytecode_gen.m"
    bytecode_backend__bytecode_gen__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_8, (MR_Integer) 1)));
#line 931 "bytecode_gen.m"
    bytecode_backend__bytecode_gen__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_8, (MR_Integer) 2)));
#line 931 "bytecode_gen.m"
    bytecode_backend__bytecode_gen__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_8, (MR_Integer) 3)));
#line 931 "bytecode_gen.m"
    bytecode_backend__bytecode_gen__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_8, (MR_Integer) 4)));
#line 931 "bytecode_gen.m"
    {
#line 931 "bytecode_gen.m"
      MR_Word base;
#line 931 "bytecode_gen.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 931 "bytecode_gen.m"
      *bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_9 = base;
#line 931 "bytecode_gen.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__V_15_15));
#line 931 "bytecode_gen.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__V_16_16));
#line 931 "bytecode_gen.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__V_17_17));
#line 931 "bytecode_gen.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (bytecode_backend__bytecode_gen__LabelCounter_7));
#line 931 "bytecode_gen.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (bytecode_backend__bytecode_gen__V_19_19));
#line 931 "bytecode_gen.m"
    }
#line 928 "bytecode_gen.m"
  }
#line 925 "bytecode_gen.m"
}

#line 919 "bytecode_gen.m"
static void MR_CALL 
bytecode_backend__bytecode_gen__get_var_type_3_p_0(
#line 919 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__ByteInfo_4,
#line 919 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__Var_5,
#line 919 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__Type_6)
#line 919 "bytecode_gen.m"
{
#line 922 "bytecode_gen.m"
  {
#line 922 "bytecode_gen.m"
    MR_bool bytecode_backend__bytecode_gen__succeeded;
#line 922 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_4, (MR_Integer) 1)));
#line 923 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_4, (MR_Integer) 0)));
#line 923 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_4, (MR_Integer) 2)));
#line 923 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_4, (MR_Integer) 3)));
#line 923 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_4, (MR_Integer) 4)));

#line 923 "bytecode_gen.m"
    {
#line 923 "bytecode_gen.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(bytecode_backend__bytecode_gen__V_7_7, bytecode_backend__bytecode_gen__Var_5, bytecode_backend__bytecode_gen__Type_6);
#line 923 "bytecode_gen.m"
      return;
    }
#line 922 "bytecode_gen.m"
  }
#line 919 "bytecode_gen.m"
}

#line 913 "bytecode_gen.m"
static void MR_CALL 
bytecode_backend__bytecode_gen__map_var_3_p_0(
#line 913 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__ByteInfo_4,
#line 913 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__Var_5,
#line 913 "bytecode_gen.m"
  MR_Integer * bytecode_backend__bytecode_gen__ByteVar_6)
#line 913 "bytecode_gen.m"
{
#line 916 "bytecode_gen.m"
  {
#line 916 "bytecode_gen.m"
    MR_bool bytecode_backend__bytecode_gen__succeeded;
#line 916 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_4, (MR_Integer) 0)));
#line 917 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_4, (MR_Integer) 1)));
#line 917 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_4, (MR_Integer) 2)));
#line 917 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_4, (MR_Integer) 3)));
#line 917 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_4, (MR_Integer) 4)));
#line 917 "bytecode_gen.m"
    MR_Box bytecode_backend__bytecode_gen__conv0_ByteVar_6;

#line 917 "bytecode_gen.m"
    {
#line 917 "bytecode_gen.m"
      mercury__map__lookup_3_p_0((MR_Word) &bytecode_backend__bytecode_gen_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, bytecode_backend__bytecode_gen__V_7_7, ((MR_Box) (bytecode_backend__bytecode_gen__Var_5)), &bytecode_backend__bytecode_gen__conv0_ByteVar_6);
    }
#line 917 "bytecode_gen.m"
    *bytecode_backend__bytecode_gen__ByteVar_6 = ((MR_Integer) bytecode_backend__bytecode_gen__conv0_ByteVar_6);
#line 916 "bytecode_gen.m"
  }
#line 913 "bytecode_gen.m"
}

#line 905 "bytecode_gen.m"
static void MR_CALL 
bytecode_backend__bytecode_gen__map_vars_2_3_p_0(
#line 905 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__HeadVar__1_1,
#line 905 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__HeadVar__2_2,
#line 905 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__HeadVar__3_3)
#line 905 "bytecode_gen.m"
{
#line 908 "bytecode_gen.m"
  {
#line 908 "bytecode_gen.m"
    MR_bool bytecode_backend__bytecode_gen__succeeded;

#line 908 "bytecode_gen.m"
    if ((bytecode_backend__bytecode_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 908 "bytecode_gen.m"
      *bytecode_backend__bytecode_gen__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 908 "bytecode_gen.m"
    else
#line 909 "bytecode_gen.m"
      {
#line 909 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 909 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__Vars_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 909 "bytecode_gen.m"
        MR_Integer bytecode_backend__bytecode_gen__ByteVar_8;
#line 909 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__ByteVars_9;
#line 910 "bytecode_gen.m"
        MR_Box bytecode_backend__bytecode_gen__conv0_ByteVar_8;

#line 910 "bytecode_gen.m"
        {
#line 910 "bytecode_gen.m"
          mercury__map__lookup_3_p_0((MR_Word) &bytecode_backend__bytecode_gen_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, bytecode_backend__bytecode_gen__HeadVar__1_1, ((MR_Box) (bytecode_backend__bytecode_gen__Var_6)), &bytecode_backend__bytecode_gen__conv0_ByteVar_8);
        }
#line 910 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__ByteVar_8 = ((MR_Integer) bytecode_backend__bytecode_gen__conv0_ByteVar_8);
#line 911 "bytecode_gen.m"
        {
#line 911 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__map_vars_2_3_p_0(bytecode_backend__bytecode_gen__HeadVar__1_1, bytecode_backend__bytecode_gen__Vars_7, &bytecode_backend__bytecode_gen__ByteVars_9);
        }
#line 909 "bytecode_gen.m"
        {
#line 909 "bytecode_gen.m"
          MR_Word base;
#line 909 "bytecode_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 909 "bytecode_gen.m"
          *bytecode_backend__bytecode_gen__HeadVar__3_3 = base;
#line 909 "bytecode_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteVar_8));
#line 909 "bytecode_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteVars_9));
#line 909 "bytecode_gen.m"
        }
#line 909 "bytecode_gen.m"
      }
#line 908 "bytecode_gen.m"
  }
#line 905 "bytecode_gen.m"
}

#line 899 "bytecode_gen.m"
static void MR_CALL 
bytecode_backend__bytecode_gen__map_vars_3_p_0(
#line 899 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__ByteInfo_4,
#line 899 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__Vars_5,
#line 899 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__ByteVars_6)
#line 899 "bytecode_gen.m"
{
#line 902 "bytecode_gen.m"
  {
#line 902 "bytecode_gen.m"
    MR_bool bytecode_backend__bytecode_gen__succeeded;
#line 902 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_4, (MR_Integer) 0)));
#line 903 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_4, (MR_Integer) 1)));
#line 903 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_4, (MR_Integer) 2)));
#line 903 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_4, (MR_Integer) 3)));
#line 903 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_4, (MR_Integer) 4)));

#line 903 "bytecode_gen.m"
    {
#line 903 "bytecode_gen.m"
      bytecode_backend__bytecode_gen__map_vars_2_3_p_0(bytecode_backend__bytecode_gen__V_7_7, bytecode_backend__bytecode_gen__Vars_5, bytecode_backend__bytecode_gen__ByteVars_6);
#line 903 "bytecode_gen.m"
      return;
    }
#line 902 "bytecode_gen.m"
  }
#line 899 "bytecode_gen.m"
}

#line 864 "bytecode_gen.m"
static void MR_CALL 
bytecode_backend__bytecode_gen__create_varmap_7_p_0(
#line 864 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__HeadVar__1_1,
#line 864 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__VarSet_2,
#line 864 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__VarTypes_3,
#line 864 "bytecode_gen.m"
  MR_Integer bytecode_backend__bytecode_gen__N0_4,
#line 864 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_VarMap_0_5,
#line 864 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__STATE_VARIABLE_VarMap_6,
#line 864 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__HeadVar__7_7)
#line 864 "bytecode_gen.m"
{
#line 868 "bytecode_gen.m"
  {
#line 868 "bytecode_gen.m"
    MR_bool bytecode_backend__bytecode_gen__succeeded;

#line 868 "bytecode_gen.m"
    if ((bytecode_backend__bytecode_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 868 "bytecode_gen.m"
      {
#line 868 "bytecode_gen.m"
        *bytecode_backend__bytecode_gen__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 868 "bytecode_gen.m"
        *bytecode_backend__bytecode_gen__STATE_VARIABLE_VarMap_6 = bytecode_backend__bytecode_gen__STATE_VARIABLE_VarMap_0_5;
#line 868 "bytecode_gen.m"
      }
#line 868 "bytecode_gen.m"
    else
#line 869 "bytecode_gen.m"
      {
#line 869 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 869 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__VarList_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 869 "bytecode_gen.m"
        MR_Integer bytecode_backend__bytecode_gen__N1_21;
#line 869 "bytecode_gen.m"
        MR_String bytecode_backend__bytecode_gen__VarName_22;
#line 869 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__VarType_23;
#line 869 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__VarInfosTail_24;
#line 869 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_VarMap_27_27;
#line 869 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_30_30;

#line 870 "bytecode_gen.m"
        {
#line 870 "bytecode_gen.m"
          mercury__map__det_insert_4_p_0((MR_Word) &bytecode_backend__bytecode_gen_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (bytecode_backend__bytecode_gen__Var_14)), ((MR_Box) (bytecode_backend__bytecode_gen__N0_4)), bytecode_backend__bytecode_gen__STATE_VARIABLE_VarMap_0_5, &bytecode_backend__bytecode_gen__STATE_VARIABLE_VarMap_27_27);
        }
#line 871 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__N1_21 = (bytecode_backend__bytecode_gen__N0_4 + (MR_Integer) 1);
#line 872 "bytecode_gen.m"
        {
#line 872 "bytecode_gen.m"
          mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, bytecode_backend__bytecode_gen__VarSet_2, bytecode_backend__bytecode_gen__Var_14, &bytecode_backend__bytecode_gen__VarName_22);
        }
#line 873 "bytecode_gen.m"
        {
#line 873 "bytecode_gen.m"
          parse_tree__prog_data__lookup_var_type_3_p_0(bytecode_backend__bytecode_gen__VarTypes_3, bytecode_backend__bytecode_gen__Var_14, &bytecode_backend__bytecode_gen__VarType_23);
        }
#line 874 "bytecode_gen.m"
        {
#line 874 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__create_varmap_7_p_0(bytecode_backend__bytecode_gen__VarList_15, bytecode_backend__bytecode_gen__VarSet_2, bytecode_backend__bytecode_gen__VarTypes_3, bytecode_backend__bytecode_gen__N1_21, bytecode_backend__bytecode_gen__STATE_VARIABLE_VarMap_27_27, bytecode_backend__bytecode_gen__STATE_VARIABLE_VarMap_6, &bytecode_backend__bytecode_gen__VarInfosTail_24);
        }
#line 875 "bytecode_gen.m"
        {
#line 875 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 875 "bytecode_gen.m"
          MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__V_30_30, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__VarName_22));
#line 875 "bytecode_gen.m"
          MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__V_30_30, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__VarType_23));
#line 875 "bytecode_gen.m"
        }
#line 875 "bytecode_gen.m"
        {
#line 875 "bytecode_gen.m"
          MR_Word base;
#line 875 "bytecode_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 875 "bytecode_gen.m"
          *bytecode_backend__bytecode_gen__HeadVar__7_7 = base;
#line 875 "bytecode_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__V_30_30));
#line 875 "bytecode_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__VarInfosTail_24));
#line 875 "bytecode_gen.m"
        }
#line 869 "bytecode_gen.m"
      }
#line 868 "bytecode_gen.m"
  }
#line 864 "bytecode_gen.m"
}

#line 802 "bytecode_gen.m"
static void MR_CALL 
bytecode_backend__bytecode_gen__map_cons_tag_2_p_0(
#line 802 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__HeadVar__1_1,
#line 802 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__HeadVar__2_2)
#line 802 "bytecode_gen.m"
{
#line 804 "bytecode_gen.m"
  {
#line 804 "bytecode_gen.m"
    MR_bool bytecode_backend__bytecode_gen__succeeded;

#line 804 "bytecode_gen.m"
    if ((bytecode_backend__bytecode_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 804 "bytecode_gen.m"
      *bytecode_backend__bytecode_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 804 "bytecode_gen.m"
    else
#line 804 "bytecode_gen.m"
    if ((bytecode_backend__bytecode_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 807 "bytecode_gen.m"
      {
#line 807 "bytecode_gen.m"
        *bytecode_backend__bytecode_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &bytecode_backend__bytecode_gen_scalar_common_4[1]);
#line 807 "bytecode_gen.m"
      }
#line 804 "bytecode_gen.m"
    else
#line 804 "bytecode_gen.m"
    if (((MR_tag((MR_Word) bytecode_backend__bytecode_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 821 "bytecode_gen.m"
      {
#line 822 "bytecode_gen.m"
        {
#line 822 "bytecode_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_tag\'/2", (MR_String) "float_tag cons tag for non-float_constant cons id");
#line 822 "bytecode_gen.m"
          return;
        }
#line 821 "bytecode_gen.m"
      }
#line 804 "bytecode_gen.m"
    else
#line 804 "bytecode_gen.m"
    if (((MR_tag((MR_Word) bytecode_backend__bytecode_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 815 "bytecode_gen.m"
      {
#line 816 "bytecode_gen.m"
        {
#line 816 "bytecode_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_tag\'/2", (MR_String) "string_tag cons tag for non-string_constant cons id");
#line 816 "bytecode_gen.m"
          return;
        }
#line 815 "bytecode_gen.m"
      }
#line 804 "bytecode_gen.m"
    else
#line 804 "bytecode_gen.m"
    if (((((MR_tag((MR_Word) bytecode_backend__bytecode_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 830 "bytecode_gen.m"
      {
#line 831 "bytecode_gen.m"
        {
#line 831 "bytecode_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_tag\'/2", (MR_String) "base_typeclass_info_tag cons tag for non-base_typeclass_info_constant cons id");
#line 831 "bytecode_gen.m"
          return;
        }
#line 830 "bytecode_gen.m"
      }
#line 804 "bytecode_gen.m"
    else
#line 804 "bytecode_gen.m"
    if (((((MR_tag((MR_Word) bytecode_backend__bytecode_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 824 "bytecode_gen.m"
      {
#line 825 "bytecode_gen.m"
        {
#line 825 "bytecode_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_tag\'/2", (MR_String) "closure_tag cons tag for non-closure_cons cons id");
#line 825 "bytecode_gen.m"
          return;
        }
#line 824 "bytecode_gen.m"
      }
#line 804 "bytecode_gen.m"
    else
#line 804 "bytecode_gen.m"
    if (((((MR_tag((MR_Word) bytecode_backend__bytecode_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 845 "bytecode_gen.m"
      {
#line 846 "bytecode_gen.m"
        {
#line 846 "bytecode_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_tag\'/2", (MR_String) "deep_profiling_proc_layout_tag cons tag for non-deep_profiling_proc_static cons id");
#line 846 "bytecode_gen.m"
          return;
        }
#line 845 "bytecode_gen.m"
      }
#line 804 "bytecode_gen.m"
    else
#line 804 "bytecode_gen.m"
    if (((((MR_tag((MR_Word) bytecode_backend__bytecode_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 809 "bytecode_gen.m"
      {
#line 810 "bytecode_gen.m"
        {
#line 810 "bytecode_gen.m"
          mercury__require__sorry_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_tag\'/2", (MR_String) "bytecode with direct_arg_tag");
#line 810 "bytecode_gen.m"
          return;
        }
#line 809 "bytecode_gen.m"
      }
#line 804 "bytecode_gen.m"
    else
#line 804 "bytecode_gen.m"
    if (((((MR_tag((MR_Word) bytecode_backend__bytecode_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 819 "bytecode_gen.m"
      {
#line 820 "bytecode_gen.m"
        {
#line 820 "bytecode_gen.m"
          mercury__require__sorry_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_tag\'/2", (MR_String) "bytecode with foreign tags");
#line 820 "bytecode_gen.m"
          return;
        }
#line 819 "bytecode_gen.m"
      }
#line 804 "bytecode_gen.m"
    else
#line 804 "bytecode_gen.m"
    if (((((MR_tag((MR_Word) bytecode_backend__bytecode_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 839 "bytecode_gen.m"
      {
#line 840 "bytecode_gen.m"
        {
#line 840 "bytecode_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_tag\'/2", (MR_String) "ground_term_const cons tag for non-ground_term_const cons id");
#line 840 "bytecode_gen.m"
          return;
        }
#line 839 "bytecode_gen.m"
      }
#line 804 "bytecode_gen.m"
    else
#line 804 "bytecode_gen.m"
    if (((((MR_tag((MR_Word) bytecode_backend__bytecode_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 818 "bytecode_gen.m"
      {
#line 818 "bytecode_gen.m"
        MR_Integer bytecode_backend__bytecode_gen__IntVal_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 1)));

#line 818 "bytecode_gen.m"
        {
#line 818 "bytecode_gen.m"
          MR_Word base;
#line 818 "bytecode_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 818 "bytecode_gen.m"
          *bytecode_backend__bytecode_gen__HeadVar__2_2 = base;
#line 818 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 818 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__IntVal_21));
#line 818 "bytecode_gen.m"
        }
#line 818 "bytecode_gen.m"
      }
#line 804 "bytecode_gen.m"
    else
#line 804 "bytecode_gen.m"
    if (((((MR_tag((MR_Word) bytecode_backend__bytecode_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 851 "bytecode_gen.m"
      {
#line 854 "bytecode_gen.m"
        {
#line 854 "bytecode_gen.m"
          mercury__require__sorry_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_tag\'/2", (MR_String) "bytecode with --num-reserved-addresses or --num-reserved-objects");
#line 854 "bytecode_gen.m"
          return;
        }
#line 851 "bytecode_gen.m"
      }
#line 804 "bytecode_gen.m"
    else
#line 804 "bytecode_gen.m"
    if (((((MR_tag((MR_Word) bytecode_backend__bytecode_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 813 "bytecode_gen.m"
      {
#line 813 "bytecode_gen.m"
        MR_Integer bytecode_backend__bytecode_gen__Primary_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 813 "bytecode_gen.m"
        MR_Integer bytecode_backend__bytecode_gen__Secondary_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 2)));

#line 814 "bytecode_gen.m"
        {
#line 814 "bytecode_gen.m"
          MR_Word base;
#line 814 "bytecode_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 814 "bytecode_gen.m"
          *bytecode_backend__bytecode_gen__HeadVar__2_2 = base;
#line 814 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 814 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__Primary_12));
#line 814 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__Secondary_13));
#line 814 "bytecode_gen.m"
        }
#line 813 "bytecode_gen.m"
      }
#line 804 "bytecode_gen.m"
    else
#line 804 "bytecode_gen.m"
    if (((((MR_tag((MR_Word) bytecode_backend__bytecode_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 811 "bytecode_gen.m"
      {
#line 811 "bytecode_gen.m"
        MR_Integer bytecode_backend__bytecode_gen__Primary_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 811 "bytecode_gen.m"
        MR_Integer bytecode_backend__bytecode_gen__Secondary_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 2)));

#line 812 "bytecode_gen.m"
        {
#line 812 "bytecode_gen.m"
          MR_Word base;
#line 812 "bytecode_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 812 "bytecode_gen.m"
          *bytecode_backend__bytecode_gen__HeadVar__2_2 = base;
#line 812 "bytecode_gen.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__Primary_10));
#line 812 "bytecode_gen.m"
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__Secondary_11));
#line 812 "bytecode_gen.m"
        }
#line 811 "bytecode_gen.m"
      }
#line 804 "bytecode_gen.m"
    else
#line 804 "bytecode_gen.m"
    if (((((MR_tag((MR_Word) bytecode_backend__bytecode_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 16))))
#line 856 "bytecode_gen.m"
      {
#line 859 "bytecode_gen.m"
        {
#line 859 "bytecode_gen.m"
          mercury__require__sorry_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_tag\'/2", (MR_String) "bytecode with --num-reserved-addresses or --num-reserved-objects");
#line 859 "bytecode_gen.m"
          return;
        }
#line 856 "bytecode_gen.m"
      }
#line 804 "bytecode_gen.m"
    else
#line 804 "bytecode_gen.m"
    if (((((MR_tag((MR_Word) bytecode_backend__bytecode_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 848 "bytecode_gen.m"
      {
#line 849 "bytecode_gen.m"
        {
#line 849 "bytecode_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_tag\'/2", (MR_String) "table_io_entry_tag cons tag for non-table_io_entry_desc cons id");
#line 849 "bytecode_gen.m"
          return;
        }
#line 848 "bytecode_gen.m"
      }
#line 804 "bytecode_gen.m"
    else
#line 804 "bytecode_gen.m"
    if (((((MR_tag((MR_Word) bytecode_backend__bytecode_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 842 "bytecode_gen.m"
      {
#line 843 "bytecode_gen.m"
        {
#line 843 "bytecode_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_tag\'/2", (MR_String) "tabling_info_tag cons tag for non-tabling_info_constant cons id");
#line 843 "bytecode_gen.m"
          return;
        }
#line 842 "bytecode_gen.m"
      }
#line 804 "bytecode_gen.m"
    else
#line 804 "bytecode_gen.m"
    if (((((MR_tag((MR_Word) bytecode_backend__bytecode_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 827 "bytecode_gen.m"
      {
#line 828 "bytecode_gen.m"
        {
#line 828 "bytecode_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_tag\'/2", (MR_String) "type_ctor_info_tag cons tag for non-type_ctor_info_constant cons id");
#line 828 "bytecode_gen.m"
          return;
        }
#line 827 "bytecode_gen.m"
      }
#line 804 "bytecode_gen.m"
    else
#line 804 "bytecode_gen.m"
    if (((((MR_tag((MR_Word) bytecode_backend__bytecode_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 833 "bytecode_gen.m"
      {
#line 834 "bytecode_gen.m"
        {
#line 834 "bytecode_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_tag\'/2", (MR_String) "type_info_const cons tag for non-type_info_const cons id");
#line 834 "bytecode_gen.m"
          return;
        }
#line 833 "bytecode_gen.m"
      }
#line 804 "bytecode_gen.m"
    else
#line 804 "bytecode_gen.m"
    if (((((MR_tag((MR_Word) bytecode_backend__bytecode_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 836 "bytecode_gen.m"
      {
#line 837 "bytecode_gen.m"
        {
#line 837 "bytecode_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_tag\'/2", (MR_String) "typeclass_info_const cons tag for non-typeclass_info_const cons id");
#line 837 "bytecode_gen.m"
          return;
        }
#line 836 "bytecode_gen.m"
      }
#line 804 "bytecode_gen.m"
    else
#line 808 "bytecode_gen.m"
      {
#line 808 "bytecode_gen.m"
        MR_Integer bytecode_backend__bytecode_gen__Primary_4 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 1)));

#line 808 "bytecode_gen.m"
        {
#line 808 "bytecode_gen.m"
          MR_Word base;
#line 808 "bytecode_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 808 "bytecode_gen.m"
          *bytecode_backend__bytecode_gen__HeadVar__2_2 = base;
#line 808 "bytecode_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__Primary_4));
#line 808 "bytecode_gen.m"
        }
#line 808 "bytecode_gen.m"
      }
#line 804 "bytecode_gen.m"
  }
#line 802 "bytecode_gen.m"
}

#line 719 "bytecode_gen.m"
static void MR_CALL 
bytecode_backend__bytecode_gen__map_cons_id_3_p_0(
#line 719 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__ByteInfo_4,
#line 719 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__ConsId_5,
#line 719 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__ByteConsId_6)
#line 719 "bytecode_gen.m"
{
#line 721 "bytecode_gen.m"
  {
#line 721 "bytecode_gen.m"
    MR_bool bytecode_backend__bytecode_gen__succeeded;
#line 721 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__ModuleInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_4, (MR_Integer) 2)));
#line 897 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_4, (MR_Integer) 0)));
#line 897 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_4, (MR_Integer) 1)));
#line 897 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_4, (MR_Integer) 3)));
#line 897 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_4, (MR_Integer) 4)));

#line 734 "bytecode_gen.m"
    if ((bytecode_backend__bytecode_gen__ConsId_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 780 "bytecode_gen.m"
      *bytecode_backend__bytecode_gen__ByteConsId_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 734 "bytecode_gen.m"
    else
#line 734 "bytecode_gen.m"
    if (((MR_tag((MR_Word) bytecode_backend__bytecode_gen__ConsId_5)) == (MR_mktag((MR_Integer) 2))))
#line 792 "bytecode_gen.m"
      {
#line 793 "bytecode_gen.m"
        {
#line 793 "bytecode_gen.m"
          mercury__require__sorry_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_id\'/3", (MR_String) "bytecode cannot implement tabling");
#line 793 "bytecode_gen.m"
          return;
        }
#line 792 "bytecode_gen.m"
      }
#line 734 "bytecode_gen.m"
    else
#line 734 "bytecode_gen.m"
    if (((MR_tag((MR_Word) bytecode_backend__bytecode_gen__ConsId_5)) == (MR_mktag((MR_Integer) 1))))
#line 777 "bytecode_gen.m"
      *bytecode_backend__bytecode_gen__ByteConsId_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 734 "bytecode_gen.m"
    else
#line 734 "bytecode_gen.m"
    if (((((MR_tag((MR_Word) bytecode_backend__bytecode_gen__ConsId_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__ConsId_5, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 772 "bytecode_gen.m"
      {
#line 772 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__ClassId_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__ConsId_5, (MR_Integer) 2)));
#line 772 "bytecode_gen.m"
        MR_String bytecode_backend__bytecode_gen__Instance_33 = ((MR_String) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__ConsId_5, (MR_Integer) 4)));
#line 772 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__ModuleName_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__ConsId_5, (MR_Integer) 1)));
#line 772 "bytecode_gen.m"
        MR_Integer bytecode_backend__bytecode_gen__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__ConsId_5, (MR_Integer) 3)));

#line 773 "bytecode_gen.m"
        {
#line 773 "bytecode_gen.m"
          MR_Word base;
#line 773 "bytecode_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 773 "bytecode_gen.m"
          *bytecode_backend__bytecode_gen__ByteConsId_6 = base;
#line 773 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 773 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__ModuleName_76));
#line 773 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__ClassId_31));
#line 773 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (bytecode_backend__bytecode_gen__Instance_33));
#line 773 "bytecode_gen.m"
        }
#line 772 "bytecode_gen.m"
      }
#line 734 "bytecode_gen.m"
    else
#line 734 "bytecode_gen.m"
    if (((((MR_tag((MR_Word) bytecode_backend__bytecode_gen__ConsId_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__ConsId_5, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 760 "bytecode_gen.m"
      {
#line 760 "bytecode_gen.m"
        MR_Char bytecode_backend__bytecode_gen__CharVal_26 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__ConsId_5, (MR_Integer) 1)));

#line 761 "bytecode_gen.m"
        {
#line 761 "bytecode_gen.m"
          MR_Word base;
#line 761 "bytecode_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 761 "bytecode_gen.m"
          *bytecode_backend__bytecode_gen__ByteConsId_6 = base;
#line 761 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 761 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_Word) (bytecode_backend__bytecode_gen__CharVal_26));
#line 761 "bytecode_gen.m"
        }
#line 760 "bytecode_gen.m"
      }
#line 734 "bytecode_gen.m"
    else
#line 734 "bytecode_gen.m"
    if (((((MR_tag((MR_Word) bytecode_backend__bytecode_gen__ConsId_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__ConsId_5, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 743 "bytecode_gen.m"
      {
#line 743 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__ShroudedPredProcId_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__ConsId_5, (MR_Integer) 1)));
#line 743 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__PredId_18;
#line 743 "bytecode_gen.m"
        MR_Integer bytecode_backend__bytecode_gen__ProcId_19;
#line 743 "bytecode_gen.m"
        MR_String bytecode_backend__bytecode_gen__PredName_20;
#line 743 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__PredInfo_21;
#line 743 "bytecode_gen.m"
        MR_Integer bytecode_backend__bytecode_gen__IsFunc_22;
#line 743 "bytecode_gen.m"
        MR_Integer bytecode_backend__bytecode_gen__ProcInt_23;
#line 743 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_63_63;
#line 743 "bytecode_gen.m"
        MR_Integer bytecode_backend__bytecode_gen__Arity_73;
#line 743 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__ModuleName_74;
#line 743 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__PredOrFunc_84;

#line 744 "bytecode_gen.m"
        {
#line 744 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__V_63_63 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(bytecode_backend__bytecode_gen__ShroudedPredProcId_16);
        }
#line 744 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__PredId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__V_63_63, (MR_Integer) 0)));
#line 744 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__ProcId_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__V_63_63, (MR_Integer) 1)));
#line 745 "bytecode_gen.m"
        {
#line 745 "bytecode_gen.m"
          hlds__hlds_module__predicate_id_5_p_0(bytecode_backend__bytecode_gen__ModuleInfo_7, bytecode_backend__bytecode_gen__PredId_18, &bytecode_backend__bytecode_gen__ModuleName_74, &bytecode_backend__bytecode_gen__PredName_20, &bytecode_backend__bytecode_gen__Arity_73);
        }
#line 747 "bytecode_gen.m"
        {
#line 747 "bytecode_gen.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(bytecode_backend__bytecode_gen__ModuleInfo_7, bytecode_backend__bytecode_gen__PredId_18, &bytecode_backend__bytecode_gen__PredInfo_21);
        }
#line 954 "bytecode_gen.m"
        {
#line 954 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__PredOrFunc_84 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(bytecode_backend__bytecode_gen__PredInfo_21);
        }
#line 958 "bytecode_gen.m"
        if ((bytecode_backend__bytecode_gen__PredOrFunc_84 == (MR_Integer) 1))
#line 960 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__IsFunc_22 = (MR_Integer) 1;
#line 958 "bytecode_gen.m"
        else
#line 957 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__IsFunc_22 = (MR_Integer) 0;
#line 750 "bytecode_gen.m"
        {
#line 750 "bytecode_gen.m"
          hlds__hlds_pred__proc_id_to_int_2_p_0(bytecode_backend__bytecode_gen__ProcId_19, &bytecode_backend__bytecode_gen__ProcInt_23);
        }
#line 751 "bytecode_gen.m"
        {
#line 751 "bytecode_gen.m"
          MR_Word base;
#line 751 "bytecode_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 751 "bytecode_gen.m"
          *bytecode_backend__bytecode_gen__ByteConsId_6 = base;
#line 751 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 751 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__ModuleName_74));
#line 751 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__PredName_20));
#line 751 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (bytecode_backend__bytecode_gen__Arity_73));
#line 751 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (bytecode_backend__bytecode_gen__IsFunc_22));
#line 751 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (bytecode_backend__bytecode_gen__ProcInt_23));
#line 751 "bytecode_gen.m"
        }
#line 743 "bytecode_gen.m"
      }
#line 734 "bytecode_gen.m"
    else
#line 734 "bytecode_gen.m"
    if (((((MR_tag((MR_Word) bytecode_backend__bytecode_gen__ConsId_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__ConsId_5, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 724 "bytecode_gen.m"
      {
#line 724 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__Functor_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__ConsId_5, (MR_Integer) 1)));
#line 724 "bytecode_gen.m"
        MR_Integer bytecode_backend__bytecode_gen__Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__ConsId_5, (MR_Integer) 2)));
#line 724 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__ModuleName_11;
#line 724 "bytecode_gen.m"
        MR_String bytecode_backend__bytecode_gen__FunctorName_12;
#line 724 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__ConsTag_14;
#line 724 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__ByteConsTag_15;
#line 724 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen___TypeCtor_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__ConsId_5, (MR_Integer) 3)));

#line 727 "bytecode_gen.m"
        if (((MR_tag((MR_Word) bytecode_backend__bytecode_gen__Functor_8)) == (MR_mktag((MR_Integer) 1))))
#line 726 "bytecode_gen.m"
          {
#line 726 "bytecode_gen.m"
            bytecode_backend__bytecode_gen__ModuleName_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__Functor_8, (MR_Integer) 0)));
#line 726 "bytecode_gen.m"
            bytecode_backend__bytecode_gen__FunctorName_12 = ((MR_String) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__Functor_8, (MR_Integer) 1)));
#line 726 "bytecode_gen.m"
          }
#line 727 "bytecode_gen.m"
        else
#line 728 "bytecode_gen.m"
          {
#line 729 "bytecode_gen.m"
            {
#line 729 "bytecode_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_id\'/3", (MR_String) "unqualified cons");
#line 729 "bytecode_gen.m"
              return;
            }
#line 728 "bytecode_gen.m"
          }
#line 731 "bytecode_gen.m"
        {
#line 731 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__ConsTag_14 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(bytecode_backend__bytecode_gen__ModuleInfo_7, bytecode_backend__bytecode_gen__ConsId_5);
        }
#line 732 "bytecode_gen.m"
        {
#line 732 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__map_cons_tag_2_p_0(bytecode_backend__bytecode_gen__ConsTag_14, &bytecode_backend__bytecode_gen__ByteConsTag_15);
        }
#line 733 "bytecode_gen.m"
        {
#line 733 "bytecode_gen.m"
          MR_Word base;
#line 733 "bytecode_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 733 "bytecode_gen.m"
          *bytecode_backend__bytecode_gen__ByteConsId_6 = base;
#line 733 "bytecode_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__ModuleName_11));
#line 733 "bytecode_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__FunctorName_12));
#line 733 "bytecode_gen.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__Arity_9));
#line 733 "bytecode_gen.m"
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteConsTag_15));
#line 733 "bytecode_gen.m"
        }
#line 724 "bytecode_gen.m"
      }
#line 734 "bytecode_gen.m"
    else
#line 734 "bytecode_gen.m"
    if (((((MR_tag((MR_Word) bytecode_backend__bytecode_gen__ConsId_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__ConsId_5, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 798 "bytecode_gen.m"
      {
#line 799 "bytecode_gen.m"
        {
#line 799 "bytecode_gen.m"
          mercury__require__sorry_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_id\'/3", (MR_String) "bytecode cannot implement deep profiling");
#line 799 "bytecode_gen.m"
          return;
        }
#line 798 "bytecode_gen.m"
      }
#line 734 "bytecode_gen.m"
    else
#line 734 "bytecode_gen.m"
    if (((((MR_tag((MR_Word) bytecode_backend__bytecode_gen__ConsId_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__ConsId_5, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 757 "bytecode_gen.m"
      {
#line 757 "bytecode_gen.m"
        MR_Float bytecode_backend__bytecode_gen__FloatVal_25 = MR_unbox_float((MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__ConsId_5, (MR_Integer) 1)));

#line 758 "bytecode_gen.m"
        {
#line 758 "bytecode_gen.m"
          MR_Word base;
#line 758 "bytecode_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 758 "bytecode_gen.m"
          *bytecode_backend__bytecode_gen__ByteConsId_6 = base;
#line 758 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 758 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), base, 1) = MR_box_float(bytecode_backend__bytecode_gen__FloatVal_25);
#line 758 "bytecode_gen.m"
        }
#line 757 "bytecode_gen.m"
      }
#line 734 "bytecode_gen.m"
    else
#line 734 "bytecode_gen.m"
    if (((((MR_tag((MR_Word) bytecode_backend__bytecode_gen__ConsId_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__ConsId_5, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 789 "bytecode_gen.m"
      {
#line 790 "bytecode_gen.m"
        {
#line 790 "bytecode_gen.m"
          mercury__require__sorry_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_id\'/3", (MR_String) "bytecode doesn\'t implement ground_term_const");
#line 790 "bytecode_gen.m"
          return;
        }
#line 789 "bytecode_gen.m"
      }
#line 734 "bytecode_gen.m"
    else
#line 734 "bytecode_gen.m"
    if (((((MR_tag((MR_Word) bytecode_backend__bytecode_gen__ConsId_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__ConsId_5, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 766 "bytecode_gen.m"
      {
#line 767 "bytecode_gen.m"
        {
#line 767 "bytecode_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_id\'/3", (MR_String) "impl_defined_const");
#line 767 "bytecode_gen.m"
          return;
        }
#line 766 "bytecode_gen.m"
      }
#line 734 "bytecode_gen.m"
    else
#line 734 "bytecode_gen.m"
    if (((((MR_tag((MR_Word) bytecode_backend__bytecode_gen__ConsId_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__ConsId_5, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 754 "bytecode_gen.m"
      {
#line 754 "bytecode_gen.m"
        MR_Integer bytecode_backend__bytecode_gen__IntVal_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__ConsId_5, (MR_Integer) 1)));

#line 755 "bytecode_gen.m"
        {
#line 755 "bytecode_gen.m"
          MR_Word base;
#line 755 "bytecode_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 755 "bytecode_gen.m"
          *bytecode_backend__bytecode_gen__ByteConsId_6 = base;
#line 755 "bytecode_gen.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__IntVal_24));
#line 755 "bytecode_gen.m"
        }
#line 754 "bytecode_gen.m"
      }
#line 734 "bytecode_gen.m"
    else
#line 734 "bytecode_gen.m"
    if (((((MR_tag((MR_Word) bytecode_backend__bytecode_gen__ConsId_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__ConsId_5, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 763 "bytecode_gen.m"
      {
#line 763 "bytecode_gen.m"
        MR_String bytecode_backend__bytecode_gen__StringVal_27 = ((MR_String) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__ConsId_5, (MR_Integer) 1)));

#line 764 "bytecode_gen.m"
        {
#line 764 "bytecode_gen.m"
          MR_Word base;
#line 764 "bytecode_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 764 "bytecode_gen.m"
          *bytecode_backend__bytecode_gen__ByteConsId_6 = base;
#line 764 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 764 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__StringVal_27));
#line 764 "bytecode_gen.m"
        }
#line 763 "bytecode_gen.m"
      }
#line 734 "bytecode_gen.m"
    else
#line 734 "bytecode_gen.m"
    if (((((MR_tag((MR_Word) bytecode_backend__bytecode_gen__ConsId_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__ConsId_5, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 795 "bytecode_gen.m"
      {
#line 796 "bytecode_gen.m"
        {
#line 796 "bytecode_gen.m"
          mercury__require__sorry_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_id\'/3", (MR_String) "bytecode cannot implement table io entry desc");
#line 796 "bytecode_gen.m"
          return;
        }
#line 795 "bytecode_gen.m"
      }
#line 734 "bytecode_gen.m"
    else
#line 734 "bytecode_gen.m"
    if (((((MR_tag((MR_Word) bytecode_backend__bytecode_gen__ConsId_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__ConsId_5, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 735 "bytecode_gen.m"
      {
#line 735 "bytecode_gen.m"
        MR_Integer bytecode_backend__bytecode_gen__Arity_68 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__ConsId_5, (MR_Integer) 1)));
#line 735 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__ConsTag_71;
#line 735 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__ByteConsTag_72;

#line 738 "bytecode_gen.m"
        {
#line 738 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__ConsTag_71 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(bytecode_backend__bytecode_gen__ModuleInfo_7, bytecode_backend__bytecode_gen__ConsId_5);
        }
#line 739 "bytecode_gen.m"
        {
#line 739 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__map_cons_tag_2_p_0(bytecode_backend__bytecode_gen__ConsTag_71, &bytecode_backend__bytecode_gen__ByteConsTag_72);
        }
#line 741 "bytecode_gen.m"
        {
#line 741 "bytecode_gen.m"
          MR_Word base;
#line 741 "bytecode_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 741 "bytecode_gen.m"
          *bytecode_backend__bytecode_gen__ByteConsId_6 = base;
#line 741 "bytecode_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (&bytecode_backend__bytecode_gen_scalar_common_4[0]));
#line 741 "bytecode_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_String) "{}"));
#line 741 "bytecode_gen.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__Arity_68));
#line 741 "bytecode_gen.m"
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteConsTag_72));
#line 741 "bytecode_gen.m"
        }
#line 735 "bytecode_gen.m"
      }
#line 734 "bytecode_gen.m"
    else
#line 734 "bytecode_gen.m"
    if (((((MR_tag((MR_Word) bytecode_backend__bytecode_gen__ConsId_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__ConsId_5, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 769 "bytecode_gen.m"
      {
#line 769 "bytecode_gen.m"
        MR_String bytecode_backend__bytecode_gen__TypeName_29 = ((MR_String) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__ConsId_5, (MR_Integer) 2)));
#line 769 "bytecode_gen.m"
        MR_Integer bytecode_backend__bytecode_gen__TypeArity_30 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__ConsId_5, (MR_Integer) 3)));
#line 769 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__ModuleName_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__ConsId_5, (MR_Integer) 1)));

#line 770 "bytecode_gen.m"
        {
#line 770 "bytecode_gen.m"
          MR_Word base;
#line 770 "bytecode_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 770 "bytecode_gen.m"
          *bytecode_backend__bytecode_gen__ByteConsId_6 = base;
#line 770 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 770 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__ModuleName_75));
#line 770 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__TypeName_29));
#line 770 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (bytecode_backend__bytecode_gen__TypeArity_30));
#line 770 "bytecode_gen.m"
        }
#line 769 "bytecode_gen.m"
      }
#line 734 "bytecode_gen.m"
    else
#line 734 "bytecode_gen.m"
    if (((((MR_tag((MR_Word) bytecode_backend__bytecode_gen__ConsId_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__ConsId_5, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 782 "bytecode_gen.m"
      {
#line 783 "bytecode_gen.m"
        {
#line 783 "bytecode_gen.m"
          mercury__require__sorry_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_id\'/3", (MR_String) "bytecode doesn\'t implement type_info_const");
#line 783 "bytecode_gen.m"
          return;
        }
#line 782 "bytecode_gen.m"
      }
#line 734 "bytecode_gen.m"
    else
#line 785 "bytecode_gen.m"
      {
#line 786 "bytecode_gen.m"
        {
#line 786 "bytecode_gen.m"
          mercury__require__sorry_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.map_cons_id\'/3", (MR_String) "bytecode doesn\'t implement typeclass_info_const");
#line 786 "bytecode_gen.m"
          return;
        }
#line 785 "bytecode_gen.m"
      }
#line 721 "bytecode_gen.m"
  }
#line 719 "bytecode_gen.m"
}

#line 674 "bytecode_gen.m"
static void MR_CALL 
bytecode_backend__bytecode_gen__gen_disj_5_p_0(
#line 674 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__HeadVar__1_1,
#line 674 "bytecode_gen.m"
  MR_Integer bytecode_backend__bytecode_gen__EndLabel_2,
#line 674 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_3,
#line 674 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_4,
#line 674 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__Code_5)
#line 674 "bytecode_gen.m"
{
#line 677 "bytecode_gen.m"
  {
#line 677 "bytecode_gen.m"
    MR_bool bytecode_backend__bytecode_gen__succeeded;

#line 677 "bytecode_gen.m"
    if ((bytecode_backend__bytecode_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 677 "bytecode_gen.m"
      {
#line 678 "bytecode_gen.m"
        {
#line 678 "bytecode_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.gen_disj\'/5", (MR_String) "empty disjunction");
#line 678 "bytecode_gen.m"
          return;
        }
#line 677 "bytecode_gen.m"
      }
#line 677 "bytecode_gen.m"
    else
#line 679 "bytecode_gen.m"
      {
#line 679 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__TypeCtorInfo_17_58;
#line 679 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__Disjunct_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 679 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__Disjuncts_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 679 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__ThisCode_18;
#line 679 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_27_27;
#line 679 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__GoalExpr_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__Disjunct_13, (MR_Integer) 0)));
#line 679 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__GoalInfo_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__Disjunct_13, (MR_Integer) 1)));
#line 679 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__GoalCode_52;
#line 679 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__Context_53;
#line 679 "bytecode_gen.m"
        MR_Integer bytecode_backend__bytecode_gen__Line_54;
#line 679 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_56_56;
#line 679 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_57_57;

#line 206 "bytecode_gen.m"
        {
#line 206 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__gen_goal_expr_5_p_0(bytecode_backend__bytecode_gen__GoalExpr_49, bytecode_backend__bytecode_gen__GoalInfo_50, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_3, &bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_27_27, &bytecode_backend__bytecode_gen__GoalCode_52);
        }
#line 207 "bytecode_gen.m"
        {
#line 207 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__Context_53 = hlds__hlds_goal__goal_info_get_context_1_f_0(bytecode_backend__bytecode_gen__GoalInfo_50);
        }
#line 208 "bytecode_gen.m"
        {
#line 208 "bytecode_gen.m"
          mercury__term__context_line_2_p_0(bytecode_backend__bytecode_gen__Context_53, &bytecode_backend__bytecode_gen__Line_54);
        }
#line 3586 "bytecode_backend.bytecode_gen.c"
        bytecode_backend__bytecode_gen__TypeCtorInfo_17_58 = (MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0;
#line 209 "bytecode_gen.m"
        {
#line 209 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__V_57_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 209 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_57_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 29));
#line 209 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_57_57, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__Line_54));
#line 209 "bytecode_gen.m"
        }
#line 209 "bytecode_gen.m"
        {
#line 209 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__V_56_56 = mercury__cord__singleton_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_17_58, ((MR_Box) (bytecode_backend__bytecode_gen__V_57_57)));
        }
#line 209 "bytecode_gen.m"
        {
#line 209 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__ThisCode_18 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_17_58, bytecode_backend__bytecode_gen__V_56_56, bytecode_backend__bytecode_gen__GoalCode_52);
        }
#line 686 "bytecode_gen.m"
        if ((bytecode_backend__bytecode_gen__Disjuncts_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 682 "bytecode_gen.m"
          {
#line 682 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__TypeCtorInfo_44_44 = (MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0;
#line 682 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__EnterCode_19;
#line 682 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__EndofCode_20;
#line 682 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__V_40_40;
#line 682 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__V_41_41;

#line 683 "bytecode_gen.m"
            {
#line 683 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__EnterCode_19 = mercury__cord__singleton_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_44_44, ((MR_Box) (MR_mkword(MR_mktag(3), &bytecode_backend__bytecode_gen_scalar_common_1[3]))));
            }
#line 684 "bytecode_gen.m"
            {
#line 684 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__V_40_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 684 "bytecode_gen.m"
              MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_40_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 684 "bytecode_gen.m"
              MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_40_40, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__EndLabel_2));
#line 684 "bytecode_gen.m"
            }
#line 684 "bytecode_gen.m"
            {
#line 684 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__EndofCode_20 = mercury__cord__singleton_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_44_44, ((MR_Box) (bytecode_backend__bytecode_gen__V_40_40)));
            }
#line 685 "bytecode_gen.m"
            {
#line 685 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__V_41_41 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_44_44, bytecode_backend__bytecode_gen__ThisCode_18, bytecode_backend__bytecode_gen__EndofCode_20);
            }
#line 685 "bytecode_gen.m"
            {
#line 685 "bytecode_gen.m"
              *bytecode_backend__bytecode_gen__Code_5 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_44_44, bytecode_backend__bytecode_gen__EnterCode_19, bytecode_backend__bytecode_gen__V_41_41);
            }
#line 682 "bytecode_gen.m"
            *bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_4 = bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_27_27;
#line 682 "bytecode_gen.m"
          }
#line 686 "bytecode_gen.m"
        else
#line 687 "bytecode_gen.m"
          {
#line 687 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__TypeCtorInfo_45_45;
#line 687 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__OtherCode_23;
#line 687 "bytecode_gen.m"
            MR_Integer bytecode_backend__bytecode_gen__NextLabel_24;
#line 687 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_28_28;
#line 687 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__V_30_30;
#line 687 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__V_31_31;
#line 687 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__V_32_32;
#line 687 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__V_33_33;
#line 687 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__V_34_34;
#line 687 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__V_36_36;
#line 687 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__V_37_37;
#line 687 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__EnterCode_42;
#line 687 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__EndofCode_43;
#line 687 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__LabelCounter0_63;
#line 687 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__LabelCounter_64;
#line 929 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__V_66_66;
#line 929 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__V_67_67;
#line 929 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__V_68_68;
#line 929 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__V_69_69;
#line 931 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__V_70_70;
#line 931 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__V_71_71;
#line 931 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__V_72_72;
#line 931 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__V_74_74;
#line 931 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__V_73_73;

#line 688 "bytecode_gen.m"
            {
#line 688 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__gen_disj_5_p_0(bytecode_backend__bytecode_gen__Disjuncts_14, bytecode_backend__bytecode_gen__EndLabel_2, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_27_27, &bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_28_28, &bytecode_backend__bytecode_gen__OtherCode_23);
            }
#line 929 "bytecode_gen.m"
            bytecode_backend__bytecode_gen__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_28_28, (MR_Integer) 0)));
#line 929 "bytecode_gen.m"
            bytecode_backend__bytecode_gen__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_28_28, (MR_Integer) 1)));
#line 929 "bytecode_gen.m"
            bytecode_backend__bytecode_gen__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_28_28, (MR_Integer) 2)));
#line 929 "bytecode_gen.m"
            bytecode_backend__bytecode_gen__LabelCounter0_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_28_28, (MR_Integer) 3)));
#line 929 "bytecode_gen.m"
            bytecode_backend__bytecode_gen__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_28_28, (MR_Integer) 4)));
#line 930 "bytecode_gen.m"
            {
#line 930 "bytecode_gen.m"
              mercury__counter__allocate_3_p_0(&bytecode_backend__bytecode_gen__NextLabel_24, bytecode_backend__bytecode_gen__LabelCounter0_63, &bytecode_backend__bytecode_gen__LabelCounter_64);
            }
#line 931 "bytecode_gen.m"
            bytecode_backend__bytecode_gen__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_28_28, (MR_Integer) 0)));
#line 931 "bytecode_gen.m"
            bytecode_backend__bytecode_gen__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_28_28, (MR_Integer) 1)));
#line 931 "bytecode_gen.m"
            bytecode_backend__bytecode_gen__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_28_28, (MR_Integer) 2)));
#line 931 "bytecode_gen.m"
            bytecode_backend__bytecode_gen__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_28_28, (MR_Integer) 3)));
#line 931 "bytecode_gen.m"
            bytecode_backend__bytecode_gen__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_28_28, (MR_Integer) 4)));
#line 931 "bytecode_gen.m"
            {
#line 931 "bytecode_gen.m"
              MR_Word base;
#line 931 "bytecode_gen.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 931 "bytecode_gen.m"
              *bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_4 = base;
#line 931 "bytecode_gen.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__V_70_70));
#line 931 "bytecode_gen.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__V_71_71));
#line 931 "bytecode_gen.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__V_72_72));
#line 931 "bytecode_gen.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (bytecode_backend__bytecode_gen__LabelCounter_64));
#line 931 "bytecode_gen.m"
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (bytecode_backend__bytecode_gen__V_74_74));
#line 931 "bytecode_gen.m"
            }
#line 3760 "bytecode_backend.bytecode_gen.c"
            bytecode_backend__bytecode_gen__TypeCtorInfo_45_45 = (MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0;
#line 690 "bytecode_gen.m"
            {
#line 690 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 690 "bytecode_gen.m"
              MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 690 "bytecode_gen.m"
              MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_30_30, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__NextLabel_24));
#line 690 "bytecode_gen.m"
            }
#line 690 "bytecode_gen.m"
            {
#line 690 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__EnterCode_42 = mercury__cord__singleton_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_45_45, ((MR_Box) (bytecode_backend__bytecode_gen__V_30_30)));
            }
#line 691 "bytecode_gen.m"
            {
#line 691 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__V_32_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 691 "bytecode_gen.m"
              MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_32_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 691 "bytecode_gen.m"
              MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_32_32, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__EndLabel_2));
#line 691 "bytecode_gen.m"
            }
#line 692 "bytecode_gen.m"
            {
#line 692 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__V_34_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 692 "bytecode_gen.m"
              MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_34_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 692 "bytecode_gen.m"
              MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_34_34, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__NextLabel_24));
#line 692 "bytecode_gen.m"
            }
#line 692 "bytecode_gen.m"
            {
#line 692 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 692 "bytecode_gen.m"
              MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_33_33, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__V_34_34));
#line 692 "bytecode_gen.m"
              MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 692 "bytecode_gen.m"
            }
#line 691 "bytecode_gen.m"
            {
#line 691 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 691 "bytecode_gen.m"
              MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_31_31, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__V_32_32));
#line 691 "bytecode_gen.m"
              MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_31_31, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__V_33_33));
#line 691 "bytecode_gen.m"
            }
#line 691 "bytecode_gen.m"
            {
#line 691 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__EndofCode_43 = mercury__cord__from_list_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_45_45, bytecode_backend__bytecode_gen__V_31_31);
            }
#line 693 "bytecode_gen.m"
            {
#line 693 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__V_37_37 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_45_45, bytecode_backend__bytecode_gen__EndofCode_43, bytecode_backend__bytecode_gen__OtherCode_23);
            }
#line 693 "bytecode_gen.m"
            {
#line 693 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__V_36_36 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_45_45, bytecode_backend__bytecode_gen__ThisCode_18, bytecode_backend__bytecode_gen__V_37_37);
            }
#line 693 "bytecode_gen.m"
            {
#line 693 "bytecode_gen.m"
              *bytecode_backend__bytecode_gen__Code_5 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_45_45, bytecode_backend__bytecode_gen__EnterCode_42, bytecode_backend__bytecode_gen__V_36_36);
            }
#line 687 "bytecode_gen.m"
          }
#line 679 "bytecode_gen.m"
      }
#line 677 "bytecode_gen.m"
  }
#line 674 "bytecode_gen.m"
}

#line 661 "bytecode_gen.m"
static void MR_CALL 
bytecode_backend__bytecode_gen__gen_conj_4_p_0(
#line 661 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__HeadVar__1_1,
#line 661 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_2,
#line 661 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_3,
#line 661 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__HeadVar__4_4)
#line 661 "bytecode_gen.m"
{
#line 664 "bytecode_gen.m"
  {
#line 664 "bytecode_gen.m"
    MR_bool bytecode_backend__bytecode_gen__succeeded;

#line 664 "bytecode_gen.m"
    if ((bytecode_backend__bytecode_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 664 "bytecode_gen.m"
      {
#line 664 "bytecode_gen.m"
        {
#line 664 "bytecode_gen.m"
          *bytecode_backend__bytecode_gen__HeadVar__4_4 = mercury__cord__empty_0_f_0((MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0);
        }
#line 664 "bytecode_gen.m"
        *bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_3 = bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_2;
#line 664 "bytecode_gen.m"
      }
#line 664 "bytecode_gen.m"
    else
#line 665 "bytecode_gen.m"
      {
#line 665 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__TypeCtorInfo_17_32;
#line 665 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 665 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__Goals_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 665 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__ThisCode_12;
#line 665 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__OtherCode_13;
#line 665 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_16_16;
#line 665 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__GoalExpr_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__Goal_8, (MR_Integer) 0)));
#line 665 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__GoalInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__Goal_8, (MR_Integer) 1)));
#line 665 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__GoalCode_26;
#line 665 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__Context_27;
#line 665 "bytecode_gen.m"
        MR_Integer bytecode_backend__bytecode_gen__Line_28;
#line 665 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_30_30;
#line 665 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_31_31;

#line 206 "bytecode_gen.m"
        {
#line 206 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__gen_goal_expr_5_p_0(bytecode_backend__bytecode_gen__GoalExpr_23, bytecode_backend__bytecode_gen__GoalInfo_24, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_2, &bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_16_16, &bytecode_backend__bytecode_gen__GoalCode_26);
        }
#line 207 "bytecode_gen.m"
        {
#line 207 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__Context_27 = hlds__hlds_goal__goal_info_get_context_1_f_0(bytecode_backend__bytecode_gen__GoalInfo_24);
        }
#line 208 "bytecode_gen.m"
        {
#line 208 "bytecode_gen.m"
          mercury__term__context_line_2_p_0(bytecode_backend__bytecode_gen__Context_27, &bytecode_backend__bytecode_gen__Line_28);
        }
#line 3923 "bytecode_backend.bytecode_gen.c"
        bytecode_backend__bytecode_gen__TypeCtorInfo_17_32 = (MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0;
#line 209 "bytecode_gen.m"
        {
#line 209 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__V_31_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 209 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_31_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 29));
#line 209 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_31_31, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__Line_28));
#line 209 "bytecode_gen.m"
        }
#line 209 "bytecode_gen.m"
        {
#line 209 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__V_30_30 = mercury__cord__singleton_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_17_32, ((MR_Box) (bytecode_backend__bytecode_gen__V_31_31)));
        }
#line 209 "bytecode_gen.m"
        {
#line 209 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__ThisCode_12 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_17_32, bytecode_backend__bytecode_gen__V_30_30, bytecode_backend__bytecode_gen__GoalCode_26);
        }
#line 667 "bytecode_gen.m"
        {
#line 667 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__gen_conj_4_p_0(bytecode_backend__bytecode_gen__Goals_9, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_16_16, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_3, &bytecode_backend__bytecode_gen__OtherCode_13);
        }
#line 668 "bytecode_gen.m"
        {
#line 668 "bytecode_gen.m"
          *bytecode_backend__bytecode_gen__HeadVar__4_4 = mercury__cord__f_43_43_2_f_0((MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0, bytecode_backend__bytecode_gen__ThisCode_12, bytecode_backend__bytecode_gen__OtherCode_13);
        }
#line 665 "bytecode_gen.m"
      }
#line 664 "bytecode_gen.m"
  }
#line 661 "bytecode_gen.m"
}

#line 650 "bytecode_gen.m"
static MR_bool MR_CALL 
bytecode_backend__bytecode_gen__all_dirs_same_2_p_0(
#line 650 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__HeadVar__1_1,
#line 650 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__Dir_2)
#line 650 "bytecode_gen.m"
{
#line 653 "bytecode_gen.m"
  while (MR_TRUE)
#line 653 "bytecode_gen.m"
    {
#line 653 "bytecode_gen.m"
      /* tailcall optimized into a loop */
#line 653 "bytecode_gen.m"
      {
#line 653 "bytecode_gen.m"
        MR_bool bytecode_backend__bytecode_gen__succeeded;

#line 653 "bytecode_gen.m"
        if ((bytecode_backend__bytecode_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 653 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__succeeded = MR_TRUE;
#line 653 "bytecode_gen.m"
        else
#line 654 "bytecode_gen.m"
          {
#line 654 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__Dir_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 654 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__Dirs_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 1)));

#line 654 "bytecode_gen.m"
            bytecode_backend__bytecode_gen__succeeded = (bytecode_backend__bytecode_gen__Dir_2 == bytecode_backend__bytecode_gen__Dir_4);
#line 654 "bytecode_gen.m"
            if (bytecode_backend__bytecode_gen__succeeded)
#line 655 "bytecode_gen.m"
              {
#line 655 "bytecode_gen.m"
                /* direct tailcall eliminated */
#line 655 "bytecode_gen.m"
                {
#line 655 "bytecode_gen.m"
                  MR_Word bytecode_backend__bytecode_gen__HeadVar__1__tmp_copy_1 = bytecode_backend__bytecode_gen__Dirs_5;
#line 655 "bytecode_gen.m"
                  MR_Word bytecode_backend__bytecode_gen__Dir__tmp_copy_2 = bytecode_backend__bytecode_gen__Dir_4;

#line 655 "bytecode_gen.m"
                  bytecode_backend__bytecode_gen__Dir_2 = bytecode_backend__bytecode_gen__Dir__tmp_copy_2;
#line 655 "bytecode_gen.m"
                  bytecode_backend__bytecode_gen__HeadVar__1_1 = bytecode_backend__bytecode_gen__HeadVar__1__tmp_copy_1;
#line 655 "bytecode_gen.m"
                }
#line 655 "bytecode_gen.m"
                continue;
#line 655 "bytecode_gen.m"
              }
#line 654 "bytecode_gen.m"
          }
#line 653 "bytecode_gen.m"
        return bytecode_backend__bytecode_gen__succeeded;
#line 653 "bytecode_gen.m"
      }
#line 653 "bytecode_gen.m"
      break;
#line 653 "bytecode_gen.m"
    }
#line 650 "bytecode_gen.m"
}

#line 615 "bytecode_gen.m"
static void MR_CALL 
bytecode_backend__bytecode_gen__map_uni_modes_4_p_0(
#line 615 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__HeadVar__1_1,
#line 615 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__HeadVar__2_2,
#line 615 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__ByteInfo_3,
#line 615 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__HeadVar__4_4)
#line 615 "bytecode_gen.m"
{
#line 618 "bytecode_gen.m"
  {
#line 618 "bytecode_gen.m"
    MR_bool bytecode_backend__bytecode_gen__succeeded;

#line 618 "bytecode_gen.m"
    if ((bytecode_backend__bytecode_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 618 "bytecode_gen.m"
      if ((bytecode_backend__bytecode_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 618 "bytecode_gen.m"
        *bytecode_backend__bytecode_gen__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 618 "bytecode_gen.m"
      else
#line 645 "bytecode_gen.m"
        {
#line 646 "bytecode_gen.m"
          {
#line 646 "bytecode_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.map_uni_modes\'/4", (MR_String) "length mismatch");
#line 646 "bytecode_gen.m"
            return;
          }
#line 645 "bytecode_gen.m"
        }
#line 618 "bytecode_gen.m"
    else
#line 618 "bytecode_gen.m"
      {
#line 618 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 618 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 0)));

#line 618 "bytecode_gen.m"
        if ((bytecode_backend__bytecode_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 647 "bytecode_gen.m"
          {
#line 648 "bytecode_gen.m"
            {
#line 648 "bytecode_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.map_uni_modes\'/4", (MR_String) "length mismatch");
#line 648 "bytecode_gen.m"
              return;
            }
#line 647 "bytecode_gen.m"
          }
#line 618 "bytecode_gen.m"
        else
#line 619 "bytecode_gen.m"
          {
#line 619 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__Arg_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 619 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__Args_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 619 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__Dir_11;
#line 619 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__Dirs_12;
#line 619 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__VarInitial_13;
#line 619 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__ArgInitial_14;
#line 619 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__VarFinal_15;
#line 619 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__ArgFinal_16;
#line 619 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__ModuleInfo_17;
#line 619 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__Type_18;
#line 619 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__VarMode_19;
#line 619 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__ArgMode_20;
#line 619 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__V_43_43, (MR_Integer) 0)));
#line 619 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__V_43_43, (MR_Integer) 1)));
#line 619 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__V_23_23;
#line 619 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__V_24_24;
#line 619 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__V_46_46;
#line 897 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__V_45_45;
#line 897 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__V_47_47;
#line 897 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__V_48_48;

#line 620 "bytecode_gen.m"
            bytecode_backend__bytecode_gen__VarInitial_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__V_21_21, (MR_Integer) 0)));
#line 620 "bytecode_gen.m"
            bytecode_backend__bytecode_gen__ArgInitial_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__V_21_21, (MR_Integer) 1)));
#line 620 "bytecode_gen.m"
            bytecode_backend__bytecode_gen__VarFinal_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__V_22_22, (MR_Integer) 0)));
#line 620 "bytecode_gen.m"
            bytecode_backend__bytecode_gen__ArgFinal_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__V_22_22, (MR_Integer) 1)));
#line 897 "bytecode_gen.m"
            bytecode_backend__bytecode_gen__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_3, (MR_Integer) 0)));
#line 897 "bytecode_gen.m"
            bytecode_backend__bytecode_gen__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_3, (MR_Integer) 1)));
#line 897 "bytecode_gen.m"
            bytecode_backend__bytecode_gen__ModuleInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_3, (MR_Integer) 2)));
#line 897 "bytecode_gen.m"
            bytecode_backend__bytecode_gen__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_3, (MR_Integer) 3)));
#line 897 "bytecode_gen.m"
            bytecode_backend__bytecode_gen__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_3, (MR_Integer) 4)));
#line 923 "bytecode_gen.m"
            {
#line 923 "bytecode_gen.m"
              parse_tree__prog_data__lookup_var_type_3_p_0(bytecode_backend__bytecode_gen__V_46_46, bytecode_backend__bytecode_gen__Arg_8, &bytecode_backend__bytecode_gen__Type_18);
            }
#line 623 "bytecode_gen.m"
            {
#line 623 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 623 "bytecode_gen.m"
              MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__V_23_23, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__VarInitial_13));
#line 623 "bytecode_gen.m"
              MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__V_23_23, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__VarFinal_15));
#line 623 "bytecode_gen.m"
            }
#line 623 "bytecode_gen.m"
            {
#line 623 "bytecode_gen.m"
              check_hlds__mode_util__mode_to_arg_mode_4_p_0(bytecode_backend__bytecode_gen__ModuleInfo_17, bytecode_backend__bytecode_gen__V_23_23, bytecode_backend__bytecode_gen__Type_18, &bytecode_backend__bytecode_gen__VarMode_19);
            }
#line 624 "bytecode_gen.m"
            {
#line 624 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 624 "bytecode_gen.m"
              MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__V_24_24, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__ArgInitial_14));
#line 624 "bytecode_gen.m"
              MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__V_24_24, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__ArgFinal_16));
#line 624 "bytecode_gen.m"
            }
#line 624 "bytecode_gen.m"
            {
#line 624 "bytecode_gen.m"
              check_hlds__mode_util__mode_to_arg_mode_4_p_0(bytecode_backend__bytecode_gen__ModuleInfo_17, bytecode_backend__bytecode_gen__V_24_24, bytecode_backend__bytecode_gen__Type_18, &bytecode_backend__bytecode_gen__ArgMode_20);
            }
#line 626 "bytecode_gen.m"
            bytecode_backend__bytecode_gen__succeeded = (bytecode_backend__bytecode_gen__VarMode_19 == (MR_Integer) 0);
#line 626 "bytecode_gen.m"
            if (bytecode_backend__bytecode_gen__succeeded)
#line 627 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__succeeded = (bytecode_backend__bytecode_gen__ArgMode_20 == (MR_Integer) 1);
#line 630 "bytecode_gen.m"
            if (bytecode_backend__bytecode_gen__succeeded)
#line 629 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__Dir_11 = (MR_Integer) 0;
#line 630 "bytecode_gen.m"
            else
#line 635 "bytecode_gen.m"
              {
#line 631 "bytecode_gen.m"
                bytecode_backend__bytecode_gen__succeeded = (bytecode_backend__bytecode_gen__VarMode_19 == (MR_Integer) 1);
#line 631 "bytecode_gen.m"
                if (bytecode_backend__bytecode_gen__succeeded)
#line 632 "bytecode_gen.m"
                  bytecode_backend__bytecode_gen__succeeded = (bytecode_backend__bytecode_gen__ArgMode_20 == (MR_Integer) 0);
#line 635 "bytecode_gen.m"
                if (bytecode_backend__bytecode_gen__succeeded)
#line 634 "bytecode_gen.m"
                  bytecode_backend__bytecode_gen__Dir_11 = (MR_Integer) 1;
#line 635 "bytecode_gen.m"
                else
#line 640 "bytecode_gen.m"
                  {
#line 636 "bytecode_gen.m"
                    bytecode_backend__bytecode_gen__succeeded = (bytecode_backend__bytecode_gen__VarMode_19 == (MR_Integer) 2);
#line 636 "bytecode_gen.m"
                    if (bytecode_backend__bytecode_gen__succeeded)
#line 637 "bytecode_gen.m"
                      bytecode_backend__bytecode_gen__succeeded = (bytecode_backend__bytecode_gen__ArgMode_20 == (MR_Integer) 2);
#line 640 "bytecode_gen.m"
                    if (bytecode_backend__bytecode_gen__succeeded)
#line 639 "bytecode_gen.m"
                      bytecode_backend__bytecode_gen__Dir_11 = (MR_Integer) 2;
#line 640 "bytecode_gen.m"
                    else
#line 641 "bytecode_gen.m"
                      {
#line 641 "bytecode_gen.m"
                        {
#line 641 "bytecode_gen.m"
                          mercury__require__unexpected_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.map_uni_modes\'/4", (MR_String) "invalid mode for (de)construct unification");
#line 641 "bytecode_gen.m"
                          return;
                        }
#line 641 "bytecode_gen.m"
                      }
#line 640 "bytecode_gen.m"
                  }
#line 635 "bytecode_gen.m"
              }
#line 644 "bytecode_gen.m"
            {
#line 644 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__map_uni_modes_4_p_0(bytecode_backend__bytecode_gen__V_42_42, bytecode_backend__bytecode_gen__Args_9, bytecode_backend__bytecode_gen__ByteInfo_3, &bytecode_backend__bytecode_gen__Dirs_12);
            }
#line 619 "bytecode_gen.m"
            {
#line 619 "bytecode_gen.m"
              MR_Word base;
#line 619 "bytecode_gen.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 619 "bytecode_gen.m"
              *bytecode_backend__bytecode_gen__HeadVar__4_4 = base;
#line 619 "bytecode_gen.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__Dir_11));
#line 619 "bytecode_gen.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__Dirs_12));
#line 619 "bytecode_gen.m"
            }
#line 619 "bytecode_gen.m"
          }
#line 618 "bytecode_gen.m"
      }
#line 618 "bytecode_gen.m"
  }
#line 615 "bytecode_gen.m"
}

#line 492 "bytecode_gen.m"
static void MR_CALL 
bytecode_backend__bytecode_gen__map_arg_3_p_0(
#line 492 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__ByteInfo_4,
#line 492 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__Expr_5,
#line 492 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__ByteArg_6)
#line 492 "bytecode_gen.m"
{
#line 497 "bytecode_gen.m"
  {
#line 497 "bytecode_gen.m"
    MR_bool bytecode_backend__bytecode_gen__succeeded;

#line 497 "bytecode_gen.m"
    if (((MR_tag((MR_Word) bytecode_backend__bytecode_gen__Expr_5)) == (MR_mktag((MR_Integer) 2))))
#line 504 "bytecode_gen.m"
      {
#line 504 "bytecode_gen.m"
        MR_Float bytecode_backend__bytecode_gen__FloatVal_10 = MR_unbox_float((MR_hl_field(MR_mktag(2), bytecode_backend__bytecode_gen__Expr_5, (MR_Integer) 0)));

#line 505 "bytecode_gen.m"
        {
#line 505 "bytecode_gen.m"
          MR_Word base;
#line 505 "bytecode_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 505 "bytecode_gen.m"
          *bytecode_backend__bytecode_gen__ByteArg_6 = base;
#line 505 "bytecode_gen.m"
          MR_hl_field(MR_mktag(2), base, 0) = MR_box_float(bytecode_backend__bytecode_gen__FloatVal_10);
#line 505 "bytecode_gen.m"
        }
#line 504 "bytecode_gen.m"
      }
#line 497 "bytecode_gen.m"
    else
#line 497 "bytecode_gen.m"
    if (((MR_tag((MR_Word) bytecode_backend__bytecode_gen__Expr_5)) == (MR_mktag((MR_Integer) 1))))
#line 501 "bytecode_gen.m"
      {
#line 501 "bytecode_gen.m"
        MR_Integer bytecode_backend__bytecode_gen__IntVal_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__Expr_5, (MR_Integer) 0)));

#line 502 "bytecode_gen.m"
        {
#line 502 "bytecode_gen.m"
          MR_Word base;
#line 502 "bytecode_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 502 "bytecode_gen.m"
          *bytecode_backend__bytecode_gen__ByteArg_6 = base;
#line 502 "bytecode_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__IntVal_9));
#line 502 "bytecode_gen.m"
        }
#line 501 "bytecode_gen.m"
      }
#line 497 "bytecode_gen.m"
    else
#line 497 "bytecode_gen.m"
      {
#line 497 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__Expr_5, (MR_Integer) 0)));
#line 497 "bytecode_gen.m"
        MR_Integer bytecode_backend__bytecode_gen__ByteVar_8;
#line 497 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_4, (MR_Integer) 0)));
#line 917 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_4, (MR_Integer) 1)));
#line 917 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_4, (MR_Integer) 2)));
#line 917 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_4, (MR_Integer) 3)));
#line 917 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_4, (MR_Integer) 4)));
#line 917 "bytecode_gen.m"
        MR_Box bytecode_backend__bytecode_gen__conv0_ByteVar_8;

#line 917 "bytecode_gen.m"
        {
#line 917 "bytecode_gen.m"
          mercury__map__lookup_3_p_0((MR_Word) &bytecode_backend__bytecode_gen_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, bytecode_backend__bytecode_gen__V_14_14, ((MR_Box) (bytecode_backend__bytecode_gen__Var_7)), &bytecode_backend__bytecode_gen__conv0_ByteVar_8);
        }
#line 917 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__ByteVar_8 = ((MR_Integer) bytecode_backend__bytecode_gen__conv0_ByteVar_8);
#line 499 "bytecode_gen.m"
        {
#line 499 "bytecode_gen.m"
          MR_Word base;
#line 499 "bytecode_gen.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 499 "bytecode_gen.m"
          *bytecode_backend__bytecode_gen__ByteArg_6 = base;
#line 499 "bytecode_gen.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteVar_8));
#line 499 "bytecode_gen.m"
        }
#line 497 "bytecode_gen.m"
      }
#line 497 "bytecode_gen.m"
  }
#line 492 "bytecode_gen.m"
}

#line 469 "bytecode_gen.m"
static void MR_CALL 
bytecode_backend__bytecode_gen__map_assign_4_p_0(
#line 469 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__ByteInfo_5,
#line 469 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__Var_6,
#line 469 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__Expr_7,
#line 469 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__Code_8)
#line 469 "bytecode_gen.m"
{
#line 475 "bytecode_gen.m"
  {
#line 475 "bytecode_gen.m"
    MR_bool bytecode_backend__bytecode_gen__succeeded;

#line 475 "bytecode_gen.m"
    if (((MR_tag((MR_Word) bytecode_backend__bytecode_gen__Expr_7)) == (MR_mktag((MR_Integer) 0))))
#line 486 "bytecode_gen.m"
      {
#line 486 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_16_16;
#line 486 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__X_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__Expr_7, (MR_Integer) 0)));
#line 486 "bytecode_gen.m"
        MR_Integer bytecode_backend__bytecode_gen__ByteX_23;
#line 486 "bytecode_gen.m"
        MR_Integer bytecode_backend__bytecode_gen__ByteVar_24;
#line 486 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_5, (MR_Integer) 0)));
#line 486 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_85_85;
#line 917 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_5, (MR_Integer) 1)));
#line 917 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_5, (MR_Integer) 2)));
#line 917 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_5, (MR_Integer) 3)));
#line 917 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_5, (MR_Integer) 4)));
#line 917 "bytecode_gen.m"
        MR_Box bytecode_backend__bytecode_gen__conv0_ByteX_23;
#line 917 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_86_86;
#line 917 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_87_87;
#line 917 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_88_88;
#line 917 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_89_89;
#line 917 "bytecode_gen.m"
        MR_Box bytecode_backend__bytecode_gen__conv1_ByteVar_24;

#line 917 "bytecode_gen.m"
        {
#line 917 "bytecode_gen.m"
          mercury__map__lookup_3_p_0((MR_Word) &bytecode_backend__bytecode_gen_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, bytecode_backend__bytecode_gen__V_75_75, ((MR_Box) (bytecode_backend__bytecode_gen__X_22)), &bytecode_backend__bytecode_gen__conv0_ByteX_23);
        }
#line 917 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__ByteX_23 = ((MR_Integer) bytecode_backend__bytecode_gen__conv0_ByteX_23);
#line 917 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_5, (MR_Integer) 0)));
#line 917 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_5, (MR_Integer) 1)));
#line 917 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_5, (MR_Integer) 2)));
#line 917 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_5, (MR_Integer) 3)));
#line 917 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_5, (MR_Integer) 4)));
#line 917 "bytecode_gen.m"
        {
#line 917 "bytecode_gen.m"
          mercury__map__lookup_3_p_0((MR_Word) &bytecode_backend__bytecode_gen_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, bytecode_backend__bytecode_gen__V_85_85, ((MR_Box) (bytecode_backend__bytecode_gen__Var_6)), &bytecode_backend__bytecode_gen__conv1_ByteVar_24);
        }
#line 917 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__ByteVar_24 = ((MR_Integer) bytecode_backend__bytecode_gen__conv1_ByteVar_24);
#line 489 "bytecode_gen.m"
        {
#line 489 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__V_16_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 489 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_16_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
#line 489 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_16_16, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteVar_24));
#line 489 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_16_16, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteX_23));
#line 489 "bytecode_gen.m"
        }
#line 489 "bytecode_gen.m"
        {
#line 489 "bytecode_gen.m"
          *bytecode_backend__bytecode_gen__Code_8 = mercury__cord__singleton_1_f_0((MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0, ((MR_Box) (bytecode_backend__bytecode_gen__V_16_16)));
        }
#line 486 "bytecode_gen.m"
      }
#line 475 "bytecode_gen.m"
    else
#line 475 "bytecode_gen.m"
    if (((((MR_tag((MR_Word) bytecode_backend__bytecode_gen__Expr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__Expr_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 475 "bytecode_gen.m"
      {
#line 475 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__Binop_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__Expr_7, (MR_Integer) 1)));
#line 475 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__X_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__Expr_7, (MR_Integer) 2)));
#line 475 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__Y_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__Expr_7, (MR_Integer) 3)));
#line 475 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__ByteX_12;
#line 475 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__ByteY_13;
#line 475 "bytecode_gen.m"
        MR_Integer bytecode_backend__bytecode_gen__ByteVar_14;
#line 475 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_18_18;
#line 475 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_65_65;
#line 917 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_66_66;
#line 917 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_67_67;
#line 917 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_68_68;
#line 917 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_69_69;
#line 917 "bytecode_gen.m"
        MR_Box bytecode_backend__bytecode_gen__conv4_ByteVar_14;

#line 497 "bytecode_gen.m"
        if (((MR_tag((MR_Word) bytecode_backend__bytecode_gen__X_10)) == (MR_mktag((MR_Integer) 2))))
#line 504 "bytecode_gen.m"
          {
#line 504 "bytecode_gen.m"
            MR_Float bytecode_backend__bytecode_gen__FloatVal_34 = MR_unbox_float((MR_hl_field(MR_mktag(2), bytecode_backend__bytecode_gen__X_10, (MR_Integer) 0)));

#line 505 "bytecode_gen.m"
            {
#line 505 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__ByteX_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 505 "bytecode_gen.m"
              MR_hl_field(MR_mktag(2), bytecode_backend__bytecode_gen__ByteX_12, 0) = MR_box_float(bytecode_backend__bytecode_gen__FloatVal_34);
#line 505 "bytecode_gen.m"
            }
#line 504 "bytecode_gen.m"
          }
#line 497 "bytecode_gen.m"
        else
#line 497 "bytecode_gen.m"
        if (((MR_tag((MR_Word) bytecode_backend__bytecode_gen__X_10)) == (MR_mktag((MR_Integer) 1))))
#line 501 "bytecode_gen.m"
          {
#line 501 "bytecode_gen.m"
            MR_Integer bytecode_backend__bytecode_gen__IntVal_33 = ((MR_Integer) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__X_10, (MR_Integer) 0)));

#line 502 "bytecode_gen.m"
            {
#line 502 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__ByteX_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 502 "bytecode_gen.m"
              MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__ByteX_12, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__IntVal_33));
#line 502 "bytecode_gen.m"
            }
#line 501 "bytecode_gen.m"
          }
#line 497 "bytecode_gen.m"
        else
#line 497 "bytecode_gen.m"
          {
#line 497 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__X_10, (MR_Integer) 0)));
#line 497 "bytecode_gen.m"
            MR_Integer bytecode_backend__bytecode_gen__ByteVar_32;
#line 497 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_5, (MR_Integer) 0)));
#line 917 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_5, (MR_Integer) 1)));
#line 917 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_5, (MR_Integer) 2)));
#line 917 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_5, (MR_Integer) 3)));
#line 917 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_5, (MR_Integer) 4)));
#line 917 "bytecode_gen.m"
            MR_Box bytecode_backend__bytecode_gen__conv2_ByteVar_32;

#line 917 "bytecode_gen.m"
            {
#line 917 "bytecode_gen.m"
              mercury__map__lookup_3_p_0((MR_Word) &bytecode_backend__bytecode_gen_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, bytecode_backend__bytecode_gen__V_38_38, ((MR_Box) (bytecode_backend__bytecode_gen__Var_31)), &bytecode_backend__bytecode_gen__conv2_ByteVar_32);
            }
#line 917 "bytecode_gen.m"
            bytecode_backend__bytecode_gen__ByteVar_32 = ((MR_Integer) bytecode_backend__bytecode_gen__conv2_ByteVar_32);
#line 499 "bytecode_gen.m"
            {
#line 499 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__ByteX_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 499 "bytecode_gen.m"
              MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteX_12, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteVar_32));
#line 499 "bytecode_gen.m"
            }
#line 497 "bytecode_gen.m"
          }
#line 497 "bytecode_gen.m"
        if (((MR_tag((MR_Word) bytecode_backend__bytecode_gen__Y_11)) == (MR_mktag((MR_Integer) 2))))
#line 504 "bytecode_gen.m"
          {
#line 504 "bytecode_gen.m"
            MR_Float bytecode_backend__bytecode_gen__FloatVal_51 = MR_unbox_float((MR_hl_field(MR_mktag(2), bytecode_backend__bytecode_gen__Y_11, (MR_Integer) 0)));

#line 505 "bytecode_gen.m"
            {
#line 505 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__ByteY_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 505 "bytecode_gen.m"
              MR_hl_field(MR_mktag(2), bytecode_backend__bytecode_gen__ByteY_13, 0) = MR_box_float(bytecode_backend__bytecode_gen__FloatVal_51);
#line 505 "bytecode_gen.m"
            }
#line 504 "bytecode_gen.m"
          }
#line 497 "bytecode_gen.m"
        else
#line 497 "bytecode_gen.m"
        if (((MR_tag((MR_Word) bytecode_backend__bytecode_gen__Y_11)) == (MR_mktag((MR_Integer) 1))))
#line 501 "bytecode_gen.m"
          {
#line 501 "bytecode_gen.m"
            MR_Integer bytecode_backend__bytecode_gen__IntVal_50 = ((MR_Integer) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__Y_11, (MR_Integer) 0)));

#line 502 "bytecode_gen.m"
            {
#line 502 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__ByteY_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 502 "bytecode_gen.m"
              MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__ByteY_13, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__IntVal_50));
#line 502 "bytecode_gen.m"
            }
#line 501 "bytecode_gen.m"
          }
#line 497 "bytecode_gen.m"
        else
#line 497 "bytecode_gen.m"
          {
#line 497 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__Y_11, (MR_Integer) 0)));
#line 497 "bytecode_gen.m"
            MR_Integer bytecode_backend__bytecode_gen__ByteVar_49;
#line 497 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_5, (MR_Integer) 0)));
#line 917 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_5, (MR_Integer) 1)));
#line 917 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_5, (MR_Integer) 2)));
#line 917 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_5, (MR_Integer) 3)));
#line 917 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_5, (MR_Integer) 4)));
#line 917 "bytecode_gen.m"
            MR_Box bytecode_backend__bytecode_gen__conv3_ByteVar_49;

#line 917 "bytecode_gen.m"
            {
#line 917 "bytecode_gen.m"
              mercury__map__lookup_3_p_0((MR_Word) &bytecode_backend__bytecode_gen_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, bytecode_backend__bytecode_gen__V_55_55, ((MR_Box) (bytecode_backend__bytecode_gen__Var_48)), &bytecode_backend__bytecode_gen__conv3_ByteVar_49);
            }
#line 917 "bytecode_gen.m"
            bytecode_backend__bytecode_gen__ByteVar_49 = ((MR_Integer) bytecode_backend__bytecode_gen__conv3_ByteVar_49);
#line 499 "bytecode_gen.m"
            {
#line 499 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__ByteY_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 499 "bytecode_gen.m"
              MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteY_13, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteVar_49));
#line 499 "bytecode_gen.m"
            }
#line 497 "bytecode_gen.m"
          }
#line 917 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_5, (MR_Integer) 0)));
#line 917 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_5, (MR_Integer) 1)));
#line 917 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_5, (MR_Integer) 2)));
#line 917 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_5, (MR_Integer) 3)));
#line 917 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_5, (MR_Integer) 4)));
#line 917 "bytecode_gen.m"
        {
#line 917 "bytecode_gen.m"
          mercury__map__lookup_3_p_0((MR_Word) &bytecode_backend__bytecode_gen_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, bytecode_backend__bytecode_gen__V_65_65, ((MR_Box) (bytecode_backend__bytecode_gen__Var_6)), &bytecode_backend__bytecode_gen__conv4_ByteVar_14);
        }
#line 917 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__ByteVar_14 = ((MR_Integer) bytecode_backend__bytecode_gen__conv4_ByteVar_14);
#line 479 "bytecode_gen.m"
        {
#line 479 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__V_18_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 479 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_18_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 25));
#line 479 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_18_18, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__Binop_9));
#line 479 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_18_18, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteX_12));
#line 479 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_18_18, 3) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteY_13));
#line 479 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_18_18, 4) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteVar_14));
#line 479 "bytecode_gen.m"
        }
#line 479 "bytecode_gen.m"
        {
#line 479 "bytecode_gen.m"
          *bytecode_backend__bytecode_gen__Code_8 = mercury__cord__singleton_1_f_0((MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0, ((MR_Box) (bytecode_backend__bytecode_gen__V_18_18)));
        }
#line 475 "bytecode_gen.m"
      }
#line 475 "bytecode_gen.m"
    else
#line 481 "bytecode_gen.m"
      {
#line 481 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__Unop_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__Expr_7, (MR_Integer) 1)));
#line 481 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_17_17;
#line 481 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__X_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__Expr_7, (MR_Integer) 2)));
#line 481 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__ByteX_20;
#line 481 "bytecode_gen.m"
        MR_Integer bytecode_backend__bytecode_gen__ByteVar_21;

#line 482 "bytecode_gen.m"
        {
#line 482 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__map_arg_3_p_0(bytecode_backend__bytecode_gen__ByteInfo_5, bytecode_backend__bytecode_gen__X_19, &bytecode_backend__bytecode_gen__ByteX_20);
        }
#line 483 "bytecode_gen.m"
        {
#line 483 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__map_var_3_p_0(bytecode_backend__bytecode_gen__ByteInfo_5, bytecode_backend__bytecode_gen__Var_6, &bytecode_backend__bytecode_gen__ByteVar_21);
        }
#line 484 "bytecode_gen.m"
        {
#line 484 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__V_17_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 484 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_17_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 26));
#line 484 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_17_17, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__Unop_15));
#line 484 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_17_17, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteX_20));
#line 484 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_17_17, 3) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteVar_21));
#line 484 "bytecode_gen.m"
        }
#line 484 "bytecode_gen.m"
        {
#line 484 "bytecode_gen.m"
          *bytecode_backend__bytecode_gen__Code_8 = mercury__cord__singleton_1_f_0((MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0, ((MR_Box) (bytecode_backend__bytecode_gen__V_17_17)));
        }
#line 481 "bytecode_gen.m"
      }
#line 475 "bytecode_gen.m"
  }
#line 469 "bytecode_gen.m"
}

#line 431 "bytecode_gen.m"
static void MR_CALL 
bytecode_backend__bytecode_gen__gen_builtin_5_p_0(
#line 431 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__PredId_6,
#line 431 "bytecode_gen.m"
  MR_Integer bytecode_backend__bytecode_gen__ProcId_7,
#line 431 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__Args_8,
#line 431 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__ByteInfo_9,
#line 431 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__Code_10)
#line 431 "bytecode_gen.m"
{
#line 434 "bytecode_gen.m"
  {
#line 434 "bytecode_gen.m"
    MR_bool bytecode_backend__bytecode_gen__succeeded;
#line 434 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__ModuleInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_9, (MR_Integer) 2)));
#line 434 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__ModuleName_12;
#line 434 "bytecode_gen.m"
    MR_String bytecode_backend__bytecode_gen__PredName_13;
#line 434 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__SimpleCode_14;
#line 897 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_9, (MR_Integer) 0)));
#line 897 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_9, (MR_Integer) 1)));
#line 897 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_9, (MR_Integer) 3)));
#line 897 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_9, (MR_Integer) 4)));

#line 436 "bytecode_gen.m"
    {
#line 436 "bytecode_gen.m"
      bytecode_backend__bytecode_gen__ModuleName_12 = hlds__hlds_module__predicate_module_2_f_0(bytecode_backend__bytecode_gen__ModuleInfo_11, bytecode_backend__bytecode_gen__PredId_6);
    }
#line 437 "bytecode_gen.m"
    {
#line 437 "bytecode_gen.m"
      bytecode_backend__bytecode_gen__PredName_13 = hlds__hlds_module__predicate_name_2_f_0(bytecode_backend__bytecode_gen__ModuleInfo_11, bytecode_backend__bytecode_gen__PredId_6);
    }
#line 438 "bytecode_gen.m"
    {
#line 438 "bytecode_gen.m"
      backend_libs__builtin_ops__translate_builtin_5_p_0((MR_Word) &bytecode_backend__bytecode_gen_scalar_common_1[0], bytecode_backend__bytecode_gen__ModuleName_12, bytecode_backend__bytecode_gen__PredName_13, bytecode_backend__bytecode_gen__ProcId_7, bytecode_backend__bytecode_gen__Args_8, &bytecode_backend__bytecode_gen__SimpleCode_14);
    }
#line 443 "bytecode_gen.m"
    if (((MR_tag((MR_Word) bytecode_backend__bytecode_gen__SimpleCode_14)) == (MR_mktag((MR_Integer) 0))))
#line 444 "bytecode_gen.m"
      {
#line 444 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__SimpleCode_14, (MR_Integer) 0)));
#line 444 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__Expr_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__SimpleCode_14, (MR_Integer) 1)));

#line 445 "bytecode_gen.m"
        {
#line 445 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__map_assign_4_p_0(bytecode_backend__bytecode_gen__ByteInfo_9, bytecode_backend__bytecode_gen__Var_16, bytecode_backend__bytecode_gen__Expr_17, bytecode_backend__bytecode_gen__Code_10);
#line 445 "bytecode_gen.m"
          return;
        }
#line 444 "bytecode_gen.m"
      }
#line 443 "bytecode_gen.m"
    else
#line 443 "bytecode_gen.m"
    if (((MR_tag((MR_Word) bytecode_backend__bytecode_gen__SimpleCode_14)) == (MR_mktag((MR_Integer) 3))))
#line 450 "bytecode_gen.m"
      {
#line 451 "bytecode_gen.m"
        {
#line 451 "bytecode_gen.m"
          *bytecode_backend__bytecode_gen__Code_10 = mercury__cord__empty_0_f_0((MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0);
        }
#line 450 "bytecode_gen.m"
      }
#line 443 "bytecode_gen.m"
    else
#line 443 "bytecode_gen.m"
    if (((MR_tag((MR_Word) bytecode_backend__bytecode_gen__SimpleCode_14)) == (MR_mktag((MR_Integer) 1))))
#line 447 "bytecode_gen.m"
      {
#line 448 "bytecode_gen.m"
        {
#line 448 "bytecode_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.gen_builtin\'/5", (MR_String) "ref_assign");
#line 448 "bytecode_gen.m"
          return;
        }
#line 447 "bytecode_gen.m"
      }
#line 443 "bytecode_gen.m"
    else
#line 441 "bytecode_gen.m"
      {
#line 441 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__Test_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode_gen__SimpleCode_14, (MR_Integer) 0)));

#line 459 "bytecode_gen.m"
        if (((((MR_tag((MR_Word) bytecode_backend__bytecode_gen__Test_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__Test_15, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 459 "bytecode_gen.m"
          {
#line 459 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__Binop_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__Test_15, (MR_Integer) 1)));
#line 459 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__X_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__Test_15, (MR_Integer) 2)));
#line 459 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__Y_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__Test_15, (MR_Integer) 3)));
#line 459 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__ByteX_37;
#line 459 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__ByteY_38;
#line 459 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__V_41_41;

#line 497 "bytecode_gen.m"
            if (((MR_tag((MR_Word) bytecode_backend__bytecode_gen__X_35)) == (MR_mktag((MR_Integer) 2))))
#line 504 "bytecode_gen.m"
              {
#line 504 "bytecode_gen.m"
                MR_Float bytecode_backend__bytecode_gen__FloatVal_52 = MR_unbox_float((MR_hl_field(MR_mktag(2), bytecode_backend__bytecode_gen__X_35, (MR_Integer) 0)));

#line 505 "bytecode_gen.m"
                {
#line 505 "bytecode_gen.m"
                  bytecode_backend__bytecode_gen__ByteX_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 505 "bytecode_gen.m"
                  MR_hl_field(MR_mktag(2), bytecode_backend__bytecode_gen__ByteX_37, 0) = MR_box_float(bytecode_backend__bytecode_gen__FloatVal_52);
#line 505 "bytecode_gen.m"
                }
#line 504 "bytecode_gen.m"
              }
#line 497 "bytecode_gen.m"
            else
#line 497 "bytecode_gen.m"
            if (((MR_tag((MR_Word) bytecode_backend__bytecode_gen__X_35)) == (MR_mktag((MR_Integer) 1))))
#line 501 "bytecode_gen.m"
              {
#line 501 "bytecode_gen.m"
                MR_Integer bytecode_backend__bytecode_gen__IntVal_51 = ((MR_Integer) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__X_35, (MR_Integer) 0)));

#line 502 "bytecode_gen.m"
                {
#line 502 "bytecode_gen.m"
                  bytecode_backend__bytecode_gen__ByteX_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 502 "bytecode_gen.m"
                  MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__ByteX_37, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__IntVal_51));
#line 502 "bytecode_gen.m"
                }
#line 501 "bytecode_gen.m"
              }
#line 497 "bytecode_gen.m"
            else
#line 497 "bytecode_gen.m"
              {
#line 497 "bytecode_gen.m"
                MR_Word bytecode_backend__bytecode_gen__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__X_35, (MR_Integer) 0)));
#line 497 "bytecode_gen.m"
                MR_Integer bytecode_backend__bytecode_gen__ByteVar_50;
#line 497 "bytecode_gen.m"
                MR_Word bytecode_backend__bytecode_gen__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_9, (MR_Integer) 0)));
#line 917 "bytecode_gen.m"
                MR_Word bytecode_backend__bytecode_gen__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_9, (MR_Integer) 1)));
#line 917 "bytecode_gen.m"
                MR_Word bytecode_backend__bytecode_gen__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_9, (MR_Integer) 2)));
#line 917 "bytecode_gen.m"
                MR_Word bytecode_backend__bytecode_gen__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_9, (MR_Integer) 3)));
#line 917 "bytecode_gen.m"
                MR_Word bytecode_backend__bytecode_gen__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_9, (MR_Integer) 4)));
#line 917 "bytecode_gen.m"
                MR_Box bytecode_backend__bytecode_gen__conv0_ByteVar_50;

#line 917 "bytecode_gen.m"
                {
#line 917 "bytecode_gen.m"
                  mercury__map__lookup_3_p_0((MR_Word) &bytecode_backend__bytecode_gen_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, bytecode_backend__bytecode_gen__V_56_56, ((MR_Box) (bytecode_backend__bytecode_gen__Var_49)), &bytecode_backend__bytecode_gen__conv0_ByteVar_50);
                }
#line 917 "bytecode_gen.m"
                bytecode_backend__bytecode_gen__ByteVar_50 = ((MR_Integer) bytecode_backend__bytecode_gen__conv0_ByteVar_50);
#line 499 "bytecode_gen.m"
                {
#line 499 "bytecode_gen.m"
                  bytecode_backend__bytecode_gen__ByteX_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 499 "bytecode_gen.m"
                  MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteX_37, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteVar_50));
#line 499 "bytecode_gen.m"
                }
#line 497 "bytecode_gen.m"
              }
#line 497 "bytecode_gen.m"
            if (((MR_tag((MR_Word) bytecode_backend__bytecode_gen__Y_36)) == (MR_mktag((MR_Integer) 2))))
#line 504 "bytecode_gen.m"
              {
#line 504 "bytecode_gen.m"
                MR_Float bytecode_backend__bytecode_gen__FloatVal_69 = MR_unbox_float((MR_hl_field(MR_mktag(2), bytecode_backend__bytecode_gen__Y_36, (MR_Integer) 0)));

#line 505 "bytecode_gen.m"
                {
#line 505 "bytecode_gen.m"
                  bytecode_backend__bytecode_gen__ByteY_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 505 "bytecode_gen.m"
                  MR_hl_field(MR_mktag(2), bytecode_backend__bytecode_gen__ByteY_38, 0) = MR_box_float(bytecode_backend__bytecode_gen__FloatVal_69);
#line 505 "bytecode_gen.m"
                }
#line 504 "bytecode_gen.m"
              }
#line 497 "bytecode_gen.m"
            else
#line 497 "bytecode_gen.m"
            if (((MR_tag((MR_Word) bytecode_backend__bytecode_gen__Y_36)) == (MR_mktag((MR_Integer) 1))))
#line 501 "bytecode_gen.m"
              {
#line 501 "bytecode_gen.m"
                MR_Integer bytecode_backend__bytecode_gen__IntVal_68 = ((MR_Integer) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__Y_36, (MR_Integer) 0)));

#line 502 "bytecode_gen.m"
                {
#line 502 "bytecode_gen.m"
                  bytecode_backend__bytecode_gen__ByteY_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 502 "bytecode_gen.m"
                  MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__ByteY_38, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__IntVal_68));
#line 502 "bytecode_gen.m"
                }
#line 501 "bytecode_gen.m"
              }
#line 497 "bytecode_gen.m"
            else
#line 497 "bytecode_gen.m"
              {
#line 497 "bytecode_gen.m"
                MR_Word bytecode_backend__bytecode_gen__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__Y_36, (MR_Integer) 0)));
#line 497 "bytecode_gen.m"
                MR_Integer bytecode_backend__bytecode_gen__ByteVar_67;
#line 497 "bytecode_gen.m"
                MR_Word bytecode_backend__bytecode_gen__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_9, (MR_Integer) 0)));
#line 917 "bytecode_gen.m"
                MR_Word bytecode_backend__bytecode_gen__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_9, (MR_Integer) 1)));
#line 917 "bytecode_gen.m"
                MR_Word bytecode_backend__bytecode_gen__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_9, (MR_Integer) 2)));
#line 917 "bytecode_gen.m"
                MR_Word bytecode_backend__bytecode_gen__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_9, (MR_Integer) 3)));
#line 917 "bytecode_gen.m"
                MR_Word bytecode_backend__bytecode_gen__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_9, (MR_Integer) 4)));
#line 917 "bytecode_gen.m"
                MR_Box bytecode_backend__bytecode_gen__conv1_ByteVar_67;

#line 917 "bytecode_gen.m"
                {
#line 917 "bytecode_gen.m"
                  mercury__map__lookup_3_p_0((MR_Word) &bytecode_backend__bytecode_gen_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, bytecode_backend__bytecode_gen__V_73_73, ((MR_Box) (bytecode_backend__bytecode_gen__Var_66)), &bytecode_backend__bytecode_gen__conv1_ByteVar_67);
                }
#line 917 "bytecode_gen.m"
                bytecode_backend__bytecode_gen__ByteVar_67 = ((MR_Integer) bytecode_backend__bytecode_gen__conv1_ByteVar_67);
#line 499 "bytecode_gen.m"
                {
#line 499 "bytecode_gen.m"
                  bytecode_backend__bytecode_gen__ByteY_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 499 "bytecode_gen.m"
                  MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteY_38, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteVar_67));
#line 499 "bytecode_gen.m"
                }
#line 497 "bytecode_gen.m"
              }
#line 462 "bytecode_gen.m"
            {
#line 462 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__V_41_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 462 "bytecode_gen.m"
              MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_41_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 462 "bytecode_gen.m"
              MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_41_41, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__Binop_34));
#line 462 "bytecode_gen.m"
              MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_41_41, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteX_37));
#line 462 "bytecode_gen.m"
              MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_41_41, 3) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteY_38));
#line 462 "bytecode_gen.m"
            }
#line 462 "bytecode_gen.m"
            {
#line 462 "bytecode_gen.m"
              *bytecode_backend__bytecode_gen__Code_10 = mercury__cord__singleton_1_f_0((MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0, ((MR_Box) (bytecode_backend__bytecode_gen__V_41_41)));
            }
#line 459 "bytecode_gen.m"
          }
#line 459 "bytecode_gen.m"
        else
#line 464 "bytecode_gen.m"
          {
#line 464 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__Unop_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__Test_15, (MR_Integer) 1)));
#line 464 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__V_40_40;
#line 464 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__X_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__Test_15, (MR_Integer) 2)));
#line 464 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__ByteX_43;

#line 497 "bytecode_gen.m"
            if (((MR_tag((MR_Word) bytecode_backend__bytecode_gen__X_42)) == (MR_mktag((MR_Integer) 2))))
#line 504 "bytecode_gen.m"
              {
#line 504 "bytecode_gen.m"
                MR_Float bytecode_backend__bytecode_gen__FloatVal_86 = MR_unbox_float((MR_hl_field(MR_mktag(2), bytecode_backend__bytecode_gen__X_42, (MR_Integer) 0)));

#line 505 "bytecode_gen.m"
                {
#line 505 "bytecode_gen.m"
                  bytecode_backend__bytecode_gen__ByteX_43 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 505 "bytecode_gen.m"
                  MR_hl_field(MR_mktag(2), bytecode_backend__bytecode_gen__ByteX_43, 0) = MR_box_float(bytecode_backend__bytecode_gen__FloatVal_86);
#line 505 "bytecode_gen.m"
                }
#line 504 "bytecode_gen.m"
              }
#line 497 "bytecode_gen.m"
            else
#line 497 "bytecode_gen.m"
            if (((MR_tag((MR_Word) bytecode_backend__bytecode_gen__X_42)) == (MR_mktag((MR_Integer) 1))))
#line 501 "bytecode_gen.m"
              {
#line 501 "bytecode_gen.m"
                MR_Integer bytecode_backend__bytecode_gen__IntVal_85 = ((MR_Integer) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__X_42, (MR_Integer) 0)));

#line 502 "bytecode_gen.m"
                {
#line 502 "bytecode_gen.m"
                  bytecode_backend__bytecode_gen__ByteX_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 502 "bytecode_gen.m"
                  MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__ByteX_43, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__IntVal_85));
#line 502 "bytecode_gen.m"
                }
#line 501 "bytecode_gen.m"
              }
#line 497 "bytecode_gen.m"
            else
#line 497 "bytecode_gen.m"
              {
#line 497 "bytecode_gen.m"
                MR_Word bytecode_backend__bytecode_gen__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__X_42, (MR_Integer) 0)));
#line 497 "bytecode_gen.m"
                MR_Integer bytecode_backend__bytecode_gen__ByteVar_84;
#line 497 "bytecode_gen.m"
                MR_Word bytecode_backend__bytecode_gen__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_9, (MR_Integer) 0)));
#line 917 "bytecode_gen.m"
                MR_Word bytecode_backend__bytecode_gen__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_9, (MR_Integer) 1)));
#line 917 "bytecode_gen.m"
                MR_Word bytecode_backend__bytecode_gen__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_9, (MR_Integer) 2)));
#line 917 "bytecode_gen.m"
                MR_Word bytecode_backend__bytecode_gen__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_9, (MR_Integer) 3)));
#line 917 "bytecode_gen.m"
                MR_Word bytecode_backend__bytecode_gen__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_9, (MR_Integer) 4)));
#line 917 "bytecode_gen.m"
                MR_Box bytecode_backend__bytecode_gen__conv2_ByteVar_84;

#line 917 "bytecode_gen.m"
                {
#line 917 "bytecode_gen.m"
                  mercury__map__lookup_3_p_0((MR_Word) &bytecode_backend__bytecode_gen_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, bytecode_backend__bytecode_gen__V_90_90, ((MR_Box) (bytecode_backend__bytecode_gen__Var_83)), &bytecode_backend__bytecode_gen__conv2_ByteVar_84);
                }
#line 917 "bytecode_gen.m"
                bytecode_backend__bytecode_gen__ByteVar_84 = ((MR_Integer) bytecode_backend__bytecode_gen__conv2_ByteVar_84);
#line 499 "bytecode_gen.m"
                {
#line 499 "bytecode_gen.m"
                  bytecode_backend__bytecode_gen__ByteX_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 499 "bytecode_gen.m"
                  MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteX_43, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteVar_84));
#line 499 "bytecode_gen.m"
                }
#line 497 "bytecode_gen.m"
              }
#line 466 "bytecode_gen.m"
            {
#line 466 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__V_40_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 466 "bytecode_gen.m"
              MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_40_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 28));
#line 466 "bytecode_gen.m"
              MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_40_40, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__Unop_39));
#line 466 "bytecode_gen.m"
              MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_40_40, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteX_43));
#line 466 "bytecode_gen.m"
            }
#line 466 "bytecode_gen.m"
            {
#line 466 "bytecode_gen.m"
              *bytecode_backend__bytecode_gen__Code_10 = mercury__cord__singleton_1_f_0((MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0, ((MR_Box) (bytecode_backend__bytecode_gen__V_40_40)));
            }
#line 464 "bytecode_gen.m"
          }
#line 441 "bytecode_gen.m"
      }
#line 434 "bytecode_gen.m"
  }
#line 431 "bytecode_gen.m"
}

#line 399 "bytecode_gen.m"
static void MR_CALL 
bytecode_backend__bytecode_gen__gen_call_6_p_0(
#line 399 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__PredId_7,
#line 399 "bytecode_gen.m"
  MR_Integer bytecode_backend__bytecode_gen__ProcId_8,
#line 399 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__ArgVars_9,
#line 399 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__Detism_10,
#line 399 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__ByteInfo_11,
#line 399 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__Code_12)
#line 399 "bytecode_gen.m"
{
#line 402 "bytecode_gen.m"
  {
#line 402 "bytecode_gen.m"
    MR_bool bytecode_backend__bytecode_gen__succeeded;
#line 402 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__TypeCtorInfo_37_37;
#line 402 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__ModuleInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_11, (MR_Integer) 2)));
#line 402 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__ProcInfo_15;
#line 402 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__ArgInfo_16;
#line 402 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__ArgVarsInfos_17;
#line 402 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__PredInfo_18;
#line 402 "bytecode_gen.m"
    MR_Integer bytecode_backend__bytecode_gen__IsFunc_19;
#line 402 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__InputArgs_20;
#line 402 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__PlaceArgs_21;
#line 402 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__OutputArgs_22;
#line 402 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__PickupArgs_23;
#line 402 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__ModuleName_24;
#line 402 "bytecode_gen.m"
    MR_String bytecode_backend__bytecode_gen__PredName_25;
#line 402 "bytecode_gen.m"
    MR_Integer bytecode_backend__bytecode_gen__Arity_26;
#line 402 "bytecode_gen.m"
    MR_Integer bytecode_backend__bytecode_gen__ProcInt_27;
#line 402 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__Call_28;
#line 402 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__CodeModel_29;
#line 402 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__Check_30;
#line 402 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_31_31;
#line 402 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_33_33;
#line 402 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_34_34;
#line 402 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__PredOrFunc_45;
#line 897 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_11, (MR_Integer) 0)));
#line 897 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_11, (MR_Integer) 1)));
#line 897 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_11, (MR_Integer) 3)));
#line 897 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_11, (MR_Integer) 4)));
#line 404 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_14_14;

#line 404 "bytecode_gen.m"
    {
#line 404 "bytecode_gen.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(bytecode_backend__bytecode_gen__ModuleInfo_13, bytecode_backend__bytecode_gen__PredId_7, bytecode_backend__bytecode_gen__ProcId_8, &bytecode_backend__bytecode_gen__V_14_14, &bytecode_backend__bytecode_gen__ProcInfo_15);
    }
#line 405 "bytecode_gen.m"
    {
#line 405 "bytecode_gen.m"
      hlds__hlds_pred__proc_info_arg_info_2_p_0(bytecode_backend__bytecode_gen__ProcInfo_15, &bytecode_backend__bytecode_gen__ArgInfo_16);
    }
#line 406 "bytecode_gen.m"
    {
#line 406 "bytecode_gen.m"
      mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &bytecode_backend__bytecode_gen_scalar_common_1[0], (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0, bytecode_backend__bytecode_gen__ArgVars_9, bytecode_backend__bytecode_gen__ArgInfo_16, &bytecode_backend__bytecode_gen__ArgVarsInfos_17);
    }
#line 408 "bytecode_gen.m"
    {
#line 408 "bytecode_gen.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(bytecode_backend__bytecode_gen__ModuleInfo_13, bytecode_backend__bytecode_gen__PredId_7, &bytecode_backend__bytecode_gen__PredInfo_18);
    }
#line 954 "bytecode_gen.m"
    {
#line 954 "bytecode_gen.m"
      bytecode_backend__bytecode_gen__PredOrFunc_45 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(bytecode_backend__bytecode_gen__PredInfo_18);
    }
#line 958 "bytecode_gen.m"
    if ((bytecode_backend__bytecode_gen__PredOrFunc_45 == (MR_Integer) 1))
#line 960 "bytecode_gen.m"
      bytecode_backend__bytecode_gen__IsFunc_19 = (MR_Integer) 1;
#line 958 "bytecode_gen.m"
    else
#line 957 "bytecode_gen.m"
      bytecode_backend__bytecode_gen__IsFunc_19 = (MR_Integer) 0;
#line 411 "bytecode_gen.m"
    {
#line 411 "bytecode_gen.m"
      ll_backend__call_gen__input_arg_locs_2_p_0(bytecode_backend__bytecode_gen__ArgVarsInfos_17, &bytecode_backend__bytecode_gen__InputArgs_20);
    }
#line 412 "bytecode_gen.m"
    {
#line 412 "bytecode_gen.m"
      bytecode_backend__bytecode_gen__gen_places_3_p_0(bytecode_backend__bytecode_gen__InputArgs_20, bytecode_backend__bytecode_gen__ByteInfo_11, &bytecode_backend__bytecode_gen__PlaceArgs_21);
    }
#line 414 "bytecode_gen.m"
    {
#line 414 "bytecode_gen.m"
      ll_backend__call_gen__output_arg_locs_2_p_0(bytecode_backend__bytecode_gen__ArgVarsInfos_17, &bytecode_backend__bytecode_gen__OutputArgs_22);
    }
#line 415 "bytecode_gen.m"
    {
#line 415 "bytecode_gen.m"
      bytecode_backend__bytecode_gen__gen_pickups_3_p_0(bytecode_backend__bytecode_gen__OutputArgs_22, bytecode_backend__bytecode_gen__ByteInfo_11, &bytecode_backend__bytecode_gen__PickupArgs_23);
    }
#line 417 "bytecode_gen.m"
    {
#line 417 "bytecode_gen.m"
      hlds__hlds_module__predicate_id_5_p_0(bytecode_backend__bytecode_gen__ModuleInfo_13, bytecode_backend__bytecode_gen__PredId_7, &bytecode_backend__bytecode_gen__ModuleName_24, &bytecode_backend__bytecode_gen__PredName_25, &bytecode_backend__bytecode_gen__Arity_26);
    }
#line 418 "bytecode_gen.m"
    {
#line 418 "bytecode_gen.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(bytecode_backend__bytecode_gen__ProcId_8, &bytecode_backend__bytecode_gen__ProcInt_27);
    }
#line 5292 "bytecode_backend.bytecode_gen.c"
    bytecode_backend__bytecode_gen__TypeCtorInfo_37_37 = (MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0;
#line 420 "bytecode_gen.m"
    {
#line 420 "bytecode_gen.m"
      bytecode_backend__bytecode_gen__V_31_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 420 "bytecode_gen.m"
      MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_31_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 23));
#line 420 "bytecode_gen.m"
      MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_31_31, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__ModuleName_24));
#line 420 "bytecode_gen.m"
      MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_31_31, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__PredName_25));
#line 420 "bytecode_gen.m"
      MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_31_31, 3) = ((MR_Box) (bytecode_backend__bytecode_gen__Arity_26));
#line 420 "bytecode_gen.m"
      MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_31_31, 4) = ((MR_Box) (bytecode_backend__bytecode_gen__IsFunc_19));
#line 420 "bytecode_gen.m"
      MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_31_31, 5) = ((MR_Box) (bytecode_backend__bytecode_gen__ProcInt_27));
#line 420 "bytecode_gen.m"
    }
#line 419 "bytecode_gen.m"
    {
#line 419 "bytecode_gen.m"
      bytecode_backend__bytecode_gen__Call_28 = mercury__cord__singleton_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_37_37, ((MR_Box) (bytecode_backend__bytecode_gen__V_31_31)));
    }
#line 421 "bytecode_gen.m"
    {
#line 421 "bytecode_gen.m"
      hlds__code_model__determinism_to_code_model_2_p_0(bytecode_backend__bytecode_gen__Detism_10, &bytecode_backend__bytecode_gen__CodeModel_29);
    }
#line 422 "bytecode_gen.m"
    bytecode_backend__bytecode_gen__succeeded = (bytecode_backend__bytecode_gen__CodeModel_29 == (MR_Integer) 1);
#line 424 "bytecode_gen.m"
    if (bytecode_backend__bytecode_gen__succeeded)
#line 423 "bytecode_gen.m"
      {
#line 423 "bytecode_gen.m"
        {
#line 423 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__Check_30 = mercury__cord__singleton_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_37_37, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))));
        }
#line 423 "bytecode_gen.m"
      }
#line 424 "bytecode_gen.m"
    else
#line 425 "bytecode_gen.m"
      {
#line 425 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__Check_30 = mercury__cord__empty_0_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_37_37);
      }
#line 427 "bytecode_gen.m"
    {
#line 427 "bytecode_gen.m"
      bytecode_backend__bytecode_gen__V_34_34 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_37_37, bytecode_backend__bytecode_gen__Check_30, bytecode_backend__bytecode_gen__PickupArgs_23);
    }
#line 427 "bytecode_gen.m"
    {
#line 427 "bytecode_gen.m"
      bytecode_backend__bytecode_gen__V_33_33 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_37_37, bytecode_backend__bytecode_gen__Call_28, bytecode_backend__bytecode_gen__V_34_34);
    }
#line 427 "bytecode_gen.m"
    {
#line 427 "bytecode_gen.m"
      *bytecode_backend__bytecode_gen__Code_12 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_37_37, bytecode_backend__bytecode_gen__PlaceArgs_21, bytecode_backend__bytecode_gen__V_33_33);
    }
#line 402 "bytecode_gen.m"
  }
#line 399 "bytecode_gen.m"
}

#line 372 "bytecode_gen.m"
static void MR_CALL 
bytecode_backend__bytecode_gen__gen_higher_order_call_6_p_0_1(
#line 372 "bytecode_gen.m"
  MR_Box bytecode_backend__bytecode_gen__closure_arg,
#line 372 "bytecode_gen.m"
  MR_Box bytecode_backend__bytecode_gen__wrapper_arg_1,
#line 372 "bytecode_gen.m"
  MR_Box * bytecode_backend__bytecode_gen__wrapper_arg_2)
#line 372 "bytecode_gen.m"
{
#line 372 "bytecode_gen.m"
  {
#line 372 "bytecode_gen.m"
    MR_Box bytecode_backend__bytecode_gen__closure = bytecode_backend__bytecode_gen__closure_arg;
#line 372 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__conv0_Type_6;

#line 372 "bytecode_gen.m"
    {
#line 372 "bytecode_gen.m"
      bytecode_backend__bytecode_gen__get_var_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__closure, (MR_Integer) 3))), ((MR_Word) bytecode_backend__bytecode_gen__wrapper_arg_1), &bytecode_backend__bytecode_gen__conv0_Type_6);
    }
#line 372 "bytecode_gen.m"
    *bytecode_backend__bytecode_gen__wrapper_arg_2 = ((MR_Box) (bytecode_backend__bytecode_gen__conv0_Type_6));
#line 372 "bytecode_gen.m"
  }
#line 372 "bytecode_gen.m"
}

#line 365 "bytecode_gen.m"
static void MR_CALL 
bytecode_backend__bytecode_gen__gen_higher_order_call_6_p_0(
#line 365 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__PredVar_7,
#line 365 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__ArgVars_8,
#line 365 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__ArgModes_9,
#line 365 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__Detism_10,
#line 365 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__ByteInfo_11,
#line 365 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__Code_12)
#line 365 "bytecode_gen.m"
{
#line 369 "bytecode_gen.m"
  {
#line 369 "bytecode_gen.m"
    MR_bool bytecode_backend__bytecode_gen__succeeded;
#line 369 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__TypeInfo_36_36;
#line 369 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__TypeInfo_39_39;
#line 369 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__TypeCtorInfo_40_40;
#line 369 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__CodeModel_13;
#line 369 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__ModuleInfo_14;
#line 369 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__ArgTypes_15;
#line 369 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__ArgInfo_16;
#line 369 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__ArgVarsInfos_17;
#line 369 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__InVars_18;
#line 369 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__OutVars_19;
#line 369 "bytecode_gen.m"
    MR_Integer bytecode_backend__bytecode_gen__NInVars_20;
#line 369 "bytecode_gen.m"
    MR_Integer bytecode_backend__bytecode_gen__NOutVars_21;
#line 369 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__InputArgs_22;
#line 369 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__PlaceArgs_23;
#line 369 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__OutputArgs_24;
#line 369 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__PickupArgs_25;
#line 369 "bytecode_gen.m"
    MR_Integer bytecode_backend__bytecode_gen__BytePredVar_26;
#line 369 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__Call_27;
#line 369 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__Check_28;
#line 369 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_29_29;
#line 369 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_30_30;
#line 369 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_32_32;
#line 369 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_33_33;
#line 369 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_49_49;
#line 897 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_42_42;
#line 897 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_43_43;
#line 897 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_44_44;
#line 897 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_45_45;
#line 917 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_50_50;
#line 917 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_51_51;
#line 917 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_52_52;
#line 917 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_53_53;
#line 917 "bytecode_gen.m"
    MR_Box bytecode_backend__bytecode_gen__conv1_BytePredVar_26;

#line 370 "bytecode_gen.m"
    {
#line 370 "bytecode_gen.m"
      hlds__code_model__determinism_to_code_model_2_p_0(bytecode_backend__bytecode_gen__Detism_10, &bytecode_backend__bytecode_gen__CodeModel_13);
    }
#line 897 "bytecode_gen.m"
    bytecode_backend__bytecode_gen__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_11, (MR_Integer) 0)));
#line 897 "bytecode_gen.m"
    bytecode_backend__bytecode_gen__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_11, (MR_Integer) 1)));
#line 897 "bytecode_gen.m"
    bytecode_backend__bytecode_gen__ModuleInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_11, (MR_Integer) 2)));
#line 897 "bytecode_gen.m"
    bytecode_backend__bytecode_gen__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_11, (MR_Integer) 3)));
#line 897 "bytecode_gen.m"
    bytecode_backend__bytecode_gen__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_11, (MR_Integer) 4)));
#line 372 "bytecode_gen.m"
    {
#line 372 "bytecode_gen.m"
      bytecode_backend__bytecode_gen__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 372 "bytecode_gen.m"
      MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__V_29_29, 0) = ((MR_Box) (&bytecode_backend__bytecode_gen_scalar_common_3[0]));
#line 372 "bytecode_gen.m"
      MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__V_29_29, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__gen_higher_order_call_6_p_0_1));
#line 372 "bytecode_gen.m"
      MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__V_29_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 372 "bytecode_gen.m"
      MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__V_29_29, 3) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteInfo_11));
#line 372 "bytecode_gen.m"
    }
#line 5509 "bytecode_backend.bytecode_gen.c"
    bytecode_backend__bytecode_gen__TypeInfo_36_36 = (MR_Word) &bytecode_backend__bytecode_gen_scalar_common_1[0];
#line 372 "bytecode_gen.m"
    {
#line 372 "bytecode_gen.m"
      mercury__list__map_3_p_0(bytecode_backend__bytecode_gen__TypeInfo_36_36, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, bytecode_backend__bytecode_gen__V_29_29, bytecode_backend__bytecode_gen__ArgVars_8, &bytecode_backend__bytecode_gen__ArgTypes_15);
    }
#line 373 "bytecode_gen.m"
    {
#line 373 "bytecode_gen.m"
      hlds__arg_info__make_standard_arg_infos_5_p_0(bytecode_backend__bytecode_gen__ArgTypes_15, bytecode_backend__bytecode_gen__ArgModes_9, bytecode_backend__bytecode_gen__CodeModel_13, bytecode_backend__bytecode_gen__ModuleInfo_14, &bytecode_backend__bytecode_gen__ArgInfo_16);
    }
#line 375 "bytecode_gen.m"
    {
#line 375 "bytecode_gen.m"
      mercury__assoc_list__from_corresponding_lists_3_p_0(bytecode_backend__bytecode_gen__TypeInfo_36_36, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0, bytecode_backend__bytecode_gen__ArgVars_8, bytecode_backend__bytecode_gen__ArgInfo_16, &bytecode_backend__bytecode_gen__ArgVarsInfos_17);
    }
#line 377 "bytecode_gen.m"
    {
#line 377 "bytecode_gen.m"
      hlds__arg_info__partition_args_3_p_0(bytecode_backend__bytecode_gen__ArgVarsInfos_17, &bytecode_backend__bytecode_gen__InVars_18, &bytecode_backend__bytecode_gen__OutVars_19);
    }
#line 5531 "bytecode_backend.bytecode_gen.c"
    bytecode_backend__bytecode_gen__TypeInfo_39_39 = (MR_Word) &bytecode_backend__bytecode_gen_scalar_common_2[0];
#line 378 "bytecode_gen.m"
    {
#line 378 "bytecode_gen.m"
      mercury__list__length_2_p_0(bytecode_backend__bytecode_gen__TypeInfo_39_39, bytecode_backend__bytecode_gen__InVars_18, &bytecode_backend__bytecode_gen__NInVars_20);
    }
#line 379 "bytecode_gen.m"
    {
#line 379 "bytecode_gen.m"
      mercury__list__length_2_p_0(bytecode_backend__bytecode_gen__TypeInfo_39_39, bytecode_backend__bytecode_gen__OutVars_19, &bytecode_backend__bytecode_gen__NOutVars_21);
    }
#line 381 "bytecode_gen.m"
    {
#line 381 "bytecode_gen.m"
      ll_backend__call_gen__input_arg_locs_2_p_0(bytecode_backend__bytecode_gen__ArgVarsInfos_17, &bytecode_backend__bytecode_gen__InputArgs_22);
    }
#line 382 "bytecode_gen.m"
    {
#line 382 "bytecode_gen.m"
      bytecode_backend__bytecode_gen__gen_places_3_p_0(bytecode_backend__bytecode_gen__InputArgs_22, bytecode_backend__bytecode_gen__ByteInfo_11, &bytecode_backend__bytecode_gen__PlaceArgs_23);
    }
#line 384 "bytecode_gen.m"
    {
#line 384 "bytecode_gen.m"
      ll_backend__call_gen__output_arg_locs_2_p_0(bytecode_backend__bytecode_gen__ArgVarsInfos_17, &bytecode_backend__bytecode_gen__OutputArgs_24);
    }
#line 385 "bytecode_gen.m"
    {
#line 385 "bytecode_gen.m"
      bytecode_backend__bytecode_gen__gen_pickups_3_p_0(bytecode_backend__bytecode_gen__OutputArgs_24, bytecode_backend__bytecode_gen__ByteInfo_11, &bytecode_backend__bytecode_gen__PickupArgs_25);
    }
#line 917 "bytecode_gen.m"
    bytecode_backend__bytecode_gen__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_11, (MR_Integer) 0)));
#line 917 "bytecode_gen.m"
    bytecode_backend__bytecode_gen__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_11, (MR_Integer) 1)));
#line 917 "bytecode_gen.m"
    bytecode_backend__bytecode_gen__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_11, (MR_Integer) 2)));
#line 917 "bytecode_gen.m"
    bytecode_backend__bytecode_gen__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_11, (MR_Integer) 3)));
#line 917 "bytecode_gen.m"
    bytecode_backend__bytecode_gen__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_11, (MR_Integer) 4)));
#line 917 "bytecode_gen.m"
    {
#line 917 "bytecode_gen.m"
      mercury__map__lookup_3_p_0((MR_Word) &bytecode_backend__bytecode_gen_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, bytecode_backend__bytecode_gen__V_49_49, ((MR_Box) (bytecode_backend__bytecode_gen__PredVar_7)), &bytecode_backend__bytecode_gen__conv1_BytePredVar_26);
    }
#line 917 "bytecode_gen.m"
    bytecode_backend__bytecode_gen__BytePredVar_26 = ((MR_Integer) bytecode_backend__bytecode_gen__conv1_BytePredVar_26);
#line 5580 "bytecode_backend.bytecode_gen.c"
    bytecode_backend__bytecode_gen__TypeCtorInfo_40_40 = (MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0;
#line 388 "bytecode_gen.m"
    {
#line 388 "bytecode_gen.m"
      bytecode_backend__bytecode_gen__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 388 "bytecode_gen.m"
      MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 24));
#line 388 "bytecode_gen.m"
      MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_30_30, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__BytePredVar_26));
#line 388 "bytecode_gen.m"
      MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_30_30, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__NInVars_20));
#line 388 "bytecode_gen.m"
      MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_30_30, 3) = ((MR_Box) (bytecode_backend__bytecode_gen__NOutVars_21));
#line 388 "bytecode_gen.m"
      MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_30_30, 4) = ((MR_Box) (bytecode_backend__bytecode_gen__Detism_10));
#line 388 "bytecode_gen.m"
    }
#line 388 "bytecode_gen.m"
    {
#line 388 "bytecode_gen.m"
      bytecode_backend__bytecode_gen__Call_27 = mercury__cord__singleton_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_40_40, ((MR_Box) (bytecode_backend__bytecode_gen__V_30_30)));
    }
#line 390 "bytecode_gen.m"
    bytecode_backend__bytecode_gen__succeeded = (bytecode_backend__bytecode_gen__CodeModel_13 == (MR_Integer) 1);
#line 392 "bytecode_gen.m"
    if (bytecode_backend__bytecode_gen__succeeded)
#line 391 "bytecode_gen.m"
      {
#line 391 "bytecode_gen.m"
        {
#line 391 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__Check_28 = mercury__cord__singleton_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_40_40, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))));
        }
#line 391 "bytecode_gen.m"
      }
#line 392 "bytecode_gen.m"
    else
#line 393 "bytecode_gen.m"
      {
#line 393 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__Check_28 = mercury__cord__empty_0_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_40_40);
      }
#line 395 "bytecode_gen.m"
    {
#line 395 "bytecode_gen.m"
      bytecode_backend__bytecode_gen__V_33_33 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_40_40, bytecode_backend__bytecode_gen__Check_28, bytecode_backend__bytecode_gen__PickupArgs_25);
    }
#line 395 "bytecode_gen.m"
    {
#line 395 "bytecode_gen.m"
      bytecode_backend__bytecode_gen__V_32_32 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_40_40, bytecode_backend__bytecode_gen__Call_27, bytecode_backend__bytecode_gen__V_33_33);
    }
#line 395 "bytecode_gen.m"
    {
#line 395 "bytecode_gen.m"
      *bytecode_backend__bytecode_gen__Code_12 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_40_40, bytecode_backend__bytecode_gen__PlaceArgs_23, bytecode_backend__bytecode_gen__V_32_32);
    }
#line 369 "bytecode_gen.m"
  }
#line 365 "bytecode_gen.m"
}

#line 345 "bytecode_gen.m"
static void MR_CALL 
bytecode_backend__bytecode_gen__gen_pickups_3_p_0(
#line 345 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__HeadVar__1_1,
#line 345 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__ByteInfo_2,
#line 345 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__HeadVar__3_3)
#line 345 "bytecode_gen.m"
{
#line 348 "bytecode_gen.m"
  {
#line 348 "bytecode_gen.m"
    MR_bool bytecode_backend__bytecode_gen__succeeded;

#line 348 "bytecode_gen.m"
    if ((bytecode_backend__bytecode_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 348 "bytecode_gen.m"
      {
#line 348 "bytecode_gen.m"
        {
#line 348 "bytecode_gen.m"
          *bytecode_backend__bytecode_gen__HeadVar__3_3 = mercury__cord__empty_0_f_0((MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0);
        }
#line 348 "bytecode_gen.m"
      }
#line 348 "bytecode_gen.m"
    else
#line 349 "bytecode_gen.m"
      {
#line 349 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__TypeCtorInfo_24_24;
#line 349 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__Var_5;
#line 349 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__Loc_6;
#line 349 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__OutputArgs_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 349 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__OtherCode_10;
#line 349 "bytecode_gen.m"
        MR_Integer bytecode_backend__bytecode_gen__ByteVar_11;
#line 349 "bytecode_gen.m"
        MR_Integer bytecode_backend__bytecode_gen__RegNum_12;
#line 349 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 349 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_20_20;
#line 349 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_21_21;
#line 349 "bytecode_gen.m"
        MR_Integer bytecode_backend__bytecode_gen__V_25_25;
#line 349 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_26_26;
#line 349 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_30_30;
#line 917 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_31_31;
#line 917 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_32_32;
#line 917 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_33_33;
#line 917 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_34_34;
#line 917 "bytecode_gen.m"
        MR_Box bytecode_backend__bytecode_gen__conv0_ByteVar_11;

#line 349 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__V_14_14, (MR_Integer) 0)));
#line 349 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__Loc_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__V_14_14, (MR_Integer) 1)));
#line 350 "bytecode_gen.m"
        {
#line 350 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__gen_pickups_3_p_0(bytecode_backend__bytecode_gen__OutputArgs_7, bytecode_backend__bytecode_gen__ByteInfo_2, &bytecode_backend__bytecode_gen__OtherCode_10);
        }
#line 917 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_2, (MR_Integer) 0)));
#line 917 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_2, (MR_Integer) 1)));
#line 917 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_2, (MR_Integer) 2)));
#line 917 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_2, (MR_Integer) 3)));
#line 917 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_2, (MR_Integer) 4)));
#line 917 "bytecode_gen.m"
        {
#line 917 "bytecode_gen.m"
          mercury__map__lookup_3_p_0((MR_Word) &bytecode_backend__bytecode_gen_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, bytecode_backend__bytecode_gen__V_30_30, ((MR_Box) (bytecode_backend__bytecode_gen__Var_5)), &bytecode_backend__bytecode_gen__conv0_ByteVar_11);
        }
#line 917 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__ByteVar_11 = ((MR_Integer) bytecode_backend__bytecode_gen__conv0_ByteVar_11);
#line 353 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__Loc_6, (MR_Integer) 0)));
#line 353 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__Loc_6, (MR_Integer) 1)));
#line 354 "bytecode_gen.m"
        if ((bytecode_backend__bytecode_gen__V_26_26 == (MR_Integer) 1))
#line 355 "bytecode_gen.m"
          {
#line 356 "bytecode_gen.m"
            {
#line 356 "bytecode_gen.m"
              mercury__require__sorry_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.gen_pickups\'/3", (MR_String) "floating point register");
#line 356 "bytecode_gen.m"
              return;
            }
#line 355 "bytecode_gen.m"
          }
#line 354 "bytecode_gen.m"
        else
#line 353 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__RegNum_12 = bytecode_backend__bytecode_gen__V_25_25;
#line 5758 "bytecode_backend.bytecode_gen.c"
        bytecode_backend__bytecode_gen__TypeCtorInfo_24_24 = (MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0;
#line 358 "bytecode_gen.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 358 "bytecode_gen.m"
        {
#line 358 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 358 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_21_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 22));
#line 358 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_21_21, 1) = NULL;
#line 358 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_21_21, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__RegNum_12));
#line 358 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_21_21, 3) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteVar_11));
#line 358 "bytecode_gen.m"
        }
#line 358 "bytecode_gen.m"
        {
#line 358 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__V_20_20 = mercury__cord__singleton_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_24_24, ((MR_Box) (bytecode_backend__bytecode_gen__V_21_21)));
        }
#line 358 "bytecode_gen.m"
        {
#line 358 "bytecode_gen.m"
          *bytecode_backend__bytecode_gen__HeadVar__3_3 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_24_24, bytecode_backend__bytecode_gen__V_20_20, bytecode_backend__bytecode_gen__OtherCode_10);
        }
#line 349 "bytecode_gen.m"
      }
#line 348 "bytecode_gen.m"
  }
#line 345 "bytecode_gen.m"
}

#line 329 "bytecode_gen.m"
static void MR_CALL 
bytecode_backend__bytecode_gen__gen_places_3_p_0(
#line 329 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__HeadVar__1_1,
#line 329 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__ByteInfo_2,
#line 329 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__HeadVar__3_3)
#line 329 "bytecode_gen.m"
{
#line 332 "bytecode_gen.m"
  {
#line 332 "bytecode_gen.m"
    MR_bool bytecode_backend__bytecode_gen__succeeded;

#line 332 "bytecode_gen.m"
    if ((bytecode_backend__bytecode_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 332 "bytecode_gen.m"
      {
#line 332 "bytecode_gen.m"
        {
#line 332 "bytecode_gen.m"
          *bytecode_backend__bytecode_gen__HeadVar__3_3 = mercury__cord__empty_0_f_0((MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0);
        }
#line 332 "bytecode_gen.m"
      }
#line 332 "bytecode_gen.m"
    else
#line 333 "bytecode_gen.m"
      {
#line 333 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__TypeCtorInfo_24_24;
#line 333 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__Var_5;
#line 333 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__Loc_6;
#line 333 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__OutputArgs_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 333 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__OtherCode_10;
#line 333 "bytecode_gen.m"
        MR_Integer bytecode_backend__bytecode_gen__ByteVar_11;
#line 333 "bytecode_gen.m"
        MR_Integer bytecode_backend__bytecode_gen__RegNum_12;
#line 333 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 333 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_20_20;
#line 333 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_21_21;
#line 333 "bytecode_gen.m"
        MR_Integer bytecode_backend__bytecode_gen__V_25_25;
#line 333 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_26_26;
#line 333 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_30_30;
#line 917 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_31_31;
#line 917 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_32_32;
#line 917 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_33_33;
#line 917 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_34_34;
#line 917 "bytecode_gen.m"
        MR_Box bytecode_backend__bytecode_gen__conv0_ByteVar_11;

#line 333 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__V_14_14, (MR_Integer) 0)));
#line 333 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__Loc_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__V_14_14, (MR_Integer) 1)));
#line 334 "bytecode_gen.m"
        {
#line 334 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__gen_places_3_p_0(bytecode_backend__bytecode_gen__OutputArgs_7, bytecode_backend__bytecode_gen__ByteInfo_2, &bytecode_backend__bytecode_gen__OtherCode_10);
        }
#line 917 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_2, (MR_Integer) 0)));
#line 917 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_2, (MR_Integer) 1)));
#line 917 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_2, (MR_Integer) 2)));
#line 917 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_2, (MR_Integer) 3)));
#line 917 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo_2, (MR_Integer) 4)));
#line 917 "bytecode_gen.m"
        {
#line 917 "bytecode_gen.m"
          mercury__map__lookup_3_p_0((MR_Word) &bytecode_backend__bytecode_gen_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, bytecode_backend__bytecode_gen__V_30_30, ((MR_Box) (bytecode_backend__bytecode_gen__Var_5)), &bytecode_backend__bytecode_gen__conv0_ByteVar_11);
        }
#line 917 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__ByteVar_11 = ((MR_Integer) bytecode_backend__bytecode_gen__conv0_ByteVar_11);
#line 337 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__Loc_6, (MR_Integer) 0)));
#line 337 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__Loc_6, (MR_Integer) 1)));
#line 338 "bytecode_gen.m"
        if ((bytecode_backend__bytecode_gen__V_26_26 == (MR_Integer) 1))
#line 339 "bytecode_gen.m"
          {
#line 340 "bytecode_gen.m"
            {
#line 340 "bytecode_gen.m"
              mercury__require__sorry_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.gen_places\'/3", (MR_String) "floating point register");
#line 340 "bytecode_gen.m"
              return;
            }
#line 339 "bytecode_gen.m"
          }
#line 338 "bytecode_gen.m"
        else
#line 337 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__RegNum_12 = bytecode_backend__bytecode_gen__V_25_25;
#line 5908 "bytecode_backend.bytecode_gen.c"
        bytecode_backend__bytecode_gen__TypeCtorInfo_24_24 = (MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0;
#line 342 "bytecode_gen.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 342 "bytecode_gen.m"
        {
#line 342 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 342 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_21_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 342 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_21_21, 1) = NULL;
#line 342 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_21_21, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__RegNum_12));
#line 342 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_21_21, 3) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteVar_11));
#line 342 "bytecode_gen.m"
        }
#line 342 "bytecode_gen.m"
        {
#line 342 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__V_20_20 = mercury__cord__singleton_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_24_24, ((MR_Box) (bytecode_backend__bytecode_gen__V_21_21)));
        }
#line 342 "bytecode_gen.m"
        {
#line 342 "bytecode_gen.m"
          *bytecode_backend__bytecode_gen__HeadVar__3_3 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_24_24, bytecode_backend__bytecode_gen__V_20_20, bytecode_backend__bytecode_gen__OtherCode_10);
        }
#line 333 "bytecode_gen.m"
      }
#line 332 "bytecode_gen.m"
  }
#line 329 "bytecode_gen.m"
}

#line 211 "bytecode_gen.m"
static void MR_CALL 
bytecode_backend__bytecode_gen__gen_goal_expr_5_p_0(
#line 211 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__GoalExpr_6,
#line 211 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__GoalInfo_7,
#line 211 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_82,
#line 211 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_83,
#line 211 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__Code_9)
#line 211 "bytecode_gen.m"
{
#line 217 "bytecode_gen.m"
  {
#line 217 "bytecode_gen.m"
    MR_bool bytecode_backend__bytecode_gen__succeeded;

#line 217 "bytecode_gen.m"
    if (((MR_tag((MR_Word) bytecode_backend__bytecode_gen__GoalExpr_6)) == (MR_mktag((MR_Integer) 0))))
#line 250 "bytecode_gen.m"
      {
#line 250 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__TypeCtorInfo_185_185;
#line 250 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__Goal_37 = (MR_Word) MR_body(((MR_Word) bytecode_backend__bytecode_gen__GoalExpr_6), (MR_Integer) 0);
#line 250 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__SomeCode_38;
#line 250 "bytecode_gen.m"
        MR_Integer bytecode_backend__bytecode_gen__EndLabel_39;
#line 250 "bytecode_gen.m"
        MR_Integer bytecode_backend__bytecode_gen__FrameTemp_40;
#line 250 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__EnterCode_41;
#line 250 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__EndofCode_42;
#line 250 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_143_143;
#line 250 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_144_144;
#line 250 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_146_146;
#line 250 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_147_147;
#line 250 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_148_148;
#line 250 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_149_149;
#line 250 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_150_150;
#line 250 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_154_154;

#line 251 "bytecode_gen.m"
        {
#line 251 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__gen_goal_4_p_0(bytecode_backend__bytecode_gen__Goal_37, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_82, &bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_143_143, &bytecode_backend__bytecode_gen__SomeCode_38);
        }
#line 252 "bytecode_gen.m"
        {
#line 252 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__get_next_label_3_p_0(&bytecode_backend__bytecode_gen__EndLabel_39, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_143_143, &bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_144_144);
        }
#line 253 "bytecode_gen.m"
        {
#line 253 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__get_next_temp_3_p_0(&bytecode_backend__bytecode_gen__FrameTemp_40, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_144_144, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_83);
        }
#line 6013 "bytecode_backend.bytecode_gen.c"
        bytecode_backend__bytecode_gen__TypeCtorInfo_185_185 = (MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0;
#line 254 "bytecode_gen.m"
        {
#line 254 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__V_146_146 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 254 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_146_146, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 254 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_146_146, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__FrameTemp_40));
#line 254 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_146_146, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__EndLabel_39));
#line 254 "bytecode_gen.m"
        }
#line 254 "bytecode_gen.m"
        {
#line 254 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__EnterCode_41 = mercury__cord__singleton_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_185_185, ((MR_Box) (bytecode_backend__bytecode_gen__V_146_146)));
        }
#line 255 "bytecode_gen.m"
        {
#line 255 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__V_148_148 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 255 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_148_148, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 255 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_148_148, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__FrameTemp_40));
#line 255 "bytecode_gen.m"
        }
#line 256 "bytecode_gen.m"
        {
#line 256 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__V_150_150 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 256 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_150_150, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 256 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_150_150, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__EndLabel_39));
#line 256 "bytecode_gen.m"
        }
#line 256 "bytecode_gen.m"
        {
#line 256 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__V_149_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 256 "bytecode_gen.m"
          MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_149_149, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__V_150_150));
#line 256 "bytecode_gen.m"
          MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_149_149, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &bytecode_backend__bytecode_gen_scalar_common_1[2])));
#line 256 "bytecode_gen.m"
        }
#line 255 "bytecode_gen.m"
        {
#line 255 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__V_147_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 255 "bytecode_gen.m"
          MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_147_147, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__V_148_148));
#line 255 "bytecode_gen.m"
          MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_147_147, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__V_149_149));
#line 255 "bytecode_gen.m"
        }
#line 255 "bytecode_gen.m"
        {
#line 255 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__EndofCode_42 = mercury__cord__from_list_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_185_185, bytecode_backend__bytecode_gen__V_147_147);
        }
#line 257 "bytecode_gen.m"
        {
#line 257 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__V_154_154 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_185_185, bytecode_backend__bytecode_gen__SomeCode_38, bytecode_backend__bytecode_gen__EndofCode_42);
        }
#line 257 "bytecode_gen.m"
        {
#line 257 "bytecode_gen.m"
          *bytecode_backend__bytecode_gen__Code_9 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_185_185, bytecode_backend__bytecode_gen__EnterCode_41, bytecode_backend__bytecode_gen__V_154_154);
        }
#line 250 "bytecode_gen.m"
      }
#line 217 "bytecode_gen.m"
    else
#line 217 "bytecode_gen.m"
    if (((MR_tag((MR_Word) bytecode_backend__bytecode_gen__GoalExpr_6)) == (MR_mktag((MR_Integer) 2))))
#line 235 "bytecode_gen.m"
      {
#line 235 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__PredId_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 0)));
#line 235 "bytecode_gen.m"
        MR_Integer bytecode_backend__bytecode_gen__ProcId_28 = ((MR_Integer) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 1)));
#line 235 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__BuiltinState_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 3)));
#line 235 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__ArgVars_159 = ((MR_Word) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 2)));
#line 235 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 4)));
#line 235 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 5)));

#line 240 "bytecode_gen.m"
        if ((bytecode_backend__bytecode_gen__BuiltinState_29 == (MR_Integer) 2))
#line 237 "bytecode_gen.m"
          {
#line 237 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__Detism_157;

#line 238 "bytecode_gen.m"
            {
#line 238 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__Detism_157 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(bytecode_backend__bytecode_gen__GoalInfo_7);
            }
#line 239 "bytecode_gen.m"
            {
#line 239 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__gen_call_6_p_0(bytecode_backend__bytecode_gen__PredId_27, bytecode_backend__bytecode_gen__ProcId_28, bytecode_backend__bytecode_gen__ArgVars_159, bytecode_backend__bytecode_gen__Detism_157, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_82, bytecode_backend__bytecode_gen__Code_9);
            }
#line 237 "bytecode_gen.m"
          }
#line 240 "bytecode_gen.m"
        else
#line 243 "bytecode_gen.m"
          {
#line 243 "bytecode_gen.m"
            bytecode_backend__bytecode_gen__gen_builtin_5_p_0(bytecode_backend__bytecode_gen__PredId_27, bytecode_backend__bytecode_gen__ProcId_28, bytecode_backend__bytecode_gen__ArgVars_159, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_82, bytecode_backend__bytecode_gen__Code_9);
          }
#line 235 "bytecode_gen.m"
        *bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_83 = bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_82;
#line 235 "bytecode_gen.m"
      }
#line 217 "bytecode_gen.m"
    else
#line 217 "bytecode_gen.m"
    if (((MR_tag((MR_Word) bytecode_backend__bytecode_gen__GoalExpr_6)) == (MR_mktag((MR_Integer) 1))))
#line 247 "bytecode_gen.m"
      {
#line 247 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__Unification_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 3)));
#line 247 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 0)));
#line 247 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__RHS_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 1)));
#line 247 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen___Mode_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 2)));
#line 247 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 4)));

#line 248 "bytecode_gen.m"
        {
#line 248 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_p_0(bytecode_backend__bytecode_gen__Unification_35, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_82, bytecode_backend__bytecode_gen__Code_9);
        }
#line 247 "bytecode_gen.m"
        *bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_83 = bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_82;
#line 247 "bytecode_gen.m"
      }
#line 217 "bytecode_gen.m"
    else
#line 217 "bytecode_gen.m"
    if (((((MR_tag((MR_Word) bytecode_backend__bytecode_gen__GoalExpr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 319 "bytecode_gen.m"
      {
#line 320 "bytecode_gen.m"
        {
#line 320 "bytecode_gen.m"
          *bytecode_backend__bytecode_gen__Code_9 = mercury__cord__singleton_1_f_0((MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))));
        }
#line 319 "bytecode_gen.m"
        *bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_83 = bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_82;
#line 319 "bytecode_gen.m"
      }
#line 217 "bytecode_gen.m"
    else
#line 217 "bytecode_gen.m"
    if (((((MR_tag((MR_Word) bytecode_backend__bytecode_gen__GoalExpr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 217 "bytecode_gen.m"
      {
#line 217 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 2)));
#line 217 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 1)));

#line 217 "bytecode_gen.m"
        if ((bytecode_backend__bytecode_gen__V_193_193 == (MR_Integer) 1))
#line 278 "bytecode_gen.m"
          {
#line 279 "bytecode_gen.m"
            {
#line 279 "bytecode_gen.m"
              mercury__require__sorry_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.gen_goal_expr\'/5", (MR_String) "bytecode_gen of parallel conjunction");
#line 279 "bytecode_gen.m"
              return;
            }
#line 278 "bytecode_gen.m"
          }
#line 217 "bytecode_gen.m"
        else
#line 276 "bytecode_gen.m"
          {
#line 276 "bytecode_gen.m"
            bytecode_backend__bytecode_gen__gen_conj_4_p_0(bytecode_backend__bytecode_gen__V_192_192, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_82, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_83, bytecode_backend__bytecode_gen__Code_9);
#line 276 "bytecode_gen.m"
            return;
          }
#line 217 "bytecode_gen.m"
      }
#line 217 "bytecode_gen.m"
    else
#line 217 "bytecode_gen.m"
    if (((((MR_tag((MR_Word) bytecode_backend__bytecode_gen__GoalExpr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 281 "bytecode_gen.m"
      {
#line 281 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__GoalList_176 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 1)));

#line 285 "bytecode_gen.m"
        if ((bytecode_backend__bytecode_gen__GoalList_176 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 283 "bytecode_gen.m"
          {
#line 284 "bytecode_gen.m"
            {
#line 284 "bytecode_gen.m"
              *bytecode_backend__bytecode_gen__Code_9 = mercury__cord__singleton_1_f_0((MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))));
            }
#line 283 "bytecode_gen.m"
            *bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_83 = bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_82;
#line 283 "bytecode_gen.m"
          }
#line 285 "bytecode_gen.m"
        else
#line 286 "bytecode_gen.m"
          {
#line 286 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__TypeCtorInfo_188_188;
#line 286 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__DisjCode_57;
#line 286 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_122_122;
#line 286 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__V_124_124;
#line 286 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__V_125_125;
#line 286 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__V_127_127;
#line 286 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__V_128_128;
#line 286 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__V_130_130;
#line 286 "bytecode_gen.m"
            MR_Integer bytecode_backend__bytecode_gen__EndLabel_167;
#line 286 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__EnterCode_168;
#line 286 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__EndofCode_169;

#line 287 "bytecode_gen.m"
            {
#line 287 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__get_next_label_3_p_0(&bytecode_backend__bytecode_gen__EndLabel_167, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_82, &bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_122_122);
            }
#line 288 "bytecode_gen.m"
            {
#line 288 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__gen_disj_5_p_0(bytecode_backend__bytecode_gen__GoalList_176, bytecode_backend__bytecode_gen__EndLabel_167, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_122_122, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_83, &bytecode_backend__bytecode_gen__DisjCode_57);
            }
#line 6273 "bytecode_backend.bytecode_gen.c"
            bytecode_backend__bytecode_gen__TypeCtorInfo_188_188 = (MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0;
#line 289 "bytecode_gen.m"
            {
#line 289 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__V_124_124 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 289 "bytecode_gen.m"
              MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_124_124, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 289 "bytecode_gen.m"
              MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_124_124, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__EndLabel_167));
#line 289 "bytecode_gen.m"
            }
#line 289 "bytecode_gen.m"
            {
#line 289 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__EnterCode_168 = mercury__cord__singleton_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_188_188, ((MR_Box) (bytecode_backend__bytecode_gen__V_124_124)));
            }
#line 291 "bytecode_gen.m"
            {
#line 291 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__V_128_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 291 "bytecode_gen.m"
              MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_128_128, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 291 "bytecode_gen.m"
              MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_128_128, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__EndLabel_167));
#line 291 "bytecode_gen.m"
            }
#line 291 "bytecode_gen.m"
            {
#line 291 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 291 "bytecode_gen.m"
              MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_127_127, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__V_128_128));
#line 291 "bytecode_gen.m"
              MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_127_127, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 291 "bytecode_gen.m"
            }
#line 290 "bytecode_gen.m"
            {
#line 290 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 290 "bytecode_gen.m"
              MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_125_125, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 290 "bytecode_gen.m"
              MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_125_125, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__V_127_127));
#line 290 "bytecode_gen.m"
            }
#line 290 "bytecode_gen.m"
            {
#line 290 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__EndofCode_169 = mercury__cord__from_list_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_188_188, bytecode_backend__bytecode_gen__V_125_125);
            }
#line 292 "bytecode_gen.m"
            {
#line 292 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__V_130_130 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_188_188, bytecode_backend__bytecode_gen__DisjCode_57, bytecode_backend__bytecode_gen__EndofCode_169);
            }
#line 292 "bytecode_gen.m"
            {
#line 292 "bytecode_gen.m"
              *bytecode_backend__bytecode_gen__Code_9 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_188_188, bytecode_backend__bytecode_gen__EnterCode_168, bytecode_backend__bytecode_gen__V_130_130);
            }
#line 286 "bytecode_gen.m"
          }
#line 281 "bytecode_gen.m"
      }
#line 217 "bytecode_gen.m"
    else
#line 217 "bytecode_gen.m"
    if (((((MR_tag((MR_Word) bytecode_backend__bytecode_gen__GoalExpr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 217 "bytecode_gen.m"
      {
#line 217 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__GenericCallType_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 1)));
#line 217 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__ArgVars_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 2)));
#line 217 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__ArgModes_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 3)));
#line 217 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__Detism_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 5)));
#line 216 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 4)));

#line 222 "bytecode_gen.m"
        if (((MR_tag((MR_Word) bytecode_backend__bytecode_gen__GenericCallType_10)) == (MR_mktag((MR_Integer) 0))))
#line 219 "bytecode_gen.m"
          {
#line 219 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__PredVar_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__GenericCallType_10, (MR_Integer) 0)));
#line 219 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__GenericCallType_10, (MR_Integer) 1)));
#line 219 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__GenericCallType_10, (MR_Integer) 2)));
#line 219 "bytecode_gen.m"
            MR_Integer bytecode_backend__bytecode_gen__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__GenericCallType_10, (MR_Integer) 3)));

#line 220 "bytecode_gen.m"
            {
#line 220 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__gen_higher_order_call_6_p_0(bytecode_backend__bytecode_gen__PredVar_15, bytecode_backend__bytecode_gen__ArgVars_11, bytecode_backend__bytecode_gen__ArgModes_12, bytecode_backend__bytecode_gen__Detism_14, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_82, bytecode_backend__bytecode_gen__Code_9);
            }
#line 219 "bytecode_gen.m"
          }
#line 222 "bytecode_gen.m"
        else
#line 226 "bytecode_gen.m"
          {
#line 231 "bytecode_gen.m"
            MR_String bytecode_backend__bytecode_gen___GenericCallFunctor_25;
#line 231 "bytecode_gen.m"
            MR_Integer bytecode_backend__bytecode_gen__V_26_26;

#line 231 "bytecode_gen.m"
            {
#line 231 "bytecode_gen.m"
              mercury__deconstruct__functor_4_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_generic_call_0, ((MR_Box) (bytecode_backend__bytecode_gen__GenericCallType_10)), (MR_Integer) 1, &bytecode_backend__bytecode_gen___GenericCallFunctor_25, &bytecode_backend__bytecode_gen__V_26_26);
            }
#line 232 "bytecode_gen.m"
            {
#line 232 "bytecode_gen.m"
              *bytecode_backend__bytecode_gen__Code_9 = mercury__cord__singleton_1_f_0((MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))));
            }
#line 226 "bytecode_gen.m"
          }
#line 217 "bytecode_gen.m"
        *bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_83 = bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_82;
#line 217 "bytecode_gen.m"
      }
#line 217 "bytecode_gen.m"
    else
#line 217 "bytecode_gen.m"
    if (((((MR_tag((MR_Word) bytecode_backend__bytecode_gen__GoalExpr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 303 "bytecode_gen.m"
      {
#line 303 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__TypeCtorInfo_190_190;
#line 303 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__Cond_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 2)));
#line 303 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__Then_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 3)));
#line 303 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__Else_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 4)));
#line 303 "bytecode_gen.m"
        MR_Integer bytecode_backend__bytecode_gen__ElseLabel_66;
#line 303 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__CondCode_67;
#line 303 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__ThenCode_68;
#line 303 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__ElseCode_69;
#line 303 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__EnterIfCode_70;
#line 303 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__EnterThenCode_71;
#line 303 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__EndofThenCode_72;
#line 303 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__EndofIfCode_73;
#line 303 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_88_88;
#line 303 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_89_89;
#line 303 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_90_90;
#line 303 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_91_91;
#line 303 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_92_92;
#line 303 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_94_94;
#line 303 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_95_95;
#line 303 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_96_96;
#line 303 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_97_97;
#line 303 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_98_98;
#line 303 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_99_99;
#line 303 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_100_100;
#line 303 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_101_101;
#line 303 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_103_103;
#line 303 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_105_105;
#line 303 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_106_106;
#line 303 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_108_108;
#line 303 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_109_109;
#line 303 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_110_110;
#line 303 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_111_111;
#line 303 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_112_112;
#line 303 "bytecode_gen.m"
        MR_Integer bytecode_backend__bytecode_gen__EndLabel_181;
#line 303 "bytecode_gen.m"
        MR_Integer bytecode_backend__bytecode_gen__FrameTemp_182;
#line 303 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen___Vars_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 1)));

#line 304 "bytecode_gen.m"
        {
#line 304 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__get_next_label_3_p_0(&bytecode_backend__bytecode_gen__EndLabel_181, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_82, &bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_88_88);
        }
#line 305 "bytecode_gen.m"
        {
#line 305 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__get_next_label_3_p_0(&bytecode_backend__bytecode_gen__ElseLabel_66, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_88_88, &bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_89_89);
        }
#line 306 "bytecode_gen.m"
        {
#line 306 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__get_next_temp_3_p_0(&bytecode_backend__bytecode_gen__FrameTemp_182, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_89_89, &bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_90_90);
        }
#line 307 "bytecode_gen.m"
        {
#line 307 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__gen_goal_4_p_0(bytecode_backend__bytecode_gen__Cond_63, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_90_90, &bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_91_91, &bytecode_backend__bytecode_gen__CondCode_67);
        }
#line 308 "bytecode_gen.m"
        {
#line 308 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__gen_goal_4_p_0(bytecode_backend__bytecode_gen__Then_64, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_91_91, &bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_92_92, &bytecode_backend__bytecode_gen__ThenCode_68);
        }
#line 309 "bytecode_gen.m"
        {
#line 309 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__gen_goal_4_p_0(bytecode_backend__bytecode_gen__Else_65, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_92_92, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_83, &bytecode_backend__bytecode_gen__ElseCode_69);
        }
#line 6510 "bytecode_backend.bytecode_gen.c"
        bytecode_backend__bytecode_gen__TypeCtorInfo_190_190 = (MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0;
#line 311 "bytecode_gen.m"
        {
#line 311 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__V_94_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 311 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_94_94, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 311 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_94_94, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__ElseLabel_66));
#line 311 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_94_94, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__EndLabel_181));
#line 311 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_94_94, 3) = ((MR_Box) (bytecode_backend__bytecode_gen__FrameTemp_182));
#line 311 "bytecode_gen.m"
        }
#line 310 "bytecode_gen.m"
        {
#line 310 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__EnterIfCode_70 = mercury__cord__singleton_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_190_190, ((MR_Box) (bytecode_backend__bytecode_gen__V_94_94)));
        }
#line 312 "bytecode_gen.m"
        {
#line 312 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__V_95_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 312 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_95_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 312 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_95_95, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__FrameTemp_182));
#line 312 "bytecode_gen.m"
        }
#line 312 "bytecode_gen.m"
        {
#line 312 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__EnterThenCode_71 = mercury__cord__singleton_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_190_190, ((MR_Box) (bytecode_backend__bytecode_gen__V_95_95)));
        }
#line 313 "bytecode_gen.m"
        {
#line 313 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__V_97_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_97_97, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 313 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_97_97, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__EndLabel_181));
#line 313 "bytecode_gen.m"
        }
#line 314 "bytecode_gen.m"
        {
#line 314 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__V_99_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 314 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_99_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 314 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_99_99, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__ElseLabel_66));
#line 314 "bytecode_gen.m"
        }
#line 314 "bytecode_gen.m"
        {
#line 314 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__V_101_101 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 314 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_101_101, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 314 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_101_101, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__FrameTemp_182));
#line 314 "bytecode_gen.m"
        }
#line 314 "bytecode_gen.m"
        {
#line 314 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 314 "bytecode_gen.m"
          MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_100_100, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__V_101_101));
#line 314 "bytecode_gen.m"
          MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_100_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 314 "bytecode_gen.m"
        }
#line 314 "bytecode_gen.m"
        {
#line 314 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 314 "bytecode_gen.m"
          MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_98_98, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__V_99_99));
#line 314 "bytecode_gen.m"
          MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_98_98, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__V_100_100));
#line 314 "bytecode_gen.m"
        }
#line 313 "bytecode_gen.m"
        {
#line 313 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "bytecode_gen.m"
          MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_96_96, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__V_97_97));
#line 313 "bytecode_gen.m"
          MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_96_96, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__V_98_98));
#line 313 "bytecode_gen.m"
        }
#line 313 "bytecode_gen.m"
        {
#line 313 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__EndofThenCode_72 = mercury__cord__from_list_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_190_190, bytecode_backend__bytecode_gen__V_96_96);
        }
#line 315 "bytecode_gen.m"
        {
#line 315 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__V_106_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 315 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_106_106, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 315 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_106_106, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__EndLabel_181));
#line 315 "bytecode_gen.m"
        }
#line 315 "bytecode_gen.m"
        {
#line 315 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 315 "bytecode_gen.m"
          MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_105_105, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__V_106_106));
#line 315 "bytecode_gen.m"
          MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_105_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 315 "bytecode_gen.m"
        }
#line 315 "bytecode_gen.m"
        {
#line 315 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 315 "bytecode_gen.m"
          MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_103_103, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 315 "bytecode_gen.m"
          MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_103_103, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__V_105_105));
#line 315 "bytecode_gen.m"
        }
#line 315 "bytecode_gen.m"
        {
#line 315 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__EndofIfCode_73 = mercury__cord__from_list_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_190_190, bytecode_backend__bytecode_gen__V_103_103);
        }
#line 317 "bytecode_gen.m"
        {
#line 317 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__V_112_112 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_190_190, bytecode_backend__bytecode_gen__ElseCode_69, bytecode_backend__bytecode_gen__EndofIfCode_73);
        }
#line 317 "bytecode_gen.m"
        {
#line 317 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__V_111_111 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_190_190, bytecode_backend__bytecode_gen__EndofThenCode_72, bytecode_backend__bytecode_gen__V_112_112);
        }
#line 316 "bytecode_gen.m"
        {
#line 316 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__V_110_110 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_190_190, bytecode_backend__bytecode_gen__ThenCode_68, bytecode_backend__bytecode_gen__V_111_111);
        }
#line 316 "bytecode_gen.m"
        {
#line 316 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__V_109_109 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_190_190, bytecode_backend__bytecode_gen__EnterThenCode_71, bytecode_backend__bytecode_gen__V_110_110);
        }
#line 316 "bytecode_gen.m"
        {
#line 316 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__V_108_108 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_190_190, bytecode_backend__bytecode_gen__CondCode_67, bytecode_backend__bytecode_gen__V_109_109);
        }
#line 316 "bytecode_gen.m"
        {
#line 316 "bytecode_gen.m"
          *bytecode_backend__bytecode_gen__Code_9 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_190_190, bytecode_backend__bytecode_gen__EnterIfCode_70, bytecode_backend__bytecode_gen__V_108_108);
        }
#line 303 "bytecode_gen.m"
      }
#line 217 "bytecode_gen.m"
    else
#line 217 "bytecode_gen.m"
    if (((((MR_tag((MR_Word) bytecode_backend__bytecode_gen__GoalExpr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 259 "bytecode_gen.m"
      {
#line 259 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__InnerGoal_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 2)));
#line 259 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__InnerCode_45;
#line 259 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__OuterDetism_46;
#line 259 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__InnerGoalInfo_48;
#line 259 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__InnerDetism_49;
#line 259 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__OuterCodeModel_50;
#line 259 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__InnerCodeModel_51;
#line 259 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_138_138;
#line 259 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 1)));
#line 262 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_47_47;

#line 260 "bytecode_gen.m"
        {
#line 260 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__gen_goal_4_p_0(bytecode_backend__bytecode_gen__InnerGoal_44, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_82, &bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_138_138, &bytecode_backend__bytecode_gen__InnerCode_45);
        }
#line 261 "bytecode_gen.m"
        {
#line 261 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__OuterDetism_46 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(bytecode_backend__bytecode_gen__GoalInfo_7);
        }
#line 262 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__InnerGoal_44, (MR_Integer) 0)));
#line 262 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__InnerGoalInfo_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__InnerGoal_44, (MR_Integer) 1)));
#line 263 "bytecode_gen.m"
        {
#line 263 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__InnerDetism_49 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(bytecode_backend__bytecode_gen__InnerGoalInfo_48);
        }
#line 264 "bytecode_gen.m"
        {
#line 264 "bytecode_gen.m"
          hlds__code_model__determinism_to_code_model_2_p_0(bytecode_backend__bytecode_gen__OuterDetism_46, &bytecode_backend__bytecode_gen__OuterCodeModel_50);
        }
#line 265 "bytecode_gen.m"
        {
#line 265 "bytecode_gen.m"
          hlds__code_model__determinism_to_code_model_2_p_0(bytecode_backend__bytecode_gen__InnerDetism_49, &bytecode_backend__bytecode_gen__InnerCodeModel_51);
        }
#line 266 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__succeeded = (bytecode_backend__bytecode_gen__InnerCodeModel_51 == bytecode_backend__bytecode_gen__OuterCodeModel_50);
#line 268 "bytecode_gen.m"
        if (bytecode_backend__bytecode_gen__succeeded)
#line 267 "bytecode_gen.m"
          {
#line 267 "bytecode_gen.m"
            *bytecode_backend__bytecode_gen__Code_9 = bytecode_backend__bytecode_gen__InnerCode_45;
#line 267 "bytecode_gen.m"
            *bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_83 = bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_138_138;
#line 267 "bytecode_gen.m"
          }
#line 268 "bytecode_gen.m"
        else
#line 269 "bytecode_gen.m"
          {
#line 269 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__TypeCtorInfo_186_186;
#line 269 "bytecode_gen.m"
            MR_Integer bytecode_backend__bytecode_gen__Temp_52;
#line 269 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__V_140_140;
#line 269 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__V_141_141;
#line 269 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__V_142_142;
#line 269 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__EnterCode_161;
#line 269 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__EndofCode_162;

#line 269 "bytecode_gen.m"
            {
#line 269 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__get_next_temp_3_p_0(&bytecode_backend__bytecode_gen__Temp_52, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_138_138, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_83);
            }
#line 6770 "bytecode_backend.bytecode_gen.c"
            bytecode_backend__bytecode_gen__TypeCtorInfo_186_186 = (MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0;
#line 270 "bytecode_gen.m"
            {
#line 270 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__V_140_140 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 270 "bytecode_gen.m"
              MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_140_140, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
#line 270 "bytecode_gen.m"
              MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_140_140, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__Temp_52));
#line 270 "bytecode_gen.m"
            }
#line 270 "bytecode_gen.m"
            {
#line 270 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__EnterCode_161 = mercury__cord__singleton_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_186_186, ((MR_Box) (bytecode_backend__bytecode_gen__V_140_140)));
            }
#line 271 "bytecode_gen.m"
            {
#line 271 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__V_141_141 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 271 "bytecode_gen.m"
              MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_141_141, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
#line 271 "bytecode_gen.m"
              MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_141_141, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__Temp_52));
#line 271 "bytecode_gen.m"
            }
#line 271 "bytecode_gen.m"
            {
#line 271 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__EndofCode_162 = mercury__cord__singleton_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_186_186, ((MR_Box) (bytecode_backend__bytecode_gen__V_141_141)));
            }
#line 272 "bytecode_gen.m"
            {
#line 272 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__V_142_142 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_186_186, bytecode_backend__bytecode_gen__InnerCode_45, bytecode_backend__bytecode_gen__EndofCode_162);
            }
#line 272 "bytecode_gen.m"
            {
#line 272 "bytecode_gen.m"
              *bytecode_backend__bytecode_gen__Code_9 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_186_186, bytecode_backend__bytecode_gen__EnterCode_161, bytecode_backend__bytecode_gen__V_142_142);
            }
#line 269 "bytecode_gen.m"
          }
#line 259 "bytecode_gen.m"
      }
#line 217 "bytecode_gen.m"
    else
#line 217 "bytecode_gen.m"
    if (((((MR_tag((MR_Word) bytecode_backend__bytecode_gen__GoalExpr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 322 "bytecode_gen.m"
      {
#line 324 "bytecode_gen.m"
        {
#line 324 "bytecode_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "bytecode_backend.bytecode_gen", (MR_String) "predicate \140bytecode_backend.bytecode_gen.gen_goal_expr\'/5", (MR_String) "shorthand");
#line 324 "bytecode_gen.m"
          return;
        }
#line 322 "bytecode_gen.m"
      }
#line 217 "bytecode_gen.m"
    else
#line 295 "bytecode_gen.m"
      {
#line 295 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__TypeCtorInfo_189_189;
#line 295 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__CasesList_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 3)));
#line 295 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__SwitchCode_60;
#line 295 "bytecode_gen.m"
        MR_Integer bytecode_backend__bytecode_gen__ByteVar_61;
#line 295 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_113_113;
#line 295 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_115_115;
#line 295 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_116_116;
#line 295 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_118_118;
#line 295 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_119_119;
#line 295 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_121_121;
#line 295 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__Var_177 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 1)));
#line 295 "bytecode_gen.m"
        MR_Integer bytecode_backend__bytecode_gen__EndLabel_178;
#line 295 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__EnterCode_179;
#line 295 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__EndofCode_180;
#line 295 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__GoalExpr_6, (MR_Integer) 2)));

#line 296 "bytecode_gen.m"
        {
#line 296 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__get_next_label_3_p_0(&bytecode_backend__bytecode_gen__EndLabel_178, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_82, &bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_113_113);
        }
#line 297 "bytecode_gen.m"
        {
#line 297 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_p_0(bytecode_backend__bytecode_gen__CasesList_59, bytecode_backend__bytecode_gen__EndLabel_178, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_113_113, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_83, &bytecode_backend__bytecode_gen__SwitchCode_60);
        }
#line 298 "bytecode_gen.m"
        {
#line 298 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__map_var_3_p_0(*bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_83, bytecode_backend__bytecode_gen__Var_177, &bytecode_backend__bytecode_gen__ByteVar_61);
        }
#line 6881 "bytecode_backend.bytecode_gen.c"
        bytecode_backend__bytecode_gen__TypeCtorInfo_189_189 = (MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0;
#line 299 "bytecode_gen.m"
        {
#line 299 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__V_115_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 299 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_115_115, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 299 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_115_115, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__ByteVar_61));
#line 299 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_115_115, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__EndLabel_178));
#line 299 "bytecode_gen.m"
        }
#line 299 "bytecode_gen.m"
        {
#line 299 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__EnterCode_179 = mercury__cord__singleton_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_189_189, ((MR_Box) (bytecode_backend__bytecode_gen__V_115_115)));
        }
#line 300 "bytecode_gen.m"
        {
#line 300 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__V_119_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 300 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_119_119, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 300 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_119_119, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__EndLabel_178));
#line 300 "bytecode_gen.m"
        }
#line 300 "bytecode_gen.m"
        {
#line 300 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 300 "bytecode_gen.m"
          MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_118_118, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__V_119_119));
#line 300 "bytecode_gen.m"
          MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_118_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 300 "bytecode_gen.m"
        }
#line 300 "bytecode_gen.m"
        {
#line 300 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 300 "bytecode_gen.m"
          MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_116_116, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 300 "bytecode_gen.m"
          MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_116_116, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__V_118_118));
#line 300 "bytecode_gen.m"
        }
#line 300 "bytecode_gen.m"
        {
#line 300 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__EndofCode_180 = mercury__cord__from_list_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_189_189, bytecode_backend__bytecode_gen__V_116_116);
        }
#line 301 "bytecode_gen.m"
        {
#line 301 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__V_121_121 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_189_189, bytecode_backend__bytecode_gen__SwitchCode_60, bytecode_backend__bytecode_gen__EndofCode_180);
        }
#line 301 "bytecode_gen.m"
        {
#line 301 "bytecode_gen.m"
          *bytecode_backend__bytecode_gen__Code_9 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_189_189, bytecode_backend__bytecode_gen__EnterCode_179, bytecode_backend__bytecode_gen__V_121_121);
        }
#line 295 "bytecode_gen.m"
      }
#line 217 "bytecode_gen.m"
  }
#line 211 "bytecode_gen.m"
}

#line 202 "bytecode_gen.m"
static void MR_CALL 
bytecode_backend__bytecode_gen__gen_goal_4_p_0(
#line 202 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__HeadVar__1_1,
#line 202 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_12,
#line 202 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_13,
#line 202 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__Code_8)
#line 202 "bytecode_gen.m"
{
#line 205 "bytecode_gen.m"
  {
#line 205 "bytecode_gen.m"
    MR_bool bytecode_backend__bytecode_gen__succeeded;
#line 205 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__TypeCtorInfo_17_17;
#line 205 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__GoalExpr_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 205 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__GoalInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 205 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__GoalCode_9;
#line 205 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__Context_10;
#line 205 "bytecode_gen.m"
    MR_Integer bytecode_backend__bytecode_gen__Line_11;
#line 205 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_15_15;
#line 205 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_16_16;

#line 206 "bytecode_gen.m"
    {
#line 206 "bytecode_gen.m"
      bytecode_backend__bytecode_gen__gen_goal_expr_5_p_0(bytecode_backend__bytecode_gen__GoalExpr_5, bytecode_backend__bytecode_gen__GoalInfo_6, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_0_12, bytecode_backend__bytecode_gen__STATE_VARIABLE_ByteInfo_13, &bytecode_backend__bytecode_gen__GoalCode_9);
    }
#line 207 "bytecode_gen.m"
    {
#line 207 "bytecode_gen.m"
      bytecode_backend__bytecode_gen__Context_10 = hlds__hlds_goal__goal_info_get_context_1_f_0(bytecode_backend__bytecode_gen__GoalInfo_6);
    }
#line 208 "bytecode_gen.m"
    {
#line 208 "bytecode_gen.m"
      mercury__term__context_line_2_p_0(bytecode_backend__bytecode_gen__Context_10, &bytecode_backend__bytecode_gen__Line_11);
    }
#line 7001 "bytecode_backend.bytecode_gen.c"
    bytecode_backend__bytecode_gen__TypeCtorInfo_17_17 = (MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0;
#line 209 "bytecode_gen.m"
    {
#line 209 "bytecode_gen.m"
      bytecode_backend__bytecode_gen__V_16_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 209 "bytecode_gen.m"
      MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_16_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 29));
#line 209 "bytecode_gen.m"
      MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_16_16, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__Line_11));
#line 209 "bytecode_gen.m"
    }
#line 209 "bytecode_gen.m"
    {
#line 209 "bytecode_gen.m"
      bytecode_backend__bytecode_gen__V_15_15 = mercury__cord__singleton_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_17_17, ((MR_Box) (bytecode_backend__bytecode_gen__V_16_16)));
    }
#line 209 "bytecode_gen.m"
    {
#line 209 "bytecode_gen.m"
      *bytecode_backend__bytecode_gen__Code_8 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_17_17, bytecode_backend__bytecode_gen__V_15_15, bytecode_backend__bytecode_gen__GoalCode_9);
    }
#line 205 "bytecode_gen.m"
  }
#line 202 "bytecode_gen.m"
}

#line 130 "bytecode_gen.m"
static void MR_CALL 
bytecode_backend__bytecode_gen__gen_proc_4_p_0(
#line 130 "bytecode_gen.m"
  MR_Integer bytecode_backend__bytecode_gen__ProcId_5,
#line 130 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__PredInfo_6,
#line 130 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__ModuleInfo_7,
#line 130 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__Code_8)
#line 130 "bytecode_gen.m"
{
#line 133 "bytecode_gen.m"
  {
#line 133 "bytecode_gen.m"
    MR_bool bytecode_backend__bytecode_gen__succeeded;
#line 133 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__TypeCtorInfo_69_69;
#line 133 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__TypeInfo_70_70;
#line 133 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__TypeCtorInfo_73_73;
#line 133 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__ProcTable_9;
#line 133 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__ProcInfo_10;
#line 133 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__Goal_11;
#line 133 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__VarTypes_12;
#line 133 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__VarSet_13;
#line 133 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__Detism_14;
#line 133 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__CodeModel_15;
#line 133 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__GoalVars_16;
#line 133 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__ArgVars_17;
#line 133 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__Vars_18;
#line 133 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__VarList_19;
#line 133 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__VarMap0_20;
#line 133 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__VarMap_21;
#line 133 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__VarInfos_22;
#line 133 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__ByteInfo0_23;
#line 133 "bytecode_gen.m"
    MR_Integer bytecode_backend__bytecode_gen__ZeroLabel_24;
#line 133 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__ByteInfo1_25;
#line 133 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__ArgInfo_26;
#line 133 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__Args_27;
#line 133 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__InputArgs_28;
#line 133 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__ByteInfo_29;
#line 133 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__PickupCode_30;
#line 133 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__OutputArgs_31;
#line 133 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__PlaceCode_32;
#line 133 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__GoalCode_36;
#line 133 "bytecode_gen.m"
    MR_Integer bytecode_backend__bytecode_gen__EndLabel_37;
#line 133 "bytecode_gen.m"
    MR_Integer bytecode_backend__bytecode_gen__LabelCount_38;
#line 133 "bytecode_gen.m"
    MR_Integer bytecode_backend__bytecode_gen__TempCount_39;
#line 133 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__ZeroLabelCode_40;
#line 133 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__BodyCode0_41;
#line 133 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__BodyInstrs_42;
#line 133 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__BodyCode_43;
#line 133 "bytecode_gen.m"
    MR_Integer bytecode_backend__bytecode_gen__ProcInt_44;
#line 133 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__EnterCode_45;
#line 133 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__EndofCode_46;
#line 133 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_48_48;
#line 133 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_49_49;
#line 133 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_50_50;
#line 133 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_53_53;
#line 133 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_66_66;
#line 133 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_80_80;
#line 133 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__LabelCounter0_86;
#line 133 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__LabelCounter_87;
#line 135 "bytecode_gen.m"
    MR_Box bytecode_backend__bytecode_gen__conv0_ProcInfo_10;
#line 931 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_93_93;
#line 931 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_94_94;
#line 931 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_95_95;
#line 931 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_97_97;
#line 931 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__V_96_96;

#line 134 "bytecode_gen.m"
    {
#line 134 "bytecode_gen.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(bytecode_backend__bytecode_gen__PredInfo_6, &bytecode_backend__bytecode_gen__ProcTable_9);
    }
#line 135 "bytecode_gen.m"
    {
#line 135 "bytecode_gen.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, bytecode_backend__bytecode_gen__ProcTable_9, ((MR_Box) (bytecode_backend__bytecode_gen__ProcId_5)), &bytecode_backend__bytecode_gen__conv0_ProcInfo_10);
    }
#line 135 "bytecode_gen.m"
    bytecode_backend__bytecode_gen__ProcInfo_10 = ((MR_Word) bytecode_backend__bytecode_gen__conv0_ProcInfo_10);
#line 137 "bytecode_gen.m"
    {
#line 137 "bytecode_gen.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(bytecode_backend__bytecode_gen__ProcInfo_10, &bytecode_backend__bytecode_gen__Goal_11);
    }
#line 138 "bytecode_gen.m"
    {
#line 138 "bytecode_gen.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(bytecode_backend__bytecode_gen__ProcInfo_10, &bytecode_backend__bytecode_gen__VarTypes_12);
    }
#line 139 "bytecode_gen.m"
    {
#line 139 "bytecode_gen.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(bytecode_backend__bytecode_gen__ProcInfo_10, &bytecode_backend__bytecode_gen__VarSet_13);
    }
#line 140 "bytecode_gen.m"
    {
#line 140 "bytecode_gen.m"
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(bytecode_backend__bytecode_gen__ProcInfo_10, &bytecode_backend__bytecode_gen__Detism_14);
    }
#line 141 "bytecode_gen.m"
    {
#line 141 "bytecode_gen.m"
      hlds__code_model__determinism_to_code_model_2_p_0(bytecode_backend__bytecode_gen__Detism_14, &bytecode_backend__bytecode_gen__CodeModel_15);
    }
#line 143 "bytecode_gen.m"
    {
#line 143 "bytecode_gen.m"
      hlds__goal_util__goal_vars_2_p_0(bytecode_backend__bytecode_gen__Goal_11, &bytecode_backend__bytecode_gen__GoalVars_16);
    }
#line 144 "bytecode_gen.m"
    {
#line 144 "bytecode_gen.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(bytecode_backend__bytecode_gen__ProcInfo_10, &bytecode_backend__bytecode_gen__ArgVars_17);
    }
#line 7197 "bytecode_backend.bytecode_gen.c"
    bytecode_backend__bytecode_gen__TypeCtorInfo_69_69 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 145 "bytecode_gen.m"
    {
#line 145 "bytecode_gen.m"
      parse_tree__set_of_var__insert_list_3_p_0(bytecode_backend__bytecode_gen__TypeCtorInfo_69_69, bytecode_backend__bytecode_gen__ArgVars_17, bytecode_backend__bytecode_gen__GoalVars_16, &bytecode_backend__bytecode_gen__Vars_18);
    }
#line 146 "bytecode_gen.m"
    {
#line 146 "bytecode_gen.m"
      parse_tree__set_of_var__to_sorted_list_2_p_0(bytecode_backend__bytecode_gen__TypeCtorInfo_69_69, bytecode_backend__bytecode_gen__Vars_18, &bytecode_backend__bytecode_gen__VarList_19);
    }
#line 7209 "bytecode_backend.bytecode_gen.c"
    bytecode_backend__bytecode_gen__TypeInfo_70_70 = (MR_Word) &bytecode_backend__bytecode_gen_scalar_common_1[0];
#line 147 "bytecode_gen.m"
    {
#line 147 "bytecode_gen.m"
      mercury__map__init_1_p_0(bytecode_backend__bytecode_gen__TypeInfo_70_70, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, &bytecode_backend__bytecode_gen__VarMap0_20);
    }
#line 148 "bytecode_gen.m"
    {
#line 148 "bytecode_gen.m"
      bytecode_backend__bytecode_gen__create_varmap_7_p_0(bytecode_backend__bytecode_gen__VarList_19, bytecode_backend__bytecode_gen__VarSet_13, bytecode_backend__bytecode_gen__VarTypes_12, (MR_Integer) 0, bytecode_backend__bytecode_gen__VarMap0_20, &bytecode_backend__bytecode_gen__VarMap_21, &bytecode_backend__bytecode_gen__VarInfos_22);
    }
#line 893 "bytecode_gen.m"
    {
#line 893 "bytecode_gen.m"
      bytecode_backend__bytecode_gen__LabelCounter0_86 = mercury__counter__init_1_f_0((MR_Integer) 0);
    }
#line 893 "bytecode_gen.m"
    {
#line 893 "bytecode_gen.m"
      bytecode_backend__bytecode_gen__V_80_80 = mercury__counter__init_1_f_0((MR_Integer) 0);
    }
#line 892 "bytecode_gen.m"
    {
#line 892 "bytecode_gen.m"
      bytecode_backend__bytecode_gen__ByteInfo0_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 892 "bytecode_gen.m"
      MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo0_23, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__VarMap_21));
#line 892 "bytecode_gen.m"
      MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo0_23, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__VarTypes_12));
#line 892 "bytecode_gen.m"
      MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo0_23, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__ModuleInfo_7));
#line 892 "bytecode_gen.m"
      MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo0_23, 3) = ((MR_Box) (bytecode_backend__bytecode_gen__LabelCounter0_86));
#line 892 "bytecode_gen.m"
      MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo0_23, 4) = ((MR_Box) (bytecode_backend__bytecode_gen__V_80_80));
#line 892 "bytecode_gen.m"
    }
#line 930 "bytecode_gen.m"
    {
#line 930 "bytecode_gen.m"
      mercury__counter__allocate_3_p_0(&bytecode_backend__bytecode_gen__ZeroLabel_24, bytecode_backend__bytecode_gen__LabelCounter0_86, &bytecode_backend__bytecode_gen__LabelCounter_87);
    }
#line 931 "bytecode_gen.m"
    bytecode_backend__bytecode_gen__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo0_23, (MR_Integer) 0)));
#line 931 "bytecode_gen.m"
    bytecode_backend__bytecode_gen__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo0_23, (MR_Integer) 1)));
#line 931 "bytecode_gen.m"
    bytecode_backend__bytecode_gen__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo0_23, (MR_Integer) 2)));
#line 931 "bytecode_gen.m"
    bytecode_backend__bytecode_gen__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo0_23, (MR_Integer) 3)));
#line 931 "bytecode_gen.m"
    bytecode_backend__bytecode_gen__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo0_23, (MR_Integer) 4)));
#line 931 "bytecode_gen.m"
    {
#line 931 "bytecode_gen.m"
      bytecode_backend__bytecode_gen__ByteInfo1_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 931 "bytecode_gen.m"
      MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo1_25, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__V_93_93));
#line 931 "bytecode_gen.m"
      MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo1_25, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__V_94_94));
#line 931 "bytecode_gen.m"
      MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo1_25, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__V_95_95));
#line 931 "bytecode_gen.m"
      MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo1_25, 3) = ((MR_Box) (bytecode_backend__bytecode_gen__LabelCounter_87));
#line 931 "bytecode_gen.m"
      MR_hl_field(MR_mktag(0), bytecode_backend__bytecode_gen__ByteInfo1_25, 4) = ((MR_Box) (bytecode_backend__bytecode_gen__V_97_97));
#line 931 "bytecode_gen.m"
    }
#line 153 "bytecode_gen.m"
    {
#line 153 "bytecode_gen.m"
      hlds__hlds_pred__proc_info_arg_info_2_p_0(bytecode_backend__bytecode_gen__ProcInfo_10, &bytecode_backend__bytecode_gen__ArgInfo_26);
    }
#line 154 "bytecode_gen.m"
    {
#line 154 "bytecode_gen.m"
      mercury__assoc_list__from_corresponding_lists_3_p_0(bytecode_backend__bytecode_gen__TypeInfo_70_70, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0, bytecode_backend__bytecode_gen__ArgVars_17, bytecode_backend__bytecode_gen__ArgInfo_26, &bytecode_backend__bytecode_gen__Args_27);
    }
#line 156 "bytecode_gen.m"
    {
#line 156 "bytecode_gen.m"
      ll_backend__call_gen__input_arg_locs_2_p_0(bytecode_backend__bytecode_gen__Args_27, &bytecode_backend__bytecode_gen__InputArgs_28);
    }
#line 159 "bytecode_gen.m"
    {
#line 159 "bytecode_gen.m"
      ll_backend__call_gen__output_arg_locs_2_p_0(bytecode_backend__bytecode_gen__Args_27, &bytecode_backend__bytecode_gen__OutputArgs_31);
    }
#line 7298 "bytecode_backend.bytecode_gen.c"
    bytecode_backend__bytecode_gen__TypeCtorInfo_73_73 = (MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0;
#line 177 "bytecode_gen.m"
    {
#line 177 "bytecode_gen.m"
      bytecode_backend__bytecode_gen__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 177 "bytecode_gen.m"
      MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 177 "bytecode_gen.m"
      MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_48_48, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__ZeroLabel_24));
#line 177 "bytecode_gen.m"
    }
#line 177 "bytecode_gen.m"
    {
#line 177 "bytecode_gen.m"
      bytecode_backend__bytecode_gen__ZeroLabelCode_40 = mercury__cord__singleton_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_73_73, ((MR_Box) (bytecode_backend__bytecode_gen__V_48_48)));
    }
#line 185 "bytecode_gen.m"
    {
#line 185 "bytecode_gen.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(bytecode_backend__bytecode_gen__ProcId_5, &bytecode_backend__bytecode_gen__ProcInt_44);
    }
#line 7320 "bytecode_backend.bytecode_gen.c"
    if ((bytecode_backend__bytecode_gen__CodeModel_15 == (MR_Integer) 1))
#line 7322 "bytecode_backend.bytecode_gen.c"
      {
#line 7324 "bytecode_backend.bytecode_gen.c"
        MR_Word bytecode_backend__bytecode_gen__V_59_59;
#line 7326 "bytecode_backend.bytecode_gen.c"
        MR_Word bytecode_backend__bytecode_gen__V_61_61;
#line 7328 "bytecode_backend.bytecode_gen.c"
        MR_Word bytecode_backend__bytecode_gen__V_62_62;
#line 7330 "bytecode_backend.bytecode_gen.c"
        MR_Word bytecode_backend__bytecode_gen__ByteInfo2_98;
#line 7332 "bytecode_backend.bytecode_gen.c"
        MR_Word bytecode_backend__bytecode_gen__ByteInfo3_99;
#line 165 "bytecode_gen.m"
        MR_Integer bytecode_backend__bytecode_gen___FrameTemp_33;

#line 165 "bytecode_gen.m"
        {
#line 165 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__get_next_temp_3_p_0(&bytecode_backend__bytecode_gen___FrameTemp_33, bytecode_backend__bytecode_gen__ByteInfo1_25, &bytecode_backend__bytecode_gen__ByteInfo2_98);
        }
#line 173 "bytecode_gen.m"
        {
#line 173 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__gen_goal_4_p_0(bytecode_backend__bytecode_gen__Goal_11, bytecode_backend__bytecode_gen__ByteInfo2_98, &bytecode_backend__bytecode_gen__ByteInfo3_99, &bytecode_backend__bytecode_gen__GoalCode_36);
        }
#line 174 "bytecode_gen.m"
        {
#line 174 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__get_next_label_3_p_0(&bytecode_backend__bytecode_gen__EndLabel_37, bytecode_backend__bytecode_gen__ByteInfo3_99, &bytecode_backend__bytecode_gen__ByteInfo_29);
        }
#line 190 "bytecode_gen.m"
        {
#line 190 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__V_62_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 190 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_62_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 190 "bytecode_gen.m"
          MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_62_62, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__EndLabel_37));
#line 190 "bytecode_gen.m"
        }
#line 190 "bytecode_gen.m"
        {
#line 190 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 190 "bytecode_gen.m"
          MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_61_61, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__V_62_62));
#line 190 "bytecode_gen.m"
          MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &bytecode_backend__bytecode_gen_scalar_common_1[1])));
#line 190 "bytecode_gen.m"
        }
#line 190 "bytecode_gen.m"
        {
#line 190 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 190 "bytecode_gen.m"
          MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_59_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 190 "bytecode_gen.m"
          MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_59_59, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__V_61_61));
#line 190 "bytecode_gen.m"
        }
#line 190 "bytecode_gen.m"
        {
#line 190 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__EndofCode_46 = mercury__cord__from_list_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_73_73, bytecode_backend__bytecode_gen__V_59_59);
        }
#line 7387 "bytecode_backend.bytecode_gen.c"
      }
#line 7389 "bytecode_backend.bytecode_gen.c"
    else
#line 7391 "bytecode_backend.bytecode_gen.c"
      {
#line 7393 "bytecode_backend.bytecode_gen.c"
        MR_Word bytecode_backend__bytecode_gen__ByteInfo3_35;

#line 173 "bytecode_gen.m"
        {
#line 173 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__gen_goal_4_p_0(bytecode_backend__bytecode_gen__Goal_11, bytecode_backend__bytecode_gen__ByteInfo1_25, &bytecode_backend__bytecode_gen__ByteInfo3_35, &bytecode_backend__bytecode_gen__GoalCode_36);
        }
#line 174 "bytecode_gen.m"
        {
#line 174 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__get_next_label_3_p_0(&bytecode_backend__bytecode_gen__EndLabel_37, bytecode_backend__bytecode_gen__ByteInfo3_35, &bytecode_backend__bytecode_gen__ByteInfo_29);
        }
#line 195 "bytecode_gen.m"
        {
#line 195 "bytecode_gen.m"
          MR_Word bytecode_backend__bytecode_gen__V_54_54;
#line 195 "bytecode_gen.m"
          MR_Word bytecode_backend__bytecode_gen__V_55_55;

#line 196 "bytecode_gen.m"
          {
#line 196 "bytecode_gen.m"
            bytecode_backend__bytecode_gen__V_55_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 196 "bytecode_gen.m"
            MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_55_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 196 "bytecode_gen.m"
            MR_hl_field(MR_mktag(3), bytecode_backend__bytecode_gen__V_55_55, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__EndLabel_37));
#line 196 "bytecode_gen.m"
          }
#line 196 "bytecode_gen.m"
          {
#line 196 "bytecode_gen.m"
            bytecode_backend__bytecode_gen__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 196 "bytecode_gen.m"
            MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_54_54, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__V_55_55));
#line 196 "bytecode_gen.m"
            MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &bytecode_backend__bytecode_gen_scalar_common_1[1])));
#line 196 "bytecode_gen.m"
          }
#line 196 "bytecode_gen.m"
          {
#line 196 "bytecode_gen.m"
            bytecode_backend__bytecode_gen__EndofCode_46 = mercury__cord__from_list_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_73_73, bytecode_backend__bytecode_gen__V_54_54);
          }
#line 195 "bytecode_gen.m"
        }
#line 7440 "bytecode_backend.bytecode_gen.c"
      }
#line 157 "bytecode_gen.m"
    {
#line 157 "bytecode_gen.m"
      bytecode_backend__bytecode_gen__gen_pickups_3_p_0(bytecode_backend__bytecode_gen__InputArgs_28, bytecode_backend__bytecode_gen__ByteInfo_29, &bytecode_backend__bytecode_gen__PickupCode_30);
    }
#line 160 "bytecode_gen.m"
    {
#line 160 "bytecode_gen.m"
      bytecode_backend__bytecode_gen__gen_places_3_p_0(bytecode_backend__bytecode_gen__OutputArgs_31, bytecode_backend__bytecode_gen__ByteInfo_29, &bytecode_backend__bytecode_gen__PlaceCode_32);
    }
#line 175 "bytecode_gen.m"
    {
#line 175 "bytecode_gen.m"
      bytecode_backend__bytecode_gen__get_counts_3_p_0(bytecode_backend__bytecode_gen__ByteInfo_29, &bytecode_backend__bytecode_gen__LabelCount_38, &bytecode_backend__bytecode_gen__TempCount_39);
    }
#line 178 "bytecode_gen.m"
    {
#line 178 "bytecode_gen.m"
      bytecode_backend__bytecode_gen__V_50_50 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_73_73, bytecode_backend__bytecode_gen__GoalCode_36, bytecode_backend__bytecode_gen__PlaceCode_32);
    }
#line 178 "bytecode_gen.m"
    {
#line 178 "bytecode_gen.m"
      bytecode_backend__bytecode_gen__V_49_49 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_73_73, bytecode_backend__bytecode_gen__ZeroLabelCode_40, bytecode_backend__bytecode_gen__V_50_50);
    }
#line 178 "bytecode_gen.m"
    {
#line 178 "bytecode_gen.m"
      bytecode_backend__bytecode_gen__BodyCode0_41 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_73_73, bytecode_backend__bytecode_gen__PickupCode_30, bytecode_backend__bytecode_gen__V_49_49);
    }
#line 179 "bytecode_gen.m"
    {
#line 179 "bytecode_gen.m"
      bytecode_backend__bytecode_gen__BodyInstrs_42 = mercury__cord__list_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_73_73, bytecode_backend__bytecode_gen__BodyCode0_41);
    }
#line 180 "bytecode_gen.m"
    {
#line 180 "bytecode_gen.m"
      bytecode_backend__bytecode_gen__succeeded = mercury__list__member_2_p_0(bytecode_backend__bytecode_gen__TypeCtorInfo_73_73, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))), bytecode_backend__bytecode_gen__BodyInstrs_42);
    }
#line 182 "bytecode_gen.m"
    if (bytecode_backend__bytecode_gen__succeeded)
#line 181 "bytecode_gen.m"
      {
#line 181 "bytecode_gen.m"
        {
#line 181 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__BodyCode_43 = mercury__cord__singleton_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_73_73, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))));
        }
#line 181 "bytecode_gen.m"
      }
#line 182 "bytecode_gen.m"
    else
#line 183 "bytecode_gen.m"
      bytecode_backend__bytecode_gen__BodyCode_43 = bytecode_backend__bytecode_gen__BodyCode0_41;
#line 186 "bytecode_gen.m"
    {
#line 186 "bytecode_gen.m"
      bytecode_backend__bytecode_gen__V_53_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 186 "bytecode_gen.m"
      MR_hl_field(MR_mktag(2), bytecode_backend__bytecode_gen__V_53_53, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__ProcInt_44));
#line 186 "bytecode_gen.m"
      MR_hl_field(MR_mktag(2), bytecode_backend__bytecode_gen__V_53_53, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__Detism_14));
#line 186 "bytecode_gen.m"
      MR_hl_field(MR_mktag(2), bytecode_backend__bytecode_gen__V_53_53, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__LabelCount_38));
#line 186 "bytecode_gen.m"
      MR_hl_field(MR_mktag(2), bytecode_backend__bytecode_gen__V_53_53, 3) = ((MR_Box) (bytecode_backend__bytecode_gen__EndLabel_37));
#line 186 "bytecode_gen.m"
      MR_hl_field(MR_mktag(2), bytecode_backend__bytecode_gen__V_53_53, 4) = ((MR_Box) (bytecode_backend__bytecode_gen__TempCount_39));
#line 186 "bytecode_gen.m"
      MR_hl_field(MR_mktag(2), bytecode_backend__bytecode_gen__V_53_53, 5) = ((MR_Box) (bytecode_backend__bytecode_gen__VarInfos_22));
#line 186 "bytecode_gen.m"
    }
#line 186 "bytecode_gen.m"
    {
#line 186 "bytecode_gen.m"
      bytecode_backend__bytecode_gen__EnterCode_45 = mercury__cord__singleton_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_73_73, ((MR_Box) (bytecode_backend__bytecode_gen__V_53_53)));
    }
#line 198 "bytecode_gen.m"
    {
#line 198 "bytecode_gen.m"
      bytecode_backend__bytecode_gen__V_66_66 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_73_73, bytecode_backend__bytecode_gen__BodyCode_43, bytecode_backend__bytecode_gen__EndofCode_46);
    }
#line 198 "bytecode_gen.m"
    {
#line 198 "bytecode_gen.m"
      *bytecode_backend__bytecode_gen__Code_8 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_73_73, bytecode_backend__bytecode_gen__EnterCode_45, bytecode_backend__bytecode_gen__V_66_66);
    }
#line 133 "bytecode_gen.m"
  }
#line 130 "bytecode_gen.m"
}

#line 119 "bytecode_gen.m"
static void MR_CALL 
bytecode_backend__bytecode_gen__gen_pred_7_p_0(
#line 119 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__HeadVar__1_1,
#line 119 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__HeadVar__2_2,
#line 119 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__HeadVar__3_3,
#line 119 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__HeadVar__4_4,
#line 119 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__HeadVar__5_5)
#line 119 "bytecode_gen.m"
{
#line 122 "bytecode_gen.m"
  {
#line 122 "bytecode_gen.m"
    MR_bool bytecode_backend__bytecode_gen__succeeded;

#line 122 "bytecode_gen.m"
    if ((bytecode_backend__bytecode_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 122 "bytecode_gen.m"
      {
#line 122 "bytecode_gen.m"
        {
#line 122 "bytecode_gen.m"
          *bytecode_backend__bytecode_gen__HeadVar__5_5 = mercury__cord__empty_0_f_0((MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0);
        }
#line 122 "bytecode_gen.m"
      }
#line 122 "bytecode_gen.m"
    else
#line 123 "bytecode_gen.m"
      {
#line 123 "bytecode_gen.m"
        MR_Integer bytecode_backend__bytecode_gen__ProcId_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 123 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__ProcIds_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 123 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__ProcCode_21;
#line 123 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__ProcsCode_22;

#line 124 "bytecode_gen.m"
        {
#line 124 "bytecode_gen.m"
          hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Generating bytecode for ", bytecode_backend__bytecode_gen__HeadVar__1_1, bytecode_backend__bytecode_gen__ProcId_15, bytecode_backend__bytecode_gen__HeadVar__4_4);
        }
#line 126 "bytecode_gen.m"
        {
#line 126 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__gen_proc_4_p_0(bytecode_backend__bytecode_gen__ProcId_15, bytecode_backend__bytecode_gen__HeadVar__3_3, bytecode_backend__bytecode_gen__HeadVar__4_4, &bytecode_backend__bytecode_gen__ProcCode_21);
        }
#line 127 "bytecode_gen.m"
        {
#line 127 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__gen_pred_7_p_0(bytecode_backend__bytecode_gen__HeadVar__1_1, bytecode_backend__bytecode_gen__ProcIds_16, bytecode_backend__bytecode_gen__HeadVar__3_3, bytecode_backend__bytecode_gen__HeadVar__4_4, &bytecode_backend__bytecode_gen__ProcsCode_22);
        }
#line 128 "bytecode_gen.m"
        {
#line 128 "bytecode_gen.m"
          *bytecode_backend__bytecode_gen__HeadVar__5_5 = mercury__cord__f_43_43_2_f_0((MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0, bytecode_backend__bytecode_gen__ProcCode_21, bytecode_backend__bytecode_gen__ProcsCode_22);
        }
#line 123 "bytecode_gen.m"
      }
#line 122 "bytecode_gen.m"
  }
#line 119 "bytecode_gen.m"
}

#line 93 "bytecode_gen.m"
static void MR_CALL 
bytecode_backend__bytecode_gen__gen_preds_5_p_0(
#line 93 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__HeadVar__1_1,
#line 93 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__HeadVar__2_2,
#line 93 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__HeadVar__3_3)
#line 93 "bytecode_gen.m"
{
#line 96 "bytecode_gen.m"
  {
#line 96 "bytecode_gen.m"
    MR_bool bytecode_backend__bytecode_gen__succeeded;

#line 96 "bytecode_gen.m"
    if ((bytecode_backend__bytecode_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 96 "bytecode_gen.m"
      {
#line 96 "bytecode_gen.m"
        {
#line 96 "bytecode_gen.m"
          *bytecode_backend__bytecode_gen__HeadVar__3_3 = mercury__cord__empty_0_f_0((MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0);
        }
#line 96 "bytecode_gen.m"
      }
#line 96 "bytecode_gen.m"
    else
#line 97 "bytecode_gen.m"
      {
#line 97 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__PredId_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 97 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__PredIds_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 97 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__PredTable_15;
#line 97 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__PredInfo_16;
#line 97 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__ProcIds_17;
#line 97 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__PredCode_18;
#line 97 "bytecode_gen.m"
        MR_Word bytecode_backend__bytecode_gen__OtherCode_28;
#line 99 "bytecode_gen.m"
        MR_Box bytecode_backend__bytecode_gen__conv0_PredInfo_16;

#line 98 "bytecode_gen.m"
        {
#line 98 "bytecode_gen.m"
          hlds__hlds_module__module_info_get_preds_2_p_0(bytecode_backend__bytecode_gen__HeadVar__1_1, &bytecode_backend__bytecode_gen__PredTable_15);
        }
#line 99 "bytecode_gen.m"
        {
#line 99 "bytecode_gen.m"
          mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, bytecode_backend__bytecode_gen__PredTable_15, ((MR_Box) (bytecode_backend__bytecode_gen__PredId_11)), &bytecode_backend__bytecode_gen__conv0_PredInfo_16);
        }
#line 99 "bytecode_gen.m"
        bytecode_backend__bytecode_gen__PredInfo_16 = ((MR_Word) bytecode_backend__bytecode_gen__conv0_PredInfo_16);
#line 100 "bytecode_gen.m"
        {
#line 100 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__ProcIds_17 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(bytecode_backend__bytecode_gen__PredInfo_16);
        }
#line 104 "bytecode_gen.m"
        if ((bytecode_backend__bytecode_gen__ProcIds_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 102 "bytecode_gen.m"
          {
#line 103 "bytecode_gen.m"
            {
#line 103 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__PredCode_18 = mercury__cord__empty_0_f_0((MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0);
            }
#line 102 "bytecode_gen.m"
          }
#line 104 "bytecode_gen.m"
        else
#line 105 "bytecode_gen.m"
          {
#line 105 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__TypeCtorInfo_41_41;
#line 105 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__ProcsCode_21;
#line 105 "bytecode_gen.m"
            MR_String bytecode_backend__bytecode_gen__PredName_22;
#line 105 "bytecode_gen.m"
            MR_Integer bytecode_backend__bytecode_gen__ProcsCount_23;
#line 105 "bytecode_gen.m"
            MR_Integer bytecode_backend__bytecode_gen__Arity_24;
#line 105 "bytecode_gen.m"
            MR_Integer bytecode_backend__bytecode_gen__IsFunc_25;
#line 105 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__EnterCode_26;
#line 105 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__EndofCode_27;
#line 105 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__V_32_32;
#line 105 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__V_34_34;
#line 105 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__PredOrFunc_45;
#line 105 "bytecode_gen.m"
            MR_Integer bytecode_backend__bytecode_gen__ProcId_53 = ((MR_Integer) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__ProcIds_17, (MR_Integer) 0)));
#line 105 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__ProcIds_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__ProcIds_17, (MR_Integer) 1)));
#line 105 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__ProcCode_59;
#line 105 "bytecode_gen.m"
            MR_Word bytecode_backend__bytecode_gen__ProcsCode_60;

#line 124 "bytecode_gen.m"
            {
#line 124 "bytecode_gen.m"
              hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Generating bytecode for ", bytecode_backend__bytecode_gen__PredId_11, bytecode_backend__bytecode_gen__ProcId_53, bytecode_backend__bytecode_gen__HeadVar__1_1);
            }
#line 126 "bytecode_gen.m"
            {
#line 126 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__gen_proc_4_p_0(bytecode_backend__bytecode_gen__ProcId_53, bytecode_backend__bytecode_gen__PredInfo_16, bytecode_backend__bytecode_gen__HeadVar__1_1, &bytecode_backend__bytecode_gen__ProcCode_59);
            }
#line 127 "bytecode_gen.m"
            {
#line 127 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__gen_pred_7_p_0(bytecode_backend__bytecode_gen__PredId_11, bytecode_backend__bytecode_gen__ProcIds_54, bytecode_backend__bytecode_gen__PredInfo_16, bytecode_backend__bytecode_gen__HeadVar__1_1, &bytecode_backend__bytecode_gen__ProcsCode_60);
            }
#line 128 "bytecode_gen.m"
            {
#line 128 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__ProcsCode_21 = mercury__cord__f_43_43_2_f_0((MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0, bytecode_backend__bytecode_gen__ProcCode_59, bytecode_backend__bytecode_gen__ProcsCode_60);
            }
#line 107 "bytecode_gen.m"
            {
#line 107 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__PredName_22 = hlds__hlds_module__predicate_name_2_f_0(bytecode_backend__bytecode_gen__HeadVar__1_1, bytecode_backend__bytecode_gen__PredId_11);
            }
#line 108 "bytecode_gen.m"
            {
#line 108 "bytecode_gen.m"
              mercury__list__length_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, bytecode_backend__bytecode_gen__ProcIds_17, &bytecode_backend__bytecode_gen__ProcsCount_23);
            }
#line 109 "bytecode_gen.m"
            {
#line 109 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__Arity_24 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(bytecode_backend__bytecode_gen__PredInfo_16);
            }
#line 954 "bytecode_gen.m"
            {
#line 954 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__PredOrFunc_45 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(bytecode_backend__bytecode_gen__PredInfo_16);
            }
#line 958 "bytecode_gen.m"
            if ((bytecode_backend__bytecode_gen__PredOrFunc_45 == (MR_Integer) 1))
#line 960 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__IsFunc_25 = (MR_Integer) 1;
#line 958 "bytecode_gen.m"
            else
#line 957 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__IsFunc_25 = (MR_Integer) 0;
#line 7765 "bytecode_backend.bytecode_gen.c"
            bytecode_backend__bytecode_gen__TypeCtorInfo_41_41 = (MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0;
#line 111 "bytecode_gen.m"
            {
#line 111 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 111 "bytecode_gen.m"
              MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_32_32, 0) = ((MR_Box) (bytecode_backend__bytecode_gen__PredName_22));
#line 111 "bytecode_gen.m"
              MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_32_32, 1) = ((MR_Box) (bytecode_backend__bytecode_gen__Arity_24));
#line 111 "bytecode_gen.m"
              MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_32_32, 2) = ((MR_Box) (bytecode_backend__bytecode_gen__IsFunc_25));
#line 111 "bytecode_gen.m"
              MR_hl_field(MR_mktag(1), bytecode_backend__bytecode_gen__V_32_32, 3) = ((MR_Box) (bytecode_backend__bytecode_gen__ProcsCount_23));
#line 111 "bytecode_gen.m"
            }
#line 111 "bytecode_gen.m"
            {
#line 111 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__EnterCode_26 = mercury__cord__singleton_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_41_41, ((MR_Box) (bytecode_backend__bytecode_gen__V_32_32)));
            }
#line 113 "bytecode_gen.m"
            {
#line 113 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__EndofCode_27 = mercury__cord__singleton_1_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_41_41, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
            }
#line 114 "bytecode_gen.m"
            {
#line 114 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__V_34_34 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_41_41, bytecode_backend__bytecode_gen__ProcsCode_21, bytecode_backend__bytecode_gen__EndofCode_27);
            }
#line 114 "bytecode_gen.m"
            {
#line 114 "bytecode_gen.m"
              bytecode_backend__bytecode_gen__PredCode_18 = mercury__cord__f_43_43_2_f_0(bytecode_backend__bytecode_gen__TypeCtorInfo_41_41, bytecode_backend__bytecode_gen__EnterCode_26, bytecode_backend__bytecode_gen__V_34_34);
            }
#line 105 "bytecode_gen.m"
          }
#line 116 "bytecode_gen.m"
        {
#line 116 "bytecode_gen.m"
          bytecode_backend__bytecode_gen__gen_preds_5_p_0(bytecode_backend__bytecode_gen__HeadVar__1_1, bytecode_backend__bytecode_gen__PredIds_12, &bytecode_backend__bytecode_gen__OtherCode_28);
        }
#line 117 "bytecode_gen.m"
        {
#line 117 "bytecode_gen.m"
          *bytecode_backend__bytecode_gen__HeadVar__3_3 = mercury__cord__f_43_43_2_f_0((MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0, bytecode_backend__bytecode_gen__PredCode_18, bytecode_backend__bytecode_gen__OtherCode_28);
        }
#line 97 "bytecode_gen.m"
      }
#line 96 "bytecode_gen.m"
  }
#line 93 "bytecode_gen.m"
}

#line 29 "bytecode_gen.m"
void MR_CALL 
bytecode_backend__bytecode_gen__gen_module_4_p_0(
#line 29 "bytecode_gen.m"
  MR_Word bytecode_backend__bytecode_gen__ModuleInfo_5,
#line 29 "bytecode_gen.m"
  MR_Word * bytecode_backend__bytecode_gen__Code_6)
#line 29 "bytecode_gen.m"
{
#line 88 "bytecode_gen.m"
  {
#line 88 "bytecode_gen.m"
    MR_bool bytecode_backend__bytecode_gen__succeeded;
#line 88 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__PredIds_8;
#line 88 "bytecode_gen.m"
    MR_Word bytecode_backend__bytecode_gen__CodeTree_9;

#line 89 "bytecode_gen.m"
    {
#line 89 "bytecode_gen.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(bytecode_backend__bytecode_gen__ModuleInfo_5, &bytecode_backend__bytecode_gen__PredIds_8);
    }
#line 90 "bytecode_gen.m"
    {
#line 90 "bytecode_gen.m"
      bytecode_backend__bytecode_gen__gen_preds_5_p_0(bytecode_backend__bytecode_gen__ModuleInfo_5, bytecode_backend__bytecode_gen__PredIds_8, &bytecode_backend__bytecode_gen__CodeTree_9);
    }
#line 91 "bytecode_gen.m"
    {
#line 91 "bytecode_gen.m"
      *bytecode_backend__bytecode_gen__Code_6 = mercury__cord__list_1_f_0((MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0, bytecode_backend__bytecode_gen__CodeTree_9);
    }
#line 88 "bytecode_gen.m"
  }
#line 29 "bytecode_gen.m"
}

void mercury__bytecode_backend__bytecode_gen__init(void)
{
}

void mercury__bytecode_backend__bytecode_gen__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&bytecode_backend__bytecode_gen__bytecode_backend__bytecode_gen__type_ctor_info_byte_info_0);
}

void mercury__bytecode_backend__bytecode_gen__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module bytecode_backend.bytecode_gen. */
