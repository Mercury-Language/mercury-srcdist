/*
** Automatically generated from `llds_out_file.m'
** by the Mercury compiler,
** version rotd-2014-09-30
** configured for x86_64-apple-darwin13.3.0.
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
#include "mdbcomp.sym_name.mih"
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




#line 160 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0;

#line 163 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds__type_ctor_info_label_0;

#line 166 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__llds_out__llds_out_file__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__layout__type_ctor_info_layout_slot_name_0;

#line 169 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__llds_out__llds_out_file__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__llds__type_ctor_info_data_id_0;

#line 172 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_foreign_literal_or_include_0;

#line 175 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__llds_out__llds_out_file__list__ti_list_1builtin__type_ctor_info_int_0;

#line 178 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__llds_out__llds_out_file__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_list__ti_list_1builtin__type_ctor_info_int_0;

#line 181 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_file__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

#line 184 "ll_backend.llds_out.llds_out_file.c"
static const MR_VA_TypeInfo_Struct2 ll_backend__llds_out__llds_out_file____vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

#line 187 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__llds_out__llds_out_file__list__ti_list_1__vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

#line 190 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__llds_out__llds_out_file__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_list__ti_list_1__vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

#line 193 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_file__list__pti_list_1__plain___vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

#line 196 "ll_backend.llds_out.llds_out_file.c"
static const MR_VA_PseudoTypeInfo_Struct2 ll_backend__llds_out__llds_out_file____vpti_tuple_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0;

#line 199 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__llds_out__llds_out_file__list__ti_list_1ll_backend__llds_out__llds_out_file__type_ctor_info_annotated_c_procedure_0;

#line 202 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__llds_out__llds_out_file__list__ti_list_1ll_backend__llds__type_ctor_info_label_0;

#line 205 "ll_backend.llds_out.llds_out_file.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__field_types_annotated_c_module_0_0[4];

#line 208 "ll_backend.llds_out.llds_out_file.c"
static const MR_ConstString ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__field_names_annotated_c_module_0_0[4];

#line 211 "ll_backend.llds_out.llds_out_file.c"
static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_functor_desc_annotated_c_module_0_0;

#line 214 "ll_backend.llds_out.llds_out_file.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_stag_ordered_annotated_c_module_0_0[1];

#line 217 "ll_backend.llds_out.llds_out_file.c"
static const MR_DuPtagLayout ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_ptag_ordered_annotated_c_module_0[1];

#line 220 "ll_backend.llds_out.llds_out_file.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_name_ordered_annotated_c_module_0[1];

#line 223 "ll_backend.llds_out.llds_out_file.c"
static const MR_Integer ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__functor_number_map_annotated_c_module_0[1];

#line 226 "ll_backend.llds_out.llds_out_file.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__field_types_annotated_c_procedure_0_0[2];

#line 229 "ll_backend.llds_out.llds_out_file.c"
static const MR_ConstString ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__field_names_annotated_c_procedure_0_0[2];

#line 232 "ll_backend.llds_out.llds_out_file.c"
static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_functor_desc_annotated_c_procedure_0_0;

#line 235 "ll_backend.llds_out.llds_out_file.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_stag_ordered_annotated_c_procedure_0_0[1];

#line 238 "ll_backend.llds_out.llds_out_file.c"
static const MR_DuPtagLayout ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_ptag_ordered_annotated_c_procedure_0[1];

#line 241 "ll_backend.llds_out.llds_out_file.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_name_ordered_annotated_c_procedure_0[1];

#line 244 "ll_backend.llds_out.llds_out_file.c"
static const MR_Integer ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__functor_number_map_annotated_c_procedure_0[1];

#line 247 "ll_backend.llds_out.llds_out_file.c"
static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_functor_desc_linkage_0_0;

#line 250 "ll_backend.llds_out.llds_out_file.c"
static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_functor_desc_linkage_0_1;

#line 253 "ll_backend.llds_out.llds_out_file.c"
static const MR_EnumFunctorDescPtr ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_value_ordered_linkage_0[2];

#line 256 "ll_backend.llds_out.llds_out_file.c"
static const MR_EnumFunctorDescPtr ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_name_ordered_linkage_0[2];

#line 259 "ll_backend.llds_out.llds_out_file.c"
static const MR_Integer ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__functor_number_map_linkage_0[2];

#line 262 "ll_backend.llds_out.llds_out_file.c"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file____Unify____annotated_c_module_0_0_10001(
#line 265 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 267 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2);

#line 270 "ll_backend.llds_out.llds_out_file.c"
static void MR_CALL 
ll_backend__llds_out__llds_out_file____Compare____annotated_c_module_0_0_10001(
#line 273 "ll_backend.llds_out.llds_out_file.c"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 275 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 277 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 280 "ll_backend.llds_out.llds_out_file.c"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file____Unify____annotated_c_procedure_0_0_10001(
#line 283 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 285 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2);

#line 288 "ll_backend.llds_out.llds_out_file.c"
static void MR_CALL 
ll_backend__llds_out__llds_out_file____Compare____annotated_c_procedure_0_0_10001(
#line 291 "ll_backend.llds_out.llds_out_file.c"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 293 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 295 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 298 "ll_backend.llds_out.llds_out_file.c"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file____Unify____linkage_0_0_10001(
#line 301 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 303 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2);

#line 306 "ll_backend.llds_out.llds_out_file.c"
static void MR_CALL 
ll_backend__llds_out__llds_out_file____Compare____linkage_0_0_10001(
#line 309 "ll_backend.llds_out.llds_out_file.c"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 311 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 313 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 1019 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_114_101_99_111_114_100_95_101_110_116_114_121_95_108_97_98_101_108_95_100_101_99_108_95_95_91_49_93_95_48_6_p_0(
#line 1019 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Label_8,
#line 1019 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_17,
#line 1019 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_18);

#line 363 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__IntroducedFrom__pred__annotate_c_procedure__363__1_2_p_0(
#line 363 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__UndefWhileLabels_26,
#line 363 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_86);

#line 262 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file____Compare____annotated_c_procedure_0_0(
#line 262 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 262 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2,
#line 262 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__3_3);

#line 262 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file____Unify____annotated_c_procedure_0_0(
#line 262 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 262 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2);

#line 254 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file____Compare____annotated_c_module_0_0(
#line 254 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 254 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2,
#line 254 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__3_3);

#line 254 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file____Unify____annotated_c_module_0_0(
#line 254 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 254 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2);

#line 1647 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__delete_any_maybe_labels_3_p_0(
#line 1647 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 1647 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_2,
#line 1647 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_3);

#line 1636 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__delete_any_maybe_label_3_p_0(
#line 1636 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__MaybeLabel_4,
#line 1636 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_7,
#line 1636 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_8);

#line 1628 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(
#line 1628 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 1628 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_2,
#line 1628 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_3);

#line 1618 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__delete_any_label_3_p_0(
#line 1618 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__CodeAddr_4,
#line 1618 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_7,
#line 1618 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_8);

#line 1441 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__find_while_labels_to_define_5_p_0(
#line 1441 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 1441 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2,
#line 1441 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__WhileLabels_3,
#line 1441 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4,
#line 1441 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_5);

#line 1407 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__count_while_label_in_block_4_p_0(
#line 1407 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Label_1,
#line 1407 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2,
#line 1407 "llds_out_file.m"
  MR_Integer ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_3,
#line 1407 "llds_out_file.m"
  MR_Integer * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_4);

#line 1386 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__is_while_label_5_p_0(
#line 1386 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Label_1,
#line 1386 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2,
#line 1386 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__HeadVar__3_3,
#line 1386 "llds_out_file.m"
  MR_Integer ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_4,
#line 1386 "llds_out_file.m"
  MR_Integer * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_5);

#line 1370 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__find_while_labels_3_p_0(
#line 1370 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 1370 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_WhileSet_0_2,
#line 1370 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_WhileSet_3);

#line 1320 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__find_cont_labels_3_p_0(
#line 1320 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 1320 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_0_2,
#line 1320 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_3);

#line 1300 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__find_caller_label_2_p_0(
#line 1300 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 1300 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__CallerLabel_2);

#line 1247 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_annotated_c_procedure_4_p_0(
#line 1247 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_5,
#line 1247 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__AnnotatedProc_6);

#line 1233 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_global_var_decl_5_p_0(
#line 1233 "llds_out_file.m"
  MR_String ll_backend__llds_out__llds_out_file__VarName_6,
#line 1233 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_10,
#line 1233 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_11);

#line 1231 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_c_procedure_decls_6_p_0_2(
#line 1231 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1231 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1231 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1231 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 1231 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 1231 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5);

#line 1230 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_c_procedure_decls_6_p_0_1(
#line 1230 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1230 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1230 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1230 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 1230 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 1230 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5);

#line 1221 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_c_procedure_decls_6_p_0(
#line 1221 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_7,
#line 1221 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__AnnotatedProc_8,
#line 1221 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_15,
#line 1221 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_16);

#line 1186 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_entry_label_init_4_p_0(
#line 1186 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__EntryLabelToLayoutMap_5,
#line 1186 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Label_6);

#line 1179 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__write_int_pair_3_p_0(
#line 1179 "llds_out_file.m"
  MR_Tuple ll_backend__llds_out__llds_out_file__HeadVar__1_1);

#line 1176 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_chunk_6_p_0_1(
#line 1176 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1176 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1176 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1176 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 1162 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_chunk_6_p_0(
#line 1162 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_7,
#line 1162 "llds_out_file.m"
  MR_String ll_backend__llds_out__llds_out_file__Suffix_8,
#line 1162 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ProcLabel_9,
#line 1162 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__LabelSlotNums_10);

#line 1159 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_group_5_p_0_1(
#line 1159 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1159 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1159 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1159 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 1147 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_group_5_p_0(
#line 1147 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_6,
#line 1147 "llds_out_file.m"
  MR_String ll_backend__llds_out__llds_out_file__Suffix_7,
#line 1147 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__3_3);

#line 1144 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_no_layout_init_chunk_4_p_0_1(
#line 1144 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1144 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1144 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1144 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 1135 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_no_layout_init_chunk_4_p_0(
#line 1135 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ProcLabel_5,
#line 1135 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__LabelNums_6);

#line 1132 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_no_layout_init_group_3_p_0_1(
#line 1132 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1132 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1132 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1132 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 1123 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_no_layout_init_group_3_p_0(
#line 1123 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1);

#line 1081 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__group_init_c_labels_10_p_0(
#line 1081 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 1081 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2,
#line 1081 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoLayoutMap_0_3,
#line 1081 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoLayoutMap_4,
#line 1081 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_0_5,
#line 1081 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_6,
#line 1081 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_0_7,
#line 1081 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_8,
#line 1081 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_0_9,
#line 1081 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_10);

#line 1078 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0_5(
#line 1078 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1078 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1078 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1078 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 1074 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0_4(
#line 1074 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1074 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1074 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1074 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 1070 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0_3(
#line 1070 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1070 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1070 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1070 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 1066 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0_2(
#line 1066 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1066 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1066 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1066 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 1055 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0_1(
#line 1055 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1055 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1055 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1055 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 1050 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0(
#line 1050 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_6,
#line 1050 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__EntryLabels_7,
#line 1050 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__InternalLabels_8);

#line 1019 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_entry_label_decl_6_p_0(
#line 1019 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file___Info_7,
#line 1019 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Label_8,
#line 1019 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_17,
#line 1019 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_18);

#line 1012 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__insert_internal_label_code_addr_decl_4_p_0(
#line 1012 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ProcLabel_5,
#line 1012 "llds_out_file.m"
  MR_Integer ll_backend__llds_out__llds_out_file__LabelNum_6,
#line 1012 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_9,
#line 1012 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_10);

#line 1009 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_internal_label_decl_group_6_p_0_2(
#line 1009 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1009 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1009 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1009 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 1007 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_internal_label_decl_group_6_p_0_1(
#line 1007 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1007 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1007 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1007 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 997 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_internal_label_decl_group_6_p_0(
#line 997 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ProcLabel_7,
#line 997 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__LabelNums_8,
#line 997 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_11,
#line 997 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_12);

#line 994 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_internal_label_decls_5_p_0_2(
#line 994 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 994 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 994 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 994 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 992 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_internal_label_decls_5_p_0_1(
#line 992 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 992 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 992 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 992 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 992 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 992 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5);

#line 983 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_internal_label_decls_5_p_0(
#line 983 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 983 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_13,
#line 983 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_14);

#line 969 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__group_decl_c_labels_3_p_0(
#line 969 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 969 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabelMap_0_2,
#line 969 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabelMap_3);

#line 966 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_c_label_decls_7_p_0_2(
#line 966 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 966 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 966 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 966 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 966 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 966 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5);

#line 964 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_c_label_decls_7_p_0_1(
#line 964 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 964 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 964 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 964 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 964 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 964 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5);

#line 956 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_c_label_decls_7_p_0(
#line 956 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_8,
#line 956 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__EntryLabels_9,
#line 956 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__InternalLabels_10,
#line 956 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_15,
#line 956 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_16);

#line 920 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_foreign_decl_or_code_7_p_0(
#line 920 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_8,
#line 920 "llds_out_file.m"
  MR_String ll_backend__llds_out__llds_out_file__PragmaType_9,
#line 920 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Lang_10,
#line 920 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__LiteralOrInclude_11,
#line 920 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Context_12);

#line 894 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_foreign_header_include_line_6_p_0(
#line 894 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_7,
#line 894 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Decl_8,
#line 894 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AlreadyDone_0_15,
#line 894 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AlreadyDone_16);

#line 891 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_foreign_header_include_lines_4_p_0_1(
#line 891 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 891 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 891 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 891 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 891 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 891 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5);

#line 887 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_foreign_header_include_lines_4_p_0(
#line 887 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_5,
#line 887 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Decls_6);

#line 868 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_user_foreign_code_4_p_0(
#line 868 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_5,
#line 868 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__UserForeignCode_6);

#line 852 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_static_linkage_define_2_p_0(void);

#line 847 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_annotated_c_module_6_p_0_2(
#line 847 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 847 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 847 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 847 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 839 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_annotated_c_module_6_p_0_1(
#line 839 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 839 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 839 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 839 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 839 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 839 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5);

#line 832 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_annotated_c_module_6_p_0(
#line 832 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_7,
#line 832 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__AnnotatedModule_8,
#line 832 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_15,
#line 832 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_16);

#line 822 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_required_init_or_final_calls_3_p_0(
#line 822 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1);

#line 815 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_env_var_init_3_p_0(
#line 815 "llds_out_file.m"
  MR_String ll_backend__llds_out__llds_out_file__EnvVarName_4);

#line 811 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_init_comment_6_p_0_1(
#line 811 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 811 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 811 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 811 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 784 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_init_comment_6_p_0(
#line 784 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ModuleName_7,
#line 784 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__UserInitPredCNames_8,
#line 784 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__UserFinalPredCNames_9,
#line 784 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__EnvVarNames_10);

#line 751 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_write_proc_static_list_3_p_0(
#line 751 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1);

#line 738 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_debugger_init_list_3_p_0(
#line 738 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1);

#line 726 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_type_tables_init_list_3_p_0(
#line 726 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1);

#line 704 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_alloc_sites_init_4_p_0(
#line 704 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_5,
#line 704 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__AllocSites_6);

#line 695 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_data_init_list_3_p_0(
#line 695 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1);

#line 669 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_init_bunch_calls_6_p_0(
#line 669 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_1,
#line 669 "llds_out_file.m"
  MR_String ll_backend__llds_out__llds_out_file__InitStatus_2,
#line 669 "llds_out_file.m"
  MR_Integer ll_backend__llds_out__llds_out_file__Seq_3,
#line 669 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__4_4);

#line 658 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_init_bunch_def_3_p_0(
#line 658 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1);

#line 644 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_init_bunch_defs_6_p_0(
#line 644 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_1,
#line 644 "llds_out_file.m"
  MR_String ll_backend__llds_out__llds_out_file__InitStatus_2,
#line 644 "llds_out_file.m"
  MR_Integer ll_backend__llds_out__llds_out_file__Seq_3,
#line 644 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__4_4);

#line 636 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__entry_label_has_layout_2_p_0(
#line 636 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__EntryLabelToLayoutMap_3,
#line 636 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Label_4);

#line 630 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__internal_label_has_layout_2_p_0(
#line 630 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__InternalLabelToLayoutMap_3,
#line 630 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Label_4);

#line 626 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__module_defines_label_with_layout_2_p_0_2(
#line 626 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 626 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1);

#line 621 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__module_defines_label_with_layout_2_p_0_1(
#line 621 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 621 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1);

#line 610 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__module_defines_label_with_layout_2_p_0(
#line 610 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_3,
#line 610 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__AnnotatedModule_4);

#line 405 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_module_init_list_15_p_0_1(
#line 405 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 405 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1);

#line 395 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_module_init_list_15_p_0(
#line 395 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_16,
#line 395 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ModuleName_17,
#line 395 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__AnnotatedModules_18,
#line 395 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__RttiDatas_19,
#line 395 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ProcLayoutDatas_20,
#line 395 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ModuleLayoutDatas_21,
#line 395 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ComplexityProcs_22,
#line 395 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__TSStringTable_23,
#line 395 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__AllocSites_24,
#line 395 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__InitPredNames_25,
#line 395 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__FinalPredNames_26,
#line 395 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_52,
#line 395 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_53);

#line 372 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__gather_labels_from_instrs_acc_5_p_0(
#line 372 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 372 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_0_2,
#line 372 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_3,
#line 372 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_0_4,
#line 372 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_5);

#line 363 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__annotate_c_procedure_9_p_0_1(
#line 363 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 363 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1);

#line 314 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__annotate_c_procedure_9_p_0(
#line 314 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_10,
#line 314 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Proc_11,
#line 314 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__AnnotatedProc_12,
#line 314 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllEntryLabels_0_30,
#line 314 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllEntryLabels_31,
#line 314 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllInternalLabels_0_32,
#line 314 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllInternalLabels_33,
#line 314 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_0_34,
#line 314 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_35);

#line 300 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__annotate_c_procedures_9_p_0(
#line 300 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_1,
#line 300 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2,
#line 300 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__HeadVar__3_3,
#line 300 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllEntryLabels_0_4,
#line 300 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllEntryLabels_5,
#line 300 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllInternalLabels_0_6,
#line 300 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllInternalLabels_7,
#line 300 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_0_8,
#line 300 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_9);

#line 268 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__annotate_c_modules_9_p_0(
#line 268 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_1,
#line 268 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2,
#line 268 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__HeadVar__3_3,
#line 268 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EntryLabels_0_4,
#line 268 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EntryLabels_5,
#line 268 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabels_0_6,
#line 268 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabels_7,
#line 268 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_0_8,
#line 268 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_9);

#line 211 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_file_mercury_headers_3_p_0(
#line 211 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_4);

#line 203 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_12(
#line 203 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 203 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 203 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 203 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 202 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_11(
#line 202 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 202 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 202 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 202 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 200 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_10(
#line 200 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 200 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 200 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 200 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 200 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 200 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5);

#line 187 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_9(
#line 187 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 187 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 187 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 187 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 187 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 187 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5);

#line 185 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_8(
#line 185 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 185 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 185 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 185 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 185 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 185 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5);

#line 183 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_7(
#line 183 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 183 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 183 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 183 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 183 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 183 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5);

#line 173 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_6(
#line 173 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 173 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 173 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 173 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 173 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 173 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5);

#line 171 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_5(
#line 171 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 171 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 171 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 171 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 171 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 171 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5);

#line 169 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_4(
#line 169 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 169 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 169 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 169 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 169 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 169 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5);

#line 167 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_3(
#line 167 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 167 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 167 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 167 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 167 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 167 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5);

#line 162 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_2(
#line 162 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 162 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 162 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 162 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 162 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 162 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5);

#line 160 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_1(
#line 160 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 160 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 160 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 160 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 160 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 160 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5);

#line 122 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0(
#line 122 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Globals_7,
#line 122 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__CFile_8,
#line 122 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_61,
#line 122 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_62);

#line 116 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_llds_2_4_p_0(
#line 116 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Globals_5,
#line 116 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__CFile_6);

#line 113 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_llds_5_p_0_1(
#line 113 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 113 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 113 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_2);


static /* final */ const MR_Box ll_backend__llds_out__llds_out_file_scalar_common_1[5][2];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_file_scalar_common_2[12][3];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_file_scalar_common_3[1][4];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_file_scalar_common_4[6][7];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_file_scalar_common_5[5][8];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_file_scalar_common_6[14][9];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_file_scalar_common_7[4][6];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_file_scalar_common_8[4][5];




static /* final */ const MR_Box ll_backend__llds_out__llds_out_file_scalar_common_1[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_literal_or_include_0))
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
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__type_ctor_info_annotated_c_procedure_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
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
    ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_5[0])),
    ((MR_Box) (ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_5[1])),
    ((MR_Box) (ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_7[0])),
    ((MR_Box) (ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_12)),
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
    ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_5[2])),
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
    ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_5[4])),
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

static /* final */ const MR_Box ll_backend__llds_out__llds_out_file_scalar_common_4[6][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_c_file_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_user_foreign_code_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__type_ctor_info_annotated_c_procedure_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__llds__type_ctor_info_data_id_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
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

static /* final */ const MR_Box ll_backend__llds_out__llds_out_file_scalar_common_5[5][8] = {
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

static /* final */ const MR_Box ll_backend__llds_out__llds_out_file_scalar_common_6[14][9] = {
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
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__type_ctor_info_annotated_c_module_0)),
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
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__type_ctor_info_annotated_c_procedure_0)),
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
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_foreign_literal_or_include_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_foreign_literal_or_include_0)),
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

static /* final */ const MR_Box ll_backend__llds_out__llds_out_file_scalar_common_8[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__type_ctor_info_annotated_c_module_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__layout__type_ctor_info_layout_slot_name_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 3 */
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



#line 1988 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0
  }
};

#line 1996 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

#line 2004 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__llds_out__llds_out_file__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__layout__type_ctor_info_layout_slot_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0
  }
};

#line 2013 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__llds_out__llds_out_file__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__llds__type_ctor_info_data_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0
  }
};

#line 2022 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_foreign_literal_or_include_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_literal_or_include_0
  }
};

#line 2030 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__llds_out__llds_out_file__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2038 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__llds_out__llds_out_file__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
    (MR_PseudoTypeInfo) &ll_backend__llds_out__llds_out_file__list__ti_list_1builtin__type_ctor_info_int_0
  }
};

#line 2047 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_file__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2055 "ll_backend.llds_out.llds_out_file.c"
static const MR_VA_TypeInfo_Struct2 ll_backend__llds_out__llds_out_file____vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2065 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__llds_out__llds_out_file__list__ti_list_1__vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__llds_out__llds_out_file____vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0
  }
};

#line 2073 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__llds_out__llds_out_file__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_list__ti_list_1__vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
    (MR_PseudoTypeInfo) &ll_backend__llds_out__llds_out_file__list__ti_list_1__vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0
  }
};

#line 2082 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_file__list__pti_list_1__plain___vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds_out__llds_out_file____vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0
  }
};

#line 2090 "ll_backend.llds_out.llds_out_file.c"
static const MR_VA_PseudoTypeInfo_Struct2 ll_backend__llds_out__llds_out_file____vpti_tuple_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2100 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__llds_out__llds_out_file__list__ti_list_1ll_backend__llds_out__llds_out_file__type_ctor_info_annotated_c_procedure_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__type_ctor_info_annotated_c_procedure_0
  }
};

#line 2108 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__llds_out__llds_out_file__list__ti_list_1ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

#line 2116 "ll_backend.llds_out.llds_out_file.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__field_types_annotated_c_module_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &ll_backend__llds_out__llds_out_file__list__ti_list_1ll_backend__llds_out__llds_out_file__type_ctor_info_annotated_c_procedure_0,
  (MR_PseudoTypeInfo) &ll_backend__llds_out__llds_out_file__list__ti_list_1ll_backend__llds__type_ctor_info_label_0,
  (MR_PseudoTypeInfo) &ll_backend__llds_out__llds_out_file__list__ti_list_1ll_backend__llds__type_ctor_info_label_0
};

#line 2124 "ll_backend.llds_out.llds_out_file.c"
static const MR_ConstString ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__field_names_annotated_c_module_0_0[4] = {
  (MR_String) "acm_name",
  (MR_String) "acm_procs",
  (MR_String) "acm_entry_labels",
  (MR_String) "acm_internal_labels"
};

#line 2132 "ll_backend.llds_out.llds_out_file.c"
static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_functor_desc_annotated_c_module_0_0 = {
  (MR_String) "annotated_c_module",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__field_types_annotated_c_module_0_0,
  ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__field_names_annotated_c_module_0_0,
  NULL,
  NULL
};

#line 2147 "ll_backend.llds_out.llds_out_file.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_stag_ordered_annotated_c_module_0_0[1] = {
  &ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_functor_desc_annotated_c_module_0_0
};

#line 2152 "ll_backend.llds_out.llds_out_file.c"
static const MR_DuPtagLayout ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_ptag_ordered_annotated_c_module_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_stag_ordered_annotated_c_module_0_0
  }
};

#line 2161 "ll_backend.llds_out.llds_out_file.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_name_ordered_annotated_c_module_0[1] = {
  &ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_functor_desc_annotated_c_module_0_0
};

#line 2166 "ll_backend.llds_out.llds_out_file.c"
static const MR_Integer ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__functor_number_map_annotated_c_module_0[1] = {
  (MR_Integer) 0
};

#line 2171 "ll_backend.llds_out.llds_out_file.c"
const MR_TypeCtorInfo_Struct ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__type_ctor_info_annotated_c_module_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__llds_out__llds_out_file____Unify____annotated_c_module_0_0_10001)),
  ((MR_Box) (ll_backend__llds_out__llds_out_file____Compare____annotated_c_module_0_0_10001)),
  (MR_String) "ll_backend.llds_out.llds_out_file",
  (MR_String) "annotated_c_module",
  {
    ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_name_ordered_annotated_c_module_0
  },
  {
    ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_ptag_ordered_annotated_c_module_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__functor_number_map_annotated_c_module_0
};

#line 2192 "ll_backend.llds_out.llds_out_file.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__field_types_annotated_c_procedure_0_0[2] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0,
  (MR_PseudoTypeInfo) &ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__type_ctor_info_label_output_info_0
};

#line 2198 "ll_backend.llds_out.llds_out_file.c"
static const MR_ConstString ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__field_names_annotated_c_procedure_0_0[2] = {
  (MR_String) "acp_proc",
  (MR_String) "acp_label_output_info"
};

#line 2204 "ll_backend.llds_out.llds_out_file.c"
static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_functor_desc_annotated_c_procedure_0_0 = {
  (MR_String) "annotated_c_procedure",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__field_types_annotated_c_procedure_0_0,
  ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__field_names_annotated_c_procedure_0_0,
  NULL,
  NULL
};

#line 2219 "ll_backend.llds_out.llds_out_file.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_stag_ordered_annotated_c_procedure_0_0[1] = {
  &ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_functor_desc_annotated_c_procedure_0_0
};

#line 2224 "ll_backend.llds_out.llds_out_file.c"
static const MR_DuPtagLayout ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_ptag_ordered_annotated_c_procedure_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_stag_ordered_annotated_c_procedure_0_0
  }
};

#line 2233 "ll_backend.llds_out.llds_out_file.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_name_ordered_annotated_c_procedure_0[1] = {
  &ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_functor_desc_annotated_c_procedure_0_0
};

#line 2238 "ll_backend.llds_out.llds_out_file.c"
static const MR_Integer ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__functor_number_map_annotated_c_procedure_0[1] = {
  (MR_Integer) 0
};

#line 2243 "ll_backend.llds_out.llds_out_file.c"
const MR_TypeCtorInfo_Struct ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__type_ctor_info_annotated_c_procedure_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__llds_out__llds_out_file____Unify____annotated_c_procedure_0_0_10001)),
  ((MR_Box) (ll_backend__llds_out__llds_out_file____Compare____annotated_c_procedure_0_0_10001)),
  (MR_String) "ll_backend.llds_out.llds_out_file",
  (MR_String) "annotated_c_procedure",
  {
    ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_name_ordered_annotated_c_procedure_0
  },
  {
    ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_ptag_ordered_annotated_c_procedure_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__functor_number_map_annotated_c_procedure_0
};

#line 2264 "ll_backend.llds_out.llds_out_file.c"
static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_functor_desc_linkage_0_0 = {
  (MR_String) "extern",
  (MR_Integer) 0
};

#line 2270 "ll_backend.llds_out.llds_out_file.c"
static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_functor_desc_linkage_0_1 = {
  (MR_String) "static",
  (MR_Integer) 1
};

#line 2276 "ll_backend.llds_out.llds_out_file.c"
static const MR_EnumFunctorDescPtr ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_value_ordered_linkage_0[2] = {
  &ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_functor_desc_linkage_0_0,
  &ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_functor_desc_linkage_0_1
};

#line 2282 "ll_backend.llds_out.llds_out_file.c"
static const MR_EnumFunctorDescPtr ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_name_ordered_linkage_0[2] = {
  &ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_functor_desc_linkage_0_0,
  &ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_functor_desc_linkage_0_1
};

#line 2288 "ll_backend.llds_out.llds_out_file.c"
static const MR_Integer ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__functor_number_map_linkage_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2294 "ll_backend.llds_out.llds_out_file.c"
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

#line 2315 "ll_backend.llds_out.llds_out_file.c"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file____Unify____annotated_c_module_0_0_10001(
#line 2318 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 2320 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2)
#line 2322 "ll_backend.llds_out.llds_out_file.c"
{
#line 2324 "ll_backend.llds_out.llds_out_file.c"
  {
#line 2326 "ll_backend.llds_out.llds_out_file.c"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 2329 "ll_backend.llds_out.llds_out_file.c"
    {
#line 2331 "ll_backend.llds_out.llds_out_file.c"
      ll_backend__llds_out__llds_out_file__succeeded = ll_backend__llds_out__llds_out_file____Unify____annotated_c_module_0_0(((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2));
    }
#line 2334 "ll_backend.llds_out.llds_out_file.c"
    return ll_backend__llds_out__llds_out_file__succeeded;
#line 2336 "ll_backend.llds_out.llds_out_file.c"
  }
#line 2338 "ll_backend.llds_out.llds_out_file.c"
}

#line 2341 "ll_backend.llds_out.llds_out_file.c"
static void MR_CALL 
ll_backend__llds_out__llds_out_file____Compare____annotated_c_module_0_0_10001(
#line 2344 "ll_backend.llds_out.llds_out_file.c"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 2346 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 2348 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 2350 "ll_backend.llds_out.llds_out_file.c"
{
#line 2352 "ll_backend.llds_out.llds_out_file.c"
  {
#line 2354 "ll_backend.llds_out.llds_out_file.c"
    MR_Word ll_backend__llds_out__llds_out_file__conv0_HeadVar__1_1;

#line 2357 "ll_backend.llds_out.llds_out_file.c"
    {
#line 2359 "ll_backend.llds_out.llds_out_file.c"
      ll_backend__llds_out__llds_out_file____Compare____annotated_c_module_0_0(&ll_backend__llds_out__llds_out_file__conv0_HeadVar__1_1, ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_3));
    }
#line 2362 "ll_backend.llds_out.llds_out_file.c"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_1 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv0_HeadVar__1_1));
#line 2364 "ll_backend.llds_out.llds_out_file.c"
  }
#line 2366 "ll_backend.llds_out.llds_out_file.c"
}

#line 2369 "ll_backend.llds_out.llds_out_file.c"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file____Unify____annotated_c_procedure_0_0_10001(
#line 2372 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 2374 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2)
#line 2376 "ll_backend.llds_out.llds_out_file.c"
{
#line 2378 "ll_backend.llds_out.llds_out_file.c"
  {
#line 2380 "ll_backend.llds_out.llds_out_file.c"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 2383 "ll_backend.llds_out.llds_out_file.c"
    {
#line 2385 "ll_backend.llds_out.llds_out_file.c"
      ll_backend__llds_out__llds_out_file__succeeded = ll_backend__llds_out__llds_out_file____Unify____annotated_c_procedure_0_0(((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2));
    }
#line 2388 "ll_backend.llds_out.llds_out_file.c"
    return ll_backend__llds_out__llds_out_file__succeeded;
#line 2390 "ll_backend.llds_out.llds_out_file.c"
  }
#line 2392 "ll_backend.llds_out.llds_out_file.c"
}

#line 2395 "ll_backend.llds_out.llds_out_file.c"
static void MR_CALL 
ll_backend__llds_out__llds_out_file____Compare____annotated_c_procedure_0_0_10001(
#line 2398 "ll_backend.llds_out.llds_out_file.c"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 2400 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 2402 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 2404 "ll_backend.llds_out.llds_out_file.c"
{
#line 2406 "ll_backend.llds_out.llds_out_file.c"
  {
#line 2408 "ll_backend.llds_out.llds_out_file.c"
    MR_Word ll_backend__llds_out__llds_out_file__conv0_HeadVar__1_1;

#line 2411 "ll_backend.llds_out.llds_out_file.c"
    {
#line 2413 "ll_backend.llds_out.llds_out_file.c"
      ll_backend__llds_out__llds_out_file____Compare____annotated_c_procedure_0_0(&ll_backend__llds_out__llds_out_file__conv0_HeadVar__1_1, ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_3));
    }
#line 2416 "ll_backend.llds_out.llds_out_file.c"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_1 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv0_HeadVar__1_1));
#line 2418 "ll_backend.llds_out.llds_out_file.c"
  }
#line 2420 "ll_backend.llds_out.llds_out_file.c"
}

#line 2423 "ll_backend.llds_out.llds_out_file.c"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file____Unify____linkage_0_0_10001(
#line 2426 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 2428 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2)
#line 2430 "ll_backend.llds_out.llds_out_file.c"
{
#line 2432 "ll_backend.llds_out.llds_out_file.c"
  {
#line 2434 "ll_backend.llds_out.llds_out_file.c"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 2437 "ll_backend.llds_out.llds_out_file.c"
    {
#line 2439 "ll_backend.llds_out.llds_out_file.c"
      ll_backend__llds_out__llds_out_file__succeeded = ll_backend__llds_out__llds_out_file____Unify____linkage_0_0(((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2));
    }
#line 2442 "ll_backend.llds_out.llds_out_file.c"
    return ll_backend__llds_out__llds_out_file__succeeded;
#line 2444 "ll_backend.llds_out.llds_out_file.c"
  }
#line 2446 "ll_backend.llds_out.llds_out_file.c"
}

#line 2449 "ll_backend.llds_out.llds_out_file.c"
static void MR_CALL 
ll_backend__llds_out__llds_out_file____Compare____linkage_0_0_10001(
#line 2452 "ll_backend.llds_out.llds_out_file.c"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 2454 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 2456 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 2458 "ll_backend.llds_out.llds_out_file.c"
{
#line 2460 "ll_backend.llds_out.llds_out_file.c"
  {
#line 2462 "ll_backend.llds_out.llds_out_file.c"
    MR_Word ll_backend__llds_out__llds_out_file__conv0_HeadVar__1_1;

#line 2465 "ll_backend.llds_out.llds_out_file.c"
    {
#line 2467 "ll_backend.llds_out.llds_out_file.c"
      ll_backend__llds_out__llds_out_file____Compare____linkage_0_0(&ll_backend__llds_out__llds_out_file__conv0_HeadVar__1_1, ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_3));
    }
#line 2470 "ll_backend.llds_out.llds_out_file.c"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_1 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv0_HeadVar__1_1));
#line 2472 "ll_backend.llds_out.llds_out_file.c"
  }
#line 2474 "ll_backend.llds_out.llds_out_file.c"
}

#line 1019 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_114_101_99_111_114_100_95_101_110_116_114_121_95_108_97_98_101_108_95_100_101_99_108_95_95_91_49_93_95_48_6_p_0(
#line 1019 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Label_8,
#line 1019 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_17,
#line 1019 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_18)
#line 1019 "llds_out_file.m"
{
#line 1022 "llds_out_file.m"
  {
#line 1022 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 1022 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__DeclMacro_12;
#line 1022 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_33_33;
#line 1022 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_35_35;

#line 1026 "llds_out_file.m"
    if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Label_8)) == (MR_mktag((MR_Integer) 1))))
#line 1026 "llds_out_file.m"
      {
#line 1026 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__Label_8, (MR_Integer) 0)));
#line 1024 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__Label_8, (MR_Integer) 1)));

#line 1026 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__V_37_37 == (MR_Integer) 0))
#line 1031 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__DeclMacro_12 = (MR_String) "MR_decl_local";
#line 1026 "llds_out_file.m"
        else
#line 1026 "llds_out_file.m"
          if ((ll_backend__llds_out__llds_out_file__V_37_37 == (MR_Integer) 2))
#line 1025 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__DeclMacro_12 = (MR_String) "MR_def_extern_entry";
#line 1026 "llds_out_file.m"
          else
#line 1028 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__DeclMacro_12 = (MR_String) "MR_decl_static";
#line 1026 "llds_out_file.m"
      }
#line 1026 "llds_out_file.m"
    else
#line 1033 "llds_out_file.m"
      {
#line 1034 "llds_out_file.m"
        {
#line 1034 "llds_out_file.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_out.llds_out_file", (MR_String) "predicate \140ll_backend.llds_out.llds_out_file.output_record_entry_label_decl\'/6", (MR_String) "internal label");
#line 1034 "llds_out_file.m"
          return;
        }
#line 1033 "llds_out_file.m"
      }
#line 1036 "llds_out_file.m"
    {
#line 1036 "llds_out_file.m"
      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__DeclMacro_12);
    }
#line 1037 "llds_out_file.m"
    {
#line 1037 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "(");
    }
#line 1038 "llds_out_file.m"
    {
#line 1038 "llds_out_file.m"
      ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_file__Label_8);
    }
#line 1039 "llds_out_file.m"
    {
#line 1039 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) ")\n");
    }
#line 1040 "llds_out_file.m"
    {
#line 1040 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1040 "llds_out_file.m"
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__V_35_35, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_8));
#line 1040 "llds_out_file.m"
    }
#line 1040 "llds_out_file.m"
    {
#line 1040 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_33_33 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1040 "llds_out_file.m"
      MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_file__V_33_33, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__V_35_35));
#line 1040 "llds_out_file.m"
    }
#line 1040 "llds_out_file.m"
    {
#line 1040 "llds_out_file.m"
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__llds_out__llds_out_file__V_33_33, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_17, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_18);
#line 1040 "llds_out_file.m"
      return;
    }
#line 1022 "llds_out_file.m"
  }
#line 1019 "llds_out_file.m"
}

#line 363 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__IntroducedFrom__pred__annotate_c_procedure__363__1_2_p_0(
#line 363 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__UndefWhileLabels_26,
#line 363 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_86)
#line 363 "llds_out_file.m"
{
#line 363 "llds_out_file.m"
  {
#line 363 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 363 "llds_out_file.m"
    {
#line 363 "llds_out_file.m"
      return ll_backend__llds_out__llds_out_file__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ll_backend__llds_out__llds_out_file__UndefWhileLabels_26, ((MR_Box) (ll_backend__llds_out__llds_out_file__HeadVar__2_86)));
    }
#line 363 "llds_out_file.m"
    return ll_backend__llds_out__llds_out_file__succeeded;
#line 363 "llds_out_file.m"
  }
#line 363 "llds_out_file.m"
}

#line 59 "llds_out_file.m"
void MR_CALL 
ll_backend__llds_out__llds_out_file____Compare____linkage_0_0(
#line 59 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 59 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2,
#line 59 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__3_3)
#line 59 "llds_out_file.m"
{
#line 59 "llds_out_file.m"
  {
#line 59 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 59 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__Cast_HeadVar1_4 = (MR_Integer) ll_backend__llds_out__llds_out_file__HeadVar__2_2;
#line 59 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__Cast_HeadVar2_5 = (MR_Integer) ll_backend__llds_out__llds_out_file__HeadVar__3_3;

#line 59 "llds_out_file.m"
    {
#line 59 "llds_out_file.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__llds_out__llds_out_file__HeadVar__1_1, ll_backend__llds_out__llds_out_file__Cast_HeadVar1_4, ll_backend__llds_out__llds_out_file__Cast_HeadVar2_5);
#line 59 "llds_out_file.m"
      return;
    }
#line 59 "llds_out_file.m"
  }
#line 59 "llds_out_file.m"
}

#line 59 "llds_out_file.m"
MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file____Unify____linkage_0_0(
#line 59 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_1,
#line 59 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2)
#line 59 "llds_out_file.m"
{
#line 2652 "ll_backend.llds_out.llds_out_file.c"
  {
#line 2654 "ll_backend.llds_out.llds_out_file.c"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded = (ll_backend__llds_out__llds_out_file__HeadVar__2_1 == ll_backend__llds_out__llds_out_file__HeadVar__2_2);

#line 2657 "ll_backend.llds_out.llds_out_file.c"
    return ll_backend__llds_out__llds_out_file__succeeded;
#line 2659 "ll_backend.llds_out.llds_out_file.c"
  }
#line 59 "llds_out_file.m"
}

#line 262 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file____Compare____annotated_c_procedure_0_0(
#line 262 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 262 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2,
#line 262 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__3_3)
#line 262 "llds_out_file.m"
{
#line 262 "llds_out_file.m"
  {
#line 262 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 262 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__CastX_9 = (MR_Integer) ll_backend__llds_out__llds_out_file__HeadVar__2_2;
#line 262 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__CastY_10 = (MR_Integer) ll_backend__llds_out__llds_out_file__HeadVar__3_3;

#line 262 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__succeeded = (ll_backend__llds_out__llds_out_file__CastX_9 == ll_backend__llds_out__llds_out_file__CastY_10);
#line 262 "llds_out_file.m"
    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 2688 "ll_backend.llds_out.llds_out_file.c"
      *ll_backend__llds_out__llds_out_file__HeadVar__1_1 = (MR_Integer) 0;
#line 262 "llds_out_file.m"
    else
#line 262 "llds_out_file.m"
      {
#line 262 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 0)));
#line 262 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 1)));
#line 262 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__3_3, (MR_Integer) 0)));
#line 262 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__3_3, (MR_Integer) 1)));
#line 262 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_8_8;

#line 262 "llds_out_file.m"
        {
#line 262 "llds_out_file.m"
          ll_backend__llds____Compare____c_procedure_0_0(&ll_backend__llds_out__llds_out_file__V_8_8, ll_backend__llds_out__llds_out_file__V_4_4, ll_backend__llds_out__llds_out_file__V_6_6);
        }
#line 2710 "ll_backend.llds_out.llds_out_file.c"
        ll_backend__llds_out__llds_out_file__succeeded = (ll_backend__llds_out__llds_out_file__V_8_8 == (MR_Integer) 0);
#line 262 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__succeeded = !(ll_backend__llds_out__llds_out_file__succeeded);
#line 262 "llds_out_file.m"
        if (ll_backend__llds_out__llds_out_file__succeeded)
#line 262 "llds_out_file.m"
          *ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__V_8_8;
#line 262 "llds_out_file.m"
        else
#line 262 "llds_out_file.m"
          {
#line 262 "llds_out_file.m"
            ll_backend__llds_out__llds_out_instr____Compare____label_output_info_0_0(ll_backend__llds_out__llds_out_file__HeadVar__1_1, ll_backend__llds_out__llds_out_file__V_5_5, ll_backend__llds_out__llds_out_file__V_7_7);
#line 262 "llds_out_file.m"
            return;
          }
#line 262 "llds_out_file.m"
      }
#line 262 "llds_out_file.m"
  }
#line 262 "llds_out_file.m"
}

#line 262 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file____Unify____annotated_c_procedure_0_0(
#line 262 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 262 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2)
#line 262 "llds_out_file.m"
{
#line 262 "llds_out_file.m"
  {
#line 262 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 262 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__CastX_7 = (MR_Integer) ll_backend__llds_out__llds_out_file__HeadVar__1_1;
#line 262 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__CastY_8 = (MR_Integer) ll_backend__llds_out__llds_out_file__HeadVar__2_2;

#line 262 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__succeeded = (ll_backend__llds_out__llds_out_file__CastX_7 == ll_backend__llds_out__llds_out_file__CastY_8);
#line 262 "llds_out_file.m"
    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 262 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__succeeded = MR_TRUE;
#line 262 "llds_out_file.m"
    else
#line 262 "llds_out_file.m"
      {
#line 262 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 262 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 262 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 0)));
#line 262 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 1)));

#line 2771 "ll_backend.llds_out.llds_out_file.c"
        {
#line 2773 "ll_backend.llds_out.llds_out_file.c"
          ll_backend__llds_out__llds_out_file__succeeded = ll_backend__llds____Unify____c_procedure_0_0(ll_backend__llds_out__llds_out_file__V_3_3, ll_backend__llds_out__llds_out_file__V_5_5);
        }
#line 262 "llds_out_file.m"
        if (ll_backend__llds_out__llds_out_file__succeeded)
#line 2778 "ll_backend.llds_out.llds_out_file.c"
          {
#line 2780 "ll_backend.llds_out.llds_out_file.c"
            return ll_backend__llds_out__llds_out_file__succeeded = ll_backend__llds_out__llds_out_instr____Unify____label_output_info_0_0(ll_backend__llds_out__llds_out_file__V_4_4, ll_backend__llds_out__llds_out_file__V_6_6);
          }
#line 262 "llds_out_file.m"
      }
#line 262 "llds_out_file.m"
    return ll_backend__llds_out__llds_out_file__succeeded;
#line 262 "llds_out_file.m"
  }
#line 262 "llds_out_file.m"
}

#line 254 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file____Compare____annotated_c_module_0_0(
#line 254 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 254 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2,
#line 254 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__3_3)
#line 254 "llds_out_file.m"
{
#line 254 "llds_out_file.m"
  {
#line 254 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 254 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__CastX_15 = (MR_Integer) ll_backend__llds_out__llds_out_file__HeadVar__2_2;
#line 254 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__CastY_16 = (MR_Integer) ll_backend__llds_out__llds_out_file__HeadVar__3_3;

#line 254 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__succeeded = (ll_backend__llds_out__llds_out_file__CastX_15 == ll_backend__llds_out__llds_out_file__CastY_16);
#line 254 "llds_out_file.m"
    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 2816 "ll_backend.llds_out.llds_out_file.c"
      *ll_backend__llds_out__llds_out_file__HeadVar__1_1 = (MR_Integer) 0;
#line 254 "llds_out_file.m"
    else
#line 254 "llds_out_file.m"
      {
#line 254 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 0)));
#line 254 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 1)));
#line 254 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 2)));
#line 254 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 3)));
#line 254 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__3_3, (MR_Integer) 0)));
#line 254 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__3_3, (MR_Integer) 1)));
#line 254 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__3_3, (MR_Integer) 2)));
#line 254 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__3_3, (MR_Integer) 3)));
#line 254 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_12_12;

#line 254 "llds_out_file.m"
        {
#line 254 "llds_out_file.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&ll_backend__llds_out__llds_out_file__V_12_12, ll_backend__llds_out__llds_out_file__V_4_4, ll_backend__llds_out__llds_out_file__V_8_8);
        }
#line 2846 "ll_backend.llds_out.llds_out_file.c"
        ll_backend__llds_out__llds_out_file__succeeded = (ll_backend__llds_out__llds_out_file__V_12_12 == (MR_Integer) 0);
#line 254 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__succeeded = !(ll_backend__llds_out__llds_out_file__succeeded);
#line 254 "llds_out_file.m"
        if (ll_backend__llds_out__llds_out_file__succeeded)
#line 254 "llds_out_file.m"
          *ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__V_12_12;
#line 254 "llds_out_file.m"
        else
#line 254 "llds_out_file.m"
          {
#line 254 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_13_13;

#line 254 "llds_out_file.m"
            {
#line 254 "llds_out_file.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_1[3], &ll_backend__llds_out__llds_out_file__V_13_13, ((MR_Box) (ll_backend__llds_out__llds_out_file__V_5_5)), ((MR_Box) (ll_backend__llds_out__llds_out_file__V_9_9)));
            }
#line 2866 "ll_backend.llds_out.llds_out_file.c"
            ll_backend__llds_out__llds_out_file__succeeded = (ll_backend__llds_out__llds_out_file__V_13_13 == (MR_Integer) 0);
#line 254 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__succeeded = !(ll_backend__llds_out__llds_out_file__succeeded);
#line 254 "llds_out_file.m"
            if (ll_backend__llds_out__llds_out_file__succeeded)
#line 254 "llds_out_file.m"
              *ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__V_13_13;
#line 254 "llds_out_file.m"
            else
#line 254 "llds_out_file.m"
              {
#line 254 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__V_14_14;

#line 254 "llds_out_file.m"
                {
#line 254 "llds_out_file.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_1[4], &ll_backend__llds_out__llds_out_file__V_14_14, ((MR_Box) (ll_backend__llds_out__llds_out_file__V_6_6)), ((MR_Box) (ll_backend__llds_out__llds_out_file__V_10_10)));
                }
#line 2886 "ll_backend.llds_out.llds_out_file.c"
                ll_backend__llds_out__llds_out_file__succeeded = (ll_backend__llds_out__llds_out_file__V_14_14 == (MR_Integer) 0);
#line 254 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__succeeded = !(ll_backend__llds_out__llds_out_file__succeeded);
#line 254 "llds_out_file.m"
                if (ll_backend__llds_out__llds_out_file__succeeded)
#line 254 "llds_out_file.m"
                  *ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__V_14_14;
#line 254 "llds_out_file.m"
                else
#line 254 "llds_out_file.m"
                  {
#line 254 "llds_out_file.m"
                    {
#line 254 "llds_out_file.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_1[4], ll_backend__llds_out__llds_out_file__HeadVar__1_1, ((MR_Box) (ll_backend__llds_out__llds_out_file__V_7_7)), ((MR_Box) (ll_backend__llds_out__llds_out_file__V_11_11)));
#line 254 "llds_out_file.m"
                      return;
                    }
#line 254 "llds_out_file.m"
                  }
#line 254 "llds_out_file.m"
              }
#line 254 "llds_out_file.m"
          }
#line 254 "llds_out_file.m"
      }
#line 254 "llds_out_file.m"
  }
#line 254 "llds_out_file.m"
}

#line 254 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file____Unify____annotated_c_module_0_0(
#line 254 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 254 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2)
#line 254 "llds_out_file.m"
{
#line 254 "llds_out_file.m"
  {
#line 254 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 254 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__CastX_11 = (MR_Integer) ll_backend__llds_out__llds_out_file__HeadVar__1_1;
#line 254 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__CastY_12 = (MR_Integer) ll_backend__llds_out__llds_out_file__HeadVar__2_2;

#line 254 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__succeeded = (ll_backend__llds_out__llds_out_file__CastX_11 == ll_backend__llds_out__llds_out_file__CastY_12);
#line 254 "llds_out_file.m"
    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 254 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__succeeded = MR_TRUE;
#line 254 "llds_out_file.m"
    else
#line 254 "llds_out_file.m"
      {
#line 254 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__TypeInfo_13_13;
#line 254 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__TypeInfo_14_14;
#line 254 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__TypeInfo_15_15;
#line 254 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 254 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 254 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 2)));
#line 254 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 3)));
#line 254 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 0)));
#line 254 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 1)));
#line 254 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 2)));
#line 254 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 3)));

#line 2969 "ll_backend.llds_out.llds_out_file.c"
        ll_backend__llds_out__llds_out_file__succeeded = (strcmp(ll_backend__llds_out__llds_out_file__V_3_3, ll_backend__llds_out__llds_out_file__V_7_7) == 0);
#line 254 "llds_out_file.m"
        if (ll_backend__llds_out__llds_out_file__succeeded)
#line 254 "llds_out_file.m"
          {
#line 2975 "ll_backend.llds_out.llds_out_file.c"
            ll_backend__llds_out__llds_out_file__TypeInfo_13_13 = (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_1[3];
#line 2977 "ll_backend.llds_out.llds_out_file.c"
            {
#line 2979 "ll_backend.llds_out.llds_out_file.c"
              ll_backend__llds_out__llds_out_file__succeeded = mercury__builtin__unify_2_p_0(ll_backend__llds_out__llds_out_file__TypeInfo_13_13, ((MR_Box) (ll_backend__llds_out__llds_out_file__V_4_4)), ((MR_Box) (ll_backend__llds_out__llds_out_file__V_8_8)));
            }
#line 254 "llds_out_file.m"
            if (ll_backend__llds_out__llds_out_file__succeeded)
#line 254 "llds_out_file.m"
              {
#line 2986 "ll_backend.llds_out.llds_out_file.c"
                ll_backend__llds_out__llds_out_file__TypeInfo_14_14 = (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_1[4];
#line 2988 "ll_backend.llds_out.llds_out_file.c"
                {
#line 2990 "ll_backend.llds_out.llds_out_file.c"
                  ll_backend__llds_out__llds_out_file__succeeded = mercury__builtin__unify_2_p_0(ll_backend__llds_out__llds_out_file__TypeInfo_14_14, ((MR_Box) (ll_backend__llds_out__llds_out_file__V_5_5)), ((MR_Box) (ll_backend__llds_out__llds_out_file__V_9_9)));
                }
#line 254 "llds_out_file.m"
                if (ll_backend__llds_out__llds_out_file__succeeded)
#line 254 "llds_out_file.m"
                  {
#line 2997 "ll_backend.llds_out.llds_out_file.c"
                    ll_backend__llds_out__llds_out_file__TypeInfo_15_15 = (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_1[4];
#line 2999 "ll_backend.llds_out.llds_out_file.c"
                    {
#line 3001 "ll_backend.llds_out.llds_out_file.c"
                      return ll_backend__llds_out__llds_out_file__succeeded = mercury__builtin__unify_2_p_0(ll_backend__llds_out__llds_out_file__TypeInfo_15_15, ((MR_Box) (ll_backend__llds_out__llds_out_file__V_6_6)), ((MR_Box) (ll_backend__llds_out__llds_out_file__V_10_10)));
                    }
#line 254 "llds_out_file.m"
                  }
#line 254 "llds_out_file.m"
              }
#line 254 "llds_out_file.m"
          }
#line 254 "llds_out_file.m"
      }
#line 254 "llds_out_file.m"
    return ll_backend__llds_out__llds_out_file__succeeded;
#line 254 "llds_out_file.m"
  }
#line 254 "llds_out_file.m"
}

#line 1647 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__delete_any_maybe_labels_3_p_0(
#line 1647 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 1647 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_2,
#line 1647 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_3)
#line 1647 "llds_out_file.m"
{
#line 1650 "llds_out_file.m"
  while (MR_TRUE)
#line 1650 "llds_out_file.m"
    {
#line 1650 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 1650 "llds_out_file.m"
      {
#line 1650 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 1650 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1650 "llds_out_file.m"
          *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_3 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_2;
#line 1650 "llds_out_file.m"
        else
#line 1651 "llds_out_file.m"
          {
#line 1651 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__MaybeLabel_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 1651 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__MaybeLabels_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 1651 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_12_12;

#line 1641 "llds_out_file.m"
            if ((ll_backend__llds_out__llds_out_file__MaybeLabel_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1641 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_12_12 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_2;
#line 1641 "llds_out_file.m"
            else
#line 1643 "llds_out_file.m"
              {
#line 1643 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__Label_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__MaybeLabel_7, (MR_Integer) 0)));

#line 1644 "llds_out_file.m"
                {
#line 1644 "llds_out_file.m"
                  mercury__set_tree234__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_18)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_2, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_12_12);
                }
#line 1643 "llds_out_file.m"
              }
#line 1653 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 1653 "llds_out_file.m"
            {
#line 1653 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__MaybeLabels_8;
#line 1653 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0__tmp_copy_2 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_12_12;

#line 1653 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_2 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0__tmp_copy_2;
#line 1653 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 1653 "llds_out_file.m"
            }
#line 1653 "llds_out_file.m"
            continue;
#line 1651 "llds_out_file.m"
          }
#line 1650 "llds_out_file.m"
      }
#line 1650 "llds_out_file.m"
      break;
#line 1650 "llds_out_file.m"
    }
#line 1647 "llds_out_file.m"
}

#line 1636 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__delete_any_maybe_label_3_p_0(
#line 1636 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__MaybeLabel_4,
#line 1636 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_7,
#line 1636 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_8)
#line 1636 "llds_out_file.m"
{
#line 1641 "llds_out_file.m"
  {
#line 1641 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 1641 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__MaybeLabel_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1641 "llds_out_file.m"
      *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_8 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_7;
#line 1641 "llds_out_file.m"
    else
#line 1643 "llds_out_file.m"
      {
#line 1643 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__Label_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__MaybeLabel_4, (MR_Integer) 0)));

#line 1644 "llds_out_file.m"
        {
#line 1644 "llds_out_file.m"
          mercury__set_tree234__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_6)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_7, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_8);
#line 1644 "llds_out_file.m"
          return;
        }
#line 1643 "llds_out_file.m"
      }
#line 1641 "llds_out_file.m"
  }
#line 1636 "llds_out_file.m"
}

#line 1628 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(
#line 1628 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 1628 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_2,
#line 1628 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_3)
#line 1628 "llds_out_file.m"
{
#line 1631 "llds_out_file.m"
  while (MR_TRUE)
#line 1631 "llds_out_file.m"
    {
#line 1631 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 1631 "llds_out_file.m"
      {
#line 1631 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 1631 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1631 "llds_out_file.m"
          *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_3 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_2;
#line 1631 "llds_out_file.m"
        else
#line 1632 "llds_out_file.m"
          {
#line 1632 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__CodeAddr_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 1632 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__CodeAddrs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 1632 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_12_12;
#line 1624 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Label_18;

#line 1622 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__CodeAddr_7)) == (MR_mktag((MR_Integer) 1)));
#line 1622 "llds_out_file.m"
            if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1622 "llds_out_file.m"
              {
#line 1622 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__Label_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__CodeAddr_7, (MR_Integer) 0)));
#line 1623 "llds_out_file.m"
                {
#line 1623 "llds_out_file.m"
                  mercury__set_tree234__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_18)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_2, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_12_12);
                }
#line 1622 "llds_out_file.m"
              }
#line 1622 "llds_out_file.m"
            else
#line 1623 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_12_12 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_2;
#line 1634 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 1634 "llds_out_file.m"
            {
#line 1634 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__CodeAddrs_8;
#line 1634 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0__tmp_copy_2 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_12_12;

#line 1634 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_2 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0__tmp_copy_2;
#line 1634 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 1634 "llds_out_file.m"
            }
#line 1634 "llds_out_file.m"
            continue;
#line 1632 "llds_out_file.m"
          }
#line 1631 "llds_out_file.m"
      }
#line 1631 "llds_out_file.m"
      break;
#line 1631 "llds_out_file.m"
    }
#line 1628 "llds_out_file.m"
}

#line 1618 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__delete_any_label_3_p_0(
#line 1618 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__CodeAddr_4,
#line 1618 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_7,
#line 1618 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_8)
#line 1618 "llds_out_file.m"
{
#line 1624 "llds_out_file.m"
  {
#line 1624 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__CodeAddr_4)) == (MR_mktag((MR_Integer) 1)));
#line 1624 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__Label_6;

#line 1622 "llds_out_file.m"
    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1622 "llds_out_file.m"
      {
#line 1622 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__Label_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__CodeAddr_4, (MR_Integer) 0)));
#line 1623 "llds_out_file.m"
        {
#line 1623 "llds_out_file.m"
          mercury__set_tree234__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_6)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_7, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_8);
#line 1623 "llds_out_file.m"
          return;
        }
#line 1622 "llds_out_file.m"
      }
#line 1622 "llds_out_file.m"
    else
#line 1623 "llds_out_file.m"
      *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_8 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_7;
#line 1624 "llds_out_file.m"
  }
#line 1618 "llds_out_file.m"
}

#line 1441 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__find_while_labels_to_define_5_p_0(
#line 1441 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 1441 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2,
#line 1441 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__WhileLabels_3,
#line 1441 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4,
#line 1441 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_5)
#line 1441 "llds_out_file.m"
{
#line 1445 "llds_out_file.m"
  while (MR_TRUE)
#line 1445 "llds_out_file.m"
    {
#line 1445 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 1445 "llds_out_file.m"
      {
#line 1445 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 1445 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1445 "llds_out_file.m"
          *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_5 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4;
#line 1445 "llds_out_file.m"
        else
#line 1447 "llds_out_file.m"
          {
#line 1447 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Instr0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 1447 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Instrs0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 1447 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Uinstr0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Instr0_11, (MR_Integer) 0)));
#line 1447 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19;
#line 1447 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145;
#line 1448 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Instr0_11, (MR_Integer) 1)));

#line 1456 "llds_out_file.m"
            if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1508 "llds_out_file.m"
              {
#line 1508 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__Lval_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1508 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__LvalCodeAddrs_39;
#line 1508 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_135_135;
#line 1508 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__Rval_153 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1508 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__RvalCodeAddrs_154;
#line 1509 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__V_40_40;
#line 1510 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__V_41_41;

#line 1509 "llds_out_file.m"
                {
#line 1509 "llds_out_file.m"
                  ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Lval_38, &ll_backend__llds_out__llds_out_file__LvalCodeAddrs_39, &ll_backend__llds_out__llds_out_file__V_40_40);
                }
#line 1510 "llds_out_file.m"
                {
#line 1510 "llds_out_file.m"
                  ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Rval_153, &ll_backend__llds_out__llds_out_file__RvalCodeAddrs_154, &ll_backend__llds_out__llds_out_file__V_41_41);
                }
#line 1511 "llds_out_file.m"
                {
#line 1511 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__LvalCodeAddrs_39, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_135_135);
                }
#line 1512 "llds_out_file.m"
                {
#line 1512 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__RvalCodeAddrs_154, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_135_135, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                }
#line 1513 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1508 "llds_out_file.m"
              }
#line 1456 "llds_out_file.m"
            else
#line 1456 "llds_out_file.m"
              if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1491 "llds_out_file.m"
                {
#line 1491 "llds_out_file.m"
                  MR_Word ll_backend__llds_out__llds_out_file__BlockInstrs_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 3)));
#line 1491 "llds_out_file.m"
                  MR_Integer ll_backend__llds_out__llds_out_file__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1491 "llds_out_file.m"
                  MR_Integer ll_backend__llds_out__llds_out_file__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));

#line 1492 "llds_out_file.m"
                  {
#line 1492 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__find_while_labels_to_define_5_p_0(ll_backend__llds_out__llds_out_file__BlockInstrs_34, ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2, ll_backend__llds_out__llds_out_file__WhileLabels_3, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                  }
#line 1495 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1491 "llds_out_file.m"
                }
#line 1456 "llds_out_file.m"
              else
#line 1456 "llds_out_file.m"
                if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1480 "llds_out_file.m"
                  {
#line 1480 "llds_out_file.m"
                    MR_Word ll_backend__llds_out__llds_out_file__MaybeTargets_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1480 "llds_out_file.m"
                    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_141_141;
#line 1480 "llds_out_file.m"
                    MR_Word ll_backend__llds_out__llds_out_file__Rval_150 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1480 "llds_out_file.m"
                    MR_Word ll_backend__llds_out__llds_out_file__RvalCodeAddrs_151;
#line 1481 "llds_out_file.m"
                    MR_Word ll_backend__llds_out__llds_out_file__V_26_26;

#line 1481 "llds_out_file.m"
                    {
#line 1481 "llds_out_file.m"
                      ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Rval_150, &ll_backend__llds_out__llds_out_file__RvalCodeAddrs_151, &ll_backend__llds_out__llds_out_file__V_26_26);
                    }
#line 1482 "llds_out_file.m"
                    {
#line 1482 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__RvalCodeAddrs_151, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_141_141);
                    }
#line 1483 "llds_out_file.m"
                    {
#line 1483 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__delete_any_maybe_labels_3_p_0(ll_backend__llds_out__llds_out_file__MaybeTargets_25, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_141_141, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                    }
#line 1484 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1480 "llds_out_file.m"
                  }
#line 1456 "llds_out_file.m"
                else
#line 1456 "llds_out_file.m"
                  if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 27))))
#line 1556 "llds_out_file.m"
                    {
#line 1556 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__MaybeFixNoLayoutLabel_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 4)));
#line 1556 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__MaybeFixLayoutLabel_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 5)));
#line 1556 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__MaybeFixOnlyLayoutLabel_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 6)));
#line 1556 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__MaybeNoFixLabel_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 7)));
#line 1556 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__MaybeHashDefLabel_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 8)));
#line 1556 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_125_125;
#line 1556 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_126_126;
#line 1556 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_127_127;
#line 1556 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_128_128;
#line 1554 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1554 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1554 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 3)));
#line 1554 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 9)));
#line 1554 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 10)));

#line 1557 "llds_out_file.m"
                      {
#line 1557 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_maybe_label_3_p_0(ll_backend__llds_out__llds_out_file__MaybeFixNoLayoutLabel_70, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_125_125);
                      }
#line 1558 "llds_out_file.m"
                      {
#line 1558 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_maybe_label_3_p_0(ll_backend__llds_out__llds_out_file__MaybeFixLayoutLabel_71, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_125_125, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_126_126);
                      }
#line 1559 "llds_out_file.m"
                      {
#line 1559 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_maybe_label_3_p_0(ll_backend__llds_out__llds_out_file__MaybeFixOnlyLayoutLabel_72, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_126_126, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_127_127);
                      }
#line 1560 "llds_out_file.m"
                      {
#line 1560 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_maybe_label_3_p_0(ll_backend__llds_out__llds_out_file__MaybeNoFixLabel_73, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_127_127, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_128_128);
                      }
#line 1561 "llds_out_file.m"
                      {
#line 1561 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_maybe_label_3_p_0(ll_backend__llds_out__llds_out_file__MaybeHashDefLabel_74, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_128_128, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                      }
#line 1562 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1556 "llds_out_file.m"
                    }
#line 1456 "llds_out_file.m"
                  else
#line 1456 "llds_out_file.m"
                    if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 29))))
#line 1524 "llds_out_file.m"
                      {
#line 1524 "llds_out_file.m"
                        MR_Word ll_backend__llds_out__llds_out_file__Lval_155 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1524 "llds_out_file.m"
                        MR_Word ll_backend__llds_out__llds_out_file__LvalCodeAddrs_156;
#line 1521 "llds_out_file.m"
                        MR_Word ll_backend__llds_out__llds_out_file__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1525 "llds_out_file.m"
                        MR_Word ll_backend__llds_out__llds_out_file__V_47_47;

#line 1525 "llds_out_file.m"
                        {
#line 1525 "llds_out_file.m"
                          ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Lval_155, &ll_backend__llds_out__llds_out_file__LvalCodeAddrs_156, &ll_backend__llds_out__llds_out_file__V_47_47);
                        }
#line 1526 "llds_out_file.m"
                        {
#line 1526 "llds_out_file.m"
                          ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__LvalCodeAddrs_156, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                        }
#line 1527 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1524 "llds_out_file.m"
                      }
#line 1456 "llds_out_file.m"
                    else
#line 1456 "llds_out_file.m"
                      if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 1534 "llds_out_file.m"
                        {
#line 1534 "llds_out_file.m"
                          MR_Word ll_backend__llds_out__llds_out_file__Rval_157 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1534 "llds_out_file.m"
                          MR_Word ll_backend__llds_out__llds_out_file__RvalCodeAddrs_158;
#line 1535 "llds_out_file.m"
                          MR_Word ll_backend__llds_out__llds_out_file__V_51_51;

#line 1535 "llds_out_file.m"
                          {
#line 1535 "llds_out_file.m"
                            ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Rval_157, &ll_backend__llds_out__llds_out_file__RvalCodeAddrs_158, &ll_backend__llds_out__llds_out_file__V_51_51);
                          }
#line 1536 "llds_out_file.m"
                          {
#line 1536 "llds_out_file.m"
                            ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__RvalCodeAddrs_158, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                          }
#line 1537 "llds_out_file.m"
                          ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1534 "llds_out_file.m"
                        }
#line 1456 "llds_out_file.m"
                      else
#line 1456 "llds_out_file.m"
                        if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1472 "llds_out_file.m"
                          {
#line 1472 "llds_out_file.m"
                            MR_Word ll_backend__llds_out__llds_out_file__Target_148 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1475 "llds_out_file.m"
                            MR_Word ll_backend__llds_out__llds_out_file__TargetLabel_147;

#line 1473 "llds_out_file.m"
                            ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Target_148)) == (MR_mktag((MR_Integer) 1)));
#line 1473 "llds_out_file.m"
                            if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1473 "llds_out_file.m"
                              {
#line 1473 "llds_out_file.m"
                                ll_backend__llds_out__llds_out_file__TargetLabel_147 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__Target_148, (MR_Integer) 0)));
#line 1474 "llds_out_file.m"
                                {
#line 1474 "llds_out_file.m"
                                  mercury__set_tree234__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__llds_out__llds_out_file__TargetLabel_147)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                                }
#line 1473 "llds_out_file.m"
                              }
#line 1473 "llds_out_file.m"
                            else
#line 1474 "llds_out_file.m"
                              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4;
#line 1478 "llds_out_file.m"
                            ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1472 "llds_out_file.m"
                          }
#line 1456 "llds_out_file.m"
                        else
#line 1456 "llds_out_file.m"
                          if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 1457 "llds_out_file.m"
                            {
#line 1457 "llds_out_file.m"
                              MR_Word ll_backend__llds_out__llds_out_file__Rval_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1457 "llds_out_file.m"
                              MR_Word ll_backend__llds_out__llds_out_file__Target_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1457 "llds_out_file.m"
                              MR_Word ll_backend__llds_out__llds_out_file__RvalCodeAddrs_22;
#line 1457 "llds_out_file.m"
                              MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_144_144;
#line 1458 "llds_out_file.m"
                              MR_Word ll_backend__llds_out__llds_out_file__V_23_23;
#line 1467 "llds_out_file.m"
                              MR_Word ll_backend__llds_out__llds_out_file__TargetLabel_24;

#line 1458 "llds_out_file.m"
                              {
#line 1458 "llds_out_file.m"
                                ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Rval_20, &ll_backend__llds_out__llds_out_file__RvalCodeAddrs_22, &ll_backend__llds_out__llds_out_file__V_23_23);
                              }
#line 1459 "llds_out_file.m"
                              {
#line 1459 "llds_out_file.m"
                                ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__RvalCodeAddrs_22, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_144_144);
                              }
#line 1460 "llds_out_file.m"
                              ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Target_21)) == (MR_mktag((MR_Integer) 1)));
#line 1460 "llds_out_file.m"
                              if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1460 "llds_out_file.m"
                                {
#line 1460 "llds_out_file.m"
                                  ll_backend__llds_out__llds_out_file__TargetLabel_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__Target_21, (MR_Integer) 0)));
#line 1464 "llds_out_file.m"
                                  {
#line 1461 "llds_out_file.m"
                                    MR_Word ll_backend__llds_out__llds_out_file__V_174_174;

#line 1461 "llds_out_file.m"
                                    ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2)) == (MR_mktag((MR_Integer) 1)));
#line 1461 "llds_out_file.m"
                                    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1461 "llds_out_file.m"
                                      {
#line 1461 "llds_out_file.m"
                                        ll_backend__llds_out__llds_out_file__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2, (MR_Integer) 0)));
#line 1461 "llds_out_file.m"
                                        {
#line 1461 "llds_out_file.m"
                                          ll_backend__llds_out__llds_out_file__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__llds_out__llds_out_file__TargetLabel_24, ll_backend__llds_out__llds_out_file__V_174_174);
                                        }
#line 1461 "llds_out_file.m"
                                      }
#line 1464 "llds_out_file.m"
                                    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1461 "llds_out_file.m"
                                      ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_144_144;
#line 1464 "llds_out_file.m"
                                    else
#line 1465 "llds_out_file.m"
                                      {
#line 1465 "llds_out_file.m"
                                        {
#line 1465 "llds_out_file.m"
                                          mercury__set_tree234__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__llds_out__llds_out_file__TargetLabel_24)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_144_144, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                                        }
#line 1465 "llds_out_file.m"
                                      }
#line 1464 "llds_out_file.m"
                                  }
#line 1460 "llds_out_file.m"
                                }
#line 1460 "llds_out_file.m"
                              else
#line 1465 "llds_out_file.m"
                                ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_144_144;
#line 1470 "llds_out_file.m"
                              ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1457 "llds_out_file.m"
                            }
#line 1456 "llds_out_file.m"
                          else
#line 1456 "llds_out_file.m"
                            if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 1540 "llds_out_file.m"
                              {
#line 1540 "llds_out_file.m"
                                MR_Word ll_backend__llds_out__llds_out_file__TargetLval_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1540 "llds_out_file.m"
                                MR_Word ll_backend__llds_out__llds_out_file__SizeRval_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 4)));
#line 1540 "llds_out_file.m"
                                MR_Word ll_backend__llds_out__llds_out_file__MaybeRegionIdRval_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 7)));
#line 1540 "llds_out_file.m"
                                MR_Word ll_backend__llds_out__llds_out_file__TargetLvalCodeAddrs_60;
#line 1540 "llds_out_file.m"
                                MR_Word ll_backend__llds_out__llds_out_file__SizeRvalCodeAddrs_62;
#line 1540 "llds_out_file.m"
                                MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_130_130;
#line 1540 "llds_out_file.m"
                                MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_131_131;
#line 1539 "llds_out_file.m"
                                MR_Word ll_backend__llds_out__llds_out_file__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1539 "llds_out_file.m"
                                MR_Word ll_backend__llds_out__llds_out_file__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 3)));
#line 1539 "llds_out_file.m"
                                MR_Word ll_backend__llds_out__llds_out_file__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 5)));
#line 1539 "llds_out_file.m"
                                MR_Word ll_backend__llds_out__llds_out_file__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 6)));
#line 1539 "llds_out_file.m"
                                MR_Word ll_backend__llds_out__llds_out_file__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 8)));
#line 1541 "llds_out_file.m"
                                MR_Word ll_backend__llds_out__llds_out_file__V_61_61;
#line 1542 "llds_out_file.m"
                                MR_Word ll_backend__llds_out__llds_out_file__V_63_63;

#line 1541 "llds_out_file.m"
                                {
#line 1541 "llds_out_file.m"
                                  ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__TargetLval_52, &ll_backend__llds_out__llds_out_file__TargetLvalCodeAddrs_60, &ll_backend__llds_out__llds_out_file__V_61_61);
                                }
#line 1542 "llds_out_file.m"
                                {
#line 1542 "llds_out_file.m"
                                  ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__SizeRval_55, &ll_backend__llds_out__llds_out_file__SizeRvalCodeAddrs_62, &ll_backend__llds_out__llds_out_file__V_63_63);
                                }
#line 1543 "llds_out_file.m"
                                {
#line 1543 "llds_out_file.m"
                                  ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__TargetLvalCodeAddrs_60, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_130_130);
                                }
#line 1544 "llds_out_file.m"
                                {
#line 1544 "llds_out_file.m"
                                  ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__SizeRvalCodeAddrs_62, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_130_130, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_131_131);
                                }
#line 1547 "llds_out_file.m"
                                if ((ll_backend__llds_out__llds_out_file__MaybeRegionIdRval_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1546 "llds_out_file.m"
                                  ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_131_131;
#line 1547 "llds_out_file.m"
                                else
#line 1548 "llds_out_file.m"
                                  {
#line 1548 "llds_out_file.m"
                                    MR_Word ll_backend__llds_out__llds_out_file__RegionIdRval_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__MaybeRegionIdRval_58, (MR_Integer) 0)));
#line 1548 "llds_out_file.m"
                                    MR_Word ll_backend__llds_out__llds_out_file__RegionIdRvalCodeAddrs_65;
#line 1549 "llds_out_file.m"
                                    MR_Word ll_backend__llds_out__llds_out_file__V_66_66;

#line 1549 "llds_out_file.m"
                                    {
#line 1549 "llds_out_file.m"
                                      ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__RegionIdRval_64, &ll_backend__llds_out__llds_out_file__RegionIdRvalCodeAddrs_65, &ll_backend__llds_out__llds_out_file__V_66_66);
                                    }
#line 1550 "llds_out_file.m"
                                    {
#line 1550 "llds_out_file.m"
                                      ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__RegionIdRvalCodeAddrs_65, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_131_131, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                                    }
#line 1548 "llds_out_file.m"
                                  }
#line 1552 "llds_out_file.m"
                                ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1540 "llds_out_file.m"
                              }
#line 1456 "llds_out_file.m"
                            else
#line 1456 "llds_out_file.m"
                              if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 28))))
#line 1524 "llds_out_file.m"
                                {
#line 1524 "llds_out_file.m"
                                  MR_Word ll_backend__llds_out__llds_out_file__Lval_177 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1524 "llds_out_file.m"
                                  MR_Word ll_backend__llds_out__llds_out_file__LvalCodeAddrs_178;
#line 1520 "llds_out_file.m"
                                  MR_Integer ll_backend__llds_out__llds_out_file__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1520 "llds_out_file.m"
                                  MR_Integer ll_backend__llds_out__llds_out_file__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 3)));
#line 1525 "llds_out_file.m"
                                  MR_Word ll_backend__llds_out__llds_out_file__V_175_175;

#line 1525 "llds_out_file.m"
                                  {
#line 1525 "llds_out_file.m"
                                    ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Lval_177, &ll_backend__llds_out__llds_out_file__LvalCodeAddrs_178, &ll_backend__llds_out__llds_out_file__V_175_175);
                                  }
#line 1526 "llds_out_file.m"
                                  {
#line 1526 "llds_out_file.m"
                                    ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__LvalCodeAddrs_178, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                                  }
#line 1527 "llds_out_file.m"
                                  ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1524 "llds_out_file.m"
                                }
#line 1456 "llds_out_file.m"
                              else
#line 1456 "llds_out_file.m"
                                if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 30))))
#line 1524 "llds_out_file.m"
                                  {
#line 1524 "llds_out_file.m"
                                    MR_Word ll_backend__llds_out__llds_out_file__Lval_181 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1524 "llds_out_file.m"
                                    MR_Word ll_backend__llds_out__llds_out_file__LvalCodeAddrs_182;
#line 1522 "llds_out_file.m"
                                    MR_Word ll_backend__llds_out__llds_out_file__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1525 "llds_out_file.m"
                                    MR_Word ll_backend__llds_out__llds_out_file__V_179_179;

#line 1525 "llds_out_file.m"
                                    {
#line 1525 "llds_out_file.m"
                                      ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Lval_181, &ll_backend__llds_out__llds_out_file__LvalCodeAddrs_182, &ll_backend__llds_out__llds_out_file__V_179_179);
                                    }
#line 1526 "llds_out_file.m"
                                    {
#line 1526 "llds_out_file.m"
                                      ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__LvalCodeAddrs_182, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                                    }
#line 1527 "llds_out_file.m"
                                    ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1524 "llds_out_file.m"
                                  }
#line 1456 "llds_out_file.m"
                                else
#line 1456 "llds_out_file.m"
                                  if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1508 "llds_out_file.m"
                                    {
#line 1508 "llds_out_file.m"
                                      MR_Word ll_backend__llds_out__llds_out_file__Lval_185 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1508 "llds_out_file.m"
                                      MR_Word ll_backend__llds_out__llds_out_file__LvalCodeAddrs_186;
#line 1508 "llds_out_file.m"
                                      MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_135_189;
#line 1508 "llds_out_file.m"
                                      MR_Word ll_backend__llds_out__llds_out_file__Rval_190 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1508 "llds_out_file.m"
                                      MR_Word ll_backend__llds_out__llds_out_file__RvalCodeAddrs_191;
#line 1509 "llds_out_file.m"
                                      MR_Word ll_backend__llds_out__llds_out_file__V_183_183;
#line 1510 "llds_out_file.m"
                                      MR_Word ll_backend__llds_out__llds_out_file__V_184_184;

#line 1509 "llds_out_file.m"
                                      {
#line 1509 "llds_out_file.m"
                                        ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Lval_185, &ll_backend__llds_out__llds_out_file__LvalCodeAddrs_186, &ll_backend__llds_out__llds_out_file__V_183_183);
                                      }
#line 1510 "llds_out_file.m"
                                      {
#line 1510 "llds_out_file.m"
                                        ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Rval_190, &ll_backend__llds_out__llds_out_file__RvalCodeAddrs_191, &ll_backend__llds_out__llds_out_file__V_184_184);
                                      }
#line 1511 "llds_out_file.m"
                                      {
#line 1511 "llds_out_file.m"
                                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__LvalCodeAddrs_186, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_135_189);
                                      }
#line 1512 "llds_out_file.m"
                                      {
#line 1512 "llds_out_file.m"
                                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__RvalCodeAddrs_191, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_135_189, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                                      }
#line 1513 "llds_out_file.m"
                                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1508 "llds_out_file.m"
                                    }
#line 1456 "llds_out_file.m"
                                  else
#line 1456 "llds_out_file.m"
                                    if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1450 "llds_out_file.m"
                                      {
#line 1450 "llds_out_file.m"
                                        MR_Word ll_backend__llds_out__llds_out_file__Label_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));

#line 1451 "llds_out_file.m"
                                        {
#line 1451 "llds_out_file.m"
                                          ll_backend__llds_out__llds_out_file__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ll_backend__llds_out__llds_out_file__WhileLabels_3, ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_18)));
                                        }
#line 1453 "llds_out_file.m"
                                        if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1452 "llds_out_file.m"
                                          {
#line 1452 "llds_out_file.m"
                                            ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1452 "llds_out_file.m"
                                            MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_18));
#line 1452 "llds_out_file.m"
                                          }
#line 1453 "llds_out_file.m"
                                        else
#line 1454 "llds_out_file.m"
                                          ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1454 "llds_out_file.m"
                                        ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4;
#line 1450 "llds_out_file.m"
                                      }
#line 1456 "llds_out_file.m"
                                    else
#line 1456 "llds_out_file.m"
                                      if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 31))))
#line 1524 "llds_out_file.m"
                                        {
#line 1524 "llds_out_file.m"
                                          MR_Word ll_backend__llds_out__llds_out_file__Lval_194 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1524 "llds_out_file.m"
                                          MR_Word ll_backend__llds_out__llds_out_file__LvalCodeAddrs_195;
#line 1523 "llds_out_file.m"
                                          MR_Integer ll_backend__llds_out__llds_out_file__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1525 "llds_out_file.m"
                                          MR_Word ll_backend__llds_out__llds_out_file__V_192_192;

#line 1525 "llds_out_file.m"
                                          {
#line 1525 "llds_out_file.m"
                                            ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Lval_194, &ll_backend__llds_out__llds_out_file__LvalCodeAddrs_195, &ll_backend__llds_out__llds_out_file__V_192_192);
                                          }
#line 1526 "llds_out_file.m"
                                          {
#line 1526 "llds_out_file.m"
                                            ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__LvalCodeAddrs_195, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                                          }
#line 1527 "llds_out_file.m"
                                          ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1524 "llds_out_file.m"
                                        }
#line 1456 "llds_out_file.m"
                                      else
#line 1456 "llds_out_file.m"
                                        if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 34))))
#line 1589 "llds_out_file.m"
                                          {
#line 1589 "llds_out_file.m"
                                            MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_114_114;
#line 1589 "llds_out_file.m"
                                            MR_Word ll_backend__llds_out__llds_out_file__LoopControlRval_165 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1589 "llds_out_file.m"
                                            MR_Word ll_backend__llds_out__llds_out_file__LoopControlRvalCodeAddrs_166;
#line 1589 "llds_out_file.m"
                                            MR_Word ll_backend__llds_out__llds_out_file__SlotRval_167 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1589 "llds_out_file.m"
                                            MR_Word ll_backend__llds_out__llds_out_file__SlotRvalCodeAddrs_168;
#line 1590 "llds_out_file.m"
                                            MR_Word ll_backend__llds_out__llds_out_file__V_96_96;
#line 1591 "llds_out_file.m"
                                            MR_Word ll_backend__llds_out__llds_out_file__V_97_97;

#line 1590 "llds_out_file.m"
                                            {
#line 1590 "llds_out_file.m"
                                              ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__LoopControlRval_165, &ll_backend__llds_out__llds_out_file__LoopControlRvalCodeAddrs_166, &ll_backend__llds_out__llds_out_file__V_96_96);
                                            }
#line 1591 "llds_out_file.m"
                                            {
#line 1591 "llds_out_file.m"
                                              ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__SlotRval_167, &ll_backend__llds_out__llds_out_file__SlotRvalCodeAddrs_168, &ll_backend__llds_out__llds_out_file__V_97_97);
                                            }
#line 1592 "llds_out_file.m"
                                            {
#line 1592 "llds_out_file.m"
                                              ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__LoopControlRvalCodeAddrs_166, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_114_114);
                                            }
#line 1593 "llds_out_file.m"
                                            {
#line 1593 "llds_out_file.m"
                                              ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__SlotRvalCodeAddrs_168, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_114_114, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                                            }
#line 1594 "llds_out_file.m"
                                            ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1589 "llds_out_file.m"
                                          }
#line 1456 "llds_out_file.m"
                                        else
#line 1456 "llds_out_file.m"
                                          if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 33))))
#line 1581 "llds_out_file.m"
                                            {
#line 1581 "llds_out_file.m"
                                              MR_Word ll_backend__llds_out__llds_out_file__SlotRval_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1581 "llds_out_file.m"
                                              MR_Word ll_backend__llds_out__llds_out_file__SlotRvalCodeAddrs_94;
#line 1581 "llds_out_file.m"
                                              MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_116_116;
#line 1581 "llds_out_file.m"
                                              MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_117_117;
#line 1581 "llds_out_file.m"
                                              MR_Word ll_backend__llds_out__llds_out_file__Label_162 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 3)));
#line 1581 "llds_out_file.m"
                                              MR_Word ll_backend__llds_out__llds_out_file__LoopControlRval_163 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1581 "llds_out_file.m"
                                              MR_Word ll_backend__llds_out__llds_out_file__LoopControlRvalCodeAddrs_164;
#line 1582 "llds_out_file.m"
                                              MR_Word ll_backend__llds_out__llds_out_file__V_93_93;
#line 1583 "llds_out_file.m"
                                              MR_Word ll_backend__llds_out__llds_out_file__V_95_95;

#line 1582 "llds_out_file.m"
                                              {
#line 1582 "llds_out_file.m"
                                                ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__LoopControlRval_163, &ll_backend__llds_out__llds_out_file__LoopControlRvalCodeAddrs_164, &ll_backend__llds_out__llds_out_file__V_93_93);
                                              }
#line 1583 "llds_out_file.m"
                                              {
#line 1583 "llds_out_file.m"
                                                ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__SlotRval_92, &ll_backend__llds_out__llds_out_file__SlotRvalCodeAddrs_94, &ll_backend__llds_out__llds_out_file__V_95_95);
                                              }
#line 1584 "llds_out_file.m"
                                              {
#line 1584 "llds_out_file.m"
                                                ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__LoopControlRvalCodeAddrs_164, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_116_116);
                                              }
#line 1585 "llds_out_file.m"
                                              {
#line 1585 "llds_out_file.m"
                                                ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__SlotRvalCodeAddrs_94, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_116_116, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_117_117);
                                              }
#line 1586 "llds_out_file.m"
                                              {
#line 1586 "llds_out_file.m"
                                                mercury__set_tree234__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_162)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_117_117, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                                              }
#line 1587 "llds_out_file.m"
                                              ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1581 "llds_out_file.m"
                                            }
#line 1456 "llds_out_file.m"
                                          else
#line 1456 "llds_out_file.m"
                                            if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 32))))
#line 1573 "llds_out_file.m"
                                              {
#line 1573 "llds_out_file.m"
                                                MR_Word ll_backend__llds_out__llds_out_file__LoopControlRval_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1573 "llds_out_file.m"
                                                MR_Word ll_backend__llds_out__llds_out_file__SlotLval_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1573 "llds_out_file.m"
                                                MR_Word ll_backend__llds_out__llds_out_file__LoopControlRvalCodeAddrs_88;
#line 1573 "llds_out_file.m"
                                                MR_Word ll_backend__llds_out__llds_out_file__SlotLvalCodeAddrs_90;
#line 1573 "llds_out_file.m"
                                                MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_119_119;
#line 1573 "llds_out_file.m"
                                                MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_120_120;
#line 1573 "llds_out_file.m"
                                                MR_Word ll_backend__llds_out__llds_out_file__Label_161 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 3)));
#line 1574 "llds_out_file.m"
                                                MR_Word ll_backend__llds_out__llds_out_file__V_89_89;
#line 1575 "llds_out_file.m"
                                                MR_Word ll_backend__llds_out__llds_out_file__V_91_91;

#line 1574 "llds_out_file.m"
                                                {
#line 1574 "llds_out_file.m"
                                                  ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__LoopControlRval_86, &ll_backend__llds_out__llds_out_file__LoopControlRvalCodeAddrs_88, &ll_backend__llds_out__llds_out_file__V_89_89);
                                                }
#line 1575 "llds_out_file.m"
                                                {
#line 1575 "llds_out_file.m"
                                                  ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__SlotLval_87, &ll_backend__llds_out__llds_out_file__SlotLvalCodeAddrs_90, &ll_backend__llds_out__llds_out_file__V_91_91);
                                                }
#line 1576 "llds_out_file.m"
                                                {
#line 1576 "llds_out_file.m"
                                                  ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__LoopControlRvalCodeAddrs_88, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_119_119);
                                                }
#line 1577 "llds_out_file.m"
                                                {
#line 1577 "llds_out_file.m"
                                                  ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__SlotLvalCodeAddrs_90, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_119_119, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_120_120);
                                                }
#line 1578 "llds_out_file.m"
                                                {
#line 1578 "llds_out_file.m"
                                                  mercury__set_tree234__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_161)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_120_120, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                                                }
#line 1579 "llds_out_file.m"
                                                ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1573 "llds_out_file.m"
                                              }
#line 1456 "llds_out_file.m"
                                            else
#line 1456 "llds_out_file.m"
                                              if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1486 "llds_out_file.m"
                                                {
#line 1486 "llds_out_file.m"
                                                  MR_Word ll_backend__llds_out__llds_out_file__Continuation_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1486 "llds_out_file.m"
                                                  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_139_139;
#line 1486 "llds_out_file.m"
                                                  MR_Word ll_backend__llds_out__llds_out_file__Target_152 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1486 "llds_out_file.m"
                                                  MR_Word ll_backend__llds_out__llds_out_file__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 3)));
#line 1486 "llds_out_file.m"
                                                  MR_Word ll_backend__llds_out__llds_out_file__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 4)));
#line 1486 "llds_out_file.m"
                                                  MR_Word ll_backend__llds_out__llds_out_file__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 5)));
#line 1486 "llds_out_file.m"
                                                  MR_Word ll_backend__llds_out__llds_out_file__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 6)));

#line 1487 "llds_out_file.m"
                                                  {
#line 1487 "llds_out_file.m"
                                                    ll_backend__llds_out__llds_out_file__delete_any_label_3_p_0(ll_backend__llds_out__llds_out_file__Target_152, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_139_139);
                                                  }
#line 1488 "llds_out_file.m"
                                                  {
#line 1488 "llds_out_file.m"
                                                    ll_backend__llds_out__llds_out_file__delete_any_label_3_p_0(ll_backend__llds_out__llds_out_file__Continuation_27, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_139_139, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                                                  }
#line 1489 "llds_out_file.m"
                                                  ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1486 "llds_out_file.m"
                                                }
#line 1456 "llds_out_file.m"
                                              else
#line 1456 "llds_out_file.m"
                                                if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 1524 "llds_out_file.m"
                                                  {
#line 1524 "llds_out_file.m"
                                                    MR_Word ll_backend__llds_out__llds_out_file__Lval_198 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1524 "llds_out_file.m"
                                                    MR_Word ll_backend__llds_out__llds_out_file__LvalCodeAddrs_199;
#line 1525 "llds_out_file.m"
                                                    MR_Word ll_backend__llds_out__llds_out_file__V_196_196;

#line 1525 "llds_out_file.m"
                                                    {
#line 1525 "llds_out_file.m"
                                                      ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Lval_198, &ll_backend__llds_out__llds_out_file__LvalCodeAddrs_199, &ll_backend__llds_out__llds_out_file__V_196_196);
                                                    }
#line 1526 "llds_out_file.m"
                                                    {
#line 1526 "llds_out_file.m"
                                                      ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__LvalCodeAddrs_199, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                                                    }
#line 1527 "llds_out_file.m"
                                                    ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1524 "llds_out_file.m"
                                                  }
#line 1456 "llds_out_file.m"
                                                else
#line 1456 "llds_out_file.m"
                                                  if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 22))))
#line 1524 "llds_out_file.m"
                                                    {
#line 1524 "llds_out_file.m"
                                                      MR_Word ll_backend__llds_out__llds_out_file__Lval_202 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1524 "llds_out_file.m"
                                                      MR_Word ll_backend__llds_out__llds_out_file__LvalCodeAddrs_203;
#line 1525 "llds_out_file.m"
                                                      MR_Word ll_backend__llds_out__llds_out_file__V_200_200;

#line 1525 "llds_out_file.m"
                                                      {
#line 1525 "llds_out_file.m"
                                                        ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Lval_202, &ll_backend__llds_out__llds_out_file__LvalCodeAddrs_203, &ll_backend__llds_out__llds_out_file__V_200_200);
                                                      }
#line 1526 "llds_out_file.m"
                                                      {
#line 1526 "llds_out_file.m"
                                                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__LvalCodeAddrs_203, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                                                      }
#line 1527 "llds_out_file.m"
                                                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1524 "llds_out_file.m"
                                                    }
#line 1456 "llds_out_file.m"
                                                  else
#line 1456 "llds_out_file.m"
                                                    if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1497 "llds_out_file.m"
                                                      {
#line 1497 "llds_out_file.m"
                                                        MR_Word ll_backend__llds_out__llds_out_file__MaybeNextCodeAddr_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1497 "llds_out_file.m"
                                                        MR_Word ll_backend__llds_out__llds_out_file__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));

#line 1501 "llds_out_file.m"
                                                        if ((ll_backend__llds_out__llds_out_file__MaybeNextCodeAddr_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1502 "llds_out_file.m"
                                                          ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4;
#line 1501 "llds_out_file.m"
                                                        else
#line 1499 "llds_out_file.m"
                                                          {
#line 1499 "llds_out_file.m"
                                                            MR_Word ll_backend__llds_out__llds_out_file__NextCodeAddr_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__MaybeNextCodeAddr_36, (MR_Integer) 0)));

#line 1500 "llds_out_file.m"
                                                            {
#line 1500 "llds_out_file.m"
                                                              ll_backend__llds_out__llds_out_file__delete_any_label_3_p_0(ll_backend__llds_out__llds_out_file__NextCodeAddr_37, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                                                            }
#line 1499 "llds_out_file.m"
                                                          }
#line 1504 "llds_out_file.m"
                                                        ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1497 "llds_out_file.m"
                                                      }
#line 1456 "llds_out_file.m"
                                                    else
#line 1456 "llds_out_file.m"
                                                      if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 23))))
#line 1534 "llds_out_file.m"
                                                        {
#line 1534 "llds_out_file.m"
                                                          MR_Word ll_backend__llds_out__llds_out_file__Rval_206 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1534 "llds_out_file.m"
                                                          MR_Word ll_backend__llds_out__llds_out_file__RvalCodeAddrs_207;
#line 1535 "llds_out_file.m"
                                                          MR_Word ll_backend__llds_out__llds_out_file__V_204_204;

#line 1535 "llds_out_file.m"
                                                          {
#line 1535 "llds_out_file.m"
                                                            ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Rval_206, &ll_backend__llds_out__llds_out_file__RvalCodeAddrs_207, &ll_backend__llds_out__llds_out_file__V_204_204);
                                                          }
#line 1536 "llds_out_file.m"
                                                          {
#line 1536 "llds_out_file.m"
                                                            ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__RvalCodeAddrs_207, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                                                          }
#line 1537 "llds_out_file.m"
                                                          ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1534 "llds_out_file.m"
                                                        }
#line 1456 "llds_out_file.m"
                                                      else
#line 1456 "llds_out_file.m"
                                                        if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 17))))
#line 1564 "llds_out_file.m"
                                                          {
#line 1564 "llds_out_file.m"
                                                            MR_Word ll_backend__llds_out__llds_out_file__NumLval_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 4)));
#line 1564 "llds_out_file.m"
                                                            MR_Word ll_backend__llds_out__llds_out_file__AddrLval_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 5)));
#line 1564 "llds_out_file.m"
                                                            MR_Word ll_backend__llds_out__llds_out_file__NumLvalCodeAddrs_82;
#line 1564 "llds_out_file.m"
                                                            MR_Word ll_backend__llds_out__llds_out_file__AddrLvalCodeAddrs_84;
#line 1564 "llds_out_file.m"
                                                            MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_122_122;
#line 1564 "llds_out_file.m"
                                                            MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_123_123;
#line 1564 "llds_out_file.m"
                                                            MR_Word ll_backend__llds_out__llds_out_file__RegionIdRval_159 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 3)));
#line 1564 "llds_out_file.m"
                                                            MR_Word ll_backend__llds_out__llds_out_file__RegionIdRvalCodeAddrs_160;
#line 1564 "llds_out_file.m"
                                                            MR_Word ll_backend__llds_out__llds_out_file__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1564 "llds_out_file.m"
                                                            MR_Word ll_backend__llds_out__llds_out_file__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1565 "llds_out_file.m"
                                                            MR_Word ll_backend__llds_out__llds_out_file__V_81_81;
#line 1566 "llds_out_file.m"
                                                            MR_Word ll_backend__llds_out__llds_out_file__V_83_83;
#line 1567 "llds_out_file.m"
                                                            MR_Word ll_backend__llds_out__llds_out_file__V_85_85;

#line 1565 "llds_out_file.m"
                                                            {
#line 1565 "llds_out_file.m"
                                                              ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__RegionIdRval_159, &ll_backend__llds_out__llds_out_file__RegionIdRvalCodeAddrs_160, &ll_backend__llds_out__llds_out_file__V_81_81);
                                                            }
#line 1566 "llds_out_file.m"
                                                            {
#line 1566 "llds_out_file.m"
                                                              ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__NumLval_79, &ll_backend__llds_out__llds_out_file__NumLvalCodeAddrs_82, &ll_backend__llds_out__llds_out_file__V_83_83);
                                                            }
#line 1567 "llds_out_file.m"
                                                            {
#line 1567 "llds_out_file.m"
                                                              ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__AddrLval_80, &ll_backend__llds_out__llds_out_file__AddrLvalCodeAddrs_84, &ll_backend__llds_out__llds_out_file__V_85_85);
                                                            }
#line 1568 "llds_out_file.m"
                                                            {
#line 1568 "llds_out_file.m"
                                                              ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__RegionIdRvalCodeAddrs_160, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_122_122);
                                                            }
#line 1569 "llds_out_file.m"
                                                            {
#line 1569 "llds_out_file.m"
                                                              ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__NumLvalCodeAddrs_82, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_122_122, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_123_123);
                                                            }
#line 1570 "llds_out_file.m"
                                                            {
#line 1570 "llds_out_file.m"
                                                              ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__AddrLvalCodeAddrs_84, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_123_123, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                                                            }
#line 1571 "llds_out_file.m"
                                                            ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1564 "llds_out_file.m"
                                                          }
#line 1456 "llds_out_file.m"
                                                        else
#line 1456 "llds_out_file.m"
                                                          if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 18))))
#line 1534 "llds_out_file.m"
                                                            {
#line 1534 "llds_out_file.m"
                                                              MR_Word ll_backend__llds_out__llds_out_file__Rval_210 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 3)));
#line 1534 "llds_out_file.m"
                                                              MR_Word ll_backend__llds_out__llds_out_file__RvalCodeAddrs_211;
#line 1531 "llds_out_file.m"
                                                              MR_Word ll_backend__llds_out__llds_out_file__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1531 "llds_out_file.m"
                                                              MR_Word ll_backend__llds_out__llds_out_file__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1535 "llds_out_file.m"
                                                              MR_Word ll_backend__llds_out__llds_out_file__V_208_208;

#line 1535 "llds_out_file.m"
                                                              {
#line 1535 "llds_out_file.m"
                                                                ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Rval_210, &ll_backend__llds_out__llds_out_file__RvalCodeAddrs_211, &ll_backend__llds_out__llds_out_file__V_208_208);
                                                              }
#line 1536 "llds_out_file.m"
                                                              {
#line 1536 "llds_out_file.m"
                                                                ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__RvalCodeAddrs_211, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                                                              }
#line 1537 "llds_out_file.m"
                                                              ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1534 "llds_out_file.m"
                                                            }
#line 1456 "llds_out_file.m"
                                                          else
#line 1456 "llds_out_file.m"
                                                            if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 21))))
#line 1534 "llds_out_file.m"
                                                              {
#line 1534 "llds_out_file.m"
                                                                MR_Word ll_backend__llds_out__llds_out_file__Rval_214 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1534 "llds_out_file.m"
                                                                MR_Word ll_backend__llds_out__llds_out_file__RvalCodeAddrs_215;
#line 1532 "llds_out_file.m"
                                                                MR_Word ll_backend__llds_out__llds_out_file__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1535 "llds_out_file.m"
                                                                MR_Word ll_backend__llds_out__llds_out_file__V_212_212;

#line 1535 "llds_out_file.m"
                                                                {
#line 1535 "llds_out_file.m"
                                                                  ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Rval_214, &ll_backend__llds_out__llds_out_file__RvalCodeAddrs_215, &ll_backend__llds_out__llds_out_file__V_212_212);
                                                                }
#line 1536 "llds_out_file.m"
                                                                {
#line 1536 "llds_out_file.m"
                                                                  ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__RvalCodeAddrs_215, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                                                                }
#line 1537 "llds_out_file.m"
                                                                ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1534 "llds_out_file.m"
                                                              }
#line 1456 "llds_out_file.m"
                                                            else
#line 1456 "llds_out_file.m"
                                                              if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 1534 "llds_out_file.m"
                                                                {
#line 1534 "llds_out_file.m"
                                                                  MR_Word ll_backend__llds_out__llds_out_file__Rval_218 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1534 "llds_out_file.m"
                                                                  MR_Word ll_backend__llds_out__llds_out_file__RvalCodeAddrs_219;
#line 1535 "llds_out_file.m"
                                                                  MR_Word ll_backend__llds_out__llds_out_file__V_216_216;

#line 1535 "llds_out_file.m"
                                                                  {
#line 1535 "llds_out_file.m"
                                                                    ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Rval_218, &ll_backend__llds_out__llds_out_file__RvalCodeAddrs_219, &ll_backend__llds_out__llds_out_file__V_216_216);
                                                                  }
#line 1536 "llds_out_file.m"
                                                                  {
#line 1536 "llds_out_file.m"
                                                                    ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__RvalCodeAddrs_219, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                                                                  }
#line 1537 "llds_out_file.m"
                                                                  ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1534 "llds_out_file.m"
                                                                }
#line 1456 "llds_out_file.m"
                                                              else
#line 1456 "llds_out_file.m"
                                                                if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 1524 "llds_out_file.m"
                                                                  {
#line 1524 "llds_out_file.m"
                                                                    MR_Word ll_backend__llds_out__llds_out_file__Lval_222 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1524 "llds_out_file.m"
                                                                    MR_Word ll_backend__llds_out__llds_out_file__LvalCodeAddrs_223;
#line 1525 "llds_out_file.m"
                                                                    MR_Word ll_backend__llds_out__llds_out_file__V_220_220;

#line 1525 "llds_out_file.m"
                                                                    {
#line 1525 "llds_out_file.m"
                                                                      ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Lval_222, &ll_backend__llds_out__llds_out_file__LvalCodeAddrs_223, &ll_backend__llds_out__llds_out_file__V_220_220);
                                                                    }
#line 1526 "llds_out_file.m"
                                                                    {
#line 1526 "llds_out_file.m"
                                                                      ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__LvalCodeAddrs_223, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                                                                    }
#line 1527 "llds_out_file.m"
                                                                    ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1524 "llds_out_file.m"
                                                                  }
#line 1456 "llds_out_file.m"
                                                                else
#line 1456 "llds_out_file.m"
                                                                  if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 1524 "llds_out_file.m"
                                                                    {
#line 1524 "llds_out_file.m"
                                                                      MR_Word ll_backend__llds_out__llds_out_file__Lval_226 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1524 "llds_out_file.m"
                                                                      MR_Word ll_backend__llds_out__llds_out_file__LvalCodeAddrs_227;
#line 1525 "llds_out_file.m"
                                                                      MR_Word ll_backend__llds_out__llds_out_file__V_224_224;

#line 1525 "llds_out_file.m"
                                                                      {
#line 1525 "llds_out_file.m"
                                                                        ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Lval_226, &ll_backend__llds_out__llds_out_file__LvalCodeAddrs_227, &ll_backend__llds_out__llds_out_file__V_224_224);
                                                                      }
#line 1526 "llds_out_file.m"
                                                                      {
#line 1526 "llds_out_file.m"
                                                                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__LvalCodeAddrs_227, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                                                                      }
#line 1527 "llds_out_file.m"
                                                                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1524 "llds_out_file.m"
                                                                    }
#line 1456 "llds_out_file.m"
                                                                  else
#line 1456 "llds_out_file.m"
                                                                    if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 20))))
#line 1524 "llds_out_file.m"
                                                                      {
#line 1524 "llds_out_file.m"
                                                                        MR_Word ll_backend__llds_out__llds_out_file__Lval_230 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1524 "llds_out_file.m"
                                                                        MR_Word ll_backend__llds_out__llds_out_file__LvalCodeAddrs_231;
#line 1525 "llds_out_file.m"
                                                                        MR_Word ll_backend__llds_out__llds_out_file__V_228_228;

#line 1525 "llds_out_file.m"
                                                                        {
#line 1525 "llds_out_file.m"
                                                                          ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Lval_230, &ll_backend__llds_out__llds_out_file__LvalCodeAddrs_231, &ll_backend__llds_out__llds_out_file__V_228_228);
                                                                        }
#line 1526 "llds_out_file.m"
                                                                        {
#line 1526 "llds_out_file.m"
                                                                          ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__LvalCodeAddrs_231, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                                                                        }
#line 1527 "llds_out_file.m"
                                                                        ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1524 "llds_out_file.m"
                                                                      }
#line 1456 "llds_out_file.m"
                                                                    else
#line 1606 "llds_out_file.m"
                                                                      {
#line 1607 "llds_out_file.m"
                                                                        ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1607 "llds_out_file.m"
                                                                        ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4;
#line 1606 "llds_out_file.m"
                                                                      }
#line 1609 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 1609 "llds_out_file.m"
            {
#line 1609 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__Instrs0_12;
#line 1609 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0__tmp_copy_2 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19;
#line 1609 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0__tmp_copy_4 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145;

#line 1609 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0__tmp_copy_4;
#line 1609 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0__tmp_copy_2;
#line 1609 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 1609 "llds_out_file.m"
            }
#line 1609 "llds_out_file.m"
            continue;
#line 1447 "llds_out_file.m"
          }
#line 1445 "llds_out_file.m"
      }
#line 1445 "llds_out_file.m"
      break;
#line 1445 "llds_out_file.m"
    }
#line 1441 "llds_out_file.m"
}

#line 1407 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__count_while_label_in_block_4_p_0(
#line 1407 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Label_1,
#line 1407 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2,
#line 1407 "llds_out_file.m"
  MR_Integer ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_3,
#line 1407 "llds_out_file.m"
  MR_Integer * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_4)
#line 1407 "llds_out_file.m"
{
#line 1410 "llds_out_file.m"
  while (MR_TRUE)
#line 1410 "llds_out_file.m"
    {
#line 1410 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 1410 "llds_out_file.m"
      {
#line 1410 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 1410 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1410 "llds_out_file.m"
          *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_4 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_3;
#line 1410 "llds_out_file.m"
        else
#line 1411 "llds_out_file.m"
          {
#line 1411 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Instr0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 0)));
#line 1411 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Instrs0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 1)));
#line 1411 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Uinstr0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Instr0_10, (MR_Integer) 0)));
#line 1412 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Instr0_10, (MR_Integer) 1)));
#line 1413 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_15_15;

#line 1413 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_13, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1413 "llds_out_file.m"
            if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1413 "llds_out_file.m"
              {
#line 1413 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_13, (MR_Integer) 1)));
#line 1414 "llds_out_file.m"
                {
#line 1414 "llds_out_file.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_out.llds_out_file", (MR_String) "predicate \140ll_backend.llds_out.llds_out_file.count_while_label_in_block\'/4", (MR_String) "label in block");
#line 1414 "llds_out_file.m"
                  return;
                }
#line 1413 "llds_out_file.m"
              }
#line 1413 "llds_out_file.m"
            else
#line 1424 "llds_out_file.m"
              {
#line 1424 "llds_out_file.m"
                MR_Integer ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_26_26;
#line 1416 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__V_25_25;
#line 1416 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__V_35_35;

#line 1416 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_13, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 1416 "llds_out_file.m"
                if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1416 "llds_out_file.m"
                  {
#line 1416 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_13, (MR_Integer) 1)));
#line 1416 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__V_25_25)) == (MR_mktag((MR_Integer) 1)));
#line 1416 "llds_out_file.m"
                    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1416 "llds_out_file.m"
                      {
#line 1416 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__V_25_25, (MR_Integer) 0)));
#line 1416 "llds_out_file.m"
                        {
#line 1416 "llds_out_file.m"
                          ll_backend__llds_out__llds_out_file__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__llds_out__llds_out_file__Label_1, ll_backend__llds_out__llds_out_file__V_35_35);
                        }
#line 1416 "llds_out_file.m"
                      }
#line 1416 "llds_out_file.m"
                  }
#line 1418 "llds_out_file.m"
                if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1417 "llds_out_file.m"
                  {
#line 1417 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_26_26 = (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_3 + (MR_Integer) 1);
#line 1417 "llds_out_file.m"
                  }
#line 1418 "llds_out_file.m"
                else
#line 1420 "llds_out_file.m"
                  {
#line 1418 "llds_out_file.m"
                    MR_Word ll_backend__llds_out__llds_out_file__V_28_28;
#line 1418 "llds_out_file.m"
                    MR_Word ll_backend__llds_out__llds_out_file__V_36_36;
#line 1418 "llds_out_file.m"
                    MR_Word ll_backend__llds_out__llds_out_file__V_16_16;

#line 1418 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_13, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 1418 "llds_out_file.m"
                    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1418 "llds_out_file.m"
                      {
#line 1418 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_13, (MR_Integer) 1)));
#line 1418 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_13, (MR_Integer) 2)));
#line 1418 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 1418 "llds_out_file.m"
                        if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1418 "llds_out_file.m"
                          {
#line 1418 "llds_out_file.m"
                            ll_backend__llds_out__llds_out_file__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__V_28_28, (MR_Integer) 0)));
#line 1418 "llds_out_file.m"
                            {
#line 1418 "llds_out_file.m"
                              ll_backend__llds_out__llds_out_file__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__llds_out__llds_out_file__Label_1, ll_backend__llds_out__llds_out_file__V_36_36);
                            }
#line 1418 "llds_out_file.m"
                          }
#line 1418 "llds_out_file.m"
                      }
#line 1420 "llds_out_file.m"
                    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1419 "llds_out_file.m"
                      {
#line 1419 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_26_26 = (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_3 + (MR_Integer) 1);
#line 1419 "llds_out_file.m"
                      }
#line 1420 "llds_out_file.m"
                    else
#line 1422 "llds_out_file.m"
                      {
#line 1420 "llds_out_file.m"
                        MR_Integer ll_backend__llds_out__llds_out_file__V_17_17;
#line 1420 "llds_out_file.m"
                        MR_Integer ll_backend__llds_out__llds_out_file__V_18_18;
#line 1420 "llds_out_file.m"
                        MR_Word ll_backend__llds_out__llds_out_file__V_19_19;

#line 1420 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_13, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1420 "llds_out_file.m"
                        if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1420 "llds_out_file.m"
                          {
#line 1420 "llds_out_file.m"
                            ll_backend__llds_out__llds_out_file__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_13, (MR_Integer) 1)));
#line 1420 "llds_out_file.m"
                            ll_backend__llds_out__llds_out_file__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_13, (MR_Integer) 2)));
#line 1420 "llds_out_file.m"
                            ll_backend__llds_out__llds_out_file__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_13, (MR_Integer) 3)));
#line 1421 "llds_out_file.m"
                            {
#line 1421 "llds_out_file.m"
                              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_out.llds_out_file", (MR_String) "predicate \140ll_backend.llds_out.llds_out_file.count_while_label_in_block\'/4", (MR_String) "block in block");
#line 1421 "llds_out_file.m"
                              return;
                            }
#line 1420 "llds_out_file.m"
                          }
#line 1420 "llds_out_file.m"
                        else
#line 1423 "llds_out_file.m"
                          {
#line 1423 "llds_out_file.m"
                          }
#line 1423 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_26_26 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_3;
#line 1422 "llds_out_file.m"
                      }
#line 1420 "llds_out_file.m"
                  }
#line 1425 "llds_out_file.m"
                /* direct tailcall eliminated */
#line 1425 "llds_out_file.m"
                {
#line 1425 "llds_out_file.m"
                  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_file__Instrs0_11;
#line 1425 "llds_out_file.m"
                  MR_Integer ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0__tmp_copy_3 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_26_26;

#line 1425 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_3 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0__tmp_copy_3;
#line 1425 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__HeadVar__2_2 = ll_backend__llds_out__llds_out_file__HeadVar__2__tmp_copy_2;
#line 1425 "llds_out_file.m"
                }
#line 1425 "llds_out_file.m"
                continue;
#line 1424 "llds_out_file.m"
              }
#line 1411 "llds_out_file.m"
          }
#line 1410 "llds_out_file.m"
      }
#line 1410 "llds_out_file.m"
      break;
#line 1410 "llds_out_file.m"
    }
#line 1407 "llds_out_file.m"
}

#line 1386 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__is_while_label_5_p_0(
#line 1386 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Label_1,
#line 1386 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2,
#line 1386 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__HeadVar__3_3,
#line 1386 "llds_out_file.m"
  MR_Integer ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_4,
#line 1386 "llds_out_file.m"
  MR_Integer * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_5)
#line 1386 "llds_out_file.m"
{
#line 1389 "llds_out_file.m"
  while (MR_TRUE)
#line 1389 "llds_out_file.m"
    {
#line 1389 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 1389 "llds_out_file.m"
      {
#line 1389 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 1389 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1389 "llds_out_file.m"
          {
#line 1389 "llds_out_file.m"
            *ll_backend__llds_out__llds_out_file__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1389 "llds_out_file.m"
            *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_5 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_4;
#line 1389 "llds_out_file.m"
          }
#line 1389 "llds_out_file.m"
        else
#line 1390 "llds_out_file.m"
          {
#line 1390 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Instr0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 0)));
#line 1390 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Instrs0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 1)));
#line 1390 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Uinstr0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Instr0_11, (MR_Integer) 0)));
#line 1391 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Instr0_11, (MR_Integer) 1)));
#line 1392 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_17_17;

#line 1392 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_15, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1392 "llds_out_file.m"
            if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1392 "llds_out_file.m"
              {
#line 1392 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_15, (MR_Integer) 1)));
#line 1393 "llds_out_file.m"
                *ll_backend__llds_out__llds_out_file__HeadVar__3_3 = ll_backend__llds_out__llds_out_file__HeadVar__2_2;
#line 1393 "llds_out_file.m"
                *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_5 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_4;
#line 1392 "llds_out_file.m"
              }
#line 1392 "llds_out_file.m"
            else
#line 1403 "llds_out_file.m"
              {
#line 1403 "llds_out_file.m"
                MR_Integer ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_25_25;
#line 1395 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__V_24_24;
#line 1395 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__V_32_32;

#line 1395 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_15, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 1395 "llds_out_file.m"
                if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1395 "llds_out_file.m"
                  {
#line 1395 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_15, (MR_Integer) 1)));
#line 1395 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__V_24_24)) == (MR_mktag((MR_Integer) 1)));
#line 1395 "llds_out_file.m"
                    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1395 "llds_out_file.m"
                      {
#line 1395 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__V_24_24, (MR_Integer) 0)));
#line 1395 "llds_out_file.m"
                        {
#line 1395 "llds_out_file.m"
                          ll_backend__llds_out__llds_out_file__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__llds_out__llds_out_file__Label_1, ll_backend__llds_out__llds_out_file__V_32_32);
                        }
#line 1395 "llds_out_file.m"
                      }
#line 1395 "llds_out_file.m"
                  }
#line 1397 "llds_out_file.m"
                if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1396 "llds_out_file.m"
                  {
#line 1396 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_25_25 = (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_4 + (MR_Integer) 1);
#line 1396 "llds_out_file.m"
                  }
#line 1397 "llds_out_file.m"
                else
#line 1399 "llds_out_file.m"
                  {
#line 1397 "llds_out_file.m"
                    MR_Word ll_backend__llds_out__llds_out_file__V_27_27;
#line 1397 "llds_out_file.m"
                    MR_Word ll_backend__llds_out__llds_out_file__V_33_33;
#line 1397 "llds_out_file.m"
                    MR_Word ll_backend__llds_out__llds_out_file__V_18_18;

#line 1397 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_15, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 1397 "llds_out_file.m"
                    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1397 "llds_out_file.m"
                      {
#line 1397 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_15, (MR_Integer) 1)));
#line 1397 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_15, (MR_Integer) 2)));
#line 1397 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__V_27_27)) == (MR_mktag((MR_Integer) 1)));
#line 1397 "llds_out_file.m"
                        if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1397 "llds_out_file.m"
                          {
#line 1397 "llds_out_file.m"
                            ll_backend__llds_out__llds_out_file__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__V_27_27, (MR_Integer) 0)));
#line 1397 "llds_out_file.m"
                            {
#line 1397 "llds_out_file.m"
                              ll_backend__llds_out__llds_out_file__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__llds_out__llds_out_file__Label_1, ll_backend__llds_out__llds_out_file__V_33_33);
                            }
#line 1397 "llds_out_file.m"
                          }
#line 1397 "llds_out_file.m"
                      }
#line 1399 "llds_out_file.m"
                    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1398 "llds_out_file.m"
                      {
#line 1398 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_25_25 = (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_4 + (MR_Integer) 1);
#line 1398 "llds_out_file.m"
                      }
#line 1399 "llds_out_file.m"
                    else
#line 1401 "llds_out_file.m"
                      {
#line 1401 "llds_out_file.m"
                        MR_Word ll_backend__llds_out__llds_out_file__BlockInstrs_21;
#line 1399 "llds_out_file.m"
                        MR_Integer ll_backend__llds_out__llds_out_file__V_19_19;
#line 1399 "llds_out_file.m"
                        MR_Integer ll_backend__llds_out__llds_out_file__V_20_20;

#line 1399 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_15, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1399 "llds_out_file.m"
                        if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1399 "llds_out_file.m"
                          {
#line 1399 "llds_out_file.m"
                            ll_backend__llds_out__llds_out_file__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_15, (MR_Integer) 1)));
#line 1399 "llds_out_file.m"
                            ll_backend__llds_out__llds_out_file__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_15, (MR_Integer) 2)));
#line 1399 "llds_out_file.m"
                            ll_backend__llds_out__llds_out_file__BlockInstrs_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_15, (MR_Integer) 3)));
#line 1400 "llds_out_file.m"
                            {
#line 1400 "llds_out_file.m"
                              ll_backend__llds_out__llds_out_file__count_while_label_in_block_4_p_0(ll_backend__llds_out__llds_out_file__Label_1, ll_backend__llds_out__llds_out_file__BlockInstrs_21, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_25_25);
                            }
#line 1399 "llds_out_file.m"
                          }
#line 1399 "llds_out_file.m"
                        else
#line 1400 "llds_out_file.m"
                          ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_25_25 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_4;
#line 1401 "llds_out_file.m"
                      }
#line 1399 "llds_out_file.m"
                  }
#line 1404 "llds_out_file.m"
                /* direct tailcall eliminated */
#line 1404 "llds_out_file.m"
                {
#line 1404 "llds_out_file.m"
                  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_file__Instrs0_12;
#line 1404 "llds_out_file.m"
                  MR_Integer ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0__tmp_copy_4 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_25_25;

#line 1404 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_4 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0__tmp_copy_4;
#line 1404 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__HeadVar__2_2 = ll_backend__llds_out__llds_out_file__HeadVar__2__tmp_copy_2;
#line 1404 "llds_out_file.m"
                }
#line 1404 "llds_out_file.m"
                continue;
#line 1403 "llds_out_file.m"
              }
#line 1390 "llds_out_file.m"
          }
#line 1389 "llds_out_file.m"
      }
#line 1389 "llds_out_file.m"
      break;
#line 1389 "llds_out_file.m"
    }
#line 1386 "llds_out_file.m"
}

#line 1370 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__find_while_labels_3_p_0(
#line 1370 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 1370 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_WhileSet_0_2,
#line 1370 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_WhileSet_3)
#line 1370 "llds_out_file.m"
{
#line 1373 "llds_out_file.m"
  while (MR_TRUE)
#line 1373 "llds_out_file.m"
    {
#line 1373 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 1373 "llds_out_file.m"
      {
#line 1373 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 1373 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1373 "llds_out_file.m"
          *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_WhileSet_3 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_WhileSet_0_2;
#line 1373 "llds_out_file.m"
        else
#line 1374 "llds_out_file.m"
          {
#line 1374 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Uinstr0_7;
#line 1374 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Instrs0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 1374 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 1374 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__V_8_8;
#line 1382 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Label_11;
#line 1382 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Instrs1_12;
#line 1376 "llds_out_file.m"
            MR_Integer ll_backend__llds_out__llds_out_file__UseCount_13;
#line 1376 "llds_out_file.m"
            MR_Integer ll_backend__llds_out__llds_out_file__V_17_17;
#line 1376 "llds_out_file.m"
            MR_Integer ll_backend__llds_out__llds_out_file__V_18_18;

#line 1374 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__Uinstr0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_16_16, (MR_Integer) 0)));
#line 1374 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_16_16, (MR_Integer) 1)));
#line 1376 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_7, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1376 "llds_out_file.m"
            if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1376 "llds_out_file.m"
              {
#line 1376 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__Label_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_7, (MR_Integer) 1)));
#line 1377 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__V_17_17 = (MR_Integer) 0;
#line 1377 "llds_out_file.m"
                {
#line 1377 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__is_while_label_5_p_0(ll_backend__llds_out__llds_out_file__Label_11, ll_backend__llds_out__llds_out_file__Instrs0_9, &ll_backend__llds_out__llds_out_file__Instrs1_12, ll_backend__llds_out__llds_out_file__V_17_17, &ll_backend__llds_out__llds_out_file__UseCount_13);
                }
#line 1378 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__V_18_18 = (MR_Integer) 0;
#line 1378 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__succeeded = (ll_backend__llds_out__llds_out_file__UseCount_13 > ll_backend__llds_out__llds_out_file__V_18_18);
#line 1376 "llds_out_file.m"
              }
#line 1382 "llds_out_file.m"
            if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1380 "llds_out_file.m"
              {
#line 1380 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_WhileSet_19_19;

#line 1380 "llds_out_file.m"
                {
#line 1380 "llds_out_file.m"
                  mercury__set_tree234__insert_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_11)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_WhileSet_0_2, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_WhileSet_19_19);
                }
#line 1381 "llds_out_file.m"
                /* direct tailcall eliminated */
#line 1381 "llds_out_file.m"
                {
#line 1381 "llds_out_file.m"
                  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__Instrs1_12;
#line 1381 "llds_out_file.m"
                  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_WhileSet_0__tmp_copy_2 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_WhileSet_19_19;

#line 1381 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__STATE_VARIABLE_WhileSet_0_2 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_WhileSet_0__tmp_copy_2;
#line 1381 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 1381 "llds_out_file.m"
                }
#line 1381 "llds_out_file.m"
                continue;
#line 1380 "llds_out_file.m"
              }
#line 1382 "llds_out_file.m"
            else
#line 1383 "llds_out_file.m"
              {
#line 1383 "llds_out_file.m"
                /* direct tailcall eliminated */
#line 1383 "llds_out_file.m"
                {
#line 1383 "llds_out_file.m"
                  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__Instrs0_9;

#line 1383 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 1383 "llds_out_file.m"
                }
#line 1383 "llds_out_file.m"
                continue;
#line 1383 "llds_out_file.m"
              }
#line 1374 "llds_out_file.m"
          }
#line 1373 "llds_out_file.m"
      }
#line 1373 "llds_out_file.m"
      break;
#line 1373 "llds_out_file.m"
    }
#line 1370 "llds_out_file.m"
}

#line 1320 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__find_cont_labels_3_p_0(
#line 1320 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 1320 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_0_2,
#line 1320 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_3)
#line 1320 "llds_out_file.m"
{
#line 1323 "llds_out_file.m"
  while (MR_TRUE)
#line 1323 "llds_out_file.m"
    {
#line 1323 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 1323 "llds_out_file.m"
      {
#line 1323 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 1323 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1323 "llds_out_file.m"
          *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_3 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_0_2;
#line 1323 "llds_out_file.m"
        else
#line 1324 "llds_out_file.m"
          {
#line 1324 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Instr_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 1324 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Instrs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 1324 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Uinstr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Instr_7, (MR_Integer) 0)));
#line 1324 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_35_35;
#line 1325 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Instr_7, (MR_Integer) 1)));
#line 1339 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__ContLabel_13;

#line 1329 "llds_out_file.m"
            if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1334 "llds_out_file.m"
              {
#line 1334 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__Const_21;
#line 1334 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 1)));
#line 1334 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 2)));
#line 1334 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__V_31_31;
#line 1334 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__V_20_20;

#line 1334 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__V_29_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__V_29_29, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 1334 "llds_out_file.m"
                if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1334 "llds_out_file.m"
                  {
#line 1334 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__V_29_29, (MR_Integer) 1)));
#line 1334 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__V_30_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__V_30_30, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1334 "llds_out_file.m"
                    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1334 "llds_out_file.m"
                      {
#line 1334 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__Const_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__V_30_30, (MR_Integer) 1)));
#line 1335 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Const_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Const_21, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1335 "llds_out_file.m"
                        if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1335 "llds_out_file.m"
                          {
#line 1335 "llds_out_file.m"
                            ll_backend__llds_out__llds_out_file__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Const_21, (MR_Integer) 1)));
#line 1335 "llds_out_file.m"
                            ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__V_31_31)) == (MR_mktag((MR_Integer) 1)));
#line 1335 "llds_out_file.m"
                            if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1335 "llds_out_file.m"
                              ll_backend__llds_out__llds_out_file__ContLabel_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__V_31_31, (MR_Integer) 0)));
#line 1335 "llds_out_file.m"
                          }
#line 1334 "llds_out_file.m"
                      }
#line 1334 "llds_out_file.m"
                  }
#line 1334 "llds_out_file.m"
              }
#line 1329 "llds_out_file.m"
            else
#line 1329 "llds_out_file.m"
              if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 0)))) == (MR_Integer) 30))))
#line 1332 "llds_out_file.m"
                {
#line 1332 "llds_out_file.m"
                  MR_Word ll_backend__llds_out__llds_out_file__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 1)));

#line 1332 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__ContLabel_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 2)));
#line 1332 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__succeeded = MR_TRUE;
#line 1332 "llds_out_file.m"
                }
#line 1329 "llds_out_file.m"
              else
#line 1329 "llds_out_file.m"
                if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1328 "llds_out_file.m"
                  {
#line 1328 "llds_out_file.m"
                    MR_Word ll_backend__llds_out__llds_out_file__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 2)));
#line 1328 "llds_out_file.m"
                    MR_Word ll_backend__llds_out__llds_out_file__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 1)));
#line 1328 "llds_out_file.m"
                    MR_Word ll_backend__llds_out__llds_out_file__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 3)));
#line 1328 "llds_out_file.m"
                    MR_Word ll_backend__llds_out__llds_out_file__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 4)));
#line 1328 "llds_out_file.m"
                    MR_Word ll_backend__llds_out__llds_out_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 5)));
#line 1328 "llds_out_file.m"
                    MR_Word ll_backend__llds_out__llds_out_file__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 6)));

#line 1328 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 1328 "llds_out_file.m"
                    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1328 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__ContLabel_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__V_34_34, (MR_Integer) 0)));
#line 1328 "llds_out_file.m"
                  }
#line 1329 "llds_out_file.m"
                else
#line 1329 "llds_out_file.m"
                  if (((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1330 "llds_out_file.m"
                    {
#line 1330 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 2)));
#line 1330 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_33_33;
#line 1330 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 1)));

#line 1330 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__V_32_32)) == (MR_mktag((MR_Integer) 1)));
#line 1330 "llds_out_file.m"
                      if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1330 "llds_out_file.m"
                        {
#line 1330 "llds_out_file.m"
                          ll_backend__llds_out__llds_out_file__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__V_32_32, (MR_Integer) 0)));
#line 1330 "llds_out_file.m"
                          ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__V_33_33)) == (MR_mktag((MR_Integer) 1)));
#line 1330 "llds_out_file.m"
                          if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1330 "llds_out_file.m"
                            ll_backend__llds_out__llds_out_file__ContLabel_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__V_33_33, (MR_Integer) 0)));
#line 1330 "llds_out_file.m"
                        }
#line 1330 "llds_out_file.m"
                    }
#line 1329 "llds_out_file.m"
                  else
#line 1329 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__succeeded = MR_FALSE;
#line 1339 "llds_out_file.m"
            if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1338 "llds_out_file.m"
              {
#line 1338 "llds_out_file.m"
                {
#line 1338 "llds_out_file.m"
                  mercury__set_tree234__insert_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__llds_out__llds_out_file__ContLabel_13)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_0_2, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_35_35);
                }
#line 1338 "llds_out_file.m"
              }
#line 1339 "llds_out_file.m"
            else
#line 1343 "llds_out_file.m"
              {
#line 1343 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__Label1_23;
#line 1340 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__V_22_22;

#line 1340 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 0)))) == (MR_Integer) 29)));
#line 1340 "llds_out_file.m"
                if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1340 "llds_out_file.m"
                  {
#line 1340 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 1)));
#line 1340 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__Label1_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 2)));
#line 1342 "llds_out_file.m"
                    {
#line 1342 "llds_out_file.m"
                      mercury__set_tree234__insert_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__llds_out__llds_out_file__Label1_23)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_0_2, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_35_35);
                    }
#line 1340 "llds_out_file.m"
                  }
#line 1340 "llds_out_file.m"
                else
#line 1347 "llds_out_file.m"
                  {
#line 1347 "llds_out_file.m"
                    MR_Word ll_backend__llds_out__llds_out_file__Block_26;
#line 1344 "llds_out_file.m"
                    MR_Integer ll_backend__llds_out__llds_out_file__V_24_24;
#line 1344 "llds_out_file.m"
                    MR_Integer ll_backend__llds_out__llds_out_file__V_25_25;

#line 1344 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1344 "llds_out_file.m"
                    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1344 "llds_out_file.m"
                      {
#line 1344 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 1)));
#line 1344 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 2)));
#line 1344 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__Block_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 3)));
#line 1346 "llds_out_file.m"
                        {
#line 1346 "llds_out_file.m"
                          ll_backend__llds_out__llds_out_file__find_cont_labels_3_p_0(ll_backend__llds_out__llds_out_file__Block_26, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_0_2, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_35_35);
                        }
#line 1344 "llds_out_file.m"
                      }
#line 1344 "llds_out_file.m"
                    else
#line 1346 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_35_35 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_0_2;
#line 1347 "llds_out_file.m"
                  }
#line 1343 "llds_out_file.m"
              }
#line 1350 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 1350 "llds_out_file.m"
            {
#line 1350 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__Instrs_8;
#line 1350 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_0__tmp_copy_2 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_35_35;

#line 1350 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_0_2 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_0__tmp_copy_2;
#line 1350 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 1350 "llds_out_file.m"
            }
#line 1350 "llds_out_file.m"
            continue;
#line 1324 "llds_out_file.m"
          }
#line 1323 "llds_out_file.m"
      }
#line 1323 "llds_out_file.m"
      break;
#line 1323 "llds_out_file.m"
    }
#line 1320 "llds_out_file.m"
}

#line 1300 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__find_caller_label_2_p_0(
#line 1300 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 1300 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__CallerLabel_2)
#line 1300 "llds_out_file.m"
{
#line 1302 "llds_out_file.m"
  while (MR_TRUE)
#line 1302 "llds_out_file.m"
    {
#line 1302 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 1302 "llds_out_file.m"
      {
#line 1302 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 1302 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1302 "llds_out_file.m"
          {
#line 1303 "llds_out_file.m"
            {
#line 1303 "llds_out_file.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_out.llds_out_file", (MR_String) "predicate \140ll_backend.llds_out.llds_out_file.find_caller_label\'/2", (MR_String) "cannot find caller label");
#line 1303 "llds_out_file.m"
              return;
            }
#line 1302 "llds_out_file.m"
          }
#line 1302 "llds_out_file.m"
        else
#line 1304 "llds_out_file.m"
          {
#line 1304 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Uinstr_7;
#line 1304 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Instrs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 1304 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 1304 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__V_8_8;
#line 1313 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Label_11;

#line 1304 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__Uinstr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_16_16, (MR_Integer) 0)));
#line 1304 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_16_16, (MR_Integer) 1)));
#line 1305 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_7, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1305 "llds_out_file.m"
            if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1305 "llds_out_file.m"
              {
#line 1305 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__Label_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_7, (MR_Integer) 1)));
#line 1309 "llds_out_file.m"
                if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Label_11)) == (MR_mktag((MR_Integer) 1))))
#line 1311 "llds_out_file.m"
                  *ll_backend__llds_out__llds_out_file__CallerLabel_2 = ll_backend__llds_out__llds_out_file__Label_11;
#line 1309 "llds_out_file.m"
                else
#line 1307 "llds_out_file.m"
                  {
#line 1308 "llds_out_file.m"
                    {
#line 1308 "llds_out_file.m"
                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_out.llds_out_file", (MR_String) "predicate \140ll_backend.llds_out.llds_out_file.find_caller_label\'/2", (MR_String) "caller label is internal label");
#line 1308 "llds_out_file.m"
                      return;
                    }
#line 1307 "llds_out_file.m"
                  }
#line 1305 "llds_out_file.m"
              }
#line 1305 "llds_out_file.m"
            else
#line 1314 "llds_out_file.m"
              {
#line 1314 "llds_out_file.m"
                /* direct tailcall eliminated */
#line 1314 "llds_out_file.m"
                {
#line 1314 "llds_out_file.m"
                  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__Instrs_9;

#line 1314 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 1314 "llds_out_file.m"
                }
#line 1314 "llds_out_file.m"
                continue;
#line 1314 "llds_out_file.m"
              }
#line 1304 "llds_out_file.m"
          }
#line 1302 "llds_out_file.m"
      }
#line 1302 "llds_out_file.m"
      break;
#line 1302 "llds_out_file.m"
    }
#line 1300 "llds_out_file.m"
}

#line 1247 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_annotated_c_procedure_4_p_0(
#line 1247 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_5,
#line 1247 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__AnnotatedProc_6)
#line 1247 "llds_out_file.m"
{
#line 1250 "llds_out_file.m"
  {
#line 1250 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 1250 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__Proc_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__AnnotatedProc_6, (MR_Integer) 0)));
#line 1250 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__LabelOutputInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__AnnotatedProc_6, (MR_Integer) 1)));
#line 1250 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__Name_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_8, (MR_Integer) 0)));
#line 1250 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__Arity_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_8, (MR_Integer) 1)));
#line 1250 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__Instrs_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_8, (MR_Integer) 4)));
#line 1250 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__PredProcId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_8, (MR_Integer) 2)));
#line 1250 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__ProcId_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__PredProcId_13, (MR_Integer) 1)));
#line 1250 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__ModeNum_16;
#line 1250 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__LocalThreadEngineBase_17;
#line 1254 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_8, (MR_Integer) 3)));
#line 1254 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_8, (MR_Integer) 5)));
#line 1254 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_8, (MR_Integer) 6)));
#line 1254 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_8, (MR_Integer) 7)));
#line 1254 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_8, (MR_Integer) 8)));
#line 1258 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__PredProcId_13, (MR_Integer) 0)));
#line 1273 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_91_91;
#line 1273 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_92_92;
#line 1273 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_93_93;
#line 1273 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_94_94;
#line 1273 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_95_95;
#line 1273 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_96_96;
#line 1273 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_97_97;
#line 1273 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_98_98;
#line 1273 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_99_99;
#line 1273 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_100_100;
#line 1273 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_101_101;
#line 1273 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_102_102;
#line 1273 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_103_103;
#line 1273 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_104_104;
#line 1273 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_105_105;
#line 1273 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_106_106;
#line 1273 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_107_107;
#line 1273 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_108_108;
#line 1273 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_109_109;
#line 1273 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_110_110;
#line 1273 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_111_111;

#line 1259 "llds_out_file.m"
    {
#line 1259 "llds_out_file.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(ll_backend__llds_out__llds_out_file__ProcId_15, &ll_backend__llds_out__llds_out_file__ModeNum_16);
    }
#line 1261 "llds_out_file.m"
    {
#line 1261 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\n/*-------------------------------------");
    }
#line 1262 "llds_out_file.m"
    {
#line 1262 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "------------------------------------*/\n");
    }
#line 1263 "llds_out_file.m"
    {
#line 1263 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "/* code for \'");
    }
#line 1266 "llds_out_file.m"
    {
#line 1266 "llds_out_file.m"
      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__Name_10);
    }
#line 1267 "llds_out_file.m"
    {
#line 1267 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\'/");
    }
#line 1268 "llds_out_file.m"
    {
#line 1268 "llds_out_file.m"
      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_file__Arity_11);
    }
#line 1269 "llds_out_file.m"
    {
#line 1269 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) " mode ");
    }
#line 1270 "llds_out_file.m"
    {
#line 1270 "llds_out_file.m"
      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_file__ModeNum_16);
    }
#line 1271 "llds_out_file.m"
    {
#line 1271 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) " */\n");
    }
#line 1273 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 0)));
#line 1273 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_92_92 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 1)));
#line 1273 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_93_93 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 2)));
#line 1273 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 3)));
#line 1273 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 4)));
#line 1273 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 5)));
#line 1273 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)));
#line 1273 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_98_98 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 1273 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_99_99 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1273 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_100_100 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1273 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_101_101 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1273 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__LocalThreadEngineBase_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1273 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_102_102 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1273 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_103_103 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1273 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_104_104 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1273 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_105_105 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 1273 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_106_106 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 1273 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_107_107 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 1273 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_108_108 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 1273 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_109_109 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 1273 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_110_110 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 1273 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 8)));
#line 5635 "ll_backend.llds_out.llds_out_file.c"
    if ((ll_backend__llds_out__llds_out_file__LocalThreadEngineBase_17 == (MR_Integer) 0))
#line 1284 "llds_out_file.m"
      {
#line 1284 "llds_out_file.m"
        ll_backend__llds_out__llds_out_instr__output_instruction_list_6_p_0(ll_backend__llds_out__llds_out_file__Info_5, ll_backend__llds_out__llds_out_file__Instrs_12, ll_backend__llds_out__llds_out_file__LabelOutputInfo_9, (MR_Integer) 0);
#line 1284 "llds_out_file.m"
        return;
      }
#line 5644 "ll_backend.llds_out.llds_out_file.c"
    else
#line 5646 "ll_backend.llds_out.llds_out_file.c"
      {
#line 1276 "llds_out_file.m"
        {
#line 1276 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "#ifdef MR_maybe_local_thread_engine_base\n");
        }
#line 1277 "llds_out_file.m"
        {
#line 1277 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "\t#undef MR_maybe_local_thread_engine_base\n");
        }
#line 1278 "llds_out_file.m"
        {
#line 1278 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "\t#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base\n");
        }
#line 1280 "llds_out_file.m"
        {
#line 1280 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "#endif\n");
        }
#line 1284 "llds_out_file.m"
        {
#line 1284 "llds_out_file.m"
          ll_backend__llds_out__llds_out_instr__output_instruction_list_6_p_0(ll_backend__llds_out__llds_out_file__Info_5, ll_backend__llds_out__llds_out_file__Instrs_12, ll_backend__llds_out__llds_out_file__LabelOutputInfo_9, (MR_Integer) 0);
        }
#line 1288 "llds_out_file.m"
        {
#line 1288 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "#ifdef MR_maybe_local_thread_engine_base\n");
        }
#line 1289 "llds_out_file.m"
        {
#line 1289 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "\t#undef MR_maybe_local_thread_engine_base\n");
        }
#line 1290 "llds_out_file.m"
        {
#line 1290 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "\t#define MR_maybe_local_thread_engine_base MR_thread_engine_base\n");
        }
#line 1292 "llds_out_file.m"
        {
#line 1292 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "#endif\n");
#line 1292 "llds_out_file.m"
          return;
        }
#line 5695 "ll_backend.llds_out.llds_out_file.c"
      }
#line 1250 "llds_out_file.m"
  }
#line 1247 "llds_out_file.m"
}

#line 1233 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_global_var_decl_5_p_0(
#line 1233 "llds_out_file.m"
  MR_String ll_backend__llds_out__llds_out_file__VarName_6,
#line 1233 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_10,
#line 1233 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_11)
#line 1233 "llds_out_file.m"
{
#line 1236 "llds_out_file.m"
  {
#line 1236 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 1236 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__GlobalVar_9 = (MR_Word) ll_backend__llds_out__llds_out_file__VarName_6;
#line 1238 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_14_14;

#line 1238 "llds_out_file.m"
    {
#line 1238 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_14_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1238 "llds_out_file.m"
      MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__V_14_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1238 "llds_out_file.m"
      MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__V_14_14, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__GlobalVar_9));
#line 1238 "llds_out_file.m"
    }
#line 1238 "llds_out_file.m"
    {
#line 1238 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(ll_backend__llds_out__llds_out_file__V_14_14, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_10);
    }
#line 1240 "llds_out_file.m"
    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1239 "llds_out_file.m"
      *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_11 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_10;
#line 1240 "llds_out_file.m"
    else
#line 1241 "llds_out_file.m"
      {
#line 1241 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_15_15;
#line 1241 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__V_19_19;

#line 1241 "llds_out_file.m"
        {
#line 1241 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__V_15_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1241 "llds_out_file.m"
          MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__V_15_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1241 "llds_out_file.m"
          MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__V_15_15, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__GlobalVar_9));
#line 1241 "llds_out_file.m"
        }
#line 1241 "llds_out_file.m"
        {
#line 1241 "llds_out_file.m"
          ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__llds_out__llds_out_file__V_15_15, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_10, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_11);
        }
#line 1242 "llds_out_file.m"
        {
#line 1242 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "extern MR_Word ");
        }
#line 1243 "llds_out_file.m"
        {
#line 1243 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__V_19_19 = ll_backend__llds_out__llds_out_data__c_global_var_name_1_f_0(ll_backend__llds_out__llds_out_file__GlobalVar_9);
        }
#line 1243 "llds_out_file.m"
        {
#line 1243 "llds_out_file.m"
          mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__V_19_19);
        }
#line 1244 "llds_out_file.m"
        {
#line 1244 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) ";\n");
#line 1244 "llds_out_file.m"
          return;
        }
#line 1241 "llds_out_file.m"
      }
#line 1236 "llds_out_file.m"
  }
#line 1233 "llds_out_file.m"
}

#line 1231 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_c_procedure_decls_6_p_0_2(
#line 1231 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1231 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1231 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1231 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 1231 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 1231 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5)
#line 1231 "llds_out_file.m"
{
#line 1231 "llds_out_file.m"
  {
#line 1231 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 1231 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv3_HeadVar__4_4;

#line 1231 "llds_out_file.m"
    {
#line 1231 "llds_out_file.m"
      ll_backend__llds_out__llds_out_instr__output_record_instruction_decls_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv3_HeadVar__4_4);
    }
#line 1231 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv3_HeadVar__4_4));
#line 1231 "llds_out_file.m"
  }
#line 1231 "llds_out_file.m"
}

#line 1230 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_c_procedure_decls_6_p_0_1(
#line 1230 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1230 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1230 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1230 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 1230 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 1230 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5)
#line 1230 "llds_out_file.m"
{
#line 1230 "llds_out_file.m"
  {
#line 1230 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 1230 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_DeclSet_11;

#line 1230 "llds_out_file.m"
    {
#line 1230 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_c_global_var_decl_5_p_0(((MR_String) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_DeclSet_11);
    }
#line 1230 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_DeclSet_11));
#line 1230 "llds_out_file.m"
  }
#line 1230 "llds_out_file.m"
}

#line 1221 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_c_procedure_decls_6_p_0(
#line 1221 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_7,
#line 1221 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__AnnotatedProc_8,
#line 1221 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_15,
#line 1221 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_16)
#line 1221 "llds_out_file.m"
{
#line 1225 "llds_out_file.m"
  {
#line 1225 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 1225 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_42_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1225 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_48_48;
#line 1225 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_49_49;
#line 1225 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__Proc_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__AnnotatedProc_8, (MR_Integer) 0)));
#line 1225 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__Instrs_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 4)));
#line 1225 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__CGlobalVarSet_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 8)));
#line 1225 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__CGlobalVars_14;
#line 1225 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_20_20;
#line 1225 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_22_22;
#line 1226 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__AnnotatedProc_8, (MR_Integer) 1)));
#line 1227 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 0)));
#line 1227 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 1)));
#line 1227 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 2)));
#line 1227 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 3)));
#line 1227 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 5)));
#line 1227 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 6)));
#line 1227 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 7)));
#line 1230 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_DeclSet_20_20;
#line 1230 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_IO_21_21;
#line 1231 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv5_STATE_VARIABLE_DeclSet_16;
#line 1231 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv4_STATE_VARIABLE_IO_18;

#line 1229 "llds_out_file.m"
    {
#line 1229 "llds_out_file.m"
      mercury__set__to_sorted_list_2_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_42_42, ll_backend__llds_out__llds_out_file__CGlobalVarSet_13, &ll_backend__llds_out__llds_out_file__CGlobalVars_14);
    }
#line 5931 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_48_48 = (MR_Word) &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0;
#line 5933 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_49_49 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 1230 "llds_out_file.m"
    {
#line 1230 "llds_out_file.m"
      mercury__list__foldl2_6_p_2(ll_backend__llds_out__llds_out_file__TypeCtorInfo_42_42, ll_backend__llds_out__llds_out_file__TypeCtorInfo_48_48, ll_backend__llds_out__llds_out_file__TypeCtorInfo_49_49, (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_2[11], ll_backend__llds_out__llds_out_file__CGlobalVars_14, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_15)), &ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_DeclSet_20_20, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_IO_21_21);
    }
#line 1230 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_20_20 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_DeclSet_20_20);
#line 1231 "llds_out_file.m"
    {
#line 1231 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1231 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_22_22, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_6[13]));
#line 1231 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_22_22, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_record_c_procedure_decls_6_p_0_2));
#line 1231 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1231 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_22_22, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_7));
#line 1231 "llds_out_file.m"
    }
#line 1231 "llds_out_file.m"
    {
#line 1231 "llds_out_file.m"
      mercury__list__foldl2_6_p_2((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__llds_out__llds_out_file__TypeCtorInfo_48_48, ll_backend__llds_out__llds_out_file__TypeCtorInfo_49_49, ll_backend__llds_out__llds_out_file__V_22_22, ll_backend__llds_out__llds_out_file__Instrs_12, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_20_20)), &ll_backend__llds_out__llds_out_file__conv5_STATE_VARIABLE_DeclSet_16, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv4_STATE_VARIABLE_IO_18);
    }
#line 1231 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_16 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv5_STATE_VARIABLE_DeclSet_16);
#line 1225 "llds_out_file.m"
  }
#line 1221 "llds_out_file.m"
}

#line 1186 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_entry_label_init_4_p_0(
#line 1186 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__EntryLabelToLayoutMap_5,
#line 1186 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Label_6)
#line 1186 "llds_out_file.m"
{
#line 1189 "llds_out_file.m"
  {
#line 1189 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 1189 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__SuffixOpen_9;
#line 1189 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ProcLabel_10;
#line 1189 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__TabInitMacro_11;
#line 1190 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file___LayoutId_8;
#line 1190 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv0__LayoutId_8;

#line 1190 "llds_out_file.m"
    {
#line 1190 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0, ll_backend__llds_out__llds_out_file__EntryLabelToLayoutMap_5, ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_6)), &ll_backend__llds_out__llds_out_file__conv0__LayoutId_8);
    }
#line 1190 "llds_out_file.m"
    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1190 "llds_out_file.m"
      {
#line 1190 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file___LayoutId_8 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv0__LayoutId_8);
#line 1190 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__succeeded = MR_TRUE;
#line 1190 "llds_out_file.m"
      }
#line 1192 "llds_out_file.m"
    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1191 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__SuffixOpen_9 = (MR_String) "_sl(";
#line 1192 "llds_out_file.m"
    else
#line 1193 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__SuffixOpen_9 = (MR_String) "(";
#line 1199 "llds_out_file.m"
    if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Label_6)) == (MR_mktag((MR_Integer) 1))))
#line 1199 "llds_out_file.m"
      {
#line 1199 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__Label_6, (MR_Integer) 1)));
#line 1199 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__Label_6, (MR_Integer) 0)));

#line 1199 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__V_35_35 == (MR_Integer) 0))
#line 1203 "llds_out_file.m"
          {
#line 1203 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__ProcLabel_10 = ll_backend__llds_out__llds_out_file__V_34_34;
#line 1204 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__TabInitMacro_11 = (MR_String) "\tMR_init_local1";
#line 1203 "llds_out_file.m"
          }
#line 1199 "llds_out_file.m"
        else
#line 1199 "llds_out_file.m"
          if ((ll_backend__llds_out__llds_out_file__V_35_35 == (MR_Integer) 2))
#line 1197 "llds_out_file.m"
            {
#line 1197 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__ProcLabel_10 = ll_backend__llds_out__llds_out_file__V_34_34;
#line 1198 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__TabInitMacro_11 = (MR_String) "\tMR_init_entry1";
#line 1197 "llds_out_file.m"
            }
#line 1199 "llds_out_file.m"
          else
#line 1200 "llds_out_file.m"
            {
#line 1200 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__ProcLabel_10 = ll_backend__llds_out__llds_out_file__V_34_34;
#line 1201 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__TabInitMacro_11 = (MR_String) "\tMR_init_entry1";
#line 1200 "llds_out_file.m"
            }
#line 1199 "llds_out_file.m"
      }
#line 1199 "llds_out_file.m"
    else
#line 1206 "llds_out_file.m"
      {
#line 1208 "llds_out_file.m"
        {
#line 1208 "llds_out_file.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_out.llds_out_file", (MR_String) "predicate \140ll_backend.llds_out.llds_out_file.output_c_entry_label_init\'/4", (MR_String) "internal label");
#line 1208 "llds_out_file.m"
          return;
        }
#line 1206 "llds_out_file.m"
      }
#line 1210 "llds_out_file.m"
    {
#line 1210 "llds_out_file.m"
      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__TabInitMacro_11);
    }
#line 1211 "llds_out_file.m"
    {
#line 1211 "llds_out_file.m"
      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__SuffixOpen_9);
    }
#line 1212 "llds_out_file.m"
    {
#line 1212 "llds_out_file.m"
      backend_libs__name_mangle__output_proc_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_file__ProcLabel_10);
    }
#line 1213 "llds_out_file.m"
    {
#line 1213 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) ");\n");
    }
#line 1215 "llds_out_file.m"
    {
#line 1215 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\tMR_INIT_PROC_LAYOUT_ADDR(");
    }
#line 1216 "llds_out_file.m"
    {
#line 1216 "llds_out_file.m"
      ll_backend__llds_out__llds_out_code_addr__output_label_3_p_0(ll_backend__llds_out__llds_out_file__Label_6);
    }
#line 1217 "llds_out_file.m"
    {
#line 1217 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 1217 "llds_out_file.m"
      return;
    }
#line 1189 "llds_out_file.m"
  }
#line 1186 "llds_out_file.m"
}

#line 1179 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__write_int_pair_3_p_0(
#line 1179 "llds_out_file.m"
  MR_Tuple ll_backend__llds_out__llds_out_file__HeadVar__1_1)
#line 1179 "llds_out_file.m"
{
#line 1181 "llds_out_file.m"
  {
#line 1181 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 1181 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__LabelNum_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 1181 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__SlotNum_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));

#line 1182 "llds_out_file.m"
    {
#line 1182 "llds_out_file.m"
      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_file__LabelNum_4);
    }
#line 1183 "llds_out_file.m"
    {
#line 1183 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) ",");
    }
#line 1184 "llds_out_file.m"
    {
#line 1184 "llds_out_file.m"
      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_file__SlotNum_5);
#line 1184 "llds_out_file.m"
      return;
    }
#line 1181 "llds_out_file.m"
  }
#line 1179 "llds_out_file.m"
}

#line 1176 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_chunk_6_p_0_1(
#line 1176 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1176 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1176 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1176 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 1176 "llds_out_file.m"
{
#line 1176 "llds_out_file.m"
  {
#line 1176 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 1176 "llds_out_file.m"
    {
#line 1176 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__write_int_pair_3_p_0(((MR_Tuple) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
#line 1176 "llds_out_file.m"
      return;
    }
#line 1176 "llds_out_file.m"
  }
#line 1176 "llds_out_file.m"
}

#line 1162 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_chunk_6_p_0(
#line 1162 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_7,
#line 1162 "llds_out_file.m"
  MR_String ll_backend__llds_out__llds_out_file__Suffix_8,
#line 1162 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ProcLabel_9,
#line 1162 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__LabelSlotNums_10)
#line 1162 "llds_out_file.m"
{
#line 1166 "llds_out_file.m"
  {
#line 1166 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 1166 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeInfo_54_54;
#line 1166 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__ModuleName_12;
#line 1166 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__V_18_18;
#line 1173 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_33_33;
#line 1173 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_34_34;
#line 1173 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_35_35;
#line 1173 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_36_36;
#line 1173 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_37_37;
#line 1173 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_38_38;
#line 1173 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_39_39;
#line 1173 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_40_40;
#line 1173 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_41_41;
#line 1173 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_42_42;
#line 1173 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_43_43;
#line 1173 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_44_44;
#line 1173 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_45_45;
#line 1173 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_46_46;
#line 1173 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_47_47;
#line 1173 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_48_48;
#line 1173 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_49_49;
#line 1173 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_50_50;
#line 1173 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_51_51;
#line 1173 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_52_52;
#line 1173 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_53_53;

#line 1167 "llds_out_file.m"
    {
#line 1167 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\tMR_init_label");
    }
#line 1168 "llds_out_file.m"
    {
#line 1168 "llds_out_file.m"
      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__Suffix_8);
    }
#line 6257 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeInfo_54_54 = (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_3[0];
#line 1169 "llds_out_file.m"
    {
#line 1169 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_18_18 = mercury__list__length_1_f_0(ll_backend__llds_out__llds_out_file__TypeInfo_54_54, ll_backend__llds_out__llds_out_file__LabelSlotNums_10);
    }
#line 1169 "llds_out_file.m"
    {
#line 1169 "llds_out_file.m"
      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_file__V_18_18);
    }
#line 1170 "llds_out_file.m"
    {
#line 1170 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "(");
    }
#line 1171 "llds_out_file.m"
    {
#line 1171 "llds_out_file.m"
      backend_libs__name_mangle__output_proc_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_file__ProcLabel_9);
    }
#line 1172 "llds_out_file.m"
    {
#line 1172 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1173 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 0)));
#line 1173 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__ModuleName_12 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 1)));
#line 1173 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 2)));
#line 1173 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 3)));
#line 1173 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 4)));
#line 1173 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 5)));
#line 1173 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 6)));
#line 1173 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_39_39 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 1173 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1173 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1173 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1173 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1173 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1173 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1173 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1173 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 1173 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 1173 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 1173 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 1173 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 1173 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 1173 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 8)));
#line 1174 "llds_out_file.m"
    {
#line 1174 "llds_out_file.m"
      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_12);
    }
#line 1175 "llds_out_file.m"
    {
#line 1175 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
    }
#line 1176 "llds_out_file.m"
    {
#line 1176 "llds_out_file.m"
      mercury__io__write_list_5_p_0(ll_backend__llds_out__llds_out_file__TypeInfo_54_54, ll_backend__llds_out__llds_out_file__LabelSlotNums_10, (MR_String) ", ", (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_2[10]);
    }
#line 1177 "llds_out_file.m"
    {
#line 1177 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) ")\n");
#line 1177 "llds_out_file.m"
      return;
    }
#line 1166 "llds_out_file.m"
  }
#line 1162 "llds_out_file.m"
}

#line 1159 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_group_5_p_0_1(
#line 1159 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1159 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1159 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1159 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 1159 "llds_out_file.m"
{
#line 1159 "llds_out_file.m"
  {
#line 1159 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 1159 "llds_out_file.m"
    {
#line 1159 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_chunk_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 5))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
#line 1159 "llds_out_file.m"
      return;
    }
#line 1159 "llds_out_file.m"
  }
#line 1159 "llds_out_file.m"
}

#line 1147 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_group_5_p_0(
#line 1147 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_6,
#line 1147 "llds_out_file.m"
  MR_String ll_backend__llds_out__llds_out_file__Suffix_7,
#line 1147 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__3_3)
#line 1147 "llds_out_file.m"
{
#line 1152 "llds_out_file.m"
  {
#line 1152 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 1152 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeInfo_18_18 = (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_3[0];
#line 1152 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ProcLabel_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__3_3, (MR_Integer) 0)));
#line 1152 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__RevLabelSlotNums_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__3_3, (MR_Integer) 1)));
#line 1152 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__LabelSlotNums_11;
#line 1152 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__LabelSlotNumChunks_13;
#line 1152 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_16_16;
#line 1158 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_IO_15;

#line 1153 "llds_out_file.m"
    {
#line 1153 "llds_out_file.m"
      mercury__list__reverse_2_p_0(ll_backend__llds_out__llds_out_file__TypeInfo_18_18, ll_backend__llds_out__llds_out_file__RevLabelSlotNums_9, &ll_backend__llds_out__llds_out_file__LabelSlotNums_11);
    }
#line 1157 "llds_out_file.m"
    {
#line 1157 "llds_out_file.m"
      mercury__list__chunk_3_p_0(ll_backend__llds_out__llds_out_file__TypeInfo_18_18, ll_backend__llds_out__llds_out_file__LabelSlotNums_11, (MR_Integer) 10, &ll_backend__llds_out__llds_out_file__LabelSlotNumChunks_13);
    }
#line 1159 "llds_out_file.m"
    {
#line 1159 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1159 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_16_16, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_6[12]));
#line 1159 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_16_16, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_group_5_p_0_1));
#line 1159 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1159 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_16_16, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_6));
#line 1159 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_16_16, 4) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Suffix_7));
#line 1159 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_16_16, 5) = ((MR_Box) (ll_backend__llds_out__llds_out_file__ProcLabel_8));
#line 1159 "llds_out_file.m"
    }
#line 1158 "llds_out_file.m"
    {
#line 1158 "llds_out_file.m"
      mercury__list__foldl_4_p_2((MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_1[2], (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__llds_out__llds_out_file__V_16_16, ll_backend__llds_out__llds_out_file__LabelSlotNumChunks_13, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_IO_15);
    }
#line 1152 "llds_out_file.m"
  }
#line 1147 "llds_out_file.m"
}

#line 1144 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_no_layout_init_chunk_4_p_0_1(
#line 1144 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1144 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1144 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1144 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 1144 "llds_out_file.m"
{
#line 1144 "llds_out_file.m"
  {
#line 1144 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 1144 "llds_out_file.m"
    {
#line 1144 "llds_out_file.m"
      mercury__io__write_int_3_p_0(((MR_Integer) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
#line 1144 "llds_out_file.m"
      return;
    }
#line 1144 "llds_out_file.m"
  }
#line 1144 "llds_out_file.m"
}

#line 1135 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_no_layout_init_chunk_4_p_0(
#line 1135 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ProcLabel_5,
#line 1135 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__LabelNums_6)
#line 1135 "llds_out_file.m"
{
#line 1138 "llds_out_file.m"
  {
#line 1138 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 1138 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_24_24;
#line 1138 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__V_12_12;

#line 1139 "llds_out_file.m"
    {
#line 1139 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\tMR_init_label");
    }
#line 6506 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_24_24 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1140 "llds_out_file.m"
    {
#line 1140 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_12_12 = mercury__list__length_1_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_24_24, ll_backend__llds_out__llds_out_file__LabelNums_6);
    }
#line 1140 "llds_out_file.m"
    {
#line 1140 "llds_out_file.m"
      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_file__V_12_12);
    }
#line 1141 "llds_out_file.m"
    {
#line 1141 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "(");
    }
#line 1142 "llds_out_file.m"
    {
#line 1142 "llds_out_file.m"
      backend_libs__name_mangle__output_proc_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_file__ProcLabel_5);
    }
#line 1143 "llds_out_file.m"
    {
#line 1143 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) ",");
    }
#line 1144 "llds_out_file.m"
    {
#line 1144 "llds_out_file.m"
      mercury__io__write_list_5_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_24_24, ll_backend__llds_out__llds_out_file__LabelNums_6, (MR_String) ",", (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_2[9]);
    }
#line 1145 "llds_out_file.m"
    {
#line 1145 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) ")\n");
#line 1145 "llds_out_file.m"
      return;
    }
#line 1138 "llds_out_file.m"
  }
#line 1135 "llds_out_file.m"
}

#line 1132 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_no_layout_init_group_3_p_0_1(
#line 1132 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1132 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1132 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1132 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 1132 "llds_out_file.m"
{
#line 1132 "llds_out_file.m"
  {
#line 1132 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 1132 "llds_out_file.m"
    {
#line 1132 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_c_internal_label_no_layout_init_chunk_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
#line 1132 "llds_out_file.m"
      return;
    }
#line 1132 "llds_out_file.m"
  }
#line 1132 "llds_out_file.m"
}

#line 1123 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_no_layout_init_group_3_p_0(
#line 1123 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1)
#line 1123 "llds_out_file.m"
{
#line 1126 "llds_out_file.m"
  {
#line 1126 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 1126 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_14_14 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1126 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ProcLabel_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 1126 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__RevLabelNums_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 1126 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__LabelNums_7;
#line 1126 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__LabelNumChunks_9;
#line 1126 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_12_12;
#line 1132 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_IO_11;

#line 1127 "llds_out_file.m"
    {
#line 1127 "llds_out_file.m"
      mercury__list__reverse_2_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_14_14, ll_backend__llds_out__llds_out_file__RevLabelNums_5, &ll_backend__llds_out__llds_out_file__LabelNums_7);
    }
#line 1131 "llds_out_file.m"
    {
#line 1131 "llds_out_file.m"
      mercury__list__chunk_3_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_14_14, ll_backend__llds_out__llds_out_file__LabelNums_7, (MR_Integer) 10, &ll_backend__llds_out__llds_out_file__LabelNumChunks_9);
    }
#line 1132 "llds_out_file.m"
    {
#line 1132 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1132 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_12_12, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_4[5]));
#line 1132 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_12_12, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_c_internal_label_no_layout_init_group_3_p_0_1));
#line 1132 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1132 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_12_12, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__ProcLabel_4));
#line 1132 "llds_out_file.m"
    }
#line 1132 "llds_out_file.m"
    {
#line 1132 "llds_out_file.m"
      mercury__list__foldl_4_p_2((MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_1[1], (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__llds_out__llds_out_file__V_12_12, ll_backend__llds_out__llds_out_file__LabelNumChunks_9, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_IO_11);
    }
#line 1126 "llds_out_file.m"
  }
#line 1123 "llds_out_file.m"
}

#line 1081 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__group_init_c_labels_10_p_0(
#line 1081 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 1081 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2,
#line 1081 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoLayoutMap_0_3,
#line 1081 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoLayoutMap_4,
#line 1081 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_0_5,
#line 1081 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_6,
#line 1081 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_0_7,
#line 1081 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_8,
#line 1081 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_0_9,
#line 1081 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_10)
#line 1081 "llds_out_file.m"
{
#line 1090 "llds_out_file.m"
  while (MR_TRUE)
#line 1090 "llds_out_file.m"
    {
#line 1090 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 1090 "llds_out_file.m"
      {
#line 1090 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 1090 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1090 "llds_out_file.m"
          {
#line 1091 "llds_out_file.m"
            *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_10 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_0_9;
#line 1091 "llds_out_file.m"
            *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_8 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_0_7;
#line 1091 "llds_out_file.m"
            *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_6 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_0_5;
#line 1091 "llds_out_file.m"
            *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoLayoutMap_4 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoLayoutMap_0_3;
#line 1090 "llds_out_file.m"
          }
#line 1090 "llds_out_file.m"
        else
#line 1093 "llds_out_file.m"
          {
#line 1093 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Label_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 0)));
#line 1093 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Labels_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 1)));
#line 1093 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_51_51;
#line 1093 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_52_52;
#line 1093 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_53_53;
#line 1093 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoLayoutMap_57_57;

#line 1116 "llds_out_file.m"
            if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Label_25)) == (MR_mktag((MR_Integer) 1))))
#line 1117 "llds_out_file.m"
              {
#line 1118 "llds_out_file.m"
                {
#line 1118 "llds_out_file.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_out.llds_out_file", (MR_String) "predicate \140ll_backend.llds_out.llds_out_file.group_init_c_labels\'/10", (MR_String) "entry label");
#line 1118 "llds_out_file.m"
                  return;
                }
#line 1117 "llds_out_file.m"
              }
#line 1116 "llds_out_file.m"
            else
#line 1095 "llds_out_file.m"
              {
#line 1095 "llds_out_file.m"
                MR_Integer ll_backend__llds_out__llds_out_file__LabelNum_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Label_25, (MR_Integer) 0)));
#line 1095 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__ProcLabel_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Label_25, (MR_Integer) 1)));
#line 1113 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__Slot_33;
#line 1096 "llds_out_file.m"
                MR_Box ll_backend__llds_out__llds_out_file__conv0_Slot_33;

#line 1096 "llds_out_file.m"
                {
#line 1096 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0, ll_backend__llds_out__llds_out_file__HeadVar__1_1, ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_25)), &ll_backend__llds_out__llds_out_file__conv0_Slot_33);
                }
#line 1096 "llds_out_file.m"
                if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1096 "llds_out_file.m"
                  {
#line 1096 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__Slot_33 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv0_Slot_33);
#line 1096 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__succeeded = MR_TRUE;
#line 1096 "llds_out_file.m"
                  }
#line 1113 "llds_out_file.m"
                if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1097 "llds_out_file.m"
                  {
#line 1097 "llds_out_file.m"
                    MR_Word ll_backend__llds_out__llds_out_file__ArrayName_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Slot_33, (MR_Integer) 0)));
#line 1097 "llds_out_file.m"
                    MR_Integer ll_backend__llds_out__llds_out_file__SlotNum_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Slot_33, (MR_Integer) 1)));
#line 1110 "llds_out_file.m"
                    MR_Word ll_backend__llds_out__llds_out_file__Vars_36;

#line 1098 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__ArrayName_34)) == (MR_mktag((MR_Integer) 1)));
#line 1098 "llds_out_file.m"
                    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1098 "llds_out_file.m"
                      {
#line 1098 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__Vars_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__ArrayName_34, (MR_Integer) 0)));
#line 1099 "llds_out_file.m"
                        {
#line 1099 "llds_out_file.m"
                          MR_Tuple ll_backend__llds_out__llds_out_file__Pair_37;

#line 1099 "llds_out_file.m"
                          {
#line 1099 "llds_out_file.m"
                            ll_backend__llds_out__llds_out_file__Pair_37 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1099 "llds_out_file.m"
                            MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Pair_37, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__LabelNum_31));
#line 1099 "llds_out_file.m"
                            MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Pair_37, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__SlotNum_35));
#line 1099 "llds_out_file.m"
                          }
#line 1103 "llds_out_file.m"
                          if ((ll_backend__llds_out__llds_out_file__Vars_36 == (MR_Integer) 2))
#line 1107 "llds_out_file.m"
                            {
#line 1108 "llds_out_file.m"
                              {
#line 1108 "llds_out_file.m"
                                mercury__multi_map__set_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_3[0], ((MR_Box) (ll_backend__llds_out__llds_out_file__ProcLabel_32)), ((MR_Box) (ll_backend__llds_out__llds_out_file__Pair_37)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_0_9, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_51_51);
                              }
#line 1108 "llds_out_file.m"
                              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_53_53 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_0_5;
#line 1108 "llds_out_file.m"
                              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_52_52 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_0_7;
#line 1107 "llds_out_file.m"
                            }
#line 1103 "llds_out_file.m"
                          else
#line 1103 "llds_out_file.m"
                            if ((ll_backend__llds_out__llds_out_file__Vars_36 == (MR_Integer) 0))
#line 1101 "llds_out_file.m"
                              {
#line 1102 "llds_out_file.m"
                                {
#line 1102 "llds_out_file.m"
                                  mercury__multi_map__set_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_3[0], ((MR_Box) (ll_backend__llds_out__llds_out_file__ProcLabel_32)), ((MR_Box) (ll_backend__llds_out__llds_out_file__Pair_37)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_0_5, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_53_53);
                                }
#line 1102 "llds_out_file.m"
                                ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_52_52 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_0_7;
#line 1102 "llds_out_file.m"
                                ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_51_51 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_0_9;
#line 1101 "llds_out_file.m"
                              }
#line 1103 "llds_out_file.m"
                            else
#line 1104 "llds_out_file.m"
                              {
#line 1105 "llds_out_file.m"
                                {
#line 1105 "llds_out_file.m"
                                  mercury__multi_map__set_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_3[0], ((MR_Box) (ll_backend__llds_out__llds_out_file__ProcLabel_32)), ((MR_Box) (ll_backend__llds_out__llds_out_file__Pair_37)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_0_7, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_52_52);
                                }
#line 1105 "llds_out_file.m"
                                ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_53_53 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_0_5;
#line 1105 "llds_out_file.m"
                                ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_51_51 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_0_9;
#line 1104 "llds_out_file.m"
                              }
#line 1099 "llds_out_file.m"
                        }
#line 1098 "llds_out_file.m"
                      }
#line 1098 "llds_out_file.m"
                    else
#line 1111 "llds_out_file.m"
                      {
#line 1111 "llds_out_file.m"
                        {
#line 1111 "llds_out_file.m"
                          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_out.llds_out_file", (MR_String) "predicate \140ll_backend.llds_out.llds_out_file.group_init_c_labels\'/10", (MR_String) "bad slot type");
#line 1111 "llds_out_file.m"
                          return;
                        }
#line 1111 "llds_out_file.m"
                      }
#line 1111 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoLayoutMap_57_57 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoLayoutMap_0_3;
#line 1097 "llds_out_file.m"
                  }
#line 1113 "llds_out_file.m"
                else
#line 1114 "llds_out_file.m"
                  {
#line 1114 "llds_out_file.m"
                    {
#line 1114 "llds_out_file.m"
                      mercury__multi_map__set_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (ll_backend__llds_out__llds_out_file__ProcLabel_32)), ((MR_Box) (ll_backend__llds_out__llds_out_file__LabelNum_31)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoLayoutMap_0_3, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoLayoutMap_57_57);
                    }
#line 1114 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_51_51 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_0_9;
#line 1114 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_52_52 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_0_7;
#line 1114 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_53_53 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_0_5;
#line 1114 "llds_out_file.m"
                  }
#line 1095 "llds_out_file.m"
              }
#line 1120 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 1120 "llds_out_file.m"
            {
#line 1120 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_file__Labels_26;
#line 1120 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoLayoutMap_0__tmp_copy_3 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoLayoutMap_57_57;
#line 1120 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_0__tmp_copy_5 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_53_53;
#line 1120 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_0__tmp_copy_7 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_52_52;
#line 1120 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_0__tmp_copy_9 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_51_51;

#line 1120 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_0_9 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_0__tmp_copy_9;
#line 1120 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_0_7 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_0__tmp_copy_7;
#line 1120 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_0_5 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_0__tmp_copy_5;
#line 1120 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoLayoutMap_0_3 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoLayoutMap_0__tmp_copy_3;
#line 1120 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__2_2 = ll_backend__llds_out__llds_out_file__HeadVar__2__tmp_copy_2;
#line 1120 "llds_out_file.m"
            }
#line 1120 "llds_out_file.m"
            continue;
#line 1093 "llds_out_file.m"
          }
#line 1090 "llds_out_file.m"
      }
#line 1090 "llds_out_file.m"
      break;
#line 1090 "llds_out_file.m"
    }
#line 1081 "llds_out_file.m"
}

#line 1078 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0_5(
#line 1078 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1078 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1078 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1078 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 1078 "llds_out_file.m"
{
#line 1078 "llds_out_file.m"
  {
#line 1078 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 1078 "llds_out_file.m"
    {
#line 1078 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_group_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
#line 1078 "llds_out_file.m"
      return;
    }
#line 1078 "llds_out_file.m"
  }
#line 1078 "llds_out_file.m"
}

#line 1074 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0_4(
#line 1074 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1074 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1074 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1074 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 1074 "llds_out_file.m"
{
#line 1074 "llds_out_file.m"
  {
#line 1074 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 1074 "llds_out_file.m"
    {
#line 1074 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_group_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
#line 1074 "llds_out_file.m"
      return;
    }
#line 1074 "llds_out_file.m"
  }
#line 1074 "llds_out_file.m"
}

#line 1070 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0_3(
#line 1070 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1070 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1070 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1070 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 1070 "llds_out_file.m"
{
#line 1070 "llds_out_file.m"
  {
#line 1070 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 1070 "llds_out_file.m"
    {
#line 1070 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_group_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
#line 1070 "llds_out_file.m"
      return;
    }
#line 1070 "llds_out_file.m"
  }
#line 1070 "llds_out_file.m"
}

#line 1066 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0_2(
#line 1066 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1066 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1066 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1066 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 1066 "llds_out_file.m"
{
#line 1066 "llds_out_file.m"
  {
#line 1066 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 1066 "llds_out_file.m"
    {
#line 1066 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_c_internal_label_no_layout_init_group_3_p_0(((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
#line 1066 "llds_out_file.m"
      return;
    }
#line 1066 "llds_out_file.m"
  }
#line 1066 "llds_out_file.m"
}

#line 1055 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0_1(
#line 1055 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1055 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1055 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1055 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 1055 "llds_out_file.m"
{
#line 1055 "llds_out_file.m"
  {
#line 1055 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 1055 "llds_out_file.m"
    {
#line 1055 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_c_entry_label_init_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
#line 1055 "llds_out_file.m"
      return;
    }
#line 1055 "llds_out_file.m"
  }
#line 1055 "llds_out_file.m"
}

#line 1050 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0(
#line 1050 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_6,
#line 1050 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__EntryLabels_7,
#line 1050 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__InternalLabels_8)
#line 1050 "llds_out_file.m"
{
#line 1053 "llds_out_file.m"
  {
#line 1053 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 1053 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85;
#line 1053 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_86_86;
#line 1053 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_87_87;
#line 1053 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeInfo_88_88;
#line 1053 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeInfo_96_96;
#line 1053 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__EntryLabelToLayoutMap_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 4)));
#line 1053 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__InternalLabelToLayoutMap_11;
#line 1053 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__NoLayoutInternalMap_12;
#line 1053 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__NoVarLayoutInternalMap_13;
#line 1053 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__SVarLayoutInternalMap_14;
#line 1053 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__LVarLayoutInternalMap_15;
#line 1053 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__NoLayoutInternalList_16;
#line 1053 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__NoVarLayoutInternalList_17;
#line 1053 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__SVarLayoutInternalList_18;
#line 1053 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__LVarLayoutInternalList_19;
#line 1053 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_22_22;
#line 1053 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_24_24;
#line 1053 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_25_25;
#line 1053 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_26_26;
#line 1053 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_27_27;
#line 1053 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_30_30;
#line 1053 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_33_33;
#line 1053 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_36_36;
#line 1054 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 0)));
#line 1054 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_40_40 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 1)));
#line 1054 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_41_41 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 2)));
#line 1054 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 3)));
#line 1054 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 5)));
#line 1054 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 6)));
#line 1054 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_45_45 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 1054 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1054 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1054 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1054 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1054 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1054 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1054 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1054 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 1054 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 1054 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 1054 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 1054 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 1054 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 1054 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 8)));
#line 1055 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_IO_23_23;
#line 1058 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_60_60;
#line 1058 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_61_61;
#line 1058 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_62_62;
#line 1058 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_63_63;
#line 1058 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_64_64;
#line 1058 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_65_65;
#line 1058 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_66_66;
#line 1058 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_67_67;
#line 1058 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_68_68;
#line 1058 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_69_69;
#line 1058 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_70_70;
#line 1058 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_71_71;
#line 1058 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_72_72;
#line 1058 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_73_73;
#line 1058 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_74_74;
#line 1058 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_75_75;
#line 1058 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_76_76;
#line 1058 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_77_77;
#line 1058 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_78_78;
#line 1058 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_79_79;
#line 1058 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_80_80;
#line 1066 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_IO_29_29;
#line 1070 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_IO_31_31;
#line 1074 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv3_STATE_VARIABLE_IO_34_34;
#line 1078 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv4_STATE_VARIABLE_IO_21;

#line 1055 "llds_out_file.m"
    {
#line 1055 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1055 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_22_22, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_4[4]));
#line 1055 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_22_22, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0_1));
#line 1055 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1055 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_22_22, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__EntryLabelToLayoutMap_10));
#line 1055 "llds_out_file.m"
    }
#line 7229 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 1055 "llds_out_file.m"
    {
#line 1055 "llds_out_file.m"
      mercury__list__foldl_4_p_2((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85, ll_backend__llds_out__llds_out_file__V_22_22, ll_backend__llds_out__llds_out_file__EntryLabels_7, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_IO_23_23);
    }
#line 1058 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 0)));
#line 1058 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_61_61 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 1)));
#line 1058 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_62_62 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 2)));
#line 1058 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__InternalLabelToLayoutMap_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 3)));
#line 1058 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 4)));
#line 1058 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 5)));
#line 1058 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 6)));
#line 1058 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_66_66 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 1058 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_67_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1058 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_68_68 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1058 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_69_69 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1058 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_70_70 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1058 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1058 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1058 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1058 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 1058 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_75_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 1058 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_76_76 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 1058 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_77_77 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 1058 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_78_78 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 1058 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_79_79 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 1058 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 8)));
#line 7280 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_86_86 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0;
#line 7282 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_87_87 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1060 "llds_out_file.m"
    {
#line 1060 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_24_24 = mercury__multi_map__init_0_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_86_86, ll_backend__llds_out__llds_out_file__TypeCtorInfo_87_87);
    }
#line 7289 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeInfo_88_88 = (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_3[0];
#line 1061 "llds_out_file.m"
    {
#line 1061 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_25_25 = mercury__multi_map__init_0_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_86_86, ll_backend__llds_out__llds_out_file__TypeInfo_88_88);
    }
#line 1062 "llds_out_file.m"
    {
#line 1062 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_26_26 = mercury__multi_map__init_0_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_86_86, ll_backend__llds_out__llds_out_file__TypeInfo_88_88);
    }
#line 1063 "llds_out_file.m"
    {
#line 1063 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_27_27 = mercury__multi_map__init_0_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_86_86, ll_backend__llds_out__llds_out_file__TypeInfo_88_88);
    }
#line 1059 "llds_out_file.m"
    {
#line 1059 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__group_init_c_labels_10_p_0(ll_backend__llds_out__llds_out_file__InternalLabelToLayoutMap_11, ll_backend__llds_out__llds_out_file__InternalLabels_8, ll_backend__llds_out__llds_out_file__V_24_24, &ll_backend__llds_out__llds_out_file__NoLayoutInternalMap_12, ll_backend__llds_out__llds_out_file__V_25_25, &ll_backend__llds_out__llds_out_file__NoVarLayoutInternalMap_13, ll_backend__llds_out__llds_out_file__V_26_26, &ll_backend__llds_out__llds_out_file__SVarLayoutInternalMap_14, ll_backend__llds_out__llds_out_file__V_27_27, &ll_backend__llds_out__llds_out_file__LVarLayoutInternalMap_15);
    }
#line 1065 "llds_out_file.m"
    {
#line 1065 "llds_out_file.m"
      mercury__multi_map__to_assoc_list_2_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_86_86, ll_backend__llds_out__llds_out_file__TypeCtorInfo_87_87, ll_backend__llds_out__llds_out_file__NoLayoutInternalMap_12, &ll_backend__llds_out__llds_out_file__NoLayoutInternalList_16);
    }
#line 1066 "llds_out_file.m"
    {
#line 1066 "llds_out_file.m"
      mercury__list__foldl_4_p_2((MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_2[0], ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85, (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_2[8], ll_backend__llds_out__llds_out_file__NoLayoutInternalList_16, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_IO_29_29);
    }
#line 1069 "llds_out_file.m"
    {
#line 1069 "llds_out_file.m"
      mercury__multi_map__to_assoc_list_2_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_86_86, ll_backend__llds_out__llds_out_file__TypeInfo_88_88, ll_backend__llds_out__llds_out_file__NoVarLayoutInternalMap_13, &ll_backend__llds_out__llds_out_file__NoVarLayoutInternalList_17);
    }
#line 1070 "llds_out_file.m"
    {
#line 1070 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1070 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_30_30, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_5[3]));
#line 1070 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_30_30, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0_3));
#line 1070 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1070 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_30_30, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_6));
#line 1070 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_30_30, 4) = ((MR_Box) ((MR_String) "_nvi"));
#line 1070 "llds_out_file.m"
    }
#line 7342 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeInfo_96_96 = (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_2[1];
#line 1070 "llds_out_file.m"
    {
#line 1070 "llds_out_file.m"
      mercury__list__foldl_4_p_2(ll_backend__llds_out__llds_out_file__TypeInfo_96_96, ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85, ll_backend__llds_out__llds_out_file__V_30_30, ll_backend__llds_out__llds_out_file__NoVarLayoutInternalList_17, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_IO_31_31);
    }
#line 1073 "llds_out_file.m"
    {
#line 1073 "llds_out_file.m"
      mercury__multi_map__to_assoc_list_2_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_86_86, ll_backend__llds_out__llds_out_file__TypeInfo_88_88, ll_backend__llds_out__llds_out_file__SVarLayoutInternalMap_14, &ll_backend__llds_out__llds_out_file__SVarLayoutInternalList_18);
    }
#line 1074 "llds_out_file.m"
    {
#line 1074 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1074 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_33_33, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_5[3]));
#line 1074 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_33_33, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0_4));
#line 1074 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1074 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_33_33, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_6));
#line 1074 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_33_33, 4) = ((MR_Box) ((MR_String) "_svi"));
#line 1074 "llds_out_file.m"
    }
#line 1074 "llds_out_file.m"
    {
#line 1074 "llds_out_file.m"
      mercury__list__foldl_4_p_2(ll_backend__llds_out__llds_out_file__TypeInfo_96_96, ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85, ll_backend__llds_out__llds_out_file__V_33_33, ll_backend__llds_out__llds_out_file__SVarLayoutInternalList_18, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv3_STATE_VARIABLE_IO_34_34);
    }
#line 1077 "llds_out_file.m"
    {
#line 1077 "llds_out_file.m"
      mercury__multi_map__to_assoc_list_2_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_86_86, ll_backend__llds_out__llds_out_file__TypeInfo_88_88, ll_backend__llds_out__llds_out_file__LVarLayoutInternalMap_15, &ll_backend__llds_out__llds_out_file__LVarLayoutInternalList_19);
    }
#line 1078 "llds_out_file.m"
    {
#line 1078 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1078 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_36_36, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_5[3]));
#line 1078 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_36_36, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0_5));
#line 1078 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_36_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1078 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_36_36, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_6));
#line 1078 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_36_36, 4) = ((MR_Box) ((MR_String) "_lvi"));
#line 1078 "llds_out_file.m"
    }
#line 1078 "llds_out_file.m"
    {
#line 1078 "llds_out_file.m"
      mercury__list__foldl_4_p_2(ll_backend__llds_out__llds_out_file__TypeInfo_96_96, ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85, ll_backend__llds_out__llds_out_file__V_36_36, ll_backend__llds_out__llds_out_file__LVarLayoutInternalList_19, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv4_STATE_VARIABLE_IO_21);
    }
#line 1053 "llds_out_file.m"
  }
#line 1050 "llds_out_file.m"
}

#line 1019 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_entry_label_decl_6_p_0(
#line 1019 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file___Info_7,
#line 1019 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Label_8,
#line 1019 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_17,
#line 1019 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_18)
#line 1019 "llds_out_file.m"
{
#line 1022 "llds_out_file.m"
  {
#line 1022 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 1022 "llds_out_file.m"
    {
#line 1022 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_114_101_99_111_114_100_95_101_110_116_114_121_95_108_97_98_101_108_95_100_101_99_108_95_95_91_49_93_95_48_6_p_0(ll_backend__llds_out__llds_out_file__Label_8, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_17, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_18);
#line 1022 "llds_out_file.m"
      return;
    }
#line 1022 "llds_out_file.m"
  }
#line 1019 "llds_out_file.m"
}

#line 1012 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__insert_internal_label_code_addr_decl_4_p_0(
#line 1012 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ProcLabel_5,
#line 1012 "llds_out_file.m"
  MR_Integer ll_backend__llds_out__llds_out_file__LabelNum_6,
#line 1012 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_9,
#line 1012 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_10)
#line 1012 "llds_out_file.m"
{
#line 1015 "llds_out_file.m"
  {
#line 1015 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 1015 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__DeclId_8;
#line 1015 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_11_11;
#line 1015 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_12_12;

#line 1016 "llds_out_file.m"
    {
#line 1016 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1016 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_12_12, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__LabelNum_6));
#line 1016 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_12_12, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__ProcLabel_5));
#line 1016 "llds_out_file.m"
    }
#line 1016 "llds_out_file.m"
    {
#line 1016 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1016 "llds_out_file.m"
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__V_11_11, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__V_12_12));
#line 1016 "llds_out_file.m"
    }
#line 1016 "llds_out_file.m"
    {
#line 1016 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__DeclId_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1016 "llds_out_file.m"
      MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_file__DeclId_8, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__V_11_11));
#line 1016 "llds_out_file.m"
    }
#line 1017 "llds_out_file.m"
    {
#line 1017 "llds_out_file.m"
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__llds_out__llds_out_file__DeclId_8, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_9, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_10);
#line 1017 "llds_out_file.m"
      return;
    }
#line 1015 "llds_out_file.m"
  }
#line 1012 "llds_out_file.m"
}

#line 1009 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_internal_label_decl_group_6_p_0_2(
#line 1009 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1009 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1009 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1009 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 1009 "llds_out_file.m"
{
#line 1009 "llds_out_file.m"
  {
#line 1009 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 1009 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_DeclSet_10;

#line 1009 "llds_out_file.m"
    {
#line 1009 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__insert_internal_label_code_addr_decl_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Integer) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_DeclSet_10);
    }
#line 1009 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_DeclSet_10));
#line 1009 "llds_out_file.m"
  }
#line 1009 "llds_out_file.m"
}

#line 1007 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_internal_label_decl_group_6_p_0_1(
#line 1007 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1007 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1007 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1007 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 1007 "llds_out_file.m"
{
#line 1007 "llds_out_file.m"
  {
#line 1007 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 1007 "llds_out_file.m"
    {
#line 1007 "llds_out_file.m"
      mercury__io__write_int_3_p_0(((MR_Integer) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
#line 1007 "llds_out_file.m"
      return;
    }
#line 1007 "llds_out_file.m"
  }
#line 1007 "llds_out_file.m"
}

#line 997 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_internal_label_decl_group_6_p_0(
#line 997 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ProcLabel_7,
#line 997 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__LabelNums_8,
#line 997 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_11,
#line 997 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_12)
#line 997 "llds_out_file.m"
{
#line 1001 "llds_out_file.m"
  {
#line 1001 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 1001 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_31_31;
#line 1001 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__V_17_17;
#line 1001 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_29_29;
#line 1009 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_DeclSet_12;

#line 1002 "llds_out_file.m"
    {
#line 1002 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "MR_decl_label");
    }
#line 7591 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_31_31 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1003 "llds_out_file.m"
    {
#line 1003 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_17_17 = mercury__list__length_1_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_31_31, ll_backend__llds_out__llds_out_file__LabelNums_8);
    }
#line 1003 "llds_out_file.m"
    {
#line 1003 "llds_out_file.m"
      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_file__V_17_17);
    }
#line 1004 "llds_out_file.m"
    {
#line 1004 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "(");
    }
#line 1005 "llds_out_file.m"
    {
#line 1005 "llds_out_file.m"
      backend_libs__name_mangle__output_proc_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_file__ProcLabel_7);
    }
#line 1006 "llds_out_file.m"
    {
#line 1006 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1007 "llds_out_file.m"
    {
#line 1007 "llds_out_file.m"
      mercury__io__write_list_5_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_31_31, ll_backend__llds_out__llds_out_file__LabelNums_8, (MR_String) ",", (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_2[7]);
    }
#line 1008 "llds_out_file.m"
    {
#line 1008 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) ")\n");
    }
#line 1009 "llds_out_file.m"
    {
#line 1009 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1009 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_29_29, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_4[3]));
#line 1009 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_29_29, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_record_internal_label_decl_group_6_p_0_2));
#line 1009 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_29_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1009 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_29_29, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__ProcLabel_7));
#line 1009 "llds_out_file.m"
    }
#line 1009 "llds_out_file.m"
    {
#line 1009 "llds_out_file.m"
      mercury__list__foldl_4_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_31_31, (MR_Word) &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0, ll_backend__llds_out__llds_out_file__V_29_29, ll_backend__llds_out__llds_out_file__LabelNums_8, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_11)), &ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_DeclSet_12);
    }
#line 1009 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_12 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_DeclSet_12);
#line 1001 "llds_out_file.m"
  }
#line 997 "llds_out_file.m"
}

#line 994 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_internal_label_decls_5_p_0_2(
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
    MR_Word ll_backend__llds_out__llds_out_file__conv3_STATE_VARIABLE_DeclSet_10;

#line 994 "llds_out_file.m"
    {
#line 994 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__insert_internal_label_code_addr_decl_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Integer) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv3_STATE_VARIABLE_DeclSet_10);
    }
#line 994 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv3_STATE_VARIABLE_DeclSet_10));
#line 994 "llds_out_file.m"
  }
#line 994 "llds_out_file.m"
}

#line 992 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_internal_label_decls_5_p_0_1(
#line 992 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 992 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 992 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 992 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 992 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 992 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5)
#line 992 "llds_out_file.m"
{
#line 992 "llds_out_file.m"
  {
#line 992 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 992 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_DeclSet_12;

#line 992 "llds_out_file.m"
    {
#line 992 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_record_internal_label_decl_group_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_DeclSet_12);
    }
#line 992 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_DeclSet_12));
#line 992 "llds_out_file.m"
  }
#line 992 "llds_out_file.m"
}

#line 983 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_internal_label_decls_5_p_0(
#line 983 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 983 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_13,
#line 983 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_14)
#line 983 "llds_out_file.m"
{
#line 986 "llds_out_file.m"
  {
#line 986 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 986 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_22_22 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 986 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_29_29;
#line 986 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ProcLabel_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 986 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__RevLabelNums_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 986 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__LabelNums_10;
#line 986 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__LabelNumChunks_12;
#line 986 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_17_17;
#line 986 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_18_18;
#line 986 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_20_20;
#line 992 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_DeclSet_18_18;
#line 992 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_IO_16;
#line 994 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv4_STATE_VARIABLE_DeclSet_14;

#line 987 "llds_out_file.m"
    {
#line 987 "llds_out_file.m"
      mercury__list__reverse_2_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_22_22, ll_backend__llds_out__llds_out_file__RevLabelNums_7, &ll_backend__llds_out__llds_out_file__LabelNums_10);
    }
#line 991 "llds_out_file.m"
    {
#line 991 "llds_out_file.m"
      mercury__list__chunk_3_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_22_22, ll_backend__llds_out__llds_out_file__LabelNums_10, (MR_Integer) 10, &ll_backend__llds_out__llds_out_file__LabelNumChunks_12);
    }
#line 992 "llds_out_file.m"
    {
#line 992 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 992 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_17_17, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_6[11]));
#line 992 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_17_17, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_record_internal_label_decls_5_p_0_1));
#line 992 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 992 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_17_17, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__ProcLabel_6));
#line 992 "llds_out_file.m"
    }
#line 7786 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_29_29 = (MR_Word) &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0;
#line 992 "llds_out_file.m"
    {
#line 992 "llds_out_file.m"
      mercury__list__foldl2_6_p_2((MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_1[1], ll_backend__llds_out__llds_out_file__TypeCtorInfo_29_29, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__llds_out__llds_out_file__V_17_17, ll_backend__llds_out__llds_out_file__LabelNumChunks_12, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_13)), &ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_DeclSet_18_18, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_IO_16);
    }
#line 992 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_18_18 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_DeclSet_18_18);
#line 994 "llds_out_file.m"
    {
#line 994 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 994 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_20_20, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_4[3]));
#line 994 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_20_20, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_record_internal_label_decls_5_p_0_2));
#line 994 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 994 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_20_20, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__ProcLabel_6));
#line 994 "llds_out_file.m"
    }
#line 994 "llds_out_file.m"
    {
#line 994 "llds_out_file.m"
      mercury__list__foldl_4_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_22_22, ll_backend__llds_out__llds_out_file__TypeCtorInfo_29_29, ll_backend__llds_out__llds_out_file__V_20_20, ll_backend__llds_out__llds_out_file__LabelNums_10, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_18_18)), &ll_backend__llds_out__llds_out_file__conv4_STATE_VARIABLE_DeclSet_14);
    }
#line 994 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_14 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv4_STATE_VARIABLE_DeclSet_14);
#line 986 "llds_out_file.m"
  }
#line 983 "llds_out_file.m"
}

#line 969 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__group_decl_c_labels_3_p_0(
#line 969 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 969 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabelMap_0_2,
#line 969 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabelMap_3)
#line 969 "llds_out_file.m"
{
#line 972 "llds_out_file.m"
  while (MR_TRUE)
#line 972 "llds_out_file.m"
    {
#line 972 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 972 "llds_out_file.m"
      {
#line 972 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 972 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 972 "llds_out_file.m"
          *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabelMap_3 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabelMap_0_2;
#line 972 "llds_out_file.m"
        else
#line 973 "llds_out_file.m"
          {
#line 973 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Label_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 973 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Labels_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 973 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabelMap_19_19;

#line 977 "llds_out_file.m"
            if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Label_7)) == (MR_mktag((MR_Integer) 1))))
#line 978 "llds_out_file.m"
              {
#line 979 "llds_out_file.m"
                {
#line 979 "llds_out_file.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_out.llds_out_file", (MR_String) "predicate \140ll_backend.llds_out.llds_out_file.group_decl_c_labels\'/3", (MR_String) "entry label");
#line 979 "llds_out_file.m"
                  return;
                }
#line 978 "llds_out_file.m"
              }
#line 977 "llds_out_file.m"
            else
#line 975 "llds_out_file.m"
              {
#line 975 "llds_out_file.m"
                MR_Integer ll_backend__llds_out__llds_out_file__LabelNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Label_7, (MR_Integer) 0)));
#line 975 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__ProcLabel_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Label_7, (MR_Integer) 1)));

#line 976 "llds_out_file.m"
                {
#line 976 "llds_out_file.m"
                  mercury__multi_map__set_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (ll_backend__llds_out__llds_out_file__ProcLabel_11)), ((MR_Box) (ll_backend__llds_out__llds_out_file__LabelNum_10)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabelMap_0_2, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabelMap_19_19);
                }
#line 975 "llds_out_file.m"
              }
#line 981 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 981 "llds_out_file.m"
            {
#line 981 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__Labels_8;
#line 981 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabelMap_0__tmp_copy_2 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabelMap_19_19;

#line 981 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabelMap_0_2 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabelMap_0__tmp_copy_2;
#line 981 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 981 "llds_out_file.m"
            }
#line 981 "llds_out_file.m"
            continue;
#line 973 "llds_out_file.m"
          }
#line 972 "llds_out_file.m"
      }
#line 972 "llds_out_file.m"
      break;
#line 972 "llds_out_file.m"
    }
#line 969 "llds_out_file.m"
}

#line 966 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_c_label_decls_7_p_0_2(
#line 966 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 966 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 966 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 966 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 966 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 966 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5)
#line 966 "llds_out_file.m"
{
#line 966 "llds_out_file.m"
  {
#line 966 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 966 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv3_STATE_VARIABLE_DeclSet_18;

#line 966 "llds_out_file.m"
    {
#line 966 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_record_entry_label_decl_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv3_STATE_VARIABLE_DeclSet_18);
    }
#line 966 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv3_STATE_VARIABLE_DeclSet_18));
#line 966 "llds_out_file.m"
  }
#line 966 "llds_out_file.m"
}

#line 964 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_c_label_decls_7_p_0_1(
#line 964 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 964 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 964 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 964 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 964 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 964 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5)
#line 964 "llds_out_file.m"
{
#line 964 "llds_out_file.m"
  {
#line 964 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 964 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_DeclSet_14;

#line 964 "llds_out_file.m"
    {
#line 964 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_record_internal_label_decls_5_p_0(((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_DeclSet_14);
    }
#line 964 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_DeclSet_14));
#line 964 "llds_out_file.m"
  }
#line 964 "llds_out_file.m"
}

#line 956 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_c_label_decls_7_p_0(
#line 956 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_8,
#line 956 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__EntryLabels_9,
#line 956 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__InternalLabels_10,
#line 956 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_15,
#line 956 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_16)
#line 956 "llds_out_file.m"
{
#line 961 "llds_out_file.m"
  {
#line 961 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 961 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_26_26 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0;
#line 961 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_27_27 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 961 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_34_34;
#line 961 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_35_35;
#line 961 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__InternalLabelMap_13;
#line 961 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__InternalLabelList_14;
#line 961 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_19_19;
#line 961 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_21_21;
#line 961 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_23_23;
#line 964 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_DeclSet_21_21;
#line 964 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_IO_22_22;
#line 966 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv5_STATE_VARIABLE_DeclSet_16;
#line 966 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv4_STATE_VARIABLE_IO_18;

#line 962 "llds_out_file.m"
    {
#line 962 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_19_19 = mercury__multi_map__init_0_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_26_26, ll_backend__llds_out__llds_out_file__TypeCtorInfo_27_27);
    }
#line 962 "llds_out_file.m"
    {
#line 962 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__group_decl_c_labels_3_p_0(ll_backend__llds_out__llds_out_file__InternalLabels_10, ll_backend__llds_out__llds_out_file__V_19_19, &ll_backend__llds_out__llds_out_file__InternalLabelMap_13);
    }
#line 963 "llds_out_file.m"
    {
#line 963 "llds_out_file.m"
      mercury__multi_map__to_assoc_list_2_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_26_26, ll_backend__llds_out__llds_out_file__TypeCtorInfo_27_27, ll_backend__llds_out__llds_out_file__InternalLabelMap_13, &ll_backend__llds_out__llds_out_file__InternalLabelList_14);
    }
#line 8048 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_34_34 = (MR_Word) &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0;
#line 8050 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_35_35 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 964 "llds_out_file.m"
    {
#line 964 "llds_out_file.m"
      mercury__list__foldl2_6_p_2((MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_2[0], ll_backend__llds_out__llds_out_file__TypeCtorInfo_34_34, ll_backend__llds_out__llds_out_file__TypeCtorInfo_35_35, (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_2[6], ll_backend__llds_out__llds_out_file__InternalLabelList_14, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_15)), &ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_DeclSet_21_21, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_IO_22_22);
    }
#line 964 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_21_21 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_DeclSet_21_21);
#line 966 "llds_out_file.m"
    {
#line 966 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 966 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_23_23, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_6[10]));
#line 966 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_23_23, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_record_c_label_decls_7_p_0_2));
#line 966 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 966 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_23_23, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_8));
#line 966 "llds_out_file.m"
    }
#line 966 "llds_out_file.m"
    {
#line 966 "llds_out_file.m"
      mercury__list__foldl2_6_p_2((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ll_backend__llds_out__llds_out_file__TypeCtorInfo_34_34, ll_backend__llds_out__llds_out_file__TypeCtorInfo_35_35, ll_backend__llds_out__llds_out_file__V_23_23, ll_backend__llds_out__llds_out_file__EntryLabels_9, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_21_21)), &ll_backend__llds_out__llds_out_file__conv5_STATE_VARIABLE_DeclSet_16, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv4_STATE_VARIABLE_IO_18);
    }
#line 966 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_16 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv5_STATE_VARIABLE_DeclSet_16);
#line 961 "llds_out_file.m"
  }
#line 956 "llds_out_file.m"
}

#line 920 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_foreign_decl_or_code_7_p_0(
#line 920 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_8,
#line 920 "llds_out_file.m"
  MR_String ll_backend__llds_out__llds_out_file__PragmaType_9,
#line 920 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Lang_10,
#line 920 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__LiteralOrInclude_11,
#line 920 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Context_12)
#line 920 "llds_out_file.m"
{
#line 925 "llds_out_file.m"
  {
#line 925 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 925 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__AutoComments_14 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 925 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__LineNumbers_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 926 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 0)));
#line 926 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_42_42 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 1)));
#line 926 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_43_43 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 2)));
#line 926 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 3)));
#line 926 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 4)));
#line 926 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 5)));
#line 926 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 6)));
#line 926 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 926 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 926 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 926 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 926 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 926 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 926 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 926 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 926 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 926 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 926 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 926 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 926 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 8)));

#line 929 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__succeeded = (ll_backend__llds_out__llds_out_file__AutoComments_14 == (MR_Integer) 1);
#line 929 "llds_out_file.m"
    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 930 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__succeeded = (ll_backend__llds_out__llds_out_file__LineNumbers_15 == (MR_Integer) 1);
#line 939 "llds_out_file.m"
    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 932 "llds_out_file.m"
      {
#line 932 "llds_out_file.m"
        {
#line 932 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "/* ");
        }
#line 933 "llds_out_file.m"
        {
#line 933 "llds_out_file.m"
          parse_tree__prog_out__write_context_3_p_0(ll_backend__llds_out__llds_out_file__Context_12);
        }
#line 934 "llds_out_file.m"
        {
#line 934 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) " pragma ");
        }
#line 935 "llds_out_file.m"
        {
#line 935 "llds_out_file.m"
          mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__PragmaType_9);
        }
#line 936 "llds_out_file.m"
        {
#line 936 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "(");
        }
#line 937 "llds_out_file.m"
        {
#line 937 "llds_out_file.m"
          mercury__io__write_3_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, ((MR_Box) (ll_backend__llds_out__llds_out_file__Lang_10)));
        }
#line 938 "llds_out_file.m"
        {
#line 938 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) ") */\n");
        }
#line 932 "llds_out_file.m"
      }
#line 939 "llds_out_file.m"
    else
#line 938 "llds_out_file.m"
      {
#line 938 "llds_out_file.m"
      }
#line 946 "llds_out_file.m"
    if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__LiteralOrInclude_11)) == (MR_mktag((MR_Integer) 1))))
#line 947 "llds_out_file.m"
      {
#line 947 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__IncludeFileName_17 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__LiteralOrInclude_11, (MR_Integer) 0)));
#line 947 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__SourceFileName_18 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 2)));
#line 947 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__IncludePath_19;
#line 947 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_33_33;
#line 948 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 0)));
#line 948 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__V_84_84 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 1)));
#line 948 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 3)));
#line 948 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 4)));
#line 948 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 5)));
#line 948 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 6)));
#line 948 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_89_89 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 948 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_90_90 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 948 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_91_91 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 948 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_92_92 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 948 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_93_93 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 948 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_94_94 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 948 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_95_95 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 948 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_96_96 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 948 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_97_97 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 948 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_98_98 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 948 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_99_99 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 948 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_100_100 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 948 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_101_101 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 948 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_102_102 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 948 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 8)));

#line 949 "llds_out_file.m"
        {
#line 949 "llds_out_file.m"
          parse_tree__file_names__make_include_file_path_3_p_0(ll_backend__llds_out__llds_out_file__SourceFileName_18, ll_backend__llds_out__llds_out_file__IncludeFileName_17, &ll_backend__llds_out__llds_out_file__IncludePath_19);
        }
#line 950 "llds_out_file.m"
        {
#line 950 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 950 "llds_out_file.m"
          MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_33_33, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__IncludePath_19));
#line 950 "llds_out_file.m"
          MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_33_33, 1) = ((MR_Box) ((MR_Integer) 1));
#line 950 "llds_out_file.m"
        }
#line 950 "llds_out_file.m"
        {
#line 950 "llds_out_file.m"
          ll_backend__llds_out__llds_out_util__output_set_line_num_4_p_0(ll_backend__llds_out__llds_out_file__Info_8, ll_backend__llds_out__llds_out_file__V_33_33);
        }
#line 951 "llds_out_file.m"
        {
#line 951 "llds_out_file.m"
          libs__file_util__write_include_file_contents_3_p_0(ll_backend__llds_out__llds_out_file__IncludePath_19);
        }
#line 947 "llds_out_file.m"
      }
#line 946 "llds_out_file.m"
    else
#line 943 "llds_out_file.m"
      {
#line 943 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__Code_16 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__LiteralOrInclude_11, (MR_Integer) 0)));

#line 944 "llds_out_file.m"
        {
#line 944 "llds_out_file.m"
          ll_backend__llds_out__llds_out_util__output_set_line_num_4_p_0(ll_backend__llds_out__llds_out_file__Info_8, ll_backend__llds_out__llds_out_file__Context_12);
        }
#line 945 "llds_out_file.m"
        {
#line 945 "llds_out_file.m"
          mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__Code_16);
        }
#line 943 "llds_out_file.m"
      }
#line 953 "llds_out_file.m"
    {
#line 953 "llds_out_file.m"
      mercury__io__nl_2_p_0();
    }
#line 954 "llds_out_file.m"
    {
#line 954 "llds_out_file.m"
      ll_backend__llds_out__llds_out_util__output_reset_line_num_3_p_0(ll_backend__llds_out__llds_out_file__Info_8);
#line 954 "llds_out_file.m"
      return;
    }
#line 925 "llds_out_file.m"
  }
#line 920 "llds_out_file.m"
}

#line 894 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_foreign_header_include_line_6_p_0(
#line 894 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_7,
#line 894 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Decl_8,
#line 894 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AlreadyDone_0_15,
#line 894 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AlreadyDone_16)
#line 894 "llds_out_file.m"
{
#line 899 "llds_out_file.m"
  {
#line 899 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 899 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__Lang_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Decl_8, (MR_Integer) 0)));
#line 899 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__LiteralOrInclude_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Decl_8, (MR_Integer) 2)));
#line 899 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Decl_8, (MR_Integer) 3)));
#line 900 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file___IsLocal_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Decl_8, (MR_Integer) 1)));

#line 910 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__Lang_11 == (MR_Integer) 0))
#line 907 "llds_out_file.m"
      {
#line 907 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AlreadyDone_22_22;

#line 904 "llds_out_file.m"
        {
#line 904 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__succeeded = mercury__set__insert_new_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_literal_or_include_0, ((MR_Box) (ll_backend__llds_out__llds_out_file__LiteralOrInclude_13)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AlreadyDone_0_15, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AlreadyDone_22_22);
        }
#line 907 "llds_out_file.m"
        if (ll_backend__llds_out__llds_out_file__succeeded)
#line 905 "llds_out_file.m"
          {
#line 905 "llds_out_file.m"
            *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AlreadyDone_16 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AlreadyDone_22_22;
#line 905 "llds_out_file.m"
            {
#line 905 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__output_foreign_decl_or_code_7_p_0(ll_backend__llds_out__llds_out_file__Info_7, (MR_String) "foreign_decl", ll_backend__llds_out__llds_out_file__Lang_11, ll_backend__llds_out__llds_out_file__LiteralOrInclude_13, ll_backend__llds_out__llds_out_file__Context_14);
#line 905 "llds_out_file.m"
              return;
            }
#line 905 "llds_out_file.m"
          }
#line 907 "llds_out_file.m"
        else
#line 908 "llds_out_file.m"
          *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AlreadyDone_16 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AlreadyDone_0_15;
#line 907 "llds_out_file.m"
      }
#line 910 "llds_out_file.m"
    else
#line 915 "llds_out_file.m"
      {
#line 916 "llds_out_file.m"
        {
#line 916 "llds_out_file.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_out.llds_out_file", (MR_String) "predicate \140ll_backend.llds_out.llds_out_file.output_foreign_header_include_line\'/6", (MR_String) "unexpected: foreign decl code other than C");
#line 916 "llds_out_file.m"
          return;
        }
#line 915 "llds_out_file.m"
      }
#line 899 "llds_out_file.m"
  }
#line 894 "llds_out_file.m"
}

#line 891 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_foreign_header_include_lines_4_p_0_1(
#line 891 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 891 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 891 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 891 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 891 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 891 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5)
#line 891 "llds_out_file.m"
{
#line 891 "llds_out_file.m"
  {
#line 891 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 891 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_AlreadyDone_16;

#line 891 "llds_out_file.m"
    {
#line 891 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_foreign_header_include_line_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_AlreadyDone_16);
    }
#line 891 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_AlreadyDone_16));
#line 891 "llds_out_file.m"
  }
#line 891 "llds_out_file.m"
}

#line 887 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_foreign_header_include_lines_4_p_0(
#line 887 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_5,
#line 887 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Decls_6)
#line 887 "llds_out_file.m"
{
#line 890 "llds_out_file.m"
  {
#line 890 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 890 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_11_11;
#line 890 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_12_12;
#line 891 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_8_8;
#line 891 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv2_V_8_8;
#line 891 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_IO_10;

#line 891 "llds_out_file.m"
    {
#line 891 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 891 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_11_11, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_6[9]));
#line 891 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_11_11, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_foreign_header_include_lines_4_p_0_1));
#line 891 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 891 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_11_11, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_5));
#line 891 "llds_out_file.m"
    }
#line 892 "llds_out_file.m"
    {
#line 892 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_12_12 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_literal_or_include_0);
    }
#line 891 "llds_out_file.m"
    {
#line 891 "llds_out_file.m"
      mercury__list__foldl2_6_p_2((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0, (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_1[0], (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__llds_out__llds_out_file__V_11_11, ll_backend__llds_out__llds_out_file__Decls_6, ((MR_Box) (ll_backend__llds_out__llds_out_file__V_12_12)), &ll_backend__llds_out__llds_out_file__conv2_V_8_8, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_IO_10);
    }
#line 891 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_8_8 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv2_V_8_8);
#line 890 "llds_out_file.m"
  }
#line 887 "llds_out_file.m"
}

#line 868 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_user_foreign_code_4_p_0(
#line 868 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_5,
#line 868 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__UserForeignCode_6)
#line 868 "llds_out_file.m"
{
#line 871 "llds_out_file.m"
  {
#line 871 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 871 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__Lang_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__UserForeignCode_6, (MR_Integer) 0)));
#line 871 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__LiteralOrInclude_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__UserForeignCode_6, (MR_Integer) 1)));
#line 871 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__UserForeignCode_6, (MR_Integer) 2)));

#line 877 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__Lang_8 == (MR_Integer) 0))
#line 874 "llds_out_file.m"
      {
#line 875 "llds_out_file.m"
        {
#line 875 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__output_foreign_decl_or_code_7_p_0(ll_backend__llds_out__llds_out_file__Info_5, (MR_String) "foreign_code", ll_backend__llds_out__llds_out_file__Lang_8, ll_backend__llds_out__llds_out_file__LiteralOrInclude_9, ll_backend__llds_out__llds_out_file__Context_10);
#line 875 "llds_out_file.m"
          return;
        }
#line 874 "llds_out_file.m"
      }
#line 877 "llds_out_file.m"
    else
#line 882 "llds_out_file.m"
      {
#line 883 "llds_out_file.m"
        {
#line 883 "llds_out_file.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_out.llds_out_file", (MR_String) "predicate \140ll_backend.llds_out.llds_out_file.output_user_foreign_code\'/4", (MR_String) "unimplemented: foreign code other than C");
#line 883 "llds_out_file.m"
          return;
        }
#line 882 "llds_out_file.m"
      }
#line 871 "llds_out_file.m"
  }
#line 868 "llds_out_file.m"
}

#line 852 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_static_linkage_define_2_p_0(void)
#line 852 "llds_out_file.m"
{
#line 854 "llds_out_file.m"
  {
#line 854 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 860 "llds_out_file.m"
    {
#line 860 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#ifdef _MSC_VER\n");
    }
#line 861 "llds_out_file.m"
    {
#line 861 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#define MR_STATIC_LINKAGE extern\n");
    }
#line 862 "llds_out_file.m"
    {
#line 862 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#else\n");
    }
#line 863 "llds_out_file.m"
    {
#line 863 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#define MR_STATIC_LINKAGE static\n");
    }
#line 864 "llds_out_file.m"
    {
#line 864 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#endif\n");
#line 864 "llds_out_file.m"
      return;
    }
#line 854 "llds_out_file.m"
  }
#line 852 "llds_out_file.m"
}

#line 847 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_annotated_c_module_6_p_0_2(
#line 847 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 847 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 847 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 847 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 847 "llds_out_file.m"
{
#line 847 "llds_out_file.m"
  {
#line 847 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 847 "llds_out_file.m"
    {
#line 847 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_annotated_c_procedure_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
#line 847 "llds_out_file.m"
      return;
    }
#line 847 "llds_out_file.m"
  }
#line 847 "llds_out_file.m"
}

#line 839 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_annotated_c_module_6_p_0_1(
#line 839 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 839 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 839 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 839 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 839 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 839 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5)
#line 839 "llds_out_file.m"
{
#line 839 "llds_out_file.m"
  {
#line 839 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 839 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_DeclSet_16;

#line 839 "llds_out_file.m"
    {
#line 839 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_record_c_procedure_decls_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_DeclSet_16);
    }
#line 839 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_DeclSet_16));
#line 839 "llds_out_file.m"
  }
#line 839 "llds_out_file.m"
}

#line 832 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_annotated_c_module_6_p_0(
#line 832 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_7,
#line 832 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__AnnotatedModule_8,
#line 832 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_15,
#line 832 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_16)
#line 832 "llds_out_file.m"
{
#line 835 "llds_out_file.m"
  {
#line 835 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 835 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_43_43;
#line 835 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_45_45;
#line 835 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__ModuleName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__AnnotatedModule_8, (MR_Integer) 0)));
#line 835 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__AnnotatedProcedures_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__AnnotatedModule_8, (MR_Integer) 1)));
#line 835 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__EntryLabels_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__AnnotatedModule_8, (MR_Integer) 2)));
#line 835 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__InternalLabels_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__AnnotatedModule_8, (MR_Integer) 3)));
#line 835 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_21_21;
#line 835 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_34_34;
#line 839 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_DeclSet_16;
#line 839 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_IO_23_23;
#line 847 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv3_STATE_VARIABLE_IO_35_35;

#line 838 "llds_out_file.m"
    {
#line 838 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 839 "llds_out_file.m"
    {
#line 839 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 839 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_21_21, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_6[8]));
#line 839 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_21_21, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_annotated_c_module_6_p_0_1));
#line 839 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 839 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_21_21, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_7));
#line 839 "llds_out_file.m"
    }
#line 8706 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_43_43 = (MR_Word) &ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__type_ctor_info_annotated_c_procedure_0;
#line 8708 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_45_45 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 839 "llds_out_file.m"
    {
#line 839 "llds_out_file.m"
      mercury__list__foldl2_6_p_2(ll_backend__llds_out__llds_out_file__TypeCtorInfo_43_43, (MR_Word) &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0, ll_backend__llds_out__llds_out_file__TypeCtorInfo_45_45, ll_backend__llds_out__llds_out_file__V_21_21, ll_backend__llds_out__llds_out_file__AnnotatedProcedures_12, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_15)), &ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_DeclSet_16, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_IO_23_23);
    }
#line 839 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_16 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_DeclSet_16);
#line 841 "llds_out_file.m"
    {
#line 841 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 842 "llds_out_file.m"
    {
#line 842 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "MR_BEGIN_MODULE(");
    }
#line 843 "llds_out_file.m"
    {
#line 843 "llds_out_file.m"
      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_11);
    }
#line 844 "llds_out_file.m"
    {
#line 844 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) ")\n");
    }
#line 845 "llds_out_file.m"
    {
#line 845 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0(ll_backend__llds_out__llds_out_file__Info_7, ll_backend__llds_out__llds_out_file__EntryLabels_13, ll_backend__llds_out__llds_out_file__InternalLabels_14);
    }
#line 846 "llds_out_file.m"
    {
#line 846 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "MR_BEGIN_CODE\n");
    }
#line 847 "llds_out_file.m"
    {
#line 847 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 847 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_34_34, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_4[2]));
#line 847 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_34_34, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_annotated_c_module_6_p_0_2));
#line 847 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 847 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_34_34, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_7));
#line 847 "llds_out_file.m"
    }
#line 847 "llds_out_file.m"
    {
#line 847 "llds_out_file.m"
      mercury__list__foldl_4_p_2(ll_backend__llds_out__llds_out_file__TypeCtorInfo_43_43, ll_backend__llds_out__llds_out_file__TypeCtorInfo_45_45, ll_backend__llds_out__llds_out_file__V_34_34, ll_backend__llds_out__llds_out_file__AnnotatedProcedures_12, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv3_STATE_VARIABLE_IO_35_35);
    }
#line 848 "llds_out_file.m"
    {
#line 848 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "MR_END_MODULE\n");
#line 848 "llds_out_file.m"
      return;
    }
#line 835 "llds_out_file.m"
  }
#line 832 "llds_out_file.m"
}

#line 822 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_required_init_or_final_calls_3_p_0(
#line 822 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1)
#line 822 "llds_out_file.m"
{
#line 825 "llds_out_file.m"
  while (MR_TRUE)
#line 825 "llds_out_file.m"
    {
#line 825 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 825 "llds_out_file.m"
      {
#line 825 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 825 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 825 "llds_out_file.m"
          {
#line 825 "llds_out_file.m"
          }
#line 825 "llds_out_file.m"
        else
#line 826 "llds_out_file.m"
          {
#line 826 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__Name_7 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 826 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Names_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 826 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__V_12_12;
#line 826 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__V_15_15;

#line 827 "llds_out_file.m"
            {
#line 827 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__V_15_15 = mercury__string__f_43_43_2_f_0(ll_backend__llds_out__llds_out_file__Name_7, (MR_String) "();\n");
            }
#line 827 "llds_out_file.m"
            {
#line 827 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) "\t", ll_backend__llds_out__llds_out_file__V_15_15);
            }
#line 827 "llds_out_file.m"
            {
#line 827 "llds_out_file.m"
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__V_12_12);
            }
#line 828 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 828 "llds_out_file.m"
            {
#line 828 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__Names_8;

#line 828 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 828 "llds_out_file.m"
            }
#line 828 "llds_out_file.m"
            continue;
#line 826 "llds_out_file.m"
          }
#line 825 "llds_out_file.m"
      }
#line 825 "llds_out_file.m"
      break;
#line 825 "llds_out_file.m"
    }
#line 822 "llds_out_file.m"
}

#line 815 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_env_var_init_3_p_0(
#line 815 "llds_out_file.m"
  MR_String ll_backend__llds_out__llds_out_file__EnvVarName_4)
#line 815 "llds_out_file.m"
{
#line 817 "llds_out_file.m"
  {
#line 817 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 818 "llds_out_file.m"
    {
#line 818 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "ENVVAR ");
    }
#line 819 "llds_out_file.m"
    {
#line 819 "llds_out_file.m"
      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__EnvVarName_4);
    }
#line 820 "llds_out_file.m"
    {
#line 820 "llds_out_file.m"
      mercury__io__nl_2_p_0();
#line 820 "llds_out_file.m"
      return;
    }
#line 817 "llds_out_file.m"
  }
#line 815 "llds_out_file.m"
}

#line 811 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_init_comment_6_p_0_1(
#line 811 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 811 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 811 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 811 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 811 "llds_out_file.m"
{
#line 811 "llds_out_file.m"
  {
#line 811 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 811 "llds_out_file.m"
    {
#line 811 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_env_var_init_3_p_0(((MR_String) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
#line 811 "llds_out_file.m"
      return;
    }
#line 811 "llds_out_file.m"
  }
#line 811 "llds_out_file.m"
}

#line 784 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_init_comment_6_p_0(
#line 784 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ModuleName_7,
#line 784 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__UserInitPredCNames_8,
#line 784 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__UserFinalPredCNames_9,
#line 784 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__EnvVarNames_10)
#line 784 "llds_out_file.m"
{
#line 788 "llds_out_file.m"
  {
#line 788 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 811 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_IO_36_36;

#line 789 "llds_out_file.m"
    {
#line 789 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "/*\n");
    }
#line 790 "llds_out_file.m"
    {
#line 790 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "INIT ");
    }
#line 791 "llds_out_file.m"
    {
#line 791 "llds_out_file.m"
      backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_7);
    }
#line 792 "llds_out_file.m"
    {
#line 792 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "init\n");
    }
#line 797 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__UserInitPredCNames_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 796 "llds_out_file.m"
      {
#line 796 "llds_out_file.m"
      }
#line 797 "llds_out_file.m"
    else
#line 798 "llds_out_file.m"
      {
#line 799 "llds_out_file.m"
        {
#line 799 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "REQUIRED_INIT ");
        }
#line 800 "llds_out_file.m"
        {
#line 800 "llds_out_file.m"
          backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_7);
        }
#line 801 "llds_out_file.m"
        {
#line 801 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "required_init\n");
        }
#line 798 "llds_out_file.m"
      }
#line 805 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__UserFinalPredCNames_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 804 "llds_out_file.m"
      {
#line 804 "llds_out_file.m"
      }
#line 805 "llds_out_file.m"
    else
#line 806 "llds_out_file.m"
      {
#line 807 "llds_out_file.m"
        {
#line 807 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "REQUIRED_FINAL ");
        }
#line 808 "llds_out_file.m"
        {
#line 808 "llds_out_file.m"
          backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_7);
        }
#line 809 "llds_out_file.m"
        {
#line 809 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "required_final\n");
        }
#line 806 "llds_out_file.m"
      }
#line 811 "llds_out_file.m"
    {
#line 811 "llds_out_file.m"
      mercury__list__foldl_4_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_2[5], ll_backend__llds_out__llds_out_file__EnvVarNames_10, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_IO_36_36);
    }
#line 812 "llds_out_file.m"
    {
#line 812 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "ENDINIT\n");
    }
#line 813 "llds_out_file.m"
    {
#line 813 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "*/\n\n");
#line 813 "llds_out_file.m"
      return;
    }
#line 788 "llds_out_file.m"
  }
#line 784 "llds_out_file.m"
}

#line 751 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_write_proc_static_list_3_p_0(
#line 751 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1)
#line 751 "llds_out_file.m"
{
#line 754 "llds_out_file.m"
  while (MR_TRUE)
#line 754 "llds_out_file.m"
    {
#line 754 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 754 "llds_out_file.m"
      {
#line 754 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 754 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 754 "llds_out_file.m"
          {
#line 754 "llds_out_file.m"
          }
#line 754 "llds_out_file.m"
        else
#line 755 "llds_out_file.m"
          {
#line 755 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__ProcLayout_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 755 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__ProcLayouts_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 755 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__RttiProcLabel_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__ProcLayout_7, (MR_Integer) 0)));
#line 755 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__MaybeMore_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__ProcLayout_7, (MR_Integer) 2)));
#line 756 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__ProcLayout_7, (MR_Integer) 1)));
#line 757 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_22_22;
#line 757 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_14_14;
#line 757 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_15_15;
#line 757 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_16_16;
#line 757 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file___ProcStatic_13;

#line 757 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__MaybeMore_12)) == (MR_mktag((MR_Integer) 1)));
#line 757 "llds_out_file.m"
            if (ll_backend__llds_out__llds_out_file__succeeded)
#line 757 "llds_out_file.m"
              {
#line 757 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__MaybeMore_12, (MR_Integer) 0)));
#line 757 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__MaybeMore_12, (MR_Integer) 1)));
#line 757 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__MaybeMore_12, (MR_Integer) 2)));
#line 757 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__MaybeMore_12, (MR_Integer) 3)));
#line 757 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__V_22_22)) == (MR_mktag((MR_Integer) 1)));
#line 757 "llds_out_file.m"
                if (ll_backend__llds_out__llds_out_file__succeeded)
#line 757 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file___ProcStatic_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__V_22_22, (MR_Integer) 0)));
#line 757 "llds_out_file.m"
              }
#line 774 "llds_out_file.m"
            if (ll_backend__llds_out__llds_out_file__succeeded)
#line 758 "llds_out_file.m"
              {
#line 758 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__ProcLabel_17;
#line 758 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__UserOrUCI_18;
#line 758 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__Kind_19;
#line 758 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__V_27_27;

#line 758 "llds_out_file.m"
                {
#line 758 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__ProcLabel_17 = backend_libs__proc_label__make_proc_label_from_rtti_1_f_0(ll_backend__llds_out__llds_out_file__RttiProcLabel_10);
                }
#line 759 "llds_out_file.m"
                {
#line 759 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__UserOrUCI_18 = ll_backend__layout_out__proc_label_user_or_uci_1_f_0(ll_backend__llds_out__llds_out_file__ProcLabel_17);
                }
#line 760 "llds_out_file.m"
                {
#line 760 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__Kind_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 760 "llds_out_file.m"
                  MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__Kind_19, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__UserOrUCI_18));
#line 760 "llds_out_file.m"
                }
#line 766 "llds_out_file.m"
                if ((ll_backend__llds_out__llds_out_file__UserOrUCI_18 == (MR_Integer) 1))
#line 767 "llds_out_file.m"
                  {
#line 768 "llds_out_file.m"
                    {
#line 768 "llds_out_file.m"
                      mercury__io__write_string_3_p_0((MR_String) "\tMR_write_out_uci_proc_static(deep_fp, procrep_fp,\n\t\t&");
                    }
#line 767 "llds_out_file.m"
                  }
#line 766 "llds_out_file.m"
                else
#line 762 "llds_out_file.m"
                  {
#line 763 "llds_out_file.m"
                    {
#line 763 "llds_out_file.m"
                      mercury__io__write_string_3_p_0((MR_String) "\tMR_write_out_user_proc_static(deep_fp, procrep_fp,\n\t\t&");
                    }
#line 762 "llds_out_file.m"
                  }
#line 772 "llds_out_file.m"
                {
#line 772 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 772 "llds_out_file.m"
                  MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_27_27, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__RttiProcLabel_10));
#line 772 "llds_out_file.m"
                  MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_27_27, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Kind_19));
#line 772 "llds_out_file.m"
                }
#line 772 "llds_out_file.m"
                {
#line 772 "llds_out_file.m"
                  ll_backend__layout_out__output_layout_name_3_p_0(ll_backend__llds_out__llds_out_file__V_27_27);
                }
#line 773 "llds_out_file.m"
                {
#line 773 "llds_out_file.m"
                  mercury__io__write_string_3_p_0((MR_String) ");\n");
                }
#line 758 "llds_out_file.m"
              }
#line 774 "llds_out_file.m"
            else
#line 773 "llds_out_file.m"
              {
#line 773 "llds_out_file.m"
              }
#line 777 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 777 "llds_out_file.m"
            {
#line 777 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__ProcLayouts_8;

#line 777 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 777 "llds_out_file.m"
            }
#line 777 "llds_out_file.m"
            continue;
#line 755 "llds_out_file.m"
          }
#line 754 "llds_out_file.m"
      }
#line 754 "llds_out_file.m"
      break;
#line 754 "llds_out_file.m"
    }
#line 751 "llds_out_file.m"
}

#line 738 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_debugger_init_list_3_p_0(
#line 738 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1)
#line 738 "llds_out_file.m"
{
#line 741 "llds_out_file.m"
  while (MR_TRUE)
#line 741 "llds_out_file.m"
    {
#line 741 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 741 "llds_out_file.m"
      {
#line 741 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 741 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 741 "llds_out_file.m"
          {
#line 741 "llds_out_file.m"
          }
#line 741 "llds_out_file.m"
        else
#line 742 "llds_out_file.m"
          {
#line 742 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Data_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 742 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Datas_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 742 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__ModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Data_7, (MR_Integer) 0)));
#line 742 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_23_23;
#line 743 "llds_out_file.m"
            MR_Integer ll_backend__llds_out__llds_out_file__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Data_7, (MR_Integer) 1)));
#line 743 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Data_7, (MR_Integer) 2)));
#line 743 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Data_7, (MR_Integer) 3)));
#line 743 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Data_7, (MR_Integer) 4)));

#line 744 "llds_out_file.m"
            {
#line 744 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "\tif (MR_register_module_layout != NULL) {\n");
            }
#line 745 "llds_out_file.m"
            {
#line 745 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "\t\t(*MR_register_module_layout)(");
            }
#line 746 "llds_out_file.m"
            {
#line 746 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "\n\t\t\t&");
            }
#line 747 "llds_out_file.m"
            {
#line 747 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__V_23_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 747 "llds_out_file.m"
              MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__V_23_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
#line 747 "llds_out_file.m"
              MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__V_23_23, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__ModuleName_10));
#line 747 "llds_out_file.m"
            }
#line 747 "llds_out_file.m"
            {
#line 747 "llds_out_file.m"
              ll_backend__layout_out__output_layout_name_3_p_0(ll_backend__llds_out__llds_out_file__V_23_23);
            }
#line 748 "llds_out_file.m"
            {
#line 748 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) ");\n\t}\n");
            }
#line 749 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 749 "llds_out_file.m"
            {
#line 749 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__Datas_8;

#line 749 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 749 "llds_out_file.m"
            }
#line 749 "llds_out_file.m"
            continue;
#line 742 "llds_out_file.m"
          }
#line 741 "llds_out_file.m"
      }
#line 741 "llds_out_file.m"
      break;
#line 741 "llds_out_file.m"
    }
#line 738 "llds_out_file.m"
}

#line 726 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_type_tables_init_list_3_p_0(
#line 726 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1)
#line 726 "llds_out_file.m"
{
#line 729 "llds_out_file.m"
  while (MR_TRUE)
#line 729 "llds_out_file.m"
    {
#line 729 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 729 "llds_out_file.m"
      {
#line 729 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 729 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 729 "llds_out_file.m"
          {
#line 729 "llds_out_file.m"
          }
#line 729 "llds_out_file.m"
        else
#line 730 "llds_out_file.m"
          {
#line 730 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Data_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 730 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Datas_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));

#line 731 "llds_out_file.m"
            {
#line 731 "llds_out_file.m"
              ll_backend__rtti_out__register_rtti_data_if_nec_3_p_0(ll_backend__llds_out__llds_out_file__Data_7);
            }
#line 732 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 732 "llds_out_file.m"
            {
#line 732 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__Datas_8;

#line 732 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 732 "llds_out_file.m"
            }
#line 732 "llds_out_file.m"
            continue;
#line 730 "llds_out_file.m"
          }
#line 729 "llds_out_file.m"
      }
#line 729 "llds_out_file.m"
      break;
#line 729 "llds_out_file.m"
    }
#line 726 "llds_out_file.m"
}

#line 704 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_alloc_sites_init_4_p_0(
#line 704 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_5,
#line 704 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__AllocSites_6)
#line 704 "llds_out_file.m"
{
#line 709 "llds_out_file.m"
  {
#line 709 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 709 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__AllocSites_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 709 "llds_out_file.m"
      {
#line 709 "llds_out_file.m"
      }
#line 709 "llds_out_file.m"
    else
#line 711 "llds_out_file.m"
      {
#line 711 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__MangledModuleName_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 1)));
#line 711 "llds_out_file.m"
        MR_Integer ll_backend__llds_out__llds_out_file__NumAllocSites_11;
#line 712 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 0)));
#line 712 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 2)));
#line 712 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 3)));
#line 712 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 4)));
#line 712 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 5)));
#line 712 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)));
#line 712 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_34_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 712 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 712 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 712 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 712 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 712 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 712 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 712 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 712 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 712 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 712 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 712 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 712 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 712 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 712 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 8)));

#line 713 "llds_out_file.m"
        {
#line 713 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__NumAllocSites_11 = mercury__list__length_1_f_0((MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_alloc_site_info_0, ll_backend__llds_out__llds_out_file__AllocSites_6);
        }
#line 714 "llds_out_file.m"
        {
#line 714 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "#ifdef MR_MPROF_PROFILE_MEMORY_ATTRIBUTION\n");
        }
#line 715 "llds_out_file.m"
        {
#line 715 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "\tMR_register_alloc_sites(");
        }
#line 716 "llds_out_file.m"
        {
#line 716 "llds_out_file.m"
          ll_backend__layout_out__output_layout_array_name_5_p_0((MR_Integer) 0, ll_backend__llds_out__llds_out_file__MangledModuleName_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17)));
        }
#line 718 "llds_out_file.m"
        {
#line 718 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) ", ");
        }
#line 719 "llds_out_file.m"
        {
#line 719 "llds_out_file.m"
          mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_file__NumAllocSites_11);
        }
#line 720 "llds_out_file.m"
        {
#line 720 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) ");\n");
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
}

#line 695 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_data_init_list_3_p_0(
#line 695 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1)
#line 695 "llds_out_file.m"
{
#line 697 "llds_out_file.m"
  while (MR_TRUE)
#line 697 "llds_out_file.m"
    {
#line 697 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 697 "llds_out_file.m"
      {
#line 697 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 697 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 697 "llds_out_file.m"
          {
#line 697 "llds_out_file.m"
          }
#line 697 "llds_out_file.m"
        else
#line 698 "llds_out_file.m"
          {
#line 698 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Data_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 698 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Datas_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));

#line 699 "llds_out_file.m"
            {
#line 699 "llds_out_file.m"
              ll_backend__rtti_out__init_rtti_data_if_nec_3_p_0(ll_backend__llds_out__llds_out_file__Data_7);
            }
#line 700 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 700 "llds_out_file.m"
            {
#line 700 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__Datas_8;

#line 700 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 700 "llds_out_file.m"
            }
#line 700 "llds_out_file.m"
            continue;
#line 698 "llds_out_file.m"
          }
#line 697 "llds_out_file.m"
      }
#line 697 "llds_out_file.m"
      break;
#line 697 "llds_out_file.m"
    }
#line 695 "llds_out_file.m"
}

#line 669 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_init_bunch_calls_6_p_0(
#line 669 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_1,
#line 669 "llds_out_file.m"
  MR_String ll_backend__llds_out__llds_out_file__InitStatus_2,
#line 669 "llds_out_file.m"
  MR_Integer ll_backend__llds_out__llds_out_file__Seq_3,
#line 669 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__4_4)
#line 669 "llds_out_file.m"
{
#line 672 "llds_out_file.m"
  while (MR_TRUE)
#line 672 "llds_out_file.m"
    {
#line 672 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 672 "llds_out_file.m"
      {
#line 672 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 672 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 672 "llds_out_file.m"
          {
#line 672 "llds_out_file.m"
          }
#line 672 "llds_out_file.m"
        else
#line 673 "llds_out_file.m"
          {
#line 673 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Bunches_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__4_4, (MR_Integer) 1)));
#line 673 "llds_out_file.m"
            MR_Integer ll_backend__llds_out__llds_out_file__NextSeq_19;
#line 673 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__MangledModuleName_35;
#line 673 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__4_4, (MR_Integer) 0)));
#line 685 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_45_45;
#line 685 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__V_46_46;
#line 685 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_47_47;
#line 685 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_48_48;
#line 685 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_49_49;
#line 685 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_50_50;
#line 685 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_51_51;
#line 685 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_52_52;
#line 685 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_53_53;
#line 685 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_54_54;
#line 685 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_55_55;
#line 685 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_56_56;
#line 685 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_57_57;
#line 685 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_58_58;
#line 685 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_59_59;
#line 685 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_60_60;
#line 685 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_61_61;
#line 685 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_62_62;
#line 685 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_63_63;
#line 685 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_64_64;
#line 685 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_65_65;

#line 674 "llds_out_file.m"
            {
#line 674 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "\t");
            }
#line 684 "llds_out_file.m"
            {
#line 684 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "mercury__");
            }
#line 685 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 0)));
#line 685 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__MangledModuleName_35 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 1)));
#line 685 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_46_46 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 2)));
#line 685 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 3)));
#line 685 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 4)));
#line 685 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 5)));
#line 685 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 6)));
#line 685 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_51_51 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 685 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 685 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 685 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 685 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 685 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 685 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 685 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 685 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 685 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 685 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 685 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_62_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 685 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 685 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 685 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 8)));
#line 686 "llds_out_file.m"
            {
#line 686 "llds_out_file.m"
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__MangledModuleName_35);
            }
#line 687 "llds_out_file.m"
            {
#line 687 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "_");
            }
#line 688 "llds_out_file.m"
            {
#line 688 "llds_out_file.m"
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__InitStatus_2);
            }
#line 689 "llds_out_file.m"
            {
#line 689 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "_bunch_");
            }
#line 690 "llds_out_file.m"
            {
#line 690 "llds_out_file.m"
              mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_file__Seq_3);
            }
#line 676 "llds_out_file.m"
            {
#line 676 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "();\n");
            }
#line 677 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__NextSeq_19 = (ll_backend__llds_out__llds_out_file__Seq_3 + (MR_Integer) 1);
#line 678 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 678 "llds_out_file.m"
            {
#line 678 "llds_out_file.m"
              MR_Integer ll_backend__llds_out__llds_out_file__Seq__tmp_copy_3 = ll_backend__llds_out__llds_out_file__NextSeq_19;
#line 678 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__4__tmp_copy_4 = ll_backend__llds_out__llds_out_file__Bunches_17;

#line 678 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__4_4 = ll_backend__llds_out__llds_out_file__HeadVar__4__tmp_copy_4;
#line 678 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__Seq_3 = ll_backend__llds_out__llds_out_file__Seq__tmp_copy_3;
#line 678 "llds_out_file.m"
            }
#line 678 "llds_out_file.m"
            continue;
#line 673 "llds_out_file.m"
          }
#line 672 "llds_out_file.m"
      }
#line 672 "llds_out_file.m"
      break;
#line 672 "llds_out_file.m"
    }
#line 669 "llds_out_file.m"
}

#line 658 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_init_bunch_def_3_p_0(
#line 658 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1)
#line 658 "llds_out_file.m"
{
#line 661 "llds_out_file.m"
  while (MR_TRUE)
#line 661 "llds_out_file.m"
    {
#line 661 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 661 "llds_out_file.m"
      {
#line 661 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 661 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 661 "llds_out_file.m"
          {
#line 661 "llds_out_file.m"
          }
#line 661 "llds_out_file.m"
        else
#line 662 "llds_out_file.m"
          {
#line 662 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__AnnotatedModule_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 662 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__AnnotatedModules_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 662 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__C_ModuleName_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__AnnotatedModule_7, (MR_Integer) 0)));
#line 663 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__AnnotatedModule_7, (MR_Integer) 1)));
#line 663 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__AnnotatedModule_7, (MR_Integer) 2)));
#line 663 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__AnnotatedModule_7, (MR_Integer) 3)));

#line 664 "llds_out_file.m"
            {
#line 664 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "\t");
            }
#line 665 "llds_out_file.m"
            {
#line 665 "llds_out_file.m"
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__C_ModuleName_10);
            }
#line 666 "llds_out_file.m"
            {
#line 666 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "();\n");
            }
#line 667 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 667 "llds_out_file.m"
            {
#line 667 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__AnnotatedModules_8;

#line 667 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 667 "llds_out_file.m"
            }
#line 667 "llds_out_file.m"
            continue;
#line 662 "llds_out_file.m"
          }
#line 661 "llds_out_file.m"
      }
#line 661 "llds_out_file.m"
      break;
#line 661 "llds_out_file.m"
    }
#line 658 "llds_out_file.m"
}

#line 644 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_init_bunch_defs_6_p_0(
#line 644 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_1,
#line 644 "llds_out_file.m"
  MR_String ll_backend__llds_out__llds_out_file__InitStatus_2,
#line 644 "llds_out_file.m"
  MR_Integer ll_backend__llds_out__llds_out_file__Seq_3,
#line 644 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__4_4)
#line 644 "llds_out_file.m"
{
#line 647 "llds_out_file.m"
  while (MR_TRUE)
#line 647 "llds_out_file.m"
    {
#line 647 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 647 "llds_out_file.m"
      {
#line 647 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 647 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 647 "llds_out_file.m"
          {
#line 647 "llds_out_file.m"
          }
#line 647 "llds_out_file.m"
        else
#line 648 "llds_out_file.m"
          {
#line 648 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Bunch_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__4_4, (MR_Integer) 0)));
#line 648 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Bunches_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__4_4, (MR_Integer) 1)));
#line 648 "llds_out_file.m"
            MR_Integer ll_backend__llds_out__llds_out_file__NextSeq_19;
#line 648 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__MangledModuleName_40;
#line 685 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_50_50;
#line 685 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__V_51_51;
#line 685 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_52_52;
#line 685 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_53_53;
#line 685 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_54_54;
#line 685 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_55_55;
#line 685 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_56_56;
#line 685 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_57_57;
#line 685 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_58_58;
#line 685 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_59_59;
#line 685 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_60_60;
#line 685 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_61_61;
#line 685 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_62_62;
#line 685 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_63_63;
#line 685 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_64_64;
#line 685 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_65_65;
#line 685 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_66_66;
#line 685 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_67_67;
#line 685 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_68_68;
#line 685 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_69_69;
#line 685 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_70_70;

#line 649 "llds_out_file.m"
            {
#line 649 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "static void ");
            }
#line 684 "llds_out_file.m"
            {
#line 684 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "mercury__");
            }
#line 685 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 0)));
#line 685 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__MangledModuleName_40 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 1)));
#line 685 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 2)));
#line 685 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 3)));
#line 685 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 4)));
#line 685 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 5)));
#line 685 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 6)));
#line 685 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_56_56 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 685 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 685 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 685 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 685 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 685 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 685 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_62_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 685 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 685 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 685 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 685 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 685 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_67_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 685 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_68_68 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 685 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_69_69 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 685 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 8)));
#line 686 "llds_out_file.m"
            {
#line 686 "llds_out_file.m"
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__MangledModuleName_40);
            }
#line 687 "llds_out_file.m"
            {
#line 687 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "_");
            }
#line 688 "llds_out_file.m"
            {
#line 688 "llds_out_file.m"
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__InitStatus_2);
            }
#line 689 "llds_out_file.m"
            {
#line 689 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "_bunch_");
            }
#line 690 "llds_out_file.m"
            {
#line 690 "llds_out_file.m"
              mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_file__Seq_3);
            }
#line 651 "llds_out_file.m"
            {
#line 651 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "(void)\n");
            }
#line 652 "llds_out_file.m"
            {
#line 652 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "{\n");
            }
#line 653 "llds_out_file.m"
            {
#line 653 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__output_init_bunch_def_3_p_0(ll_backend__llds_out__llds_out_file__Bunch_16);
            }
#line 654 "llds_out_file.m"
            {
#line 654 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "}\n\n");
            }
#line 655 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__NextSeq_19 = (ll_backend__llds_out__llds_out_file__Seq_3 + (MR_Integer) 1);
#line 656 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 656 "llds_out_file.m"
            {
#line 656 "llds_out_file.m"
              MR_Integer ll_backend__llds_out__llds_out_file__Seq__tmp_copy_3 = ll_backend__llds_out__llds_out_file__NextSeq_19;
#line 656 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__4__tmp_copy_4 = ll_backend__llds_out__llds_out_file__Bunches_17;

#line 656 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__4_4 = ll_backend__llds_out__llds_out_file__HeadVar__4__tmp_copy_4;
#line 656 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__Seq_3 = ll_backend__llds_out__llds_out_file__Seq__tmp_copy_3;
#line 656 "llds_out_file.m"
            }
#line 656 "llds_out_file.m"
            continue;
#line 648 "llds_out_file.m"
          }
#line 647 "llds_out_file.m"
      }
#line 647 "llds_out_file.m"
      break;
#line 647 "llds_out_file.m"
    }
#line 644 "llds_out_file.m"
}

#line 636 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__entry_label_has_layout_2_p_0(
#line 636 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__EntryLabelToLayoutMap_3,
#line 636 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Label_4)
#line 636 "llds_out_file.m"
{
#line 640 "llds_out_file.m"
  {
#line 640 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 640 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_5_5;
#line 640 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv0_V_5_5;

#line 640 "llds_out_file.m"
    {
#line 640 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0, ll_backend__llds_out__llds_out_file__EntryLabelToLayoutMap_3, ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_4)), &ll_backend__llds_out__llds_out_file__conv0_V_5_5);
    }
#line 640 "llds_out_file.m"
    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 640 "llds_out_file.m"
      {
#line 640 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_5_5 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv0_V_5_5);
#line 640 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__succeeded = MR_TRUE;
#line 640 "llds_out_file.m"
      }
#line 640 "llds_out_file.m"
    return ll_backend__llds_out__llds_out_file__succeeded;
#line 640 "llds_out_file.m"
  }
#line 636 "llds_out_file.m"
}

#line 630 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__internal_label_has_layout_2_p_0(
#line 630 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__InternalLabelToLayoutMap_3,
#line 630 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Label_4)
#line 630 "llds_out_file.m"
{
#line 634 "llds_out_file.m"
  {
#line 634 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 634 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_5_5;
#line 634 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv0_V_5_5;

#line 634 "llds_out_file.m"
    {
#line 634 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0, ll_backend__llds_out__llds_out_file__InternalLabelToLayoutMap_3, ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_4)), &ll_backend__llds_out__llds_out_file__conv0_V_5_5);
    }
#line 634 "llds_out_file.m"
    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 634 "llds_out_file.m"
      {
#line 634 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_5_5 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv0_V_5_5);
#line 634 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__succeeded = MR_TRUE;
#line 634 "llds_out_file.m"
      }
#line 634 "llds_out_file.m"
    return ll_backend__llds_out__llds_out_file__succeeded;
#line 634 "llds_out_file.m"
  }
#line 630 "llds_out_file.m"
}

#line 626 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__module_defines_label_with_layout_2_p_0_2(
#line 626 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 626 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1)
#line 626 "llds_out_file.m"
{
#line 626 "llds_out_file.m"
  {
#line 626 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 626 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 626 "llds_out_file.m"
    {
#line 626 "llds_out_file.m"
      return ll_backend__llds_out__llds_out_file__succeeded = ll_backend__llds_out__llds_out_file__entry_label_has_layout_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
    }
#line 626 "llds_out_file.m"
    return ll_backend__llds_out__llds_out_file__succeeded;
#line 626 "llds_out_file.m"
  }
#line 626 "llds_out_file.m"
}

#line 621 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__module_defines_label_with_layout_2_p_0_1(
#line 621 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 621 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1)
#line 621 "llds_out_file.m"
{
#line 621 "llds_out_file.m"
  {
#line 621 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 621 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 621 "llds_out_file.m"
    {
#line 621 "llds_out_file.m"
      return ll_backend__llds_out__llds_out_file__succeeded = ll_backend__llds_out__llds_out_file__internal_label_has_layout_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
    }
#line 621 "llds_out_file.m"
    return ll_backend__llds_out__llds_out_file__succeeded;
#line 621 "llds_out_file.m"
  }
#line 621 "llds_out_file.m"
}

#line 610 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__module_defines_label_with_layout_2_p_0(
#line 610 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_3,
#line 610 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__AnnotatedModule_4)
#line 610 "llds_out_file.m"
{
#line 613 "llds_out_file.m"
  {
#line 613 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 613 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__EntryLabels_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__AnnotatedModule_4, (MR_Integer) 2)));
#line 613 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__InternalLabels_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__AnnotatedModule_4, (MR_Integer) 3)));
#line 613 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 4)));
#line 613 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 3)));
#line 614 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__AnnotatedModule_4, (MR_Integer) 0)));
#line 614 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__AnnotatedModule_4, (MR_Integer) 1)));
#line 619 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 8)));
#line 619 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 619 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_67_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 619 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_68_68 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 619 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_69_69 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 619 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_70_70 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 619 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 619 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 619 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 619 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 619 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_75_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 619 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_76_76 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 619 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_77_77 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 619 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_78_78 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 619 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_79_79 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 619 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 6)));
#line 619 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 5)));
#line 619 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_84_84 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 2)));
#line 619 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_85_85 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 1)));
#line 619 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 0)));

#line 619 "llds_out_file.m"
    {
#line 619 "llds_out_file.m"
      MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_60_60;
#line 619 "llds_out_file.m"
      MR_Word ll_backend__llds_out__llds_out_file__V_14_14;
#line 621 "llds_out_file.m"
      MR_Word ll_backend__llds_out__llds_out_file__V_10_10;
#line 621 "llds_out_file.m"
      MR_Box ll_backend__llds_out__llds_out_file__conv0_V_10_10;

#line 620 "llds_out_file.m"
      {
#line 620 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0, ll_backend__llds_out__llds_out_file__V_83_83);
      }
#line 620 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__succeeded = !(ll_backend__llds_out__llds_out_file__succeeded);
#line 619 "llds_out_file.m"
      if (ll_backend__llds_out__llds_out_file__succeeded)
#line 619 "llds_out_file.m"
        {
#line 10275 "ll_backend.llds_out.llds_out_file.c"
          ll_backend__llds_out__llds_out_file__TypeCtorInfo_60_60 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 621 "llds_out_file.m"
          {
#line 621 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 621 "llds_out_file.m"
            MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_14_14, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_8[2]));
#line 621 "llds_out_file.m"
            MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_14_14, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__module_defines_label_with_layout_2_p_0_1));
#line 621 "llds_out_file.m"
            MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 621 "llds_out_file.m"
            MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_14_14, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__V_83_83));
#line 621 "llds_out_file.m"
          }
#line 621 "llds_out_file.m"
          {
#line 621 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__succeeded = mercury__list__find_first_match_3_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_60_60, ll_backend__llds_out__llds_out_file__V_14_14, ll_backend__llds_out__llds_out_file__InternalLabels_8, &ll_backend__llds_out__llds_out_file__conv0_V_10_10);
          }
#line 621 "llds_out_file.m"
          if (ll_backend__llds_out__llds_out_file__succeeded)
#line 621 "llds_out_file.m"
            {
#line 621 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__V_10_10 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv0_V_10_10);
#line 621 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__succeeded = MR_TRUE;
#line 621 "llds_out_file.m"
            }
#line 619 "llds_out_file.m"
        }
#line 619 "llds_out_file.m"
    }
#line 623 "llds_out_file.m"
    if (!(ll_backend__llds_out__llds_out_file__succeeded))
#line 624 "llds_out_file.m"
      {
#line 624 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_64_64;
#line 624 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_13_13;
#line 626 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_12_12;
#line 626 "llds_out_file.m"
        MR_Box ll_backend__llds_out__llds_out_file__conv1_V_12_12;

#line 625 "llds_out_file.m"
        {
#line 625 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0, ll_backend__llds_out__llds_out_file__V_82_82);
        }
#line 625 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__succeeded = !(ll_backend__llds_out__llds_out_file__succeeded);
#line 624 "llds_out_file.m"
        if (ll_backend__llds_out__llds_out_file__succeeded)
#line 624 "llds_out_file.m"
          {
#line 10334 "ll_backend.llds_out.llds_out_file.c"
            ll_backend__llds_out__llds_out_file__TypeCtorInfo_64_64 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 626 "llds_out_file.m"
            {
#line 626 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 626 "llds_out_file.m"
              MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_13_13, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_8[3]));
#line 626 "llds_out_file.m"
              MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_13_13, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__module_defines_label_with_layout_2_p_0_2));
#line 626 "llds_out_file.m"
              MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 626 "llds_out_file.m"
              MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_13_13, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__V_82_82));
#line 626 "llds_out_file.m"
            }
#line 626 "llds_out_file.m"
            {
#line 626 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__succeeded = mercury__list__find_first_match_3_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_64_64, ll_backend__llds_out__llds_out_file__V_13_13, ll_backend__llds_out__llds_out_file__EntryLabels_7, &ll_backend__llds_out__llds_out_file__conv1_V_12_12);
            }
#line 626 "llds_out_file.m"
            if (ll_backend__llds_out__llds_out_file__succeeded)
#line 626 "llds_out_file.m"
              {
#line 626 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__V_12_12 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv1_V_12_12);
#line 626 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__succeeded = MR_TRUE;
#line 626 "llds_out_file.m"
              }
#line 624 "llds_out_file.m"
          }
#line 624 "llds_out_file.m"
      }
#line 613 "llds_out_file.m"
    return ll_backend__llds_out__llds_out_file__succeeded;
#line 613 "llds_out_file.m"
  }
#line 610 "llds_out_file.m"
}

#line 405 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_module_init_list_15_p_0_1(
#line 405 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 405 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1)
#line 405 "llds_out_file.m"
{
#line 405 "llds_out_file.m"
  {
#line 405 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 405 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 405 "llds_out_file.m"
    {
#line 405 "llds_out_file.m"
      return ll_backend__llds_out__llds_out_file__succeeded = ll_backend__llds_out__llds_out_file__module_defines_label_with_layout_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
    }
#line 405 "llds_out_file.m"
    return ll_backend__llds_out__llds_out_file__succeeded;
#line 405 "llds_out_file.m"
  }
#line 405 "llds_out_file.m"
}

#line 395 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_module_init_list_15_p_0(
#line 395 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_16,
#line 395 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ModuleName_17,
#line 395 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__AnnotatedModules_18,
#line 395 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__RttiDatas_19,
#line 395 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ProcLayoutDatas_20,
#line 395 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ModuleLayoutDatas_21,
#line 395 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ComplexityProcs_22,
#line 395 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__TSStringTable_23,
#line 395 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__AllocSites_24,
#line 395 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__InitPredNames_25,
#line 395 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__FinalPredNames_26,
#line 395 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_52,
#line 395 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_53)
#line 395 "llds_out_file.m"
{
#line 404 "llds_out_file.m"
  {
#line 404 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 404 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_303_303;
#line 404 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__MustInit_29;
#line 404 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__AlwaysInitAnnotatedModules_31;
#line 404 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__MaybeInitAnnotatedModules_32;
#line 404 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__AlwaysInitAnnotatedModuleBunches_33;
#line 404 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__MaybeInitAnnotatedModuleBunches_34;
#line 404 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ModuleLayoutName_43;

#line 405 "llds_out_file.m"
    {
#line 405 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__MustInit_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 405 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__MustInit_29, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_8[1]));
#line 405 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__MustInit_29, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_c_module_init_list_15_p_0_1));
#line 405 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__MustInit_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 405 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__MustInit_29, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_16));
#line 405 "llds_out_file.m"
    }
#line 10468 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_303_303 = (MR_Word) &ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__type_ctor_info_annotated_c_module_0;
#line 408 "llds_out_file.m"
    {
#line 408 "llds_out_file.m"
      mercury__list__filter_4_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_303_303, ll_backend__llds_out__llds_out_file__MustInit_29, ll_backend__llds_out__llds_out_file__AnnotatedModules_18, &ll_backend__llds_out__llds_out_file__AlwaysInitAnnotatedModules_31, &ll_backend__llds_out__llds_out_file__MaybeInitAnnotatedModules_32);
    }
#line 410 "llds_out_file.m"
    {
#line 410 "llds_out_file.m"
      mercury__list__chunk_3_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_303_303, ll_backend__llds_out__llds_out_file__AlwaysInitAnnotatedModules_31, (MR_Integer) 40, &ll_backend__llds_out__llds_out_file__AlwaysInitAnnotatedModuleBunches_33);
    }
#line 412 "llds_out_file.m"
    {
#line 412 "llds_out_file.m"
      mercury__list__chunk_3_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_303_303, ll_backend__llds_out__llds_out_file__MaybeInitAnnotatedModules_32, (MR_Integer) 40, &ll_backend__llds_out__llds_out_file__MaybeInitAnnotatedModuleBunches_34);
    }
#line 415 "llds_out_file.m"
    {
#line 415 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_init_bunch_defs_6_p_0(ll_backend__llds_out__llds_out_file__Info_16, (MR_String) "always", (MR_Integer) 0, ll_backend__llds_out__llds_out_file__AlwaysInitAnnotatedModuleBunches_33);
    }
#line 419 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__MaybeInitAnnotatedModuleBunches_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 418 "llds_out_file.m"
      {
#line 418 "llds_out_file.m"
      }
#line 419 "llds_out_file.m"
    else
#line 420 "llds_out_file.m"
      {
#line 421 "llds_out_file.m"
        {
#line 421 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__output_init_bunch_defs_6_p_0(ll_backend__llds_out__llds_out_file__Info_16, (MR_String) "maybe", (MR_Integer) 0, ll_backend__llds_out__llds_out_file__MaybeInitAnnotatedModuleBunches_34);
        }
#line 420 "llds_out_file.m"
      }
#line 425 "llds_out_file.m"
    {
#line 425 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "/* suppress gcc -Wmissing-decls warnings */\n");
    }
#line 426 "llds_out_file.m"
    {
#line 426 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "void ");
    }
#line 427 "llds_out_file.m"
    {
#line 427 "llds_out_file.m"
      backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
    }
#line 428 "llds_out_file.m"
    {
#line 428 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "init(void);\n");
    }
#line 430 "llds_out_file.m"
    {
#line 430 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "void ");
    }
#line 431 "llds_out_file.m"
    {
#line 431 "llds_out_file.m"
      backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
    }
#line 432 "llds_out_file.m"
    {
#line 432 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "init_type_tables(void);\n");
    }
#line 433 "llds_out_file.m"
    {
#line 433 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "void ");
    }
#line 434 "llds_out_file.m"
    {
#line 434 "llds_out_file.m"
      backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
    }
#line 435 "llds_out_file.m"
    {
#line 435 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "init_debugger(void);\n");
    }
#line 437 "llds_out_file.m"
    {
#line 437 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#ifdef MR_DEEP_PROFILING\n");
    }
#line 438 "llds_out_file.m"
    {
#line 438 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "void ");
    }
#line 439 "llds_out_file.m"
    {
#line 439 "llds_out_file.m"
      backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
    }
#line 440 "llds_out_file.m"
    {
#line 440 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);\n");
    }
#line 442 "llds_out_file.m"
    {
#line 442 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#endif\n");
    }
#line 444 "llds_out_file.m"
    {
#line 444 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#ifdef MR_RECORD_TERM_SIZES\n");
    }
#line 445 "llds_out_file.m"
    {
#line 445 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "void ");
    }
#line 446 "llds_out_file.m"
    {
#line 446 "llds_out_file.m"
      backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
    }
#line 447 "llds_out_file.m"
    {
#line 447 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "init_complexity_procs(void);\n");
    }
#line 448 "llds_out_file.m"
    {
#line 448 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#endif\n");
    }
#line 450 "llds_out_file.m"
    {
#line 450 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#ifdef MR_THREADSCOPE\n");
    }
#line 451 "llds_out_file.m"
    {
#line 451 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "void ");
    }
#line 452 "llds_out_file.m"
    {
#line 452 "llds_out_file.m"
      backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
    }
#line 453 "llds_out_file.m"
    {
#line 453 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "init_threadscope_string_table(void);\n");
    }
#line 454 "llds_out_file.m"
    {
#line 454 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#endif\n");
    }
#line 458 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__InitPredNames_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 457 "llds_out_file.m"
      {
#line 457 "llds_out_file.m"
      }
#line 458 "llds_out_file.m"
    else
#line 459 "llds_out_file.m"
      {
#line 460 "llds_out_file.m"
        {
#line 460 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "void ");
        }
#line 461 "llds_out_file.m"
        {
#line 461 "llds_out_file.m"
          backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
        }
#line 462 "llds_out_file.m"
        {
#line 462 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "required_init(void);\n");
        }
#line 459 "llds_out_file.m"
      }
#line 467 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__FinalPredNames_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 466 "llds_out_file.m"
      {
#line 466 "llds_out_file.m"
      }
#line 467 "llds_out_file.m"
    else
#line 468 "llds_out_file.m"
      {
#line 469 "llds_out_file.m"
        {
#line 469 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "void ");
        }
#line 470 "llds_out_file.m"
        {
#line 470 "llds_out_file.m"
          backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
        }
#line 471 "llds_out_file.m"
        {
#line 471 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "required_final(void);\n");
        }
#line 468 "llds_out_file.m"
      }
#line 474 "llds_out_file.m"
    {
#line 474 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 476 "llds_out_file.m"
    {
#line 476 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "void ");
    }
#line 477 "llds_out_file.m"
    {
#line 477 "llds_out_file.m"
      backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
    }
#line 478 "llds_out_file.m"
    {
#line 478 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "init(void)\n");
    }
#line 479 "llds_out_file.m"
    {
#line 479 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "{\n");
    }
#line 480 "llds_out_file.m"
    {
#line 480 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\tstatic MR_bool done = MR_FALSE;\n");
    }
#line 481 "llds_out_file.m"
    {
#line 481 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\tif (done) {\n");
    }
#line 482 "llds_out_file.m"
    {
#line 482 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\treturn;\n");
    }
#line 483 "llds_out_file.m"
    {
#line 483 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\t}\n");
    }
#line 484 "llds_out_file.m"
    {
#line 484 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\tdone = MR_TRUE;\n");
    }
#line 486 "llds_out_file.m"
    {
#line 486 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_init_bunch_calls_6_p_0(ll_backend__llds_out__llds_out_file__Info_16, (MR_String) "always", (MR_Integer) 0, ll_backend__llds_out__llds_out_file__AlwaysInitAnnotatedModuleBunches_33);
    }
#line 490 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__MaybeInitAnnotatedModuleBunches_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 489 "llds_out_file.m"
      {
#line 489 "llds_out_file.m"
      }
#line 490 "llds_out_file.m"
    else
#line 491 "llds_out_file.m"
      {
#line 492 "llds_out_file.m"
        {
#line 492 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__output_init_bunch_calls_6_p_0(ll_backend__llds_out__llds_out_file__Info_16, (MR_String) "maybe", (MR_Integer) 0, ll_backend__llds_out__llds_out_file__MaybeInitAnnotatedModuleBunches_34);
        }
#line 491 "llds_out_file.m"
      }
#line 496 "llds_out_file.m"
    {
#line 496 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_c_data_init_list_3_p_0(ll_backend__llds_out__llds_out_file__RttiDatas_19);
    }
#line 497 "llds_out_file.m"
    {
#line 497 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_alloc_sites_init_4_p_0(ll_backend__llds_out__llds_out_file__Info_16, ll_backend__llds_out__llds_out_file__AllocSites_24);
    }
#line 503 "llds_out_file.m"
    {
#line 503 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\t");
    }
#line 504 "llds_out_file.m"
    {
#line 504 "llds_out_file.m"
      backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
    }
#line 505 "llds_out_file.m"
    {
#line 505 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "init_debugger();\n");
    }
#line 506 "llds_out_file.m"
    {
#line 506 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "}\n\n");
    }
#line 508 "llds_out_file.m"
    {
#line 508 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "void ");
    }
#line 509 "llds_out_file.m"
    {
#line 509 "llds_out_file.m"
      backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
    }
#line 510 "llds_out_file.m"
    {
#line 510 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "init_type_tables(void)\n");
    }
#line 511 "llds_out_file.m"
    {
#line 511 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "{\n");
    }
#line 512 "llds_out_file.m"
    {
#line 512 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\tstatic MR_bool done = MR_FALSE;\n");
    }
#line 513 "llds_out_file.m"
    {
#line 513 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\tif (done) {\n");
    }
#line 514 "llds_out_file.m"
    {
#line 514 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\treturn;\n");
    }
#line 515 "llds_out_file.m"
    {
#line 515 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\t}\n");
    }
#line 516 "llds_out_file.m"
    {
#line 516 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\tdone = MR_TRUE;\n");
    }
#line 517 "llds_out_file.m"
    {
#line 517 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_type_tables_init_list_3_p_0(ll_backend__llds_out__llds_out_file__RttiDatas_19);
    }
#line 518 "llds_out_file.m"
    {
#line 518 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "}\n\n");
    }
#line 520 "llds_out_file.m"
    {
#line 520 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 521 "llds_out_file.m"
    {
#line 521 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "void ");
    }
#line 522 "llds_out_file.m"
    {
#line 522 "llds_out_file.m"
      backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
    }
#line 523 "llds_out_file.m"
    {
#line 523 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "init_debugger(void)\n");
    }
#line 524 "llds_out_file.m"
    {
#line 524 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "{\n");
    }
#line 525 "llds_out_file.m"
    {
#line 525 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\tstatic MR_bool done = MR_FALSE;\n");
    }
#line 526 "llds_out_file.m"
    {
#line 526 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\tif (done) {\n");
    }
#line 527 "llds_out_file.m"
    {
#line 527 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\treturn;\n");
    }
#line 528 "llds_out_file.m"
    {
#line 528 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\t}\n");
    }
#line 529 "llds_out_file.m"
    {
#line 529 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\tdone = MR_TRUE;\n");
    }
#line 530 "llds_out_file.m"
    {
#line 530 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_debugger_init_list_3_p_0(ll_backend__llds_out__llds_out_file__ModuleLayoutDatas_21);
    }
#line 531 "llds_out_file.m"
    {
#line 531 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "}\n\n");
    }
#line 533 "llds_out_file.m"
    {
#line 533 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#ifdef MR_DEEP_PROFILING\n");
    }
#line 534 "llds_out_file.m"
    {
#line 534 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\nvoid ");
    }
#line 535 "llds_out_file.m"
    {
#line 535 "llds_out_file.m"
      backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
    }
#line 536 "llds_out_file.m"
    {
#line 536 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)\n");
    }
#line 538 "llds_out_file.m"
    {
#line 538 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "{\n");
    }
#line 539 "llds_out_file.m"
    {
#line 539 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\tMR_write_out_module_proc_reps_start(procrep_fp, &");
    }
#line 541 "llds_out_file.m"
    {
#line 541 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__ModuleLayoutName_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 541 "llds_out_file.m"
      MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__ModuleLayoutName_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
#line 541 "llds_out_file.m"
      MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__ModuleLayoutName_43, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__ModuleName_17));
#line 541 "llds_out_file.m"
    }
#line 542 "llds_out_file.m"
    {
#line 542 "llds_out_file.m"
      ll_backend__layout_out__output_layout_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleLayoutName_43);
    }
#line 543 "llds_out_file.m"
    {
#line 543 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) ");\n");
    }
#line 544 "llds_out_file.m"
    {
#line 544 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_write_proc_static_list_3_p_0(ll_backend__llds_out__llds_out_file__ProcLayoutDatas_20);
    }
#line 545 "llds_out_file.m"
    {
#line 545 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\tMR_write_out_module_proc_reps_end(procrep_fp);\n");
    }
#line 546 "llds_out_file.m"
    {
#line 546 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "}\n");
    }
#line 547 "llds_out_file.m"
    {
#line 547 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\n#endif\n\n");
    }
#line 549 "llds_out_file.m"
    {
#line 549 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#ifdef MR_RECORD_TERM_SIZES\n");
    }
#line 550 "llds_out_file.m"
    {
#line 550 "llds_out_file.m"
      ll_backend__llds_out__llds_out_global__output_complexity_arg_info_arrays_3_p_0(ll_backend__llds_out__llds_out_file__ComplexityProcs_22);
    }
#line 551 "llds_out_file.m"
    {
#line 551 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\nvoid ");
    }
#line 552 "llds_out_file.m"
    {
#line 552 "llds_out_file.m"
      backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
    }
#line 553 "llds_out_file.m"
    {
#line 553 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "init_complexity_procs(void)\n");
    }
#line 554 "llds_out_file.m"
    {
#line 554 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "{\n");
    }
#line 555 "llds_out_file.m"
    {
#line 555 "llds_out_file.m"
      ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_p_0(ll_backend__llds_out__llds_out_file__ComplexityProcs_22);
    }
#line 556 "llds_out_file.m"
    {
#line 556 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "}\n");
    }
#line 557 "llds_out_file.m"
    {
#line 557 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\n#endif\n\n");
    }
#line 559 "llds_out_file.m"
    {
#line 559 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#ifdef MR_THREADSCOPE\n");
    }
#line 560 "llds_out_file.m"
    {
#line 560 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\nvoid ");
    }
#line 561 "llds_out_file.m"
    {
#line 561 "llds_out_file.m"
      backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
    }
#line 562 "llds_out_file.m"
    {
#line 562 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "init_threadscope_string_table(void)\n");
    }
#line 563 "llds_out_file.m"
    {
#line 563 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "{\n");
    }
#line 566 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__TSStringTable_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 565 "llds_out_file.m"
      {
#line 565 "llds_out_file.m"
      }
#line 566 "llds_out_file.m"
    else
#line 567 "llds_out_file.m"
      {
#line 567 "llds_out_file.m"
        MR_Integer ll_backend__llds_out__llds_out_file__TSStringTableSize_46;
#line 567 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__MangledModuleName_47;
#line 567 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__V_306_306;
#line 567 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__V_307_307;
#line 567 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__V_309_309;
#line 571 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_282_282;
#line 571 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__V_283_283;
#line 571 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_284_284;
#line 571 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_285_285;
#line 571 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_286_286;
#line 571 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_287_287;
#line 571 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_288_288;
#line 571 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_289_289;
#line 571 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_290_290;
#line 571 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_291_291;
#line 571 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_292_292;
#line 571 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_293_293;
#line 571 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_294_294;
#line 571 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_295_295;
#line 571 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_296_296;
#line 571 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_297_297;
#line 571 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_298_298;
#line 571 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_299_299;
#line 571 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_300_300;
#line 571 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_301_301;
#line 571 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_302_302;

#line 568 "llds_out_file.m"
        {
#line 568 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__TSStringTableSize_46 = mercury__list__length_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ll_backend__llds_out__llds_out_file__TSStringTable_23);
        }
#line 569 "llds_out_file.m"
        {
#line 569 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "\tMR_threadscope_register_strings_array(\n");
        }
#line 570 "llds_out_file.m"
        {
#line 570 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "\t\t");
        }
#line 571 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_282_282 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 0)));
#line 571 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__MangledModuleName_47 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 1)));
#line 571 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_283_283 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 2)));
#line 571 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_284_284 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 3)));
#line 571 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_285_285 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 4)));
#line 571 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_286_286 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 5)));
#line 571 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_287_287 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 6)));
#line 571 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_288_288 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 571 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_289_289 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 571 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_290_290 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 571 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_291_291 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 571 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_292_292 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 571 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_293_293 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 571 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_294_294 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 571 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_295_295 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 571 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_296_296 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 571 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_297_297 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 571 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_298_298 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 571 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_299_299 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 571 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_300_300 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 571 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_301_301 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 571 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_302_302 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 8)));
#line 572 "llds_out_file.m"
        {
#line 572 "llds_out_file.m"
          ll_backend__layout_out__output_layout_array_name_5_p_0((MR_Integer) 1, ll_backend__llds_out__llds_out_file__MangledModuleName_47, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)));
        }
#line 11170 "ll_backend.llds_out.llds_out_file.c"
        {
#line 11172 "ll_backend.llds_out.llds_out_file.c"
          ll_backend__llds_out__llds_out_file__V_306_306 = mercury__string__int_to_string_1_f_0(ll_backend__llds_out__llds_out_file__TSStringTableSize_46);
        }
#line 11175 "ll_backend.llds_out.llds_out_file.c"
        {
#line 11177 "ll_backend.llds_out.llds_out_file.c"
          ll_backend__llds_out__llds_out_file__V_307_307 = mercury__string__f_43_43_2_f_0(ll_backend__llds_out__llds_out_file__V_306_306, (MR_String) ");\n");
        }
#line 11180 "ll_backend.llds_out.llds_out_file.c"
        {
#line 11182 "ll_backend.llds_out.llds_out_file.c"
          ll_backend__llds_out__llds_out_file__V_309_309 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__llds_out__llds_out_file__V_307_307);
        }
#line 11185 "ll_backend.llds_out.llds_out_file.c"
        {
#line 11187 "ll_backend.llds_out.llds_out_file.c"
          mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__V_309_309);
        }
#line 567 "llds_out_file.m"
      }
#line 576 "llds_out_file.m"
    {
#line 576 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "}\n");
    }
#line 577 "llds_out_file.m"
    {
#line 577 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\n#endif\n\n");
    }
#line 581 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__InitPredNames_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 580 "llds_out_file.m"
      {
#line 580 "llds_out_file.m"
      }
#line 581 "llds_out_file.m"
    else
#line 582 "llds_out_file.m"
      {
#line 583 "llds_out_file.m"
        {
#line 583 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "void ");
        }
#line 584 "llds_out_file.m"
        {
#line 584 "llds_out_file.m"
          backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
        }
#line 585 "llds_out_file.m"
        {
#line 585 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "required_init(void)\n");
        }
#line 586 "llds_out_file.m"
        {
#line 586 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "{\n");
        }
#line 587 "llds_out_file.m"
        {
#line 587 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__output_required_init_or_final_calls_3_p_0(ll_backend__llds_out__llds_out_file__InitPredNames_25);
        }
#line 588 "llds_out_file.m"
        {
#line 588 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "}\n");
        }
#line 589 "llds_out_file.m"
        {
#line 589 "llds_out_file.m"
          mercury__io__nl_2_p_0();
        }
#line 582 "llds_out_file.m"
      }
#line 594 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__FinalPredNames_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 593 "llds_out_file.m"
      {
#line 593 "llds_out_file.m"
      }
#line 594 "llds_out_file.m"
    else
#line 595 "llds_out_file.m"
      {
#line 596 "llds_out_file.m"
        {
#line 596 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "void ");
        }
#line 597 "llds_out_file.m"
        {
#line 597 "llds_out_file.m"
          backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
        }
#line 598 "llds_out_file.m"
        {
#line 598 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "required_final(void)\n");
        }
#line 599 "llds_out_file.m"
        {
#line 599 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "{\n");
        }
#line 600 "llds_out_file.m"
        {
#line 600 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__output_required_init_or_final_calls_3_p_0(ll_backend__llds_out__llds_out_file__FinalPredNames_26);
        }
#line 601 "llds_out_file.m"
        {
#line 601 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "}\n");
        }
#line 595 "llds_out_file.m"
      }
#line 604 "llds_out_file.m"
    {
#line 604 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "/* ensure everything is compiled with the same grade */\n");
    }
#line 607 "llds_out_file.m"
    {
#line 607 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "static const void *const MR_grade = &MR_GRADE_VAR;\n");
    }
#line 607 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_53 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_52;
#line 404 "llds_out_file.m"
  }
#line 395 "llds_out_file.m"
}

#line 372 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__gather_labels_from_instrs_acc_5_p_0(
#line 372 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 372 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_0_2,
#line 372 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_3,
#line 372 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_0_4,
#line 372 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_5)
#line 372 "llds_out_file.m"
{
#line 376 "llds_out_file.m"
  while (MR_TRUE)
#line 376 "llds_out_file.m"
    {
#line 376 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 376 "llds_out_file.m"
      {
#line 376 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 376 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 376 "llds_out_file.m"
          {
#line 376 "llds_out_file.m"
            *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_5 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_0_4;
#line 376 "llds_out_file.m"
            *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_3 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_0_2;
#line 376 "llds_out_file.m"
          }
#line 376 "llds_out_file.m"
        else
#line 378 "llds_out_file.m"
          {
#line 378 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Instr_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 378 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Instrs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 378 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_27_27;
#line 378 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_28_28;
#line 387 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Label_16;
#line 379 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Instr_12, (MR_Integer) 0)));
#line 379 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Instr_12, (MR_Integer) 1)));

#line 379 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__V_26_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__V_26_26, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 379 "llds_out_file.m"
            if (ll_backend__llds_out__llds_out_file__succeeded)
#line 379 "llds_out_file.m"
              {
#line 379 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__Label_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__V_26_26, (MR_Integer) 1)));
#line 383 "llds_out_file.m"
                if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Label_16)) == (MR_mktag((MR_Integer) 1))))
#line 381 "llds_out_file.m"
                  {
#line 382 "llds_out_file.m"
                    {
#line 382 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 382 "llds_out_file.m"
                      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_28_28, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_16));
#line 382 "llds_out_file.m"
                      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_28_28, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_0_2));
#line 382 "llds_out_file.m"
                    }
#line 382 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_27_27 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_0_4;
#line 381 "llds_out_file.m"
                  }
#line 383 "llds_out_file.m"
                else
#line 384 "llds_out_file.m"
                  {
#line 385 "llds_out_file.m"
                    {
#line 385 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 385 "llds_out_file.m"
                      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_27_27, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_16));
#line 385 "llds_out_file.m"
                      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_27_27, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_0_4));
#line 385 "llds_out_file.m"
                    }
#line 385 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_28_28 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_0_2;
#line 384 "llds_out_file.m"
                  }
#line 379 "llds_out_file.m"
              }
#line 379 "llds_out_file.m"
            else
#line 388 "llds_out_file.m"
              {
#line 388 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_27_27 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_0_4;
#line 388 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_28_28 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_0_2;
#line 388 "llds_out_file.m"
              }
#line 390 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 390 "llds_out_file.m"
            {
#line 390 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__Instrs_13;
#line 390 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_0__tmp_copy_2 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_28_28;
#line 390 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_0__tmp_copy_4 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_27_27;

#line 390 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_0_4 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_0__tmp_copy_4;
#line 390 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_0_2 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_0__tmp_copy_2;
#line 390 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 390 "llds_out_file.m"
            }
#line 390 "llds_out_file.m"
            continue;
#line 378 "llds_out_file.m"
          }
#line 376 "llds_out_file.m"
      }
#line 376 "llds_out_file.m"
      break;
#line 376 "llds_out_file.m"
    }
#line 372 "llds_out_file.m"
}

#line 363 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__annotate_c_procedure_9_p_0_1(
#line 363 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 363 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1)
#line 363 "llds_out_file.m"
{
#line 363 "llds_out_file.m"
  {
#line 363 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 363 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 363 "llds_out_file.m"
    {
#line 363 "llds_out_file.m"
      return ll_backend__llds_out__llds_out_file__succeeded = ll_backend__llds_out__llds_out_file__IntroducedFrom__pred__annotate_c_procedure__363__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
    }
#line 363 "llds_out_file.m"
    return ll_backend__llds_out__llds_out_file__succeeded;
#line 363 "llds_out_file.m"
  }
#line 363 "llds_out_file.m"
}

#line 314 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__annotate_c_procedure_9_p_0(
#line 314 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_10,
#line 314 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Proc_11,
#line 314 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__AnnotatedProc_12,
#line 314 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllEntryLabels_0_30,
#line 314 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllEntryLabels_31,
#line 314 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllInternalLabels_0_32,
#line 314 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllInternalLabels_33,
#line 314 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_0_34,
#line 314 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_35)
#line 314 "llds_out_file.m"
{
#line 320 "llds_out_file.m"
  {
#line 320 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 320 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85;
#line 320 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ProcEnvVarNames_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 8)));
#line 320 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__Instrs_17;
#line 320 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__RevEntryLabels_18;
#line 320 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__RevInternalLabels0_19;
#line 320 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__EntryLabels_20;
#line 320 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__InternalLabels0_21;
#line 320 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__CallerLabel_22;
#line 320 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ContLabels_23;
#line 320 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__EmitCLoops_24;
#line 320 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__WhileLabels_25;
#line 320 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__UndefWhileLabels_26;
#line 320 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__LabelOutputInfo_28;
#line 320 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__InternalLabels_29;
#line 320 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_39_39;
#line 320 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_44_44;
#line 320 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_46_46;
#line 321 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_47_47 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 0)));
#line 321 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 1)));
#line 321 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 2)));
#line 321 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 3)));
#line 321 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 4)));
#line 321 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 5)));
#line 321 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 6)));
#line 321 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 7)));
#line 324 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_55_55;
#line 324 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__V_56_56;
#line 324 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_57_57;
#line 324 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_58_58;
#line 324 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_59_59;
#line 324 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_60_60;
#line 324 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_61_61;
#line 324 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_62_62;
#line 332 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_63_63;
#line 332 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_64_64;
#line 332 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_65_65;
#line 332 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_66_66;
#line 332 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_67_67;
#line 332 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_68_68;
#line 332 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_69_69;
#line 332 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_70_70;
#line 332 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_71_71;
#line 332 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_72_72;
#line 332 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_73_73;
#line 332 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_74_74;
#line 332 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_75_75;
#line 332 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_76_76;
#line 332 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_77_77;
#line 332 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_78_78;
#line 332 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_79_79;
#line 332 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_80_80;
#line 332 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_81_81;
#line 332 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_82_82;
#line 332 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_83_83;

#line 322 "llds_out_file.m"
    {
#line 322 "llds_out_file.m"
      mercury__set__union_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ll_backend__llds_out__llds_out_file__ProcEnvVarNames_16, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_0_34, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_35);
    }
#line 324 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_55_55 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 0)));
#line 324 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 1)));
#line 324 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 2)));
#line 324 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 3)));
#line 324 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__Instrs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 4)));
#line 324 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 5)));
#line 324 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 6)));
#line 324 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 7)));
#line 324 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 8)));
#line 325 "llds_out_file.m"
    {
#line 325 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__gather_labels_from_instrs_acc_5_p_0(ll_backend__llds_out__llds_out_file__Instrs_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__RevEntryLabels_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__RevInternalLabels0_19);
    }
#line 11643 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 327 "llds_out_file.m"
    {
#line 327 "llds_out_file.m"
      mercury__list__reverse_2_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85, ll_backend__llds_out__llds_out_file__RevEntryLabels_18, &ll_backend__llds_out__llds_out_file__EntryLabels_20);
    }
#line 328 "llds_out_file.m"
    {
#line 328 "llds_out_file.m"
      mercury__list__reverse_2_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85, ll_backend__llds_out__llds_out_file__RevInternalLabels0_19, &ll_backend__llds_out__llds_out_file__InternalLabels0_21);
    }
#line 330 "llds_out_file.m"
    {
#line 330 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__find_caller_label_2_p_0(ll_backend__llds_out__llds_out_file__Instrs_17, &ll_backend__llds_out__llds_out_file__CallerLabel_22);
    }
#line 331 "llds_out_file.m"
    {
#line 331 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_39_39 = mercury__set_tree234__init_0_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85);
    }
#line 331 "llds_out_file.m"
    {
#line 331 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__find_cont_labels_3_p_0(ll_backend__llds_out__llds_out_file__Instrs_17, ll_backend__llds_out__llds_out_file__V_39_39, &ll_backend__llds_out__llds_out_file__ContLabels_23);
    }
#line 332 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 0)));
#line 332 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_64_64 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 1)));
#line 332 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_65_65 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 2)));
#line 332 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 3)));
#line 332 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 4)));
#line 332 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 5)));
#line 332 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 6)));
#line 332 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_70_70 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 332 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 332 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__EmitCLoops_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 332 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 332 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 332 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 332 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_75_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 332 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_76_76 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 332 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_77_77 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 332 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_78_78 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 332 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_79_79 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 332 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_80_80 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 332 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_81_81 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 332 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_82_82 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 332 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 8)));
#line 337 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__EmitCLoops_24 == (MR_Integer) 0))
#line 334 "llds_out_file.m"
      {
#line 335 "llds_out_file.m"
        {
#line 335 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__WhileLabels_25 = mercury__set_tree234__init_0_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85);
        }
#line 336 "llds_out_file.m"
        {
#line 336 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__UndefWhileLabels_26 = mercury__set_tree234__init_0_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85);
        }
#line 334 "llds_out_file.m"
      }
#line 337 "llds_out_file.m"
    else
#line 338 "llds_out_file.m"
      {
#line 338 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__UndefWhileLabels0_27;
#line 338 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_40_40;

#line 339 "llds_out_file.m"
        {
#line 339 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__V_40_40 = mercury__set_tree234__init_0_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85);
        }
#line 339 "llds_out_file.m"
        {
#line 339 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__find_while_labels_3_p_0(ll_backend__llds_out__llds_out_file__Instrs_17, ll_backend__llds_out__llds_out_file__V_40_40, &ll_backend__llds_out__llds_out_file__WhileLabels_25);
        }
#line 347 "llds_out_file.m"
        {
#line 347 "llds_out_file.m"
          mercury__set_tree234__difference_3_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85, ll_backend__llds_out__llds_out_file__WhileLabels_25, ll_backend__llds_out__llds_out_file__ContLabels_23, &ll_backend__llds_out__llds_out_file__UndefWhileLabels0_27);
        }
#line 348 "llds_out_file.m"
        {
#line 348 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__succeeded = mercury__set_tree234__is_empty_1_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85, ll_backend__llds_out__llds_out_file__UndefWhileLabels0_27);
        }
#line 350 "llds_out_file.m"
        if (ll_backend__llds_out__llds_out_file__succeeded)
#line 349 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__UndefWhileLabels_26 = ll_backend__llds_out__llds_out_file__UndefWhileLabels0_27;
#line 350 "llds_out_file.m"
        else
#line 354 "llds_out_file.m"
          {
#line 354 "llds_out_file.m"
            {
#line 354 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__find_while_labels_to_define_5_p_0(ll_backend__llds_out__llds_out_file__Instrs_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__llds_out__llds_out_file__WhileLabels_25, ll_backend__llds_out__llds_out_file__UndefWhileLabels0_27, &ll_backend__llds_out__llds_out_file__UndefWhileLabels_26);
            }
#line 354 "llds_out_file.m"
          }
#line 338 "llds_out_file.m"
      }
#line 358 "llds_out_file.m"
    {
#line 358 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__LabelOutputInfo_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 358 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__LabelOutputInfo_28, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__CallerLabel_22));
#line 358 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__LabelOutputInfo_28, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__ContLabels_23));
#line 358 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__LabelOutputInfo_28, 2) = ((MR_Box) (ll_backend__llds_out__llds_out_file__WhileLabels_25));
#line 358 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__LabelOutputInfo_28, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__UndefWhileLabels_26));
#line 358 "llds_out_file.m"
    }
#line 360 "llds_out_file.m"
    {
#line 360 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__succeeded = mercury__set_tree234__is_empty_1_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85, ll_backend__llds_out__llds_out_file__UndefWhileLabels_26);
    }
#line 362 "llds_out_file.m"
    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 361 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__InternalLabels_29 = ll_backend__llds_out__llds_out_file__InternalLabels0_21;
#line 362 "llds_out_file.m"
    else
#line 363 "llds_out_file.m"
      {
#line 363 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_42_42;

#line 363 "llds_out_file.m"
        {
#line 363 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 363 "llds_out_file.m"
          MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_42_42, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_8[0]));
#line 363 "llds_out_file.m"
          MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_42_42, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__annotate_c_procedure_9_p_0_1));
#line 363 "llds_out_file.m"
          MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_42_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 363 "llds_out_file.m"
          MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_42_42, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__UndefWhileLabels_26));
#line 363 "llds_out_file.m"
        }
#line 363 "llds_out_file.m"
        {
#line 363 "llds_out_file.m"
          mercury__list__negated_filter_3_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85, ll_backend__llds_out__llds_out_file__V_42_42, ll_backend__llds_out__llds_out_file__InternalLabels0_21, &ll_backend__llds_out__llds_out_file__InternalLabels_29);
        }
#line 363 "llds_out_file.m"
      }
#line 366 "llds_out_file.m"
    {
#line 366 "llds_out_file.m"
      MR_Word base;
#line 366 "llds_out_file.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 366 "llds_out_file.m"
      *ll_backend__llds_out__llds_out_file__AnnotatedProc_12 = base;
#line 366 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Proc_11));
#line 366 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__LabelOutputInfo_28));
#line 366 "llds_out_file.m"
    }
#line 368 "llds_out_file.m"
    {
#line 368 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_44_44 = mercury__cord__from_list_1_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85, ll_backend__llds_out__llds_out_file__EntryLabels_20);
    }
#line 368 "llds_out_file.m"
    {
#line 368 "llds_out_file.m"
      *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllEntryLabels_31 = mercury__cord__f_43_43_2_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllEntryLabels_0_30, ll_backend__llds_out__llds_out_file__V_44_44);
    }
#line 370 "llds_out_file.m"
    {
#line 370 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_46_46 = mercury__cord__from_list_1_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85, ll_backend__llds_out__llds_out_file__InternalLabels_29);
    }
#line 369 "llds_out_file.m"
    {
#line 369 "llds_out_file.m"
      *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllInternalLabels_33 = mercury__cord__f_43_43_2_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllInternalLabels_0_32, ll_backend__llds_out__llds_out_file__V_46_46);
    }
#line 320 "llds_out_file.m"
  }
#line 314 "llds_out_file.m"
}

#line 300 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__annotate_c_procedures_9_p_0(
#line 300 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_1,
#line 300 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2,
#line 300 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__HeadVar__3_3,
#line 300 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllEntryLabels_0_4,
#line 300 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllEntryLabels_5,
#line 300 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllInternalLabels_0_6,
#line 300 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllInternalLabels_7,
#line 300 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_0_8,
#line 300 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_9)
#line 300 "llds_out_file.m"
{
#line 305 "llds_out_file.m"
  {
#line 305 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 305 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 305 "llds_out_file.m"
      {
#line 305 "llds_out_file.m"
        *ll_backend__llds_out__llds_out_file__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 306 "llds_out_file.m"
        *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_9 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_0_8;
#line 306 "llds_out_file.m"
        *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllInternalLabels_7 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllInternalLabels_0_6;
#line 306 "llds_out_file.m"
        *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllEntryLabels_5 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllEntryLabels_0_4;
#line 305 "llds_out_file.m"
      }
#line 305 "llds_out_file.m"
    else
#line 308 "llds_out_file.m"
      {
#line 308 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__Proc_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 0)));
#line 308 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__Procs_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 1)));
#line 308 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__AnnotatedProc_23;
#line 308 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__AnnotatedProcs_24;
#line 308 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllEntryLabels_34_34;
#line 308 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllInternalLabels_35_35;
#line 308 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_36_36;

#line 309 "llds_out_file.m"
        {
#line 309 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__annotate_c_procedure_9_p_0(ll_backend__llds_out__llds_out_file__Info_1, ll_backend__llds_out__llds_out_file__Proc_21, &ll_backend__llds_out__llds_out_file__AnnotatedProc_23, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllEntryLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllEntryLabels_34_34, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllInternalLabels_0_6, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllInternalLabels_35_35, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_0_8, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_36_36);
        }
#line 311 "llds_out_file.m"
        {
#line 311 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__annotate_c_procedures_9_p_0(ll_backend__llds_out__llds_out_file__Info_1, ll_backend__llds_out__llds_out_file__Procs_22, &ll_backend__llds_out__llds_out_file__AnnotatedProcs_24, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllEntryLabels_34_34, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllEntryLabels_5, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllInternalLabels_35_35, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllInternalLabels_7, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_36_36, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_9);
        }
#line 307 "llds_out_file.m"
        {
#line 307 "llds_out_file.m"
          MR_Word base;
#line 307 "llds_out_file.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 307 "llds_out_file.m"
          *ll_backend__llds_out__llds_out_file__HeadVar__3_3 = base;
#line 307 "llds_out_file.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__AnnotatedProc_23));
#line 307 "llds_out_file.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__AnnotatedProcs_24));
#line 307 "llds_out_file.m"
        }
#line 308 "llds_out_file.m"
      }
#line 305 "llds_out_file.m"
  }
#line 300 "llds_out_file.m"
}

#line 268 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__annotate_c_modules_9_p_0(
#line 268 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_1,
#line 268 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2,
#line 268 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__HeadVar__3_3,
#line 268 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EntryLabels_0_4,
#line 268 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EntryLabels_5,
#line 268 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabels_0_6,
#line 268 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabels_7,
#line 268 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_0_8,
#line 268 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_9)
#line 268 "llds_out_file.m"
{
#line 273 "llds_out_file.m"
  {
#line 273 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 273 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 273 "llds_out_file.m"
      {
#line 273 "llds_out_file.m"
        *ll_backend__llds_out__llds_out_file__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 273 "llds_out_file.m"
        *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_9 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_0_8;
#line 273 "llds_out_file.m"
        *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabels_7 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabels_0_6;
#line 273 "llds_out_file.m"
        *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EntryLabels_5 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EntryLabels_0_4;
#line 273 "llds_out_file.m"
      }
#line 273 "llds_out_file.m"
    else
#line 276 "llds_out_file.m"
      {
#line 276 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_34_64 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 276 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__Module_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 0)));
#line 276 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__Modules_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 1)));
#line 276 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__AnnotatedModule_23;
#line 276 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__AnnotatedModules_24;
#line 276 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EntryLabels_34_34;
#line 276 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabels_35_35;
#line 276 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_36_36;
#line 276 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__ModuleName_52 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Module_21, (MR_Integer) 0)));
#line 276 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__Procs_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Module_21, (MR_Integer) 1)));
#line 276 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__AnnotatedProcs_54;
#line 276 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__ModuleEntryLabels_55;
#line 276 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__ModuleInternalLabels_56;
#line 276 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__ModuleEntryLabelList_57;
#line 276 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__ModuleInternalLabelList_58;
#line 276 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_59_59;
#line 276 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_60_60;

#line 291 "llds_out_file.m"
        {
#line 291 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__V_59_59 = mercury__cord__init_0_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_34_64);
        }
#line 291 "llds_out_file.m"
        {
#line 291 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__V_60_60 = mercury__cord__init_0_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_34_64);
        }
#line 290 "llds_out_file.m"
        {
#line 290 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__annotate_c_procedures_9_p_0(ll_backend__llds_out__llds_out_file__Info_1, ll_backend__llds_out__llds_out_file__Procs_53, &ll_backend__llds_out__llds_out_file__AnnotatedProcs_54, ll_backend__llds_out__llds_out_file__V_59_59, &ll_backend__llds_out__llds_out_file__ModuleEntryLabels_55, ll_backend__llds_out__llds_out_file__V_60_60, &ll_backend__llds_out__llds_out_file__ModuleInternalLabels_56, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_0_8, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_36_36);
        }
#line 293 "llds_out_file.m"
        {
#line 293 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__ModuleEntryLabelList_57 = mercury__cord__list_1_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_34_64, ll_backend__llds_out__llds_out_file__ModuleEntryLabels_55);
        }
#line 294 "llds_out_file.m"
        {
#line 294 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__ModuleInternalLabelList_58 = mercury__cord__list_1_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_34_64, ll_backend__llds_out__llds_out_file__ModuleInternalLabels_56);
        }
#line 295 "llds_out_file.m"
        {
#line 295 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__AnnotatedModule_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 295 "llds_out_file.m"
          MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__AnnotatedModule_23, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__ModuleName_52));
#line 295 "llds_out_file.m"
          MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__AnnotatedModule_23, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__AnnotatedProcs_54));
#line 295 "llds_out_file.m"
          MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__AnnotatedModule_23, 2) = ((MR_Box) (ll_backend__llds_out__llds_out_file__ModuleEntryLabelList_57));
#line 295 "llds_out_file.m"
          MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__AnnotatedModule_23, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__ModuleInternalLabelList_58));
#line 295 "llds_out_file.m"
        }
#line 297 "llds_out_file.m"
        {
#line 297 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EntryLabels_34_34 = mercury__cord__f_43_43_2_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_34_64, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EntryLabels_0_4, ll_backend__llds_out__llds_out_file__ModuleEntryLabels_55);
        }
#line 298 "llds_out_file.m"
        {
#line 298 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabels_35_35 = mercury__cord__f_43_43_2_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_34_64, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabels_0_6, ll_backend__llds_out__llds_out_file__ModuleInternalLabels_56);
        }
#line 279 "llds_out_file.m"
        {
#line 279 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__annotate_c_modules_9_p_0(ll_backend__llds_out__llds_out_file__Info_1, ll_backend__llds_out__llds_out_file__Modules_22, &ll_backend__llds_out__llds_out_file__AnnotatedModules_24, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EntryLabels_34_34, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EntryLabels_5, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabels_35_35, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabels_7, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_36_36, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_9);
        }
#line 275 "llds_out_file.m"
        {
#line 275 "llds_out_file.m"
          MR_Word base;
#line 275 "llds_out_file.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 275 "llds_out_file.m"
          *ll_backend__llds_out__llds_out_file__HeadVar__3_3 = base;
#line 275 "llds_out_file.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__AnnotatedModule_23));
#line 275 "llds_out_file.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__AnnotatedModules_24));
#line 275 "llds_out_file.m"
        }
#line 276 "llds_out_file.m"
      }
#line 273 "llds_out_file.m"
  }
#line 268 "llds_out_file.m"
}

#line 211 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_file_mercury_headers_3_p_0(
#line 211 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_4)
#line 211 "llds_out_file.m"
{
#line 214 "llds_out_file.m"
  {
#line 214 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 214 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TraceLevel_6;
#line 214 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TraceLevelIsNone_7;
#line 214 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__DeepProfile_8;
#line 214 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__GenerateBytecode_9;
#line 217 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_22_22;
#line 217 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_23_23;
#line 217 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_24_24;
#line 217 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_25_25;
#line 217 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_26_26;
#line 217 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_27_27;
#line 217 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_28_28;
#line 217 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_29_29;
#line 217 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_30_30;
#line 217 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_31_31;
#line 217 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_32_32;
#line 217 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_33_33;
#line 217 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_34_34;
#line 217 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_35_35;
#line 217 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_36_36;
#line 217 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_37_37;
#line 217 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_38_38;
#line 217 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_39_39;
#line 217 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_40_40;
#line 217 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_41_41;
#line 217 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_42_42;
#line 225 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_43_43;
#line 225 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_44_44;
#line 225 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_45_45;
#line 225 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_46_46;
#line 225 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_47_47;
#line 225 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_48_48;
#line 225 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_49_49;
#line 225 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_50_50;
#line 225 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_51_51;
#line 225 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_52_52;
#line 225 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_54_54;
#line 225 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_55_55;
#line 225 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_56_56;
#line 225 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_57_57;
#line 225 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_58_58;
#line 225 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_59_59;
#line 225 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_60_60;
#line 225 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_61_61;
#line 225 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_62_62;
#line 225 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_63_63;

#line 215 "llds_out_file.m"
    {
#line 215 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#define MR_ALLOW_RESET\n");
    }
#line 216 "llds_out_file.m"
    {
#line 216 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#include \"mercury_imp.h\"\n");
    }
#line 217 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 0)));
#line 217 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 1)));
#line 217 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 2)));
#line 217 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 3)));
#line 217 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 4)));
#line 217 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 5)));
#line 217 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 6)));
#line 217 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 217 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 217 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 217 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 217 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 217 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 217 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 217 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 217 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 217 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 217 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 217 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 217 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 217 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__TraceLevel_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 217 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 8)));
#line 218 "llds_out_file.m"
    {
#line 218 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__TraceLevelIsNone_7 = libs__trace_params__given_trace_level_is_none_1_f_0(ll_backend__llds_out__llds_out_file__TraceLevel_6);
    }
#line 222 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__TraceLevelIsNone_7 == (MR_Integer) 0))
#line 220 "llds_out_file.m"
      {
#line 221 "llds_out_file.m"
        {
#line 221 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "#include \"mercury_trace_base.h\"\n");
        }
#line 220 "llds_out_file.m"
      }
#line 222 "llds_out_file.m"
    else
#line 223 "llds_out_file.m"
      {
#line 223 "llds_out_file.m"
      }
#line 225 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 0)));
#line 225 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 1)));
#line 225 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 2)));
#line 225 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 3)));
#line 225 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 4)));
#line 225 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 5)));
#line 225 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 6)));
#line 225 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_50_50 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 225 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 225 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 225 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__GenerateBytecode_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 225 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 225 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 225 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 225 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 225 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__DeepProfile_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 225 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 225 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 225 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 225 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 225 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_62_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 225 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 8)));
#line 229 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__DeepProfile_8 == (MR_Integer) 0))
#line 230 "llds_out_file.m"
      {
#line 230 "llds_out_file.m"
      }
#line 229 "llds_out_file.m"
    else
#line 227 "llds_out_file.m"
      {
#line 228 "llds_out_file.m"
        {
#line 228 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "#include \"mercury_deep_profiling.h\"\n");
        }
#line 227 "llds_out_file.m"
      }
#line 236 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__GenerateBytecode_9 == (MR_Integer) 0))
#line 237 "llds_out_file.m"
      {
#line 237 "llds_out_file.m"
      }
#line 236 "llds_out_file.m"
    else
#line 234 "llds_out_file.m"
      {
#line 235 "llds_out_file.m"
        {
#line 235 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "#include \"mb_interface_stub.h\"\n");
#line 235 "llds_out_file.m"
          return;
        }
#line 234 "llds_out_file.m"
      }
#line 214 "llds_out_file.m"
  }
#line 211 "llds_out_file.m"
}

#line 203 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_12(
#line 203 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 203 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 203 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 203 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 203 "llds_out_file.m"
{
#line 203 "llds_out_file.m"
  {
#line 203 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 203 "llds_out_file.m"
    {
#line 203 "llds_out_file.m"
      mercury__io__write_string_3_p_0(((MR_String) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
#line 203 "llds_out_file.m"
      return;
    }
#line 203 "llds_out_file.m"
  }
#line 203 "llds_out_file.m"
}

#line 202 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_11(
#line 202 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 202 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 202 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 202 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 202 "llds_out_file.m"
{
#line 202 "llds_out_file.m"
  {
#line 202 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 202 "llds_out_file.m"
    {
#line 202 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_user_foreign_code_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
#line 202 "llds_out_file.m"
      return;
    }
#line 202 "llds_out_file.m"
  }
#line 202 "llds_out_file.m"
}

#line 200 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_10(
#line 200 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 200 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 200 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 200 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 200 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 200 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5)
#line 200 "llds_out_file.m"
{
#line 200 "llds_out_file.m"
  {
#line 200 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 200 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv27_STATE_VARIABLE_DeclSet_16;

#line 200 "llds_out_file.m"
    {
#line 200 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_annotated_c_module_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv27_STATE_VARIABLE_DeclSet_16);
    }
#line 200 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv27_STATE_VARIABLE_DeclSet_16));
#line 200 "llds_out_file.m"
  }
#line 200 "llds_out_file.m"
}

#line 187 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_9(
#line 187 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 187 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 187 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 187 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 187 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 187 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5)
#line 187 "llds_out_file.m"
{
#line 187 "llds_out_file.m"
  {
#line 187 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 187 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv24_HeadVar__4_4;

#line 187 "llds_out_file.m"
    {
#line 187 "llds_out_file.m"
      ll_backend__layout_out__output_closure_layout_data_defn_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv24_HeadVar__4_4);
    }
#line 187 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv24_HeadVar__4_4));
#line 187 "llds_out_file.m"
  }
#line 187 "llds_out_file.m"
}

#line 185 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_8(
#line 185 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 185 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 185 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 185 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 185 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 185 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5)
#line 185 "llds_out_file.m"
{
#line 185 "llds_out_file.m"
  {
#line 185 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 185 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv21_HeadVar__4_4;

#line 185 "llds_out_file.m"
    {
#line 185 "llds_out_file.m"
      ll_backend__layout_out__output_module_layout_data_defn_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv21_HeadVar__4_4);
    }
#line 185 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv21_HeadVar__4_4));
#line 185 "llds_out_file.m"
  }
#line 185 "llds_out_file.m"
}

#line 183 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_7(
#line 183 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 183 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 183 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 183 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 183 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 183 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5)
#line 183 "llds_out_file.m"
{
#line 183 "llds_out_file.m"
  {
#line 183 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 183 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv18_HeadVar__4_4;

#line 183 "llds_out_file.m"
    {
#line 183 "llds_out_file.m"
      ll_backend__layout_out__output_proc_layout_data_defn_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv18_HeadVar__4_4);
    }
#line 183 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv18_HeadVar__4_4));
#line 183 "llds_out_file.m"
  }
#line 183 "llds_out_file.m"
}

#line 173 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_6(
#line 173 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 173 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 173 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 173 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 173 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 173 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5)
#line 173 "llds_out_file.m"
{
#line 173 "llds_out_file.m"
  {
#line 173 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 173 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv15_HeadVar__4_4;

#line 173 "llds_out_file.m"
    {
#line 173 "llds_out_file.m"
      ll_backend__rtti_out__output_rtti_data_defn_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv15_HeadVar__4_4);
    }
#line 173 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv15_HeadVar__4_4));
#line 173 "llds_out_file.m"
  }
#line 173 "llds_out_file.m"
}

#line 171 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_5(
#line 171 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 171 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 171 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 171 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 171 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 171 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5)
#line 171 "llds_out_file.m"
{
#line 171 "llds_out_file.m"
  {
#line 171 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 171 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv12_HeadVar__4_4;

#line 171 "llds_out_file.m"
    {
#line 171 "llds_out_file.m"
      ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv12_HeadVar__4_4);
    }
#line 171 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv12_HeadVar__4_4));
#line 171 "llds_out_file.m"
  }
#line 171 "llds_out_file.m"
}

#line 169 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_4(
#line 169 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 169 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 169 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 169 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 169 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 169 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5)
#line 169 "llds_out_file.m"
{
#line 169 "llds_out_file.m"
  {
#line 169 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 169 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv9_HeadVar__4_4;

#line 169 "llds_out_file.m"
    {
#line 169 "llds_out_file.m"
      ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv9_HeadVar__4_4);
    }
#line 169 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv9_HeadVar__4_4));
#line 169 "llds_out_file.m"
  }
#line 169 "llds_out_file.m"
}

#line 167 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_3(
#line 167 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 167 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 167 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 167 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 167 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 167 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5)
#line 167 "llds_out_file.m"
{
#line 167 "llds_out_file.m"
  {
#line 167 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 167 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv6_HeadVar__4_4;

#line 167 "llds_out_file.m"
    {
#line 167 "llds_out_file.m"
      ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv6_HeadVar__4_4);
    }
#line 167 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv6_HeadVar__4_4));
#line 167 "llds_out_file.m"
  }
#line 167 "llds_out_file.m"
}

#line 162 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_2(
#line 162 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 162 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 162 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 162 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 162 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 162 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5)
#line 162 "llds_out_file.m"
{
#line 162 "llds_out_file.m"
  {
#line 162 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 162 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv3_HeadVar__3_3;

#line 162 "llds_out_file.m"
    {
#line 162 "llds_out_file.m"
      ll_backend__llds_out__llds_out_global__output_vector_common_data_decl_5_p_0(((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv3_HeadVar__3_3);
    }
#line 162 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv3_HeadVar__3_3));
#line 162 "llds_out_file.m"
  }
#line 162 "llds_out_file.m"
}

#line 160 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_1(
#line 160 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 160 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 160 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 160 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 160 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 160 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5)
#line 160 "llds_out_file.m"
{
#line 160 "llds_out_file.m"
  {
#line 160 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 160 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv0_HeadVar__3_3;

#line 160 "llds_out_file.m"
    {
#line 160 "llds_out_file.m"
      ll_backend__llds_out__llds_out_global__output_scalar_common_data_decl_5_p_0(((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv0_HeadVar__3_3);
    }
#line 160 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv0_HeadVar__3_3));
#line 160 "llds_out_file.m"
  }
#line 160 "llds_out_file.m"
}

#line 122 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0(
#line 122 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Globals_7,
#line 122 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__CFile_8,
#line 122 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_61,
#line 122 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_62)
#line 122 "llds_out_file.m"
{
#line 125 "llds_out_file.m"
  {
#line 125 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_125_125;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_126_126;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_132_132;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_133_133;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_134_134;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_140_140;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ModuleName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 0)));
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__C_HeaderLines_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 1)));
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__UserForeignCode_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 2)));
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__Exports_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 3)));
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TablingInfoStructs_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 4)));
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ScalarCommonDatas_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 5)));
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__VectorCommonDatas_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 6)));
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__RttiDatas_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 7)));
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__PseudoTypeInfos_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 8)));
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__HLDSVarNums_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 9)));
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ShortLocns_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 10)));
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__LongLocns_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 11)));
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__UserEventVarNums_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 12)));
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__UserEvents_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 13)));
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__NoVarLabelLayouts_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 14)));
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__SVarLabelLayouts_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 15)));
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__LVarLabelLayouts_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 16)));
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__InternalLabelToLayoutMap_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 17)));
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__EntryLabelToLayoutMap_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 18)));
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__CallSiteStatics_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 19)));
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__CoveragePoints_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 20)));
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ProcStatics_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 21)));
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ProcHeadVarNums_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 22)));
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ProcVarNames_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 23)));
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ProcBodyBytecodes_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 24)));
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TSStringTable_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 25)));
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TableIoEntries_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 26)));
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TableIoEntryMap_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 27)));
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ProcEventLayouts_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 28)));
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ExecTraces_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 29)));
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ProcLayoutDatas_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 30)));
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ModuleLayoutDatas_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 31)));
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ClosureLayoutDatas_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 32)));
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__AllocSites_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 33)));
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__AllocSiteMap_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 34)));
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__Modules_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 35)));
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__UserInitPredCNames_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 36)));
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__UserFinalPredCNames_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 37)));
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ComplexityProcs_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 38)));
#line 125 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__Version_50;
#line 125 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__Fullarch_51;
#line 125 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__SourceFileName_52;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__Info_53;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__AnnotatedModules_54;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__EntryLabelsCord_55;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__InternalLabelsCord_56;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__EnvVarNameSet_57;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__EntryLabels_58;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__InternalLabels_59;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__EnvVarNames_60;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_67_67;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_68_68;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_69_69;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_77_77;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_80_80;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_82_82;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_84_84;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_86_86;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_87_87;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_89_89;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_90_90;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_92_92;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_93_93;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_95_95;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_96_96;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_100_100;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_101_101;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_103_103;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_104_104;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_106_106;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_107_107;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_110_110;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_112_112;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_114_114;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_115_115;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_117_117;
#line 160 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_DeclSet_77_77;
#line 160 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_IO_78_78;
#line 162 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv5_STATE_VARIABLE_DeclSet_80_80;
#line 162 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv4_STATE_VARIABLE_IO_81_81;
#line 167 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv8_STATE_VARIABLE_DeclSet_87_87;
#line 167 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv7_STATE_VARIABLE_IO_88_88;
#line 169 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv11_STATE_VARIABLE_DeclSet_90_90;
#line 169 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv10_STATE_VARIABLE_IO_91_91;
#line 171 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv14_STATE_VARIABLE_DeclSet_93_93;
#line 171 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv13_STATE_VARIABLE_IO_94_94;
#line 173 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv17_STATE_VARIABLE_DeclSet_96_96;
#line 173 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv16_STATE_VARIABLE_IO_97_97;
#line 183 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv20_STATE_VARIABLE_DeclSet_101_101;
#line 183 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv19_STATE_VARIABLE_IO_102_102;
#line 185 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv23_STATE_VARIABLE_DeclSet_104_104;
#line 185 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv22_STATE_VARIABLE_IO_105_105;
#line 187 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv26_STATE_VARIABLE_DeclSet_107_107;
#line 187 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv25_STATE_VARIABLE_IO_108_108;
#line 200 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv29_STATE_VARIABLE_DeclSet_115_115;
#line 200 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv28_STATE_VARIABLE_IO_116_116;
#line 202 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv30_STATE_VARIABLE_IO_118_118;
#line 203 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv31_STATE_VARIABLE_IO_120_120;

#line 138 "llds_out_file.m"
    {
#line 138 "llds_out_file.m"
      mercury__library__version_2_p_0(&ll_backend__llds_out__llds_out_file__Version_50, &ll_backend__llds_out__llds_out_file__Fullarch_51);
    }
#line 139 "llds_out_file.m"
    {
#line 139 "llds_out_file.m"
      parse_tree__file_names__module_source_filename_5_p_0(ll_backend__llds_out__llds_out_file__Globals_7, ll_backend__llds_out__llds_out_file__ModuleName_11, &ll_backend__llds_out__llds_out_file__SourceFileName_52);
    }
#line 140 "llds_out_file.m"
    {
#line 140 "llds_out_file.m"
      backend_libs__c_util__output_c_file_intro_and_grade_6_p_0(ll_backend__llds_out__llds_out_file__Globals_7, ll_backend__llds_out__llds_out_file__SourceFileName_52, ll_backend__llds_out__llds_out_file__Version_50, ll_backend__llds_out__llds_out_file__Fullarch_51);
    }
#line 143 "llds_out_file.m"
    {
#line 143 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__Info_53 = ll_backend__llds_out__llds_out_util__init_llds_out_info_7_f_0(ll_backend__llds_out__llds_out_file__ModuleName_11, ll_backend__llds_out__llds_out_file__SourceFileName_52, ll_backend__llds_out__llds_out_file__Globals_7, ll_backend__llds_out__llds_out_file__InternalLabelToLayoutMap_28, ll_backend__llds_out__llds_out_file__EntryLabelToLayoutMap_29, ll_backend__llds_out__llds_out_file__TableIoEntryMap_38, ll_backend__llds_out__llds_out_file__AllocSiteMap_45);
    }
#line 13043 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_125_125 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 147 "llds_out_file.m"
    {
#line 147 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_67_67 = mercury__cord__init_0_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_125_125);
    }
#line 147 "llds_out_file.m"
    {
#line 147 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_68_68 = mercury__cord__init_0_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_125_125);
    }
#line 13055 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_126_126 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 148 "llds_out_file.m"
    {
#line 148 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_69_69 = mercury__set__init_0_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_126_126);
    }
#line 146 "llds_out_file.m"
    {
#line 146 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__annotate_c_modules_9_p_0(ll_backend__llds_out__llds_out_file__Info_53, ll_backend__llds_out__llds_out_file__Modules_46, &ll_backend__llds_out__llds_out_file__AnnotatedModules_54, ll_backend__llds_out__llds_out_file__V_67_67, &ll_backend__llds_out__llds_out_file__EntryLabelsCord_55, ll_backend__llds_out__llds_out_file__V_68_68, &ll_backend__llds_out__llds_out_file__InternalLabelsCord_56, ll_backend__llds_out__llds_out_file__V_69_69, &ll_backend__llds_out__llds_out_file__EnvVarNameSet_57);
    }
#line 149 "llds_out_file.m"
    {
#line 149 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__EntryLabels_58 = mercury__cord__list_1_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_125_125, ll_backend__llds_out__llds_out_file__EntryLabelsCord_55);
    }
#line 150 "llds_out_file.m"
    {
#line 150 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__InternalLabels_59 = mercury__cord__list_1_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_125_125, ll_backend__llds_out__llds_out_file__InternalLabelsCord_56);
    }
#line 151 "llds_out_file.m"
    {
#line 151 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__EnvVarNames_60 = mercury__set__to_sorted_list_1_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_126_126, ll_backend__llds_out__llds_out_file__EnvVarNameSet_57);
    }
#line 152 "llds_out_file.m"
    {
#line 152 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_init_comment_6_p_0(ll_backend__llds_out__llds_out_file__ModuleName_11, ll_backend__llds_out__llds_out_file__UserInitPredCNames_47, ll_backend__llds_out__llds_out_file__UserFinalPredCNames_48, ll_backend__llds_out__llds_out_file__EnvVarNames_60);
    }
#line 154 "llds_out_file.m"
    {
#line 154 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_c_file_mercury_headers_3_p_0(ll_backend__llds_out__llds_out_file__Info_53);
    }
#line 156 "llds_out_file.m"
    {
#line 156 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_foreign_header_include_lines_4_p_0(ll_backend__llds_out__llds_out_file__Info_53, ll_backend__llds_out__llds_out_file__C_HeaderLines_12);
    }
#line 157 "llds_out_file.m"
    {
#line 157 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 159 "llds_out_file.m"
    {
#line 159 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_static_linkage_define_2_p_0();
    }
#line 13107 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_132_132 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_scalar_common_data_array_0;
#line 13109 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_133_133 = (MR_Word) &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0;
#line 13111 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_134_134 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 160 "llds_out_file.m"
    {
#line 160 "llds_out_file.m"
      mercury__list__foldl2_6_p_2(ll_backend__llds_out__llds_out_file__TypeCtorInfo_132_132, ll_backend__llds_out__llds_out_file__TypeCtorInfo_133_133, ll_backend__llds_out__llds_out_file__TypeCtorInfo_134_134, (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_2[2], ll_backend__llds_out__llds_out_file__ScalarCommonDatas_16, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_61)), &ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_DeclSet_77_77, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_IO_78_78);
    }
#line 160 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_77_77 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_DeclSet_77_77);
#line 13120 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_140_140 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_vector_common_data_array_0;
#line 162 "llds_out_file.m"
    {
#line 162 "llds_out_file.m"
      mercury__list__foldl2_6_p_2(ll_backend__llds_out__llds_out_file__TypeCtorInfo_140_140, ll_backend__llds_out__llds_out_file__TypeCtorInfo_133_133, ll_backend__llds_out__llds_out_file__TypeCtorInfo_134_134, (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_2[3], ll_backend__llds_out__llds_out_file__VectorCommonDatas_17, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_77_77)), &ll_backend__llds_out__llds_out_file__conv5_STATE_VARIABLE_DeclSet_80_80, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv4_STATE_VARIABLE_IO_81_81);
    }
#line 162 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_80_80 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv5_STATE_VARIABLE_DeclSet_80_80);
#line 164 "llds_out_file.m"
    {
#line 164 "llds_out_file.m"
      ll_backend__rtti_out__output_rtti_data_decl_list_6_p_0(ll_backend__llds_out__llds_out_file__Info_53, ll_backend__llds_out__llds_out_file__RttiDatas_18, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_80_80, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_82_82);
    }
#line 165 "llds_out_file.m"
    {
#line 165 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_record_c_label_decls_7_p_0(ll_backend__llds_out__llds_out_file__Info_53, ll_backend__llds_out__llds_out_file__EntryLabels_58, ll_backend__llds_out__llds_out_file__InternalLabels_59, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_82_82, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_84_84);
    }
#line 167 "llds_out_file.m"
    {
#line 167 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 167 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_86_86, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_6[0]));
#line 167 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_86_86, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_3));
#line 167 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_86_86, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 167 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_86_86, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_53));
#line 167 "llds_out_file.m"
    }
#line 167 "llds_out_file.m"
    {
#line 167 "llds_out_file.m"
      mercury__list__foldl2_6_p_2((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_tabling_info_struct_0, ll_backend__llds_out__llds_out_file__TypeCtorInfo_133_133, ll_backend__llds_out__llds_out_file__TypeCtorInfo_134_134, ll_backend__llds_out__llds_out_file__V_86_86, ll_backend__llds_out__llds_out_file__TablingInfoStructs_15, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_84_84)), &ll_backend__llds_out__llds_out_file__conv8_STATE_VARIABLE_DeclSet_87_87, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv7_STATE_VARIABLE_IO_88_88);
    }
#line 167 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_87_87 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv8_STATE_VARIABLE_DeclSet_87_87);
#line 169 "llds_out_file.m"
    {
#line 169 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 169 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_89_89, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_6[1]));
#line 169 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_89_89, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_4));
#line 169 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_89_89, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 169 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_89_89, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_53));
#line 169 "llds_out_file.m"
    }
#line 169 "llds_out_file.m"
    {
#line 169 "llds_out_file.m"
      mercury__list__foldl2_6_p_2(ll_backend__llds_out__llds_out_file__TypeCtorInfo_132_132, ll_backend__llds_out__llds_out_file__TypeCtorInfo_133_133, ll_backend__llds_out__llds_out_file__TypeCtorInfo_134_134, ll_backend__llds_out__llds_out_file__V_89_89, ll_backend__llds_out__llds_out_file__ScalarCommonDatas_16, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_87_87)), &ll_backend__llds_out__llds_out_file__conv11_STATE_VARIABLE_DeclSet_90_90, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv10_STATE_VARIABLE_IO_91_91);
    }
#line 169 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_90_90 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv11_STATE_VARIABLE_DeclSet_90_90);
#line 171 "llds_out_file.m"
    {
#line 171 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 171 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_92_92, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_6[2]));
#line 171 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_92_92, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_5));
#line 171 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_92_92, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 171 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_92_92, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_53));
#line 171 "llds_out_file.m"
    }
#line 171 "llds_out_file.m"
    {
#line 171 "llds_out_file.m"
      mercury__list__foldl2_6_p_2(ll_backend__llds_out__llds_out_file__TypeCtorInfo_140_140, ll_backend__llds_out__llds_out_file__TypeCtorInfo_133_133, ll_backend__llds_out__llds_out_file__TypeCtorInfo_134_134, ll_backend__llds_out__llds_out_file__V_92_92, ll_backend__llds_out__llds_out_file__VectorCommonDatas_17, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_90_90)), &ll_backend__llds_out__llds_out_file__conv14_STATE_VARIABLE_DeclSet_93_93, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv13_STATE_VARIABLE_IO_94_94);
    }
#line 171 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_93_93 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv14_STATE_VARIABLE_DeclSet_93_93);
#line 173 "llds_out_file.m"
    {
#line 173 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_95_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 173 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_95_95, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_6[3]));
#line 173 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_95_95, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_6));
#line 173 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_95_95, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 173 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_95_95, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_53));
#line 173 "llds_out_file.m"
    }
#line 173 "llds_out_file.m"
    {
#line 173 "llds_out_file.m"
      mercury__list__foldl2_6_p_2((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0, ll_backend__llds_out__llds_out_file__TypeCtorInfo_133_133, ll_backend__llds_out__llds_out_file__TypeCtorInfo_134_134, ll_backend__llds_out__llds_out_file__V_95_95, ll_backend__llds_out__llds_out_file__RttiDatas_18, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_93_93)), &ll_backend__llds_out__llds_out_file__conv17_STATE_VARIABLE_DeclSet_96_96, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv16_STATE_VARIABLE_IO_97_97);
    }
#line 173 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_96_96 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv17_STATE_VARIABLE_DeclSet_96_96);
#line 175 "llds_out_file.m"
    {
#line 175 "llds_out_file.m"
      mercury__io__nl_2_p_0();
    }
#line 176 "llds_out_file.m"
    {
#line 176 "llds_out_file.m"
      ll_backend__layout_out__output_layout_array_decls_22_p_0(ll_backend__llds_out__llds_out_file__Info_53, ll_backend__llds_out__llds_out_file__PseudoTypeInfos_19, ll_backend__llds_out__llds_out_file__HLDSVarNums_20, ll_backend__llds_out__llds_out_file__ShortLocns_21, ll_backend__llds_out__llds_out_file__LongLocns_22, ll_backend__llds_out__llds_out_file__UserEventVarNums_23, ll_backend__llds_out__llds_out_file__UserEvents_24, ll_backend__llds_out__llds_out_file__NoVarLabelLayouts_25, ll_backend__llds_out__llds_out_file__SVarLabelLayouts_26, ll_backend__llds_out__llds_out_file__LVarLabelLayouts_27, ll_backend__llds_out__llds_out_file__CallSiteStatics_30, ll_backend__llds_out__llds_out_file__CoveragePoints_31, ll_backend__llds_out__llds_out_file__ProcStatics_32, ll_backend__llds_out__llds_out_file__ProcHeadVarNums_33, ll_backend__llds_out__llds_out_file__ProcVarNames_34, ll_backend__llds_out__llds_out_file__ProcBodyBytecodes_35, ll_backend__llds_out__llds_out_file__TableIoEntries_37, ll_backend__llds_out__llds_out_file__ProcEventLayouts_39, ll_backend__llds_out__llds_out_file__ExecTraces_40, ll_backend__llds_out__llds_out_file__AllocSites_44);
    }
#line 183 "llds_out_file.m"
    {
#line 183 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_100_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 183 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_100_100, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_6[4]));
#line 183 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_100_100, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_7));
#line 183 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_100_100, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 183 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_100_100, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_53));
#line 183 "llds_out_file.m"
    }
#line 183 "llds_out_file.m"
    {
#line 183 "llds_out_file.m"
      mercury__list__foldl2_6_p_2((MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_data_0, ll_backend__llds_out__llds_out_file__TypeCtorInfo_133_133, ll_backend__llds_out__llds_out_file__TypeCtorInfo_134_134, ll_backend__llds_out__llds_out_file__V_100_100, ll_backend__llds_out__llds_out_file__ProcLayoutDatas_41, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_96_96)), &ll_backend__llds_out__llds_out_file__conv20_STATE_VARIABLE_DeclSet_101_101, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv19_STATE_VARIABLE_IO_102_102);
    }
#line 183 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_101_101 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv20_STATE_VARIABLE_DeclSet_101_101);
#line 185 "llds_out_file.m"
    {
#line 185 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 185 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_103_103, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_6[5]));
#line 185 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_103_103, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_8));
#line 185 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_103_103, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 185 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_103_103, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_53));
#line 185 "llds_out_file.m"
    }
#line 185 "llds_out_file.m"
    {
#line 185 "llds_out_file.m"
      mercury__list__foldl2_6_p_2((MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_module_layout_data_0, ll_backend__llds_out__llds_out_file__TypeCtorInfo_133_133, ll_backend__llds_out__llds_out_file__TypeCtorInfo_134_134, ll_backend__llds_out__llds_out_file__V_103_103, ll_backend__llds_out__llds_out_file__ModuleLayoutDatas_42, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_101_101)), &ll_backend__llds_out__llds_out_file__conv23_STATE_VARIABLE_DeclSet_104_104, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv22_STATE_VARIABLE_IO_105_105);
    }
#line 185 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_104_104 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv23_STATE_VARIABLE_DeclSet_104_104);
#line 187 "llds_out_file.m"
    {
#line 187 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_106_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 187 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_106_106, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_6[6]));
#line 187 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_106_106, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_9));
#line 187 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_106_106, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 187 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_106_106, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_53));
#line 187 "llds_out_file.m"
    }
#line 187 "llds_out_file.m"
    {
#line 187 "llds_out_file.m"
      mercury__list__foldl2_6_p_2((MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_closure_proc_id_data_0, ll_backend__llds_out__llds_out_file__TypeCtorInfo_133_133, ll_backend__llds_out__llds_out_file__TypeCtorInfo_134_134, ll_backend__llds_out__llds_out_file__V_106_106, ll_backend__llds_out__llds_out_file__ClosureLayoutDatas_43, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_104_104)), &ll_backend__llds_out__llds_out_file__conv26_STATE_VARIABLE_DeclSet_107_107, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv25_STATE_VARIABLE_IO_108_108);
    }
#line 187 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_107_107 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv26_STATE_VARIABLE_DeclSet_107_107);
#line 189 "llds_out_file.m"
    {
#line 189 "llds_out_file.m"
      mercury__io__nl_2_p_0();
    }
#line 191 "llds_out_file.m"
    {
#line 191 "llds_out_file.m"
      ll_backend__llds_out__llds_out_data__output_record_rvals_decls_6_p_0(ll_backend__llds_out__llds_out_file__Info_53, ll_backend__llds_out__llds_out_file__PseudoTypeInfos_19, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_107_107, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_110_110);
    }
#line 192 "llds_out_file.m"
    {
#line 192 "llds_out_file.m"
      ll_backend__layout_out__output_layout_array_defns_25_p_0(ll_backend__llds_out__llds_out_file__Info_53, ll_backend__llds_out__llds_out_file__PseudoTypeInfos_19, ll_backend__llds_out__llds_out_file__HLDSVarNums_20, ll_backend__llds_out__llds_out_file__ShortLocns_21, ll_backend__llds_out__llds_out_file__LongLocns_22, ll_backend__llds_out__llds_out_file__UserEventVarNums_23, ll_backend__llds_out__llds_out_file__UserEvents_24, ll_backend__llds_out__llds_out_file__NoVarLabelLayouts_25, ll_backend__llds_out__llds_out_file__SVarLabelLayouts_26, ll_backend__llds_out__llds_out_file__LVarLabelLayouts_27, ll_backend__llds_out__llds_out_file__CallSiteStatics_30, ll_backend__llds_out__llds_out_file__CoveragePoints_31, ll_backend__llds_out__llds_out_file__ProcStatics_32, ll_backend__llds_out__llds_out_file__ProcHeadVarNums_33, ll_backend__llds_out__llds_out_file__ProcVarNames_34, ll_backend__llds_out__llds_out_file__ProcBodyBytecodes_35, ll_backend__llds_out__llds_out_file__TableIoEntries_37, ll_backend__llds_out__llds_out_file__ProcEventLayouts_39, ll_backend__llds_out__llds_out_file__ExecTraces_40, ll_backend__llds_out__llds_out_file__TSStringTable_36, ll_backend__llds_out__llds_out_file__AllocSites_44, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_110_110, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_112_112);
    }
#line 200 "llds_out_file.m"
    {
#line 200 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_114_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 200 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_114_114, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_6[7]));
#line 200 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_114_114, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_10));
#line 200 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_114_114, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 200 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_114_114, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_53));
#line 200 "llds_out_file.m"
    }
#line 200 "llds_out_file.m"
    {
#line 200 "llds_out_file.m"
      mercury__list__foldl2_6_p_2((MR_Word) &ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__type_ctor_info_annotated_c_module_0, ll_backend__llds_out__llds_out_file__TypeCtorInfo_133_133, ll_backend__llds_out__llds_out_file__TypeCtorInfo_134_134, ll_backend__llds_out__llds_out_file__V_114_114, ll_backend__llds_out__llds_out_file__AnnotatedModules_54, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_112_112)), &ll_backend__llds_out__llds_out_file__conv29_STATE_VARIABLE_DeclSet_115_115, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv28_STATE_VARIABLE_IO_116_116);
    }
#line 200 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_115_115 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv29_STATE_VARIABLE_DeclSet_115_115);
#line 202 "llds_out_file.m"
    {
#line 202 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_117_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 202 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_117_117, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_4[1]));
#line 202 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_117_117, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_11));
#line 202 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_117_117, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 202 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_117_117, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_53));
#line 202 "llds_out_file.m"
    }
#line 202 "llds_out_file.m"
    {
#line 202 "llds_out_file.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_user_foreign_code_0, ll_backend__llds_out__llds_out_file__TypeCtorInfo_134_134, ll_backend__llds_out__llds_out_file__V_117_117, ll_backend__llds_out__llds_out_file__UserForeignCode_13, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv30_STATE_VARIABLE_IO_118_118);
    }
#line 203 "llds_out_file.m"
    {
#line 203 "llds_out_file.m"
      mercury__list__foldl_4_p_2(ll_backend__llds_out__llds_out_file__TypeCtorInfo_126_126, ll_backend__llds_out__llds_out_file__TypeCtorInfo_134_134, (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_2[4], ll_backend__llds_out__llds_out_file__Exports_14, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv31_STATE_VARIABLE_IO_120_120);
    }
#line 204 "llds_out_file.m"
    {
#line 204 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 205 "llds_out_file.m"
    {
#line 205 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_c_module_init_list_15_p_0(ll_backend__llds_out__llds_out_file__Info_53, ll_backend__llds_out__llds_out_file__ModuleName_11, ll_backend__llds_out__llds_out_file__AnnotatedModules_54, ll_backend__llds_out__llds_out_file__RttiDatas_18, ll_backend__llds_out__llds_out_file__ProcLayoutDatas_41, ll_backend__llds_out__llds_out_file__ModuleLayoutDatas_42, ll_backend__llds_out__llds_out_file__ComplexityProcs_49, ll_backend__llds_out__llds_out_file__TSStringTable_36, ll_backend__llds_out__llds_out_file__AllocSites_44, ll_backend__llds_out__llds_out_file__UserInitPredCNames_47, ll_backend__llds_out__llds_out_file__UserFinalPredCNames_48, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_115_115, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_62);
#line 205 "llds_out_file.m"
      return;
    }
#line 125 "llds_out_file.m"
  }
#line 122 "llds_out_file.m"
}

#line 116 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_llds_2_4_p_0(
#line 116 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Globals_5,
#line 116 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__CFile_6)
#line 116 "llds_out_file.m"
{
#line 118 "llds_out_file.m"
  {
#line 118 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 118 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__DeclSet0_8;
#line 120 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_9_9;

#line 119 "llds_out_file.m"
    {
#line 119 "llds_out_file.m"
      ll_backend__llds_out__llds_out_util__decl_set_init_1_p_0(&ll_backend__llds_out__llds_out_file__DeclSet0_8);
    }
#line 120 "llds_out_file.m"
    {
#line 120 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0(ll_backend__llds_out__llds_out_file__Globals_5, ll_backend__llds_out__llds_out_file__CFile_6, ll_backend__llds_out__llds_out_file__DeclSet0_8, &ll_backend__llds_out__llds_out_file__V_9_9);
    }
#line 118 "llds_out_file.m"
  }
#line 116 "llds_out_file.m"
}

#line 46 "llds_out_file.m"
MR_String MR_CALL 
ll_backend__llds_out__llds_out_file__c_data_const_string_2_f_0(
#line 46 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Globals_4,
#line 46 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__InclCodeAddr_5)
#line 46 "llds_out_file.m"
{
#line 1678 "llds_out_file.m"
  {
#line 1678 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded = (ll_backend__llds_out__llds_out_file__InclCodeAddr_5 == (MR_Integer) 1);
#line 1678 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__HeadVar__3_3;
#line 1680 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_6_6;
#line 1680 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_7_7;

#line 1680 "llds_out_file.m"
    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1680 "llds_out_file.m"
      {
#line 1681 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_6_6 = (MR_Integer) 446;
#line 1681 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_7_7 = (MR_Integer) 0;
#line 1681 "llds_out_file.m"
        {
#line 1681 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__succeeded = libs__globals__lookup_bool_option_3_p_1(ll_backend__llds_out__llds_out_file__Globals_4, ll_backend__llds_out__llds_out_file__V_6_6, ll_backend__llds_out__llds_out_file__V_7_7);
        }
#line 1680 "llds_out_file.m"
      }
#line 1678 "llds_out_file.m"
    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1683 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__HeadVar__3_3 = (MR_String) "";
#line 1678 "llds_out_file.m"
    else
#line 1685 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__HeadVar__3_3 = (MR_String) "const ";
#line 1678 "llds_out_file.m"
    return ll_backend__llds_out__llds_out_file__HeadVar__3_3;
#line 1678 "llds_out_file.m"
  }
#line 46 "llds_out_file.m"
}

#line 41 "llds_out_file.m"
MR_String MR_CALL 
ll_backend__llds_out__llds_out_file__c_data_linkage_string_2_f_0(
#line 41 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__DefaultLinkage_4,
#line 41 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__BeingDefined_5)
#line 41 "llds_out_file.m"
{
#line 1660 "llds_out_file.m"
  {
#line 1660 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 1660 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__LinkageStr_6;

#line 1660 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__DefaultLinkage_4 == (MR_Integer) 0))
#line 1664 "llds_out_file.m"
      if ((ll_backend__llds_out__llds_out_file__BeingDefined_5 == (MR_Integer) 0))
#line 1666 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__LinkageStr_6 = (MR_String) "extern ";
#line 1664 "llds_out_file.m"
      else
#line 1663 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__LinkageStr_6 = (MR_String) "";
#line 1660 "llds_out_file.m"
    else
#line 1675 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__LinkageStr_6 = (MR_String) "static ";
#line 1660 "llds_out_file.m"
    return ll_backend__llds_out__llds_out_file__LinkageStr_6;
#line 1660 "llds_out_file.m"
  }
#line 41 "llds_out_file.m"
}

#line 113 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_llds_5_p_0_1(
#line 113 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 113 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 113 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_2)
#line 113 "llds_out_file.m"
{
#line 113 "llds_out_file.m"
  {
#line 113 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 113 "llds_out_file.m"
    {
#line 113 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_llds_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 4))));
#line 113 "llds_out_file.m"
      return;
    }
#line 113 "llds_out_file.m"
  }
#line 113 "llds_out_file.m"
}

#line 31 "llds_out_file.m"
void MR_CALL 
ll_backend__llds_out__llds_out_file__output_llds_5_p_0(
#line 31 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Globals_6,
#line 31 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__CFile_7,
#line 31 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__Succeeded_8)
#line 31 "llds_out_file.m"
{
#line 109 "llds_out_file.m"
  {
#line 109 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 109 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 0)));
#line 109 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__FileName_11;
#line 109 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_17_17;
#line 110 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 1)));
#line 110 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 2)));
#line 110 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 3)));
#line 110 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 4)));
#line 110 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 5)));
#line 110 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 6)));
#line 110 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 7)));
#line 110 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 8)));
#line 110 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 9)));
#line 110 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 10)));
#line 110 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 11)));
#line 110 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 12)));
#line 110 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 13)));
#line 110 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 14)));
#line 110 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 15)));
#line 110 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 16)));
#line 110 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 17)));
#line 110 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 18)));
#line 110 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 19)));
#line 110 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 20)));
#line 110 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 21)));
#line 110 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 22)));
#line 110 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 23)));
#line 110 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 24)));
#line 110 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 25)));
#line 110 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 26)));
#line 110 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 27)));
#line 110 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 28)));
#line 110 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 29)));
#line 110 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 30)));
#line 110 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 31)));
#line 110 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 32)));
#line 110 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 33)));
#line 110 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 34)));
#line 110 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 35)));
#line 110 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 36)));
#line 110 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 37)));
#line 110 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 38)));

#line 111 "llds_out_file.m"
    {
#line 111 "llds_out_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(ll_backend__llds_out__llds_out_file__Globals_6, ll_backend__llds_out__llds_out_file__ModuleName_10, (MR_String) ".c", (MR_Integer) 0, &ll_backend__llds_out__llds_out_file__FileName_11);
    }
#line 113 "llds_out_file.m"
    {
#line 113 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 113 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_17_17, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_4[0]));
#line 113 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_17_17, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_llds_5_p_0_1));
#line 113 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 113 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_17_17, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Globals_6));
#line 113 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_17_17, 4) = ((MR_Box) (ll_backend__llds_out__llds_out_file__CFile_7));
#line 113 "llds_out_file.m"
    }
#line 113 "llds_out_file.m"
    {
#line 113 "llds_out_file.m"
      libs__file_util__output_to_file_6_p_0(ll_backend__llds_out__llds_out_file__Globals_6, ll_backend__llds_out__llds_out_file__FileName_11, ll_backend__llds_out__llds_out_file__V_17_17, ll_backend__llds_out__llds_out_file__Succeeded_8);
#line 113 "llds_out_file.m"
      return;
    }
#line 109 "llds_out_file.m"
  }
#line 31 "llds_out_file.m"
}

void mercury__ll_backend__llds_out__llds_out_file__init(void)
{
}

void mercury__ll_backend__llds_out__llds_out_file__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__type_ctor_info_annotated_c_module_0);
	MR_register_type_ctor_info(&ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__type_ctor_info_annotated_c_procedure_0);
	MR_register_type_ctor_info(&ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__type_ctor_info_linkage_0);
}

void mercury__ll_backend__llds_out__llds_out_file__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.llds_out.llds_out_file. */
