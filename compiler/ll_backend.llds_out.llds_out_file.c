/*
** Automatically generated from `llds_out_file.m'
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


/* :- module ll_backend.llds_out.llds_out_file. */
/* :- implementation. */

/*
INIT mercury__ll_backend__llds_out__llds_out_file__init
ENDINIT
*/

#include "ll_backend.llds_out.llds_out_file.mih"


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
#include "library.mih"
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
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.exprn_aux.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.layout_out.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.llds_out.mih"
#include "ll_backend.rtti_out.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "ll_backend.llds_out.llds_out_code_addr.mih"
#include "ll_backend.llds_out.llds_out_data.mih"
#include "ll_backend.llds_out.llds_out_global.mih"
#include "ll_backend.llds_out.llds_out_instr.mih"
#include "ll_backend.llds_out.llds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 158 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0;

#line 161 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__llds_out__llds_out_file__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__layout__type_ctor_info_layout_slot_name_0;

#line 164 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__llds_out__llds_out_file__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__llds__type_ctor_info_data_id_0;

#line 167 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_file__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0;

#line 170 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__llds_out__llds_out_file__list__ti_list_1builtin__type_ctor_info_int_0;

#line 173 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__llds_out__llds_out_file__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_list__ti_list_1builtin__type_ctor_info_int_0;

#line 176 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_file__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

#line 179 "ll_backend.llds_out.llds_out_file.c"
static const MR_VA_TypeInfo_Struct2 ll_backend__llds_out__llds_out_file____vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

#line 182 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__llds_out__llds_out_file__list__ti_list_1__vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

#line 185 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__llds_out__llds_out_file__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_list__ti_list_1__vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

#line 188 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_file__list__pti_list_1__plain___vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

#line 191 "ll_backend.llds_out.llds_out_file.c"
static const MR_VA_PseudoTypeInfo_Struct2 ll_backend__llds_out__llds_out_file____vpti_tuple_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0;

#line 194 "ll_backend.llds_out.llds_out_file.c"
static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_functor_desc_linkage_0_0;

#line 197 "ll_backend.llds_out.llds_out_file.c"
static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_functor_desc_linkage_0_1;

#line 200 "ll_backend.llds_out.llds_out_file.c"
static const MR_EnumFunctorDescPtr ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_value_ordered_linkage_0[2];

#line 203 "ll_backend.llds_out.llds_out_file.c"
static const MR_EnumFunctorDescPtr ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_name_ordered_linkage_0[2];

#line 206 "ll_backend.llds_out.llds_out_file.c"
static const MR_Integer ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__functor_number_map_linkage_0[2];

#line 209 "ll_backend.llds_out.llds_out_file.c"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file____Unify____linkage_0_0_10001(
#line 212 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 214 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2);

#line 217 "ll_backend.llds_out.llds_out_file.c"
static void MR_CALL 
ll_backend__llds_out__llds_out_file____Compare____linkage_0_0_10001(
#line 220 "ll_backend.llds_out.llds_out_file.c"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 222 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 224 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 869 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_114_101_99_111_114_100_95_101_110_116_114_121_95_108_97_98_101_108_95_100_101_99_108_95_95_91_49_93_95_48_6_p_0(
#line 869 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Label_8,
#line 869 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_17,
#line 869 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_18);

#line 1639 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__gather_labels_from_instrs_acc_5_p_0(
#line 1639 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 1639 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_0_2,
#line 1639 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_3,
#line 1639 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_0_4,
#line 1639 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_5);

#line 1626 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__gather_labels_from_c_procs_acc_5_p_0(
#line 1626 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 1626 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_0_2,
#line 1626 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_3,
#line 1626 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_0_4,
#line 1626 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_5);

#line 1605 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__gather_labels_from_c_modules_acc_5_p_0(
#line 1605 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 1605 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_0_2,
#line 1605 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_3,
#line 1605 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_0_4,
#line 1605 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_5);

#line 1585 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__gather_c_file_labels_3_p_0(
#line 1585 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Modules_4,
#line 1585 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__EntryLabels_5,
#line 1585 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__InternalLabels_6);

#line 1519 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__delete_any_maybe_labels_3_p_0(
#line 1519 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 1519 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_2,
#line 1519 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_3);

#line 1508 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__delete_any_maybe_label_3_p_0(
#line 1508 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__MaybeLabel_4,
#line 1508 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_7,
#line 1508 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_8);

#line 1500 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(
#line 1500 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 1500 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_2,
#line 1500 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_3);

#line 1490 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__delete_any_label_3_p_0(
#line 1490 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__CodeAddr_4,
#line 1490 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_7,
#line 1490 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_8);

#line 1313 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__find_while_labels_to_define_5_p_0(
#line 1313 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 1313 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2,
#line 1313 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__WhileLabels_3,
#line 1313 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4,
#line 1313 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_5);

#line 1279 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__count_while_label_in_block_4_p_0(
#line 1279 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Label_1,
#line 1279 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2,
#line 1279 "llds_out_file.m"
  MR_Integer ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_3,
#line 1279 "llds_out_file.m"
  MR_Integer * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_4);

#line 1258 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__is_while_label_5_p_0(
#line 1258 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Label_1,
#line 1258 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2,
#line 1258 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__HeadVar__3_3,
#line 1258 "llds_out_file.m"
  MR_Integer ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_4,
#line 1258 "llds_out_file.m"
  MR_Integer * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_5);

#line 1242 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__find_while_labels_3_p_0(
#line 1242 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 1242 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_WhileSet_0_2,
#line 1242 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_WhileSet_3);

#line 1192 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__find_cont_labels_3_p_0(
#line 1192 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 1192 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_0_2,
#line 1192 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_3);

#line 1172 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__find_caller_label_2_p_0(
#line 1172 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 1172 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__CallerLabel_2);

#line 1095 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_procedure_4_p_0(
#line 1095 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_5,
#line 1095 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Proc_6);

#line 1081 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_global_var_decl_5_p_0(
#line 1081 "llds_out_file.m"
  MR_String ll_backend__llds_out__llds_out_file__VarName_6,
#line 1081 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_10,
#line 1081 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_11);

#line 1079 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_c_procedure_decls_6_p_0_2(
#line 1079 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1079 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1079 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1079 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 1079 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 1079 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5);

#line 1078 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_c_procedure_decls_6_p_0_1(
#line 1078 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1078 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1078 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1078 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 1078 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 1078 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5);

#line 1071 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_c_procedure_decls_6_p_0(
#line 1071 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_7,
#line 1071 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Proc_8,
#line 1071 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_14,
#line 1071 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_15);

#line 1036 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_entry_label_init_4_p_0(
#line 1036 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__EntryLabelToLayoutMap_5,
#line 1036 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Label_6);

#line 1029 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__write_int_pair_3_p_0(
#line 1029 "llds_out_file.m"
  MR_Tuple ll_backend__llds_out__llds_out_file__HeadVar__1_1);

#line 1026 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_chunk_6_p_0_1(
#line 1026 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1026 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1026 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1026 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 1012 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_chunk_6_p_0(
#line 1012 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_7,
#line 1012 "llds_out_file.m"
  MR_String ll_backend__llds_out__llds_out_file__Suffix_8,
#line 1012 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ProcLabel_9,
#line 1012 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__LabelSlotNums_10);

#line 1008 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_group_5_p_0_1(
#line 1008 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1008 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1008 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1008 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 997 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_group_5_p_0(
#line 997 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_6,
#line 997 "llds_out_file.m"
  MR_String ll_backend__llds_out__llds_out_file__Suffix_7,
#line 997 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__3_3);

#line 994 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_no_layout_init_chunk_4_p_0_1(
#line 994 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 994 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 994 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 994 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 985 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_no_layout_init_chunk_4_p_0(
#line 985 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ProcLabel_5,
#line 985 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__LabelNums_6);

#line 982 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_no_layout_init_group_3_p_0_1(
#line 982 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 982 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 982 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 982 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 973 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_no_layout_init_group_3_p_0(
#line 973 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1);

#line 931 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__group_init_c_labels_10_p_0(
#line 931 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 931 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2,
#line 931 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoLayoutMap_0_3,
#line 931 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoLayoutMap_4,
#line 931 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_0_5,
#line 931 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_6,
#line 931 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_0_7,
#line 931 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_8,
#line 931 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_0_9,
#line 931 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_10);

#line 928 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0_5(
#line 928 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 928 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 928 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 928 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 924 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0_4(
#line 924 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 924 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 924 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 924 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 920 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0_3(
#line 920 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 920 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 920 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 920 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 916 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0_2(
#line 916 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 916 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 916 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 916 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 905 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0_1(
#line 905 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 905 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 905 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 905 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 900 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0(
#line 900 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_6,
#line 900 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__EntryLabels_7,
#line 900 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__InternalLabels_8);

#line 869 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_entry_label_decl_6_p_0(
#line 869 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file___Info_7,
#line 869 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Label_8,
#line 869 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_17,
#line 869 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_18);

#line 862 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__insert_internal_label_code_addr_decl_4_p_0(
#line 862 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ProcLabel_5,
#line 862 "llds_out_file.m"
  MR_Integer ll_backend__llds_out__llds_out_file__LabelNum_6,
#line 862 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_9,
#line 862 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_10);

#line 859 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_internal_label_decl_group_6_p_0_2(
#line 859 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 859 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 859 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 859 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 857 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_internal_label_decl_group_6_p_0_1(
#line 857 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 857 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 857 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 857 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 847 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_internal_label_decl_group_6_p_0(
#line 847 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ProcLabel_7,
#line 847 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__LabelNums_8,
#line 847 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_11,
#line 847 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_12);

#line 844 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_internal_label_decls_5_p_0_2(
#line 844 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 844 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 844 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 844 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 842 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_internal_label_decls_5_p_0_1(
#line 842 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 842 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 842 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 842 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 842 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 842 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5);

#line 833 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_internal_label_decls_5_p_0(
#line 833 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 833 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_13,
#line 833 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_14);

#line 819 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__group_decl_c_labels_3_p_0(
#line 819 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 819 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabelMap_0_2,
#line 819 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabelMap_3);

#line 816 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_c_label_decls_7_p_0_2(
#line 816 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 816 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 816 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 816 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 816 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 816 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5);

#line 814 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_c_label_decls_7_p_0_1(
#line 814 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 814 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 814 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 814 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 814 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 814 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5);

#line 806 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_c_label_decls_7_p_0(
#line 806 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_8,
#line 806 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__EntryLabels_9,
#line 806 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__InternalLabels_10,
#line 806 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_15,
#line 806 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_16);

#line 765 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_foreign_header_include_line_6_p_0(
#line 765 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_7,
#line 765 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Decl_8,
#line 765 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AlreadyDone_0_17,
#line 765 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AlreadyDone_18);

#line 762 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_foreign_header_include_lines_4_p_0_1(
#line 762 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 762 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 762 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 762 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 762 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 762 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5);

#line 758 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_foreign_header_include_lines_4_p_0(
#line 758 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_5,
#line 758 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Decls_6);

#line 725 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_user_foreign_code_4_p_0(
#line 725 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_5,
#line 725 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__UserForeignCode_6);

#line 709 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_static_linkage_define_2_p_0(void);

#line 704 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_comp_gen_c_module_6_p_0_2(
#line 704 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 704 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 704 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 704 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 695 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_comp_gen_c_module_6_p_0_1(
#line 695 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 695 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 695 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 695 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 695 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 695 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5);

#line 689 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_comp_gen_c_module_6_p_0(
#line 689 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_7,
#line 689 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__CompGenCModule_8,
#line 689 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_15,
#line 689 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_16);

#line 679 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_required_init_or_final_calls_3_p_0(
#line 679 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1);

#line 672 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_env_var_init_3_p_0(
#line 672 "llds_out_file.m"
  MR_String ll_backend__llds_out__llds_out_file__EnvVarName_4);

#line 668 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_init_comment_6_p_0_1(
#line 668 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 668 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 668 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 668 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 641 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_init_comment_6_p_0(
#line 641 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ModuleName_7,
#line 641 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__UserInitPredCNames_8,
#line 641 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__UserFinalPredCNames_9,
#line 641 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__EnvVarNames_10);

#line 608 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_write_proc_static_list_3_p_0(
#line 608 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1);

#line 595 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_debugger_init_list_3_p_0(
#line 595 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1);

#line 583 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_type_tables_init_list_3_p_0(
#line 583 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1);

#line 561 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_alloc_sites_init_4_p_0(
#line 561 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_5,
#line 561 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__AllocSites_6);

#line 552 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_data_init_list_3_p_0(
#line 552 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1);

#line 526 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_init_bunch_calls_6_p_0(
#line 526 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_1,
#line 526 "llds_out_file.m"
  MR_String ll_backend__llds_out__llds_out_file__InitStatus_2,
#line 526 "llds_out_file.m"
  MR_Integer ll_backend__llds_out__llds_out_file__Seq_3,
#line 526 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__4_4);

#line 515 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_init_bunch_def_3_p_0(
#line 515 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1);

#line 501 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_init_bunch_defs_6_p_0(
#line 501 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_1,
#line 501 "llds_out_file.m"
  MR_String ll_backend__llds_out__llds_out_file__InitStatus_2,
#line 501 "llds_out_file.m"
  MR_Integer ll_backend__llds_out__llds_out_file__Seq_3,
#line 501 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__4_4);

#line 493 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__entry_label_has_layout_2_p_0(
#line 493 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__EntryLabelToLayoutMap_3,
#line 493 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Label_4);

#line 487 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__internal_label_has_layout_2_p_0(
#line 487 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__InternalLabelToLayoutMap_3,
#line 487 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Label_4);

#line 483 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__module_defines_label_with_layout_2_p_0_2(
#line 483 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 483 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1);

#line 480 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__module_defines_label_with_layout_2_p_0_1(
#line 480 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 480 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1);

#line 464 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__module_defines_label_with_layout_2_p_0(
#line 464 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_3,
#line 464 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Module_4);

#line 264 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_module_init_list_15_p_0_1(
#line 264 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 264 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1);

#line 254 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_module_init_list_15_p_0(
#line 254 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_16,
#line 254 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ModuleName_17,
#line 254 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Modules_18,
#line 254 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__RttiDatas_19,
#line 254 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ProcLayoutDatas_20,
#line 254 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ModuleLayoutDatas_21,
#line 254 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ComplexityProcs_22,
#line 254 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__TSStringTable_23,
#line 254 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__AllocSites_24,
#line 254 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__InitPredNames_25,
#line 254 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__FinalPredNames_26,
#line 254 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_52,
#line 254 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_53);

#line 246 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__proc_gather_env_var_names_3_p_0(
#line 246 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 246 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_0_2,
#line 246 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_3);

#line 238 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__module_gather_env_var_names_3_p_0(
#line 238 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 238 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_0_2,
#line 238 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_3);

#line 230 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_7_p_0_12(
#line 230 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 230 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 230 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 230 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 229 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_7_p_0_11(
#line 229 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 229 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 229 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 229 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 228 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_7_p_0_10(
#line 228 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 228 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 228 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 228 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 228 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 228 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5);

#line 215 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_7_p_0_9(
#line 215 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 215 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 215 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 215 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 215 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 215 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5);

#line 213 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_7_p_0_8(
#line 213 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 213 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 213 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 213 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 213 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 213 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5);

#line 211 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_7_p_0_7(
#line 211 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 211 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 211 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 211 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 211 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 211 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5);

#line 201 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_7_p_0_6(
#line 201 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 201 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 201 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 201 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 201 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 201 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5);

#line 199 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_7_p_0_5(
#line 199 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 199 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 199 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 199 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 199 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 199 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5);

#line 197 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_7_p_0_4(
#line 197 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 197 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 197 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 197 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 197 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 197 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5);

#line 195 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_7_p_0_3(
#line 195 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 195 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 195 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 195 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 195 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 195 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5);

#line 190 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_7_p_0_2(
#line 190 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 190 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 190 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 190 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 190 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 190 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5);

#line 188 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_7_p_0_1(
#line 188 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 188 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 188 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 188 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 188 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 188 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5);

#line 152 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_7_p_0(
#line 152 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Globals_8,
#line 152 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__CFile_9,
#line 152 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__FileStream_10,
#line 152 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_61,
#line 152 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_62);

#line 123 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_file_mercury_headers_3_p_0(
#line 123 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_4);


static /* final */ const MR_Box ll_backend__llds_out__llds_out_file_scalar_common_1[3][2];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_file_scalar_common_2[12][3];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_file_scalar_common_3[1][4];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_file_scalar_common_4[5][8];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_file_scalar_common_5[14][9];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_file_scalar_common_6[5][7];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_file_scalar_common_7[4][6];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_file_scalar_common_8[3][5];




static /* final */ const MR_Box ll_backend__llds_out__llds_out_file_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_3[0]))
  },
};

static /* final */ const MR_Box ll_backend__llds_out__llds_out_file_scalar_common_2[12][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_1[1]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_1[2]))
  },
  /* row 2 */
  {
    ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_4[0])),
    ((MR_Box) (ll_backend__llds_out__llds_out_file__output_single_c_file_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_4[1])),
    ((MR_Box) (ll_backend__llds_out__llds_out_file__output_single_c_file_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_7[0])),
    ((MR_Box) (ll_backend__llds_out__llds_out_file__output_single_c_file_7_p_0_12)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_7[0])),
    ((MR_Box) (ll_backend__llds_out__llds_out_file__output_init_comment_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_4[2])),
    ((MR_Box) (ll_backend__llds_out__llds_out_file__output_record_c_label_decls_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_7[1])),
    ((MR_Box) (ll_backend__llds_out__llds_out_file__output_record_internal_label_decl_group_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_7[2])),
    ((MR_Box) (ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_7[1])),
    ((MR_Box) (ll_backend__llds_out__llds_out_file__output_c_internal_label_no_layout_init_chunk_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_7[3])),
    ((MR_Box) (ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_chunk_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_4[4])),
    ((MR_Box) (ll_backend__llds_out__llds_out_file__output_record_c_procedure_decls_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__llds_out__llds_out_file_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box ll_backend__llds_out__llds_out_file_scalar_common_4[5][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_scalar_common_data_array_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_vector_common_data_array_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_list__ti_list_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_list__ti_list_1__vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ll_backend__llds_out__llds_out_file_scalar_common_5[14][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_tabling_info_struct_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_scalar_common_data_array_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_vector_common_data_array_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_data_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_module_layout_data_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_closure_proc_id_data_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_comp_gen_c_module_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 12 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__list__pti_list_1__plain___vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 13 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ll_backend__llds_out__llds_out_file_scalar_common_6[5][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_user_foreign_code_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__llds__type_ctor_info_data_id_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ll_backend__llds_out__llds_out_file_scalar_common_7[4][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
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
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_list__ti_list_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file____vpti_tuple_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ll_backend__llds_out__llds_out_file_scalar_common_8[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_comp_gen_c_module_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__layout__type_ctor_info_layout_slot_name_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__llds__type_ctor_info_data_id_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
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



#line 1781 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0
  }
};

#line 1789 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__llds_out__llds_out_file__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__layout__type_ctor_info_layout_slot_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0
  }
};

#line 1798 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__llds_out__llds_out_file__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__llds__type_ctor_info_data_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0
  }
};

#line 1807 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_file__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1815 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__llds_out__llds_out_file__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1823 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__llds_out__llds_out_file__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
    (MR_PseudoTypeInfo) &ll_backend__llds_out__llds_out_file__list__ti_list_1builtin__type_ctor_info_int_0
  }
};

#line 1832 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_file__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1840 "ll_backend.llds_out.llds_out_file.c"
static const MR_VA_TypeInfo_Struct2 ll_backend__llds_out__llds_out_file____vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1850 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__llds_out__llds_out_file__list__ti_list_1__vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__llds_out__llds_out_file____vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0
  }
};

#line 1858 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__llds_out__llds_out_file__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_list__ti_list_1__vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
    (MR_PseudoTypeInfo) &ll_backend__llds_out__llds_out_file__list__ti_list_1__vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0
  }
};

#line 1867 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_file__list__pti_list_1__plain___vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds_out__llds_out_file____vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0
  }
};

#line 1875 "ll_backend.llds_out.llds_out_file.c"
static const MR_VA_PseudoTypeInfo_Struct2 ll_backend__llds_out__llds_out_file____vpti_tuple_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1885 "ll_backend.llds_out.llds_out_file.c"
static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_functor_desc_linkage_0_0 = {
  (MR_String) "extern",
  (MR_Integer) 0
};

#line 1891 "ll_backend.llds_out.llds_out_file.c"
static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_functor_desc_linkage_0_1 = {
  (MR_String) "static",
  (MR_Integer) 1
};

#line 1897 "ll_backend.llds_out.llds_out_file.c"
static const MR_EnumFunctorDescPtr ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_value_ordered_linkage_0[2] = {
  &ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_functor_desc_linkage_0_0,
  &ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_functor_desc_linkage_0_1
};

#line 1903 "ll_backend.llds_out.llds_out_file.c"
static const MR_EnumFunctorDescPtr ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_name_ordered_linkage_0[2] = {
  &ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_functor_desc_linkage_0_0,
  &ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_functor_desc_linkage_0_1
};

#line 1909 "ll_backend.llds_out.llds_out_file.c"
static const MR_Integer ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__functor_number_map_linkage_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1915 "ll_backend.llds_out.llds_out_file.c"
const MR_TypeCtorInfo_Struct ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__type_ctor_info_linkage_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__llds_out__llds_out_file____Unify____linkage_0_0_10001)),
  ((MR_Box) (ll_backend__llds_out__llds_out_file____Compare____linkage_0_0_10001)),
  (MR_String) "ll_backend.llds_out.llds_out_file",
  (MR_String) "linkage",
  {
    ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_name_ordered_linkage_0
  },
  {
    ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_value_ordered_linkage_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__functor_number_map_linkage_0
};

#line 1936 "ll_backend.llds_out.llds_out_file.c"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file____Unify____linkage_0_0_10001(
#line 1939 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1941 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2)
#line 1943 "ll_backend.llds_out.llds_out_file.c"
{
#line 1945 "ll_backend.llds_out.llds_out_file.c"
  {
#line 1947 "ll_backend.llds_out.llds_out_file.c"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 1950 "ll_backend.llds_out.llds_out_file.c"
    {
#line 1952 "ll_backend.llds_out.llds_out_file.c"
      ll_backend__llds_out__llds_out_file__succeeded = ll_backend__llds_out__llds_out_file____Unify____linkage_0_0(((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2));
    }
#line 1955 "ll_backend.llds_out.llds_out_file.c"
    return ll_backend__llds_out__llds_out_file__succeeded;
#line 1957 "ll_backend.llds_out.llds_out_file.c"
  }
#line 1959 "ll_backend.llds_out.llds_out_file.c"
}

#line 1962 "ll_backend.llds_out.llds_out_file.c"
static void MR_CALL 
ll_backend__llds_out__llds_out_file____Compare____linkage_0_0_10001(
#line 1965 "ll_backend.llds_out.llds_out_file.c"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1967 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1969 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 1971 "ll_backend.llds_out.llds_out_file.c"
{
#line 1973 "ll_backend.llds_out.llds_out_file.c"
  {
#line 1975 "ll_backend.llds_out.llds_out_file.c"
    MR_Word ll_backend__llds_out__llds_out_file__conv0_HeadVar__1_1;

#line 1978 "ll_backend.llds_out.llds_out_file.c"
    {
#line 1980 "ll_backend.llds_out.llds_out_file.c"
      ll_backend__llds_out__llds_out_file____Compare____linkage_0_0(&ll_backend__llds_out__llds_out_file__conv0_HeadVar__1_1, ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_3));
    }
#line 1983 "ll_backend.llds_out.llds_out_file.c"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_1 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv0_HeadVar__1_1));
#line 1985 "ll_backend.llds_out.llds_out_file.c"
  }
#line 1987 "ll_backend.llds_out.llds_out_file.c"
}

#line 869 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_114_101_99_111_114_100_95_101_110_116_114_121_95_108_97_98_101_108_95_100_101_99_108_95_95_91_49_93_95_48_6_p_0(
#line 869 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Label_8,
#line 869 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_17,
#line 869 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_18)
#line 869 "llds_out_file.m"
{
#line 872 "llds_out_file.m"
  {
#line 872 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 872 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__DeclMacro_12;
#line 872 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_33_33;
#line 872 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_35_35;

#line 876 "llds_out_file.m"
    if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Label_8)) == (MR_mktag((MR_Integer) 1))))
#line 876 "llds_out_file.m"
      {
#line 876 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__Label_8, (MR_Integer) 0)));
#line 874 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__Label_8, (MR_Integer) 1)));

#line 876 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__V_37_37 == (MR_Integer) 0))
#line 881 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__DeclMacro_12 = (MR_String) "MR_decl_local";
#line 876 "llds_out_file.m"
        else
#line 876 "llds_out_file.m"
          if ((ll_backend__llds_out__llds_out_file__V_37_37 == (MR_Integer) 2))
#line 875 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__DeclMacro_12 = (MR_String) "MR_def_extern_entry";
#line 876 "llds_out_file.m"
          else
#line 878 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__DeclMacro_12 = (MR_String) "MR_decl_static";
#line 876 "llds_out_file.m"
      }
#line 876 "llds_out_file.m"
    else
#line 883 "llds_out_file.m"
      {
#line 884 "llds_out_file.m"
        {
#line 884 "llds_out_file.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_out.llds_out_file", (MR_String) "predicate \140ll_backend.llds_out.llds_out_file.output_record_entry_label_decl\'/6", (MR_String) "internal label");
#line 884 "llds_out_file.m"
          return;
        }
#line 883 "llds_out_file.m"
      }
#line 886 "llds_out_file.m"
    {
#line 886 "llds_out_file.m"
      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__DeclMacro_12);
    }
#line 887 "llds_out_file.m"
    {
#line 887 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "(");
    }
#line 888 "llds_out_file.m"
    {
#line 888 "llds_out_file.m"
      ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_file__Label_8);
    }
#line 889 "llds_out_file.m"
    {
#line 889 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) ")\n");
    }
#line 890 "llds_out_file.m"
    {
#line 890 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 890 "llds_out_file.m"
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__V_35_35, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_8));
#line 890 "llds_out_file.m"
    }
#line 890 "llds_out_file.m"
    {
#line 890 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_33_33 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 890 "llds_out_file.m"
      MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_file__V_33_33, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__V_35_35));
#line 890 "llds_out_file.m"
    }
#line 890 "llds_out_file.m"
    {
#line 890 "llds_out_file.m"
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__llds_out__llds_out_file__V_33_33, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_17, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_18);
#line 890 "llds_out_file.m"
      return;
    }
#line 872 "llds_out_file.m"
  }
#line 869 "llds_out_file.m"
}

#line 60 "llds_out_file.m"
void MR_CALL 
ll_backend__llds_out__llds_out_file____Compare____linkage_0_0(
#line 60 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 60 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2,
#line 60 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__3_3)
#line 60 "llds_out_file.m"
{
#line 60 "llds_out_file.m"
  {
#line 60 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 60 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__Cast_HeadVar1_4 = (MR_Integer) ll_backend__llds_out__llds_out_file__HeadVar__2_2;
#line 60 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__Cast_HeadVar2_5 = (MR_Integer) ll_backend__llds_out__llds_out_file__HeadVar__3_3;

#line 60 "llds_out_file.m"
    {
#line 60 "llds_out_file.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__llds_out__llds_out_file__HeadVar__1_1, ll_backend__llds_out__llds_out_file__Cast_HeadVar1_4, ll_backend__llds_out__llds_out_file__Cast_HeadVar2_5);
#line 60 "llds_out_file.m"
      return;
    }
#line 60 "llds_out_file.m"
  }
#line 60 "llds_out_file.m"
}

#line 60 "llds_out_file.m"
MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file____Unify____linkage_0_0(
#line 60 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_1,
#line 60 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2)
#line 60 "llds_out_file.m"
{
#line 2139 "ll_backend.llds_out.llds_out_file.c"
  {
#line 2141 "ll_backend.llds_out.llds_out_file.c"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded = (ll_backend__llds_out__llds_out_file__HeadVar__2_1 == ll_backend__llds_out__llds_out_file__HeadVar__2_2);

#line 2144 "ll_backend.llds_out.llds_out_file.c"
    return ll_backend__llds_out__llds_out_file__succeeded;
#line 2146 "ll_backend.llds_out.llds_out_file.c"
  }
#line 60 "llds_out_file.m"
}

#line 1639 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__gather_labels_from_instrs_acc_5_p_0(
#line 1639 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 1639 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_0_2,
#line 1639 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_3,
#line 1639 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_0_4,
#line 1639 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_5)
#line 1639 "llds_out_file.m"
{
#line 1643 "llds_out_file.m"
  while (MR_TRUE)
#line 1643 "llds_out_file.m"
    {
#line 1643 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 1643 "llds_out_file.m"
      {
#line 1643 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 1643 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1643 "llds_out_file.m"
          {
#line 1643 "llds_out_file.m"
            *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_5 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_0_4;
#line 1643 "llds_out_file.m"
            *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_3 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_0_2;
#line 1643 "llds_out_file.m"
          }
#line 1643 "llds_out_file.m"
        else
#line 1645 "llds_out_file.m"
          {
#line 1645 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Instr_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 1645 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Instrs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 1645 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_27_27;
#line 1645 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_28_28;
#line 1654 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Label_16;
#line 1646 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Instr_12, (MR_Integer) 0)));
#line 1646 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Instr_12, (MR_Integer) 1)));

#line 1646 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__V_26_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__V_26_26, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1646 "llds_out_file.m"
            if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1646 "llds_out_file.m"
              {
#line 1646 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__Label_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__V_26_26, (MR_Integer) 1)));
#line 1650 "llds_out_file.m"
                if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Label_16)) == (MR_mktag((MR_Integer) 1))))
#line 1648 "llds_out_file.m"
                  {
#line 1649 "llds_out_file.m"
                    {
#line 1649 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1649 "llds_out_file.m"
                      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_28_28, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_16));
#line 1649 "llds_out_file.m"
                      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_28_28, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_0_2));
#line 1649 "llds_out_file.m"
                    }
#line 1649 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_27_27 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_0_4;
#line 1648 "llds_out_file.m"
                  }
#line 1650 "llds_out_file.m"
                else
#line 1651 "llds_out_file.m"
                  {
#line 1652 "llds_out_file.m"
                    {
#line 1652 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1652 "llds_out_file.m"
                      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_27_27, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_16));
#line 1652 "llds_out_file.m"
                      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_27_27, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_0_4));
#line 1652 "llds_out_file.m"
                    }
#line 1652 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_28_28 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_0_2;
#line 1651 "llds_out_file.m"
                  }
#line 1646 "llds_out_file.m"
              }
#line 1646 "llds_out_file.m"
            else
#line 1655 "llds_out_file.m"
              {
#line 1655 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_27_27 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_0_4;
#line 1655 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_28_28 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_0_2;
#line 1655 "llds_out_file.m"
              }
#line 1657 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 1657 "llds_out_file.m"
            {
#line 1657 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__Instrs_13;
#line 1657 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_0__tmp_copy_2 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_28_28;
#line 1657 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_0__tmp_copy_4 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_27_27;

#line 1657 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_0_4 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_0__tmp_copy_4;
#line 1657 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_0_2 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_0__tmp_copy_2;
#line 1657 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 1657 "llds_out_file.m"
            }
#line 1657 "llds_out_file.m"
            continue;
#line 1645 "llds_out_file.m"
          }
#line 1643 "llds_out_file.m"
      }
#line 1643 "llds_out_file.m"
      break;
#line 1643 "llds_out_file.m"
    }
#line 1639 "llds_out_file.m"
}

#line 1626 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__gather_labels_from_c_procs_acc_5_p_0(
#line 1626 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 1626 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_0_2,
#line 1626 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_3,
#line 1626 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_0_4,
#line 1626 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_5)
#line 1626 "llds_out_file.m"
{
#line 1630 "llds_out_file.m"
  while (MR_TRUE)
#line 1630 "llds_out_file.m"
    {
#line 1630 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 1630 "llds_out_file.m"
      {
#line 1630 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 1630 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1630 "llds_out_file.m"
          {
#line 1630 "llds_out_file.m"
            *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_5 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_0_4;
#line 1630 "llds_out_file.m"
            *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_3 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_0_2;
#line 1630 "llds_out_file.m"
          }
#line 1630 "llds_out_file.m"
        else
#line 1632 "llds_out_file.m"
          {
#line 1632 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Proc_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 1632 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Procs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 1632 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Instrs_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_12, (MR_Integer) 4)));
#line 1632 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_21_21;
#line 1632 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_22_22;
#line 1633 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_12, (MR_Integer) 0)));
#line 1633 "llds_out_file.m"
            MR_Integer ll_backend__llds_out__llds_out_file__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_12, (MR_Integer) 1)));
#line 1633 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_12, (MR_Integer) 2)));
#line 1633 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_12, (MR_Integer) 3)));
#line 1633 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_12, (MR_Integer) 5)));
#line 1633 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_12, (MR_Integer) 6)));
#line 1633 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_12, (MR_Integer) 7)));
#line 1633 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_12, (MR_Integer) 8)));

#line 1634 "llds_out_file.m"
            {
#line 1634 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__gather_labels_from_instrs_acc_5_p_0(ll_backend__llds_out__llds_out_file__Instrs_16, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_0_2, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_21_21, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_22_22);
            }
#line 1636 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 1636 "llds_out_file.m"
            {
#line 1636 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__Procs_13;
#line 1636 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_0__tmp_copy_2 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_21_21;
#line 1636 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_0__tmp_copy_4 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_22_22;

#line 1636 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_0_4 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_0__tmp_copy_4;
#line 1636 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_0_2 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_0__tmp_copy_2;
#line 1636 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 1636 "llds_out_file.m"
            }
#line 1636 "llds_out_file.m"
            continue;
#line 1632 "llds_out_file.m"
          }
#line 1630 "llds_out_file.m"
      }
#line 1630 "llds_out_file.m"
      break;
#line 1630 "llds_out_file.m"
    }
#line 1626 "llds_out_file.m"
}

#line 1605 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__gather_labels_from_c_modules_acc_5_p_0(
#line 1605 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 1605 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_0_2,
#line 1605 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_3,
#line 1605 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_0_4,
#line 1605 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_5)
#line 1605 "llds_out_file.m"
{
#line 1609 "llds_out_file.m"
  while (MR_TRUE)
#line 1609 "llds_out_file.m"
    {
#line 1609 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 1609 "llds_out_file.m"
      {
#line 1609 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 1609 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1609 "llds_out_file.m"
          {
#line 1609 "llds_out_file.m"
            *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_5 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_0_4;
#line 1609 "llds_out_file.m"
            *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_3 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_0_2;
#line 1609 "llds_out_file.m"
          }
#line 1609 "llds_out_file.m"
        else
#line 1611 "llds_out_file.m"
          {
#line 1611 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Module_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 1611 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Modules_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 1611 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_20_20;
#line 1611 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_21_21;
#line 1611 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Procs_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Module_12, (MR_Integer) 1)));
#line 1622 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Module_12, (MR_Integer) 0)));

#line 1623 "llds_out_file.m"
            {
#line 1623 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__gather_labels_from_c_procs_acc_5_p_0(ll_backend__llds_out__llds_out_file__Procs_29, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_0_2, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_20_20, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_21_21);
            }
#line 1614 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 1614 "llds_out_file.m"
            {
#line 1614 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__Modules_13;
#line 1614 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_0__tmp_copy_2 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_20_20;
#line 1614 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_0__tmp_copy_4 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_21_21;

#line 1614 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_0_4 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_0__tmp_copy_4;
#line 1614 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_0_2 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_0__tmp_copy_2;
#line 1614 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 1614 "llds_out_file.m"
            }
#line 1614 "llds_out_file.m"
            continue;
#line 1611 "llds_out_file.m"
          }
#line 1609 "llds_out_file.m"
      }
#line 1609 "llds_out_file.m"
      break;
#line 1609 "llds_out_file.m"
    }
#line 1605 "llds_out_file.m"
}

#line 1585 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__gather_c_file_labels_3_p_0(
#line 1585 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Modules_4,
#line 1585 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__EntryLabels_5,
#line 1585 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__InternalLabels_6)
#line 1585 "llds_out_file.m"
{
#line 1588 "llds_out_file.m"
  {
#line 1588 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 1588 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_11_11;
#line 1588 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__RevEntryLabels_7;
#line 1588 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__RevInternalLabels_8;

#line 1589 "llds_out_file.m"
    {
#line 1589 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__gather_labels_from_c_modules_acc_5_p_0(ll_backend__llds_out__llds_out_file__Modules_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__RevEntryLabels_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__RevInternalLabels_8);
    }
#line 2515 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_11_11 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 1591 "llds_out_file.m"
    {
#line 1591 "llds_out_file.m"
      mercury__list__reverse_2_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_11_11, ll_backend__llds_out__llds_out_file__RevEntryLabels_7, ll_backend__llds_out__llds_out_file__EntryLabels_5);
    }
#line 1592 "llds_out_file.m"
    {
#line 1592 "llds_out_file.m"
      mercury__list__reverse_2_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_11_11, ll_backend__llds_out__llds_out_file__RevInternalLabels_8, ll_backend__llds_out__llds_out_file__InternalLabels_6);
#line 1592 "llds_out_file.m"
      return;
    }
#line 1588 "llds_out_file.m"
  }
#line 1585 "llds_out_file.m"
}

#line 1519 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__delete_any_maybe_labels_3_p_0(
#line 1519 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 1519 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_2,
#line 1519 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_3)
#line 1519 "llds_out_file.m"
{
#line 1522 "llds_out_file.m"
  while (MR_TRUE)
#line 1522 "llds_out_file.m"
    {
#line 1522 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 1522 "llds_out_file.m"
      {
#line 1522 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 1522 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1522 "llds_out_file.m"
          *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_3 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_2;
#line 1522 "llds_out_file.m"
        else
#line 1523 "llds_out_file.m"
          {
#line 1523 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__MaybeLabel_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 1523 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__MaybeLabels_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 1523 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_12_12;

#line 1513 "llds_out_file.m"
            if ((ll_backend__llds_out__llds_out_file__MaybeLabel_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1513 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_12_12 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_2;
#line 1513 "llds_out_file.m"
            else
#line 1515 "llds_out_file.m"
              {
#line 1515 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__Label_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__MaybeLabel_7, (MR_Integer) 0)));

#line 1516 "llds_out_file.m"
                {
#line 1516 "llds_out_file.m"
                  mercury__set_tree234__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_18)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_2, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_12_12);
                }
#line 1515 "llds_out_file.m"
              }
#line 1525 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 1525 "llds_out_file.m"
            {
#line 1525 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__MaybeLabels_8;
#line 1525 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0__tmp_copy_2 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_12_12;

#line 1525 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_2 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0__tmp_copy_2;
#line 1525 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 1525 "llds_out_file.m"
            }
#line 1525 "llds_out_file.m"
            continue;
#line 1523 "llds_out_file.m"
          }
#line 1522 "llds_out_file.m"
      }
#line 1522 "llds_out_file.m"
      break;
#line 1522 "llds_out_file.m"
    }
#line 1519 "llds_out_file.m"
}

#line 1508 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__delete_any_maybe_label_3_p_0(
#line 1508 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__MaybeLabel_4,
#line 1508 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_7,
#line 1508 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_8)
#line 1508 "llds_out_file.m"
{
#line 1513 "llds_out_file.m"
  {
#line 1513 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 1513 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__MaybeLabel_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1513 "llds_out_file.m"
      *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_8 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_7;
#line 1513 "llds_out_file.m"
    else
#line 1515 "llds_out_file.m"
      {
#line 1515 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__Label_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__MaybeLabel_4, (MR_Integer) 0)));

#line 1516 "llds_out_file.m"
        {
#line 1516 "llds_out_file.m"
          mercury__set_tree234__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_6)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_7, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_8);
#line 1516 "llds_out_file.m"
          return;
        }
#line 1515 "llds_out_file.m"
      }
#line 1513 "llds_out_file.m"
  }
#line 1508 "llds_out_file.m"
}

#line 1500 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(
#line 1500 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 1500 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_2,
#line 1500 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_3)
#line 1500 "llds_out_file.m"
{
#line 1503 "llds_out_file.m"
  while (MR_TRUE)
#line 1503 "llds_out_file.m"
    {
#line 1503 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 1503 "llds_out_file.m"
      {
#line 1503 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 1503 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1503 "llds_out_file.m"
          *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_3 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_2;
#line 1503 "llds_out_file.m"
        else
#line 1504 "llds_out_file.m"
          {
#line 1504 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__CodeAddr_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 1504 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__CodeAddrs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 1504 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_12_12;
#line 1496 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Label_18;

#line 1494 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__CodeAddr_7)) == (MR_mktag((MR_Integer) 1)));
#line 1494 "llds_out_file.m"
            if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1494 "llds_out_file.m"
              {
#line 1494 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__Label_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__CodeAddr_7, (MR_Integer) 0)));
#line 1495 "llds_out_file.m"
                {
#line 1495 "llds_out_file.m"
                  mercury__set_tree234__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_18)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_2, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_12_12);
                }
#line 1494 "llds_out_file.m"
              }
#line 1494 "llds_out_file.m"
            else
#line 1495 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_12_12 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_2;
#line 1506 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 1506 "llds_out_file.m"
            {
#line 1506 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__CodeAddrs_8;
#line 1506 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0__tmp_copy_2 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_12_12;

#line 1506 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_2 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0__tmp_copy_2;
#line 1506 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 1506 "llds_out_file.m"
            }
#line 1506 "llds_out_file.m"
            continue;
#line 1504 "llds_out_file.m"
          }
#line 1503 "llds_out_file.m"
      }
#line 1503 "llds_out_file.m"
      break;
#line 1503 "llds_out_file.m"
    }
#line 1500 "llds_out_file.m"
}

#line 1490 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__delete_any_label_3_p_0(
#line 1490 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__CodeAddr_4,
#line 1490 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_7,
#line 1490 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_8)
#line 1490 "llds_out_file.m"
{
#line 1496 "llds_out_file.m"
  {
#line 1496 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__CodeAddr_4)) == (MR_mktag((MR_Integer) 1)));
#line 1496 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__Label_6;

#line 1494 "llds_out_file.m"
    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1494 "llds_out_file.m"
      {
#line 1494 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__Label_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__CodeAddr_4, (MR_Integer) 0)));
#line 1495 "llds_out_file.m"
        {
#line 1495 "llds_out_file.m"
          mercury__set_tree234__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_6)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_7, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_8);
#line 1495 "llds_out_file.m"
          return;
        }
#line 1494 "llds_out_file.m"
      }
#line 1494 "llds_out_file.m"
    else
#line 1495 "llds_out_file.m"
      *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_8 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_7;
#line 1496 "llds_out_file.m"
  }
#line 1490 "llds_out_file.m"
}

#line 1313 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__find_while_labels_to_define_5_p_0(
#line 1313 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 1313 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2,
#line 1313 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__WhileLabels_3,
#line 1313 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4,
#line 1313 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_5)
#line 1313 "llds_out_file.m"
{
#line 1317 "llds_out_file.m"
  while (MR_TRUE)
#line 1317 "llds_out_file.m"
    {
#line 1317 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 1317 "llds_out_file.m"
      {
#line 1317 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 1317 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1317 "llds_out_file.m"
          *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_5 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4;
#line 1317 "llds_out_file.m"
        else
#line 1319 "llds_out_file.m"
          {
#line 1319 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Instr0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 1319 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Instrs0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 1319 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Uinstr0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Instr0_11, (MR_Integer) 0)));
#line 1319 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19;
#line 1319 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145;
#line 1320 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Instr0_11, (MR_Integer) 1)));

#line 1328 "llds_out_file.m"
            if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1380 "llds_out_file.m"
              {
#line 1380 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__Lval_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1380 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__LvalCodeAddrs_39;
#line 1380 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_135_135;
#line 1380 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__Rval_153 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1380 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__RvalCodeAddrs_154;
#line 1381 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__V_40_40;
#line 1382 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__V_41_41;

#line 1381 "llds_out_file.m"
                {
#line 1381 "llds_out_file.m"
                  ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Lval_38, &ll_backend__llds_out__llds_out_file__LvalCodeAddrs_39, &ll_backend__llds_out__llds_out_file__V_40_40);
                }
#line 1382 "llds_out_file.m"
                {
#line 1382 "llds_out_file.m"
                  ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Rval_153, &ll_backend__llds_out__llds_out_file__RvalCodeAddrs_154, &ll_backend__llds_out__llds_out_file__V_41_41);
                }
#line 1383 "llds_out_file.m"
                {
#line 1383 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__LvalCodeAddrs_39, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_135_135);
                }
#line 1384 "llds_out_file.m"
                {
#line 1384 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__RvalCodeAddrs_154, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_135_135, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                }
#line 1385 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1380 "llds_out_file.m"
              }
#line 1328 "llds_out_file.m"
            else
#line 1328 "llds_out_file.m"
              if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1363 "llds_out_file.m"
                {
#line 1363 "llds_out_file.m"
                  MR_Word ll_backend__llds_out__llds_out_file__BlockInstrs_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 3)));
#line 1363 "llds_out_file.m"
                  MR_Integer ll_backend__llds_out__llds_out_file__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1363 "llds_out_file.m"
                  MR_Integer ll_backend__llds_out__llds_out_file__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));

#line 1364 "llds_out_file.m"
                  {
#line 1364 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__find_while_labels_to_define_5_p_0(ll_backend__llds_out__llds_out_file__BlockInstrs_34, ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2, ll_backend__llds_out__llds_out_file__WhileLabels_3, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                  }
#line 1367 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1363 "llds_out_file.m"
                }
#line 1328 "llds_out_file.m"
              else
#line 1328 "llds_out_file.m"
                if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1352 "llds_out_file.m"
                  {
#line 1352 "llds_out_file.m"
                    MR_Word ll_backend__llds_out__llds_out_file__MaybeTargets_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1352 "llds_out_file.m"
                    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_141_141;
#line 1352 "llds_out_file.m"
                    MR_Word ll_backend__llds_out__llds_out_file__Rval_150 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1352 "llds_out_file.m"
                    MR_Word ll_backend__llds_out__llds_out_file__RvalCodeAddrs_151;
#line 1353 "llds_out_file.m"
                    MR_Word ll_backend__llds_out__llds_out_file__V_26_26;

#line 1353 "llds_out_file.m"
                    {
#line 1353 "llds_out_file.m"
                      ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Rval_150, &ll_backend__llds_out__llds_out_file__RvalCodeAddrs_151, &ll_backend__llds_out__llds_out_file__V_26_26);
                    }
#line 1354 "llds_out_file.m"
                    {
#line 1354 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__RvalCodeAddrs_151, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_141_141);
                    }
#line 1355 "llds_out_file.m"
                    {
#line 1355 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__delete_any_maybe_labels_3_p_0(ll_backend__llds_out__llds_out_file__MaybeTargets_25, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_141_141, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                    }
#line 1356 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1352 "llds_out_file.m"
                  }
#line 1328 "llds_out_file.m"
                else
#line 1328 "llds_out_file.m"
                  if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 27))))
#line 1428 "llds_out_file.m"
                    {
#line 1428 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__MaybeFixNoLayoutLabel_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 4)));
#line 1428 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__MaybeFixLayoutLabel_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 5)));
#line 1428 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__MaybeFixOnlyLayoutLabel_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 6)));
#line 1428 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__MaybeNoFixLabel_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 7)));
#line 1428 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__MaybeHashDefLabel_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 8)));
#line 1428 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_125_125;
#line 1428 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_126_126;
#line 1428 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_127_127;
#line 1428 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_128_128;
#line 1426 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1426 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1426 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 3)));
#line 1426 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 9)));
#line 1426 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 10)));

#line 1429 "llds_out_file.m"
                      {
#line 1429 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_maybe_label_3_p_0(ll_backend__llds_out__llds_out_file__MaybeFixNoLayoutLabel_70, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_125_125);
                      }
#line 1430 "llds_out_file.m"
                      {
#line 1430 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_maybe_label_3_p_0(ll_backend__llds_out__llds_out_file__MaybeFixLayoutLabel_71, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_125_125, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_126_126);
                      }
#line 1431 "llds_out_file.m"
                      {
#line 1431 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_maybe_label_3_p_0(ll_backend__llds_out__llds_out_file__MaybeFixOnlyLayoutLabel_72, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_126_126, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_127_127);
                      }
#line 1432 "llds_out_file.m"
                      {
#line 1432 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_maybe_label_3_p_0(ll_backend__llds_out__llds_out_file__MaybeNoFixLabel_73, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_127_127, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_128_128);
                      }
#line 1433 "llds_out_file.m"
                      {
#line 1433 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_maybe_label_3_p_0(ll_backend__llds_out__llds_out_file__MaybeHashDefLabel_74, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_128_128, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                      }
#line 1434 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1428 "llds_out_file.m"
                    }
#line 1328 "llds_out_file.m"
                  else
#line 1328 "llds_out_file.m"
                    if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 29))))
#line 1396 "llds_out_file.m"
                      {
#line 1396 "llds_out_file.m"
                        MR_Word ll_backend__llds_out__llds_out_file__Lval_155 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1396 "llds_out_file.m"
                        MR_Word ll_backend__llds_out__llds_out_file__LvalCodeAddrs_156;
#line 1393 "llds_out_file.m"
                        MR_Word ll_backend__llds_out__llds_out_file__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1397 "llds_out_file.m"
                        MR_Word ll_backend__llds_out__llds_out_file__V_47_47;

#line 1397 "llds_out_file.m"
                        {
#line 1397 "llds_out_file.m"
                          ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Lval_155, &ll_backend__llds_out__llds_out_file__LvalCodeAddrs_156, &ll_backend__llds_out__llds_out_file__V_47_47);
                        }
#line 1398 "llds_out_file.m"
                        {
#line 1398 "llds_out_file.m"
                          ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__LvalCodeAddrs_156, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                        }
#line 1399 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1396 "llds_out_file.m"
                      }
#line 1328 "llds_out_file.m"
                    else
#line 1328 "llds_out_file.m"
                      if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 1406 "llds_out_file.m"
                        {
#line 1406 "llds_out_file.m"
                          MR_Word ll_backend__llds_out__llds_out_file__Rval_157 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1406 "llds_out_file.m"
                          MR_Word ll_backend__llds_out__llds_out_file__RvalCodeAddrs_158;
#line 1407 "llds_out_file.m"
                          MR_Word ll_backend__llds_out__llds_out_file__V_51_51;

#line 1407 "llds_out_file.m"
                          {
#line 1407 "llds_out_file.m"
                            ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Rval_157, &ll_backend__llds_out__llds_out_file__RvalCodeAddrs_158, &ll_backend__llds_out__llds_out_file__V_51_51);
                          }
#line 1408 "llds_out_file.m"
                          {
#line 1408 "llds_out_file.m"
                            ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__RvalCodeAddrs_158, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                          }
#line 1409 "llds_out_file.m"
                          ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1406 "llds_out_file.m"
                        }
#line 1328 "llds_out_file.m"
                      else
#line 1328 "llds_out_file.m"
                        if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1344 "llds_out_file.m"
                          {
#line 1344 "llds_out_file.m"
                            MR_Word ll_backend__llds_out__llds_out_file__Target_148 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1347 "llds_out_file.m"
                            MR_Word ll_backend__llds_out__llds_out_file__TargetLabel_147;

#line 1345 "llds_out_file.m"
                            ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Target_148)) == (MR_mktag((MR_Integer) 1)));
#line 1345 "llds_out_file.m"
                            if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1345 "llds_out_file.m"
                              {
#line 1345 "llds_out_file.m"
                                ll_backend__llds_out__llds_out_file__TargetLabel_147 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__Target_148, (MR_Integer) 0)));
#line 1346 "llds_out_file.m"
                                {
#line 1346 "llds_out_file.m"
                                  mercury__set_tree234__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__llds_out__llds_out_file__TargetLabel_147)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                                }
#line 1345 "llds_out_file.m"
                              }
#line 1345 "llds_out_file.m"
                            else
#line 1346 "llds_out_file.m"
                              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4;
#line 1350 "llds_out_file.m"
                            ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1344 "llds_out_file.m"
                          }
#line 1328 "llds_out_file.m"
                        else
#line 1328 "llds_out_file.m"
                          if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 1329 "llds_out_file.m"
                            {
#line 1329 "llds_out_file.m"
                              MR_Word ll_backend__llds_out__llds_out_file__Rval_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1329 "llds_out_file.m"
                              MR_Word ll_backend__llds_out__llds_out_file__Target_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1329 "llds_out_file.m"
                              MR_Word ll_backend__llds_out__llds_out_file__RvalCodeAddrs_22;
#line 1329 "llds_out_file.m"
                              MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_144_144;
#line 1330 "llds_out_file.m"
                              MR_Word ll_backend__llds_out__llds_out_file__V_23_23;
#line 1339 "llds_out_file.m"
                              MR_Word ll_backend__llds_out__llds_out_file__TargetLabel_24;

#line 1330 "llds_out_file.m"
                              {
#line 1330 "llds_out_file.m"
                                ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Rval_20, &ll_backend__llds_out__llds_out_file__RvalCodeAddrs_22, &ll_backend__llds_out__llds_out_file__V_23_23);
                              }
#line 1331 "llds_out_file.m"
                              {
#line 1331 "llds_out_file.m"
                                ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__RvalCodeAddrs_22, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_144_144);
                              }
#line 1332 "llds_out_file.m"
                              ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Target_21)) == (MR_mktag((MR_Integer) 1)));
#line 1332 "llds_out_file.m"
                              if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1332 "llds_out_file.m"
                                {
#line 1332 "llds_out_file.m"
                                  ll_backend__llds_out__llds_out_file__TargetLabel_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__Target_21, (MR_Integer) 0)));
#line 1336 "llds_out_file.m"
                                  {
#line 1333 "llds_out_file.m"
                                    MR_Word ll_backend__llds_out__llds_out_file__V_174_174;

#line 1333 "llds_out_file.m"
                                    ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2)) == (MR_mktag((MR_Integer) 1)));
#line 1333 "llds_out_file.m"
                                    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1333 "llds_out_file.m"
                                      {
#line 1333 "llds_out_file.m"
                                        ll_backend__llds_out__llds_out_file__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2, (MR_Integer) 0)));
#line 1333 "llds_out_file.m"
                                        {
#line 1333 "llds_out_file.m"
                                          ll_backend__llds_out__llds_out_file__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__llds_out__llds_out_file__TargetLabel_24, ll_backend__llds_out__llds_out_file__V_174_174);
                                        }
#line 1333 "llds_out_file.m"
                                      }
#line 1336 "llds_out_file.m"
                                    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1333 "llds_out_file.m"
                                      ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_144_144;
#line 1336 "llds_out_file.m"
                                    else
#line 1337 "llds_out_file.m"
                                      {
#line 1337 "llds_out_file.m"
                                        {
#line 1337 "llds_out_file.m"
                                          mercury__set_tree234__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__llds_out__llds_out_file__TargetLabel_24)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_144_144, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                                        }
#line 1337 "llds_out_file.m"
                                      }
#line 1336 "llds_out_file.m"
                                  }
#line 1332 "llds_out_file.m"
                                }
#line 1332 "llds_out_file.m"
                              else
#line 1337 "llds_out_file.m"
                                ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_144_144;
#line 1342 "llds_out_file.m"
                              ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1329 "llds_out_file.m"
                            }
#line 1328 "llds_out_file.m"
                          else
#line 1328 "llds_out_file.m"
                            if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 1412 "llds_out_file.m"
                              {
#line 1412 "llds_out_file.m"
                                MR_Word ll_backend__llds_out__llds_out_file__TargetLval_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1412 "llds_out_file.m"
                                MR_Word ll_backend__llds_out__llds_out_file__SizeRval_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 4)));
#line 1412 "llds_out_file.m"
                                MR_Word ll_backend__llds_out__llds_out_file__MaybeRegionIdRval_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 7)));
#line 1412 "llds_out_file.m"
                                MR_Word ll_backend__llds_out__llds_out_file__TargetLvalCodeAddrs_60;
#line 1412 "llds_out_file.m"
                                MR_Word ll_backend__llds_out__llds_out_file__SizeRvalCodeAddrs_62;
#line 1412 "llds_out_file.m"
                                MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_130_130;
#line 1412 "llds_out_file.m"
                                MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_131_131;
#line 1411 "llds_out_file.m"
                                MR_Word ll_backend__llds_out__llds_out_file__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1411 "llds_out_file.m"
                                MR_Word ll_backend__llds_out__llds_out_file__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 3)));
#line 1411 "llds_out_file.m"
                                MR_Word ll_backend__llds_out__llds_out_file__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 5)));
#line 1411 "llds_out_file.m"
                                MR_Word ll_backend__llds_out__llds_out_file__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 6)));
#line 1411 "llds_out_file.m"
                                MR_Word ll_backend__llds_out__llds_out_file__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 8)));
#line 1413 "llds_out_file.m"
                                MR_Word ll_backend__llds_out__llds_out_file__V_61_61;
#line 1414 "llds_out_file.m"
                                MR_Word ll_backend__llds_out__llds_out_file__V_63_63;

#line 1413 "llds_out_file.m"
                                {
#line 1413 "llds_out_file.m"
                                  ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__TargetLval_52, &ll_backend__llds_out__llds_out_file__TargetLvalCodeAddrs_60, &ll_backend__llds_out__llds_out_file__V_61_61);
                                }
#line 1414 "llds_out_file.m"
                                {
#line 1414 "llds_out_file.m"
                                  ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__SizeRval_55, &ll_backend__llds_out__llds_out_file__SizeRvalCodeAddrs_62, &ll_backend__llds_out__llds_out_file__V_63_63);
                                }
#line 1415 "llds_out_file.m"
                                {
#line 1415 "llds_out_file.m"
                                  ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__TargetLvalCodeAddrs_60, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_130_130);
                                }
#line 1416 "llds_out_file.m"
                                {
#line 1416 "llds_out_file.m"
                                  ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__SizeRvalCodeAddrs_62, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_130_130, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_131_131);
                                }
#line 1419 "llds_out_file.m"
                                if ((ll_backend__llds_out__llds_out_file__MaybeRegionIdRval_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1418 "llds_out_file.m"
                                  ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_131_131;
#line 1419 "llds_out_file.m"
                                else
#line 1420 "llds_out_file.m"
                                  {
#line 1420 "llds_out_file.m"
                                    MR_Word ll_backend__llds_out__llds_out_file__RegionIdRval_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__MaybeRegionIdRval_58, (MR_Integer) 0)));
#line 1420 "llds_out_file.m"
                                    MR_Word ll_backend__llds_out__llds_out_file__RegionIdRvalCodeAddrs_65;
#line 1421 "llds_out_file.m"
                                    MR_Word ll_backend__llds_out__llds_out_file__V_66_66;

#line 1421 "llds_out_file.m"
                                    {
#line 1421 "llds_out_file.m"
                                      ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__RegionIdRval_64, &ll_backend__llds_out__llds_out_file__RegionIdRvalCodeAddrs_65, &ll_backend__llds_out__llds_out_file__V_66_66);
                                    }
#line 1422 "llds_out_file.m"
                                    {
#line 1422 "llds_out_file.m"
                                      ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__RegionIdRvalCodeAddrs_65, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_131_131, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                                    }
#line 1420 "llds_out_file.m"
                                  }
#line 1424 "llds_out_file.m"
                                ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1412 "llds_out_file.m"
                              }
#line 1328 "llds_out_file.m"
                            else
#line 1328 "llds_out_file.m"
                              if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 28))))
#line 1396 "llds_out_file.m"
                                {
#line 1396 "llds_out_file.m"
                                  MR_Word ll_backend__llds_out__llds_out_file__Lval_177 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1396 "llds_out_file.m"
                                  MR_Word ll_backend__llds_out__llds_out_file__LvalCodeAddrs_178;
#line 1392 "llds_out_file.m"
                                  MR_Integer ll_backend__llds_out__llds_out_file__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1392 "llds_out_file.m"
                                  MR_Integer ll_backend__llds_out__llds_out_file__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 3)));
#line 1397 "llds_out_file.m"
                                  MR_Word ll_backend__llds_out__llds_out_file__V_175_175;

#line 1397 "llds_out_file.m"
                                  {
#line 1397 "llds_out_file.m"
                                    ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Lval_177, &ll_backend__llds_out__llds_out_file__LvalCodeAddrs_178, &ll_backend__llds_out__llds_out_file__V_175_175);
                                  }
#line 1398 "llds_out_file.m"
                                  {
#line 1398 "llds_out_file.m"
                                    ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__LvalCodeAddrs_178, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                                  }
#line 1399 "llds_out_file.m"
                                  ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1396 "llds_out_file.m"
                                }
#line 1328 "llds_out_file.m"
                              else
#line 1328 "llds_out_file.m"
                                if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 30))))
#line 1396 "llds_out_file.m"
                                  {
#line 1396 "llds_out_file.m"
                                    MR_Word ll_backend__llds_out__llds_out_file__Lval_181 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1396 "llds_out_file.m"
                                    MR_Word ll_backend__llds_out__llds_out_file__LvalCodeAddrs_182;
#line 1394 "llds_out_file.m"
                                    MR_Word ll_backend__llds_out__llds_out_file__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1397 "llds_out_file.m"
                                    MR_Word ll_backend__llds_out__llds_out_file__V_179_179;

#line 1397 "llds_out_file.m"
                                    {
#line 1397 "llds_out_file.m"
                                      ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Lval_181, &ll_backend__llds_out__llds_out_file__LvalCodeAddrs_182, &ll_backend__llds_out__llds_out_file__V_179_179);
                                    }
#line 1398 "llds_out_file.m"
                                    {
#line 1398 "llds_out_file.m"
                                      ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__LvalCodeAddrs_182, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                                    }
#line 1399 "llds_out_file.m"
                                    ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1396 "llds_out_file.m"
                                  }
#line 1328 "llds_out_file.m"
                                else
#line 1328 "llds_out_file.m"
                                  if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1380 "llds_out_file.m"
                                    {
#line 1380 "llds_out_file.m"
                                      MR_Word ll_backend__llds_out__llds_out_file__Lval_185 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1380 "llds_out_file.m"
                                      MR_Word ll_backend__llds_out__llds_out_file__LvalCodeAddrs_186;
#line 1380 "llds_out_file.m"
                                      MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_135_189;
#line 1380 "llds_out_file.m"
                                      MR_Word ll_backend__llds_out__llds_out_file__Rval_190 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1380 "llds_out_file.m"
                                      MR_Word ll_backend__llds_out__llds_out_file__RvalCodeAddrs_191;
#line 1381 "llds_out_file.m"
                                      MR_Word ll_backend__llds_out__llds_out_file__V_183_183;
#line 1382 "llds_out_file.m"
                                      MR_Word ll_backend__llds_out__llds_out_file__V_184_184;

#line 1381 "llds_out_file.m"
                                      {
#line 1381 "llds_out_file.m"
                                        ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Lval_185, &ll_backend__llds_out__llds_out_file__LvalCodeAddrs_186, &ll_backend__llds_out__llds_out_file__V_183_183);
                                      }
#line 1382 "llds_out_file.m"
                                      {
#line 1382 "llds_out_file.m"
                                        ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Rval_190, &ll_backend__llds_out__llds_out_file__RvalCodeAddrs_191, &ll_backend__llds_out__llds_out_file__V_184_184);
                                      }
#line 1383 "llds_out_file.m"
                                      {
#line 1383 "llds_out_file.m"
                                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__LvalCodeAddrs_186, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_135_189);
                                      }
#line 1384 "llds_out_file.m"
                                      {
#line 1384 "llds_out_file.m"
                                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__RvalCodeAddrs_191, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_135_189, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                                      }
#line 1385 "llds_out_file.m"
                                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1380 "llds_out_file.m"
                                    }
#line 1328 "llds_out_file.m"
                                  else
#line 1328 "llds_out_file.m"
                                    if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1322 "llds_out_file.m"
                                      {
#line 1322 "llds_out_file.m"
                                        MR_Word ll_backend__llds_out__llds_out_file__Label_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));

#line 1323 "llds_out_file.m"
                                        {
#line 1323 "llds_out_file.m"
                                          ll_backend__llds_out__llds_out_file__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ll_backend__llds_out__llds_out_file__WhileLabels_3, ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_18)));
                                        }
#line 1325 "llds_out_file.m"
                                        if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1324 "llds_out_file.m"
                                          {
#line 1324 "llds_out_file.m"
                                            ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1324 "llds_out_file.m"
                                            MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_18));
#line 1324 "llds_out_file.m"
                                          }
#line 1325 "llds_out_file.m"
                                        else
#line 1326 "llds_out_file.m"
                                          ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1326 "llds_out_file.m"
                                        ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4;
#line 1322 "llds_out_file.m"
                                      }
#line 1328 "llds_out_file.m"
                                    else
#line 1328 "llds_out_file.m"
                                      if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 31))))
#line 1396 "llds_out_file.m"
                                        {
#line 1396 "llds_out_file.m"
                                          MR_Word ll_backend__llds_out__llds_out_file__Lval_194 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1396 "llds_out_file.m"
                                          MR_Word ll_backend__llds_out__llds_out_file__LvalCodeAddrs_195;
#line 1395 "llds_out_file.m"
                                          MR_Integer ll_backend__llds_out__llds_out_file__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1397 "llds_out_file.m"
                                          MR_Word ll_backend__llds_out__llds_out_file__V_192_192;

#line 1397 "llds_out_file.m"
                                          {
#line 1397 "llds_out_file.m"
                                            ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Lval_194, &ll_backend__llds_out__llds_out_file__LvalCodeAddrs_195, &ll_backend__llds_out__llds_out_file__V_192_192);
                                          }
#line 1398 "llds_out_file.m"
                                          {
#line 1398 "llds_out_file.m"
                                            ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__LvalCodeAddrs_195, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                                          }
#line 1399 "llds_out_file.m"
                                          ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1396 "llds_out_file.m"
                                        }
#line 1328 "llds_out_file.m"
                                      else
#line 1328 "llds_out_file.m"
                                        if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 34))))
#line 1461 "llds_out_file.m"
                                          {
#line 1461 "llds_out_file.m"
                                            MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_114_114;
#line 1461 "llds_out_file.m"
                                            MR_Word ll_backend__llds_out__llds_out_file__LoopControlRval_165 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1461 "llds_out_file.m"
                                            MR_Word ll_backend__llds_out__llds_out_file__LoopControlRvalCodeAddrs_166;
#line 1461 "llds_out_file.m"
                                            MR_Word ll_backend__llds_out__llds_out_file__SlotRval_167 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1461 "llds_out_file.m"
                                            MR_Word ll_backend__llds_out__llds_out_file__SlotRvalCodeAddrs_168;
#line 1462 "llds_out_file.m"
                                            MR_Word ll_backend__llds_out__llds_out_file__V_96_96;
#line 1463 "llds_out_file.m"
                                            MR_Word ll_backend__llds_out__llds_out_file__V_97_97;

#line 1462 "llds_out_file.m"
                                            {
#line 1462 "llds_out_file.m"
                                              ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__LoopControlRval_165, &ll_backend__llds_out__llds_out_file__LoopControlRvalCodeAddrs_166, &ll_backend__llds_out__llds_out_file__V_96_96);
                                            }
#line 1463 "llds_out_file.m"
                                            {
#line 1463 "llds_out_file.m"
                                              ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__SlotRval_167, &ll_backend__llds_out__llds_out_file__SlotRvalCodeAddrs_168, &ll_backend__llds_out__llds_out_file__V_97_97);
                                            }
#line 1464 "llds_out_file.m"
                                            {
#line 1464 "llds_out_file.m"
                                              ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__LoopControlRvalCodeAddrs_166, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_114_114);
                                            }
#line 1465 "llds_out_file.m"
                                            {
#line 1465 "llds_out_file.m"
                                              ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__SlotRvalCodeAddrs_168, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_114_114, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                                            }
#line 1466 "llds_out_file.m"
                                            ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1461 "llds_out_file.m"
                                          }
#line 1328 "llds_out_file.m"
                                        else
#line 1328 "llds_out_file.m"
                                          if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 33))))
#line 1453 "llds_out_file.m"
                                            {
#line 1453 "llds_out_file.m"
                                              MR_Word ll_backend__llds_out__llds_out_file__SlotRval_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1453 "llds_out_file.m"
                                              MR_Word ll_backend__llds_out__llds_out_file__SlotRvalCodeAddrs_94;
#line 1453 "llds_out_file.m"
                                              MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_116_116;
#line 1453 "llds_out_file.m"
                                              MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_117_117;
#line 1453 "llds_out_file.m"
                                              MR_Word ll_backend__llds_out__llds_out_file__Label_162 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 3)));
#line 1453 "llds_out_file.m"
                                              MR_Word ll_backend__llds_out__llds_out_file__LoopControlRval_163 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1453 "llds_out_file.m"
                                              MR_Word ll_backend__llds_out__llds_out_file__LoopControlRvalCodeAddrs_164;
#line 1454 "llds_out_file.m"
                                              MR_Word ll_backend__llds_out__llds_out_file__V_93_93;
#line 1455 "llds_out_file.m"
                                              MR_Word ll_backend__llds_out__llds_out_file__V_95_95;

#line 1454 "llds_out_file.m"
                                              {
#line 1454 "llds_out_file.m"
                                                ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__LoopControlRval_163, &ll_backend__llds_out__llds_out_file__LoopControlRvalCodeAddrs_164, &ll_backend__llds_out__llds_out_file__V_93_93);
                                              }
#line 1455 "llds_out_file.m"
                                              {
#line 1455 "llds_out_file.m"
                                                ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__SlotRval_92, &ll_backend__llds_out__llds_out_file__SlotRvalCodeAddrs_94, &ll_backend__llds_out__llds_out_file__V_95_95);
                                              }
#line 1456 "llds_out_file.m"
                                              {
#line 1456 "llds_out_file.m"
                                                ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__LoopControlRvalCodeAddrs_164, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_116_116);
                                              }
#line 1457 "llds_out_file.m"
                                              {
#line 1457 "llds_out_file.m"
                                                ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__SlotRvalCodeAddrs_94, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_116_116, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_117_117);
                                              }
#line 1458 "llds_out_file.m"
                                              {
#line 1458 "llds_out_file.m"
                                                mercury__set_tree234__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_162)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_117_117, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                                              }
#line 1459 "llds_out_file.m"
                                              ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1453 "llds_out_file.m"
                                            }
#line 1328 "llds_out_file.m"
                                          else
#line 1328 "llds_out_file.m"
                                            if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 32))))
#line 1445 "llds_out_file.m"
                                              {
#line 1445 "llds_out_file.m"
                                                MR_Word ll_backend__llds_out__llds_out_file__LoopControlRval_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1445 "llds_out_file.m"
                                                MR_Word ll_backend__llds_out__llds_out_file__SlotLval_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1445 "llds_out_file.m"
                                                MR_Word ll_backend__llds_out__llds_out_file__LoopControlRvalCodeAddrs_88;
#line 1445 "llds_out_file.m"
                                                MR_Word ll_backend__llds_out__llds_out_file__SlotLvalCodeAddrs_90;
#line 1445 "llds_out_file.m"
                                                MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_119_119;
#line 1445 "llds_out_file.m"
                                                MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_120_120;
#line 1445 "llds_out_file.m"
                                                MR_Word ll_backend__llds_out__llds_out_file__Label_161 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 3)));
#line 1446 "llds_out_file.m"
                                                MR_Word ll_backend__llds_out__llds_out_file__V_89_89;
#line 1447 "llds_out_file.m"
                                                MR_Word ll_backend__llds_out__llds_out_file__V_91_91;

#line 1446 "llds_out_file.m"
                                                {
#line 1446 "llds_out_file.m"
                                                  ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__LoopControlRval_86, &ll_backend__llds_out__llds_out_file__LoopControlRvalCodeAddrs_88, &ll_backend__llds_out__llds_out_file__V_89_89);
                                                }
#line 1447 "llds_out_file.m"
                                                {
#line 1447 "llds_out_file.m"
                                                  ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__SlotLval_87, &ll_backend__llds_out__llds_out_file__SlotLvalCodeAddrs_90, &ll_backend__llds_out__llds_out_file__V_91_91);
                                                }
#line 1448 "llds_out_file.m"
                                                {
#line 1448 "llds_out_file.m"
                                                  ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__LoopControlRvalCodeAddrs_88, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_119_119);
                                                }
#line 1449 "llds_out_file.m"
                                                {
#line 1449 "llds_out_file.m"
                                                  ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__SlotLvalCodeAddrs_90, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_119_119, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_120_120);
                                                }
#line 1450 "llds_out_file.m"
                                                {
#line 1450 "llds_out_file.m"
                                                  mercury__set_tree234__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_161)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_120_120, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                                                }
#line 1451 "llds_out_file.m"
                                                ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1445 "llds_out_file.m"
                                              }
#line 1328 "llds_out_file.m"
                                            else
#line 1328 "llds_out_file.m"
                                              if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1358 "llds_out_file.m"
                                                {
#line 1358 "llds_out_file.m"
                                                  MR_Word ll_backend__llds_out__llds_out_file__Continuation_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1358 "llds_out_file.m"
                                                  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_139_139;
#line 1358 "llds_out_file.m"
                                                  MR_Word ll_backend__llds_out__llds_out_file__Target_152 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1358 "llds_out_file.m"
                                                  MR_Word ll_backend__llds_out__llds_out_file__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 3)));
#line 1358 "llds_out_file.m"
                                                  MR_Word ll_backend__llds_out__llds_out_file__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 4)));
#line 1358 "llds_out_file.m"
                                                  MR_Word ll_backend__llds_out__llds_out_file__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 5)));
#line 1358 "llds_out_file.m"
                                                  MR_Word ll_backend__llds_out__llds_out_file__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 6)));

#line 1359 "llds_out_file.m"
                                                  {
#line 1359 "llds_out_file.m"
                                                    ll_backend__llds_out__llds_out_file__delete_any_label_3_p_0(ll_backend__llds_out__llds_out_file__Target_152, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_139_139);
                                                  }
#line 1360 "llds_out_file.m"
                                                  {
#line 1360 "llds_out_file.m"
                                                    ll_backend__llds_out__llds_out_file__delete_any_label_3_p_0(ll_backend__llds_out__llds_out_file__Continuation_27, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_139_139, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                                                  }
#line 1361 "llds_out_file.m"
                                                  ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1358 "llds_out_file.m"
                                                }
#line 1328 "llds_out_file.m"
                                              else
#line 1328 "llds_out_file.m"
                                                if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 1396 "llds_out_file.m"
                                                  {
#line 1396 "llds_out_file.m"
                                                    MR_Word ll_backend__llds_out__llds_out_file__Lval_198 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1396 "llds_out_file.m"
                                                    MR_Word ll_backend__llds_out__llds_out_file__LvalCodeAddrs_199;
#line 1397 "llds_out_file.m"
                                                    MR_Word ll_backend__llds_out__llds_out_file__V_196_196;

#line 1397 "llds_out_file.m"
                                                    {
#line 1397 "llds_out_file.m"
                                                      ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Lval_198, &ll_backend__llds_out__llds_out_file__LvalCodeAddrs_199, &ll_backend__llds_out__llds_out_file__V_196_196);
                                                    }
#line 1398 "llds_out_file.m"
                                                    {
#line 1398 "llds_out_file.m"
                                                      ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__LvalCodeAddrs_199, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                                                    }
#line 1399 "llds_out_file.m"
                                                    ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1396 "llds_out_file.m"
                                                  }
#line 1328 "llds_out_file.m"
                                                else
#line 1328 "llds_out_file.m"
                                                  if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 22))))
#line 1396 "llds_out_file.m"
                                                    {
#line 1396 "llds_out_file.m"
                                                      MR_Word ll_backend__llds_out__llds_out_file__Lval_202 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1396 "llds_out_file.m"
                                                      MR_Word ll_backend__llds_out__llds_out_file__LvalCodeAddrs_203;
#line 1397 "llds_out_file.m"
                                                      MR_Word ll_backend__llds_out__llds_out_file__V_200_200;

#line 1397 "llds_out_file.m"
                                                      {
#line 1397 "llds_out_file.m"
                                                        ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Lval_202, &ll_backend__llds_out__llds_out_file__LvalCodeAddrs_203, &ll_backend__llds_out__llds_out_file__V_200_200);
                                                      }
#line 1398 "llds_out_file.m"
                                                      {
#line 1398 "llds_out_file.m"
                                                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__LvalCodeAddrs_203, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                                                      }
#line 1399 "llds_out_file.m"
                                                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1396 "llds_out_file.m"
                                                    }
#line 1328 "llds_out_file.m"
                                                  else
#line 1328 "llds_out_file.m"
                                                    if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1369 "llds_out_file.m"
                                                      {
#line 1369 "llds_out_file.m"
                                                        MR_Word ll_backend__llds_out__llds_out_file__MaybeNextCodeAddr_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1369 "llds_out_file.m"
                                                        MR_Word ll_backend__llds_out__llds_out_file__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));

#line 1373 "llds_out_file.m"
                                                        if ((ll_backend__llds_out__llds_out_file__MaybeNextCodeAddr_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1374 "llds_out_file.m"
                                                          ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4;
#line 1373 "llds_out_file.m"
                                                        else
#line 1371 "llds_out_file.m"
                                                          {
#line 1371 "llds_out_file.m"
                                                            MR_Word ll_backend__llds_out__llds_out_file__NextCodeAddr_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__MaybeNextCodeAddr_36, (MR_Integer) 0)));

#line 1372 "llds_out_file.m"
                                                            {
#line 1372 "llds_out_file.m"
                                                              ll_backend__llds_out__llds_out_file__delete_any_label_3_p_0(ll_backend__llds_out__llds_out_file__NextCodeAddr_37, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                                                            }
#line 1371 "llds_out_file.m"
                                                          }
#line 1376 "llds_out_file.m"
                                                        ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1369 "llds_out_file.m"
                                                      }
#line 1328 "llds_out_file.m"
                                                    else
#line 1328 "llds_out_file.m"
                                                      if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 23))))
#line 1406 "llds_out_file.m"
                                                        {
#line 1406 "llds_out_file.m"
                                                          MR_Word ll_backend__llds_out__llds_out_file__Rval_206 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1406 "llds_out_file.m"
                                                          MR_Word ll_backend__llds_out__llds_out_file__RvalCodeAddrs_207;
#line 1407 "llds_out_file.m"
                                                          MR_Word ll_backend__llds_out__llds_out_file__V_204_204;

#line 1407 "llds_out_file.m"
                                                          {
#line 1407 "llds_out_file.m"
                                                            ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Rval_206, &ll_backend__llds_out__llds_out_file__RvalCodeAddrs_207, &ll_backend__llds_out__llds_out_file__V_204_204);
                                                          }
#line 1408 "llds_out_file.m"
                                                          {
#line 1408 "llds_out_file.m"
                                                            ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__RvalCodeAddrs_207, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                                                          }
#line 1409 "llds_out_file.m"
                                                          ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1406 "llds_out_file.m"
                                                        }
#line 1328 "llds_out_file.m"
                                                      else
#line 1328 "llds_out_file.m"
                                                        if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 17))))
#line 1436 "llds_out_file.m"
                                                          {
#line 1436 "llds_out_file.m"
                                                            MR_Word ll_backend__llds_out__llds_out_file__NumLval_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 4)));
#line 1436 "llds_out_file.m"
                                                            MR_Word ll_backend__llds_out__llds_out_file__AddrLval_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 5)));
#line 1436 "llds_out_file.m"
                                                            MR_Word ll_backend__llds_out__llds_out_file__NumLvalCodeAddrs_82;
#line 1436 "llds_out_file.m"
                                                            MR_Word ll_backend__llds_out__llds_out_file__AddrLvalCodeAddrs_84;
#line 1436 "llds_out_file.m"
                                                            MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_122_122;
#line 1436 "llds_out_file.m"
                                                            MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_123_123;
#line 1436 "llds_out_file.m"
                                                            MR_Word ll_backend__llds_out__llds_out_file__RegionIdRval_159 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 3)));
#line 1436 "llds_out_file.m"
                                                            MR_Word ll_backend__llds_out__llds_out_file__RegionIdRvalCodeAddrs_160;
#line 1436 "llds_out_file.m"
                                                            MR_Word ll_backend__llds_out__llds_out_file__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1436 "llds_out_file.m"
                                                            MR_Word ll_backend__llds_out__llds_out_file__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1437 "llds_out_file.m"
                                                            MR_Word ll_backend__llds_out__llds_out_file__V_81_81;
#line 1438 "llds_out_file.m"
                                                            MR_Word ll_backend__llds_out__llds_out_file__V_83_83;
#line 1439 "llds_out_file.m"
                                                            MR_Word ll_backend__llds_out__llds_out_file__V_85_85;

#line 1437 "llds_out_file.m"
                                                            {
#line 1437 "llds_out_file.m"
                                                              ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__RegionIdRval_159, &ll_backend__llds_out__llds_out_file__RegionIdRvalCodeAddrs_160, &ll_backend__llds_out__llds_out_file__V_81_81);
                                                            }
#line 1438 "llds_out_file.m"
                                                            {
#line 1438 "llds_out_file.m"
                                                              ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__NumLval_79, &ll_backend__llds_out__llds_out_file__NumLvalCodeAddrs_82, &ll_backend__llds_out__llds_out_file__V_83_83);
                                                            }
#line 1439 "llds_out_file.m"
                                                            {
#line 1439 "llds_out_file.m"
                                                              ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__AddrLval_80, &ll_backend__llds_out__llds_out_file__AddrLvalCodeAddrs_84, &ll_backend__llds_out__llds_out_file__V_85_85);
                                                            }
#line 1440 "llds_out_file.m"
                                                            {
#line 1440 "llds_out_file.m"
                                                              ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__RegionIdRvalCodeAddrs_160, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_122_122);
                                                            }
#line 1441 "llds_out_file.m"
                                                            {
#line 1441 "llds_out_file.m"
                                                              ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__NumLvalCodeAddrs_82, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_122_122, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_123_123);
                                                            }
#line 1442 "llds_out_file.m"
                                                            {
#line 1442 "llds_out_file.m"
                                                              ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__AddrLvalCodeAddrs_84, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_123_123, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                                                            }
#line 1443 "llds_out_file.m"
                                                            ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1436 "llds_out_file.m"
                                                          }
#line 1328 "llds_out_file.m"
                                                        else
#line 1328 "llds_out_file.m"
                                                          if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 18))))
#line 1406 "llds_out_file.m"
                                                            {
#line 1406 "llds_out_file.m"
                                                              MR_Word ll_backend__llds_out__llds_out_file__Rval_210 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 3)));
#line 1406 "llds_out_file.m"
                                                              MR_Word ll_backend__llds_out__llds_out_file__RvalCodeAddrs_211;
#line 1403 "llds_out_file.m"
                                                              MR_Word ll_backend__llds_out__llds_out_file__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1403 "llds_out_file.m"
                                                              MR_Word ll_backend__llds_out__llds_out_file__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1407 "llds_out_file.m"
                                                              MR_Word ll_backend__llds_out__llds_out_file__V_208_208;

#line 1407 "llds_out_file.m"
                                                              {
#line 1407 "llds_out_file.m"
                                                                ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Rval_210, &ll_backend__llds_out__llds_out_file__RvalCodeAddrs_211, &ll_backend__llds_out__llds_out_file__V_208_208);
                                                              }
#line 1408 "llds_out_file.m"
                                                              {
#line 1408 "llds_out_file.m"
                                                                ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__RvalCodeAddrs_211, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                                                              }
#line 1409 "llds_out_file.m"
                                                              ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1406 "llds_out_file.m"
                                                            }
#line 1328 "llds_out_file.m"
                                                          else
#line 1328 "llds_out_file.m"
                                                            if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 21))))
#line 1406 "llds_out_file.m"
                                                              {
#line 1406 "llds_out_file.m"
                                                                MR_Word ll_backend__llds_out__llds_out_file__Rval_214 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1406 "llds_out_file.m"
                                                                MR_Word ll_backend__llds_out__llds_out_file__RvalCodeAddrs_215;
#line 1404 "llds_out_file.m"
                                                                MR_Word ll_backend__llds_out__llds_out_file__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1407 "llds_out_file.m"
                                                                MR_Word ll_backend__llds_out__llds_out_file__V_212_212;

#line 1407 "llds_out_file.m"
                                                                {
#line 1407 "llds_out_file.m"
                                                                  ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Rval_214, &ll_backend__llds_out__llds_out_file__RvalCodeAddrs_215, &ll_backend__llds_out__llds_out_file__V_212_212);
                                                                }
#line 1408 "llds_out_file.m"
                                                                {
#line 1408 "llds_out_file.m"
                                                                  ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__RvalCodeAddrs_215, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                                                                }
#line 1409 "llds_out_file.m"
                                                                ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1406 "llds_out_file.m"
                                                              }
#line 1328 "llds_out_file.m"
                                                            else
#line 1328 "llds_out_file.m"
                                                              if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 1406 "llds_out_file.m"
                                                                {
#line 1406 "llds_out_file.m"
                                                                  MR_Word ll_backend__llds_out__llds_out_file__Rval_218 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1406 "llds_out_file.m"
                                                                  MR_Word ll_backend__llds_out__llds_out_file__RvalCodeAddrs_219;
#line 1407 "llds_out_file.m"
                                                                  MR_Word ll_backend__llds_out__llds_out_file__V_216_216;

#line 1407 "llds_out_file.m"
                                                                  {
#line 1407 "llds_out_file.m"
                                                                    ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Rval_218, &ll_backend__llds_out__llds_out_file__RvalCodeAddrs_219, &ll_backend__llds_out__llds_out_file__V_216_216);
                                                                  }
#line 1408 "llds_out_file.m"
                                                                  {
#line 1408 "llds_out_file.m"
                                                                    ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__RvalCodeAddrs_219, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                                                                  }
#line 1409 "llds_out_file.m"
                                                                  ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1406 "llds_out_file.m"
                                                                }
#line 1328 "llds_out_file.m"
                                                              else
#line 1328 "llds_out_file.m"
                                                                if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 1396 "llds_out_file.m"
                                                                  {
#line 1396 "llds_out_file.m"
                                                                    MR_Word ll_backend__llds_out__llds_out_file__Lval_222 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1396 "llds_out_file.m"
                                                                    MR_Word ll_backend__llds_out__llds_out_file__LvalCodeAddrs_223;
#line 1397 "llds_out_file.m"
                                                                    MR_Word ll_backend__llds_out__llds_out_file__V_220_220;

#line 1397 "llds_out_file.m"
                                                                    {
#line 1397 "llds_out_file.m"
                                                                      ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Lval_222, &ll_backend__llds_out__llds_out_file__LvalCodeAddrs_223, &ll_backend__llds_out__llds_out_file__V_220_220);
                                                                    }
#line 1398 "llds_out_file.m"
                                                                    {
#line 1398 "llds_out_file.m"
                                                                      ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__LvalCodeAddrs_223, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                                                                    }
#line 1399 "llds_out_file.m"
                                                                    ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1396 "llds_out_file.m"
                                                                  }
#line 1328 "llds_out_file.m"
                                                                else
#line 1328 "llds_out_file.m"
                                                                  if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 1396 "llds_out_file.m"
                                                                    {
#line 1396 "llds_out_file.m"
                                                                      MR_Word ll_backend__llds_out__llds_out_file__Lval_226 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1396 "llds_out_file.m"
                                                                      MR_Word ll_backend__llds_out__llds_out_file__LvalCodeAddrs_227;
#line 1397 "llds_out_file.m"
                                                                      MR_Word ll_backend__llds_out__llds_out_file__V_224_224;

#line 1397 "llds_out_file.m"
                                                                      {
#line 1397 "llds_out_file.m"
                                                                        ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Lval_226, &ll_backend__llds_out__llds_out_file__LvalCodeAddrs_227, &ll_backend__llds_out__llds_out_file__V_224_224);
                                                                      }
#line 1398 "llds_out_file.m"
                                                                      {
#line 1398 "llds_out_file.m"
                                                                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__LvalCodeAddrs_227, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                                                                      }
#line 1399 "llds_out_file.m"
                                                                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1396 "llds_out_file.m"
                                                                    }
#line 1328 "llds_out_file.m"
                                                                  else
#line 1328 "llds_out_file.m"
                                                                    if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 20))))
#line 1396 "llds_out_file.m"
                                                                      {
#line 1396 "llds_out_file.m"
                                                                        MR_Word ll_backend__llds_out__llds_out_file__Lval_230 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1396 "llds_out_file.m"
                                                                        MR_Word ll_backend__llds_out__llds_out_file__LvalCodeAddrs_231;
#line 1397 "llds_out_file.m"
                                                                        MR_Word ll_backend__llds_out__llds_out_file__V_228_228;

#line 1397 "llds_out_file.m"
                                                                        {
#line 1397 "llds_out_file.m"
                                                                          ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Lval_230, &ll_backend__llds_out__llds_out_file__LvalCodeAddrs_231, &ll_backend__llds_out__llds_out_file__V_228_228);
                                                                        }
#line 1398 "llds_out_file.m"
                                                                        {
#line 1398 "llds_out_file.m"
                                                                          ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__LvalCodeAddrs_231, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                                                                        }
#line 1399 "llds_out_file.m"
                                                                        ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1396 "llds_out_file.m"
                                                                      }
#line 1328 "llds_out_file.m"
                                                                    else
#line 1478 "llds_out_file.m"
                                                                      {
#line 1479 "llds_out_file.m"
                                                                        ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1479 "llds_out_file.m"
                                                                        ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4;
#line 1478 "llds_out_file.m"
                                                                      }
#line 1481 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 1481 "llds_out_file.m"
            {
#line 1481 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__Instrs0_12;
#line 1481 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0__tmp_copy_2 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19;
#line 1481 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0__tmp_copy_4 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145;

#line 1481 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0__tmp_copy_4;
#line 1481 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0__tmp_copy_2;
#line 1481 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 1481 "llds_out_file.m"
            }
#line 1481 "llds_out_file.m"
            continue;
#line 1319 "llds_out_file.m"
          }
#line 1317 "llds_out_file.m"
      }
#line 1317 "llds_out_file.m"
      break;
#line 1317 "llds_out_file.m"
    }
#line 1313 "llds_out_file.m"
}

#line 1279 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__count_while_label_in_block_4_p_0(
#line 1279 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Label_1,
#line 1279 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2,
#line 1279 "llds_out_file.m"
  MR_Integer ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_3,
#line 1279 "llds_out_file.m"
  MR_Integer * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_4)
#line 1279 "llds_out_file.m"
{
#line 1282 "llds_out_file.m"
  while (MR_TRUE)
#line 1282 "llds_out_file.m"
    {
#line 1282 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 1282 "llds_out_file.m"
      {
#line 1282 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 1282 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1282 "llds_out_file.m"
          *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_4 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_3;
#line 1282 "llds_out_file.m"
        else
#line 1283 "llds_out_file.m"
          {
#line 1283 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Instr0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 0)));
#line 1283 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Instrs0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 1)));
#line 1283 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Uinstr0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Instr0_10, (MR_Integer) 0)));
#line 1284 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Instr0_10, (MR_Integer) 1)));
#line 1285 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_15_15;

#line 1285 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_13, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1285 "llds_out_file.m"
            if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1285 "llds_out_file.m"
              {
#line 1285 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_13, (MR_Integer) 1)));
#line 1286 "llds_out_file.m"
                {
#line 1286 "llds_out_file.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_out.llds_out_file", (MR_String) "predicate \140ll_backend.llds_out.llds_out_file.count_while_label_in_block\'/4", (MR_String) "label in block");
#line 1286 "llds_out_file.m"
                  return;
                }
#line 1285 "llds_out_file.m"
              }
#line 1285 "llds_out_file.m"
            else
#line 1296 "llds_out_file.m"
              {
#line 1296 "llds_out_file.m"
                MR_Integer ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_26_26;
#line 1288 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__V_25_25;
#line 1288 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__V_35_35;

#line 1288 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_13, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 1288 "llds_out_file.m"
                if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1288 "llds_out_file.m"
                  {
#line 1288 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_13, (MR_Integer) 1)));
#line 1288 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__V_25_25)) == (MR_mktag((MR_Integer) 1)));
#line 1288 "llds_out_file.m"
                    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1288 "llds_out_file.m"
                      {
#line 1288 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__V_25_25, (MR_Integer) 0)));
#line 1288 "llds_out_file.m"
                        {
#line 1288 "llds_out_file.m"
                          ll_backend__llds_out__llds_out_file__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__llds_out__llds_out_file__Label_1, ll_backend__llds_out__llds_out_file__V_35_35);
                        }
#line 1288 "llds_out_file.m"
                      }
#line 1288 "llds_out_file.m"
                  }
#line 1290 "llds_out_file.m"
                if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1289 "llds_out_file.m"
                  {
#line 1289 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_26_26 = (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_3 + (MR_Integer) 1);
#line 1289 "llds_out_file.m"
                  }
#line 1290 "llds_out_file.m"
                else
#line 1292 "llds_out_file.m"
                  {
#line 1290 "llds_out_file.m"
                    MR_Word ll_backend__llds_out__llds_out_file__V_28_28;
#line 1290 "llds_out_file.m"
                    MR_Word ll_backend__llds_out__llds_out_file__V_36_36;
#line 1290 "llds_out_file.m"
                    MR_Word ll_backend__llds_out__llds_out_file__V_16_16;

#line 1290 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_13, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 1290 "llds_out_file.m"
                    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1290 "llds_out_file.m"
                      {
#line 1290 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_13, (MR_Integer) 1)));
#line 1290 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_13, (MR_Integer) 2)));
#line 1290 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 1290 "llds_out_file.m"
                        if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1290 "llds_out_file.m"
                          {
#line 1290 "llds_out_file.m"
                            ll_backend__llds_out__llds_out_file__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__V_28_28, (MR_Integer) 0)));
#line 1290 "llds_out_file.m"
                            {
#line 1290 "llds_out_file.m"
                              ll_backend__llds_out__llds_out_file__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__llds_out__llds_out_file__Label_1, ll_backend__llds_out__llds_out_file__V_36_36);
                            }
#line 1290 "llds_out_file.m"
                          }
#line 1290 "llds_out_file.m"
                      }
#line 1292 "llds_out_file.m"
                    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1291 "llds_out_file.m"
                      {
#line 1291 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_26_26 = (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_3 + (MR_Integer) 1);
#line 1291 "llds_out_file.m"
                      }
#line 1292 "llds_out_file.m"
                    else
#line 1294 "llds_out_file.m"
                      {
#line 1292 "llds_out_file.m"
                        MR_Integer ll_backend__llds_out__llds_out_file__V_17_17;
#line 1292 "llds_out_file.m"
                        MR_Integer ll_backend__llds_out__llds_out_file__V_18_18;
#line 1292 "llds_out_file.m"
                        MR_Word ll_backend__llds_out__llds_out_file__V_19_19;

#line 1292 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_13, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1292 "llds_out_file.m"
                        if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1292 "llds_out_file.m"
                          {
#line 1292 "llds_out_file.m"
                            ll_backend__llds_out__llds_out_file__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_13, (MR_Integer) 1)));
#line 1292 "llds_out_file.m"
                            ll_backend__llds_out__llds_out_file__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_13, (MR_Integer) 2)));
#line 1292 "llds_out_file.m"
                            ll_backend__llds_out__llds_out_file__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_13, (MR_Integer) 3)));
#line 1293 "llds_out_file.m"
                            {
#line 1293 "llds_out_file.m"
                              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_out.llds_out_file", (MR_String) "predicate \140ll_backend.llds_out.llds_out_file.count_while_label_in_block\'/4", (MR_String) "block in block");
#line 1293 "llds_out_file.m"
                              return;
                            }
#line 1292 "llds_out_file.m"
                          }
#line 1292 "llds_out_file.m"
                        else
#line 1295 "llds_out_file.m"
                          {
#line 1295 "llds_out_file.m"
                          }
#line 1295 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_26_26 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_3;
#line 1294 "llds_out_file.m"
                      }
#line 1292 "llds_out_file.m"
                  }
#line 1297 "llds_out_file.m"
                /* direct tailcall eliminated */
#line 1297 "llds_out_file.m"
                {
#line 1297 "llds_out_file.m"
                  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_file__Instrs0_11;
#line 1297 "llds_out_file.m"
                  MR_Integer ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0__tmp_copy_3 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_26_26;

#line 1297 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_3 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0__tmp_copy_3;
#line 1297 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__HeadVar__2_2 = ll_backend__llds_out__llds_out_file__HeadVar__2__tmp_copy_2;
#line 1297 "llds_out_file.m"
                }
#line 1297 "llds_out_file.m"
                continue;
#line 1296 "llds_out_file.m"
              }
#line 1283 "llds_out_file.m"
          }
#line 1282 "llds_out_file.m"
      }
#line 1282 "llds_out_file.m"
      break;
#line 1282 "llds_out_file.m"
    }
#line 1279 "llds_out_file.m"
}

#line 1258 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__is_while_label_5_p_0(
#line 1258 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Label_1,
#line 1258 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2,
#line 1258 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__HeadVar__3_3,
#line 1258 "llds_out_file.m"
  MR_Integer ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_4,
#line 1258 "llds_out_file.m"
  MR_Integer * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_5)
#line 1258 "llds_out_file.m"
{
#line 1261 "llds_out_file.m"
  while (MR_TRUE)
#line 1261 "llds_out_file.m"
    {
#line 1261 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 1261 "llds_out_file.m"
      {
#line 1261 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 1261 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1261 "llds_out_file.m"
          {
#line 1261 "llds_out_file.m"
            *ll_backend__llds_out__llds_out_file__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1261 "llds_out_file.m"
            *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_5 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_4;
#line 1261 "llds_out_file.m"
          }
#line 1261 "llds_out_file.m"
        else
#line 1262 "llds_out_file.m"
          {
#line 1262 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Instr0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 0)));
#line 1262 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Instrs0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 1)));
#line 1262 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Uinstr0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Instr0_11, (MR_Integer) 0)));
#line 1263 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Instr0_11, (MR_Integer) 1)));
#line 1264 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_17_17;

#line 1264 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_15, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1264 "llds_out_file.m"
            if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1264 "llds_out_file.m"
              {
#line 1264 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_15, (MR_Integer) 1)));
#line 1265 "llds_out_file.m"
                *ll_backend__llds_out__llds_out_file__HeadVar__3_3 = ll_backend__llds_out__llds_out_file__HeadVar__2_2;
#line 1265 "llds_out_file.m"
                *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_5 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_4;
#line 1264 "llds_out_file.m"
              }
#line 1264 "llds_out_file.m"
            else
#line 1275 "llds_out_file.m"
              {
#line 1275 "llds_out_file.m"
                MR_Integer ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_25_25;
#line 1267 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__V_24_24;
#line 1267 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__V_32_32;

#line 1267 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_15, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 1267 "llds_out_file.m"
                if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1267 "llds_out_file.m"
                  {
#line 1267 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_15, (MR_Integer) 1)));
#line 1267 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__V_24_24)) == (MR_mktag((MR_Integer) 1)));
#line 1267 "llds_out_file.m"
                    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1267 "llds_out_file.m"
                      {
#line 1267 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__V_24_24, (MR_Integer) 0)));
#line 1267 "llds_out_file.m"
                        {
#line 1267 "llds_out_file.m"
                          ll_backend__llds_out__llds_out_file__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__llds_out__llds_out_file__Label_1, ll_backend__llds_out__llds_out_file__V_32_32);
                        }
#line 1267 "llds_out_file.m"
                      }
#line 1267 "llds_out_file.m"
                  }
#line 1269 "llds_out_file.m"
                if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1268 "llds_out_file.m"
                  {
#line 1268 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_25_25 = (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_4 + (MR_Integer) 1);
#line 1268 "llds_out_file.m"
                  }
#line 1269 "llds_out_file.m"
                else
#line 1271 "llds_out_file.m"
                  {
#line 1269 "llds_out_file.m"
                    MR_Word ll_backend__llds_out__llds_out_file__V_27_27;
#line 1269 "llds_out_file.m"
                    MR_Word ll_backend__llds_out__llds_out_file__V_33_33;
#line 1269 "llds_out_file.m"
                    MR_Word ll_backend__llds_out__llds_out_file__V_18_18;

#line 1269 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_15, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 1269 "llds_out_file.m"
                    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1269 "llds_out_file.m"
                      {
#line 1269 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_15, (MR_Integer) 1)));
#line 1269 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_15, (MR_Integer) 2)));
#line 1269 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__V_27_27)) == (MR_mktag((MR_Integer) 1)));
#line 1269 "llds_out_file.m"
                        if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1269 "llds_out_file.m"
                          {
#line 1269 "llds_out_file.m"
                            ll_backend__llds_out__llds_out_file__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__V_27_27, (MR_Integer) 0)));
#line 1269 "llds_out_file.m"
                            {
#line 1269 "llds_out_file.m"
                              ll_backend__llds_out__llds_out_file__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__llds_out__llds_out_file__Label_1, ll_backend__llds_out__llds_out_file__V_33_33);
                            }
#line 1269 "llds_out_file.m"
                          }
#line 1269 "llds_out_file.m"
                      }
#line 1271 "llds_out_file.m"
                    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1270 "llds_out_file.m"
                      {
#line 1270 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_25_25 = (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_4 + (MR_Integer) 1);
#line 1270 "llds_out_file.m"
                      }
#line 1271 "llds_out_file.m"
                    else
#line 1273 "llds_out_file.m"
                      {
#line 1273 "llds_out_file.m"
                        MR_Word ll_backend__llds_out__llds_out_file__BlockInstrs_21;
#line 1271 "llds_out_file.m"
                        MR_Integer ll_backend__llds_out__llds_out_file__V_19_19;
#line 1271 "llds_out_file.m"
                        MR_Integer ll_backend__llds_out__llds_out_file__V_20_20;

#line 1271 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_15, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1271 "llds_out_file.m"
                        if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1271 "llds_out_file.m"
                          {
#line 1271 "llds_out_file.m"
                            ll_backend__llds_out__llds_out_file__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_15, (MR_Integer) 1)));
#line 1271 "llds_out_file.m"
                            ll_backend__llds_out__llds_out_file__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_15, (MR_Integer) 2)));
#line 1271 "llds_out_file.m"
                            ll_backend__llds_out__llds_out_file__BlockInstrs_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_15, (MR_Integer) 3)));
#line 1272 "llds_out_file.m"
                            {
#line 1272 "llds_out_file.m"
                              ll_backend__llds_out__llds_out_file__count_while_label_in_block_4_p_0(ll_backend__llds_out__llds_out_file__Label_1, ll_backend__llds_out__llds_out_file__BlockInstrs_21, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_25_25);
                            }
#line 1271 "llds_out_file.m"
                          }
#line 1271 "llds_out_file.m"
                        else
#line 1272 "llds_out_file.m"
                          ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_25_25 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_4;
#line 1273 "llds_out_file.m"
                      }
#line 1271 "llds_out_file.m"
                  }
#line 1276 "llds_out_file.m"
                /* direct tailcall eliminated */
#line 1276 "llds_out_file.m"
                {
#line 1276 "llds_out_file.m"
                  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_file__Instrs0_12;
#line 1276 "llds_out_file.m"
                  MR_Integer ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0__tmp_copy_4 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_25_25;

#line 1276 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_4 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0__tmp_copy_4;
#line 1276 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__HeadVar__2_2 = ll_backend__llds_out__llds_out_file__HeadVar__2__tmp_copy_2;
#line 1276 "llds_out_file.m"
                }
#line 1276 "llds_out_file.m"
                continue;
#line 1275 "llds_out_file.m"
              }
#line 1262 "llds_out_file.m"
          }
#line 1261 "llds_out_file.m"
      }
#line 1261 "llds_out_file.m"
      break;
#line 1261 "llds_out_file.m"
    }
#line 1258 "llds_out_file.m"
}

#line 1242 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__find_while_labels_3_p_0(
#line 1242 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 1242 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_WhileSet_0_2,
#line 1242 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_WhileSet_3)
#line 1242 "llds_out_file.m"
{
#line 1245 "llds_out_file.m"
  while (MR_TRUE)
#line 1245 "llds_out_file.m"
    {
#line 1245 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 1245 "llds_out_file.m"
      {
#line 1245 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 1245 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1245 "llds_out_file.m"
          *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_WhileSet_3 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_WhileSet_0_2;
#line 1245 "llds_out_file.m"
        else
#line 1246 "llds_out_file.m"
          {
#line 1246 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Uinstr0_7;
#line 1246 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Instrs0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 1246 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 1246 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__V_8_8;
#line 1254 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Label_11;
#line 1254 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Instrs1_12;
#line 1248 "llds_out_file.m"
            MR_Integer ll_backend__llds_out__llds_out_file__UseCount_13;
#line 1248 "llds_out_file.m"
            MR_Integer ll_backend__llds_out__llds_out_file__V_17_17;
#line 1248 "llds_out_file.m"
            MR_Integer ll_backend__llds_out__llds_out_file__V_18_18;

#line 1246 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__Uinstr0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_16_16, (MR_Integer) 0)));
#line 1246 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_16_16, (MR_Integer) 1)));
#line 1248 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_7, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1248 "llds_out_file.m"
            if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1248 "llds_out_file.m"
              {
#line 1248 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__Label_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_7, (MR_Integer) 1)));
#line 1249 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__V_17_17 = (MR_Integer) 0;
#line 1249 "llds_out_file.m"
                {
#line 1249 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__is_while_label_5_p_0(ll_backend__llds_out__llds_out_file__Label_11, ll_backend__llds_out__llds_out_file__Instrs0_9, &ll_backend__llds_out__llds_out_file__Instrs1_12, ll_backend__llds_out__llds_out_file__V_17_17, &ll_backend__llds_out__llds_out_file__UseCount_13);
                }
#line 1250 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__V_18_18 = (MR_Integer) 0;
#line 1250 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__succeeded = (ll_backend__llds_out__llds_out_file__UseCount_13 > ll_backend__llds_out__llds_out_file__V_18_18);
#line 1248 "llds_out_file.m"
              }
#line 1254 "llds_out_file.m"
            if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1252 "llds_out_file.m"
              {
#line 1252 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_WhileSet_19_19;

#line 1252 "llds_out_file.m"
                {
#line 1252 "llds_out_file.m"
                  mercury__set_tree234__insert_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_11)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_WhileSet_0_2, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_WhileSet_19_19);
                }
#line 1253 "llds_out_file.m"
                /* direct tailcall eliminated */
#line 1253 "llds_out_file.m"
                {
#line 1253 "llds_out_file.m"
                  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__Instrs1_12;
#line 1253 "llds_out_file.m"
                  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_WhileSet_0__tmp_copy_2 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_WhileSet_19_19;

#line 1253 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__STATE_VARIABLE_WhileSet_0_2 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_WhileSet_0__tmp_copy_2;
#line 1253 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 1253 "llds_out_file.m"
                }
#line 1253 "llds_out_file.m"
                continue;
#line 1252 "llds_out_file.m"
              }
#line 1254 "llds_out_file.m"
            else
#line 1255 "llds_out_file.m"
              {
#line 1255 "llds_out_file.m"
                /* direct tailcall eliminated */
#line 1255 "llds_out_file.m"
                {
#line 1255 "llds_out_file.m"
                  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__Instrs0_9;

#line 1255 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 1255 "llds_out_file.m"
                }
#line 1255 "llds_out_file.m"
                continue;
#line 1255 "llds_out_file.m"
              }
#line 1246 "llds_out_file.m"
          }
#line 1245 "llds_out_file.m"
      }
#line 1245 "llds_out_file.m"
      break;
#line 1245 "llds_out_file.m"
    }
#line 1242 "llds_out_file.m"
}

#line 1192 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__find_cont_labels_3_p_0(
#line 1192 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 1192 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_0_2,
#line 1192 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_3)
#line 1192 "llds_out_file.m"
{
#line 1195 "llds_out_file.m"
  while (MR_TRUE)
#line 1195 "llds_out_file.m"
    {
#line 1195 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 1195 "llds_out_file.m"
      {
#line 1195 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 1195 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1195 "llds_out_file.m"
          *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_3 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_0_2;
#line 1195 "llds_out_file.m"
        else
#line 1196 "llds_out_file.m"
          {
#line 1196 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Instr_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 1196 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Instrs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 1196 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Uinstr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Instr_7, (MR_Integer) 0)));
#line 1196 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_35_35;
#line 1197 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Instr_7, (MR_Integer) 1)));
#line 1211 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__ContLabel_13;

#line 1201 "llds_out_file.m"
            if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1206 "llds_out_file.m"
              {
#line 1206 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__Const_21;
#line 1206 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 1)));
#line 1206 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 2)));
#line 1206 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__V_31_31;
#line 1206 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__V_20_20;

#line 1206 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__V_29_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__V_29_29, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 1206 "llds_out_file.m"
                if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1206 "llds_out_file.m"
                  {
#line 1206 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__V_29_29, (MR_Integer) 1)));
#line 1206 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__V_30_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__V_30_30, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1206 "llds_out_file.m"
                    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1206 "llds_out_file.m"
                      {
#line 1206 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__Const_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__V_30_30, (MR_Integer) 1)));
#line 1207 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Const_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Const_21, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1207 "llds_out_file.m"
                        if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1207 "llds_out_file.m"
                          {
#line 1207 "llds_out_file.m"
                            ll_backend__llds_out__llds_out_file__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Const_21, (MR_Integer) 1)));
#line 1207 "llds_out_file.m"
                            ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__V_31_31)) == (MR_mktag((MR_Integer) 1)));
#line 1207 "llds_out_file.m"
                            if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1207 "llds_out_file.m"
                              ll_backend__llds_out__llds_out_file__ContLabel_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__V_31_31, (MR_Integer) 0)));
#line 1207 "llds_out_file.m"
                          }
#line 1206 "llds_out_file.m"
                      }
#line 1206 "llds_out_file.m"
                  }
#line 1206 "llds_out_file.m"
              }
#line 1201 "llds_out_file.m"
            else
#line 1201 "llds_out_file.m"
              if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 0)))) == (MR_Integer) 30))))
#line 1204 "llds_out_file.m"
                {
#line 1204 "llds_out_file.m"
                  MR_Word ll_backend__llds_out__llds_out_file__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 1)));

#line 1204 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__ContLabel_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 2)));
#line 1204 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__succeeded = MR_TRUE;
#line 1204 "llds_out_file.m"
                }
#line 1201 "llds_out_file.m"
              else
#line 1201 "llds_out_file.m"
                if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1200 "llds_out_file.m"
                  {
#line 1200 "llds_out_file.m"
                    MR_Word ll_backend__llds_out__llds_out_file__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 2)));
#line 1200 "llds_out_file.m"
                    MR_Word ll_backend__llds_out__llds_out_file__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 1)));
#line 1200 "llds_out_file.m"
                    MR_Word ll_backend__llds_out__llds_out_file__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 3)));
#line 1200 "llds_out_file.m"
                    MR_Word ll_backend__llds_out__llds_out_file__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 4)));
#line 1200 "llds_out_file.m"
                    MR_Word ll_backend__llds_out__llds_out_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 5)));
#line 1200 "llds_out_file.m"
                    MR_Word ll_backend__llds_out__llds_out_file__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 6)));

#line 1200 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 1200 "llds_out_file.m"
                    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1200 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__ContLabel_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__V_34_34, (MR_Integer) 0)));
#line 1200 "llds_out_file.m"
                  }
#line 1201 "llds_out_file.m"
                else
#line 1201 "llds_out_file.m"
                  if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1202 "llds_out_file.m"
                    {
#line 1202 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 2)));
#line 1202 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_33_33;
#line 1202 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 1)));

#line 1202 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__V_32_32)) == (MR_mktag((MR_Integer) 1)));
#line 1202 "llds_out_file.m"
                      if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1202 "llds_out_file.m"
                        {
#line 1202 "llds_out_file.m"
                          ll_backend__llds_out__llds_out_file__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__V_32_32, (MR_Integer) 0)));
#line 1202 "llds_out_file.m"
                          ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__V_33_33)) == (MR_mktag((MR_Integer) 1)));
#line 1202 "llds_out_file.m"
                          if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1202 "llds_out_file.m"
                            ll_backend__llds_out__llds_out_file__ContLabel_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__V_33_33, (MR_Integer) 0)));
#line 1202 "llds_out_file.m"
                        }
#line 1202 "llds_out_file.m"
                    }
#line 1201 "llds_out_file.m"
                  else
#line 1201 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__succeeded = MR_FALSE;
#line 1211 "llds_out_file.m"
            if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1210 "llds_out_file.m"
              {
#line 1210 "llds_out_file.m"
                {
#line 1210 "llds_out_file.m"
                  mercury__set_tree234__insert_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__llds_out__llds_out_file__ContLabel_13)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_0_2, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_35_35);
                }
#line 1210 "llds_out_file.m"
              }
#line 1211 "llds_out_file.m"
            else
#line 1215 "llds_out_file.m"
              {
#line 1215 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__Label1_23;
#line 1212 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__V_22_22;

#line 1212 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 0)))) == (MR_Integer) 29)));
#line 1212 "llds_out_file.m"
                if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1212 "llds_out_file.m"
                  {
#line 1212 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 1)));
#line 1212 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__Label1_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 2)));
#line 1214 "llds_out_file.m"
                    {
#line 1214 "llds_out_file.m"
                      mercury__set_tree234__insert_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__llds_out__llds_out_file__Label1_23)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_0_2, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_35_35);
                    }
#line 1212 "llds_out_file.m"
                  }
#line 1212 "llds_out_file.m"
                else
#line 1219 "llds_out_file.m"
                  {
#line 1219 "llds_out_file.m"
                    MR_Word ll_backend__llds_out__llds_out_file__Block_26;
#line 1216 "llds_out_file.m"
                    MR_Integer ll_backend__llds_out__llds_out_file__V_24_24;
#line 1216 "llds_out_file.m"
                    MR_Integer ll_backend__llds_out__llds_out_file__V_25_25;

#line 1216 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1216 "llds_out_file.m"
                    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1216 "llds_out_file.m"
                      {
#line 1216 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 1)));
#line 1216 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 2)));
#line 1216 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__Block_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 3)));
#line 1218 "llds_out_file.m"
                        {
#line 1218 "llds_out_file.m"
                          ll_backend__llds_out__llds_out_file__find_cont_labels_3_p_0(ll_backend__llds_out__llds_out_file__Block_26, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_0_2, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_35_35);
                        }
#line 1216 "llds_out_file.m"
                      }
#line 1216 "llds_out_file.m"
                    else
#line 1218 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_35_35 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_0_2;
#line 1219 "llds_out_file.m"
                  }
#line 1215 "llds_out_file.m"
              }
#line 1222 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 1222 "llds_out_file.m"
            {
#line 1222 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__Instrs_8;
#line 1222 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_0__tmp_copy_2 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_35_35;

#line 1222 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_0_2 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_0__tmp_copy_2;
#line 1222 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 1222 "llds_out_file.m"
            }
#line 1222 "llds_out_file.m"
            continue;
#line 1196 "llds_out_file.m"
          }
#line 1195 "llds_out_file.m"
      }
#line 1195 "llds_out_file.m"
      break;
#line 1195 "llds_out_file.m"
    }
#line 1192 "llds_out_file.m"
}

#line 1172 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__find_caller_label_2_p_0(
#line 1172 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 1172 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__CallerLabel_2)
#line 1172 "llds_out_file.m"
{
#line 1174 "llds_out_file.m"
  while (MR_TRUE)
#line 1174 "llds_out_file.m"
    {
#line 1174 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 1174 "llds_out_file.m"
      {
#line 1174 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 1174 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1174 "llds_out_file.m"
          {
#line 1175 "llds_out_file.m"
            {
#line 1175 "llds_out_file.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_out.llds_out_file", (MR_String) "predicate \140ll_backend.llds_out.llds_out_file.find_caller_label\'/2", (MR_String) "cannot find caller label");
#line 1175 "llds_out_file.m"
              return;
            }
#line 1174 "llds_out_file.m"
          }
#line 1174 "llds_out_file.m"
        else
#line 1176 "llds_out_file.m"
          {
#line 1176 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Uinstr_7;
#line 1176 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Instrs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 1176 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 1176 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__V_8_8;
#line 1185 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Label_11;

#line 1176 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__Uinstr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_16_16, (MR_Integer) 0)));
#line 1176 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_16_16, (MR_Integer) 1)));
#line 1177 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_7, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1177 "llds_out_file.m"
            if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1177 "llds_out_file.m"
              {
#line 1177 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__Label_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_7, (MR_Integer) 1)));
#line 1181 "llds_out_file.m"
                if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Label_11)) == (MR_mktag((MR_Integer) 1))))
#line 1183 "llds_out_file.m"
                  *ll_backend__llds_out__llds_out_file__CallerLabel_2 = ll_backend__llds_out__llds_out_file__Label_11;
#line 1181 "llds_out_file.m"
                else
#line 1179 "llds_out_file.m"
                  {
#line 1180 "llds_out_file.m"
                    {
#line 1180 "llds_out_file.m"
                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_out.llds_out_file", (MR_String) "predicate \140ll_backend.llds_out.llds_out_file.find_caller_label\'/2", (MR_String) "caller label is internal label");
#line 1180 "llds_out_file.m"
                      return;
                    }
#line 1179 "llds_out_file.m"
                  }
#line 1177 "llds_out_file.m"
              }
#line 1177 "llds_out_file.m"
            else
#line 1186 "llds_out_file.m"
              {
#line 1186 "llds_out_file.m"
                /* direct tailcall eliminated */
#line 1186 "llds_out_file.m"
                {
#line 1186 "llds_out_file.m"
                  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__Instrs_9;

#line 1186 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 1186 "llds_out_file.m"
                }
#line 1186 "llds_out_file.m"
                continue;
#line 1186 "llds_out_file.m"
              }
#line 1176 "llds_out_file.m"
          }
#line 1174 "llds_out_file.m"
      }
#line 1174 "llds_out_file.m"
      break;
#line 1174 "llds_out_file.m"
    }
#line 1172 "llds_out_file.m"
}

#line 1095 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_procedure_4_p_0(
#line 1095 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_5,
#line 1095 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Proc_6)
#line 1095 "llds_out_file.m"
{
#line 1098 "llds_out_file.m"
  {
#line 1098 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 1098 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_137_137;
#line 1098 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__Name_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_6, (MR_Integer) 0)));
#line 1098 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_6, (MR_Integer) 1)));
#line 1098 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__Instrs_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_6, (MR_Integer) 4)));
#line 1098 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__PredProcId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_6, (MR_Integer) 2)));
#line 1098 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__ProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__PredProcId_11, (MR_Integer) 1)));
#line 1098 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__ModeNum_14;
#line 1098 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__CallerLabel_15;
#line 1098 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ContLabels_16;
#line 1098 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__EmitCLoops_17;
#line 1098 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__WhileLabels_18;
#line 1098 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__UndefWhileLabels0_19;
#line 1098 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__UndefWhileLabels_20;
#line 1098 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__LabelOutputInfo_21;
#line 1098 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__LocalThreadEngineBase_22;
#line 1098 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_40_40;
#line 1099 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_6, (MR_Integer) 3)));
#line 1099 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_6, (MR_Integer) 5)));
#line 1099 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_6, (MR_Integer) 6)));
#line 1099 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_6, (MR_Integer) 7)));
#line 1099 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_6, (MR_Integer) 8)));
#line 1103 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__PredProcId_11, (MR_Integer) 0)));
#line 1120 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_97_97;
#line 1120 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_98_98;
#line 1120 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_99_99;
#line 1120 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_100_100;
#line 1120 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_101_101;
#line 1120 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_102_102;
#line 1120 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_103_103;
#line 1120 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_104_104;
#line 1120 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_105_105;
#line 1120 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_106_106;
#line 1120 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_107_107;
#line 1120 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_108_108;
#line 1120 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_109_109;
#line 1120 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_110_110;
#line 1120 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_111_111;
#line 1120 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_112_112;
#line 1120 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_113_113;
#line 1120 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_114_114;
#line 1120 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_115_115;
#line 1120 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_116_116;
#line 1145 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_117_117;
#line 1145 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_118_118;
#line 1145 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_119_119;
#line 1145 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_120_120;
#line 1145 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_121_121;
#line 1145 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_122_122;
#line 1145 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_123_123;
#line 1145 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_124_124;
#line 1145 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_125_125;
#line 1145 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_126_126;
#line 1145 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_127_127;
#line 1145 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_128_128;
#line 1145 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_129_129;
#line 1145 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_130_130;
#line 1145 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_131_131;
#line 1145 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_132_132;
#line 1145 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_133_133;
#line 1145 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_134_134;
#line 1145 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_135_135;
#line 1145 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_136_136;

#line 1104 "llds_out_file.m"
    {
#line 1104 "llds_out_file.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(ll_backend__llds_out__llds_out_file__ProcId_13, &ll_backend__llds_out__llds_out_file__ModeNum_14);
    }
#line 1106 "llds_out_file.m"
    {
#line 1106 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\n/*-------------------------------------");
    }
#line 1107 "llds_out_file.m"
    {
#line 1107 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "------------------------------------*/\n");
    }
#line 1108 "llds_out_file.m"
    {
#line 1108 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "/* code for \'");
    }
#line 1111 "llds_out_file.m"
    {
#line 1111 "llds_out_file.m"
      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__Name_8);
    }
#line 1112 "llds_out_file.m"
    {
#line 1112 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\'/");
    }
#line 1113 "llds_out_file.m"
    {
#line 1113 "llds_out_file.m"
      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_file__Arity_9);
    }
#line 1114 "llds_out_file.m"
    {
#line 1114 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) " mode ");
    }
#line 1115 "llds_out_file.m"
    {
#line 1115 "llds_out_file.m"
      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_file__ModeNum_14);
    }
#line 1116 "llds_out_file.m"
    {
#line 1116 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) " */\n");
    }
#line 1118 "llds_out_file.m"
    {
#line 1118 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__find_caller_label_2_p_0(ll_backend__llds_out__llds_out_file__Instrs_10, &ll_backend__llds_out__llds_out_file__CallerLabel_15);
    }
#line 5163 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_137_137 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 1119 "llds_out_file.m"
    {
#line 1119 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_40_40 = mercury__set_tree234__init_0_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_137_137);
    }
#line 1119 "llds_out_file.m"
    {
#line 1119 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__find_cont_labels_3_p_0(ll_backend__llds_out__llds_out_file__Instrs_10, ll_backend__llds_out__llds_out_file__V_40_40, &ll_backend__llds_out__llds_out_file__ContLabels_16);
    }
#line 1120 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 0)));
#line 1120 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_98_98 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 1)));
#line 1120 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 2)));
#line 1120 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 3)));
#line 1120 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 4)));
#line 1120 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 5)));
#line 1120 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_103_103 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1120 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_104_104 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1120 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__EmitCLoops_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1120 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_105_105 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1120 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_106_106 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1120 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_107_107 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1120 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_108_108 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1120 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_109_109 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1120 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_110_110 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 1120 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_111_111 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 1120 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_112_112 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 1120 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_113_113 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 1120 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_114_114 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 1120 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_115_115 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 1120 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)));
#line 1124 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__EmitCLoops_17 == (MR_Integer) 0))
#line 1126 "llds_out_file.m"
      {
#line 1126 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__WhileLabels_18 = mercury__set_tree234__init_0_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_137_137);
      }
#line 1124 "llds_out_file.m"
    else
#line 1122 "llds_out_file.m"
      {
#line 1122 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_41_41;

#line 1123 "llds_out_file.m"
        {
#line 1123 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__V_41_41 = mercury__set_tree234__init_0_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_137_137);
        }
#line 1123 "llds_out_file.m"
        {
#line 1123 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__find_while_labels_3_p_0(ll_backend__llds_out__llds_out_file__Instrs_10, ll_backend__llds_out__llds_out_file__V_41_41, &ll_backend__llds_out__llds_out_file__WhileLabels_18);
        }
#line 1122 "llds_out_file.m"
      }
#line 1134 "llds_out_file.m"
    {
#line 1134 "llds_out_file.m"
      mercury__set_tree234__difference_3_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_137_137, ll_backend__llds_out__llds_out_file__WhileLabels_18, ll_backend__llds_out__llds_out_file__ContLabels_16, &ll_backend__llds_out__llds_out_file__UndefWhileLabels0_19);
    }
#line 1135 "llds_out_file.m"
    {
#line 1135 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__succeeded = mercury__set_tree234__is_empty_1_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_137_137, ll_backend__llds_out__llds_out_file__UndefWhileLabels0_19);
    }
#line 1137 "llds_out_file.m"
    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1136 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__UndefWhileLabels_20 = ll_backend__llds_out__llds_out_file__UndefWhileLabels0_19;
#line 1137 "llds_out_file.m"
    else
#line 1140 "llds_out_file.m"
      {
#line 1140 "llds_out_file.m"
        {
#line 1140 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__find_while_labels_to_define_5_p_0(ll_backend__llds_out__llds_out_file__Instrs_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__llds_out__llds_out_file__WhileLabels_18, ll_backend__llds_out__llds_out_file__UndefWhileLabels0_19, &ll_backend__llds_out__llds_out_file__UndefWhileLabels_20);
        }
#line 1140 "llds_out_file.m"
      }
#line 1143 "llds_out_file.m"
    {
#line 1143 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__LabelOutputInfo_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1143 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__LabelOutputInfo_21, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__CallerLabel_15));
#line 1143 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__LabelOutputInfo_21, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__ContLabels_16));
#line 1143 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__LabelOutputInfo_21, 2) = ((MR_Box) (ll_backend__llds_out__llds_out_file__WhileLabels_18));
#line 1143 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__LabelOutputInfo_21, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__UndefWhileLabels_20));
#line 1143 "llds_out_file.m"
    }
#line 1145 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 0)));
#line 1145 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_118_118 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 1)));
#line 1145 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 2)));
#line 1145 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 3)));
#line 1145 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 4)));
#line 1145 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 5)));
#line 1145 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_123_123 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1145 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_124_124 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1145 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_125_125 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1145 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_126_126 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1145 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__LocalThreadEngineBase_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1145 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_127_127 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1145 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_128_128 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1145 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_129_129 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1145 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_130_130 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 1145 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_131_131 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 1145 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_132_132 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 1145 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_133_133 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 1145 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_134_134 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 1145 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_135_135 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 1145 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)));
#line 5324 "ll_backend.llds_out.llds_out_file.c"
    if ((ll_backend__llds_out__llds_out_file__LocalThreadEngineBase_22 == (MR_Integer) 0))
#line 1156 "llds_out_file.m"
      {
#line 1156 "llds_out_file.m"
        ll_backend__llds_out__llds_out_instr__output_instruction_list_6_p_0(ll_backend__llds_out__llds_out_file__Info_5, ll_backend__llds_out__llds_out_file__Instrs_10, ll_backend__llds_out__llds_out_file__LabelOutputInfo_21, (MR_Integer) 0);
#line 1156 "llds_out_file.m"
        return;
      }
#line 5333 "ll_backend.llds_out.llds_out_file.c"
    else
#line 5335 "ll_backend.llds_out.llds_out_file.c"
      {
#line 1148 "llds_out_file.m"
        {
#line 1148 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "#ifdef MR_maybe_local_thread_engine_base\n");
        }
#line 1149 "llds_out_file.m"
        {
#line 1149 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "\t#undef MR_maybe_local_thread_engine_base\n");
        }
#line 1150 "llds_out_file.m"
        {
#line 1150 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "\t#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base\n");
        }
#line 1152 "llds_out_file.m"
        {
#line 1152 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "#endif\n");
        }
#line 1156 "llds_out_file.m"
        {
#line 1156 "llds_out_file.m"
          ll_backend__llds_out__llds_out_instr__output_instruction_list_6_p_0(ll_backend__llds_out__llds_out_file__Info_5, ll_backend__llds_out__llds_out_file__Instrs_10, ll_backend__llds_out__llds_out_file__LabelOutputInfo_21, (MR_Integer) 0);
        }
#line 1160 "llds_out_file.m"
        {
#line 1160 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "#ifdef MR_maybe_local_thread_engine_base\n");
        }
#line 1161 "llds_out_file.m"
        {
#line 1161 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "\t#undef MR_maybe_local_thread_engine_base\n");
        }
#line 1162 "llds_out_file.m"
        {
#line 1162 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "\t#define MR_maybe_local_thread_engine_base MR_thread_engine_base\n");
        }
#line 1164 "llds_out_file.m"
        {
#line 1164 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "#endif\n");
#line 1164 "llds_out_file.m"
          return;
        }
#line 5384 "ll_backend.llds_out.llds_out_file.c"
      }
#line 1098 "llds_out_file.m"
  }
#line 1095 "llds_out_file.m"
}

#line 1081 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_global_var_decl_5_p_0(
#line 1081 "llds_out_file.m"
  MR_String ll_backend__llds_out__llds_out_file__VarName_6,
#line 1081 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_10,
#line 1081 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_11)
#line 1081 "llds_out_file.m"
{
#line 1084 "llds_out_file.m"
  {
#line 1084 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 1084 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__GlobalVar_9 = (MR_Word) ll_backend__llds_out__llds_out_file__VarName_6;
#line 1086 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_14_14;

#line 1086 "llds_out_file.m"
    {
#line 1086 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_14_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1086 "llds_out_file.m"
      MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__V_14_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1086 "llds_out_file.m"
      MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__V_14_14, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__GlobalVar_9));
#line 1086 "llds_out_file.m"
    }
#line 1086 "llds_out_file.m"
    {
#line 1086 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(ll_backend__llds_out__llds_out_file__V_14_14, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_10);
    }
#line 1088 "llds_out_file.m"
    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1087 "llds_out_file.m"
      *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_11 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_10;
#line 1088 "llds_out_file.m"
    else
#line 1089 "llds_out_file.m"
      {
#line 1089 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_15_15;
#line 1089 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__V_19_19;

#line 1089 "llds_out_file.m"
        {
#line 1089 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__V_15_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1089 "llds_out_file.m"
          MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__V_15_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1089 "llds_out_file.m"
          MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__V_15_15, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__GlobalVar_9));
#line 1089 "llds_out_file.m"
        }
#line 1089 "llds_out_file.m"
        {
#line 1089 "llds_out_file.m"
          ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__llds_out__llds_out_file__V_15_15, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_10, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_11);
        }
#line 1090 "llds_out_file.m"
        {
#line 1090 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "extern MR_Word ");
        }
#line 1091 "llds_out_file.m"
        {
#line 1091 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__V_19_19 = ll_backend__llds_out__llds_out_data__c_global_var_name_1_f_0(ll_backend__llds_out__llds_out_file__GlobalVar_9);
        }
#line 1091 "llds_out_file.m"
        {
#line 1091 "llds_out_file.m"
          mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__V_19_19);
        }
#line 1092 "llds_out_file.m"
        {
#line 1092 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) ";\n");
#line 1092 "llds_out_file.m"
          return;
        }
#line 1089 "llds_out_file.m"
      }
#line 1084 "llds_out_file.m"
  }
#line 1081 "llds_out_file.m"
}

#line 1079 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_c_procedure_decls_6_p_0_2(
#line 1079 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1079 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1079 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1079 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 1079 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 1079 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5)
#line 1079 "llds_out_file.m"
{
#line 1079 "llds_out_file.m"
  {
#line 1079 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 1079 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv3_HeadVar__4_4;

#line 1079 "llds_out_file.m"
    {
#line 1079 "llds_out_file.m"
      ll_backend__llds_out__llds_out_instr__output_record_instruction_decls_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv3_HeadVar__4_4);
    }
#line 1079 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv3_HeadVar__4_4));
#line 1079 "llds_out_file.m"
  }
#line 1079 "llds_out_file.m"
}

#line 1078 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_c_procedure_decls_6_p_0_1(
#line 1078 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1078 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1078 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1078 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 1078 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 1078 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5)
#line 1078 "llds_out_file.m"
{
#line 1078 "llds_out_file.m"
  {
#line 1078 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 1078 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_DeclSet_11;

#line 1078 "llds_out_file.m"
    {
#line 1078 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_c_global_var_decl_5_p_0(((MR_String) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_DeclSet_11);
    }
#line 1078 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_DeclSet_11));
#line 1078 "llds_out_file.m"
  }
#line 1078 "llds_out_file.m"
}

#line 1071 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_c_procedure_decls_6_p_0(
#line 1071 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_7,
#line 1071 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Proc_8,
#line 1071 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_14,
#line 1071 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_15)
#line 1071 "llds_out_file.m"
{
#line 1074 "llds_out_file.m"
  {
#line 1074 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 1074 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_40_40 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1074 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_46_46;
#line 1074 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_47_47;
#line 1074 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__Instrs_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_8, (MR_Integer) 4)));
#line 1074 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__CGlobalVarSet_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_8, (MR_Integer) 8)));
#line 1074 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__CGlobalVars_13;
#line 1074 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_19_19;
#line 1074 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_21_21;
#line 1075 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_8, (MR_Integer) 0)));
#line 1075 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_8, (MR_Integer) 1)));
#line 1075 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_8, (MR_Integer) 2)));
#line 1075 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_8, (MR_Integer) 3)));
#line 1075 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_8, (MR_Integer) 5)));
#line 1075 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_8, (MR_Integer) 6)));
#line 1075 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_8, (MR_Integer) 7)));
#line 1078 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_DeclSet_19_19;
#line 1078 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_IO_20_20;
#line 1079 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv5_STATE_VARIABLE_DeclSet_15;
#line 1079 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv4_STATE_VARIABLE_IO_17;

#line 1077 "llds_out_file.m"
    {
#line 1077 "llds_out_file.m"
      mercury__set__to_sorted_list_2_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_40_40, ll_backend__llds_out__llds_out_file__CGlobalVarSet_12, &ll_backend__llds_out__llds_out_file__CGlobalVars_13);
    }
#line 5616 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_46_46 = (MR_Word) &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0;
#line 5618 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_47_47 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 1078 "llds_out_file.m"
    {
#line 1078 "llds_out_file.m"
      mercury__list__foldl2_6_p_2(ll_backend__llds_out__llds_out_file__TypeCtorInfo_40_40, ll_backend__llds_out__llds_out_file__TypeCtorInfo_46_46, ll_backend__llds_out__llds_out_file__TypeCtorInfo_47_47, (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_2[11], ll_backend__llds_out__llds_out_file__CGlobalVars_13, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_14)), &ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_DeclSet_19_19, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_IO_20_20);
    }
#line 1078 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_19_19 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_DeclSet_19_19);
#line 1079 "llds_out_file.m"
    {
#line 1079 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1079 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_21_21, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_5[13]));
#line 1079 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_21_21, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_record_c_procedure_decls_6_p_0_2));
#line 1079 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1079 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_21_21, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_7));
#line 1079 "llds_out_file.m"
    }
#line 1079 "llds_out_file.m"
    {
#line 1079 "llds_out_file.m"
      mercury__list__foldl2_6_p_2((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__llds_out__llds_out_file__TypeCtorInfo_46_46, ll_backend__llds_out__llds_out_file__TypeCtorInfo_47_47, ll_backend__llds_out__llds_out_file__V_21_21, ll_backend__llds_out__llds_out_file__Instrs_11, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_19_19)), &ll_backend__llds_out__llds_out_file__conv5_STATE_VARIABLE_DeclSet_15, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv4_STATE_VARIABLE_IO_17);
    }
#line 1079 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_15 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv5_STATE_VARIABLE_DeclSet_15);
#line 1074 "llds_out_file.m"
  }
#line 1071 "llds_out_file.m"
}

#line 1036 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_entry_label_init_4_p_0(
#line 1036 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__EntryLabelToLayoutMap_5,
#line 1036 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Label_6)
#line 1036 "llds_out_file.m"
{
#line 1039 "llds_out_file.m"
  {
#line 1039 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 1039 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__SuffixOpen_9;
#line 1039 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ProcLabel_10;
#line 1039 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__TabInitMacro_11;
#line 1040 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file___LayoutId_8;
#line 1040 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv0__LayoutId_8;

#line 1040 "llds_out_file.m"
    {
#line 1040 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0, ll_backend__llds_out__llds_out_file__EntryLabelToLayoutMap_5, ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_6)), &ll_backend__llds_out__llds_out_file__conv0__LayoutId_8);
    }
#line 1040 "llds_out_file.m"
    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1040 "llds_out_file.m"
      {
#line 1040 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file___LayoutId_8 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv0__LayoutId_8);
#line 1040 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__succeeded = MR_TRUE;
#line 1040 "llds_out_file.m"
      }
#line 1042 "llds_out_file.m"
    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1041 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__SuffixOpen_9 = (MR_String) "_sl(";
#line 1042 "llds_out_file.m"
    else
#line 1043 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__SuffixOpen_9 = (MR_String) "(";
#line 1049 "llds_out_file.m"
    if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Label_6)) == (MR_mktag((MR_Integer) 1))))
#line 1049 "llds_out_file.m"
      {
#line 1049 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__Label_6, (MR_Integer) 1)));
#line 1049 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__Label_6, (MR_Integer) 0)));

#line 1049 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__V_35_35 == (MR_Integer) 0))
#line 1053 "llds_out_file.m"
          {
#line 1053 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__ProcLabel_10 = ll_backend__llds_out__llds_out_file__V_34_34;
#line 1054 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__TabInitMacro_11 = (MR_String) "\tMR_init_local1";
#line 1053 "llds_out_file.m"
          }
#line 1049 "llds_out_file.m"
        else
#line 1049 "llds_out_file.m"
          if ((ll_backend__llds_out__llds_out_file__V_35_35 == (MR_Integer) 2))
#line 1047 "llds_out_file.m"
            {
#line 1047 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__ProcLabel_10 = ll_backend__llds_out__llds_out_file__V_34_34;
#line 1048 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__TabInitMacro_11 = (MR_String) "\tMR_init_entry1";
#line 1047 "llds_out_file.m"
            }
#line 1049 "llds_out_file.m"
          else
#line 1050 "llds_out_file.m"
            {
#line 1050 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__ProcLabel_10 = ll_backend__llds_out__llds_out_file__V_34_34;
#line 1051 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__TabInitMacro_11 = (MR_String) "\tMR_init_entry1";
#line 1050 "llds_out_file.m"
            }
#line 1049 "llds_out_file.m"
      }
#line 1049 "llds_out_file.m"
    else
#line 1056 "llds_out_file.m"
      {
#line 1058 "llds_out_file.m"
        {
#line 1058 "llds_out_file.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_out.llds_out_file", (MR_String) "predicate \140ll_backend.llds_out.llds_out_file.output_c_entry_label_init\'/4", (MR_String) "internal label");
#line 1058 "llds_out_file.m"
          return;
        }
#line 1056 "llds_out_file.m"
      }
#line 1060 "llds_out_file.m"
    {
#line 1060 "llds_out_file.m"
      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__TabInitMacro_11);
    }
#line 1061 "llds_out_file.m"
    {
#line 1061 "llds_out_file.m"
      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__SuffixOpen_9);
    }
#line 1062 "llds_out_file.m"
    {
#line 1062 "llds_out_file.m"
      backend_libs__name_mangle__output_proc_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_file__ProcLabel_10);
    }
#line 1063 "llds_out_file.m"
    {
#line 1063 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) ");\n");
    }
#line 1065 "llds_out_file.m"
    {
#line 1065 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\tMR_INIT_PROC_LAYOUT_ADDR(");
    }
#line 1066 "llds_out_file.m"
    {
#line 1066 "llds_out_file.m"
      ll_backend__llds_out__llds_out_code_addr__output_label_3_p_0(ll_backend__llds_out__llds_out_file__Label_6);
    }
#line 1067 "llds_out_file.m"
    {
#line 1067 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 1067 "llds_out_file.m"
      return;
    }
#line 1039 "llds_out_file.m"
  }
#line 1036 "llds_out_file.m"
}

#line 1029 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__write_int_pair_3_p_0(
#line 1029 "llds_out_file.m"
  MR_Tuple ll_backend__llds_out__llds_out_file__HeadVar__1_1)
#line 1029 "llds_out_file.m"
{
#line 1031 "llds_out_file.m"
  {
#line 1031 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 1031 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__LabelNum_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 1031 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__SlotNum_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));

#line 1032 "llds_out_file.m"
    {
#line 1032 "llds_out_file.m"
      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_file__LabelNum_4);
    }
#line 1033 "llds_out_file.m"
    {
#line 1033 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) ",");
    }
#line 1034 "llds_out_file.m"
    {
#line 1034 "llds_out_file.m"
      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_file__SlotNum_5);
#line 1034 "llds_out_file.m"
      return;
    }
#line 1031 "llds_out_file.m"
  }
#line 1029 "llds_out_file.m"
}

#line 1026 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_chunk_6_p_0_1(
#line 1026 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1026 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1026 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1026 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 1026 "llds_out_file.m"
{
#line 1026 "llds_out_file.m"
  {
#line 1026 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 1026 "llds_out_file.m"
    {
#line 1026 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__write_int_pair_3_p_0(((MR_Tuple) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
#line 1026 "llds_out_file.m"
      return;
    }
#line 1026 "llds_out_file.m"
  }
#line 1026 "llds_out_file.m"
}

#line 1012 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_chunk_6_p_0(
#line 1012 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_7,
#line 1012 "llds_out_file.m"
  MR_String ll_backend__llds_out__llds_out_file__Suffix_8,
#line 1012 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ProcLabel_9,
#line 1012 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__LabelSlotNums_10)
#line 1012 "llds_out_file.m"
{
#line 1016 "llds_out_file.m"
  {
#line 1016 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 1016 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeInfo_53_53;
#line 1016 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__ModuleName_12;
#line 1016 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__V_18_18;
#line 1023 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_33_33;
#line 1023 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_34_34;
#line 1023 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_35_35;
#line 1023 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_36_36;
#line 1023 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_37_37;
#line 1023 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_38_38;
#line 1023 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_39_39;
#line 1023 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_40_40;
#line 1023 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_41_41;
#line 1023 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_42_42;
#line 1023 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_43_43;
#line 1023 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_44_44;
#line 1023 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_45_45;
#line 1023 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_46_46;
#line 1023 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_47_47;
#line 1023 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_48_48;
#line 1023 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_49_49;
#line 1023 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_50_50;
#line 1023 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_51_51;
#line 1023 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_52_52;

#line 1017 "llds_out_file.m"
    {
#line 1017 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\tMR_init_label");
    }
#line 1018 "llds_out_file.m"
    {
#line 1018 "llds_out_file.m"
      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__Suffix_8);
    }
#line 5940 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeInfo_53_53 = (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_3[0];
#line 1019 "llds_out_file.m"
    {
#line 1019 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_18_18 = mercury__list__length_1_f_0(ll_backend__llds_out__llds_out_file__TypeInfo_53_53, ll_backend__llds_out__llds_out_file__LabelSlotNums_10);
    }
#line 1019 "llds_out_file.m"
    {
#line 1019 "llds_out_file.m"
      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_file__V_18_18);
    }
#line 1020 "llds_out_file.m"
    {
#line 1020 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "(");
    }
#line 1021 "llds_out_file.m"
    {
#line 1021 "llds_out_file.m"
      backend_libs__name_mangle__output_proc_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_file__ProcLabel_9);
    }
#line 1022 "llds_out_file.m"
    {
#line 1022 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1023 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 0)));
#line 1023 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__ModuleName_12 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 1)));
#line 1023 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 2)));
#line 1023 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 3)));
#line 1023 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 4)));
#line 1023 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 5)));
#line 1023 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_38_38 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1023 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1023 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1023 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1023 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1023 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 6)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1023 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 6)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1023 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 6)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1023 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 6)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 1023 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 6)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 1023 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 6)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 1023 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 6)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 1023 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 6)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 1023 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 6)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 1023 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 7)));
#line 1024 "llds_out_file.m"
    {
#line 1024 "llds_out_file.m"
      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_12);
    }
#line 1025 "llds_out_file.m"
    {
#line 1025 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
    }
#line 1026 "llds_out_file.m"
    {
#line 1026 "llds_out_file.m"
      mercury__io__write_list_5_p_0(ll_backend__llds_out__llds_out_file__TypeInfo_53_53, ll_backend__llds_out__llds_out_file__LabelSlotNums_10, (MR_String) ", ", (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_2[10]);
    }
#line 1027 "llds_out_file.m"
    {
#line 1027 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) ")\n");
#line 1027 "llds_out_file.m"
      return;
    }
#line 1016 "llds_out_file.m"
  }
#line 1012 "llds_out_file.m"
}

#line 1008 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_group_5_p_0_1(
#line 1008 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1008 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1008 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1008 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 1008 "llds_out_file.m"
{
#line 1008 "llds_out_file.m"
  {
#line 1008 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 1008 "llds_out_file.m"
    {
#line 1008 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_chunk_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 5))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
#line 1008 "llds_out_file.m"
      return;
    }
#line 1008 "llds_out_file.m"
  }
#line 1008 "llds_out_file.m"
}

#line 997 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_group_5_p_0(
#line 997 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_6,
#line 997 "llds_out_file.m"
  MR_String ll_backend__llds_out__llds_out_file__Suffix_7,
#line 997 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__3_3)
#line 997 "llds_out_file.m"
{
#line 1002 "llds_out_file.m"
  {
#line 1002 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 1002 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeInfo_18_18 = (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_3[0];
#line 1002 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ProcLabel_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__3_3, (MR_Integer) 0)));
#line 1002 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__RevLabelSlotNums_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__3_3, (MR_Integer) 1)));
#line 1002 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__LabelSlotNums_11;
#line 1002 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__LabelSlotNumChunks_13;
#line 1002 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_16_16;
#line 1008 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_IO_15;

#line 1003 "llds_out_file.m"
    {
#line 1003 "llds_out_file.m"
      mercury__list__reverse_2_p_0(ll_backend__llds_out__llds_out_file__TypeInfo_18_18, ll_backend__llds_out__llds_out_file__RevLabelSlotNums_9, &ll_backend__llds_out__llds_out_file__LabelSlotNums_11);
    }
#line 1007 "llds_out_file.m"
    {
#line 1007 "llds_out_file.m"
      mercury__list__chunk_3_p_0(ll_backend__llds_out__llds_out_file__TypeInfo_18_18, ll_backend__llds_out__llds_out_file__LabelSlotNums_11, (MR_Integer) 10, &ll_backend__llds_out__llds_out_file__LabelSlotNumChunks_13);
    }
#line 1008 "llds_out_file.m"
    {
#line 1008 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1008 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_16_16, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_5[12]));
#line 1008 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_16_16, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_group_5_p_0_1));
#line 1008 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1008 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_16_16, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_6));
#line 1008 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_16_16, 4) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Suffix_7));
#line 1008 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_16_16, 5) = ((MR_Box) (ll_backend__llds_out__llds_out_file__ProcLabel_8));
#line 1008 "llds_out_file.m"
    }
#line 1008 "llds_out_file.m"
    {
#line 1008 "llds_out_file.m"
      mercury__list__foldl_4_p_2((MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_1[2], (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__llds_out__llds_out_file__V_16_16, ll_backend__llds_out__llds_out_file__LabelSlotNumChunks_13, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_IO_15);
    }
#line 1002 "llds_out_file.m"
  }
#line 997 "llds_out_file.m"
}

#line 994 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_no_layout_init_chunk_4_p_0_1(
#line 994 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 994 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 994 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 994 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 994 "llds_out_file.m"
{
#line 994 "llds_out_file.m"
  {
#line 994 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 994 "llds_out_file.m"
    {
#line 994 "llds_out_file.m"
      mercury__io__write_int_3_p_0(((MR_Integer) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
#line 994 "llds_out_file.m"
      return;
    }
#line 994 "llds_out_file.m"
  }
#line 994 "llds_out_file.m"
}

#line 985 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_no_layout_init_chunk_4_p_0(
#line 985 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ProcLabel_5,
#line 985 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__LabelNums_6)
#line 985 "llds_out_file.m"
{
#line 988 "llds_out_file.m"
  {
#line 988 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 988 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_24_24;
#line 988 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__V_12_12;

#line 989 "llds_out_file.m"
    {
#line 989 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\tMR_init_label");
    }
#line 6187 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_24_24 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 990 "llds_out_file.m"
    {
#line 990 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_12_12 = mercury__list__length_1_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_24_24, ll_backend__llds_out__llds_out_file__LabelNums_6);
    }
#line 990 "llds_out_file.m"
    {
#line 990 "llds_out_file.m"
      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_file__V_12_12);
    }
#line 991 "llds_out_file.m"
    {
#line 991 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "(");
    }
#line 992 "llds_out_file.m"
    {
#line 992 "llds_out_file.m"
      backend_libs__name_mangle__output_proc_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_file__ProcLabel_5);
    }
#line 993 "llds_out_file.m"
    {
#line 993 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) ",");
    }
#line 994 "llds_out_file.m"
    {
#line 994 "llds_out_file.m"
      mercury__io__write_list_5_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_24_24, ll_backend__llds_out__llds_out_file__LabelNums_6, (MR_String) ",", (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_2[9]);
    }
#line 995 "llds_out_file.m"
    {
#line 995 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) ")\n");
#line 995 "llds_out_file.m"
      return;
    }
#line 988 "llds_out_file.m"
  }
#line 985 "llds_out_file.m"
}

#line 982 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_no_layout_init_group_3_p_0_1(
#line 982 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 982 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 982 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 982 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 982 "llds_out_file.m"
{
#line 982 "llds_out_file.m"
  {
#line 982 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 982 "llds_out_file.m"
    {
#line 982 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_c_internal_label_no_layout_init_chunk_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
#line 982 "llds_out_file.m"
      return;
    }
#line 982 "llds_out_file.m"
  }
#line 982 "llds_out_file.m"
}

#line 973 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_no_layout_init_group_3_p_0(
#line 973 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1)
#line 973 "llds_out_file.m"
{
#line 976 "llds_out_file.m"
  {
#line 976 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 976 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_14_14 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 976 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ProcLabel_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 976 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__RevLabelNums_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 976 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__LabelNums_7;
#line 976 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__LabelNumChunks_9;
#line 976 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_12_12;
#line 982 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_IO_11;

#line 977 "llds_out_file.m"
    {
#line 977 "llds_out_file.m"
      mercury__list__reverse_2_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_14_14, ll_backend__llds_out__llds_out_file__RevLabelNums_5, &ll_backend__llds_out__llds_out_file__LabelNums_7);
    }
#line 981 "llds_out_file.m"
    {
#line 981 "llds_out_file.m"
      mercury__list__chunk_3_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_14_14, ll_backend__llds_out__llds_out_file__LabelNums_7, (MR_Integer) 10, &ll_backend__llds_out__llds_out_file__LabelNumChunks_9);
    }
#line 982 "llds_out_file.m"
    {
#line 982 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 982 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_12_12, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_6[4]));
#line 982 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_12_12, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_c_internal_label_no_layout_init_group_3_p_0_1));
#line 982 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 982 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_12_12, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__ProcLabel_4));
#line 982 "llds_out_file.m"
    }
#line 982 "llds_out_file.m"
    {
#line 982 "llds_out_file.m"
      mercury__list__foldl_4_p_2((MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_1[1], (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__llds_out__llds_out_file__V_12_12, ll_backend__llds_out__llds_out_file__LabelNumChunks_9, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_IO_11);
    }
#line 976 "llds_out_file.m"
  }
#line 973 "llds_out_file.m"
}

#line 931 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__group_init_c_labels_10_p_0(
#line 931 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 931 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2,
#line 931 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoLayoutMap_0_3,
#line 931 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoLayoutMap_4,
#line 931 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_0_5,
#line 931 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_6,
#line 931 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_0_7,
#line 931 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_8,
#line 931 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_0_9,
#line 931 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_10)
#line 931 "llds_out_file.m"
{
#line 940 "llds_out_file.m"
  while (MR_TRUE)
#line 940 "llds_out_file.m"
    {
#line 940 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 940 "llds_out_file.m"
      {
#line 940 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 940 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 940 "llds_out_file.m"
          {
#line 940 "llds_out_file.m"
            *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_10 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_0_9;
#line 940 "llds_out_file.m"
            *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_8 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_0_7;
#line 940 "llds_out_file.m"
            *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_6 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_0_5;
#line 940 "llds_out_file.m"
            *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoLayoutMap_4 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoLayoutMap_0_3;
#line 940 "llds_out_file.m"
          }
#line 940 "llds_out_file.m"
        else
#line 943 "llds_out_file.m"
          {
#line 943 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Label_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 0)));
#line 943 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Labels_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 1)));
#line 943 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_51_51;
#line 943 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_52_52;
#line 943 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_53_53;
#line 943 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoLayoutMap_57_57;

#line 966 "llds_out_file.m"
            if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Label_25)) == (MR_mktag((MR_Integer) 1))))
#line 967 "llds_out_file.m"
              {
#line 968 "llds_out_file.m"
                {
#line 968 "llds_out_file.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_out.llds_out_file", (MR_String) "predicate \140ll_backend.llds_out.llds_out_file.group_init_c_labels\'/10", (MR_String) "entry label");
#line 968 "llds_out_file.m"
                  return;
                }
#line 967 "llds_out_file.m"
              }
#line 966 "llds_out_file.m"
            else
#line 945 "llds_out_file.m"
              {
#line 945 "llds_out_file.m"
                MR_Integer ll_backend__llds_out__llds_out_file__LabelNum_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Label_25, (MR_Integer) 0)));
#line 945 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__ProcLabel_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Label_25, (MR_Integer) 1)));
#line 963 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__Slot_33;
#line 946 "llds_out_file.m"
                MR_Box ll_backend__llds_out__llds_out_file__conv0_Slot_33;

#line 946 "llds_out_file.m"
                {
#line 946 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0, ll_backend__llds_out__llds_out_file__HeadVar__1_1, ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_25)), &ll_backend__llds_out__llds_out_file__conv0_Slot_33);
                }
#line 946 "llds_out_file.m"
                if (ll_backend__llds_out__llds_out_file__succeeded)
#line 946 "llds_out_file.m"
                  {
#line 946 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__Slot_33 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv0_Slot_33);
#line 946 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__succeeded = MR_TRUE;
#line 946 "llds_out_file.m"
                  }
#line 963 "llds_out_file.m"
                if (ll_backend__llds_out__llds_out_file__succeeded)
#line 947 "llds_out_file.m"
                  {
#line 947 "llds_out_file.m"
                    MR_Word ll_backend__llds_out__llds_out_file__ArrayName_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Slot_33, (MR_Integer) 0)));
#line 947 "llds_out_file.m"
                    MR_Integer ll_backend__llds_out__llds_out_file__SlotNum_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Slot_33, (MR_Integer) 1)));
#line 960 "llds_out_file.m"
                    MR_Word ll_backend__llds_out__llds_out_file__Vars_36;

#line 948 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__ArrayName_34)) == (MR_mktag((MR_Integer) 1)));
#line 948 "llds_out_file.m"
                    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 948 "llds_out_file.m"
                      {
#line 948 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__Vars_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__ArrayName_34, (MR_Integer) 0)));
#line 949 "llds_out_file.m"
                        {
#line 949 "llds_out_file.m"
                          MR_Tuple ll_backend__llds_out__llds_out_file__Pair_37;

#line 949 "llds_out_file.m"
                          {
#line 949 "llds_out_file.m"
                            ll_backend__llds_out__llds_out_file__Pair_37 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 949 "llds_out_file.m"
                            MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Pair_37, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__LabelNum_31));
#line 949 "llds_out_file.m"
                            MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Pair_37, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__SlotNum_35));
#line 949 "llds_out_file.m"
                          }
#line 953 "llds_out_file.m"
                          if ((ll_backend__llds_out__llds_out_file__Vars_36 == (MR_Integer) 2))
#line 957 "llds_out_file.m"
                            {
#line 958 "llds_out_file.m"
                              {
#line 958 "llds_out_file.m"
                                mercury__multi_map__set_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_3[0], ((MR_Box) (ll_backend__llds_out__llds_out_file__ProcLabel_32)), ((MR_Box) (ll_backend__llds_out__llds_out_file__Pair_37)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_0_9, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_51_51);
                              }
#line 958 "llds_out_file.m"
                              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_53_53 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_0_5;
#line 958 "llds_out_file.m"
                              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_52_52 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_0_7;
#line 957 "llds_out_file.m"
                            }
#line 953 "llds_out_file.m"
                          else
#line 953 "llds_out_file.m"
                            if ((ll_backend__llds_out__llds_out_file__Vars_36 == (MR_Integer) 0))
#line 951 "llds_out_file.m"
                              {
#line 952 "llds_out_file.m"
                                {
#line 952 "llds_out_file.m"
                                  mercury__multi_map__set_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_3[0], ((MR_Box) (ll_backend__llds_out__llds_out_file__ProcLabel_32)), ((MR_Box) (ll_backend__llds_out__llds_out_file__Pair_37)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_0_5, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_53_53);
                                }
#line 952 "llds_out_file.m"
                                ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_52_52 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_0_7;
#line 952 "llds_out_file.m"
                                ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_51_51 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_0_9;
#line 951 "llds_out_file.m"
                              }
#line 953 "llds_out_file.m"
                            else
#line 954 "llds_out_file.m"
                              {
#line 955 "llds_out_file.m"
                                {
#line 955 "llds_out_file.m"
                                  mercury__multi_map__set_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_3[0], ((MR_Box) (ll_backend__llds_out__llds_out_file__ProcLabel_32)), ((MR_Box) (ll_backend__llds_out__llds_out_file__Pair_37)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_0_7, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_52_52);
                                }
#line 955 "llds_out_file.m"
                                ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_53_53 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_0_5;
#line 955 "llds_out_file.m"
                                ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_51_51 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_0_9;
#line 954 "llds_out_file.m"
                              }
#line 949 "llds_out_file.m"
                        }
#line 948 "llds_out_file.m"
                      }
#line 948 "llds_out_file.m"
                    else
#line 961 "llds_out_file.m"
                      {
#line 961 "llds_out_file.m"
                        {
#line 961 "llds_out_file.m"
                          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_out.llds_out_file", (MR_String) "predicate \140ll_backend.llds_out.llds_out_file.group_init_c_labels\'/10", (MR_String) "bad slot type");
#line 961 "llds_out_file.m"
                          return;
                        }
#line 961 "llds_out_file.m"
                      }
#line 961 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoLayoutMap_57_57 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoLayoutMap_0_3;
#line 947 "llds_out_file.m"
                  }
#line 963 "llds_out_file.m"
                else
#line 964 "llds_out_file.m"
                  {
#line 964 "llds_out_file.m"
                    {
#line 964 "llds_out_file.m"
                      mercury__multi_map__set_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (ll_backend__llds_out__llds_out_file__ProcLabel_32)), ((MR_Box) (ll_backend__llds_out__llds_out_file__LabelNum_31)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoLayoutMap_0_3, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoLayoutMap_57_57);
                    }
#line 964 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_51_51 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_0_9;
#line 964 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_52_52 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_0_7;
#line 964 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_53_53 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_0_5;
#line 964 "llds_out_file.m"
                  }
#line 945 "llds_out_file.m"
              }
#line 970 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 970 "llds_out_file.m"
            {
#line 970 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_file__Labels_26;
#line 970 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoLayoutMap_0__tmp_copy_3 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoLayoutMap_57_57;
#line 970 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_0__tmp_copy_5 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_53_53;
#line 970 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_0__tmp_copy_7 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_52_52;
#line 970 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_0__tmp_copy_9 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_51_51;

#line 970 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_0_9 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_0__tmp_copy_9;
#line 970 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_0_7 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_0__tmp_copy_7;
#line 970 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_0_5 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_0__tmp_copy_5;
#line 970 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoLayoutMap_0_3 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoLayoutMap_0__tmp_copy_3;
#line 970 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__2_2 = ll_backend__llds_out__llds_out_file__HeadVar__2__tmp_copy_2;
#line 970 "llds_out_file.m"
            }
#line 970 "llds_out_file.m"
            continue;
#line 943 "llds_out_file.m"
          }
#line 940 "llds_out_file.m"
      }
#line 940 "llds_out_file.m"
      break;
#line 940 "llds_out_file.m"
    }
#line 931 "llds_out_file.m"
}

#line 928 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0_5(
#line 928 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 928 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 928 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 928 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 928 "llds_out_file.m"
{
#line 928 "llds_out_file.m"
  {
#line 928 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 928 "llds_out_file.m"
    {
#line 928 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_group_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
#line 928 "llds_out_file.m"
      return;
    }
#line 928 "llds_out_file.m"
  }
#line 928 "llds_out_file.m"
}

#line 924 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0_4(
#line 924 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 924 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 924 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 924 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 924 "llds_out_file.m"
{
#line 924 "llds_out_file.m"
  {
#line 924 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 924 "llds_out_file.m"
    {
#line 924 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_group_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
#line 924 "llds_out_file.m"
      return;
    }
#line 924 "llds_out_file.m"
  }
#line 924 "llds_out_file.m"
}

#line 920 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0_3(
#line 920 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 920 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 920 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 920 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 920 "llds_out_file.m"
{
#line 920 "llds_out_file.m"
  {
#line 920 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 920 "llds_out_file.m"
    {
#line 920 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_group_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
#line 920 "llds_out_file.m"
      return;
    }
#line 920 "llds_out_file.m"
  }
#line 920 "llds_out_file.m"
}

#line 916 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0_2(
#line 916 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 916 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 916 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 916 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 916 "llds_out_file.m"
{
#line 916 "llds_out_file.m"
  {
#line 916 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 916 "llds_out_file.m"
    {
#line 916 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_c_internal_label_no_layout_init_group_3_p_0(((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
#line 916 "llds_out_file.m"
      return;
    }
#line 916 "llds_out_file.m"
  }
#line 916 "llds_out_file.m"
}

#line 905 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0_1(
#line 905 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 905 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 905 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 905 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 905 "llds_out_file.m"
{
#line 905 "llds_out_file.m"
  {
#line 905 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 905 "llds_out_file.m"
    {
#line 905 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_c_entry_label_init_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
#line 905 "llds_out_file.m"
      return;
    }
#line 905 "llds_out_file.m"
  }
#line 905 "llds_out_file.m"
}

#line 900 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0(
#line 900 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_6,
#line 900 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__EntryLabels_7,
#line 900 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__InternalLabels_8)
#line 900 "llds_out_file.m"
{
#line 903 "llds_out_file.m"
  {
#line 903 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 903 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_83_83;
#line 903 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_84_84;
#line 903 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85;
#line 903 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeInfo_86_86;
#line 903 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeInfo_94_94;
#line 903 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__EntryLabelToLayoutMap_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 3)));
#line 903 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__InternalLabelToLayoutMap_11;
#line 903 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__NoLayoutInternalMap_12;
#line 903 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__NoVarLayoutInternalMap_13;
#line 903 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__SVarLayoutInternalMap_14;
#line 903 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__LVarLayoutInternalMap_15;
#line 903 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__NoLayoutInternalList_16;
#line 903 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__NoVarLayoutInternalList_17;
#line 903 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__SVarLayoutInternalList_18;
#line 903 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__LVarLayoutInternalList_19;
#line 903 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_22_22;
#line 903 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_24_24;
#line 903 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_25_25;
#line 903 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_26_26;
#line 903 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_27_27;
#line 903 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_30_30;
#line 903 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_33_33;
#line 903 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_36_36;
#line 904 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 0)));
#line 904 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_40_40 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 1)));
#line 904 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 2)));
#line 904 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 4)));
#line 904 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 5)));
#line 904 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_44_44 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 904 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 904 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 904 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 904 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 904 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 904 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 904 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 904 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 904 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 904 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 904 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 904 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 904 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 904 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)));
#line 905 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_IO_23_23;
#line 908 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_59_59;
#line 908 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_60_60;
#line 908 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_61_61;
#line 908 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_62_62;
#line 908 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_63_63;
#line 908 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_64_64;
#line 908 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_65_65;
#line 908 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_66_66;
#line 908 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_67_67;
#line 908 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_68_68;
#line 908 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_69_69;
#line 908 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_70_70;
#line 908 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_71_71;
#line 908 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_72_72;
#line 908 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_73_73;
#line 908 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_74_74;
#line 908 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_75_75;
#line 908 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_76_76;
#line 908 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_77_77;
#line 908 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_78_78;
#line 916 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_IO_29_29;
#line 920 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_IO_31_31;
#line 924 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv3_STATE_VARIABLE_IO_34_34;
#line 928 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv4_STATE_VARIABLE_IO_21;

#line 905 "llds_out_file.m"
    {
#line 905 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 905 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_22_22, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_6[3]));
#line 905 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_22_22, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0_1));
#line 905 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 905 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_22_22, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__EntryLabelToLayoutMap_10));
#line 905 "llds_out_file.m"
    }
#line 6906 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_83_83 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 905 "llds_out_file.m"
    {
#line 905 "llds_out_file.m"
      mercury__list__foldl_4_p_2((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ll_backend__llds_out__llds_out_file__TypeCtorInfo_83_83, ll_backend__llds_out__llds_out_file__V_22_22, ll_backend__llds_out__llds_out_file__EntryLabels_7, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_IO_23_23);
    }
#line 908 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 0)));
#line 908 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_60_60 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 1)));
#line 908 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__InternalLabelToLayoutMap_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 2)));
#line 908 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 3)));
#line 908 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 4)));
#line 908 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 5)));
#line 908 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_64_64 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 908 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 908 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 908 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_67_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 908 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_68_68 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 908 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_69_69 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 908 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_70_70 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 908 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 908 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 908 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 908 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 908 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_75_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 908 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_76_76 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 908 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_77_77 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 6)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 908 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)));
#line 6955 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_84_84 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0;
#line 6957 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 909 "llds_out_file.m"
    {
#line 909 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_24_24 = mercury__multi_map__init_0_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_84_84, ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85);
    }
#line 6964 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeInfo_86_86 = (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_3[0];
#line 909 "llds_out_file.m"
    {
#line 909 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_25_25 = mercury__multi_map__init_0_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_84_84, ll_backend__llds_out__llds_out_file__TypeInfo_86_86);
    }
#line 909 "llds_out_file.m"
    {
#line 909 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_26_26 = mercury__multi_map__init_0_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_84_84, ll_backend__llds_out__llds_out_file__TypeInfo_86_86);
    }
#line 909 "llds_out_file.m"
    {
#line 909 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_27_27 = mercury__multi_map__init_0_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_84_84, ll_backend__llds_out__llds_out_file__TypeInfo_86_86);
    }
#line 909 "llds_out_file.m"
    {
#line 909 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__group_init_c_labels_10_p_0(ll_backend__llds_out__llds_out_file__InternalLabelToLayoutMap_11, ll_backend__llds_out__llds_out_file__InternalLabels_8, ll_backend__llds_out__llds_out_file__V_24_24, &ll_backend__llds_out__llds_out_file__NoLayoutInternalMap_12, ll_backend__llds_out__llds_out_file__V_25_25, &ll_backend__llds_out__llds_out_file__NoVarLayoutInternalMap_13, ll_backend__llds_out__llds_out_file__V_26_26, &ll_backend__llds_out__llds_out_file__SVarLayoutInternalMap_14, ll_backend__llds_out__llds_out_file__V_27_27, &ll_backend__llds_out__llds_out_file__LVarLayoutInternalMap_15);
    }
#line 915 "llds_out_file.m"
    {
#line 915 "llds_out_file.m"
      mercury__multi_map__to_assoc_list_2_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_84_84, ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85, ll_backend__llds_out__llds_out_file__NoLayoutInternalMap_12, &ll_backend__llds_out__llds_out_file__NoLayoutInternalList_16);
    }
#line 916 "llds_out_file.m"
    {
#line 916 "llds_out_file.m"
      mercury__list__foldl_4_p_2((MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_2[0], ll_backend__llds_out__llds_out_file__TypeCtorInfo_83_83, (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_2[8], ll_backend__llds_out__llds_out_file__NoLayoutInternalList_16, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_IO_29_29);
    }
#line 919 "llds_out_file.m"
    {
#line 919 "llds_out_file.m"
      mercury__multi_map__to_assoc_list_2_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_84_84, ll_backend__llds_out__llds_out_file__TypeInfo_86_86, ll_backend__llds_out__llds_out_file__NoVarLayoutInternalMap_13, &ll_backend__llds_out__llds_out_file__NoVarLayoutInternalList_17);
    }
#line 920 "llds_out_file.m"
    {
#line 920 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 920 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_30_30, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_4[3]));
#line 920 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_30_30, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0_3));
#line 920 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 920 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_30_30, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_6));
#line 920 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_30_30, 4) = ((MR_Box) ((MR_String) "_nvi"));
#line 920 "llds_out_file.m"
    }
#line 7017 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeInfo_94_94 = (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_2[1];
#line 920 "llds_out_file.m"
    {
#line 920 "llds_out_file.m"
      mercury__list__foldl_4_p_2(ll_backend__llds_out__llds_out_file__TypeInfo_94_94, ll_backend__llds_out__llds_out_file__TypeCtorInfo_83_83, ll_backend__llds_out__llds_out_file__V_30_30, ll_backend__llds_out__llds_out_file__NoVarLayoutInternalList_17, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_IO_31_31);
    }
#line 923 "llds_out_file.m"
    {
#line 923 "llds_out_file.m"
      mercury__multi_map__to_assoc_list_2_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_84_84, ll_backend__llds_out__llds_out_file__TypeInfo_86_86, ll_backend__llds_out__llds_out_file__SVarLayoutInternalMap_14, &ll_backend__llds_out__llds_out_file__SVarLayoutInternalList_18);
    }
#line 924 "llds_out_file.m"
    {
#line 924 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 924 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_33_33, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_4[3]));
#line 924 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_33_33, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0_4));
#line 924 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 924 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_33_33, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_6));
#line 924 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_33_33, 4) = ((MR_Box) ((MR_String) "_svi"));
#line 924 "llds_out_file.m"
    }
#line 924 "llds_out_file.m"
    {
#line 924 "llds_out_file.m"
      mercury__list__foldl_4_p_2(ll_backend__llds_out__llds_out_file__TypeInfo_94_94, ll_backend__llds_out__llds_out_file__TypeCtorInfo_83_83, ll_backend__llds_out__llds_out_file__V_33_33, ll_backend__llds_out__llds_out_file__SVarLayoutInternalList_18, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv3_STATE_VARIABLE_IO_34_34);
    }
#line 927 "llds_out_file.m"
    {
#line 927 "llds_out_file.m"
      mercury__multi_map__to_assoc_list_2_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_84_84, ll_backend__llds_out__llds_out_file__TypeInfo_86_86, ll_backend__llds_out__llds_out_file__LVarLayoutInternalMap_15, &ll_backend__llds_out__llds_out_file__LVarLayoutInternalList_19);
    }
#line 928 "llds_out_file.m"
    {
#line 928 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 928 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_36_36, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_4[3]));
#line 928 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_36_36, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0_5));
#line 928 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_36_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 928 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_36_36, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_6));
#line 928 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_36_36, 4) = ((MR_Box) ((MR_String) "_lvi"));
#line 928 "llds_out_file.m"
    }
#line 928 "llds_out_file.m"
    {
#line 928 "llds_out_file.m"
      mercury__list__foldl_4_p_2(ll_backend__llds_out__llds_out_file__TypeInfo_94_94, ll_backend__llds_out__llds_out_file__TypeCtorInfo_83_83, ll_backend__llds_out__llds_out_file__V_36_36, ll_backend__llds_out__llds_out_file__LVarLayoutInternalList_19, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv4_STATE_VARIABLE_IO_21);
    }
#line 903 "llds_out_file.m"
  }
#line 900 "llds_out_file.m"
}

#line 869 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_entry_label_decl_6_p_0(
#line 869 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file___Info_7,
#line 869 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Label_8,
#line 869 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_17,
#line 869 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_18)
#line 869 "llds_out_file.m"
{
#line 872 "llds_out_file.m"
  {
#line 872 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 872 "llds_out_file.m"
    {
#line 872 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_114_101_99_111_114_100_95_101_110_116_114_121_95_108_97_98_101_108_95_100_101_99_108_95_95_91_49_93_95_48_6_p_0(ll_backend__llds_out__llds_out_file__Label_8, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_17, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_18);
#line 872 "llds_out_file.m"
      return;
    }
#line 872 "llds_out_file.m"
  }
#line 869 "llds_out_file.m"
}

#line 862 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__insert_internal_label_code_addr_decl_4_p_0(
#line 862 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ProcLabel_5,
#line 862 "llds_out_file.m"
  MR_Integer ll_backend__llds_out__llds_out_file__LabelNum_6,
#line 862 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_9,
#line 862 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_10)
#line 862 "llds_out_file.m"
{
#line 865 "llds_out_file.m"
  {
#line 865 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 865 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__DeclId_8;
#line 865 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_11_11;
#line 865 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_12_12;

#line 866 "llds_out_file.m"
    {
#line 866 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 866 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_12_12, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__LabelNum_6));
#line 866 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_12_12, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__ProcLabel_5));
#line 866 "llds_out_file.m"
    }
#line 866 "llds_out_file.m"
    {
#line 866 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 866 "llds_out_file.m"
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__V_11_11, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__V_12_12));
#line 866 "llds_out_file.m"
    }
#line 866 "llds_out_file.m"
    {
#line 866 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__DeclId_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 866 "llds_out_file.m"
      MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_file__DeclId_8, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__V_11_11));
#line 866 "llds_out_file.m"
    }
#line 867 "llds_out_file.m"
    {
#line 867 "llds_out_file.m"
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__llds_out__llds_out_file__DeclId_8, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_9, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_10);
#line 867 "llds_out_file.m"
      return;
    }
#line 865 "llds_out_file.m"
  }
#line 862 "llds_out_file.m"
}

#line 859 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_internal_label_decl_group_6_p_0_2(
#line 859 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 859 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 859 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 859 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 859 "llds_out_file.m"
{
#line 859 "llds_out_file.m"
  {
#line 859 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 859 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_DeclSet_10;

#line 859 "llds_out_file.m"
    {
#line 859 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__insert_internal_label_code_addr_decl_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Integer) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_DeclSet_10);
    }
#line 859 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_DeclSet_10));
#line 859 "llds_out_file.m"
  }
#line 859 "llds_out_file.m"
}

#line 857 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_internal_label_decl_group_6_p_0_1(
#line 857 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 857 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 857 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 857 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 857 "llds_out_file.m"
{
#line 857 "llds_out_file.m"
  {
#line 857 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 857 "llds_out_file.m"
    {
#line 857 "llds_out_file.m"
      mercury__io__write_int_3_p_0(((MR_Integer) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
#line 857 "llds_out_file.m"
      return;
    }
#line 857 "llds_out_file.m"
  }
#line 857 "llds_out_file.m"
}

#line 847 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_internal_label_decl_group_6_p_0(
#line 847 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ProcLabel_7,
#line 847 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__LabelNums_8,
#line 847 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_11,
#line 847 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_12)
#line 847 "llds_out_file.m"
{
#line 851 "llds_out_file.m"
  {
#line 851 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 851 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_31_31;
#line 851 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__V_17_17;
#line 851 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_29_29;
#line 859 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_DeclSet_12;

#line 852 "llds_out_file.m"
    {
#line 852 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "MR_decl_label");
    }
#line 7266 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_31_31 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 853 "llds_out_file.m"
    {
#line 853 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_17_17 = mercury__list__length_1_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_31_31, ll_backend__llds_out__llds_out_file__LabelNums_8);
    }
#line 853 "llds_out_file.m"
    {
#line 853 "llds_out_file.m"
      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_file__V_17_17);
    }
#line 854 "llds_out_file.m"
    {
#line 854 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "(");
    }
#line 855 "llds_out_file.m"
    {
#line 855 "llds_out_file.m"
      backend_libs__name_mangle__output_proc_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_file__ProcLabel_7);
    }
#line 856 "llds_out_file.m"
    {
#line 856 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 857 "llds_out_file.m"
    {
#line 857 "llds_out_file.m"
      mercury__io__write_list_5_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_31_31, ll_backend__llds_out__llds_out_file__LabelNums_8, (MR_String) ",", (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_2[7]);
    }
#line 858 "llds_out_file.m"
    {
#line 858 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) ")\n");
    }
#line 859 "llds_out_file.m"
    {
#line 859 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 859 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_29_29, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_6[2]));
#line 859 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_29_29, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_record_internal_label_decl_group_6_p_0_2));
#line 859 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_29_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 859 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_29_29, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__ProcLabel_7));
#line 859 "llds_out_file.m"
    }
#line 859 "llds_out_file.m"
    {
#line 859 "llds_out_file.m"
      mercury__list__foldl_4_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_31_31, (MR_Word) &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0, ll_backend__llds_out__llds_out_file__V_29_29, ll_backend__llds_out__llds_out_file__LabelNums_8, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_11)), &ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_DeclSet_12);
    }
#line 859 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_12 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_DeclSet_12);
#line 851 "llds_out_file.m"
  }
#line 847 "llds_out_file.m"
}

#line 844 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_internal_label_decls_5_p_0_2(
#line 844 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 844 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 844 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 844 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 844 "llds_out_file.m"
{
#line 844 "llds_out_file.m"
  {
#line 844 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 844 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv3_STATE_VARIABLE_DeclSet_10;

#line 844 "llds_out_file.m"
    {
#line 844 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__insert_internal_label_code_addr_decl_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Integer) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv3_STATE_VARIABLE_DeclSet_10);
    }
#line 844 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv3_STATE_VARIABLE_DeclSet_10));
#line 844 "llds_out_file.m"
  }
#line 844 "llds_out_file.m"
}

#line 842 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_internal_label_decls_5_p_0_1(
#line 842 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 842 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 842 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 842 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 842 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 842 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5)
#line 842 "llds_out_file.m"
{
#line 842 "llds_out_file.m"
  {
#line 842 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 842 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_DeclSet_12;

#line 842 "llds_out_file.m"
    {
#line 842 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_record_internal_label_decl_group_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_DeclSet_12);
    }
#line 842 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_DeclSet_12));
#line 842 "llds_out_file.m"
  }
#line 842 "llds_out_file.m"
}

#line 833 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_internal_label_decls_5_p_0(
#line 833 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 833 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_13,
#line 833 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_14)
#line 833 "llds_out_file.m"
{
#line 836 "llds_out_file.m"
  {
#line 836 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 836 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_22_22 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 836 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_29_29;
#line 836 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ProcLabel_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 836 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__RevLabelNums_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 836 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__LabelNums_10;
#line 836 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__LabelNumChunks_12;
#line 836 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_17_17;
#line 836 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_18_18;
#line 836 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_20_20;
#line 842 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_DeclSet_18_18;
#line 842 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_IO_16;
#line 844 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv4_STATE_VARIABLE_DeclSet_14;

#line 837 "llds_out_file.m"
    {
#line 837 "llds_out_file.m"
      mercury__list__reverse_2_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_22_22, ll_backend__llds_out__llds_out_file__RevLabelNums_7, &ll_backend__llds_out__llds_out_file__LabelNums_10);
    }
#line 841 "llds_out_file.m"
    {
#line 841 "llds_out_file.m"
      mercury__list__chunk_3_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_22_22, ll_backend__llds_out__llds_out_file__LabelNums_10, (MR_Integer) 10, &ll_backend__llds_out__llds_out_file__LabelNumChunks_12);
    }
#line 842 "llds_out_file.m"
    {
#line 842 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 842 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_17_17, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_5[11]));
#line 842 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_17_17, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_record_internal_label_decls_5_p_0_1));
#line 842 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 842 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_17_17, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__ProcLabel_6));
#line 842 "llds_out_file.m"
    }
#line 7461 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_29_29 = (MR_Word) &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0;
#line 842 "llds_out_file.m"
    {
#line 842 "llds_out_file.m"
      mercury__list__foldl2_6_p_2((MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_1[1], ll_backend__llds_out__llds_out_file__TypeCtorInfo_29_29, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__llds_out__llds_out_file__V_17_17, ll_backend__llds_out__llds_out_file__LabelNumChunks_12, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_13)), &ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_DeclSet_18_18, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_IO_16);
    }
#line 842 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_18_18 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_DeclSet_18_18);
#line 844 "llds_out_file.m"
    {
#line 844 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 844 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_20_20, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_6[2]));
#line 844 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_20_20, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_record_internal_label_decls_5_p_0_2));
#line 844 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 844 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_20_20, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__ProcLabel_6));
#line 844 "llds_out_file.m"
    }
#line 844 "llds_out_file.m"
    {
#line 844 "llds_out_file.m"
      mercury__list__foldl_4_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_22_22, ll_backend__llds_out__llds_out_file__TypeCtorInfo_29_29, ll_backend__llds_out__llds_out_file__V_20_20, ll_backend__llds_out__llds_out_file__LabelNums_10, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_18_18)), &ll_backend__llds_out__llds_out_file__conv4_STATE_VARIABLE_DeclSet_14);
    }
#line 844 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_14 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv4_STATE_VARIABLE_DeclSet_14);
#line 836 "llds_out_file.m"
  }
#line 833 "llds_out_file.m"
}

#line 819 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__group_decl_c_labels_3_p_0(
#line 819 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 819 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabelMap_0_2,
#line 819 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabelMap_3)
#line 819 "llds_out_file.m"
{
#line 822 "llds_out_file.m"
  while (MR_TRUE)
#line 822 "llds_out_file.m"
    {
#line 822 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 822 "llds_out_file.m"
      {
#line 822 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 822 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 822 "llds_out_file.m"
          *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabelMap_3 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabelMap_0_2;
#line 822 "llds_out_file.m"
        else
#line 823 "llds_out_file.m"
          {
#line 823 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Label_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 823 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Labels_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 823 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabelMap_19_19;

#line 827 "llds_out_file.m"
            if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Label_7)) == (MR_mktag((MR_Integer) 1))))
#line 828 "llds_out_file.m"
              {
#line 829 "llds_out_file.m"
                {
#line 829 "llds_out_file.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_out.llds_out_file", (MR_String) "predicate \140ll_backend.llds_out.llds_out_file.group_decl_c_labels\'/3", (MR_String) "entry label");
#line 829 "llds_out_file.m"
                  return;
                }
#line 828 "llds_out_file.m"
              }
#line 827 "llds_out_file.m"
            else
#line 825 "llds_out_file.m"
              {
#line 825 "llds_out_file.m"
                MR_Integer ll_backend__llds_out__llds_out_file__LabelNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Label_7, (MR_Integer) 0)));
#line 825 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__ProcLabel_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Label_7, (MR_Integer) 1)));

#line 826 "llds_out_file.m"
                {
#line 826 "llds_out_file.m"
                  mercury__multi_map__set_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (ll_backend__llds_out__llds_out_file__ProcLabel_11)), ((MR_Box) (ll_backend__llds_out__llds_out_file__LabelNum_10)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabelMap_0_2, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabelMap_19_19);
                }
#line 825 "llds_out_file.m"
              }
#line 831 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 831 "llds_out_file.m"
            {
#line 831 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__Labels_8;
#line 831 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabelMap_0__tmp_copy_2 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabelMap_19_19;

#line 831 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabelMap_0_2 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabelMap_0__tmp_copy_2;
#line 831 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 831 "llds_out_file.m"
            }
#line 831 "llds_out_file.m"
            continue;
#line 823 "llds_out_file.m"
          }
#line 822 "llds_out_file.m"
      }
#line 822 "llds_out_file.m"
      break;
#line 822 "llds_out_file.m"
    }
#line 819 "llds_out_file.m"
}

#line 816 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_c_label_decls_7_p_0_2(
#line 816 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 816 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 816 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 816 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 816 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 816 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5)
#line 816 "llds_out_file.m"
{
#line 816 "llds_out_file.m"
  {
#line 816 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 816 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv3_STATE_VARIABLE_DeclSet_18;

#line 816 "llds_out_file.m"
    {
#line 816 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_record_entry_label_decl_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv3_STATE_VARIABLE_DeclSet_18);
    }
#line 816 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv3_STATE_VARIABLE_DeclSet_18));
#line 816 "llds_out_file.m"
  }
#line 816 "llds_out_file.m"
}

#line 814 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_c_label_decls_7_p_0_1(
#line 814 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 814 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 814 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 814 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 814 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 814 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5)
#line 814 "llds_out_file.m"
{
#line 814 "llds_out_file.m"
  {
#line 814 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 814 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_DeclSet_14;

#line 814 "llds_out_file.m"
    {
#line 814 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_record_internal_label_decls_5_p_0(((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_DeclSet_14);
    }
#line 814 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_DeclSet_14));
#line 814 "llds_out_file.m"
  }
#line 814 "llds_out_file.m"
}

#line 806 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_c_label_decls_7_p_0(
#line 806 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_8,
#line 806 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__EntryLabels_9,
#line 806 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__InternalLabels_10,
#line 806 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_15,
#line 806 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_16)
#line 806 "llds_out_file.m"
{
#line 811 "llds_out_file.m"
  {
#line 811 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 811 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_26_26 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0;
#line 811 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_27_27 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 811 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_34_34;
#line 811 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_35_35;
#line 811 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__InternalLabelMap_13;
#line 811 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__InternalLabelList_14;
#line 811 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_19_19;
#line 811 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_21_21;
#line 811 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_23_23;
#line 814 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_DeclSet_21_21;
#line 814 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_IO_22_22;
#line 816 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv5_STATE_VARIABLE_DeclSet_16;
#line 816 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv4_STATE_VARIABLE_IO_18;

#line 812 "llds_out_file.m"
    {
#line 812 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_19_19 = mercury__multi_map__init_0_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_26_26, ll_backend__llds_out__llds_out_file__TypeCtorInfo_27_27);
    }
#line 812 "llds_out_file.m"
    {
#line 812 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__group_decl_c_labels_3_p_0(ll_backend__llds_out__llds_out_file__InternalLabels_10, ll_backend__llds_out__llds_out_file__V_19_19, &ll_backend__llds_out__llds_out_file__InternalLabelMap_13);
    }
#line 813 "llds_out_file.m"
    {
#line 813 "llds_out_file.m"
      mercury__multi_map__to_assoc_list_2_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_26_26, ll_backend__llds_out__llds_out_file__TypeCtorInfo_27_27, ll_backend__llds_out__llds_out_file__InternalLabelMap_13, &ll_backend__llds_out__llds_out_file__InternalLabelList_14);
    }
#line 7723 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_34_34 = (MR_Word) &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0;
#line 7725 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_35_35 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 814 "llds_out_file.m"
    {
#line 814 "llds_out_file.m"
      mercury__list__foldl2_6_p_2((MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_2[0], ll_backend__llds_out__llds_out_file__TypeCtorInfo_34_34, ll_backend__llds_out__llds_out_file__TypeCtorInfo_35_35, (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_2[6], ll_backend__llds_out__llds_out_file__InternalLabelList_14, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_15)), &ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_DeclSet_21_21, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_IO_22_22);
    }
#line 814 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_21_21 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_DeclSet_21_21);
#line 816 "llds_out_file.m"
    {
#line 816 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 816 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_23_23, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_5[10]));
#line 816 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_23_23, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_record_c_label_decls_7_p_0_2));
#line 816 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 816 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_23_23, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_8));
#line 816 "llds_out_file.m"
    }
#line 816 "llds_out_file.m"
    {
#line 816 "llds_out_file.m"
      mercury__list__foldl2_6_p_2((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ll_backend__llds_out__llds_out_file__TypeCtorInfo_34_34, ll_backend__llds_out__llds_out_file__TypeCtorInfo_35_35, ll_backend__llds_out__llds_out_file__V_23_23, ll_backend__llds_out__llds_out_file__EntryLabels_9, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_21_21)), &ll_backend__llds_out__llds_out_file__conv5_STATE_VARIABLE_DeclSet_16, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv4_STATE_VARIABLE_IO_18);
    }
#line 816 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_16 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv5_STATE_VARIABLE_DeclSet_16);
#line 811 "llds_out_file.m"
  }
#line 806 "llds_out_file.m"
}

#line 765 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_foreign_header_include_line_6_p_0(
#line 765 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_7,
#line 765 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Decl_8,
#line 765 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AlreadyDone_0_17,
#line 765 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AlreadyDone_18)
#line 765 "llds_out_file.m"
{
#line 769 "llds_out_file.m"
  {
#line 769 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 769 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__Lang_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Decl_8, (MR_Integer) 0)));
#line 769 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__Code_13 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Decl_8, (MR_Integer) 2)));
#line 769 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Decl_8, (MR_Integer) 3)));
#line 770 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file___IsLocal_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Decl_8, (MR_Integer) 1)));

#line 796 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__Lang_11 == (MR_Integer) 0))
#line 775 "llds_out_file.m"
      {
#line 773 "llds_out_file.m"
        {
#line 773 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__succeeded = mercury__set__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (ll_backend__llds_out__llds_out_file__Code_13)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AlreadyDone_0_17);
        }
#line 775 "llds_out_file.m"
        if (ll_backend__llds_out__llds_out_file__succeeded)
#line 774 "llds_out_file.m"
          *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AlreadyDone_18 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AlreadyDone_0_17;
#line 775 "llds_out_file.m"
        else
#line 776 "llds_out_file.m"
          {
#line 776 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__AutoComments_15;
#line 776 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__LineNumbers_16;
#line 777 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_38_38;
#line 777 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__V_39_39;
#line 777 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_40_40;
#line 777 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_41_41;
#line 777 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_42_42;
#line 777 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_43_43;
#line 777 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_45_45;
#line 777 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_46_46;
#line 777 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_47_47;
#line 777 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_48_48;
#line 777 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_49_49;
#line 777 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_50_50;
#line 777 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_51_51;
#line 777 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_52_52;
#line 777 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_53_53;
#line 777 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_54_54;
#line 777 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_55_55;
#line 777 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_56_56;
#line 777 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_57_57;

#line 776 "llds_out_file.m"
            {
#line 776 "llds_out_file.m"
              mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (ll_backend__llds_out__llds_out_file__Code_13)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AlreadyDone_0_17, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AlreadyDone_18);
            }
#line 777 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 0)));
#line 777 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_39_39 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 1)));
#line 777 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 2)));
#line 777 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 3)));
#line 777 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 4)));
#line 777 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 5)));
#line 777 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__AutoComments_15 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 777 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__LineNumbers_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 777 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 777 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 777 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 777 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 6)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 777 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 6)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 777 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 6)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 777 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 6)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 777 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 6)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 777 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 6)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 777 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 6)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 777 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 6)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 777 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 6)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 777 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 7)));
#line 780 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__succeeded = (ll_backend__llds_out__llds_out_file__AutoComments_15 == (MR_Integer) 1);
#line 780 "llds_out_file.m"
            if (ll_backend__llds_out__llds_out_file__succeeded)
#line 781 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__succeeded = (ll_backend__llds_out__llds_out_file__LineNumbers_16 == (MR_Integer) 1);
#line 788 "llds_out_file.m"
            if (ll_backend__llds_out__llds_out_file__succeeded)
#line 783 "llds_out_file.m"
              {
#line 783 "llds_out_file.m"
                {
#line 783 "llds_out_file.m"
                  mercury__io__write_string_3_p_0((MR_String) "/* ");
                }
#line 784 "llds_out_file.m"
                {
#line 784 "llds_out_file.m"
                  parse_tree__prog_out__write_context_3_p_0(ll_backend__llds_out__llds_out_file__Context_14);
                }
#line 785 "llds_out_file.m"
                {
#line 785 "llds_out_file.m"
                  mercury__io__write_string_3_p_0((MR_String) " pragma foreign_decl_code(");
                }
#line 786 "llds_out_file.m"
                {
#line 786 "llds_out_file.m"
                  mercury__io__write_3_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, ((MR_Box) (ll_backend__llds_out__llds_out_file__Lang_11)));
                }
#line 787 "llds_out_file.m"
                {
#line 787 "llds_out_file.m"
                  mercury__io__write_string_3_p_0((MR_String) ") */\n");
                }
#line 783 "llds_out_file.m"
              }
#line 788 "llds_out_file.m"
            else
#line 787 "llds_out_file.m"
              {
#line 787 "llds_out_file.m"
              }
#line 791 "llds_out_file.m"
            {
#line 791 "llds_out_file.m"
              ll_backend__llds_out__llds_out_util__output_set_line_num_4_p_0(ll_backend__llds_out__llds_out_file__Info_7, ll_backend__llds_out__llds_out_file__Context_14);
            }
#line 792 "llds_out_file.m"
            {
#line 792 "llds_out_file.m"
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__Code_13);
            }
#line 793 "llds_out_file.m"
            {
#line 793 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 794 "llds_out_file.m"
            {
#line 794 "llds_out_file.m"
              ll_backend__llds_out__llds_out_util__output_reset_line_num_3_p_0(ll_backend__llds_out__llds_out_file__Info_7);
#line 794 "llds_out_file.m"
              return;
            }
#line 776 "llds_out_file.m"
          }
#line 775 "llds_out_file.m"
      }
#line 796 "llds_out_file.m"
    else
#line 801 "llds_out_file.m"
      {
#line 802 "llds_out_file.m"
        {
#line 802 "llds_out_file.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_out.llds_out_file", (MR_String) "predicate \140ll_backend.llds_out.llds_out_file.output_foreign_header_include_line\'/6", (MR_String) "unexpected: foreign decl code other than C");
#line 802 "llds_out_file.m"
          return;
        }
#line 801 "llds_out_file.m"
      }
#line 769 "llds_out_file.m"
  }
#line 765 "llds_out_file.m"
}

#line 762 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_foreign_header_include_lines_4_p_0_1(
#line 762 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 762 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 762 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 762 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 762 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 762 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5)
#line 762 "llds_out_file.m"
{
#line 762 "llds_out_file.m"
  {
#line 762 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 762 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_AlreadyDone_18;

#line 762 "llds_out_file.m"
    {
#line 762 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_foreign_header_include_line_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_AlreadyDone_18);
    }
#line 762 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_AlreadyDone_18));
#line 762 "llds_out_file.m"
  }
#line 762 "llds_out_file.m"
}

#line 758 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_foreign_header_include_lines_4_p_0(
#line 758 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_5,
#line 758 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Decls_6)
#line 758 "llds_out_file.m"
{
#line 761 "llds_out_file.m"
  {
#line 761 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 761 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_11_11;
#line 761 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_12_12;
#line 762 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_8_8;
#line 762 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv2_V_8_8;
#line 762 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_IO_10;

#line 762 "llds_out_file.m"
    {
#line 762 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 762 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_11_11, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_5[9]));
#line 762 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_11_11, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_foreign_header_include_lines_4_p_0_1));
#line 762 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 762 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_11_11, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_5));
#line 762 "llds_out_file.m"
    }
#line 762 "llds_out_file.m"
    {
#line 762 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_12_12 = mercury__set__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
    }
#line 762 "llds_out_file.m"
    {
#line 762 "llds_out_file.m"
      mercury__list__foldl2_6_p_2((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0, (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_1[0], (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__llds_out__llds_out_file__V_11_11, ll_backend__llds_out__llds_out_file__Decls_6, ((MR_Box) (ll_backend__llds_out__llds_out_file__V_12_12)), &ll_backend__llds_out__llds_out_file__conv2_V_8_8, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_IO_10);
    }
#line 762 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_8_8 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv2_V_8_8);
#line 761 "llds_out_file.m"
  }
#line 758 "llds_out_file.m"
}

#line 725 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_user_foreign_code_4_p_0(
#line 725 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_5,
#line 725 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__UserForeignCode_6)
#line 725 "llds_out_file.m"
{
#line 728 "llds_out_file.m"
  {
#line 728 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 728 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__Lang_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__UserForeignCode_6, (MR_Integer) 0)));
#line 728 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__Foreign_Code_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__UserForeignCode_6, (MR_Integer) 1)));
#line 728 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__UserForeignCode_6, (MR_Integer) 2)));

#line 748 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__Lang_8 == (MR_Integer) 0))
#line 731 "llds_out_file.m"
      {
#line 731 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__AutoComments_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 731 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__LineNumbers_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 732 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 0)));
#line 732 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 1)));
#line 732 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 2)));
#line 732 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 3)));
#line 732 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 4)));
#line 732 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 5)));
#line 732 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 732 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 732 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 732 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 732 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 732 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 732 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 732 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 732 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 732 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 732 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 732 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 732 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)));

#line 735 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__succeeded = (ll_backend__llds_out__llds_out_file__AutoComments_11 == (MR_Integer) 1);
#line 735 "llds_out_file.m"
        if (ll_backend__llds_out__llds_out_file__succeeded)
#line 736 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__succeeded = (ll_backend__llds_out__llds_out_file__LineNumbers_12 == (MR_Integer) 1);
#line 741 "llds_out_file.m"
        if (ll_backend__llds_out__llds_out_file__succeeded)
#line 738 "llds_out_file.m"
          {
#line 738 "llds_out_file.m"
            {
#line 738 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "/* ");
            }
#line 739 "llds_out_file.m"
            {
#line 739 "llds_out_file.m"
              parse_tree__prog_out__write_context_3_p_0(ll_backend__llds_out__llds_out_file__Context_10);
            }
#line 740 "llds_out_file.m"
            {
#line 740 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) " pragma foreign_code */\n");
            }
#line 738 "llds_out_file.m"
          }
#line 741 "llds_out_file.m"
        else
#line 740 "llds_out_file.m"
          {
#line 740 "llds_out_file.m"
          }
#line 744 "llds_out_file.m"
        {
#line 744 "llds_out_file.m"
          ll_backend__llds_out__llds_out_util__output_set_line_num_4_p_0(ll_backend__llds_out__llds_out_file__Info_5, ll_backend__llds_out__llds_out_file__Context_10);
        }
#line 745 "llds_out_file.m"
        {
#line 745 "llds_out_file.m"
          mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__Foreign_Code_9);
        }
#line 746 "llds_out_file.m"
        {
#line 746 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 747 "llds_out_file.m"
        {
#line 747 "llds_out_file.m"
          ll_backend__llds_out__llds_out_util__output_reset_line_num_3_p_0(ll_backend__llds_out__llds_out_file__Info_5);
#line 747 "llds_out_file.m"
          return;
        }
#line 731 "llds_out_file.m"
      }
#line 748 "llds_out_file.m"
    else
#line 753 "llds_out_file.m"
      {
#line 754 "llds_out_file.m"
        {
#line 754 "llds_out_file.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_out.llds_out_file", (MR_String) "predicate \140ll_backend.llds_out.llds_out_file.output_user_foreign_code\'/4", (MR_String) "unimplemented: foreign code other than C");
#line 754 "llds_out_file.m"
          return;
        }
#line 753 "llds_out_file.m"
      }
#line 728 "llds_out_file.m"
  }
#line 725 "llds_out_file.m"
}

#line 709 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_static_linkage_define_2_p_0(void)
#line 709 "llds_out_file.m"
{
#line 711 "llds_out_file.m"
  {
#line 711 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 717 "llds_out_file.m"
    {
#line 717 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#ifdef _MSC_VER\n");
    }
#line 718 "llds_out_file.m"
    {
#line 718 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#define MR_STATIC_LINKAGE extern\n");
    }
#line 719 "llds_out_file.m"
    {
#line 719 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#else\n");
    }
#line 720 "llds_out_file.m"
    {
#line 720 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#define MR_STATIC_LINKAGE static\n");
    }
#line 721 "llds_out_file.m"
    {
#line 721 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#endif\n");
#line 721 "llds_out_file.m"
      return;
    }
#line 711 "llds_out_file.m"
  }
#line 709 "llds_out_file.m"
}

#line 704 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_comp_gen_c_module_6_p_0_2(
#line 704 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 704 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 704 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 704 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 704 "llds_out_file.m"
{
#line 704 "llds_out_file.m"
  {
#line 704 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 704 "llds_out_file.m"
    {
#line 704 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_c_procedure_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
#line 704 "llds_out_file.m"
      return;
    }
#line 704 "llds_out_file.m"
  }
#line 704 "llds_out_file.m"
}

#line 695 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_comp_gen_c_module_6_p_0_1(
#line 695 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 695 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 695 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 695 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 695 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 695 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5)
#line 695 "llds_out_file.m"
{
#line 695 "llds_out_file.m"
  {
#line 695 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 695 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_DeclSet_15;

#line 695 "llds_out_file.m"
    {
#line 695 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_record_c_procedure_decls_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_DeclSet_15);
    }
#line 695 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_DeclSet_15));
#line 695 "llds_out_file.m"
  }
#line 695 "llds_out_file.m"
}

#line 689 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_comp_gen_c_module_6_p_0(
#line 689 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_7,
#line 689 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__CompGenCModule_8,
#line 689 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_15,
#line 689 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_16)
#line 689 "llds_out_file.m"
{
#line 692 "llds_out_file.m"
  {
#line 692 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 692 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_43_43;
#line 692 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_45_45;
#line 692 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_11_56;
#line 692 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__ModuleName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CompGenCModule_8, (MR_Integer) 0)));
#line 692 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__Procedures_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CompGenCModule_8, (MR_Integer) 1)));
#line 692 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__EntryLabels_13;
#line 692 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__InternalLabels_14;
#line 692 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_21_21;
#line 692 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_34_34;
#line 692 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__RevEntryLabels_52;
#line 692 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__RevInternalLabels_53;
#line 695 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_DeclSet_16;
#line 695 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_IO_23_23;
#line 704 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv3_STATE_VARIABLE_IO_35_35;

#line 694 "llds_out_file.m"
    {
#line 694 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 695 "llds_out_file.m"
    {
#line 695 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 695 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_21_21, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_5[8]));
#line 695 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_21_21, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_comp_gen_c_module_6_p_0_1));
#line 695 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 695 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_21_21, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_7));
#line 695 "llds_out_file.m"
    }
#line 8386 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_43_43 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0;
#line 8388 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_45_45 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 695 "llds_out_file.m"
    {
#line 695 "llds_out_file.m"
      mercury__list__foldl2_6_p_2(ll_backend__llds_out__llds_out_file__TypeCtorInfo_43_43, (MR_Word) &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0, ll_backend__llds_out__llds_out_file__TypeCtorInfo_45_45, ll_backend__llds_out__llds_out_file__V_21_21, ll_backend__llds_out__llds_out_file__Procedures_12, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_15)), &ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_DeclSet_16, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_IO_23_23);
    }
#line 695 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_16 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_DeclSet_16);
#line 697 "llds_out_file.m"
    {
#line 697 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 698 "llds_out_file.m"
    {
#line 698 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "MR_BEGIN_MODULE(");
    }
#line 699 "llds_out_file.m"
    {
#line 699 "llds_out_file.m"
      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_11);
    }
#line 700 "llds_out_file.m"
    {
#line 700 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) ")\n");
    }
#line 1598 "llds_out_file.m"
    {
#line 1598 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__gather_labels_from_c_procs_acc_5_p_0(ll_backend__llds_out__llds_out_file__Procedures_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__RevEntryLabels_52, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__RevInternalLabels_53);
    }
#line 8422 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_11_56 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 1600 "llds_out_file.m"
    {
#line 1600 "llds_out_file.m"
      mercury__list__reverse_2_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_11_56, ll_backend__llds_out__llds_out_file__RevEntryLabels_52, &ll_backend__llds_out__llds_out_file__EntryLabels_13);
    }
#line 1601 "llds_out_file.m"
    {
#line 1601 "llds_out_file.m"
      mercury__list__reverse_2_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_11_56, ll_backend__llds_out__llds_out_file__RevInternalLabels_53, &ll_backend__llds_out__llds_out_file__InternalLabels_14);
    }
#line 702 "llds_out_file.m"
    {
#line 702 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0(ll_backend__llds_out__llds_out_file__Info_7, ll_backend__llds_out__llds_out_file__EntryLabels_13, ll_backend__llds_out__llds_out_file__InternalLabels_14);
    }
#line 703 "llds_out_file.m"
    {
#line 703 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "MR_BEGIN_CODE\n");
    }
#line 704 "llds_out_file.m"
    {
#line 704 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 704 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_34_34, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_6[1]));
#line 704 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_34_34, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_comp_gen_c_module_6_p_0_2));
#line 704 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 704 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_34_34, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_7));
#line 704 "llds_out_file.m"
    }
#line 704 "llds_out_file.m"
    {
#line 704 "llds_out_file.m"
      mercury__list__foldl_4_p_2(ll_backend__llds_out__llds_out_file__TypeCtorInfo_43_43, ll_backend__llds_out__llds_out_file__TypeCtorInfo_45_45, ll_backend__llds_out__llds_out_file__V_34_34, ll_backend__llds_out__llds_out_file__Procedures_12, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv3_STATE_VARIABLE_IO_35_35);
    }
#line 705 "llds_out_file.m"
    {
#line 705 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "MR_END_MODULE\n");
#line 705 "llds_out_file.m"
      return;
    }
#line 692 "llds_out_file.m"
  }
#line 689 "llds_out_file.m"
}

#line 679 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_required_init_or_final_calls_3_p_0(
#line 679 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1)
#line 679 "llds_out_file.m"
{
#line 682 "llds_out_file.m"
  while (MR_TRUE)
#line 682 "llds_out_file.m"
    {
#line 682 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 682 "llds_out_file.m"
      {
#line 682 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 682 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 682 "llds_out_file.m"
          {
#line 682 "llds_out_file.m"
          }
#line 682 "llds_out_file.m"
        else
#line 683 "llds_out_file.m"
          {
#line 683 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__Name_7 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 683 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Names_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 683 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__V_12_12;
#line 683 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__V_15_15;

#line 684 "llds_out_file.m"
            {
#line 684 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__V_15_15 = mercury__string__f_43_43_2_f_0(ll_backend__llds_out__llds_out_file__Name_7, (MR_String) "();\n");
            }
#line 684 "llds_out_file.m"
            {
#line 684 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) "\t", ll_backend__llds_out__llds_out_file__V_15_15);
            }
#line 684 "llds_out_file.m"
            {
#line 684 "llds_out_file.m"
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__V_12_12);
            }
#line 685 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 685 "llds_out_file.m"
            {
#line 685 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__Names_8;

#line 685 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 685 "llds_out_file.m"
            }
#line 685 "llds_out_file.m"
            continue;
#line 683 "llds_out_file.m"
          }
#line 682 "llds_out_file.m"
      }
#line 682 "llds_out_file.m"
      break;
#line 682 "llds_out_file.m"
    }
#line 679 "llds_out_file.m"
}

#line 672 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_env_var_init_3_p_0(
#line 672 "llds_out_file.m"
  MR_String ll_backend__llds_out__llds_out_file__EnvVarName_4)
#line 672 "llds_out_file.m"
{
#line 674 "llds_out_file.m"
  {
#line 674 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 675 "llds_out_file.m"
    {
#line 675 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "ENVVAR ");
    }
#line 676 "llds_out_file.m"
    {
#line 676 "llds_out_file.m"
      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__EnvVarName_4);
    }
#line 677 "llds_out_file.m"
    {
#line 677 "llds_out_file.m"
      mercury__io__nl_2_p_0();
#line 677 "llds_out_file.m"
      return;
    }
#line 674 "llds_out_file.m"
  }
#line 672 "llds_out_file.m"
}

#line 668 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_init_comment_6_p_0_1(
#line 668 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 668 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 668 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 668 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 668 "llds_out_file.m"
{
#line 668 "llds_out_file.m"
  {
#line 668 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 668 "llds_out_file.m"
    {
#line 668 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_env_var_init_3_p_0(((MR_String) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
#line 668 "llds_out_file.m"
      return;
    }
#line 668 "llds_out_file.m"
  }
#line 668 "llds_out_file.m"
}

#line 641 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_init_comment_6_p_0(
#line 641 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ModuleName_7,
#line 641 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__UserInitPredCNames_8,
#line 641 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__UserFinalPredCNames_9,
#line 641 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__EnvVarNames_10)
#line 641 "llds_out_file.m"
{
#line 645 "llds_out_file.m"
  {
#line 645 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 668 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_IO_36_36;

#line 646 "llds_out_file.m"
    {
#line 646 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "/*\n");
    }
#line 647 "llds_out_file.m"
    {
#line 647 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "INIT ");
    }
#line 648 "llds_out_file.m"
    {
#line 648 "llds_out_file.m"
      backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_7);
    }
#line 649 "llds_out_file.m"
    {
#line 649 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "init\n");
    }
#line 654 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__UserInitPredCNames_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 653 "llds_out_file.m"
      {
#line 653 "llds_out_file.m"
      }
#line 654 "llds_out_file.m"
    else
#line 655 "llds_out_file.m"
      {
#line 656 "llds_out_file.m"
        {
#line 656 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "REQUIRED_INIT ");
        }
#line 657 "llds_out_file.m"
        {
#line 657 "llds_out_file.m"
          backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_7);
        }
#line 658 "llds_out_file.m"
        {
#line 658 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "required_init\n");
        }
#line 655 "llds_out_file.m"
      }
#line 662 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__UserFinalPredCNames_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 661 "llds_out_file.m"
      {
#line 661 "llds_out_file.m"
      }
#line 662 "llds_out_file.m"
    else
#line 663 "llds_out_file.m"
      {
#line 664 "llds_out_file.m"
        {
#line 664 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "REQUIRED_FINAL ");
        }
#line 665 "llds_out_file.m"
        {
#line 665 "llds_out_file.m"
          backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_7);
        }
#line 666 "llds_out_file.m"
        {
#line 666 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "required_final\n");
        }
#line 663 "llds_out_file.m"
      }
#line 668 "llds_out_file.m"
    {
#line 668 "llds_out_file.m"
      mercury__list__foldl_4_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_2[5], ll_backend__llds_out__llds_out_file__EnvVarNames_10, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_IO_36_36);
    }
#line 669 "llds_out_file.m"
    {
#line 669 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "ENDINIT\n");
    }
#line 670 "llds_out_file.m"
    {
#line 670 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "*/\n\n");
#line 670 "llds_out_file.m"
      return;
    }
#line 645 "llds_out_file.m"
  }
#line 641 "llds_out_file.m"
}

#line 608 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_write_proc_static_list_3_p_0(
#line 608 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1)
#line 608 "llds_out_file.m"
{
#line 611 "llds_out_file.m"
  while (MR_TRUE)
#line 611 "llds_out_file.m"
    {
#line 611 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 611 "llds_out_file.m"
      {
#line 611 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 611 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 611 "llds_out_file.m"
          {
#line 611 "llds_out_file.m"
          }
#line 611 "llds_out_file.m"
        else
#line 612 "llds_out_file.m"
          {
#line 612 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__ProcLayout_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 612 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__ProcLayouts_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 612 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__RttiProcLabel_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__ProcLayout_7, (MR_Integer) 0)));
#line 612 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__MaybeMore_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__ProcLayout_7, (MR_Integer) 2)));
#line 613 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__ProcLayout_7, (MR_Integer) 1)));
#line 614 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_22_22;
#line 614 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_14_14;
#line 614 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_15_15;
#line 614 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_16_16;
#line 614 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file___ProcStatic_13;

#line 614 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__MaybeMore_12)) == (MR_mktag((MR_Integer) 1)));
#line 614 "llds_out_file.m"
            if (ll_backend__llds_out__llds_out_file__succeeded)
#line 614 "llds_out_file.m"
              {
#line 614 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__MaybeMore_12, (MR_Integer) 0)));
#line 614 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__MaybeMore_12, (MR_Integer) 1)));
#line 614 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__MaybeMore_12, (MR_Integer) 2)));
#line 614 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__MaybeMore_12, (MR_Integer) 3)));
#line 614 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__V_22_22)) == (MR_mktag((MR_Integer) 1)));
#line 614 "llds_out_file.m"
                if (ll_backend__llds_out__llds_out_file__succeeded)
#line 614 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file___ProcStatic_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__V_22_22, (MR_Integer) 0)));
#line 614 "llds_out_file.m"
              }
#line 631 "llds_out_file.m"
            if (ll_backend__llds_out__llds_out_file__succeeded)
#line 615 "llds_out_file.m"
              {
#line 615 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__ProcLabel_17;
#line 615 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__UserOrUCI_18;
#line 615 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__Kind_19;
#line 615 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__V_27_27;

#line 615 "llds_out_file.m"
                {
#line 615 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__ProcLabel_17 = backend_libs__proc_label__make_proc_label_from_rtti_1_f_0(ll_backend__llds_out__llds_out_file__RttiProcLabel_10);
                }
#line 616 "llds_out_file.m"
                {
#line 616 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__UserOrUCI_18 = ll_backend__layout_out__proc_label_user_or_uci_1_f_0(ll_backend__llds_out__llds_out_file__ProcLabel_17);
                }
#line 617 "llds_out_file.m"
                {
#line 617 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__Kind_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 617 "llds_out_file.m"
                  MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__Kind_19, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__UserOrUCI_18));
#line 617 "llds_out_file.m"
                }
#line 623 "llds_out_file.m"
                if ((ll_backend__llds_out__llds_out_file__UserOrUCI_18 == (MR_Integer) 1))
#line 624 "llds_out_file.m"
                  {
#line 625 "llds_out_file.m"
                    {
#line 625 "llds_out_file.m"
                      mercury__io__write_string_3_p_0((MR_String) "\tMR_write_out_uci_proc_static(deep_fp, procrep_fp,\n\t\t&");
                    }
#line 624 "llds_out_file.m"
                  }
#line 623 "llds_out_file.m"
                else
#line 619 "llds_out_file.m"
                  {
#line 620 "llds_out_file.m"
                    {
#line 620 "llds_out_file.m"
                      mercury__io__write_string_3_p_0((MR_String) "\tMR_write_out_user_proc_static(deep_fp, procrep_fp,\n\t\t&");
                    }
#line 619 "llds_out_file.m"
                  }
#line 629 "llds_out_file.m"
                {
#line 629 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 629 "llds_out_file.m"
                  MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_27_27, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__RttiProcLabel_10));
#line 629 "llds_out_file.m"
                  MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_27_27, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Kind_19));
#line 629 "llds_out_file.m"
                }
#line 629 "llds_out_file.m"
                {
#line 629 "llds_out_file.m"
                  ll_backend__layout_out__output_layout_name_3_p_0(ll_backend__llds_out__llds_out_file__V_27_27);
                }
#line 630 "llds_out_file.m"
                {
#line 630 "llds_out_file.m"
                  mercury__io__write_string_3_p_0((MR_String) ");\n");
                }
#line 615 "llds_out_file.m"
              }
#line 631 "llds_out_file.m"
            else
#line 630 "llds_out_file.m"
              {
#line 630 "llds_out_file.m"
              }
#line 634 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 634 "llds_out_file.m"
            {
#line 634 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__ProcLayouts_8;

#line 634 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 634 "llds_out_file.m"
            }
#line 634 "llds_out_file.m"
            continue;
#line 612 "llds_out_file.m"
          }
#line 611 "llds_out_file.m"
      }
#line 611 "llds_out_file.m"
      break;
#line 611 "llds_out_file.m"
    }
#line 608 "llds_out_file.m"
}

#line 595 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_debugger_init_list_3_p_0(
#line 595 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1)
#line 595 "llds_out_file.m"
{
#line 598 "llds_out_file.m"
  while (MR_TRUE)
#line 598 "llds_out_file.m"
    {
#line 598 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 598 "llds_out_file.m"
      {
#line 598 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 598 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 598 "llds_out_file.m"
          {
#line 598 "llds_out_file.m"
          }
#line 598 "llds_out_file.m"
        else
#line 599 "llds_out_file.m"
          {
#line 599 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Data_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 599 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Datas_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 599 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__ModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Data_7, (MR_Integer) 0)));
#line 599 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_23_23;
#line 600 "llds_out_file.m"
            MR_Integer ll_backend__llds_out__llds_out_file__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Data_7, (MR_Integer) 1)));
#line 600 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Data_7, (MR_Integer) 2)));
#line 600 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Data_7, (MR_Integer) 3)));
#line 600 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Data_7, (MR_Integer) 4)));

#line 601 "llds_out_file.m"
            {
#line 601 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "\tif (MR_register_module_layout != NULL) {\n");
            }
#line 602 "llds_out_file.m"
            {
#line 602 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "\t\t(*MR_register_module_layout)(");
            }
#line 603 "llds_out_file.m"
            {
#line 603 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "\n\t\t\t&");
            }
#line 604 "llds_out_file.m"
            {
#line 604 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__V_23_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 604 "llds_out_file.m"
              MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__V_23_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
#line 604 "llds_out_file.m"
              MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__V_23_23, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__ModuleName_10));
#line 604 "llds_out_file.m"
            }
#line 604 "llds_out_file.m"
            {
#line 604 "llds_out_file.m"
              ll_backend__layout_out__output_layout_name_3_p_0(ll_backend__llds_out__llds_out_file__V_23_23);
            }
#line 605 "llds_out_file.m"
            {
#line 605 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) ");\n\t}\n");
            }
#line 606 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 606 "llds_out_file.m"
            {
#line 606 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__Datas_8;

#line 606 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 606 "llds_out_file.m"
            }
#line 606 "llds_out_file.m"
            continue;
#line 599 "llds_out_file.m"
          }
#line 598 "llds_out_file.m"
      }
#line 598 "llds_out_file.m"
      break;
#line 598 "llds_out_file.m"
    }
#line 595 "llds_out_file.m"
}

#line 583 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_type_tables_init_list_3_p_0(
#line 583 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1)
#line 583 "llds_out_file.m"
{
#line 586 "llds_out_file.m"
  while (MR_TRUE)
#line 586 "llds_out_file.m"
    {
#line 586 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 586 "llds_out_file.m"
      {
#line 586 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 586 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 586 "llds_out_file.m"
          {
#line 586 "llds_out_file.m"
          }
#line 586 "llds_out_file.m"
        else
#line 587 "llds_out_file.m"
          {
#line 587 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Data_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 587 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Datas_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));

#line 588 "llds_out_file.m"
            {
#line 588 "llds_out_file.m"
              ll_backend__rtti_out__register_rtti_data_if_nec_3_p_0(ll_backend__llds_out__llds_out_file__Data_7);
            }
#line 589 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 589 "llds_out_file.m"
            {
#line 589 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__Datas_8;

#line 589 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 589 "llds_out_file.m"
            }
#line 589 "llds_out_file.m"
            continue;
#line 587 "llds_out_file.m"
          }
#line 586 "llds_out_file.m"
      }
#line 586 "llds_out_file.m"
      break;
#line 586 "llds_out_file.m"
    }
#line 583 "llds_out_file.m"
}

#line 561 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_alloc_sites_init_4_p_0(
#line 561 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_5,
#line 561 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__AllocSites_6)
#line 561 "llds_out_file.m"
{
#line 566 "llds_out_file.m"
  {
#line 566 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 566 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__AllocSites_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 566 "llds_out_file.m"
      {
#line 566 "llds_out_file.m"
      }
#line 566 "llds_out_file.m"
    else
#line 568 "llds_out_file.m"
      {
#line 568 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__MangledModuleName_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 1)));
#line 568 "llds_out_file.m"
        MR_Integer ll_backend__llds_out__llds_out_file__NumAllocSites_11;
#line 569 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 0)));
#line 569 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 2)));
#line 569 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 3)));
#line 569 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 4)));
#line 569 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 5)));
#line 569 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 569 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 569 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 569 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 569 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 569 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 569 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 569 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 569 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 569 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 569 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 569 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 569 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 569 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 569 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)));

#line 570 "llds_out_file.m"
        {
#line 570 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__NumAllocSites_11 = mercury__list__length_1_f_0((MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_alloc_site_info_0, ll_backend__llds_out__llds_out_file__AllocSites_6);
        }
#line 571 "llds_out_file.m"
        {
#line 571 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "#ifdef MR_MPROF_PROFILE_MEMORY_ATTRIBUTION\n");
        }
#line 572 "llds_out_file.m"
        {
#line 572 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "\tMR_register_alloc_sites(");
        }
#line 573 "llds_out_file.m"
        {
#line 573 "llds_out_file.m"
          ll_backend__layout_out__output_layout_array_name_5_p_0((MR_Integer) 0, ll_backend__llds_out__llds_out_file__MangledModuleName_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17)));
        }
#line 575 "llds_out_file.m"
        {
#line 575 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) ", ");
        }
#line 576 "llds_out_file.m"
        {
#line 576 "llds_out_file.m"
          mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_file__NumAllocSites_11);
        }
#line 577 "llds_out_file.m"
        {
#line 577 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) ");\n");
        }
#line 578 "llds_out_file.m"
        {
#line 578 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "#endif\n");
#line 578 "llds_out_file.m"
          return;
        }
#line 568 "llds_out_file.m"
      }
#line 566 "llds_out_file.m"
  }
#line 561 "llds_out_file.m"
}

#line 552 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_data_init_list_3_p_0(
#line 552 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1)
#line 552 "llds_out_file.m"
{
#line 554 "llds_out_file.m"
  while (MR_TRUE)
#line 554 "llds_out_file.m"
    {
#line 554 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 554 "llds_out_file.m"
      {
#line 554 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 554 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 554 "llds_out_file.m"
          {
#line 554 "llds_out_file.m"
          }
#line 554 "llds_out_file.m"
        else
#line 555 "llds_out_file.m"
          {
#line 555 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Data_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 555 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Datas_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));

#line 556 "llds_out_file.m"
            {
#line 556 "llds_out_file.m"
              ll_backend__rtti_out__init_rtti_data_if_nec_3_p_0(ll_backend__llds_out__llds_out_file__Data_7);
            }
#line 557 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 557 "llds_out_file.m"
            {
#line 557 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__Datas_8;

#line 557 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 557 "llds_out_file.m"
            }
#line 557 "llds_out_file.m"
            continue;
#line 555 "llds_out_file.m"
          }
#line 554 "llds_out_file.m"
      }
#line 554 "llds_out_file.m"
      break;
#line 554 "llds_out_file.m"
    }
#line 552 "llds_out_file.m"
}

#line 526 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_init_bunch_calls_6_p_0(
#line 526 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_1,
#line 526 "llds_out_file.m"
  MR_String ll_backend__llds_out__llds_out_file__InitStatus_2,
#line 526 "llds_out_file.m"
  MR_Integer ll_backend__llds_out__llds_out_file__Seq_3,
#line 526 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__4_4)
#line 526 "llds_out_file.m"
{
#line 529 "llds_out_file.m"
  while (MR_TRUE)
#line 529 "llds_out_file.m"
    {
#line 529 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 529 "llds_out_file.m"
      {
#line 529 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 529 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 529 "llds_out_file.m"
          {
#line 529 "llds_out_file.m"
          }
#line 529 "llds_out_file.m"
        else
#line 530 "llds_out_file.m"
          {
#line 530 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Bunches_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__4_4, (MR_Integer) 1)));
#line 530 "llds_out_file.m"
            MR_Integer ll_backend__llds_out__llds_out_file__NextSeq_19;
#line 530 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__MangledModuleName_35;
#line 530 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__4_4, (MR_Integer) 0)));
#line 542 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_45_45;
#line 542 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_46_46;
#line 542 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_47_47;
#line 542 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_48_48;
#line 542 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_49_49;
#line 542 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_50_50;
#line 542 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_51_51;
#line 542 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_52_52;
#line 542 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_53_53;
#line 542 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_54_54;
#line 542 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_55_55;
#line 542 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_56_56;
#line 542 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_57_57;
#line 542 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_58_58;
#line 542 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_59_59;
#line 542 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_60_60;
#line 542 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_61_61;
#line 542 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_62_62;
#line 542 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_63_63;
#line 542 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_64_64;

#line 531 "llds_out_file.m"
            {
#line 531 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "\t");
            }
#line 541 "llds_out_file.m"
            {
#line 541 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "mercury__");
            }
#line 542 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 0)));
#line 542 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__MangledModuleName_35 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 1)));
#line 542 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 2)));
#line 542 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 3)));
#line 542 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 4)));
#line 542 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 5)));
#line 542 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_50_50 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 542 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 542 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 542 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 542 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 542 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 542 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 542 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 542 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 542 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 542 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 542 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 542 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_62_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 542 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 542 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)));
#line 543 "llds_out_file.m"
            {
#line 543 "llds_out_file.m"
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__MangledModuleName_35);
            }
#line 544 "llds_out_file.m"
            {
#line 544 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "_");
            }
#line 545 "llds_out_file.m"
            {
#line 545 "llds_out_file.m"
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__InitStatus_2);
            }
#line 546 "llds_out_file.m"
            {
#line 546 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "_bunch_");
            }
#line 547 "llds_out_file.m"
            {
#line 547 "llds_out_file.m"
              mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_file__Seq_3);
            }
#line 533 "llds_out_file.m"
            {
#line 533 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "();\n");
            }
#line 534 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__NextSeq_19 = (ll_backend__llds_out__llds_out_file__Seq_3 + (MR_Integer) 1);
#line 535 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 535 "llds_out_file.m"
            {
#line 535 "llds_out_file.m"
              MR_Integer ll_backend__llds_out__llds_out_file__Seq__tmp_copy_3 = ll_backend__llds_out__llds_out_file__NextSeq_19;
#line 535 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__4__tmp_copy_4 = ll_backend__llds_out__llds_out_file__Bunches_17;

#line 535 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__4_4 = ll_backend__llds_out__llds_out_file__HeadVar__4__tmp_copy_4;
#line 535 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__Seq_3 = ll_backend__llds_out__llds_out_file__Seq__tmp_copy_3;
#line 535 "llds_out_file.m"
            }
#line 535 "llds_out_file.m"
            continue;
#line 530 "llds_out_file.m"
          }
#line 529 "llds_out_file.m"
      }
#line 529 "llds_out_file.m"
      break;
#line 529 "llds_out_file.m"
    }
#line 526 "llds_out_file.m"
}

#line 515 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_init_bunch_def_3_p_0(
#line 515 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1)
#line 515 "llds_out_file.m"
{
#line 518 "llds_out_file.m"
  while (MR_TRUE)
#line 518 "llds_out_file.m"
    {
#line 518 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 518 "llds_out_file.m"
      {
#line 518 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 518 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 518 "llds_out_file.m"
          {
#line 518 "llds_out_file.m"
          }
#line 518 "llds_out_file.m"
        else
#line 519 "llds_out_file.m"
          {
#line 519 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Module_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 519 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Modules_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 519 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__C_ModuleName_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Module_7, (MR_Integer) 0)));
#line 520 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Module_7, (MR_Integer) 1)));

#line 521 "llds_out_file.m"
            {
#line 521 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "\t");
            }
#line 522 "llds_out_file.m"
            {
#line 522 "llds_out_file.m"
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__C_ModuleName_10);
            }
#line 523 "llds_out_file.m"
            {
#line 523 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "();\n");
            }
#line 524 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 524 "llds_out_file.m"
            {
#line 524 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__Modules_8;

#line 524 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 524 "llds_out_file.m"
            }
#line 524 "llds_out_file.m"
            continue;
#line 519 "llds_out_file.m"
          }
#line 518 "llds_out_file.m"
      }
#line 518 "llds_out_file.m"
      break;
#line 518 "llds_out_file.m"
    }
#line 515 "llds_out_file.m"
}

#line 501 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_init_bunch_defs_6_p_0(
#line 501 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_1,
#line 501 "llds_out_file.m"
  MR_String ll_backend__llds_out__llds_out_file__InitStatus_2,
#line 501 "llds_out_file.m"
  MR_Integer ll_backend__llds_out__llds_out_file__Seq_3,
#line 501 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__4_4)
#line 501 "llds_out_file.m"
{
#line 504 "llds_out_file.m"
  while (MR_TRUE)
#line 504 "llds_out_file.m"
    {
#line 504 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 504 "llds_out_file.m"
      {
#line 504 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 504 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 504 "llds_out_file.m"
          {
#line 504 "llds_out_file.m"
          }
#line 504 "llds_out_file.m"
        else
#line 505 "llds_out_file.m"
          {
#line 505 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Bunch_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__4_4, (MR_Integer) 0)));
#line 505 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Bunches_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__4_4, (MR_Integer) 1)));
#line 505 "llds_out_file.m"
            MR_Integer ll_backend__llds_out__llds_out_file__NextSeq_19;
#line 505 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__MangledModuleName_40;
#line 542 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_50_50;
#line 542 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_51_51;
#line 542 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_52_52;
#line 542 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_53_53;
#line 542 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_54_54;
#line 542 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_55_55;
#line 542 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_56_56;
#line 542 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_57_57;
#line 542 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_58_58;
#line 542 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_59_59;
#line 542 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_60_60;
#line 542 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_61_61;
#line 542 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_62_62;
#line 542 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_63_63;
#line 542 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_64_64;
#line 542 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_65_65;
#line 542 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_66_66;
#line 542 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_67_67;
#line 542 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_68_68;
#line 542 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_69_69;

#line 506 "llds_out_file.m"
            {
#line 506 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "static void ");
            }
#line 541 "llds_out_file.m"
            {
#line 541 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "mercury__");
            }
#line 542 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 0)));
#line 542 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__MangledModuleName_40 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 1)));
#line 542 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 2)));
#line 542 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 3)));
#line 542 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 4)));
#line 542 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 5)));
#line 542 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_55_55 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 542 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 542 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 542 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 542 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 542 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 542 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 542 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_62_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 542 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 542 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 542 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 542 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 542 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_67_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 542 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_68_68 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 6)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 542 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)));
#line 543 "llds_out_file.m"
            {
#line 543 "llds_out_file.m"
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__MangledModuleName_40);
            }
#line 544 "llds_out_file.m"
            {
#line 544 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "_");
            }
#line 545 "llds_out_file.m"
            {
#line 545 "llds_out_file.m"
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__InitStatus_2);
            }
#line 546 "llds_out_file.m"
            {
#line 546 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "_bunch_");
            }
#line 547 "llds_out_file.m"
            {
#line 547 "llds_out_file.m"
              mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_file__Seq_3);
            }
#line 508 "llds_out_file.m"
            {
#line 508 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "(void)\n");
            }
#line 509 "llds_out_file.m"
            {
#line 509 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "{\n");
            }
#line 510 "llds_out_file.m"
            {
#line 510 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__output_init_bunch_def_3_p_0(ll_backend__llds_out__llds_out_file__Bunch_16);
            }
#line 511 "llds_out_file.m"
            {
#line 511 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "}\n\n");
            }
#line 512 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__NextSeq_19 = (ll_backend__llds_out__llds_out_file__Seq_3 + (MR_Integer) 1);
#line 513 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 513 "llds_out_file.m"
            {
#line 513 "llds_out_file.m"
              MR_Integer ll_backend__llds_out__llds_out_file__Seq__tmp_copy_3 = ll_backend__llds_out__llds_out_file__NextSeq_19;
#line 513 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__4__tmp_copy_4 = ll_backend__llds_out__llds_out_file__Bunches_17;

#line 513 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__4_4 = ll_backend__llds_out__llds_out_file__HeadVar__4__tmp_copy_4;
#line 513 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__Seq_3 = ll_backend__llds_out__llds_out_file__Seq__tmp_copy_3;
#line 513 "llds_out_file.m"
            }
#line 513 "llds_out_file.m"
            continue;
#line 505 "llds_out_file.m"
          }
#line 504 "llds_out_file.m"
      }
#line 504 "llds_out_file.m"
      break;
#line 504 "llds_out_file.m"
    }
#line 501 "llds_out_file.m"
}

#line 493 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__entry_label_has_layout_2_p_0(
#line 493 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__EntryLabelToLayoutMap_3,
#line 493 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Label_4)
#line 493 "llds_out_file.m"
{
#line 497 "llds_out_file.m"
  {
#line 497 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 497 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_5_5;
#line 497 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv0_V_5_5;

#line 497 "llds_out_file.m"
    {
#line 497 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0, ll_backend__llds_out__llds_out_file__EntryLabelToLayoutMap_3, ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_4)), &ll_backend__llds_out__llds_out_file__conv0_V_5_5);
    }
#line 497 "llds_out_file.m"
    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 497 "llds_out_file.m"
      {
#line 497 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_5_5 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv0_V_5_5);
#line 497 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__succeeded = MR_TRUE;
#line 497 "llds_out_file.m"
      }
#line 497 "llds_out_file.m"
    return ll_backend__llds_out__llds_out_file__succeeded;
#line 497 "llds_out_file.m"
  }
#line 493 "llds_out_file.m"
}

#line 487 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__internal_label_has_layout_2_p_0(
#line 487 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__InternalLabelToLayoutMap_3,
#line 487 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Label_4)
#line 487 "llds_out_file.m"
{
#line 491 "llds_out_file.m"
  {
#line 491 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 491 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_5_5;
#line 491 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv0_V_5_5;

#line 491 "llds_out_file.m"
    {
#line 491 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0, ll_backend__llds_out__llds_out_file__InternalLabelToLayoutMap_3, ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_4)), &ll_backend__llds_out__llds_out_file__conv0_V_5_5);
    }
#line 491 "llds_out_file.m"
    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 491 "llds_out_file.m"
      {
#line 491 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_5_5 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv0_V_5_5);
#line 491 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__succeeded = MR_TRUE;
#line 491 "llds_out_file.m"
      }
#line 491 "llds_out_file.m"
    return ll_backend__llds_out__llds_out_file__succeeded;
#line 491 "llds_out_file.m"
  }
#line 487 "llds_out_file.m"
}

#line 483 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__module_defines_label_with_layout_2_p_0_2(
#line 483 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 483 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1)
#line 483 "llds_out_file.m"
{
#line 483 "llds_out_file.m"
  {
#line 483 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 483 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 483 "llds_out_file.m"
    {
#line 483 "llds_out_file.m"
      return ll_backend__llds_out__llds_out_file__succeeded = ll_backend__llds_out__llds_out_file__entry_label_has_layout_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
    }
#line 483 "llds_out_file.m"
    return ll_backend__llds_out__llds_out_file__succeeded;
#line 483 "llds_out_file.m"
  }
#line 483 "llds_out_file.m"
}

#line 480 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__module_defines_label_with_layout_2_p_0_1(
#line 480 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 480 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1)
#line 480 "llds_out_file.m"
{
#line 480 "llds_out_file.m"
  {
#line 480 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 480 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 480 "llds_out_file.m"
    {
#line 480 "llds_out_file.m"
      return ll_backend__llds_out__llds_out_file__succeeded = ll_backend__llds_out__llds_out_file__internal_label_has_layout_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
    }
#line 480 "llds_out_file.m"
    return ll_backend__llds_out__llds_out_file__succeeded;
#line 480 "llds_out_file.m"
  }
#line 480 "llds_out_file.m"
}

#line 464 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__module_defines_label_with_layout_2_p_0(
#line 464 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_3,
#line 464 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Module_4)
#line 464 "llds_out_file.m"
{
#line 467 "llds_out_file.m"
  {
#line 467 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 467 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_11_70;
#line 467 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__InternalLabelToLayoutMap_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 2)));
#line 467 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__EntryLabelToLayoutMap_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 3)));
#line 467 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__Procedures_8;
#line 467 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__EntryLabels_9;
#line 467 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__InternalLabels_10;
#line 467 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__RevEntryLabels_66;
#line 467 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__RevInternalLabels_67;
#line 467 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_68_68;
#line 467 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_69_69;
#line 470 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 0)));
#line 470 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 1)));
#line 470 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 4)));
#line 470 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 5)));
#line 470 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 470 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 470 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 470 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 470 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 470 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 6)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 470 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 6)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 470 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 6)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 470 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 6)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 470 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 6)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 470 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 6)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 470 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 6)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 470 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 6)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 470 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 6)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 470 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 7)));
#line 477 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_7_7;

#line 473 "llds_out_file.m"
    {
#line 473 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0, ll_backend__llds_out__llds_out_file__InternalLabelToLayoutMap_5);
    }
#line 473 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__succeeded = !(ll_backend__llds_out__llds_out_file__succeeded);
#line 474 "llds_out_file.m"
    if (!(ll_backend__llds_out__llds_out_file__succeeded))
#line 475 "llds_out_file.m"
      {
#line 475 "llds_out_file.m"
        {
#line 475 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0, ll_backend__llds_out__llds_out_file__EntryLabelToLayoutMap_6);
        }
#line 475 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__succeeded = !(ll_backend__llds_out__llds_out_file__succeeded);
#line 475 "llds_out_file.m"
      }
#line 467 "llds_out_file.m"
    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 467 "llds_out_file.m"
      {
#line 477 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Module_4, (MR_Integer) 0)));
#line 477 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__Procedures_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Module_4, (MR_Integer) 1)));
#line 1598 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_68_68 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1598 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_69_69 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1598 "llds_out_file.m"
        {
#line 1598 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__gather_labels_from_c_procs_acc_5_p_0(ll_backend__llds_out__llds_out_file__Procedures_8, ll_backend__llds_out__llds_out_file__V_68_68, &ll_backend__llds_out__llds_out_file__RevEntryLabels_66, ll_backend__llds_out__llds_out_file__V_69_69, &ll_backend__llds_out__llds_out_file__RevInternalLabels_67);
        }
#line 9981 "ll_backend.llds_out.llds_out_file.c"
        ll_backend__llds_out__llds_out_file__TypeCtorInfo_11_70 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 1600 "llds_out_file.m"
        {
#line 1600 "llds_out_file.m"
          mercury__list__reverse_2_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_11_70, ll_backend__llds_out__llds_out_file__RevEntryLabels_66, &ll_backend__llds_out__llds_out_file__EntryLabels_9);
        }
#line 1601 "llds_out_file.m"
        {
#line 1601 "llds_out_file.m"
          mercury__list__reverse_2_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_11_70, ll_backend__llds_out__llds_out_file__RevInternalLabels_67, &ll_backend__llds_out__llds_out_file__InternalLabels_10);
        }
#line 480 "llds_out_file.m"
        {
#line 480 "llds_out_file.m"
          MR_Word ll_backend__llds_out__llds_out_file__V_14_14;
#line 480 "llds_out_file.m"
          MR_Word ll_backend__llds_out__llds_out_file__V_11_11;
#line 480 "llds_out_file.m"
          MR_Box ll_backend__llds_out__llds_out_file__conv0_V_11_11;

#line 480 "llds_out_file.m"
          {
#line 480 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 480 "llds_out_file.m"
            MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_14_14, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_8[1]));
#line 480 "llds_out_file.m"
            MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_14_14, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__module_defines_label_with_layout_2_p_0_1));
#line 480 "llds_out_file.m"
            MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 480 "llds_out_file.m"
            MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_14_14, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__InternalLabelToLayoutMap_5));
#line 480 "llds_out_file.m"
          }
#line 480 "llds_out_file.m"
          {
#line 480 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__succeeded = mercury__list__find_first_match_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ll_backend__llds_out__llds_out_file__V_14_14, ll_backend__llds_out__llds_out_file__InternalLabels_10, &ll_backend__llds_out__llds_out_file__conv0_V_11_11);
          }
#line 480 "llds_out_file.m"
          if (ll_backend__llds_out__llds_out_file__succeeded)
#line 480 "llds_out_file.m"
            {
#line 480 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__V_11_11 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv0_V_11_11);
#line 480 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__succeeded = MR_TRUE;
#line 480 "llds_out_file.m"
            }
#line 480 "llds_out_file.m"
        }
#line 482 "llds_out_file.m"
        if (!(ll_backend__llds_out__llds_out_file__succeeded))
#line 483 "llds_out_file.m"
          {
#line 483 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_13_13;
#line 483 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_12_12;
#line 483 "llds_out_file.m"
            MR_Box ll_backend__llds_out__llds_out_file__conv1_V_12_12;

#line 483 "llds_out_file.m"
            {
#line 483 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 483 "llds_out_file.m"
              MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_13_13, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_8[2]));
#line 483 "llds_out_file.m"
              MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_13_13, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__module_defines_label_with_layout_2_p_0_2));
#line 483 "llds_out_file.m"
              MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 483 "llds_out_file.m"
              MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_13_13, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__EntryLabelToLayoutMap_6));
#line 483 "llds_out_file.m"
            }
#line 483 "llds_out_file.m"
            {
#line 483 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__succeeded = mercury__list__find_first_match_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ll_backend__llds_out__llds_out_file__V_13_13, ll_backend__llds_out__llds_out_file__EntryLabels_9, &ll_backend__llds_out__llds_out_file__conv1_V_12_12);
            }
#line 483 "llds_out_file.m"
            if (ll_backend__llds_out__llds_out_file__succeeded)
#line 483 "llds_out_file.m"
              {
#line 483 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__V_12_12 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv1_V_12_12);
#line 483 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__succeeded = MR_TRUE;
#line 483 "llds_out_file.m"
              }
#line 483 "llds_out_file.m"
          }
#line 467 "llds_out_file.m"
      }
#line 467 "llds_out_file.m"
    return ll_backend__llds_out__llds_out_file__succeeded;
#line 467 "llds_out_file.m"
  }
#line 464 "llds_out_file.m"
}

#line 264 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_module_init_list_15_p_0_1(
#line 264 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 264 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1)
#line 264 "llds_out_file.m"
{
#line 264 "llds_out_file.m"
  {
#line 264 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 264 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 264 "llds_out_file.m"
    {
#line 264 "llds_out_file.m"
      return ll_backend__llds_out__llds_out_file__succeeded = ll_backend__llds_out__llds_out_file__module_defines_label_with_layout_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
    }
#line 264 "llds_out_file.m"
    return ll_backend__llds_out__llds_out_file__succeeded;
#line 264 "llds_out_file.m"
  }
#line 264 "llds_out_file.m"
}

#line 254 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_module_init_list_15_p_0(
#line 254 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_16,
#line 254 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ModuleName_17,
#line 254 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Modules_18,
#line 254 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__RttiDatas_19,
#line 254 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ProcLayoutDatas_20,
#line 254 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ModuleLayoutDatas_21,
#line 254 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ComplexityProcs_22,
#line 254 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__TSStringTable_23,
#line 254 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__AllocSites_24,
#line 254 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__InitPredNames_25,
#line 254 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__FinalPredNames_26,
#line 254 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_52,
#line 254 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_53)
#line 254 "llds_out_file.m"
{
#line 263 "llds_out_file.m"
  {
#line 263 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 263 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_302_302;
#line 263 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__MustInit_29;
#line 263 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__AlwaysInitModules_31;
#line 263 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__MaybeInitModules_32;
#line 263 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__AlwaysInitModuleBunches_33;
#line 263 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__MaybeInitModuleBunches_34;
#line 263 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ModuleLayoutName_43;

#line 264 "llds_out_file.m"
    {
#line 264 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__MustInit_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 264 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__MustInit_29, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_8[0]));
#line 264 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__MustInit_29, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_c_module_init_list_15_p_0_1));
#line 264 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__MustInit_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 264 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__MustInit_29, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_16));
#line 264 "llds_out_file.m"
    }
#line 10176 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_302_302 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_comp_gen_c_module_0;
#line 267 "llds_out_file.m"
    {
#line 267 "llds_out_file.m"
      mercury__list__filter_4_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_302_302, ll_backend__llds_out__llds_out_file__MustInit_29, ll_backend__llds_out__llds_out_file__Modules_18, &ll_backend__llds_out__llds_out_file__AlwaysInitModules_31, &ll_backend__llds_out__llds_out_file__MaybeInitModules_32);
    }
#line 268 "llds_out_file.m"
    {
#line 268 "llds_out_file.m"
      mercury__list__chunk_3_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_302_302, ll_backend__llds_out__llds_out_file__AlwaysInitModules_31, (MR_Integer) 40, &ll_backend__llds_out__llds_out_file__AlwaysInitModuleBunches_33);
    }
#line 269 "llds_out_file.m"
    {
#line 269 "llds_out_file.m"
      mercury__list__chunk_3_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_302_302, ll_backend__llds_out__llds_out_file__MaybeInitModules_32, (MR_Integer) 40, &ll_backend__llds_out__llds_out_file__MaybeInitModuleBunches_34);
    }
#line 271 "llds_out_file.m"
    {
#line 271 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_init_bunch_defs_6_p_0(ll_backend__llds_out__llds_out_file__Info_16, (MR_String) "always", (MR_Integer) 0, ll_backend__llds_out__llds_out_file__AlwaysInitModuleBunches_33);
    }
#line 275 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__MaybeInitModuleBunches_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 274 "llds_out_file.m"
      {
#line 274 "llds_out_file.m"
      }
#line 275 "llds_out_file.m"
    else
#line 276 "llds_out_file.m"
      {
#line 277 "llds_out_file.m"
        {
#line 277 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__output_init_bunch_defs_6_p_0(ll_backend__llds_out__llds_out_file__Info_16, (MR_String) "maybe", (MR_Integer) 0, ll_backend__llds_out__llds_out_file__MaybeInitModuleBunches_34);
        }
#line 276 "llds_out_file.m"
      }
#line 280 "llds_out_file.m"
    {
#line 280 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "/* suppress gcc -Wmissing-decls warnings */\n");
    }
#line 281 "llds_out_file.m"
    {
#line 281 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "void ");
    }
#line 282 "llds_out_file.m"
    {
#line 282 "llds_out_file.m"
      backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
    }
#line 283 "llds_out_file.m"
    {
#line 283 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "init(void);\n");
    }
#line 285 "llds_out_file.m"
    {
#line 285 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "void ");
    }
#line 286 "llds_out_file.m"
    {
#line 286 "llds_out_file.m"
      backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
    }
#line 287 "llds_out_file.m"
    {
#line 287 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "init_type_tables(void);\n");
    }
#line 288 "llds_out_file.m"
    {
#line 288 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "void ");
    }
#line 289 "llds_out_file.m"
    {
#line 289 "llds_out_file.m"
      backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
    }
#line 290 "llds_out_file.m"
    {
#line 290 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "init_debugger(void);\n");
    }
#line 292 "llds_out_file.m"
    {
#line 292 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#ifdef MR_DEEP_PROFILING\n");
    }
#line 293 "llds_out_file.m"
    {
#line 293 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "void ");
    }
#line 294 "llds_out_file.m"
    {
#line 294 "llds_out_file.m"
      backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
    }
#line 295 "llds_out_file.m"
    {
#line 295 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);\n");
    }
#line 297 "llds_out_file.m"
    {
#line 297 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#endif\n");
    }
#line 299 "llds_out_file.m"
    {
#line 299 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#ifdef MR_RECORD_TERM_SIZES\n");
    }
#line 300 "llds_out_file.m"
    {
#line 300 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "void ");
    }
#line 301 "llds_out_file.m"
    {
#line 301 "llds_out_file.m"
      backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
    }
#line 302 "llds_out_file.m"
    {
#line 302 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "init_complexity_procs(void);\n");
    }
#line 303 "llds_out_file.m"
    {
#line 303 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#endif\n");
    }
#line 305 "llds_out_file.m"
    {
#line 305 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#ifdef MR_THREADSCOPE\n");
    }
#line 306 "llds_out_file.m"
    {
#line 306 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "void ");
    }
#line 307 "llds_out_file.m"
    {
#line 307 "llds_out_file.m"
      backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
    }
#line 308 "llds_out_file.m"
    {
#line 308 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "init_threadscope_string_table(void);\n");
    }
#line 309 "llds_out_file.m"
    {
#line 309 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#endif\n");
    }
#line 313 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__InitPredNames_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 312 "llds_out_file.m"
      {
#line 312 "llds_out_file.m"
      }
#line 313 "llds_out_file.m"
    else
#line 314 "llds_out_file.m"
      {
#line 315 "llds_out_file.m"
        {
#line 315 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "void ");
        }
#line 316 "llds_out_file.m"
        {
#line 316 "llds_out_file.m"
          backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
        }
#line 317 "llds_out_file.m"
        {
#line 317 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "required_init(void);\n");
        }
#line 314 "llds_out_file.m"
      }
#line 322 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__FinalPredNames_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 321 "llds_out_file.m"
      {
#line 321 "llds_out_file.m"
      }
#line 322 "llds_out_file.m"
    else
#line 323 "llds_out_file.m"
      {
#line 324 "llds_out_file.m"
        {
#line 324 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "void ");
        }
#line 325 "llds_out_file.m"
        {
#line 325 "llds_out_file.m"
          backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
        }
#line 326 "llds_out_file.m"
        {
#line 326 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "required_final(void);\n");
        }
#line 323 "llds_out_file.m"
      }
#line 329 "llds_out_file.m"
    {
#line 329 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 331 "llds_out_file.m"
    {
#line 331 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "void ");
    }
#line 332 "llds_out_file.m"
    {
#line 332 "llds_out_file.m"
      backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
    }
#line 333 "llds_out_file.m"
    {
#line 333 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "init(void)\n");
    }
#line 334 "llds_out_file.m"
    {
#line 334 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "{\n");
    }
#line 335 "llds_out_file.m"
    {
#line 335 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\tstatic MR_bool done = MR_FALSE;\n");
    }
#line 336 "llds_out_file.m"
    {
#line 336 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\tif (done) {\n");
    }
#line 337 "llds_out_file.m"
    {
#line 337 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\treturn;\n");
    }
#line 338 "llds_out_file.m"
    {
#line 338 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\t}\n");
    }
#line 339 "llds_out_file.m"
    {
#line 339 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\tdone = MR_TRUE;\n");
    }
#line 341 "llds_out_file.m"
    {
#line 341 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_init_bunch_calls_6_p_0(ll_backend__llds_out__llds_out_file__Info_16, (MR_String) "always", (MR_Integer) 0, ll_backend__llds_out__llds_out_file__AlwaysInitModuleBunches_33);
    }
#line 345 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__MaybeInitModuleBunches_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 344 "llds_out_file.m"
      {
#line 344 "llds_out_file.m"
      }
#line 345 "llds_out_file.m"
    else
#line 346 "llds_out_file.m"
      {
#line 347 "llds_out_file.m"
        {
#line 347 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__output_init_bunch_calls_6_p_0(ll_backend__llds_out__llds_out_file__Info_16, (MR_String) "maybe", (MR_Integer) 0, ll_backend__llds_out__llds_out_file__MaybeInitModuleBunches_34);
        }
#line 346 "llds_out_file.m"
      }
#line 350 "llds_out_file.m"
    {
#line 350 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_c_data_init_list_3_p_0(ll_backend__llds_out__llds_out_file__RttiDatas_19);
    }
#line 351 "llds_out_file.m"
    {
#line 351 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_alloc_sites_init_4_p_0(ll_backend__llds_out__llds_out_file__Info_16, ll_backend__llds_out__llds_out_file__AllocSites_24);
    }
#line 357 "llds_out_file.m"
    {
#line 357 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\t");
    }
#line 358 "llds_out_file.m"
    {
#line 358 "llds_out_file.m"
      backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
    }
#line 359 "llds_out_file.m"
    {
#line 359 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "init_debugger();\n");
    }
#line 360 "llds_out_file.m"
    {
#line 360 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "}\n\n");
    }
#line 362 "llds_out_file.m"
    {
#line 362 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "void ");
    }
#line 363 "llds_out_file.m"
    {
#line 363 "llds_out_file.m"
      backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
    }
#line 364 "llds_out_file.m"
    {
#line 364 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "init_type_tables(void)\n");
    }
#line 365 "llds_out_file.m"
    {
#line 365 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "{\n");
    }
#line 366 "llds_out_file.m"
    {
#line 366 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\tstatic MR_bool done = MR_FALSE;\n");
    }
#line 367 "llds_out_file.m"
    {
#line 367 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\tif (done) {\n");
    }
#line 368 "llds_out_file.m"
    {
#line 368 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\treturn;\n");
    }
#line 369 "llds_out_file.m"
    {
#line 369 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\t}\n");
    }
#line 370 "llds_out_file.m"
    {
#line 370 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\tdone = MR_TRUE;\n");
    }
#line 371 "llds_out_file.m"
    {
#line 371 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_type_tables_init_list_3_p_0(ll_backend__llds_out__llds_out_file__RttiDatas_19);
    }
#line 372 "llds_out_file.m"
    {
#line 372 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "}\n\n");
    }
#line 374 "llds_out_file.m"
    {
#line 374 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 375 "llds_out_file.m"
    {
#line 375 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "void ");
    }
#line 376 "llds_out_file.m"
    {
#line 376 "llds_out_file.m"
      backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
    }
#line 377 "llds_out_file.m"
    {
#line 377 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "init_debugger(void)\n");
    }
#line 378 "llds_out_file.m"
    {
#line 378 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "{\n");
    }
#line 379 "llds_out_file.m"
    {
#line 379 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\tstatic MR_bool done = MR_FALSE;\n");
    }
#line 380 "llds_out_file.m"
    {
#line 380 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\tif (done) {\n");
    }
#line 381 "llds_out_file.m"
    {
#line 381 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\treturn;\n");
    }
#line 382 "llds_out_file.m"
    {
#line 382 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\t}\n");
    }
#line 383 "llds_out_file.m"
    {
#line 383 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\tdone = MR_TRUE;\n");
    }
#line 384 "llds_out_file.m"
    {
#line 384 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_debugger_init_list_3_p_0(ll_backend__llds_out__llds_out_file__ModuleLayoutDatas_21);
    }
#line 385 "llds_out_file.m"
    {
#line 385 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "}\n\n");
    }
#line 387 "llds_out_file.m"
    {
#line 387 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#ifdef MR_DEEP_PROFILING\n");
    }
#line 388 "llds_out_file.m"
    {
#line 388 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\nvoid ");
    }
#line 389 "llds_out_file.m"
    {
#line 389 "llds_out_file.m"
      backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
    }
#line 390 "llds_out_file.m"
    {
#line 390 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)\n");
    }
#line 392 "llds_out_file.m"
    {
#line 392 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "{\n");
    }
#line 393 "llds_out_file.m"
    {
#line 393 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\tMR_write_out_module_proc_reps_start(procrep_fp, &");
    }
#line 395 "llds_out_file.m"
    {
#line 395 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__ModuleLayoutName_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 395 "llds_out_file.m"
      MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__ModuleLayoutName_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
#line 395 "llds_out_file.m"
      MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__ModuleLayoutName_43, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__ModuleName_17));
#line 395 "llds_out_file.m"
    }
#line 396 "llds_out_file.m"
    {
#line 396 "llds_out_file.m"
      ll_backend__layout_out__output_layout_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleLayoutName_43);
    }
#line 397 "llds_out_file.m"
    {
#line 397 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) ");\n");
    }
#line 398 "llds_out_file.m"
    {
#line 398 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_write_proc_static_list_3_p_0(ll_backend__llds_out__llds_out_file__ProcLayoutDatas_20);
    }
#line 399 "llds_out_file.m"
    {
#line 399 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\tMR_write_out_module_proc_reps_end(procrep_fp);\n");
    }
#line 400 "llds_out_file.m"
    {
#line 400 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "}\n");
    }
#line 401 "llds_out_file.m"
    {
#line 401 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\n#endif\n\n");
    }
#line 403 "llds_out_file.m"
    {
#line 403 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#ifdef MR_RECORD_TERM_SIZES\n");
    }
#line 404 "llds_out_file.m"
    {
#line 404 "llds_out_file.m"
      ll_backend__llds_out__llds_out_global__output_complexity_arg_info_arrays_3_p_0(ll_backend__llds_out__llds_out_file__ComplexityProcs_22);
    }
#line 405 "llds_out_file.m"
    {
#line 405 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\nvoid ");
    }
#line 406 "llds_out_file.m"
    {
#line 406 "llds_out_file.m"
      backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
    }
#line 407 "llds_out_file.m"
    {
#line 407 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "init_complexity_procs(void)\n");
    }
#line 408 "llds_out_file.m"
    {
#line 408 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "{\n");
    }
#line 409 "llds_out_file.m"
    {
#line 409 "llds_out_file.m"
      ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_p_0(ll_backend__llds_out__llds_out_file__ComplexityProcs_22);
    }
#line 410 "llds_out_file.m"
    {
#line 410 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "}\n");
    }
#line 411 "llds_out_file.m"
    {
#line 411 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\n#endif\n\n");
    }
#line 413 "llds_out_file.m"
    {
#line 413 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#ifdef MR_THREADSCOPE\n");
    }
#line 414 "llds_out_file.m"
    {
#line 414 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\nvoid ");
    }
#line 415 "llds_out_file.m"
    {
#line 415 "llds_out_file.m"
      backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
    }
#line 416 "llds_out_file.m"
    {
#line 416 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "init_threadscope_string_table(void)\n");
    }
#line 417 "llds_out_file.m"
    {
#line 417 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "{\n");
    }
#line 420 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__TSStringTable_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 419 "llds_out_file.m"
      {
#line 419 "llds_out_file.m"
      }
#line 420 "llds_out_file.m"
    else
#line 421 "llds_out_file.m"
      {
#line 421 "llds_out_file.m"
        MR_Integer ll_backend__llds_out__llds_out_file__TSStringTableSize_46;
#line 421 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__MangledModuleName_47;
#line 421 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__V_305_305;
#line 421 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__V_306_306;
#line 421 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__V_308_308;
#line 425 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_282_282;
#line 425 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_283_283;
#line 425 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_284_284;
#line 425 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_285_285;
#line 425 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_286_286;
#line 425 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_287_287;
#line 425 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_288_288;
#line 425 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_289_289;
#line 425 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_290_290;
#line 425 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_291_291;
#line 425 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_292_292;
#line 425 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_293_293;
#line 425 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_294_294;
#line 425 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_295_295;
#line 425 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_296_296;
#line 425 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_297_297;
#line 425 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_298_298;
#line 425 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_299_299;
#line 425 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_300_300;
#line 425 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_301_301;

#line 422 "llds_out_file.m"
        {
#line 422 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__TSStringTableSize_46 = mercury__list__length_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ll_backend__llds_out__llds_out_file__TSStringTable_23);
        }
#line 423 "llds_out_file.m"
        {
#line 423 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "\tMR_threadscope_register_strings_array(\n");
        }
#line 424 "llds_out_file.m"
        {
#line 424 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "\t\t");
        }
#line 425 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_282_282 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 0)));
#line 425 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__MangledModuleName_47 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 1)));
#line 425 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_283_283 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 2)));
#line 425 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_284_284 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 3)));
#line 425 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_285_285 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 4)));
#line 425 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_286_286 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 5)));
#line 425 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_287_287 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 425 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_288_288 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 425 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_289_289 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 425 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_290_290 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 425 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_291_291 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 425 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_292_292 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 6)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 425 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_293_293 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 6)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 425 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_294_294 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 6)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 425 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_295_295 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 6)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 425 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_296_296 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 6)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 425 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_297_297 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 6)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 425 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_298_298 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 6)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 425 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_299_299 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 6)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 425 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_300_300 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 6)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 425 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_301_301 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 7)));
#line 426 "llds_out_file.m"
        {
#line 426 "llds_out_file.m"
          ll_backend__layout_out__output_layout_array_name_5_p_0((MR_Integer) 1, ll_backend__llds_out__llds_out_file__MangledModuleName_47, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)));
        }
#line 10874 "ll_backend.llds_out.llds_out_file.c"
        {
#line 10876 "ll_backend.llds_out.llds_out_file.c"
          ll_backend__llds_out__llds_out_file__V_305_305 = mercury__string__int_to_string_1_f_0(ll_backend__llds_out__llds_out_file__TSStringTableSize_46);
        }
#line 10879 "ll_backend.llds_out.llds_out_file.c"
        {
#line 10881 "ll_backend.llds_out.llds_out_file.c"
          ll_backend__llds_out__llds_out_file__V_306_306 = mercury__string__f_43_43_2_f_0(ll_backend__llds_out__llds_out_file__V_305_305, (MR_String) ");\n");
        }
#line 10884 "ll_backend.llds_out.llds_out_file.c"
        {
#line 10886 "ll_backend.llds_out.llds_out_file.c"
          ll_backend__llds_out__llds_out_file__V_308_308 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__llds_out__llds_out_file__V_306_306);
        }
#line 10889 "ll_backend.llds_out.llds_out_file.c"
        {
#line 10891 "ll_backend.llds_out.llds_out_file.c"
          mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__V_308_308);
        }
#line 421 "llds_out_file.m"
      }
#line 430 "llds_out_file.m"
    {
#line 430 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "}\n");
    }
#line 431 "llds_out_file.m"
    {
#line 431 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\n#endif\n\n");
    }
#line 435 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__InitPredNames_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 434 "llds_out_file.m"
      {
#line 434 "llds_out_file.m"
      }
#line 435 "llds_out_file.m"
    else
#line 436 "llds_out_file.m"
      {
#line 437 "llds_out_file.m"
        {
#line 437 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "void ");
        }
#line 438 "llds_out_file.m"
        {
#line 438 "llds_out_file.m"
          backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
        }
#line 439 "llds_out_file.m"
        {
#line 439 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "required_init(void)\n");
        }
#line 440 "llds_out_file.m"
        {
#line 440 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "{\n");
        }
#line 441 "llds_out_file.m"
        {
#line 441 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__output_required_init_or_final_calls_3_p_0(ll_backend__llds_out__llds_out_file__InitPredNames_25);
        }
#line 442 "llds_out_file.m"
        {
#line 442 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "}\n");
        }
#line 443 "llds_out_file.m"
        {
#line 443 "llds_out_file.m"
          mercury__io__nl_2_p_0();
        }
#line 436 "llds_out_file.m"
      }
#line 448 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__FinalPredNames_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 447 "llds_out_file.m"
      {
#line 447 "llds_out_file.m"
      }
#line 448 "llds_out_file.m"
    else
#line 449 "llds_out_file.m"
      {
#line 450 "llds_out_file.m"
        {
#line 450 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "void ");
        }
#line 451 "llds_out_file.m"
        {
#line 451 "llds_out_file.m"
          backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
        }
#line 452 "llds_out_file.m"
        {
#line 452 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "required_final(void)\n");
        }
#line 453 "llds_out_file.m"
        {
#line 453 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "{\n");
        }
#line 454 "llds_out_file.m"
        {
#line 454 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__output_required_init_or_final_calls_3_p_0(ll_backend__llds_out__llds_out_file__FinalPredNames_26);
        }
#line 455 "llds_out_file.m"
        {
#line 455 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "}\n");
        }
#line 449 "llds_out_file.m"
      }
#line 458 "llds_out_file.m"
    {
#line 458 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "/* ensure everything is compiled with the same grade */\n");
    }
#line 461 "llds_out_file.m"
    {
#line 461 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "static const void *const MR_grade = &MR_GRADE_VAR;\n");
    }
#line 461 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_53 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_52;
#line 263 "llds_out_file.m"
  }
#line 254 "llds_out_file.m"
}

#line 246 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__proc_gather_env_var_names_3_p_0(
#line 246 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 246 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_0_2,
#line 246 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_3)
#line 246 "llds_out_file.m"
{
#line 249 "llds_out_file.m"
  while (MR_TRUE)
#line 249 "llds_out_file.m"
    {
#line 249 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 249 "llds_out_file.m"
      {
#line 249 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 249 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 249 "llds_out_file.m"
          *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_3 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_0_2;
#line 249 "llds_out_file.m"
        else
#line 250 "llds_out_file.m"
          {
#line 250 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Proc_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 250 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Procs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 250 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_7, (MR_Integer) 8)));
#line 250 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_13_13;
#line 251 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_7, (MR_Integer) 0)));
#line 251 "llds_out_file.m"
            MR_Integer ll_backend__llds_out__llds_out_file__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_7, (MR_Integer) 1)));
#line 251 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_7, (MR_Integer) 2)));
#line 251 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_7, (MR_Integer) 3)));
#line 251 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_7, (MR_Integer) 4)));
#line 251 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_7, (MR_Integer) 5)));
#line 251 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_7, (MR_Integer) 6)));
#line 251 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_7, (MR_Integer) 7)));

#line 251 "llds_out_file.m"
            {
#line 251 "llds_out_file.m"
              mercury__set__union_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ll_backend__llds_out__llds_out_file__V_12_12, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_0_2, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_13_13);
            }
#line 252 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 252 "llds_out_file.m"
            {
#line 252 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__Procs_8;
#line 252 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_0__tmp_copy_2 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_13_13;

#line 252 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_0_2 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_0__tmp_copy_2;
#line 252 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 252 "llds_out_file.m"
            }
#line 252 "llds_out_file.m"
            continue;
#line 250 "llds_out_file.m"
          }
#line 249 "llds_out_file.m"
      }
#line 249 "llds_out_file.m"
      break;
#line 249 "llds_out_file.m"
    }
#line 246 "llds_out_file.m"
}

#line 238 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__module_gather_env_var_names_3_p_0(
#line 238 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 238 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_0_2,
#line 238 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_3)
#line 238 "llds_out_file.m"
{
#line 241 "llds_out_file.m"
  while (MR_TRUE)
#line 241 "llds_out_file.m"
    {
#line 241 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 241 "llds_out_file.m"
      {
#line 241 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 241 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 241 "llds_out_file.m"
          *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_3 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_0_2;
#line 241 "llds_out_file.m"
        else
#line 242 "llds_out_file.m"
          {
#line 242 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Module_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 242 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Modules_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 242 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Module_7, (MR_Integer) 1)));
#line 242 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_13_13;
#line 243 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Module_7, (MR_Integer) 0)));

#line 243 "llds_out_file.m"
            {
#line 243 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__proc_gather_env_var_names_3_p_0(ll_backend__llds_out__llds_out_file__V_12_12, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_0_2, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_13_13);
            }
#line 244 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 244 "llds_out_file.m"
            {
#line 244 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__Modules_8;
#line 244 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_0__tmp_copy_2 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_13_13;

#line 244 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_0_2 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_0__tmp_copy_2;
#line 244 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 244 "llds_out_file.m"
            }
#line 244 "llds_out_file.m"
            continue;
#line 242 "llds_out_file.m"
          }
#line 241 "llds_out_file.m"
      }
#line 241 "llds_out_file.m"
      break;
#line 241 "llds_out_file.m"
    }
#line 238 "llds_out_file.m"
}

#line 230 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_7_p_0_12(
#line 230 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 230 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 230 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 230 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 230 "llds_out_file.m"
{
#line 230 "llds_out_file.m"
  {
#line 230 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 230 "llds_out_file.m"
    {
#line 230 "llds_out_file.m"
      mercury__io__write_string_3_p_0(((MR_String) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
#line 230 "llds_out_file.m"
      return;
    }
#line 230 "llds_out_file.m"
  }
#line 230 "llds_out_file.m"
}

#line 229 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_7_p_0_11(
#line 229 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 229 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 229 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 229 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 229 "llds_out_file.m"
{
#line 229 "llds_out_file.m"
  {
#line 229 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 229 "llds_out_file.m"
    {
#line 229 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_user_foreign_code_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
#line 229 "llds_out_file.m"
      return;
    }
#line 229 "llds_out_file.m"
  }
#line 229 "llds_out_file.m"
}

#line 228 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_7_p_0_10(
#line 228 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 228 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 228 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 228 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 228 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 228 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5)
#line 228 "llds_out_file.m"
{
#line 228 "llds_out_file.m"
  {
#line 228 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 228 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv27_STATE_VARIABLE_DeclSet_16;

#line 228 "llds_out_file.m"
    {
#line 228 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_comp_gen_c_module_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv27_STATE_VARIABLE_DeclSet_16);
    }
#line 228 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv27_STATE_VARIABLE_DeclSet_16));
#line 228 "llds_out_file.m"
  }
#line 228 "llds_out_file.m"
}

#line 215 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_7_p_0_9(
#line 215 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 215 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 215 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 215 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 215 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 215 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5)
#line 215 "llds_out_file.m"
{
#line 215 "llds_out_file.m"
  {
#line 215 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 215 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv24_HeadVar__4_4;

#line 215 "llds_out_file.m"
    {
#line 215 "llds_out_file.m"
      ll_backend__layout_out__output_closure_layout_data_defn_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv24_HeadVar__4_4);
    }
#line 215 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv24_HeadVar__4_4));
#line 215 "llds_out_file.m"
  }
#line 215 "llds_out_file.m"
}

#line 213 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_7_p_0_8(
#line 213 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 213 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 213 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 213 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 213 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 213 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5)
#line 213 "llds_out_file.m"
{
#line 213 "llds_out_file.m"
  {
#line 213 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 213 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv21_HeadVar__4_4;

#line 213 "llds_out_file.m"
    {
#line 213 "llds_out_file.m"
      ll_backend__layout_out__output_module_layout_data_defn_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv21_HeadVar__4_4);
    }
#line 213 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv21_HeadVar__4_4));
#line 213 "llds_out_file.m"
  }
#line 213 "llds_out_file.m"
}

#line 211 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_7_p_0_7(
#line 211 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 211 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 211 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 211 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 211 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 211 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5)
#line 211 "llds_out_file.m"
{
#line 211 "llds_out_file.m"
  {
#line 211 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 211 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv18_HeadVar__4_4;

#line 211 "llds_out_file.m"
    {
#line 211 "llds_out_file.m"
      ll_backend__layout_out__output_proc_layout_data_defn_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv18_HeadVar__4_4);
    }
#line 211 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv18_HeadVar__4_4));
#line 211 "llds_out_file.m"
  }
#line 211 "llds_out_file.m"
}

#line 201 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_7_p_0_6(
#line 201 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 201 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 201 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 201 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 201 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 201 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5)
#line 201 "llds_out_file.m"
{
#line 201 "llds_out_file.m"
  {
#line 201 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 201 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv15_HeadVar__4_4;

#line 201 "llds_out_file.m"
    {
#line 201 "llds_out_file.m"
      ll_backend__rtti_out__output_rtti_data_defn_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv15_HeadVar__4_4);
    }
#line 201 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv15_HeadVar__4_4));
#line 201 "llds_out_file.m"
  }
#line 201 "llds_out_file.m"
}

#line 199 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_7_p_0_5(
#line 199 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 199 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 199 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 199 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 199 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 199 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5)
#line 199 "llds_out_file.m"
{
#line 199 "llds_out_file.m"
  {
#line 199 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 199 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv12_HeadVar__4_4;

#line 199 "llds_out_file.m"
    {
#line 199 "llds_out_file.m"
      ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv12_HeadVar__4_4);
    }
#line 199 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv12_HeadVar__4_4));
#line 199 "llds_out_file.m"
  }
#line 199 "llds_out_file.m"
}

#line 197 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_7_p_0_4(
#line 197 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 197 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 197 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 197 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 197 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 197 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5)
#line 197 "llds_out_file.m"
{
#line 197 "llds_out_file.m"
  {
#line 197 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 197 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv9_HeadVar__4_4;

#line 197 "llds_out_file.m"
    {
#line 197 "llds_out_file.m"
      ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv9_HeadVar__4_4);
    }
#line 197 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv9_HeadVar__4_4));
#line 197 "llds_out_file.m"
  }
#line 197 "llds_out_file.m"
}

#line 195 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_7_p_0_3(
#line 195 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 195 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 195 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 195 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 195 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 195 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5)
#line 195 "llds_out_file.m"
{
#line 195 "llds_out_file.m"
  {
#line 195 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 195 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv6_HeadVar__4_4;

#line 195 "llds_out_file.m"
    {
#line 195 "llds_out_file.m"
      ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv6_HeadVar__4_4);
    }
#line 195 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv6_HeadVar__4_4));
#line 195 "llds_out_file.m"
  }
#line 195 "llds_out_file.m"
}

#line 190 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_7_p_0_2(
#line 190 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 190 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 190 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 190 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 190 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 190 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5)
#line 190 "llds_out_file.m"
{
#line 190 "llds_out_file.m"
  {
#line 190 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 190 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv3_HeadVar__3_3;

#line 190 "llds_out_file.m"
    {
#line 190 "llds_out_file.m"
      ll_backend__llds_out__llds_out_global__output_vector_common_data_decl_5_p_0(((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv3_HeadVar__3_3);
    }
#line 190 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv3_HeadVar__3_3));
#line 190 "llds_out_file.m"
  }
#line 190 "llds_out_file.m"
}

#line 188 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_7_p_0_1(
#line 188 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 188 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 188 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 188 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 188 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 188 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5)
#line 188 "llds_out_file.m"
{
#line 188 "llds_out_file.m"
  {
#line 188 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 188 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv0_HeadVar__3_3;

#line 188 "llds_out_file.m"
    {
#line 188 "llds_out_file.m"
      ll_backend__llds_out__llds_out_global__output_scalar_common_data_decl_5_p_0(((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv0_HeadVar__3_3);
    }
#line 188 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv0_HeadVar__3_3));
#line 188 "llds_out_file.m"
  }
#line 188 "llds_out_file.m"
}

#line 152 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_7_p_0(
#line 152 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Globals_8,
#line 152 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__CFile_9,
#line 152 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__FileStream_10,
#line 152 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_61,
#line 152 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_62)
#line 152 "llds_out_file.m"
{
#line 155 "llds_out_file.m"
  {
#line 155 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_127_127;
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_133_133;
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_134_134;
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_135_135;
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_141_141;
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ModuleName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_9, (MR_Integer) 0)));
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__C_HeaderLines_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_9, (MR_Integer) 1)));
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__UserForeignCode_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_9, (MR_Integer) 2)));
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__Exports_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_9, (MR_Integer) 3)));
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TablingInfoStructs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_9, (MR_Integer) 4)));
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ScalarCommonDatas_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_9, (MR_Integer) 5)));
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__VectorCommonDatas_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_9, (MR_Integer) 6)));
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__RttiDatas_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_9, (MR_Integer) 7)));
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__PseudoTypeInfos_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_9, (MR_Integer) 8)));
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__HLDSVarNums_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_9, (MR_Integer) 9)));
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ShortLocns_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_9, (MR_Integer) 10)));
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__LongLocns_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_9, (MR_Integer) 11)));
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__UserEventVarNums_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_9, (MR_Integer) 12)));
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__UserEvents_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_9, (MR_Integer) 13)));
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__NoVarLabelLayouts_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_9, (MR_Integer) 14)));
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__SVarLabelLayouts_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_9, (MR_Integer) 15)));
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__LVarLabelLayouts_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_9, (MR_Integer) 16)));
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__InternalLabelToLayoutMap_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_9, (MR_Integer) 17)));
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__EntryLabelToLayoutMap_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_9, (MR_Integer) 18)));
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__CallSiteStatics_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_9, (MR_Integer) 19)));
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__CoveragePoints_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_9, (MR_Integer) 20)));
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ProcStatics_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_9, (MR_Integer) 21)));
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ProcHeadVarNums_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_9, (MR_Integer) 22)));
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ProcVarNames_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_9, (MR_Integer) 23)));
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ProcBodyBytecodes_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_9, (MR_Integer) 24)));
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TSStringTable_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_9, (MR_Integer) 25)));
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TableIoDecls_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_9, (MR_Integer) 26)));
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TableIoDeclMap_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_9, (MR_Integer) 27)));
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ProcEventLayouts_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_9, (MR_Integer) 28)));
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ExecTraces_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_9, (MR_Integer) 29)));
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ProcLayoutDatas_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_9, (MR_Integer) 30)));
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ModuleLayoutDatas_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_9, (MR_Integer) 31)));
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ClosureLayoutDatas_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_9, (MR_Integer) 32)));
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__AllocSites_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_9, (MR_Integer) 33)));
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__AllocSiteMap_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_9, (MR_Integer) 34)));
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__Modules_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_9, (MR_Integer) 35)));
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__UserInitPredCNames_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_9, (MR_Integer) 36)));
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__UserFinalPredCNames_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_9, (MR_Integer) 37)));
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ComplexityProcs_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_9, (MR_Integer) 38)));
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__Info_52;
#line 155 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__Version_53;
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__OutputStream_54;
#line 155 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__SourceFileName_55;
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__EnvVarNameSet_56;
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__EnvVarNames_57;
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__EntryLabels_58;
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__InternalLabels_59;
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_70_70;
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_78_78;
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_81_81;
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_83_83;
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_85_85;
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_87_87;
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_88_88;
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_90_90;
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_91_91;
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_93_93;
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_94_94;
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_96_96;
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_97_97;
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_101_101;
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_102_102;
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_104_104;
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_105_105;
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_107_107;
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_108_108;
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_111_111;
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_113_113;
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_115_115;
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_116_116;
#line 155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_118_118;
#line 188 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_DeclSet_78_78;
#line 188 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_IO_79_79;
#line 190 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv5_STATE_VARIABLE_DeclSet_81_81;
#line 190 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv4_STATE_VARIABLE_IO_82_82;
#line 195 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv8_STATE_VARIABLE_DeclSet_88_88;
#line 195 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv7_STATE_VARIABLE_IO_89_89;
#line 197 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv11_STATE_VARIABLE_DeclSet_91_91;
#line 197 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv10_STATE_VARIABLE_IO_92_92;
#line 199 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv14_STATE_VARIABLE_DeclSet_94_94;
#line 199 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv13_STATE_VARIABLE_IO_95_95;
#line 201 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv17_STATE_VARIABLE_DeclSet_97_97;
#line 201 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv16_STATE_VARIABLE_IO_98_98;
#line 211 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv20_STATE_VARIABLE_DeclSet_102_102;
#line 211 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv19_STATE_VARIABLE_IO_103_103;
#line 213 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv23_STATE_VARIABLE_DeclSet_105_105;
#line 213 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv22_STATE_VARIABLE_IO_106_106;
#line 215 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv26_STATE_VARIABLE_DeclSet_108_108;
#line 215 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv25_STATE_VARIABLE_IO_109_109;
#line 228 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv29_STATE_VARIABLE_DeclSet_116_116;
#line 228 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv28_STATE_VARIABLE_IO_117_117;
#line 229 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv30_STATE_VARIABLE_IO_119_119;
#line 230 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv31_STATE_VARIABLE_IO_121_121;
#line 236 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_60_60;

#line 168 "llds_out_file.m"
    {
#line 168 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__Info_52 = ll_backend__llds_out__llds_out_util__init_llds_out_info_6_f_0(ll_backend__llds_out__llds_out_file__ModuleName_13, ll_backend__llds_out__llds_out_file__Globals_8, ll_backend__llds_out__llds_out_file__InternalLabelToLayoutMap_30, ll_backend__llds_out__llds_out_file__EntryLabelToLayoutMap_31, ll_backend__llds_out__llds_out_file__TableIoDeclMap_40, ll_backend__llds_out__llds_out_file__AllocSiteMap_47);
    }
#line 171 "llds_out_file.m"
    {
#line 171 "llds_out_file.m"
      mercury__library__version_1_p_0(&ll_backend__llds_out__llds_out_file__Version_53);
    }
#line 172 "llds_out_file.m"
    {
#line 172 "llds_out_file.m"
      mercury__io__set_output_stream_4_p_0(ll_backend__llds_out__llds_out_file__FileStream_10, &ll_backend__llds_out__llds_out_file__OutputStream_54);
    }
#line 173 "llds_out_file.m"
    {
#line 173 "llds_out_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(ll_backend__llds_out__llds_out_file__Globals_8, ll_backend__llds_out__llds_out_file__ModuleName_13, (MR_String) ".m", (MR_Integer) 1, &ll_backend__llds_out__llds_out_file__SourceFileName_55);
    }
#line 175 "llds_out_file.m"
    {
#line 175 "llds_out_file.m"
      backend_libs__c_util__output_c_file_intro_and_grade_5_p_0(ll_backend__llds_out__llds_out_file__Globals_8, ll_backend__llds_out__llds_out_file__SourceFileName_55, ll_backend__llds_out__llds_out_file__Version_53);
    }
#line 11837 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_127_127 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 176 "llds_out_file.m"
    {
#line 176 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_70_70 = mercury__set__init_0_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_127_127);
    }
#line 176 "llds_out_file.m"
    {
#line 176 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__module_gather_env_var_names_3_p_0(ll_backend__llds_out__llds_out_file__Modules_48, ll_backend__llds_out__llds_out_file__V_70_70, &ll_backend__llds_out__llds_out_file__EnvVarNameSet_56);
    }
#line 177 "llds_out_file.m"
    {
#line 177 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__EnvVarNames_57 = mercury__set__to_sorted_list_1_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_127_127, ll_backend__llds_out__llds_out_file__EnvVarNameSet_56);
    }
#line 178 "llds_out_file.m"
    {
#line 178 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_init_comment_6_p_0(ll_backend__llds_out__llds_out_file__ModuleName_13, ll_backend__llds_out__llds_out_file__UserInitPredCNames_49, ll_backend__llds_out__llds_out_file__UserFinalPredCNames_50, ll_backend__llds_out__llds_out_file__EnvVarNames_57);
    }
#line 180 "llds_out_file.m"
    {
#line 180 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_c_file_mercury_headers_3_p_0(ll_backend__llds_out__llds_out_file__Info_52);
    }
#line 182 "llds_out_file.m"
    {
#line 182 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_foreign_header_include_lines_4_p_0(ll_backend__llds_out__llds_out_file__Info_52, ll_backend__llds_out__llds_out_file__C_HeaderLines_14);
    }
#line 183 "llds_out_file.m"
    {
#line 183 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 185 "llds_out_file.m"
    {
#line 185 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__gather_c_file_labels_3_p_0(ll_backend__llds_out__llds_out_file__Modules_48, &ll_backend__llds_out__llds_out_file__EntryLabels_58, &ll_backend__llds_out__llds_out_file__InternalLabels_59);
    }
#line 187 "llds_out_file.m"
    {
#line 187 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_static_linkage_define_2_p_0();
    }
#line 11884 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_133_133 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_scalar_common_data_array_0;
#line 11886 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_134_134 = (MR_Word) &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0;
#line 11888 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_135_135 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 188 "llds_out_file.m"
    {
#line 188 "llds_out_file.m"
      mercury__list__foldl2_6_p_2(ll_backend__llds_out__llds_out_file__TypeCtorInfo_133_133, ll_backend__llds_out__llds_out_file__TypeCtorInfo_134_134, ll_backend__llds_out__llds_out_file__TypeCtorInfo_135_135, (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_2[2], ll_backend__llds_out__llds_out_file__ScalarCommonDatas_18, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_61)), &ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_DeclSet_78_78, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_IO_79_79);
    }
#line 188 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_78_78 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_DeclSet_78_78);
#line 11897 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_141_141 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_vector_common_data_array_0;
#line 190 "llds_out_file.m"
    {
#line 190 "llds_out_file.m"
      mercury__list__foldl2_6_p_2(ll_backend__llds_out__llds_out_file__TypeCtorInfo_141_141, ll_backend__llds_out__llds_out_file__TypeCtorInfo_134_134, ll_backend__llds_out__llds_out_file__TypeCtorInfo_135_135, (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_2[3], ll_backend__llds_out__llds_out_file__VectorCommonDatas_19, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_78_78)), &ll_backend__llds_out__llds_out_file__conv5_STATE_VARIABLE_DeclSet_81_81, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv4_STATE_VARIABLE_IO_82_82);
    }
#line 190 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_81_81 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv5_STATE_VARIABLE_DeclSet_81_81);
#line 192 "llds_out_file.m"
    {
#line 192 "llds_out_file.m"
      ll_backend__rtti_out__output_rtti_data_decl_list_6_p_0(ll_backend__llds_out__llds_out_file__Info_52, ll_backend__llds_out__llds_out_file__RttiDatas_20, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_81_81, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_83_83);
    }
#line 193 "llds_out_file.m"
    {
#line 193 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_record_c_label_decls_7_p_0(ll_backend__llds_out__llds_out_file__Info_52, ll_backend__llds_out__llds_out_file__EntryLabels_58, ll_backend__llds_out__llds_out_file__InternalLabels_59, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_83_83, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_85_85);
    }
#line 195 "llds_out_file.m"
    {
#line 195 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 195 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_87_87, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_5[0]));
#line 195 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_87_87, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_single_c_file_7_p_0_3));
#line 195 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_87_87, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 195 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_87_87, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_52));
#line 195 "llds_out_file.m"
    }
#line 195 "llds_out_file.m"
    {
#line 195 "llds_out_file.m"
      mercury__list__foldl2_6_p_2((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_tabling_info_struct_0, ll_backend__llds_out__llds_out_file__TypeCtorInfo_134_134, ll_backend__llds_out__llds_out_file__TypeCtorInfo_135_135, ll_backend__llds_out__llds_out_file__V_87_87, ll_backend__llds_out__llds_out_file__TablingInfoStructs_17, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_85_85)), &ll_backend__llds_out__llds_out_file__conv8_STATE_VARIABLE_DeclSet_88_88, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv7_STATE_VARIABLE_IO_89_89);
    }
#line 195 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_88_88 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv8_STATE_VARIABLE_DeclSet_88_88);
#line 197 "llds_out_file.m"
    {
#line 197 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 197 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_90_90, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_5[1]));
#line 197 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_90_90, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_single_c_file_7_p_0_4));
#line 197 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_90_90, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 197 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_90_90, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_52));
#line 197 "llds_out_file.m"
    }
#line 197 "llds_out_file.m"
    {
#line 197 "llds_out_file.m"
      mercury__list__foldl2_6_p_2(ll_backend__llds_out__llds_out_file__TypeCtorInfo_133_133, ll_backend__llds_out__llds_out_file__TypeCtorInfo_134_134, ll_backend__llds_out__llds_out_file__TypeCtorInfo_135_135, ll_backend__llds_out__llds_out_file__V_90_90, ll_backend__llds_out__llds_out_file__ScalarCommonDatas_18, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_88_88)), &ll_backend__llds_out__llds_out_file__conv11_STATE_VARIABLE_DeclSet_91_91, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv10_STATE_VARIABLE_IO_92_92);
    }
#line 197 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_91_91 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv11_STATE_VARIABLE_DeclSet_91_91);
#line 199 "llds_out_file.m"
    {
#line 199 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 199 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_93_93, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_5[2]));
#line 199 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_93_93, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_single_c_file_7_p_0_5));
#line 199 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_93_93, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 199 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_93_93, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_52));
#line 199 "llds_out_file.m"
    }
#line 199 "llds_out_file.m"
    {
#line 199 "llds_out_file.m"
      mercury__list__foldl2_6_p_2(ll_backend__llds_out__llds_out_file__TypeCtorInfo_141_141, ll_backend__llds_out__llds_out_file__TypeCtorInfo_134_134, ll_backend__llds_out__llds_out_file__TypeCtorInfo_135_135, ll_backend__llds_out__llds_out_file__V_93_93, ll_backend__llds_out__llds_out_file__VectorCommonDatas_19, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_91_91)), &ll_backend__llds_out__llds_out_file__conv14_STATE_VARIABLE_DeclSet_94_94, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv13_STATE_VARIABLE_IO_95_95);
    }
#line 199 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_94_94 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv14_STATE_VARIABLE_DeclSet_94_94);
#line 201 "llds_out_file.m"
    {
#line 201 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 201 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_96_96, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_5[3]));
#line 201 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_96_96, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_single_c_file_7_p_0_6));
#line 201 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_96_96, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 201 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_96_96, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_52));
#line 201 "llds_out_file.m"
    }
#line 201 "llds_out_file.m"
    {
#line 201 "llds_out_file.m"
      mercury__list__foldl2_6_p_2((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0, ll_backend__llds_out__llds_out_file__TypeCtorInfo_134_134, ll_backend__llds_out__llds_out_file__TypeCtorInfo_135_135, ll_backend__llds_out__llds_out_file__V_96_96, ll_backend__llds_out__llds_out_file__RttiDatas_20, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_94_94)), &ll_backend__llds_out__llds_out_file__conv17_STATE_VARIABLE_DeclSet_97_97, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv16_STATE_VARIABLE_IO_98_98);
    }
#line 201 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_97_97 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv17_STATE_VARIABLE_DeclSet_97_97);
#line 203 "llds_out_file.m"
    {
#line 203 "llds_out_file.m"
      mercury__io__nl_2_p_0();
    }
#line 204 "llds_out_file.m"
    {
#line 204 "llds_out_file.m"
      ll_backend__layout_out__output_layout_array_decls_22_p_0(ll_backend__llds_out__llds_out_file__Info_52, ll_backend__llds_out__llds_out_file__PseudoTypeInfos_21, ll_backend__llds_out__llds_out_file__HLDSVarNums_22, ll_backend__llds_out__llds_out_file__ShortLocns_23, ll_backend__llds_out__llds_out_file__LongLocns_24, ll_backend__llds_out__llds_out_file__UserEventVarNums_25, ll_backend__llds_out__llds_out_file__UserEvents_26, ll_backend__llds_out__llds_out_file__NoVarLabelLayouts_27, ll_backend__llds_out__llds_out_file__SVarLabelLayouts_28, ll_backend__llds_out__llds_out_file__LVarLabelLayouts_29, ll_backend__llds_out__llds_out_file__CallSiteStatics_32, ll_backend__llds_out__llds_out_file__CoveragePoints_33, ll_backend__llds_out__llds_out_file__ProcStatics_34, ll_backend__llds_out__llds_out_file__ProcHeadVarNums_35, ll_backend__llds_out__llds_out_file__ProcVarNames_36, ll_backend__llds_out__llds_out_file__ProcBodyBytecodes_37, ll_backend__llds_out__llds_out_file__TableIoDecls_39, ll_backend__llds_out__llds_out_file__ProcEventLayouts_41, ll_backend__llds_out__llds_out_file__ExecTraces_42, ll_backend__llds_out__llds_out_file__AllocSites_46);
    }
#line 211 "llds_out_file.m"
    {
#line 211 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_101_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 211 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_101_101, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_5[4]));
#line 211 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_101_101, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_single_c_file_7_p_0_7));
#line 211 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_101_101, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 211 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_101_101, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_52));
#line 211 "llds_out_file.m"
    }
#line 211 "llds_out_file.m"
    {
#line 211 "llds_out_file.m"
      mercury__list__foldl2_6_p_2((MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_data_0, ll_backend__llds_out__llds_out_file__TypeCtorInfo_134_134, ll_backend__llds_out__llds_out_file__TypeCtorInfo_135_135, ll_backend__llds_out__llds_out_file__V_101_101, ll_backend__llds_out__llds_out_file__ProcLayoutDatas_43, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_97_97)), &ll_backend__llds_out__llds_out_file__conv20_STATE_VARIABLE_DeclSet_102_102, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv19_STATE_VARIABLE_IO_103_103);
    }
#line 211 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_102_102 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv20_STATE_VARIABLE_DeclSet_102_102);
#line 213 "llds_out_file.m"
    {
#line 213 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 213 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_104_104, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_5[5]));
#line 213 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_104_104, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_single_c_file_7_p_0_8));
#line 213 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_104_104, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 213 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_104_104, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_52));
#line 213 "llds_out_file.m"
    }
#line 213 "llds_out_file.m"
    {
#line 213 "llds_out_file.m"
      mercury__list__foldl2_6_p_2((MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_module_layout_data_0, ll_backend__llds_out__llds_out_file__TypeCtorInfo_134_134, ll_backend__llds_out__llds_out_file__TypeCtorInfo_135_135, ll_backend__llds_out__llds_out_file__V_104_104, ll_backend__llds_out__llds_out_file__ModuleLayoutDatas_44, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_102_102)), &ll_backend__llds_out__llds_out_file__conv23_STATE_VARIABLE_DeclSet_105_105, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv22_STATE_VARIABLE_IO_106_106);
    }
#line 213 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_105_105 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv23_STATE_VARIABLE_DeclSet_105_105);
#line 215 "llds_out_file.m"
    {
#line 215 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_107_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 215 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_107_107, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_5[6]));
#line 215 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_107_107, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_single_c_file_7_p_0_9));
#line 215 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_107_107, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 215 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_107_107, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_52));
#line 215 "llds_out_file.m"
    }
#line 215 "llds_out_file.m"
    {
#line 215 "llds_out_file.m"
      mercury__list__foldl2_6_p_2((MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_closure_proc_id_data_0, ll_backend__llds_out__llds_out_file__TypeCtorInfo_134_134, ll_backend__llds_out__llds_out_file__TypeCtorInfo_135_135, ll_backend__llds_out__llds_out_file__V_107_107, ll_backend__llds_out__llds_out_file__ClosureLayoutDatas_45, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_105_105)), &ll_backend__llds_out__llds_out_file__conv26_STATE_VARIABLE_DeclSet_108_108, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv25_STATE_VARIABLE_IO_109_109);
    }
#line 215 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_108_108 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv26_STATE_VARIABLE_DeclSet_108_108);
#line 217 "llds_out_file.m"
    {
#line 217 "llds_out_file.m"
      mercury__io__nl_2_p_0();
    }
#line 219 "llds_out_file.m"
    {
#line 219 "llds_out_file.m"
      ll_backend__llds_out__llds_out_data__output_record_rvals_decls_6_p_0(ll_backend__llds_out__llds_out_file__Info_52, ll_backend__llds_out__llds_out_file__PseudoTypeInfos_21, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_108_108, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_111_111);
    }
#line 220 "llds_out_file.m"
    {
#line 220 "llds_out_file.m"
      ll_backend__layout_out__output_layout_array_defns_25_p_0(ll_backend__llds_out__llds_out_file__Info_52, ll_backend__llds_out__llds_out_file__PseudoTypeInfos_21, ll_backend__llds_out__llds_out_file__HLDSVarNums_22, ll_backend__llds_out__llds_out_file__ShortLocns_23, ll_backend__llds_out__llds_out_file__LongLocns_24, ll_backend__llds_out__llds_out_file__UserEventVarNums_25, ll_backend__llds_out__llds_out_file__UserEvents_26, ll_backend__llds_out__llds_out_file__NoVarLabelLayouts_27, ll_backend__llds_out__llds_out_file__SVarLabelLayouts_28, ll_backend__llds_out__llds_out_file__LVarLabelLayouts_29, ll_backend__llds_out__llds_out_file__CallSiteStatics_32, ll_backend__llds_out__llds_out_file__CoveragePoints_33, ll_backend__llds_out__llds_out_file__ProcStatics_34, ll_backend__llds_out__llds_out_file__ProcHeadVarNums_35, ll_backend__llds_out__llds_out_file__ProcVarNames_36, ll_backend__llds_out__llds_out_file__ProcBodyBytecodes_37, ll_backend__llds_out__llds_out_file__TableIoDecls_39, ll_backend__llds_out__llds_out_file__ProcEventLayouts_41, ll_backend__llds_out__llds_out_file__ExecTraces_42, ll_backend__llds_out__llds_out_file__TSStringTable_38, ll_backend__llds_out__llds_out_file__AllocSites_46, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_111_111, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_113_113);
    }
#line 228 "llds_out_file.m"
    {
#line 228 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_115_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 228 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_115_115, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_5[7]));
#line 228 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_115_115, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_single_c_file_7_p_0_10));
#line 228 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_115_115, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 228 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_115_115, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_52));
#line 228 "llds_out_file.m"
    }
#line 228 "llds_out_file.m"
    {
#line 228 "llds_out_file.m"
      mercury__list__foldl2_6_p_2((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_comp_gen_c_module_0, ll_backend__llds_out__llds_out_file__TypeCtorInfo_134_134, ll_backend__llds_out__llds_out_file__TypeCtorInfo_135_135, ll_backend__llds_out__llds_out_file__V_115_115, ll_backend__llds_out__llds_out_file__Modules_48, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_113_113)), &ll_backend__llds_out__llds_out_file__conv29_STATE_VARIABLE_DeclSet_116_116, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv28_STATE_VARIABLE_IO_117_117);
    }
#line 228 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_116_116 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv29_STATE_VARIABLE_DeclSet_116_116);
#line 229 "llds_out_file.m"
    {
#line 229 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_118_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 229 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_118_118, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_6[0]));
#line 229 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_118_118, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_single_c_file_7_p_0_11));
#line 229 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_118_118, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 229 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_118_118, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_52));
#line 229 "llds_out_file.m"
    }
#line 229 "llds_out_file.m"
    {
#line 229 "llds_out_file.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_user_foreign_code_0, ll_backend__llds_out__llds_out_file__TypeCtorInfo_135_135, ll_backend__llds_out__llds_out_file__V_118_118, ll_backend__llds_out__llds_out_file__UserForeignCode_15, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv30_STATE_VARIABLE_IO_119_119);
    }
#line 230 "llds_out_file.m"
    {
#line 230 "llds_out_file.m"
      mercury__list__foldl_4_p_2(ll_backend__llds_out__llds_out_file__TypeCtorInfo_127_127, ll_backend__llds_out__llds_out_file__TypeCtorInfo_135_135, (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_2[4], ll_backend__llds_out__llds_out_file__Exports_16, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv31_STATE_VARIABLE_IO_121_121);
    }
#line 231 "llds_out_file.m"
    {
#line 231 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 232 "llds_out_file.m"
    {
#line 232 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_c_module_init_list_15_p_0(ll_backend__llds_out__llds_out_file__Info_52, ll_backend__llds_out__llds_out_file__ModuleName_13, ll_backend__llds_out__llds_out_file__Modules_48, ll_backend__llds_out__llds_out_file__RttiDatas_20, ll_backend__llds_out__llds_out_file__ProcLayoutDatas_43, ll_backend__llds_out__llds_out_file__ModuleLayoutDatas_44, ll_backend__llds_out__llds_out_file__ComplexityProcs_51, ll_backend__llds_out__llds_out_file__TSStringTable_38, ll_backend__llds_out__llds_out_file__AllocSites_46, ll_backend__llds_out__llds_out_file__UserInitPredCNames_49, ll_backend__llds_out__llds_out_file__UserFinalPredCNames_50, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_116_116, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_62);
    }
#line 236 "llds_out_file.m"
    {
#line 236 "llds_out_file.m"
      mercury__io__set_output_stream_4_p_0(ll_backend__llds_out__llds_out_file__OutputStream_54, &ll_backend__llds_out__llds_out_file__V_60_60);
    }
#line 155 "llds_out_file.m"
  }
#line 152 "llds_out_file.m"
}

#line 123 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_file_mercury_headers_3_p_0(
#line 123 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_4)
#line 123 "llds_out_file.m"
{
#line 126 "llds_out_file.m"
  {
#line 126 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 126 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TraceLevel_6;
#line 126 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TraceLevelIsNone_7;
#line 126 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__DeepProfile_8;
#line 126 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__GenerateBytecode_9;
#line 129 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_22_22;
#line 129 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_23_23;
#line 129 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_24_24;
#line 129 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_25_25;
#line 129 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_26_26;
#line 129 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_27_27;
#line 129 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_28_28;
#line 129 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_29_29;
#line 129 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_30_30;
#line 129 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_31_31;
#line 129 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_32_32;
#line 129 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_33_33;
#line 129 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_34_34;
#line 129 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_35_35;
#line 129 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_36_36;
#line 129 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_37_37;
#line 129 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_38_38;
#line 129 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_39_39;
#line 129 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_40_40;
#line 129 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_41_41;
#line 137 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_42_42;
#line 137 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_43_43;
#line 137 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_44_44;
#line 137 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_45_45;
#line 137 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_46_46;
#line 137 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_47_47;
#line 137 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_48_48;
#line 137 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_49_49;
#line 137 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_50_50;
#line 137 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_52_52;
#line 137 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_53_53;
#line 137 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_54_54;
#line 137 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_55_55;
#line 137 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_56_56;
#line 137 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_57_57;
#line 137 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_58_58;
#line 137 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_59_59;
#line 137 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_60_60;
#line 137 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_61_61;

#line 127 "llds_out_file.m"
    {
#line 127 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#define MR_ALLOW_RESET\n");
    }
#line 128 "llds_out_file.m"
    {
#line 128 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#include \"mercury_imp.h\"\n");
    }
#line 129 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 0)));
#line 129 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 1)));
#line 129 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 2)));
#line 129 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 3)));
#line 129 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 4)));
#line 129 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 5)));
#line 129 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 129 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 129 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 129 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 129 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 129 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 6)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 129 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 6)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 129 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 6)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 129 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 6)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 129 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 6)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 129 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 6)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 129 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 6)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 129 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 6)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 129 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__TraceLevel_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 6)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 129 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)));
#line 130 "llds_out_file.m"
    {
#line 130 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__TraceLevelIsNone_7 = libs__trace_params__given_trace_level_is_none_1_f_0(ll_backend__llds_out__llds_out_file__TraceLevel_6);
    }
#line 134 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__TraceLevelIsNone_7 == (MR_Integer) 0))
#line 132 "llds_out_file.m"
      {
#line 133 "llds_out_file.m"
        {
#line 133 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "#include \"mercury_trace_base.h\"\n");
        }
#line 132 "llds_out_file.m"
      }
#line 134 "llds_out_file.m"
    else
#line 135 "llds_out_file.m"
      {
#line 135 "llds_out_file.m"
      }
#line 137 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 0)));
#line 137 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_43_43 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 1)));
#line 137 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 2)));
#line 137 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 3)));
#line 137 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 4)));
#line 137 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 5)));
#line 137 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_48_48 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 137 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 137 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 6)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 137 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__GenerateBytecode_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 137 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 6)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 137 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 6)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 137 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 6)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 137 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 6)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 137 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__DeepProfile_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 6)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 137 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 6)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 137 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 6)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 137 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 6)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 137 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 6)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 137 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 6)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 137 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)));
#line 141 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__DeepProfile_8 == (MR_Integer) 0))
#line 142 "llds_out_file.m"
      {
#line 142 "llds_out_file.m"
      }
#line 141 "llds_out_file.m"
    else
#line 139 "llds_out_file.m"
      {
#line 140 "llds_out_file.m"
        {
#line 140 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "#include \"mercury_deep_profiling.h\"\n");
        }
#line 139 "llds_out_file.m"
      }
#line 148 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__GenerateBytecode_9 == (MR_Integer) 0))
#line 149 "llds_out_file.m"
      {
#line 149 "llds_out_file.m"
      }
#line 148 "llds_out_file.m"
    else
#line 146 "llds_out_file.m"
      {
#line 147 "llds_out_file.m"
        {
#line 147 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "#include \"mb_interface_stub.h\"\n");
#line 147 "llds_out_file.m"
          return;
        }
#line 146 "llds_out_file.m"
      }
#line 126 "llds_out_file.m"
  }
#line 123 "llds_out_file.m"
}

#line 47 "llds_out_file.m"
MR_String MR_CALL 
ll_backend__llds_out__llds_out_file__c_data_const_string_2_f_0(
#line 47 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Globals_4,
#line 47 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__InclCodeAddr_5)
#line 47 "llds_out_file.m"
{
#line 1550 "llds_out_file.m"
  {
#line 1550 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded = (ll_backend__llds_out__llds_out_file__InclCodeAddr_5 == (MR_Integer) 1);
#line 1550 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__HeadVar__3_3;
#line 1552 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_6_6;
#line 1552 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_7_7;

#line 1552 "llds_out_file.m"
    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1552 "llds_out_file.m"
      {
#line 1553 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_6_6 = (MR_Integer) 449;
#line 1553 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_7_7 = (MR_Integer) 0;
#line 1553 "llds_out_file.m"
        {
#line 1553 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__succeeded = libs__globals__lookup_bool_option_3_p_1(ll_backend__llds_out__llds_out_file__Globals_4, ll_backend__llds_out__llds_out_file__V_6_6, ll_backend__llds_out__llds_out_file__V_7_7);
        }
#line 1552 "llds_out_file.m"
      }
#line 1550 "llds_out_file.m"
    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1550 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__HeadVar__3_3 = (MR_String) "";
#line 1550 "llds_out_file.m"
    else
#line 1550 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__HeadVar__3_3 = (MR_String) "const ";
#line 1550 "llds_out_file.m"
    return ll_backend__llds_out__llds_out_file__HeadVar__3_3;
#line 1550 "llds_out_file.m"
  }
#line 47 "llds_out_file.m"
}

#line 42 "llds_out_file.m"
MR_String MR_CALL 
ll_backend__llds_out__llds_out_file__c_data_linkage_string_2_f_0(
#line 42 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__DefaultLinkage_4,
#line 42 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__BeingDefined_5)
#line 42 "llds_out_file.m"
{
#line 1532 "llds_out_file.m"
  {
#line 1532 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 1532 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__LinkageStr_6;

#line 1532 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__DefaultLinkage_4 == (MR_Integer) 0))
#line 1536 "llds_out_file.m"
      if ((ll_backend__llds_out__llds_out_file__BeingDefined_5 == (MR_Integer) 0))
#line 1538 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__LinkageStr_6 = (MR_String) "extern ";
#line 1536 "llds_out_file.m"
      else
#line 1535 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__LinkageStr_6 = (MR_String) "";
#line 1532 "llds_out_file.m"
    else
#line 1547 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__LinkageStr_6 = (MR_String) "static ";
#line 1532 "llds_out_file.m"
    return ll_backend__llds_out__llds_out_file__LinkageStr_6;
#line 1532 "llds_out_file.m"
  }
#line 42 "llds_out_file.m"
}

#line 33 "llds_out_file.m"
void MR_CALL 
ll_backend__llds_out__llds_out_file__output_llds_4_p_0(
#line 33 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Globals_5,
#line 33 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__CFile_6)
#line 33 "llds_out_file.m"
{
#line 105 "llds_out_file.m"
  {
#line 105 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 105 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_6, (MR_Integer) 0)));
#line 105 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__FileName_9;
#line 105 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__Result_10;
#line 106 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_6, (MR_Integer) 1)));
#line 106 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_6, (MR_Integer) 2)));
#line 106 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_6, (MR_Integer) 3)));
#line 106 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_6, (MR_Integer) 4)));
#line 106 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_6, (MR_Integer) 5)));
#line 106 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_6, (MR_Integer) 6)));
#line 106 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_6, (MR_Integer) 7)));
#line 106 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_6, (MR_Integer) 8)));
#line 106 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_6, (MR_Integer) 9)));
#line 106 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_6, (MR_Integer) 10)));
#line 106 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_6, (MR_Integer) 11)));
#line 106 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_6, (MR_Integer) 12)));
#line 106 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_6, (MR_Integer) 13)));
#line 106 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_6, (MR_Integer) 14)));
#line 106 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_6, (MR_Integer) 15)));
#line 106 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_6, (MR_Integer) 16)));
#line 106 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_6, (MR_Integer) 17)));
#line 106 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_6, (MR_Integer) 18)));
#line 106 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_6, (MR_Integer) 19)));
#line 106 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_6, (MR_Integer) 20)));
#line 106 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_6, (MR_Integer) 21)));
#line 106 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_6, (MR_Integer) 22)));
#line 106 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_6, (MR_Integer) 23)));
#line 106 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_6, (MR_Integer) 24)));
#line 106 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_6, (MR_Integer) 25)));
#line 106 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_6, (MR_Integer) 26)));
#line 106 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_6, (MR_Integer) 27)));
#line 106 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_6, (MR_Integer) 28)));
#line 106 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_6, (MR_Integer) 29)));
#line 106 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_6, (MR_Integer) 30)));
#line 106 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_6, (MR_Integer) 31)));
#line 106 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_6, (MR_Integer) 32)));
#line 106 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_6, (MR_Integer) 33)));
#line 106 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_6, (MR_Integer) 34)));
#line 106 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_6, (MR_Integer) 35)));
#line 106 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_6, (MR_Integer) 36)));
#line 106 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_6, (MR_Integer) 37)));
#line 106 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_6, (MR_Integer) 38)));

#line 107 "llds_out_file.m"
    {
#line 107 "llds_out_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(ll_backend__llds_out__llds_out_file__Globals_5, ll_backend__llds_out__llds_out_file__ModuleName_8, (MR_String) ".c", (MR_Integer) 0, &ll_backend__llds_out__llds_out_file__FileName_9);
    }
#line 109 "llds_out_file.m"
    {
#line 109 "llds_out_file.m"
      mercury__io__open_output_4_p_0(ll_backend__llds_out__llds_out_file__FileName_9, &ll_backend__llds_out__llds_out_file__Result_10);
    }
#line 115 "llds_out_file.m"
    if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Result_10)) == (MR_mktag((MR_Integer) 1))))
#line 116 "llds_out_file.m"
      {
#line 116 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__Error_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__Result_10, (MR_Integer) 0)));
#line 116 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__ProgName_15;
#line 116 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__V_32_32;
#line 116 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__V_77_77;
#line 116 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__V_79_79;
#line 116 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__V_80_80;
#line 116 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__V_82_82;
#line 116 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__V_83_83;
#line 116 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__V_85_85;

#line 117 "llds_out_file.m"
        {
#line 117 "llds_out_file.m"
          mercury__io__progname_base_4_p_0((MR_String) "llds.m", &ll_backend__llds_out__llds_out_file__ProgName_15);
        }
#line 119 "llds_out_file.m"
        {
#line 119 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__V_32_32 = mercury__io__error_message_1_f_0(ll_backend__llds_out__llds_out_file__Error_14);
        }
#line 12634 "ll_backend.llds_out.llds_out_file.c"
        {
#line 12636 "ll_backend.llds_out.llds_out_file.c"
          ll_backend__llds_out__llds_out_file__V_77_77 = mercury__string__f_43_43_2_f_0(ll_backend__llds_out__llds_out_file__V_32_32, (MR_String) "\n");
        }
#line 12639 "ll_backend.llds_out.llds_out_file.c"
        {
#line 12641 "ll_backend.llds_out.llds_out_file.c"
          ll_backend__llds_out__llds_out_file__V_79_79 = mercury__string__f_43_43_2_f_0((MR_String) "\' for output:\n", ll_backend__llds_out__llds_out_file__V_77_77);
        }
#line 12644 "ll_backend.llds_out.llds_out_file.c"
        {
#line 12646 "ll_backend.llds_out.llds_out_file.c"
          ll_backend__llds_out__llds_out_file__V_80_80 = mercury__string__f_43_43_2_f_0(ll_backend__llds_out__llds_out_file__FileName_9, ll_backend__llds_out__llds_out_file__V_79_79);
        }
#line 12649 "ll_backend.llds_out.llds_out_file.c"
        {
#line 12651 "ll_backend.llds_out.llds_out_file.c"
          ll_backend__llds_out__llds_out_file__V_82_82 = mercury__string__f_43_43_2_f_0((MR_String) ": can\'t open \140", ll_backend__llds_out__llds_out_file__V_80_80);
        }
#line 12654 "ll_backend.llds_out.llds_out_file.c"
        {
#line 12656 "ll_backend.llds_out.llds_out_file.c"
          ll_backend__llds_out__llds_out_file__V_83_83 = mercury__string__f_43_43_2_f_0(ll_backend__llds_out__llds_out_file__ProgName_15, ll_backend__llds_out__llds_out_file__V_82_82);
        }
#line 12659 "ll_backend.llds_out.llds_out_file.c"
        {
#line 12661 "ll_backend.llds_out.llds_out_file.c"
          ll_backend__llds_out__llds_out_file__V_85_85 = mercury__string__f_43_43_2_f_0((MR_String) "\n", ll_backend__llds_out__llds_out_file__V_83_83);
        }
#line 12664 "ll_backend.llds_out.llds_out_file.c"
        {
#line 12666 "ll_backend.llds_out.llds_out_file.c"
          mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__V_85_85);
        }
#line 120 "llds_out_file.m"
        {
#line 120 "llds_out_file.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 120 "llds_out_file.m"
          return;
        }
#line 116 "llds_out_file.m"
      }
#line 115 "llds_out_file.m"
    else
#line 111 "llds_out_file.m"
      {
#line 111 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__FileStream_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Result_10, (MR_Integer) 0)));
#line 111 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__DeclSet0_12;
#line 113 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_13_13;

#line 112 "llds_out_file.m"
        {
#line 112 "llds_out_file.m"
          ll_backend__llds_out__llds_out_util__decl_set_init_1_p_0(&ll_backend__llds_out__llds_out_file__DeclSet0_12);
        }
#line 113 "llds_out_file.m"
        {
#line 113 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__output_single_c_file_7_p_0(ll_backend__llds_out__llds_out_file__Globals_5, ll_backend__llds_out__llds_out_file__CFile_6, ll_backend__llds_out__llds_out_file__FileStream_11, ll_backend__llds_out__llds_out_file__DeclSet0_12, &ll_backend__llds_out__llds_out_file__V_13_13);
        }
#line 114 "llds_out_file.m"
        {
#line 114 "llds_out_file.m"
          mercury__io__close_output_3_p_0(ll_backend__llds_out__llds_out_file__FileStream_11);
#line 114 "llds_out_file.m"
          return;
        }
#line 111 "llds_out_file.m"
      }
#line 105 "llds_out_file.m"
  }
#line 33 "llds_out_file.m"
}

void mercury__ll_backend__llds_out__llds_out_file__init(void)
{
}

void mercury__ll_backend__llds_out__llds_out_file__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__type_ctor_info_linkage_0);
}

void mercury__ll_backend__llds_out__llds_out_file__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.llds_out.llds_out_file. */
