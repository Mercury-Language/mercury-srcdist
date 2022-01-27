/*
** Automatically generated from `llds_out_file.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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


/* :- module ll_backend.llds_out.llds_out_file. */
/* :- implementation. */

/*
INIT mercury__ll_backend__llds_out__llds_out_file__init
ENDINIT
*/

#include "ll_backend.llds_out.llds_out_file.mih"


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
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
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
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "library.mih"
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
#include "parse_tree.file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "ll_backend.llds_out.llds_out_code_addr.mih"
#include "ll_backend.llds_out.llds_out_data.mih"
#include "ll_backend.llds_out.llds_out_global.mih"
#include "ll_backend.llds_out.llds_out_instr.mih"
#include "ll_backend.llds_out.llds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




#line 169 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0;

#line 172 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds__type_ctor_info_label_0;

#line 175 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__llds_out__llds_out_file__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__layout__type_ctor_info_layout_slot_name_0;

#line 178 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__llds_out__llds_out_file__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__llds__type_ctor_info_data_id_0;

#line 181 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_foreign_literal_or_include_0;

#line 184 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__llds_out__llds_out_file__list__ti_list_1builtin__type_ctor_info_int_0;

#line 187 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__llds_out__llds_out_file__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_list__ti_list_1builtin__type_ctor_info_int_0;

#line 190 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_file__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

#line 193 "ll_backend.llds_out.llds_out_file.c"
static const MR_VA_TypeInfo_Struct2 ll_backend__llds_out__llds_out_file____vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

#line 196 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__llds_out__llds_out_file__list__ti_list_1__vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

#line 199 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__llds_out__llds_out_file__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_list__ti_list_1__vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

#line 202 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_file__list__pti_list_1__plain___vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

#line 205 "ll_backend.llds_out.llds_out_file.c"
static const MR_VA_PseudoTypeInfo_Struct2 ll_backend__llds_out__llds_out_file____vpti_tuple_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0;

#line 208 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__llds_out__llds_out_file__list__ti_list_1ll_backend__llds_out__llds_out_file__type_ctor_info_annotated_c_procedure_0;

#line 211 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__llds_out__llds_out_file__list__ti_list_1ll_backend__llds__type_ctor_info_label_0;

#line 214 "ll_backend.llds_out.llds_out_file.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__field_types_annotated_c_module_0_0[4];

#line 217 "ll_backend.llds_out.llds_out_file.c"
static const MR_ConstString ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__field_names_annotated_c_module_0_0[4];

#line 220 "ll_backend.llds_out.llds_out_file.c"
static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_functor_desc_annotated_c_module_0_0;

#line 223 "ll_backend.llds_out.llds_out_file.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_stag_ordered_annotated_c_module_0_0[1];

#line 226 "ll_backend.llds_out.llds_out_file.c"
static const MR_DuPtagLayout ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_ptag_ordered_annotated_c_module_0[1];

#line 229 "ll_backend.llds_out.llds_out_file.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_name_ordered_annotated_c_module_0[1];

#line 232 "ll_backend.llds_out.llds_out_file.c"
static const MR_Integer ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__functor_number_map_annotated_c_module_0[1];

#line 235 "ll_backend.llds_out.llds_out_file.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__field_types_annotated_c_procedure_0_0[2];

#line 238 "ll_backend.llds_out.llds_out_file.c"
static const MR_ConstString ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__field_names_annotated_c_procedure_0_0[2];

#line 241 "ll_backend.llds_out.llds_out_file.c"
static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_functor_desc_annotated_c_procedure_0_0;

#line 244 "ll_backend.llds_out.llds_out_file.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_stag_ordered_annotated_c_procedure_0_0[1];

#line 247 "ll_backend.llds_out.llds_out_file.c"
static const MR_DuPtagLayout ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_ptag_ordered_annotated_c_procedure_0[1];

#line 250 "ll_backend.llds_out.llds_out_file.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_name_ordered_annotated_c_procedure_0[1];

#line 253 "ll_backend.llds_out.llds_out_file.c"
static const MR_Integer ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__functor_number_map_annotated_c_procedure_0[1];

#line 256 "ll_backend.llds_out.llds_out_file.c"
static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_functor_desc_linkage_0_0;

#line 259 "ll_backend.llds_out.llds_out_file.c"
static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_functor_desc_linkage_0_1;

#line 262 "ll_backend.llds_out.llds_out_file.c"
static const MR_EnumFunctorDescPtr ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_value_ordered_linkage_0[2];

#line 265 "ll_backend.llds_out.llds_out_file.c"
static const MR_EnumFunctorDescPtr ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_name_ordered_linkage_0[2];

#line 268 "ll_backend.llds_out.llds_out_file.c"
static const MR_Integer ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__functor_number_map_linkage_0[2];

#line 271 "ll_backend.llds_out.llds_out_file.c"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file____Unify____annotated_c_module_0_0_10001(
#line 274 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 276 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2);

#line 279 "ll_backend.llds_out.llds_out_file.c"
static void MR_CALL 
ll_backend__llds_out__llds_out_file____Compare____annotated_c_module_0_0_10001(
#line 282 "ll_backend.llds_out.llds_out_file.c"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 284 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 286 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 289 "ll_backend.llds_out.llds_out_file.c"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file____Unify____annotated_c_procedure_0_0_10001(
#line 292 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 294 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2);

#line 297 "ll_backend.llds_out.llds_out_file.c"
static void MR_CALL 
ll_backend__llds_out__llds_out_file____Compare____annotated_c_procedure_0_0_10001(
#line 300 "ll_backend.llds_out.llds_out_file.c"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 302 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 304 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 307 "ll_backend.llds_out.llds_out_file.c"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file____Unify____linkage_0_0_10001(
#line 310 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 312 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2);

#line 315 "ll_backend.llds_out.llds_out_file.c"
static void MR_CALL 
ll_backend__llds_out__llds_out_file____Compare____linkage_0_0_10001(
#line 318 "ll_backend.llds_out.llds_out_file.c"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 320 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 322 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 1027 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_114_101_99_111_114_100_95_101_110_116_114_121_95_108_97_98_101_108_95_100_101_99_108_95_95_91_49_93_95_48_6_p_0(
#line 1027 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Label_8,
#line 1027 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_17,
#line 1027 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_18);

#line 373 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__IntroducedFrom__pred__annotate_c_procedure__373__1_2_p_0(
#line 373 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__UndefWhileLabels_26,
#line 373 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_86);

#line 208 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__IntroducedFrom__pred__output_single_c_file__208__1_3_p_0(
#line 208 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__LambdaHeadVar__1_123);

#line 272 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file____Compare____annotated_c_procedure_0_0(
#line 272 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 272 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2,
#line 272 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__3_3);

#line 272 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file____Unify____annotated_c_procedure_0_0(
#line 272 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 272 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2);

#line 264 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file____Compare____annotated_c_module_0_0(
#line 264 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 264 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2,
#line 264 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__3_3);

#line 264 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file____Unify____annotated_c_module_0_0(
#line 264 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 264 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2);

#line 1655 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__delete_any_maybe_labels_3_p_0(
#line 1655 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 1655 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_2,
#line 1655 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_3);

#line 1644 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__delete_any_maybe_label_3_p_0(
#line 1644 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__MaybeLabel_4,
#line 1644 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_7,
#line 1644 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_8);

#line 1636 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(
#line 1636 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 1636 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_2,
#line 1636 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_3);

#line 1626 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__delete_any_label_3_p_0(
#line 1626 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__CodeAddr_4,
#line 1626 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_7,
#line 1626 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_8);

#line 1449 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__find_while_labels_to_define_5_p_0(
#line 1449 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 1449 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2,
#line 1449 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__WhileLabels_3,
#line 1449 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4,
#line 1449 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_5);

#line 1415 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__count_while_label_in_block_4_p_0(
#line 1415 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Label_1,
#line 1415 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2,
#line 1415 "llds_out_file.m"
  MR_Integer ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_3,
#line 1415 "llds_out_file.m"
  MR_Integer * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_4);

#line 1394 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__is_while_label_5_p_0(
#line 1394 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Label_1,
#line 1394 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2,
#line 1394 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__HeadVar__3_3,
#line 1394 "llds_out_file.m"
  MR_Integer ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_4,
#line 1394 "llds_out_file.m"
  MR_Integer * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_5);

#line 1378 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__find_while_labels_3_p_0(
#line 1378 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 1378 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_WhileSet_0_2,
#line 1378 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_WhileSet_3);

#line 1328 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__find_cont_labels_3_p_0(
#line 1328 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 1328 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_0_2,
#line 1328 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_3);

#line 1308 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__find_caller_label_2_p_0(
#line 1308 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 1308 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__CallerLabel_2);

#line 1255 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_annotated_c_procedure_4_p_0(
#line 1255 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_5,
#line 1255 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__AnnotatedProc_6);

#line 1241 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_global_var_decl_5_p_0(
#line 1241 "llds_out_file.m"
  MR_String ll_backend__llds_out__llds_out_file__VarName_6,
#line 1241 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_10,
#line 1241 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_11);

#line 1239 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_c_procedure_decls_6_p_0_2(
#line 1239 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1239 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1239 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1239 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 1239 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 1239 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5);

#line 1238 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_c_procedure_decls_6_p_0_1(
#line 1238 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1238 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1238 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1238 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 1238 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 1238 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5);

#line 1229 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_c_procedure_decls_6_p_0(
#line 1229 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_7,
#line 1229 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__AnnotatedProc_8,
#line 1229 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_15,
#line 1229 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_16);

#line 1194 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_entry_label_init_4_p_0(
#line 1194 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__EntryLabelToLayoutMap_5,
#line 1194 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Label_6);

#line 1187 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__write_int_pair_3_p_0(
#line 1187 "llds_out_file.m"
  MR_Tuple ll_backend__llds_out__llds_out_file__HeadVar__1_1);

#line 1184 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_chunk_6_p_0_1(
#line 1184 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1184 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1184 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1184 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 1170 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_chunk_6_p_0(
#line 1170 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_7,
#line 1170 "llds_out_file.m"
  MR_String ll_backend__llds_out__llds_out_file__Suffix_8,
#line 1170 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ProcLabel_9,
#line 1170 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__LabelSlotNums_10);

#line 1167 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_group_5_p_0_1(
#line 1167 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1167 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1167 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1167 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 1155 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_group_5_p_0(
#line 1155 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_6,
#line 1155 "llds_out_file.m"
  MR_String ll_backend__llds_out__llds_out_file__Suffix_7,
#line 1155 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__3_3);

#line 1152 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_no_layout_init_chunk_4_p_0_1(
#line 1152 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1152 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1152 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1152 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 1143 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_no_layout_init_chunk_4_p_0(
#line 1143 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ProcLabel_5,
#line 1143 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__LabelNums_6);

#line 1140 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_no_layout_init_group_3_p_0_1(
#line 1140 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1140 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1140 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1140 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 1131 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_no_layout_init_group_3_p_0(
#line 1131 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1);

#line 1089 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__group_init_c_labels_10_p_0(
#line 1089 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 1089 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2,
#line 1089 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoLayoutMap_0_3,
#line 1089 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoLayoutMap_4,
#line 1089 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_0_5,
#line 1089 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_6,
#line 1089 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_0_7,
#line 1089 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_8,
#line 1089 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_0_9,
#line 1089 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_10);

#line 1086 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0_5(
#line 1086 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1086 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1086 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1086 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 1082 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0_4(
#line 1082 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1082 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1082 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1082 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 1078 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0_3(
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
ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0_2(
#line 1074 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1074 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1074 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1074 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 1063 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0_1(
#line 1063 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1063 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1063 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1063 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 1058 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0(
#line 1058 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_6,
#line 1058 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__EntryLabels_7,
#line 1058 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__InternalLabels_8);

#line 1027 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_entry_label_decl_6_p_0(
#line 1027 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file___Info_7,
#line 1027 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Label_8,
#line 1027 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_17,
#line 1027 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_18);

#line 1020 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__insert_internal_label_code_addr_decl_4_p_0(
#line 1020 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ProcLabel_5,
#line 1020 "llds_out_file.m"
  MR_Integer ll_backend__llds_out__llds_out_file__LabelNum_6,
#line 1020 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_9,
#line 1020 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_10);

#line 1017 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_internal_label_decl_group_6_p_0_2(
#line 1017 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1017 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1017 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1017 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 1015 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_internal_label_decl_group_6_p_0_1(
#line 1015 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1015 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1015 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1015 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 1005 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_internal_label_decl_group_6_p_0(
#line 1005 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ProcLabel_7,
#line 1005 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__LabelNums_8,
#line 1005 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_11,
#line 1005 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_12);

#line 1002 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_internal_label_decls_5_p_0_2(
#line 1002 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1002 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1002 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1002 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 1000 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_internal_label_decls_5_p_0_1(
#line 1000 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1000 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1000 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1000 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 1000 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 1000 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5);

#line 991 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_internal_label_decls_5_p_0(
#line 991 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 991 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_13,
#line 991 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_14);

#line 977 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__group_decl_c_labels_3_p_0(
#line 977 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 977 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabelMap_0_2,
#line 977 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabelMap_3);

#line 974 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_c_label_decls_7_p_0_2(
#line 974 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 974 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 974 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 974 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 974 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 974 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5);

#line 972 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_c_label_decls_7_p_0_1(
#line 972 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 972 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 972 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 972 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 972 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 972 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5);

#line 964 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_c_label_decls_7_p_0(
#line 964 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_8,
#line 964 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__EntryLabels_9,
#line 964 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__InternalLabels_10,
#line 964 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_15,
#line 964 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_16);

#line 928 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_foreign_decl_or_code_7_p_0(
#line 928 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_8,
#line 928 "llds_out_file.m"
  MR_String ll_backend__llds_out__llds_out_file__PragmaType_9,
#line 928 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Lang_10,
#line 928 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__LiteralOrInclude_11,
#line 928 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Context_12);

#line 903 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_foreign_header_include_line_6_p_0(
#line 903 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_7,
#line 903 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Decl_8,
#line 903 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AlreadyDone_0_15,
#line 903 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AlreadyDone_16);

#line 900 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_foreign_header_include_lines_4_p_0_1(
#line 900 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 900 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 900 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 900 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 900 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 900 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5);

#line 896 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_foreign_header_include_lines_4_p_0(
#line 896 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_5,
#line 896 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Decls_6);

#line 878 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_foreign_body_code_4_p_0(
#line 878 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_5,
#line 878 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ForeignBodyCode_6);

#line 862 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_static_linkage_define_2_p_0(void);

#line 857 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_annotated_c_module_6_p_0_2(
#line 857 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 857 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 857 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 857 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 849 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_annotated_c_module_6_p_0_1(
#line 849 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 849 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 849 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 849 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 849 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 849 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5);

#line 842 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_annotated_c_module_6_p_0(
#line 842 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_7,
#line 842 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__AnnotatedModule_8,
#line 842 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_15,
#line 842 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_16);

#line 832 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_required_init_or_final_calls_3_p_0(
#line 832 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1);

#line 825 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_env_var_init_3_p_0(
#line 825 "llds_out_file.m"
  MR_String ll_backend__llds_out__llds_out_file__EnvVarName_4);

#line 821 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_init_comment_6_p_0_1(
#line 821 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 821 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 821 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 821 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 794 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_init_comment_6_p_0(
#line 794 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ModuleName_7,
#line 794 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__UserInitPredCNames_8,
#line 794 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__UserFinalPredCNames_9,
#line 794 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__EnvVarNames_10);

#line 761 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_write_proc_static_list_3_p_0(
#line 761 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1);

#line 748 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_debugger_init_list_3_p_0(
#line 748 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1);

#line 736 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_type_tables_init_list_3_p_0(
#line 736 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1);

#line 714 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_alloc_sites_init_4_p_0(
#line 714 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_5,
#line 714 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__AllocSites_6);

#line 705 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_data_init_list_3_p_0(
#line 705 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1);

#line 679 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_init_bunch_calls_6_p_0(
#line 679 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_1,
#line 679 "llds_out_file.m"
  MR_String ll_backend__llds_out__llds_out_file__InitStatus_2,
#line 679 "llds_out_file.m"
  MR_Integer ll_backend__llds_out__llds_out_file__Seq_3,
#line 679 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__4_4);

#line 668 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_init_bunch_def_3_p_0(
#line 668 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1);

#line 654 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_init_bunch_defs_6_p_0(
#line 654 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_1,
#line 654 "llds_out_file.m"
  MR_String ll_backend__llds_out__llds_out_file__InitStatus_2,
#line 654 "llds_out_file.m"
  MR_Integer ll_backend__llds_out__llds_out_file__Seq_3,
#line 654 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__4_4);

#line 646 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__entry_label_has_layout_2_p_0(
#line 646 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__EntryLabelToLayoutMap_3,
#line 646 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Label_4);

#line 640 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__internal_label_has_layout_2_p_0(
#line 640 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__InternalLabelToLayoutMap_3,
#line 640 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Label_4);

#line 636 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__module_defines_label_with_layout_2_p_0_2(
#line 636 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 636 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1);

#line 631 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__module_defines_label_with_layout_2_p_0_1(
#line 631 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 631 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1);

#line 620 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__module_defines_label_with_layout_2_p_0(
#line 620 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_3,
#line 620 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__AnnotatedModule_4);

#line 415 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_module_init_list_15_p_0_1(
#line 415 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 415 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1);

#line 405 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_module_init_list_15_p_0(
#line 405 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_16,
#line 405 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ModuleName_17,
#line 405 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__AnnotatedModules_18,
#line 405 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__RttiDatas_19,
#line 405 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ProcLayoutDatas_20,
#line 405 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ModuleLayoutDatas_21,
#line 405 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ComplexityProcs_22,
#line 405 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__TSStringTable_23,
#line 405 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__AllocSites_24,
#line 405 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__InitPredNames_25,
#line 405 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__FinalPredNames_26,
#line 405 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_52,
#line 405 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_53);

#line 382 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__gather_labels_from_instrs_acc_5_p_0(
#line 382 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 382 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_0_2,
#line 382 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_3,
#line 382 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_0_4,
#line 382 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_5);

#line 373 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__annotate_c_procedure_9_p_0_1(
#line 373 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 373 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1);

#line 324 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__annotate_c_procedure_9_p_0(
#line 324 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_10,
#line 324 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Proc_11,
#line 324 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__AnnotatedProc_12,
#line 324 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllEntryLabels_0_30,
#line 324 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllEntryLabels_31,
#line 324 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllInternalLabels_0_32,
#line 324 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllInternalLabels_33,
#line 324 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_0_34,
#line 324 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_35);

#line 310 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__annotate_c_procedures_9_p_0(
#line 310 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_1,
#line 310 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2,
#line 310 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__HeadVar__3_3,
#line 310 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllEntryLabels_0_4,
#line 310 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllEntryLabels_5,
#line 310 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllInternalLabels_0_6,
#line 310 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllInternalLabels_7,
#line 310 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_0_8,
#line 310 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_9);

#line 278 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__annotate_c_modules_9_p_0(
#line 278 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_1,
#line 278 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2,
#line 278 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__HeadVar__3_3,
#line 278 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EntryLabels_0_4,
#line 278 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EntryLabels_5,
#line 278 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabels_0_6,
#line 278 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabels_7,
#line 278 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_0_8,
#line 278 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_9);

#line 221 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_file_mercury_headers_3_p_0(
#line 221 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_4);

#line 208 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_12(
#line 208 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 208 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 208 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 208 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 207 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_11(
#line 207 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 207 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 207 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 207 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 205 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_10(
#line 205 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 205 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 205 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 205 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 205 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 205 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5);

#line 192 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_9(
#line 192 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 192 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 192 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 192 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 192 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 192 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5);

#line 190 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_8(
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
ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_7(
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

#line 178 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_6(
#line 178 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 178 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 178 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 178 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 178 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 178 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5);

#line 176 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_5(
#line 176 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 176 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 176 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 176 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 176 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 176 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5);

#line 174 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_4(
#line 174 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 174 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 174 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 174 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 174 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 174 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5);

#line 172 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_3(
#line 172 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 172 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 172 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 172 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 172 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 172 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5);

#line 167 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_2(
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

#line 165 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_1(
#line 165 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 165 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 165 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 165 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 165 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 165 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5);

#line 127 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0(
#line 127 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Globals_7,
#line 127 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__CFile_8,
#line 127 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_65,
#line 127 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_66);

#line 121 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_llds_2_4_p_0(
#line 121 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Globals_5,
#line 121 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__CFile_6);

#line 118 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_llds_5_p_0_1(
#line 118 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 118 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 118 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_2);


static /* final */ const MR_Box ll_backend__llds_out__llds_out_file_scalar_common_1[6][2];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_file_scalar_common_2[12][3];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_file_scalar_common_3[1][4];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_file_scalar_common_4[6][7];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_file_scalar_common_5[5][8];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_file_scalar_common_6[14][9];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_file_scalar_common_7[5][6];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_file_scalar_common_8[4][5];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_file_scalar_common_9[1][1];




static /* final */ const MR_Box ll_backend__llds_out__llds_out_file_scalar_common_1[6][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_literal_or_include_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_3[0]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__type_ctor_info_annotated_c_procedure_0))
  },
  /* row 5 */
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
    ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_1[2]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_1[3]))
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
    ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_7[1])),
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
    ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_7[2])),
    ((MR_Box) (ll_backend__llds_out__llds_out_file__output_record_internal_label_decl_group_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_7[3])),
    ((MR_Box) (ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_7[2])),
    ((MR_Box) (ll_backend__llds_out__llds_out_file__output_c_internal_label_no_layout_init_chunk_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_7[4])),
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
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0)),
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

static /* final */ const MR_Box ll_backend__llds_out__llds_out_file_scalar_common_7[5][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_defn_0)),
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
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_file__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_list__ti_list_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
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

static /* final */ const MR_Box ll_backend__llds_out__llds_out_file_scalar_common_9[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 2018 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0
  }
};

#line 2026 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

#line 2034 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__llds_out__llds_out_file__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__layout__type_ctor_info_layout_slot_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0
  }
};

#line 2043 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__llds_out__llds_out_file__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__llds__type_ctor_info_data_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0
  }
};

#line 2052 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_foreign_literal_or_include_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_literal_or_include_0
  }
};

#line 2060 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__llds_out__llds_out_file__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2068 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__llds_out__llds_out_file__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
    (MR_PseudoTypeInfo) &ll_backend__llds_out__llds_out_file__list__ti_list_1builtin__type_ctor_info_int_0
  }
};

#line 2077 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_file__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2085 "ll_backend.llds_out.llds_out_file.c"
static const MR_VA_TypeInfo_Struct2 ll_backend__llds_out__llds_out_file____vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2095 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__llds_out__llds_out_file__list__ti_list_1__vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__llds_out__llds_out_file____vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0
  }
};

#line 2103 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__llds_out__llds_out_file__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_list__ti_list_1__vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
    (MR_PseudoTypeInfo) &ll_backend__llds_out__llds_out_file__list__ti_list_1__vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0
  }
};

#line 2112 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_file__list__pti_list_1__plain___vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds_out__llds_out_file____vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0
  }
};

#line 2120 "ll_backend.llds_out.llds_out_file.c"
static const MR_VA_PseudoTypeInfo_Struct2 ll_backend__llds_out__llds_out_file____vpti_tuple_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2130 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__llds_out__llds_out_file__list__ti_list_1ll_backend__llds_out__llds_out_file__type_ctor_info_annotated_c_procedure_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__type_ctor_info_annotated_c_procedure_0
  }
};

#line 2138 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__llds_out__llds_out_file__list__ti_list_1ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

#line 2146 "ll_backend.llds_out.llds_out_file.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__field_types_annotated_c_module_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &ll_backend__llds_out__llds_out_file__list__ti_list_1ll_backend__llds_out__llds_out_file__type_ctor_info_annotated_c_procedure_0,
  (MR_PseudoTypeInfo) &ll_backend__llds_out__llds_out_file__list__ti_list_1ll_backend__llds__type_ctor_info_label_0,
  (MR_PseudoTypeInfo) &ll_backend__llds_out__llds_out_file__list__ti_list_1ll_backend__llds__type_ctor_info_label_0
};

#line 2154 "ll_backend.llds_out.llds_out_file.c"
static const MR_ConstString ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__field_names_annotated_c_module_0_0[4] = {
  (MR_String) "acm_name",
  (MR_String) "acm_procs",
  (MR_String) "acm_entry_labels",
  (MR_String) "acm_internal_labels"
};

#line 2162 "ll_backend.llds_out.llds_out_file.c"
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

#line 2177 "ll_backend.llds_out.llds_out_file.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_stag_ordered_annotated_c_module_0_0[1] = {
  &ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_functor_desc_annotated_c_module_0_0
};

#line 2182 "ll_backend.llds_out.llds_out_file.c"
static const MR_DuPtagLayout ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_ptag_ordered_annotated_c_module_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_stag_ordered_annotated_c_module_0_0
  }
};

#line 2191 "ll_backend.llds_out.llds_out_file.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_name_ordered_annotated_c_module_0[1] = {
  &ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_functor_desc_annotated_c_module_0_0
};

#line 2196 "ll_backend.llds_out.llds_out_file.c"
static const MR_Integer ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__functor_number_map_annotated_c_module_0[1] = {
  (MR_Integer) 0
};

#line 2201 "ll_backend.llds_out.llds_out_file.c"
const MR_TypeCtorInfo_Struct ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__type_ctor_info_annotated_c_module_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__llds_out__llds_out_file____Unify____annotated_c_module_0_0_10001)),
  ((MR_Box) (ll_backend__llds_out__llds_out_file____Compare____annotated_c_module_0_0_10001)),
  (MR_String) "ll_backend.llds_out.llds_out_file",
  (MR_String) "annotated_c_module",
  {     ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_name_ordered_annotated_c_module_0 },
  {     ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_ptag_ordered_annotated_c_module_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__functor_number_map_annotated_c_module_0
};

#line 2218 "ll_backend.llds_out.llds_out_file.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__field_types_annotated_c_procedure_0_0[2] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0,
  (MR_PseudoTypeInfo) &ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__type_ctor_info_label_output_info_0
};

#line 2224 "ll_backend.llds_out.llds_out_file.c"
static const MR_ConstString ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__field_names_annotated_c_procedure_0_0[2] = {
  (MR_String) "acp_proc",
  (MR_String) "acp_label_output_info"
};

#line 2230 "ll_backend.llds_out.llds_out_file.c"
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

#line 2245 "ll_backend.llds_out.llds_out_file.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_stag_ordered_annotated_c_procedure_0_0[1] = {
  &ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_functor_desc_annotated_c_procedure_0_0
};

#line 2250 "ll_backend.llds_out.llds_out_file.c"
static const MR_DuPtagLayout ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_ptag_ordered_annotated_c_procedure_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_stag_ordered_annotated_c_procedure_0_0
  }
};

#line 2259 "ll_backend.llds_out.llds_out_file.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_name_ordered_annotated_c_procedure_0[1] = {
  &ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_functor_desc_annotated_c_procedure_0_0
};

#line 2264 "ll_backend.llds_out.llds_out_file.c"
static const MR_Integer ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__functor_number_map_annotated_c_procedure_0[1] = {
  (MR_Integer) 0
};

#line 2269 "ll_backend.llds_out.llds_out_file.c"
const MR_TypeCtorInfo_Struct ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__type_ctor_info_annotated_c_procedure_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__llds_out__llds_out_file____Unify____annotated_c_procedure_0_0_10001)),
  ((MR_Box) (ll_backend__llds_out__llds_out_file____Compare____annotated_c_procedure_0_0_10001)),
  (MR_String) "ll_backend.llds_out.llds_out_file",
  (MR_String) "annotated_c_procedure",
  {     ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_name_ordered_annotated_c_procedure_0 },
  {     ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_ptag_ordered_annotated_c_procedure_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__functor_number_map_annotated_c_procedure_0
};

#line 2286 "ll_backend.llds_out.llds_out_file.c"
static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_functor_desc_linkage_0_0 = {
  (MR_String) "extern",
  (MR_Integer) 0
};

#line 2292 "ll_backend.llds_out.llds_out_file.c"
static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_functor_desc_linkage_0_1 = {
  (MR_String) "static",
  (MR_Integer) 1
};

#line 2298 "ll_backend.llds_out.llds_out_file.c"
static const MR_EnumFunctorDescPtr ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_value_ordered_linkage_0[2] = {
  &ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_functor_desc_linkage_0_0,
  &ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_functor_desc_linkage_0_1
};

#line 2304 "ll_backend.llds_out.llds_out_file.c"
static const MR_EnumFunctorDescPtr ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_name_ordered_linkage_0[2] = {
  &ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_functor_desc_linkage_0_0,
  &ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_functor_desc_linkage_0_1
};

#line 2310 "ll_backend.llds_out.llds_out_file.c"
static const MR_Integer ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__functor_number_map_linkage_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2316 "ll_backend.llds_out.llds_out_file.c"
const MR_TypeCtorInfo_Struct ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__type_ctor_info_linkage_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__llds_out__llds_out_file____Unify____linkage_0_0_10001)),
  ((MR_Box) (ll_backend__llds_out__llds_out_file____Compare____linkage_0_0_10001)),
  (MR_String) "ll_backend.llds_out.llds_out_file",
  (MR_String) "linkage",
  {     ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_name_ordered_linkage_0 },
  {     ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_value_ordered_linkage_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__functor_number_map_linkage_0
};

#line 2333 "ll_backend.llds_out.llds_out_file.c"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file____Unify____annotated_c_module_0_0_10001(
#line 2336 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 2338 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2)
#line 2340 "ll_backend.llds_out.llds_out_file.c"
{
#line 2342 "ll_backend.llds_out.llds_out_file.c"
  {
#line 2344 "ll_backend.llds_out.llds_out_file.c"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 2347 "ll_backend.llds_out.llds_out_file.c"
    {
#line 2349 "ll_backend.llds_out.llds_out_file.c"
      ll_backend__llds_out__llds_out_file__succeeded = ll_backend__llds_out__llds_out_file____Unify____annotated_c_module_0_0(((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2));
    }
#line 2352 "ll_backend.llds_out.llds_out_file.c"
    return ll_backend__llds_out__llds_out_file__succeeded;
#line 2354 "ll_backend.llds_out.llds_out_file.c"
  }
#line 2356 "ll_backend.llds_out.llds_out_file.c"
}

#line 2359 "ll_backend.llds_out.llds_out_file.c"
static void MR_CALL 
ll_backend__llds_out__llds_out_file____Compare____annotated_c_module_0_0_10001(
#line 2362 "ll_backend.llds_out.llds_out_file.c"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 2364 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 2366 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 2368 "ll_backend.llds_out.llds_out_file.c"
{
#line 2370 "ll_backend.llds_out.llds_out_file.c"
  {
#line 2372 "ll_backend.llds_out.llds_out_file.c"
    MR_Word ll_backend__llds_out__llds_out_file__conv0_HeadVar__1_1;

#line 2375 "ll_backend.llds_out.llds_out_file.c"
    {
#line 2377 "ll_backend.llds_out.llds_out_file.c"
      ll_backend__llds_out__llds_out_file____Compare____annotated_c_module_0_0(&ll_backend__llds_out__llds_out_file__conv0_HeadVar__1_1, ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_3));
    }
#line 2380 "ll_backend.llds_out.llds_out_file.c"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_1 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv0_HeadVar__1_1));
#line 2382 "ll_backend.llds_out.llds_out_file.c"
  }
#line 2384 "ll_backend.llds_out.llds_out_file.c"
}

#line 2387 "ll_backend.llds_out.llds_out_file.c"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file____Unify____annotated_c_procedure_0_0_10001(
#line 2390 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 2392 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2)
#line 2394 "ll_backend.llds_out.llds_out_file.c"
{
#line 2396 "ll_backend.llds_out.llds_out_file.c"
  {
#line 2398 "ll_backend.llds_out.llds_out_file.c"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 2401 "ll_backend.llds_out.llds_out_file.c"
    {
#line 2403 "ll_backend.llds_out.llds_out_file.c"
      ll_backend__llds_out__llds_out_file__succeeded = ll_backend__llds_out__llds_out_file____Unify____annotated_c_procedure_0_0(((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2));
    }
#line 2406 "ll_backend.llds_out.llds_out_file.c"
    return ll_backend__llds_out__llds_out_file__succeeded;
#line 2408 "ll_backend.llds_out.llds_out_file.c"
  }
#line 2410 "ll_backend.llds_out.llds_out_file.c"
}

#line 2413 "ll_backend.llds_out.llds_out_file.c"
static void MR_CALL 
ll_backend__llds_out__llds_out_file____Compare____annotated_c_procedure_0_0_10001(
#line 2416 "ll_backend.llds_out.llds_out_file.c"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 2418 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 2420 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 2422 "ll_backend.llds_out.llds_out_file.c"
{
#line 2424 "ll_backend.llds_out.llds_out_file.c"
  {
#line 2426 "ll_backend.llds_out.llds_out_file.c"
    MR_Word ll_backend__llds_out__llds_out_file__conv0_HeadVar__1_1;

#line 2429 "ll_backend.llds_out.llds_out_file.c"
    {
#line 2431 "ll_backend.llds_out.llds_out_file.c"
      ll_backend__llds_out__llds_out_file____Compare____annotated_c_procedure_0_0(&ll_backend__llds_out__llds_out_file__conv0_HeadVar__1_1, ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_3));
    }
#line 2434 "ll_backend.llds_out.llds_out_file.c"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_1 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv0_HeadVar__1_1));
#line 2436 "ll_backend.llds_out.llds_out_file.c"
  }
#line 2438 "ll_backend.llds_out.llds_out_file.c"
}

#line 2441 "ll_backend.llds_out.llds_out_file.c"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file____Unify____linkage_0_0_10001(
#line 2444 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 2446 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2)
#line 2448 "ll_backend.llds_out.llds_out_file.c"
{
#line 2450 "ll_backend.llds_out.llds_out_file.c"
  {
#line 2452 "ll_backend.llds_out.llds_out_file.c"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 2455 "ll_backend.llds_out.llds_out_file.c"
    {
#line 2457 "ll_backend.llds_out.llds_out_file.c"
      ll_backend__llds_out__llds_out_file__succeeded = ll_backend__llds_out__llds_out_file____Unify____linkage_0_0(((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2));
    }
#line 2460 "ll_backend.llds_out.llds_out_file.c"
    return ll_backend__llds_out__llds_out_file__succeeded;
#line 2462 "ll_backend.llds_out.llds_out_file.c"
  }
#line 2464 "ll_backend.llds_out.llds_out_file.c"
}

#line 2467 "ll_backend.llds_out.llds_out_file.c"
static void MR_CALL 
ll_backend__llds_out__llds_out_file____Compare____linkage_0_0_10001(
#line 2470 "ll_backend.llds_out.llds_out_file.c"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 2472 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 2474 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 2476 "ll_backend.llds_out.llds_out_file.c"
{
#line 2478 "ll_backend.llds_out.llds_out_file.c"
  {
#line 2480 "ll_backend.llds_out.llds_out_file.c"
    MR_Word ll_backend__llds_out__llds_out_file__conv0_HeadVar__1_1;

#line 2483 "ll_backend.llds_out.llds_out_file.c"
    {
#line 2485 "ll_backend.llds_out.llds_out_file.c"
      ll_backend__llds_out__llds_out_file____Compare____linkage_0_0(&ll_backend__llds_out__llds_out_file__conv0_HeadVar__1_1, ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_3));
    }
#line 2488 "ll_backend.llds_out.llds_out_file.c"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_1 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv0_HeadVar__1_1));
#line 2490 "ll_backend.llds_out.llds_out_file.c"
  }
#line 2492 "ll_backend.llds_out.llds_out_file.c"
}

#line 1027 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_114_101_99_111_114_100_95_101_110_116_114_121_95_108_97_98_101_108_95_100_101_99_108_95_95_91_49_93_95_48_6_p_0(
#line 1027 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Label_8,
#line 1027 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_17,
#line 1027 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_18)
#line 1027 "llds_out_file.m"
{
#line 1030 "llds_out_file.m"
  {
#line 1030 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 1030 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__DeclMacro_12;
#line 1030 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_33_33;
#line 1030 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_35_35;

#line 1034 "llds_out_file.m"
    if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Label_8)) == (MR_mktag((MR_Integer) 1))))
#line 1034 "llds_out_file.m"
      {
#line 1034 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__Label_8, (MR_Integer) 0)));
#line 1032 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__Label_8, (MR_Integer) 1)));

#line 1034 "llds_out_file.m"
#line 1034 "llds_out_file.m"
        switch (ll_backend__llds_out__llds_out_file__V_37_37) {
#line 1034 "llds_out_file.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1034 "llds_out_file.m"
          case (MR_Integer) 0:
#line 1039 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__DeclMacro_12 = (MR_String) "MR_decl_local";
#line 1034 "llds_out_file.m"
            break;
#line 1034 "llds_out_file.m"
          case (MR_Integer) 2:
#line 1033 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__DeclMacro_12 = (MR_String) "MR_def_extern_entry";
#line 1034 "llds_out_file.m"
            break;
#line 1034 "llds_out_file.m"
          case (MR_Integer) 1:
#line 1036 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__DeclMacro_12 = (MR_String) "MR_decl_static";
#line 1034 "llds_out_file.m"
            break;
#line 1034 "llds_out_file.m"
        }
#line 1034 "llds_out_file.m"
      }
#line 1034 "llds_out_file.m"
    else
#line 1041 "llds_out_file.m"
      {
#line 1042 "llds_out_file.m"
        {
#line 1042 "llds_out_file.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_out.llds_out_file", (MR_String) "predicate \140ll_backend.llds_out.llds_out_file.output_record_entry_label_decl\'/6", (MR_String) "internal label");
#line 1042 "llds_out_file.m"
          return;
        }
#line 1041 "llds_out_file.m"
      }
#line 1044 "llds_out_file.m"
    {
#line 1044 "llds_out_file.m"
      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__DeclMacro_12);
    }
#line 1045 "llds_out_file.m"
    {
#line 1045 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "(");
    }
#line 1046 "llds_out_file.m"
    {
#line 1046 "llds_out_file.m"
      ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_file__Label_8);
    }
#line 1047 "llds_out_file.m"
    {
#line 1047 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) ")\n");
    }
#line 1048 "llds_out_file.m"
    {
#line 1048 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1048 "llds_out_file.m"
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__V_35_35, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_8));
#line 1048 "llds_out_file.m"
    }
#line 1048 "llds_out_file.m"
    {
#line 1048 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_33_33 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1048 "llds_out_file.m"
      MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_file__V_33_33, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__V_35_35));
#line 1048 "llds_out_file.m"
    }
#line 1048 "llds_out_file.m"
    {
#line 1048 "llds_out_file.m"
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__llds_out__llds_out_file__V_33_33, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_17, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_18);
    }
#line 1030 "llds_out_file.m"
  }
#line 1027 "llds_out_file.m"
}

#line 373 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__IntroducedFrom__pred__annotate_c_procedure__373__1_2_p_0(
#line 373 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__UndefWhileLabels_26,
#line 373 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_86)
#line 373 "llds_out_file.m"
{
#line 373 "llds_out_file.m"
  {
#line 373 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 373 "llds_out_file.m"
    {
#line 373 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ll_backend__llds_out__llds_out_file__UndefWhileLabels_26, ((MR_Box) (ll_backend__llds_out__llds_out_file__HeadVar__2_86)));
    }
#line 373 "llds_out_file.m"
    return ll_backend__llds_out__llds_out_file__succeeded;
#line 373 "llds_out_file.m"
  }
#line 373 "llds_out_file.m"
}

#line 208 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__IntroducedFrom__pred__output_single_c_file__208__1_3_p_0(
#line 208 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__LambdaHeadVar__1_123)
#line 208 "llds_out_file.m"
{
#line 208 "llds_out_file.m"
  {
#line 208 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 208 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__ForeignExportCode_64 = (MR_String) ll_backend__llds_out__llds_out_file__LambdaHeadVar__1_123;

#line 211 "llds_out_file.m"
    {
#line 211 "llds_out_file.m"
      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__ForeignExportCode_64);
    }
#line 208 "llds_out_file.m"
  }
#line 208 "llds_out_file.m"
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
#line 2701 "ll_backend.llds_out.llds_out_file.c"
  {
#line 2703 "ll_backend.llds_out.llds_out_file.c"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded = (ll_backend__llds_out__llds_out_file__HeadVar__2_1 == ll_backend__llds_out__llds_out_file__HeadVar__2_2);

#line 2706 "ll_backend.llds_out.llds_out_file.c"
    return ll_backend__llds_out__llds_out_file__succeeded;
#line 2708 "ll_backend.llds_out.llds_out_file.c"
  }
#line 60 "llds_out_file.m"
}

#line 272 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file____Compare____annotated_c_procedure_0_0(
#line 272 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 272 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2,
#line 272 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__3_3)
#line 272 "llds_out_file.m"
{
#line 272 "llds_out_file.m"
  {
#line 272 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 272 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__CastX_9 = (MR_Integer) ll_backend__llds_out__llds_out_file__HeadVar__2_2;
#line 272 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__CastY_10 = (MR_Integer) ll_backend__llds_out__llds_out_file__HeadVar__3_3;

#line 272 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__succeeded = (ll_backend__llds_out__llds_out_file__CastX_9 == ll_backend__llds_out__llds_out_file__CastY_10);
#line 272 "llds_out_file.m"
    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 2737 "ll_backend.llds_out.llds_out_file.c"
      *ll_backend__llds_out__llds_out_file__HeadVar__1_1 = (MR_Integer) 0;
#line 272 "llds_out_file.m"
    else
#line 272 "llds_out_file.m"
      {
#line 272 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 0)));
#line 272 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 1)));
#line 272 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__3_3, (MR_Integer) 0)));
#line 272 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__3_3, (MR_Integer) 1)));
#line 272 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_8_8;

#line 272 "llds_out_file.m"
        {
#line 272 "llds_out_file.m"
          ll_backend__llds____Compare____c_procedure_0_0(&ll_backend__llds_out__llds_out_file__V_8_8, ll_backend__llds_out__llds_out_file__V_4_4, ll_backend__llds_out__llds_out_file__V_6_6);
        }
#line 2759 "ll_backend.llds_out.llds_out_file.c"
        ll_backend__llds_out__llds_out_file__succeeded = (ll_backend__llds_out__llds_out_file__V_8_8 == (MR_Integer) 0);
#line 272 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__succeeded = !(ll_backend__llds_out__llds_out_file__succeeded);
#line 272 "llds_out_file.m"
        if (ll_backend__llds_out__llds_out_file__succeeded)
#line 272 "llds_out_file.m"
          *ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__V_8_8;
#line 272 "llds_out_file.m"
        else
#line 272 "llds_out_file.m"
          {
#line 272 "llds_out_file.m"
            ll_backend__llds_out__llds_out_instr____Compare____label_output_info_0_0(ll_backend__llds_out__llds_out_file__HeadVar__1_1, ll_backend__llds_out__llds_out_file__V_5_5, ll_backend__llds_out__llds_out_file__V_7_7);
          }
#line 272 "llds_out_file.m"
      }
#line 272 "llds_out_file.m"
  }
#line 272 "llds_out_file.m"
}

#line 272 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file____Unify____annotated_c_procedure_0_0(
#line 272 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 272 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2)
#line 272 "llds_out_file.m"
{
#line 272 "llds_out_file.m"
  {
#line 272 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 272 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__CastX_7 = (MR_Integer) ll_backend__llds_out__llds_out_file__HeadVar__1_1;
#line 272 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__CastY_8 = (MR_Integer) ll_backend__llds_out__llds_out_file__HeadVar__2_2;

#line 272 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__succeeded = (ll_backend__llds_out__llds_out_file__CastX_7 == ll_backend__llds_out__llds_out_file__CastY_8);
#line 272 "llds_out_file.m"
    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 272 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__succeeded = MR_TRUE;
#line 272 "llds_out_file.m"
    else
#line 272 "llds_out_file.m"
      {
#line 272 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 272 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 272 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 0)));
#line 272 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 1)));

#line 2818 "ll_backend.llds_out.llds_out_file.c"
        {
#line 2820 "ll_backend.llds_out.llds_out_file.c"
          ll_backend__llds_out__llds_out_file__succeeded = ll_backend__llds____Unify____c_procedure_0_0(ll_backend__llds_out__llds_out_file__V_3_3, ll_backend__llds_out__llds_out_file__V_5_5);
        }
#line 272 "llds_out_file.m"
        if (ll_backend__llds_out__llds_out_file__succeeded)
#line 2825 "ll_backend.llds_out.llds_out_file.c"
          {
#line 2827 "ll_backend.llds_out.llds_out_file.c"
            ll_backend__llds_out__llds_out_file__succeeded = ll_backend__llds_out__llds_out_instr____Unify____label_output_info_0_0(ll_backend__llds_out__llds_out_file__V_4_4, ll_backend__llds_out__llds_out_file__V_6_6);
          }
#line 272 "llds_out_file.m"
      }
#line 272 "llds_out_file.m"
    return ll_backend__llds_out__llds_out_file__succeeded;
#line 272 "llds_out_file.m"
  }
#line 272 "llds_out_file.m"
}

#line 264 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file____Compare____annotated_c_module_0_0(
#line 264 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 264 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2,
#line 264 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__3_3)
#line 264 "llds_out_file.m"
{
#line 264 "llds_out_file.m"
  {
#line 264 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 264 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__CastX_15 = (MR_Integer) ll_backend__llds_out__llds_out_file__HeadVar__2_2;
#line 264 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__CastY_16 = (MR_Integer) ll_backend__llds_out__llds_out_file__HeadVar__3_3;

#line 264 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__succeeded = (ll_backend__llds_out__llds_out_file__CastX_15 == ll_backend__llds_out__llds_out_file__CastY_16);
#line 264 "llds_out_file.m"
    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 2863 "ll_backend.llds_out.llds_out_file.c"
      *ll_backend__llds_out__llds_out_file__HeadVar__1_1 = (MR_Integer) 0;
#line 264 "llds_out_file.m"
    else
#line 264 "llds_out_file.m"
      {
#line 264 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 0)));
#line 264 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 1)));
#line 264 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 2)));
#line 264 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 3)));
#line 264 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__3_3, (MR_Integer) 0)));
#line 264 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__3_3, (MR_Integer) 1)));
#line 264 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__3_3, (MR_Integer) 2)));
#line 264 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__3_3, (MR_Integer) 3)));
#line 264 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_12_12;

#line 264 "llds_out_file.m"
        {
#line 264 "llds_out_file.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&ll_backend__llds_out__llds_out_file__V_12_12, ll_backend__llds_out__llds_out_file__V_4_4, ll_backend__llds_out__llds_out_file__V_8_8);
        }
#line 2893 "ll_backend.llds_out.llds_out_file.c"
        ll_backend__llds_out__llds_out_file__succeeded = (ll_backend__llds_out__llds_out_file__V_12_12 == (MR_Integer) 0);
#line 264 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__succeeded = !(ll_backend__llds_out__llds_out_file__succeeded);
#line 264 "llds_out_file.m"
        if (ll_backend__llds_out__llds_out_file__succeeded)
#line 264 "llds_out_file.m"
          *ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__V_12_12;
#line 264 "llds_out_file.m"
        else
#line 264 "llds_out_file.m"
          {
#line 264 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_13_13;

#line 264 "llds_out_file.m"
            {
#line 264 "llds_out_file.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_1[4], &ll_backend__llds_out__llds_out_file__V_13_13, ((MR_Box) (ll_backend__llds_out__llds_out_file__V_5_5)), ((MR_Box) (ll_backend__llds_out__llds_out_file__V_9_9)));
            }
#line 2913 "ll_backend.llds_out.llds_out_file.c"
            ll_backend__llds_out__llds_out_file__succeeded = (ll_backend__llds_out__llds_out_file__V_13_13 == (MR_Integer) 0);
#line 264 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__succeeded = !(ll_backend__llds_out__llds_out_file__succeeded);
#line 264 "llds_out_file.m"
            if (ll_backend__llds_out__llds_out_file__succeeded)
#line 264 "llds_out_file.m"
              *ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__V_13_13;
#line 264 "llds_out_file.m"
            else
#line 264 "llds_out_file.m"
              {
#line 264 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__V_14_14;

#line 264 "llds_out_file.m"
                {
#line 264 "llds_out_file.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_1[5], &ll_backend__llds_out__llds_out_file__V_14_14, ((MR_Box) (ll_backend__llds_out__llds_out_file__V_6_6)), ((MR_Box) (ll_backend__llds_out__llds_out_file__V_10_10)));
                }
#line 2933 "ll_backend.llds_out.llds_out_file.c"
                ll_backend__llds_out__llds_out_file__succeeded = (ll_backend__llds_out__llds_out_file__V_14_14 == (MR_Integer) 0);
#line 264 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__succeeded = !(ll_backend__llds_out__llds_out_file__succeeded);
#line 264 "llds_out_file.m"
                if (ll_backend__llds_out__llds_out_file__succeeded)
#line 264 "llds_out_file.m"
                  *ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__V_14_14;
#line 264 "llds_out_file.m"
                else
#line 264 "llds_out_file.m"
                  {
#line 264 "llds_out_file.m"
                    {
#line 264 "llds_out_file.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_1[5], ll_backend__llds_out__llds_out_file__HeadVar__1_1, ((MR_Box) (ll_backend__llds_out__llds_out_file__V_7_7)), ((MR_Box) (ll_backend__llds_out__llds_out_file__V_11_11)));
                    }
#line 264 "llds_out_file.m"
                  }
#line 264 "llds_out_file.m"
              }
#line 264 "llds_out_file.m"
          }
#line 264 "llds_out_file.m"
      }
#line 264 "llds_out_file.m"
  }
#line 264 "llds_out_file.m"
}

#line 264 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file____Unify____annotated_c_module_0_0(
#line 264 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 264 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2)
#line 264 "llds_out_file.m"
{
#line 264 "llds_out_file.m"
  {
#line 264 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 264 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__CastX_11 = (MR_Integer) ll_backend__llds_out__llds_out_file__HeadVar__1_1;
#line 264 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__CastY_12 = (MR_Integer) ll_backend__llds_out__llds_out_file__HeadVar__2_2;

#line 264 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__succeeded = (ll_backend__llds_out__llds_out_file__CastX_11 == ll_backend__llds_out__llds_out_file__CastY_12);
#line 264 "llds_out_file.m"
    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 264 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__succeeded = MR_TRUE;
#line 264 "llds_out_file.m"
    else
#line 264 "llds_out_file.m"
      {
#line 264 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__TypeInfo_13_13;
#line 264 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__TypeInfo_14_14;
#line 264 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__TypeInfo_15_15;
#line 264 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 264 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 264 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 2)));
#line 264 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 3)));
#line 264 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 0)));
#line 264 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 1)));
#line 264 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 2)));
#line 264 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 3)));

#line 3014 "ll_backend.llds_out.llds_out_file.c"
        ll_backend__llds_out__llds_out_file__succeeded = (strcmp(ll_backend__llds_out__llds_out_file__V_3_3, ll_backend__llds_out__llds_out_file__V_7_7) == 0);
#line 264 "llds_out_file.m"
        if (ll_backend__llds_out__llds_out_file__succeeded)
#line 264 "llds_out_file.m"
          {
#line 3020 "ll_backend.llds_out.llds_out_file.c"
            ll_backend__llds_out__llds_out_file__TypeInfo_13_13 = (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_1[4];
#line 3022 "ll_backend.llds_out.llds_out_file.c"
            {
#line 3024 "ll_backend.llds_out.llds_out_file.c"
              ll_backend__llds_out__llds_out_file__succeeded = mercury__builtin__unify_2_p_0(ll_backend__llds_out__llds_out_file__TypeInfo_13_13, ((MR_Box) (ll_backend__llds_out__llds_out_file__V_4_4)), ((MR_Box) (ll_backend__llds_out__llds_out_file__V_8_8)));
            }
#line 264 "llds_out_file.m"
            if (ll_backend__llds_out__llds_out_file__succeeded)
#line 264 "llds_out_file.m"
              {
#line 3031 "ll_backend.llds_out.llds_out_file.c"
                ll_backend__llds_out__llds_out_file__TypeInfo_14_14 = (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_1[5];
#line 3033 "ll_backend.llds_out.llds_out_file.c"
                {
#line 3035 "ll_backend.llds_out.llds_out_file.c"
                  ll_backend__llds_out__llds_out_file__succeeded = mercury__builtin__unify_2_p_0(ll_backend__llds_out__llds_out_file__TypeInfo_14_14, ((MR_Box) (ll_backend__llds_out__llds_out_file__V_5_5)), ((MR_Box) (ll_backend__llds_out__llds_out_file__V_9_9)));
                }
#line 264 "llds_out_file.m"
                if (ll_backend__llds_out__llds_out_file__succeeded)
#line 264 "llds_out_file.m"
                  {
#line 3042 "ll_backend.llds_out.llds_out_file.c"
                    ll_backend__llds_out__llds_out_file__TypeInfo_15_15 = (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_1[5];
#line 3044 "ll_backend.llds_out.llds_out_file.c"
                    {
#line 3046 "ll_backend.llds_out.llds_out_file.c"
                      ll_backend__llds_out__llds_out_file__succeeded = mercury__builtin__unify_2_p_0(ll_backend__llds_out__llds_out_file__TypeInfo_15_15, ((MR_Box) (ll_backend__llds_out__llds_out_file__V_6_6)), ((MR_Box) (ll_backend__llds_out__llds_out_file__V_10_10)));
                    }
#line 264 "llds_out_file.m"
                  }
#line 264 "llds_out_file.m"
              }
#line 264 "llds_out_file.m"
          }
#line 264 "llds_out_file.m"
      }
#line 264 "llds_out_file.m"
    return ll_backend__llds_out__llds_out_file__succeeded;
#line 264 "llds_out_file.m"
  }
#line 264 "llds_out_file.m"
}

#line 1655 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__delete_any_maybe_labels_3_p_0(
#line 1655 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 1655 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_2,
#line 1655 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_3)
#line 1655 "llds_out_file.m"
{
#line 1658 "llds_out_file.m"
  while (MR_TRUE)
#line 1658 "llds_out_file.m"
    {
#line 1658 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 1658 "llds_out_file.m"
      {
#line 1658 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 1658 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1658 "llds_out_file.m"
          *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_3 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_2;
#line 1658 "llds_out_file.m"
        else
#line 1659 "llds_out_file.m"
          {
#line 1659 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__MaybeLabel_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 1659 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__MaybeLabels_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 1659 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_12_12;

#line 1649 "llds_out_file.m"
            if ((ll_backend__llds_out__llds_out_file__MaybeLabel_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1649 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_12_12 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_2;
#line 1649 "llds_out_file.m"
            else
#line 1651 "llds_out_file.m"
              {
#line 1651 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__Label_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__MaybeLabel_7, (MR_Integer) 0)));

#line 1652 "llds_out_file.m"
                {
#line 1652 "llds_out_file.m"
                  mercury__set_tree234__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_18)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_2, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_12_12);
                }
#line 1651 "llds_out_file.m"
              }
#line 1661 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 1661 "llds_out_file.m"
            {
#line 1661 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__MaybeLabels_8;
#line 1661 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0__tmp_copy_2 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_12_12;

#line 1661 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_2 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0__tmp_copy_2;
#line 1661 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 1661 "llds_out_file.m"
            }
#line 1661 "llds_out_file.m"
            continue;
#line 1659 "llds_out_file.m"
          }
#line 1658 "llds_out_file.m"
      }
#line 1658 "llds_out_file.m"
      break;
#line 1658 "llds_out_file.m"
    }
#line 1655 "llds_out_file.m"
}

#line 1644 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__delete_any_maybe_label_3_p_0(
#line 1644 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__MaybeLabel_4,
#line 1644 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_7,
#line 1644 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_8)
#line 1644 "llds_out_file.m"
{
#line 1649 "llds_out_file.m"
  {
#line 1649 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 1649 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__MaybeLabel_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1649 "llds_out_file.m"
      *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_8 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_7;
#line 1649 "llds_out_file.m"
    else
#line 1651 "llds_out_file.m"
      {
#line 1651 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__Label_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__MaybeLabel_4, (MR_Integer) 0)));

#line 1652 "llds_out_file.m"
        {
#line 1652 "llds_out_file.m"
          mercury__set_tree234__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_6)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_7, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_8);
        }
#line 1651 "llds_out_file.m"
      }
#line 1649 "llds_out_file.m"
  }
#line 1644 "llds_out_file.m"
}

#line 1636 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(
#line 1636 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 1636 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_2,
#line 1636 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_3)
#line 1636 "llds_out_file.m"
{
#line 1639 "llds_out_file.m"
  while (MR_TRUE)
#line 1639 "llds_out_file.m"
    {
#line 1639 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 1639 "llds_out_file.m"
      {
#line 1639 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 1639 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1639 "llds_out_file.m"
          *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_3 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_2;
#line 1639 "llds_out_file.m"
        else
#line 1640 "llds_out_file.m"
          {
#line 1640 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__CodeAddr_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 1640 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__CodeAddrs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 1640 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_12_12;
#line 1630 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Label_18;

#line 1630 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__CodeAddr_7)) == (MR_mktag((MR_Integer) 1)));
#line 1630 "llds_out_file.m"
            if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1630 "llds_out_file.m"
              {
#line 1630 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__Label_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__CodeAddr_7, (MR_Integer) 0)));
#line 1631 "llds_out_file.m"
                {
#line 1631 "llds_out_file.m"
                  mercury__set_tree234__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_18)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_2, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_12_12);
                }
#line 1630 "llds_out_file.m"
              }
#line 1630 "llds_out_file.m"
            else
#line 1630 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_12_12 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_2;
#line 1642 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 1642 "llds_out_file.m"
            {
#line 1642 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__CodeAddrs_8;
#line 1642 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0__tmp_copy_2 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_12_12;

#line 1642 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_2 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0__tmp_copy_2;
#line 1642 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 1642 "llds_out_file.m"
            }
#line 1642 "llds_out_file.m"
            continue;
#line 1640 "llds_out_file.m"
          }
#line 1639 "llds_out_file.m"
      }
#line 1639 "llds_out_file.m"
      break;
#line 1639 "llds_out_file.m"
    }
#line 1636 "llds_out_file.m"
}

#line 1626 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__delete_any_label_3_p_0(
#line 1626 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__CodeAddr_4,
#line 1626 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_7,
#line 1626 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_8)
#line 1626 "llds_out_file.m"
{
#line 1630 "llds_out_file.m"
  {
#line 1630 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__CodeAddr_4)) == (MR_mktag((MR_Integer) 1)));
#line 1630 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__Label_6;

#line 1630 "llds_out_file.m"
    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1630 "llds_out_file.m"
      {
#line 1630 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__Label_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__CodeAddr_4, (MR_Integer) 0)));
#line 1631 "llds_out_file.m"
        {
#line 1631 "llds_out_file.m"
          mercury__set_tree234__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_6)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_7, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_8);
        }
#line 1630 "llds_out_file.m"
      }
#line 1630 "llds_out_file.m"
    else
#line 1630 "llds_out_file.m"
      *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_8 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_7;
#line 1630 "llds_out_file.m"
  }
#line 1626 "llds_out_file.m"
}

#line 1449 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__find_while_labels_to_define_5_p_0(
#line 1449 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 1449 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2,
#line 1449 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__WhileLabels_3,
#line 1449 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4,
#line 1449 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_5)
#line 1449 "llds_out_file.m"
{
#line 1453 "llds_out_file.m"
  while (MR_TRUE)
#line 1453 "llds_out_file.m"
    {
#line 1453 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 1453 "llds_out_file.m"
      {
#line 1453 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 1453 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1453 "llds_out_file.m"
          *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_5 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4;
#line 1453 "llds_out_file.m"
        else
#line 1455 "llds_out_file.m"
          {
#line 1455 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Instr0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 1455 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Instrs0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 1455 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Uinstr0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Instr0_11, (MR_Integer) 0)));
#line 1455 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19;
#line 1455 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145;
#line 1456 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Instr0_11, (MR_Integer) 1)));

#line 1464 "llds_out_file.m"
#line 1464 "llds_out_file.m"
            switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_16)) {
#line 1464 "llds_out_file.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1464 "llds_out_file.m"
              case (MR_Integer) 0:
#line 1614 "llds_out_file.m"
                {
#line 1615 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1614 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4;
#line 1614 "llds_out_file.m"
                }
#line 1464 "llds_out_file.m"
                break;
#line 1464 "llds_out_file.m"
              case (MR_Integer) 1:
#line 1464 "llds_out_file.m"
              case (MR_Integer) 2:
#line 1614 "llds_out_file.m"
                {
#line 1615 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1614 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4;
#line 1614 "llds_out_file.m"
                }
#line 1464 "llds_out_file.m"
                break;
#line 1464 "llds_out_file.m"
              case (MR_Integer) 3:
#line 1464 "llds_out_file.m"
#line 1464 "llds_out_file.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 0)))) {
#line 1464 "llds_out_file.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1464 "llds_out_file.m"
                  case (MR_Integer) 0:
#line 1499 "llds_out_file.m"
                    {
#line 1499 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__BlockInstrs_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 3)));
#line 1499 "llds_out_file.m"
                      MR_Integer ll_backend__llds_out__llds_out_file__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1499 "llds_out_file.m"
                      MR_Integer ll_backend__llds_out__llds_out_file__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));

#line 1500 "llds_out_file.m"
                      {
#line 1500 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__find_while_labels_to_define_5_p_0(ll_backend__llds_out__llds_out_file__BlockInstrs_34, ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2, ll_backend__llds_out__llds_out_file__WhileLabels_3, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                      }
#line 1503 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1499 "llds_out_file.m"
                    }
#line 1464 "llds_out_file.m"
                    break;
#line 1464 "llds_out_file.m"
                  case (MR_Integer) 1:
#line 1516 "llds_out_file.m"
                    {
#line 1516 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__Lval_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1516 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__LvalCodeAddrs_39;
#line 1516 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_135_135;
#line 1516 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__Rval_153 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1516 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__RvalCodeAddrs_154;
#line 1517 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_40_40;
#line 1518 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_41_41;

#line 1517 "llds_out_file.m"
                      {
#line 1517 "llds_out_file.m"
                        ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Lval_38, &ll_backend__llds_out__llds_out_file__LvalCodeAddrs_39, &ll_backend__llds_out__llds_out_file__V_40_40);
                      }
#line 1518 "llds_out_file.m"
                      {
#line 1518 "llds_out_file.m"
                        ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Rval_153, &ll_backend__llds_out__llds_out_file__RvalCodeAddrs_154, &ll_backend__llds_out__llds_out_file__V_41_41);
                      }
#line 1519 "llds_out_file.m"
                      {
#line 1519 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__LvalCodeAddrs_39, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_135_135);
                      }
#line 1520 "llds_out_file.m"
                      {
#line 1520 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__RvalCodeAddrs_154, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_135_135, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                      }
#line 1521 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1516 "llds_out_file.m"
                    }
#line 1464 "llds_out_file.m"
                    break;
#line 1464 "llds_out_file.m"
                  case (MR_Integer) 2:
#line 1516 "llds_out_file.m"
                    {
#line 1516 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__Lval_185 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1516 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__LvalCodeAddrs_186;
#line 1516 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_135_189;
#line 1516 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__Rval_190 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1516 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__RvalCodeAddrs_191;
#line 1517 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_183_183;
#line 1518 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_184_184;

#line 1517 "llds_out_file.m"
                      {
#line 1517 "llds_out_file.m"
                        ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Lval_185, &ll_backend__llds_out__llds_out_file__LvalCodeAddrs_186, &ll_backend__llds_out__llds_out_file__V_183_183);
                      }
#line 1518 "llds_out_file.m"
                      {
#line 1518 "llds_out_file.m"
                        ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Rval_190, &ll_backend__llds_out__llds_out_file__RvalCodeAddrs_191, &ll_backend__llds_out__llds_out_file__V_184_184);
                      }
#line 1519 "llds_out_file.m"
                      {
#line 1519 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__LvalCodeAddrs_186, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_135_189);
                      }
#line 1520 "llds_out_file.m"
                      {
#line 1520 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__RvalCodeAddrs_191, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_135_189, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                      }
#line 1521 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1516 "llds_out_file.m"
                    }
#line 1464 "llds_out_file.m"
                    break;
#line 1464 "llds_out_file.m"
                  case (MR_Integer) 3:
#line 1494 "llds_out_file.m"
                    {
#line 1494 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__Continuation_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1494 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_139_139;
#line 1494 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__Target_152 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1494 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 3)));
#line 1494 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 4)));
#line 1494 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 5)));
#line 1494 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 6)));

#line 1495 "llds_out_file.m"
                      {
#line 1495 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_label_3_p_0(ll_backend__llds_out__llds_out_file__Target_152, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_139_139);
                      }
#line 1496 "llds_out_file.m"
                      {
#line 1496 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_label_3_p_0(ll_backend__llds_out__llds_out_file__Continuation_27, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_139_139, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                      }
#line 1497 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1494 "llds_out_file.m"
                    }
#line 1464 "llds_out_file.m"
                    break;
#line 1464 "llds_out_file.m"
                  case (MR_Integer) 4:
#line 1505 "llds_out_file.m"
                    {
#line 1505 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__MaybeNextCodeAddr_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1505 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));

#line 1509 "llds_out_file.m"
                      if ((ll_backend__llds_out__llds_out_file__MaybeNextCodeAddr_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1510 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4;
#line 1509 "llds_out_file.m"
                      else
#line 1507 "llds_out_file.m"
                        {
#line 1507 "llds_out_file.m"
                          MR_Word ll_backend__llds_out__llds_out_file__NextCodeAddr_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__MaybeNextCodeAddr_36, (MR_Integer) 0)));

#line 1508 "llds_out_file.m"
                          {
#line 1508 "llds_out_file.m"
                            ll_backend__llds_out__llds_out_file__delete_any_label_3_p_0(ll_backend__llds_out__llds_out_file__NextCodeAddr_37, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                          }
#line 1507 "llds_out_file.m"
                        }
#line 1512 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1505 "llds_out_file.m"
                    }
#line 1464 "llds_out_file.m"
                    break;
#line 1464 "llds_out_file.m"
                  case (MR_Integer) 5:
#line 1458 "llds_out_file.m"
                    {
#line 1458 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__Label_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));

#line 1459 "llds_out_file.m"
                      {
#line 1459 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ll_backend__llds_out__llds_out_file__WhileLabels_3, ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_18)));
                      }
#line 1459 "llds_out_file.m"
                      if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1460 "llds_out_file.m"
                        {
#line 1460 "llds_out_file.m"
                          ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1460 "llds_out_file.m"
                          MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_18));
#line 1460 "llds_out_file.m"
                        }
#line 1459 "llds_out_file.m"
                      else
#line 1462 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1458 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4;
#line 1458 "llds_out_file.m"
                    }
#line 1464 "llds_out_file.m"
                    break;
#line 1464 "llds_out_file.m"
                  case (MR_Integer) 6:
#line 1480 "llds_out_file.m"
                    {
#line 1480 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__Target_148 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1481 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__TargetLabel_147;

#line 1481 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Target_148)) == (MR_mktag((MR_Integer) 1)));
#line 1481 "llds_out_file.m"
                      if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1481 "llds_out_file.m"
                        {
#line 1481 "llds_out_file.m"
                          ll_backend__llds_out__llds_out_file__TargetLabel_147 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__Target_148, (MR_Integer) 0)));
#line 1482 "llds_out_file.m"
                          {
#line 1482 "llds_out_file.m"
                            mercury__set_tree234__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__llds_out__llds_out_file__TargetLabel_147)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                          }
#line 1481 "llds_out_file.m"
                        }
#line 1481 "llds_out_file.m"
                      else
#line 1481 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4;
#line 1486 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1480 "llds_out_file.m"
                    }
#line 1464 "llds_out_file.m"
                    break;
#line 1464 "llds_out_file.m"
                  case (MR_Integer) 7:
#line 1488 "llds_out_file.m"
                    {
#line 1488 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__MaybeTargets_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1488 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_141_141;
#line 1488 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__Rval_150 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1488 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__RvalCodeAddrs_151;
#line 1489 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_26_26;

#line 1489 "llds_out_file.m"
                      {
#line 1489 "llds_out_file.m"
                        ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Rval_150, &ll_backend__llds_out__llds_out_file__RvalCodeAddrs_151, &ll_backend__llds_out__llds_out_file__V_26_26);
                      }
#line 1490 "llds_out_file.m"
                      {
#line 1490 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__RvalCodeAddrs_151, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_141_141);
                      }
#line 1491 "llds_out_file.m"
                      {
#line 1491 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_maybe_labels_3_p_0(ll_backend__llds_out__llds_out_file__MaybeTargets_25, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_141_141, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                      }
#line 1492 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1488 "llds_out_file.m"
                    }
#line 1464 "llds_out_file.m"
                    break;
#line 1464 "llds_out_file.m"
                  case (MR_Integer) 8:
#line 1464 "llds_out_file.m"
                  case (MR_Integer) 16:
#line 1464 "llds_out_file.m"
                  case (MR_Integer) 19:
#line 1464 "llds_out_file.m"
                  case (MR_Integer) 24:
#line 1464 "llds_out_file.m"
                  case (MR_Integer) 25:
#line 1464 "llds_out_file.m"
                  case (MR_Integer) 26:
#line 1614 "llds_out_file.m"
                    {
#line 1615 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1614 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4;
#line 1614 "llds_out_file.m"
                    }
#line 1464 "llds_out_file.m"
                    break;
#line 1464 "llds_out_file.m"
                  case (MR_Integer) 9:
#line 1465 "llds_out_file.m"
                    {
#line 1465 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__Rval_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1465 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__Target_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1465 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__RvalCodeAddrs_22;
#line 1465 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_144_144;
#line 1466 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_23_23;
#line 1468 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__TargetLabel_24;

#line 1466 "llds_out_file.m"
                      {
#line 1466 "llds_out_file.m"
                        ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Rval_20, &ll_backend__llds_out__llds_out_file__RvalCodeAddrs_22, &ll_backend__llds_out__llds_out_file__V_23_23);
                      }
#line 1467 "llds_out_file.m"
                      {
#line 1467 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__RvalCodeAddrs_22, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_144_144);
                      }
#line 1468 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Target_21)) == (MR_mktag((MR_Integer) 1)));
#line 1468 "llds_out_file.m"
                      if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1468 "llds_out_file.m"
                        {
#line 1468 "llds_out_file.m"
                          ll_backend__llds_out__llds_out_file__TargetLabel_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__Target_21, (MR_Integer) 0)));
#line 1469 "llds_out_file.m"
                          {
#line 1469 "llds_out_file.m"
                            MR_Word ll_backend__llds_out__llds_out_file__V_174_174;

#line 1469 "llds_out_file.m"
                            ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2)) == (MR_mktag((MR_Integer) 1)));
#line 1469 "llds_out_file.m"
                            if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1469 "llds_out_file.m"
                              {
#line 1469 "llds_out_file.m"
                                ll_backend__llds_out__llds_out_file__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2, (MR_Integer) 0)));
#line 1469 "llds_out_file.m"
                                {
#line 1469 "llds_out_file.m"
                                  ll_backend__llds_out__llds_out_file__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__llds_out__llds_out_file__TargetLabel_24, ll_backend__llds_out__llds_out_file__V_174_174);
                                }
#line 1469 "llds_out_file.m"
                              }
#line 1469 "llds_out_file.m"
                            if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1469 "llds_out_file.m"
                              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_144_144;
#line 1469 "llds_out_file.m"
                            else
#line 1473 "llds_out_file.m"
                              {
#line 1473 "llds_out_file.m"
                                {
#line 1473 "llds_out_file.m"
                                  mercury__set_tree234__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__llds_out__llds_out_file__TargetLabel_24)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_144_144, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                                }
#line 1473 "llds_out_file.m"
                              }
#line 1469 "llds_out_file.m"
                          }
#line 1468 "llds_out_file.m"
                        }
#line 1468 "llds_out_file.m"
                      else
#line 1468 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_144_144;
#line 1478 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1465 "llds_out_file.m"
                    }
#line 1464 "llds_out_file.m"
                    break;
#line 1464 "llds_out_file.m"
                  case (MR_Integer) 10:
#line 1532 "llds_out_file.m"
                    {
#line 1532 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__Lval_226 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1532 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__LvalCodeAddrs_227;
#line 1533 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_224_224;

#line 1533 "llds_out_file.m"
                      {
#line 1533 "llds_out_file.m"
                        ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Lval_226, &ll_backend__llds_out__llds_out_file__LvalCodeAddrs_227, &ll_backend__llds_out__llds_out_file__V_224_224);
                      }
#line 1534 "llds_out_file.m"
                      {
#line 1534 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__LvalCodeAddrs_227, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                      }
#line 1535 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1532 "llds_out_file.m"
                    }
#line 1464 "llds_out_file.m"
                    break;
#line 1464 "llds_out_file.m"
                  case (MR_Integer) 11:
#line 1532 "llds_out_file.m"
                    {
#line 1532 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__Lval_222 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1532 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__LvalCodeAddrs_223;
#line 1533 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_220_220;

#line 1533 "llds_out_file.m"
                      {
#line 1533 "llds_out_file.m"
                        ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Lval_222, &ll_backend__llds_out__llds_out_file__LvalCodeAddrs_223, &ll_backend__llds_out__llds_out_file__V_220_220);
                      }
#line 1534 "llds_out_file.m"
                      {
#line 1534 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__LvalCodeAddrs_223, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                      }
#line 1535 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1532 "llds_out_file.m"
                    }
#line 1464 "llds_out_file.m"
                    break;
#line 1464 "llds_out_file.m"
                  case (MR_Integer) 12:
#line 1548 "llds_out_file.m"
                    {
#line 1548 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__TargetLval_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1548 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__SizeRval_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 4)));
#line 1548 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__MaybeRegionIdRval_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 7)));
#line 1548 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__TargetLvalCodeAddrs_60;
#line 1548 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__SizeRvalCodeAddrs_62;
#line 1548 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_130_130;
#line 1548 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_131_131;
#line 1547 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1547 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 3)));
#line 1547 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 5)));
#line 1547 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 6)));
#line 1547 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 8)));
#line 1549 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_61_61;
#line 1550 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_63_63;

#line 1549 "llds_out_file.m"
                      {
#line 1549 "llds_out_file.m"
                        ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__TargetLval_52, &ll_backend__llds_out__llds_out_file__TargetLvalCodeAddrs_60, &ll_backend__llds_out__llds_out_file__V_61_61);
                      }
#line 1550 "llds_out_file.m"
                      {
#line 1550 "llds_out_file.m"
                        ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__SizeRval_55, &ll_backend__llds_out__llds_out_file__SizeRvalCodeAddrs_62, &ll_backend__llds_out__llds_out_file__V_63_63);
                      }
#line 1551 "llds_out_file.m"
                      {
#line 1551 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__TargetLvalCodeAddrs_60, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_130_130);
                      }
#line 1552 "llds_out_file.m"
                      {
#line 1552 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__SizeRvalCodeAddrs_62, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_130_130, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_131_131);
                      }
#line 1555 "llds_out_file.m"
                      if ((ll_backend__llds_out__llds_out_file__MaybeRegionIdRval_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1554 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_131_131;
#line 1555 "llds_out_file.m"
                      else
#line 1556 "llds_out_file.m"
                        {
#line 1556 "llds_out_file.m"
                          MR_Word ll_backend__llds_out__llds_out_file__RegionIdRval_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__MaybeRegionIdRval_58, (MR_Integer) 0)));
#line 1556 "llds_out_file.m"
                          MR_Word ll_backend__llds_out__llds_out_file__RegionIdRvalCodeAddrs_65;
#line 1557 "llds_out_file.m"
                          MR_Word ll_backend__llds_out__llds_out_file__V_66_66;

#line 1557 "llds_out_file.m"
                          {
#line 1557 "llds_out_file.m"
                            ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__RegionIdRval_64, &ll_backend__llds_out__llds_out_file__RegionIdRvalCodeAddrs_65, &ll_backend__llds_out__llds_out_file__V_66_66);
                          }
#line 1558 "llds_out_file.m"
                          {
#line 1558 "llds_out_file.m"
                            ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__RegionIdRvalCodeAddrs_65, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_131_131, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                          }
#line 1556 "llds_out_file.m"
                        }
#line 1560 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1548 "llds_out_file.m"
                    }
#line 1464 "llds_out_file.m"
                    break;
#line 1464 "llds_out_file.m"
                  case (MR_Integer) 13:
#line 1532 "llds_out_file.m"
                    {
#line 1532 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__Lval_198 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1532 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__LvalCodeAddrs_199;
#line 1533 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_196_196;

#line 1533 "llds_out_file.m"
                      {
#line 1533 "llds_out_file.m"
                        ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Lval_198, &ll_backend__llds_out__llds_out_file__LvalCodeAddrs_199, &ll_backend__llds_out__llds_out_file__V_196_196);
                      }
#line 1534 "llds_out_file.m"
                      {
#line 1534 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__LvalCodeAddrs_199, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                      }
#line 1535 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1532 "llds_out_file.m"
                    }
#line 1464 "llds_out_file.m"
                    break;
#line 1464 "llds_out_file.m"
                  case (MR_Integer) 14:
#line 1542 "llds_out_file.m"
                    {
#line 1542 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__Rval_218 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1542 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__RvalCodeAddrs_219;
#line 1543 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_216_216;

#line 1543 "llds_out_file.m"
                      {
#line 1543 "llds_out_file.m"
                        ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Rval_218, &ll_backend__llds_out__llds_out_file__RvalCodeAddrs_219, &ll_backend__llds_out__llds_out_file__V_216_216);
                      }
#line 1544 "llds_out_file.m"
                      {
#line 1544 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__RvalCodeAddrs_219, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                      }
#line 1545 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1542 "llds_out_file.m"
                    }
#line 1464 "llds_out_file.m"
                    break;
#line 1464 "llds_out_file.m"
                  case (MR_Integer) 15:
#line 1542 "llds_out_file.m"
                    {
#line 1542 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__Rval_157 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1542 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__RvalCodeAddrs_158;
#line 1543 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_51_51;

#line 1543 "llds_out_file.m"
                      {
#line 1543 "llds_out_file.m"
                        ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Rval_157, &ll_backend__llds_out__llds_out_file__RvalCodeAddrs_158, &ll_backend__llds_out__llds_out_file__V_51_51);
                      }
#line 1544 "llds_out_file.m"
                      {
#line 1544 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__RvalCodeAddrs_158, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                      }
#line 1545 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1542 "llds_out_file.m"
                    }
#line 1464 "llds_out_file.m"
                    break;
#line 1464 "llds_out_file.m"
                  case (MR_Integer) 17:
#line 1572 "llds_out_file.m"
                    {
#line 1572 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__NumLval_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 4)));
#line 1572 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__AddrLval_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 5)));
#line 1572 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__NumLvalCodeAddrs_82;
#line 1572 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__AddrLvalCodeAddrs_84;
#line 1572 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_122_122;
#line 1572 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_123_123;
#line 1572 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__RegionIdRval_159 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 3)));
#line 1572 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__RegionIdRvalCodeAddrs_160;
#line 1572 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1572 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1573 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_81_81;
#line 1574 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_83_83;
#line 1575 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_85_85;

#line 1573 "llds_out_file.m"
                      {
#line 1573 "llds_out_file.m"
                        ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__RegionIdRval_159, &ll_backend__llds_out__llds_out_file__RegionIdRvalCodeAddrs_160, &ll_backend__llds_out__llds_out_file__V_81_81);
                      }
#line 1574 "llds_out_file.m"
                      {
#line 1574 "llds_out_file.m"
                        ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__NumLval_79, &ll_backend__llds_out__llds_out_file__NumLvalCodeAddrs_82, &ll_backend__llds_out__llds_out_file__V_83_83);
                      }
#line 1575 "llds_out_file.m"
                      {
#line 1575 "llds_out_file.m"
                        ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__AddrLval_80, &ll_backend__llds_out__llds_out_file__AddrLvalCodeAddrs_84, &ll_backend__llds_out__llds_out_file__V_85_85);
                      }
#line 1576 "llds_out_file.m"
                      {
#line 1576 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__RegionIdRvalCodeAddrs_160, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_122_122);
                      }
#line 1577 "llds_out_file.m"
                      {
#line 1577 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__NumLvalCodeAddrs_82, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_122_122, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_123_123);
                      }
#line 1578 "llds_out_file.m"
                      {
#line 1578 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__AddrLvalCodeAddrs_84, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_123_123, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                      }
#line 1579 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1572 "llds_out_file.m"
                    }
#line 1464 "llds_out_file.m"
                    break;
#line 1464 "llds_out_file.m"
                  case (MR_Integer) 18:
#line 1542 "llds_out_file.m"
                    {
#line 1542 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__Rval_210 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 3)));
#line 1542 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__RvalCodeAddrs_211;
#line 1539 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1539 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1543 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_208_208;

#line 1543 "llds_out_file.m"
                      {
#line 1543 "llds_out_file.m"
                        ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Rval_210, &ll_backend__llds_out__llds_out_file__RvalCodeAddrs_211, &ll_backend__llds_out__llds_out_file__V_208_208);
                      }
#line 1544 "llds_out_file.m"
                      {
#line 1544 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__RvalCodeAddrs_211, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                      }
#line 1545 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1542 "llds_out_file.m"
                    }
#line 1464 "llds_out_file.m"
                    break;
#line 1464 "llds_out_file.m"
                  case (MR_Integer) 20:
#line 1532 "llds_out_file.m"
                    {
#line 1532 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__Lval_230 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1532 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__LvalCodeAddrs_231;
#line 1533 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_228_228;

#line 1533 "llds_out_file.m"
                      {
#line 1533 "llds_out_file.m"
                        ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Lval_230, &ll_backend__llds_out__llds_out_file__LvalCodeAddrs_231, &ll_backend__llds_out__llds_out_file__V_228_228);
                      }
#line 1534 "llds_out_file.m"
                      {
#line 1534 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__LvalCodeAddrs_231, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                      }
#line 1535 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1532 "llds_out_file.m"
                    }
#line 1464 "llds_out_file.m"
                    break;
#line 1464 "llds_out_file.m"
                  case (MR_Integer) 21:
#line 1542 "llds_out_file.m"
                    {
#line 1542 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__Rval_214 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1542 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__RvalCodeAddrs_215;
#line 1540 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1543 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_212_212;

#line 1543 "llds_out_file.m"
                      {
#line 1543 "llds_out_file.m"
                        ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Rval_214, &ll_backend__llds_out__llds_out_file__RvalCodeAddrs_215, &ll_backend__llds_out__llds_out_file__V_212_212);
                      }
#line 1544 "llds_out_file.m"
                      {
#line 1544 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__RvalCodeAddrs_215, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                      }
#line 1545 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1542 "llds_out_file.m"
                    }
#line 1464 "llds_out_file.m"
                    break;
#line 1464 "llds_out_file.m"
                  case (MR_Integer) 22:
#line 1532 "llds_out_file.m"
                    {
#line 1532 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__Lval_202 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1532 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__LvalCodeAddrs_203;
#line 1533 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_200_200;

#line 1533 "llds_out_file.m"
                      {
#line 1533 "llds_out_file.m"
                        ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Lval_202, &ll_backend__llds_out__llds_out_file__LvalCodeAddrs_203, &ll_backend__llds_out__llds_out_file__V_200_200);
                      }
#line 1534 "llds_out_file.m"
                      {
#line 1534 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__LvalCodeAddrs_203, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                      }
#line 1535 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1532 "llds_out_file.m"
                    }
#line 1464 "llds_out_file.m"
                    break;
#line 1464 "llds_out_file.m"
                  case (MR_Integer) 23:
#line 1542 "llds_out_file.m"
                    {
#line 1542 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__Rval_206 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1542 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__RvalCodeAddrs_207;
#line 1543 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_204_204;

#line 1543 "llds_out_file.m"
                      {
#line 1543 "llds_out_file.m"
                        ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Rval_206, &ll_backend__llds_out__llds_out_file__RvalCodeAddrs_207, &ll_backend__llds_out__llds_out_file__V_204_204);
                      }
#line 1544 "llds_out_file.m"
                      {
#line 1544 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__RvalCodeAddrs_207, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                      }
#line 1545 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1542 "llds_out_file.m"
                    }
#line 1464 "llds_out_file.m"
                    break;
#line 1464 "llds_out_file.m"
                  case (MR_Integer) 27:
#line 1564 "llds_out_file.m"
                    {
#line 1564 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__MaybeFixNoLayoutLabel_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 4)));
#line 1564 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__MaybeFixLayoutLabel_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 5)));
#line 1564 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__MaybeFixOnlyLayoutLabel_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 6)));
#line 1564 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__MaybeNoFixLabel_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 7)));
#line 1564 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__MaybeHashDefLabel_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 8)));
#line 1564 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_125_125;
#line 1564 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_126_126;
#line 1564 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_127_127;
#line 1564 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_128_128;
#line 1562 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1562 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1562 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 3)));
#line 1562 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 9)));
#line 1562 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 10)));

#line 1565 "llds_out_file.m"
                      {
#line 1565 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_maybe_label_3_p_0(ll_backend__llds_out__llds_out_file__MaybeFixNoLayoutLabel_70, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_125_125);
                      }
#line 1566 "llds_out_file.m"
                      {
#line 1566 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_maybe_label_3_p_0(ll_backend__llds_out__llds_out_file__MaybeFixLayoutLabel_71, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_125_125, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_126_126);
                      }
#line 1567 "llds_out_file.m"
                      {
#line 1567 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_maybe_label_3_p_0(ll_backend__llds_out__llds_out_file__MaybeFixOnlyLayoutLabel_72, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_126_126, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_127_127);
                      }
#line 1568 "llds_out_file.m"
                      {
#line 1568 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_maybe_label_3_p_0(ll_backend__llds_out__llds_out_file__MaybeNoFixLabel_73, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_127_127, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_128_128);
                      }
#line 1569 "llds_out_file.m"
                      {
#line 1569 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_maybe_label_3_p_0(ll_backend__llds_out__llds_out_file__MaybeHashDefLabel_74, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_128_128, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                      }
#line 1570 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1564 "llds_out_file.m"
                    }
#line 1464 "llds_out_file.m"
                    break;
#line 1464 "llds_out_file.m"
                  case (MR_Integer) 28:
#line 1532 "llds_out_file.m"
                    {
#line 1532 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__Lval_177 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1532 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__LvalCodeAddrs_178;
#line 1528 "llds_out_file.m"
                      MR_Integer ll_backend__llds_out__llds_out_file__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1528 "llds_out_file.m"
                      MR_Integer ll_backend__llds_out__llds_out_file__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 3)));
#line 1533 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_175_175;

#line 1533 "llds_out_file.m"
                      {
#line 1533 "llds_out_file.m"
                        ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Lval_177, &ll_backend__llds_out__llds_out_file__LvalCodeAddrs_178, &ll_backend__llds_out__llds_out_file__V_175_175);
                      }
#line 1534 "llds_out_file.m"
                      {
#line 1534 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__LvalCodeAddrs_178, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                      }
#line 1535 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1532 "llds_out_file.m"
                    }
#line 1464 "llds_out_file.m"
                    break;
#line 1464 "llds_out_file.m"
                  case (MR_Integer) 29:
#line 1532 "llds_out_file.m"
                    {
#line 1532 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__Lval_155 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1532 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__LvalCodeAddrs_156;
#line 1529 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1533 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_47_47;

#line 1533 "llds_out_file.m"
                      {
#line 1533 "llds_out_file.m"
                        ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Lval_155, &ll_backend__llds_out__llds_out_file__LvalCodeAddrs_156, &ll_backend__llds_out__llds_out_file__V_47_47);
                      }
#line 1534 "llds_out_file.m"
                      {
#line 1534 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__LvalCodeAddrs_156, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                      }
#line 1535 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1532 "llds_out_file.m"
                    }
#line 1464 "llds_out_file.m"
                    break;
#line 1464 "llds_out_file.m"
                  case (MR_Integer) 30:
#line 1532 "llds_out_file.m"
                    {
#line 1532 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__Lval_181 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1532 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__LvalCodeAddrs_182;
#line 1530 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1533 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_179_179;

#line 1533 "llds_out_file.m"
                      {
#line 1533 "llds_out_file.m"
                        ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Lval_181, &ll_backend__llds_out__llds_out_file__LvalCodeAddrs_182, &ll_backend__llds_out__llds_out_file__V_179_179);
                      }
#line 1534 "llds_out_file.m"
                      {
#line 1534 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__LvalCodeAddrs_182, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                      }
#line 1535 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1532 "llds_out_file.m"
                    }
#line 1464 "llds_out_file.m"
                    break;
#line 1464 "llds_out_file.m"
                  case (MR_Integer) 31:
#line 1532 "llds_out_file.m"
                    {
#line 1532 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__Lval_194 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1532 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__LvalCodeAddrs_195;
#line 1531 "llds_out_file.m"
                      MR_Integer ll_backend__llds_out__llds_out_file__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1533 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_192_192;

#line 1533 "llds_out_file.m"
                      {
#line 1533 "llds_out_file.m"
                        ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Lval_194, &ll_backend__llds_out__llds_out_file__LvalCodeAddrs_195, &ll_backend__llds_out__llds_out_file__V_192_192);
                      }
#line 1534 "llds_out_file.m"
                      {
#line 1534 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__LvalCodeAddrs_195, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                      }
#line 1535 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1532 "llds_out_file.m"
                    }
#line 1464 "llds_out_file.m"
                    break;
#line 1464 "llds_out_file.m"
                  case (MR_Integer) 32:
#line 1581 "llds_out_file.m"
                    {
#line 1581 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__LoopControlRval_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1581 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__SlotLval_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1581 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__LoopControlRvalCodeAddrs_88;
#line 1581 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__SlotLvalCodeAddrs_90;
#line 1581 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_119_119;
#line 1581 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_120_120;
#line 1581 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__Label_161 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 3)));
#line 1582 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_89_89;
#line 1583 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_91_91;

#line 1582 "llds_out_file.m"
                      {
#line 1582 "llds_out_file.m"
                        ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__LoopControlRval_86, &ll_backend__llds_out__llds_out_file__LoopControlRvalCodeAddrs_88, &ll_backend__llds_out__llds_out_file__V_89_89);
                      }
#line 1583 "llds_out_file.m"
                      {
#line 1583 "llds_out_file.m"
                        ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__SlotLval_87, &ll_backend__llds_out__llds_out_file__SlotLvalCodeAddrs_90, &ll_backend__llds_out__llds_out_file__V_91_91);
                      }
#line 1584 "llds_out_file.m"
                      {
#line 1584 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__LoopControlRvalCodeAddrs_88, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_119_119);
                      }
#line 1585 "llds_out_file.m"
                      {
#line 1585 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__SlotLvalCodeAddrs_90, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_119_119, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_120_120);
                      }
#line 1586 "llds_out_file.m"
                      {
#line 1586 "llds_out_file.m"
                        mercury__set_tree234__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_161)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_120_120, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                      }
#line 1587 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1581 "llds_out_file.m"
                    }
#line 1464 "llds_out_file.m"
                    break;
#line 1464 "llds_out_file.m"
                  case (MR_Integer) 33:
#line 1589 "llds_out_file.m"
                    {
#line 1589 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__SlotRval_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1589 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__SlotRvalCodeAddrs_94;
#line 1589 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_116_116;
#line 1589 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_117_117;
#line 1589 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__Label_162 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 3)));
#line 1589 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__LoopControlRval_163 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1589 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__LoopControlRvalCodeAddrs_164;
#line 1590 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_93_93;
#line 1591 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_95_95;

#line 1590 "llds_out_file.m"
                      {
#line 1590 "llds_out_file.m"
                        ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__LoopControlRval_163, &ll_backend__llds_out__llds_out_file__LoopControlRvalCodeAddrs_164, &ll_backend__llds_out__llds_out_file__V_93_93);
                      }
#line 1591 "llds_out_file.m"
                      {
#line 1591 "llds_out_file.m"
                        ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__SlotRval_92, &ll_backend__llds_out__llds_out_file__SlotRvalCodeAddrs_94, &ll_backend__llds_out__llds_out_file__V_95_95);
                      }
#line 1592 "llds_out_file.m"
                      {
#line 1592 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__LoopControlRvalCodeAddrs_164, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_116_116);
                      }
#line 1593 "llds_out_file.m"
                      {
#line 1593 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__SlotRvalCodeAddrs_94, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_116_116, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_117_117);
                      }
#line 1594 "llds_out_file.m"
                      {
#line 1594 "llds_out_file.m"
                        mercury__set_tree234__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_162)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_117_117, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                      }
#line 1595 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1589 "llds_out_file.m"
                    }
#line 1464 "llds_out_file.m"
                    break;
#line 1464 "llds_out_file.m"
                  case (MR_Integer) 34:
#line 1597 "llds_out_file.m"
                    {
#line 1597 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_114_114;
#line 1597 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__LoopControlRval_165 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1597 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__LoopControlRvalCodeAddrs_166;
#line 1597 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__SlotRval_167 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1597 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__SlotRvalCodeAddrs_168;
#line 1598 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_96_96;
#line 1599 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_97_97;

#line 1598 "llds_out_file.m"
                      {
#line 1598 "llds_out_file.m"
                        ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__LoopControlRval_165, &ll_backend__llds_out__llds_out_file__LoopControlRvalCodeAddrs_166, &ll_backend__llds_out__llds_out_file__V_96_96);
                      }
#line 1599 "llds_out_file.m"
                      {
#line 1599 "llds_out_file.m"
                        ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__SlotRval_167, &ll_backend__llds_out__llds_out_file__SlotRvalCodeAddrs_168, &ll_backend__llds_out__llds_out_file__V_97_97);
                      }
#line 1600 "llds_out_file.m"
                      {
#line 1600 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__LoopControlRvalCodeAddrs_166, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_114_114);
                      }
#line 1601 "llds_out_file.m"
                      {
#line 1601 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__SlotRvalCodeAddrs_168, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_114_114, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                      }
#line 1602 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1597 "llds_out_file.m"
                    }
#line 1464 "llds_out_file.m"
                    break;
#line 1464 "llds_out_file.m"
                }
#line 1464 "llds_out_file.m"
                break;
#line 1464 "llds_out_file.m"
            }
#line 1617 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 1617 "llds_out_file.m"
            {
#line 1617 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__Instrs0_12;
#line 1617 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0__tmp_copy_2 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19;
#line 1617 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0__tmp_copy_4 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145;

#line 1617 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0__tmp_copy_4;
#line 1617 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0__tmp_copy_2;
#line 1617 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 1617 "llds_out_file.m"
            }
#line 1617 "llds_out_file.m"
            continue;
#line 1455 "llds_out_file.m"
          }
#line 1453 "llds_out_file.m"
      }
#line 1453 "llds_out_file.m"
      break;
#line 1453 "llds_out_file.m"
    }
#line 1449 "llds_out_file.m"
}

#line 1415 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__count_while_label_in_block_4_p_0(
#line 1415 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Label_1,
#line 1415 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2,
#line 1415 "llds_out_file.m"
  MR_Integer ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_3,
#line 1415 "llds_out_file.m"
  MR_Integer * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_4)
#line 1415 "llds_out_file.m"
{
#line 1418 "llds_out_file.m"
  while (MR_TRUE)
#line 1418 "llds_out_file.m"
    {
#line 1418 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 1418 "llds_out_file.m"
      {
#line 1418 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 1418 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1418 "llds_out_file.m"
          *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_4 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_3;
#line 1418 "llds_out_file.m"
        else
#line 1419 "llds_out_file.m"
          {
#line 1419 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Instr0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 0)));
#line 1419 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Instrs0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 1)));
#line 1419 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Uinstr0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Instr0_10, (MR_Integer) 0)));
#line 1420 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Instr0_10, (MR_Integer) 1)));
#line 1421 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_15_15;

#line 1421 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_13, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1421 "llds_out_file.m"
            if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1421 "llds_out_file.m"
              {
#line 1421 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_13, (MR_Integer) 1)));
#line 1422 "llds_out_file.m"
                {
#line 1422 "llds_out_file.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_out.llds_out_file", (MR_String) "predicate \140ll_backend.llds_out.llds_out_file.count_while_label_in_block\'/4", (MR_String) "label in block");
#line 1422 "llds_out_file.m"
                  return;
                }
#line 1421 "llds_out_file.m"
              }
#line 1421 "llds_out_file.m"
            else
#line 1432 "llds_out_file.m"
              {
#line 1432 "llds_out_file.m"
                MR_Integer ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_26_26;
#line 1424 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__V_25_25;
#line 1424 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__V_35_35;

#line 1424 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_13, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 1424 "llds_out_file.m"
                if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1424 "llds_out_file.m"
                  {
#line 1424 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_13, (MR_Integer) 1)));
#line 1424 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__V_25_25)) == (MR_mktag((MR_Integer) 1)));
#line 1424 "llds_out_file.m"
                    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1424 "llds_out_file.m"
                      {
#line 1424 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__V_25_25, (MR_Integer) 0)));
#line 1424 "llds_out_file.m"
                        {
#line 1424 "llds_out_file.m"
                          ll_backend__llds_out__llds_out_file__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__llds_out__llds_out_file__Label_1, ll_backend__llds_out__llds_out_file__V_35_35);
                        }
#line 1424 "llds_out_file.m"
                      }
#line 1424 "llds_out_file.m"
                  }
#line 1424 "llds_out_file.m"
                if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1425 "llds_out_file.m"
                  {
#line 1425 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_26_26 = (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_3 + (MR_Integer) 1);
#line 1425 "llds_out_file.m"
                  }
#line 1424 "llds_out_file.m"
                else
#line 1426 "llds_out_file.m"
                  {
#line 1426 "llds_out_file.m"
                    MR_Word ll_backend__llds_out__llds_out_file__V_28_28;
#line 1426 "llds_out_file.m"
                    MR_Word ll_backend__llds_out__llds_out_file__V_36_36;
#line 1426 "llds_out_file.m"
                    MR_Word ll_backend__llds_out__llds_out_file__V_16_16;

#line 1426 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_13, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 1426 "llds_out_file.m"
                    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1426 "llds_out_file.m"
                      {
#line 1426 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_13, (MR_Integer) 1)));
#line 1426 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_13, (MR_Integer) 2)));
#line 1426 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 1426 "llds_out_file.m"
                        if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1426 "llds_out_file.m"
                          {
#line 1426 "llds_out_file.m"
                            ll_backend__llds_out__llds_out_file__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__V_28_28, (MR_Integer) 0)));
#line 1426 "llds_out_file.m"
                            {
#line 1426 "llds_out_file.m"
                              ll_backend__llds_out__llds_out_file__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__llds_out__llds_out_file__Label_1, ll_backend__llds_out__llds_out_file__V_36_36);
                            }
#line 1426 "llds_out_file.m"
                          }
#line 1426 "llds_out_file.m"
                      }
#line 1426 "llds_out_file.m"
                    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1427 "llds_out_file.m"
                      {
#line 1427 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_26_26 = (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_3 + (MR_Integer) 1);
#line 1427 "llds_out_file.m"
                      }
#line 1426 "llds_out_file.m"
                    else
#line 1428 "llds_out_file.m"
                      {
#line 1428 "llds_out_file.m"
                        MR_Integer ll_backend__llds_out__llds_out_file__V_17_17;
#line 1428 "llds_out_file.m"
                        MR_Integer ll_backend__llds_out__llds_out_file__V_18_18;
#line 1428 "llds_out_file.m"
                        MR_Word ll_backend__llds_out__llds_out_file__V_19_19;

#line 1428 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_13, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1428 "llds_out_file.m"
                        if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1428 "llds_out_file.m"
                          {
#line 1428 "llds_out_file.m"
                            ll_backend__llds_out__llds_out_file__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_13, (MR_Integer) 1)));
#line 1428 "llds_out_file.m"
                            ll_backend__llds_out__llds_out_file__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_13, (MR_Integer) 2)));
#line 1428 "llds_out_file.m"
                            ll_backend__llds_out__llds_out_file__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_13, (MR_Integer) 3)));
#line 1429 "llds_out_file.m"
                            {
#line 1429 "llds_out_file.m"
                              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_out.llds_out_file", (MR_String) "predicate \140ll_backend.llds_out.llds_out_file.count_while_label_in_block\'/4", (MR_String) "block in block");
#line 1429 "llds_out_file.m"
                              return;
                            }
#line 1428 "llds_out_file.m"
                          }
#line 1428 "llds_out_file.m"
                        else
#line 1431 "llds_out_file.m"
                          {
#line 1431 "llds_out_file.m"
                          }
#line 1428 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_26_26 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_3;
#line 1428 "llds_out_file.m"
                      }
#line 1426 "llds_out_file.m"
                  }
#line 1433 "llds_out_file.m"
                /* direct tailcall eliminated */
#line 1433 "llds_out_file.m"
                {
#line 1433 "llds_out_file.m"
                  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_file__Instrs0_11;
#line 1433 "llds_out_file.m"
                  MR_Integer ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0__tmp_copy_3 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_26_26;

#line 1433 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_3 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0__tmp_copy_3;
#line 1433 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__HeadVar__2_2 = ll_backend__llds_out__llds_out_file__HeadVar__2__tmp_copy_2;
#line 1433 "llds_out_file.m"
                }
#line 1433 "llds_out_file.m"
                continue;
#line 1432 "llds_out_file.m"
              }
#line 1419 "llds_out_file.m"
          }
#line 1418 "llds_out_file.m"
      }
#line 1418 "llds_out_file.m"
      break;
#line 1418 "llds_out_file.m"
    }
#line 1415 "llds_out_file.m"
}

#line 1394 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__is_while_label_5_p_0(
#line 1394 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Label_1,
#line 1394 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2,
#line 1394 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__HeadVar__3_3,
#line 1394 "llds_out_file.m"
  MR_Integer ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_4,
#line 1394 "llds_out_file.m"
  MR_Integer * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_5)
#line 1394 "llds_out_file.m"
{
#line 1397 "llds_out_file.m"
  while (MR_TRUE)
#line 1397 "llds_out_file.m"
    {
#line 1397 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 1397 "llds_out_file.m"
      {
#line 1397 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 1397 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1397 "llds_out_file.m"
          {
#line 1397 "llds_out_file.m"
            *ll_backend__llds_out__llds_out_file__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1397 "llds_out_file.m"
            *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_5 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_4;
#line 1397 "llds_out_file.m"
          }
#line 1397 "llds_out_file.m"
        else
#line 1398 "llds_out_file.m"
          {
#line 1398 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Instr0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 0)));
#line 1398 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Instrs0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 1)));
#line 1398 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Uinstr0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Instr0_11, (MR_Integer) 0)));
#line 1399 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Instr0_11, (MR_Integer) 1)));
#line 1400 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_17_17;

#line 1400 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_15, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1400 "llds_out_file.m"
            if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1400 "llds_out_file.m"
              {
#line 1400 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_15, (MR_Integer) 1)));
#line 1401 "llds_out_file.m"
                *ll_backend__llds_out__llds_out_file__HeadVar__3_3 = ll_backend__llds_out__llds_out_file__HeadVar__2_2;
#line 1401 "llds_out_file.m"
                *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_5 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_4;
#line 1400 "llds_out_file.m"
              }
#line 1400 "llds_out_file.m"
            else
#line 1411 "llds_out_file.m"
              {
#line 1411 "llds_out_file.m"
                MR_Integer ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_25_25;
#line 1403 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__V_24_24;
#line 1403 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__V_32_32;

#line 1403 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_15, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 1403 "llds_out_file.m"
                if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1403 "llds_out_file.m"
                  {
#line 1403 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_15, (MR_Integer) 1)));
#line 1403 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__V_24_24)) == (MR_mktag((MR_Integer) 1)));
#line 1403 "llds_out_file.m"
                    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1403 "llds_out_file.m"
                      {
#line 1403 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__V_24_24, (MR_Integer) 0)));
#line 1403 "llds_out_file.m"
                        {
#line 1403 "llds_out_file.m"
                          ll_backend__llds_out__llds_out_file__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__llds_out__llds_out_file__Label_1, ll_backend__llds_out__llds_out_file__V_32_32);
                        }
#line 1403 "llds_out_file.m"
                      }
#line 1403 "llds_out_file.m"
                  }
#line 1403 "llds_out_file.m"
                if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1404 "llds_out_file.m"
                  {
#line 1404 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_25_25 = (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_4 + (MR_Integer) 1);
#line 1404 "llds_out_file.m"
                  }
#line 1403 "llds_out_file.m"
                else
#line 1405 "llds_out_file.m"
                  {
#line 1405 "llds_out_file.m"
                    MR_Word ll_backend__llds_out__llds_out_file__V_27_27;
#line 1405 "llds_out_file.m"
                    MR_Word ll_backend__llds_out__llds_out_file__V_33_33;
#line 1405 "llds_out_file.m"
                    MR_Word ll_backend__llds_out__llds_out_file__V_18_18;

#line 1405 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_15, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 1405 "llds_out_file.m"
                    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1405 "llds_out_file.m"
                      {
#line 1405 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_15, (MR_Integer) 1)));
#line 1405 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_15, (MR_Integer) 2)));
#line 1405 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__V_27_27)) == (MR_mktag((MR_Integer) 1)));
#line 1405 "llds_out_file.m"
                        if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1405 "llds_out_file.m"
                          {
#line 1405 "llds_out_file.m"
                            ll_backend__llds_out__llds_out_file__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__V_27_27, (MR_Integer) 0)));
#line 1405 "llds_out_file.m"
                            {
#line 1405 "llds_out_file.m"
                              ll_backend__llds_out__llds_out_file__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__llds_out__llds_out_file__Label_1, ll_backend__llds_out__llds_out_file__V_33_33);
                            }
#line 1405 "llds_out_file.m"
                          }
#line 1405 "llds_out_file.m"
                      }
#line 1405 "llds_out_file.m"
                    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1406 "llds_out_file.m"
                      {
#line 1406 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_25_25 = (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_4 + (MR_Integer) 1);
#line 1406 "llds_out_file.m"
                      }
#line 1405 "llds_out_file.m"
                    else
#line 1407 "llds_out_file.m"
                      {
#line 1407 "llds_out_file.m"
                        MR_Word ll_backend__llds_out__llds_out_file__BlockInstrs_21;
#line 1407 "llds_out_file.m"
                        MR_Integer ll_backend__llds_out__llds_out_file__V_19_19;
#line 1407 "llds_out_file.m"
                        MR_Integer ll_backend__llds_out__llds_out_file__V_20_20;

#line 1407 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_15, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1407 "llds_out_file.m"
                        if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1407 "llds_out_file.m"
                          {
#line 1407 "llds_out_file.m"
                            ll_backend__llds_out__llds_out_file__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_15, (MR_Integer) 1)));
#line 1407 "llds_out_file.m"
                            ll_backend__llds_out__llds_out_file__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_15, (MR_Integer) 2)));
#line 1407 "llds_out_file.m"
                            ll_backend__llds_out__llds_out_file__BlockInstrs_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_15, (MR_Integer) 3)));
#line 1408 "llds_out_file.m"
                            {
#line 1408 "llds_out_file.m"
                              ll_backend__llds_out__llds_out_file__count_while_label_in_block_4_p_0(ll_backend__llds_out__llds_out_file__Label_1, ll_backend__llds_out__llds_out_file__BlockInstrs_21, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_25_25);
                            }
#line 1407 "llds_out_file.m"
                          }
#line 1407 "llds_out_file.m"
                        else
#line 1407 "llds_out_file.m"
                          ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_25_25 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_4;
#line 1407 "llds_out_file.m"
                      }
#line 1405 "llds_out_file.m"
                  }
#line 1412 "llds_out_file.m"
                /* direct tailcall eliminated */
#line 1412 "llds_out_file.m"
                {
#line 1412 "llds_out_file.m"
                  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_file__Instrs0_12;
#line 1412 "llds_out_file.m"
                  MR_Integer ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0__tmp_copy_4 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_25_25;

#line 1412 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_4 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0__tmp_copy_4;
#line 1412 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__HeadVar__2_2 = ll_backend__llds_out__llds_out_file__HeadVar__2__tmp_copy_2;
#line 1412 "llds_out_file.m"
                }
#line 1412 "llds_out_file.m"
                continue;
#line 1411 "llds_out_file.m"
              }
#line 1398 "llds_out_file.m"
          }
#line 1397 "llds_out_file.m"
      }
#line 1397 "llds_out_file.m"
      break;
#line 1397 "llds_out_file.m"
    }
#line 1394 "llds_out_file.m"
}

#line 1378 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__find_while_labels_3_p_0(
#line 1378 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 1378 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_WhileSet_0_2,
#line 1378 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_WhileSet_3)
#line 1378 "llds_out_file.m"
{
#line 1381 "llds_out_file.m"
  while (MR_TRUE)
#line 1381 "llds_out_file.m"
    {
#line 1381 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 1381 "llds_out_file.m"
      {
#line 1381 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 1381 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1381 "llds_out_file.m"
          *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_WhileSet_3 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_WhileSet_0_2;
#line 1381 "llds_out_file.m"
        else
#line 1382 "llds_out_file.m"
          {
#line 1382 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Uinstr0_7;
#line 1382 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Instrs0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 1382 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 1382 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__V_8_8;
#line 1383 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Label_11;
#line 1383 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Instrs1_12;
#line 1384 "llds_out_file.m"
            MR_Integer ll_backend__llds_out__llds_out_file__UseCount_13;
#line 1384 "llds_out_file.m"
            MR_Integer ll_backend__llds_out__llds_out_file__V_17_17;
#line 1384 "llds_out_file.m"
            MR_Integer ll_backend__llds_out__llds_out_file__V_18_18;

#line 1382 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__Uinstr0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_16_16, (MR_Integer) 0)));
#line 1382 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_16_16, (MR_Integer) 1)));
#line 1384 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_7, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1384 "llds_out_file.m"
            if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1384 "llds_out_file.m"
              {
#line 1384 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__Label_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_7, (MR_Integer) 1)));
#line 1385 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__V_17_17 = (MR_Integer) 0;
#line 1385 "llds_out_file.m"
                {
#line 1385 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__is_while_label_5_p_0(ll_backend__llds_out__llds_out_file__Label_11, ll_backend__llds_out__llds_out_file__Instrs0_9, &ll_backend__llds_out__llds_out_file__Instrs1_12, ll_backend__llds_out__llds_out_file__V_17_17, &ll_backend__llds_out__llds_out_file__UseCount_13);
                }
#line 1386 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__V_18_18 = (MR_Integer) 0;
#line 1386 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__succeeded = (ll_backend__llds_out__llds_out_file__UseCount_13 > ll_backend__llds_out__llds_out_file__V_18_18);
#line 1384 "llds_out_file.m"
              }
#line 1383 "llds_out_file.m"
            if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1388 "llds_out_file.m"
              {
#line 1388 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_WhileSet_19_19;

#line 1388 "llds_out_file.m"
                {
#line 1388 "llds_out_file.m"
                  mercury__set_tree234__insert_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_11)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_WhileSet_0_2, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_WhileSet_19_19);
                }
#line 1389 "llds_out_file.m"
                /* direct tailcall eliminated */
#line 1389 "llds_out_file.m"
                {
#line 1389 "llds_out_file.m"
                  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__Instrs1_12;
#line 1389 "llds_out_file.m"
                  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_WhileSet_0__tmp_copy_2 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_WhileSet_19_19;

#line 1389 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__STATE_VARIABLE_WhileSet_0_2 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_WhileSet_0__tmp_copy_2;
#line 1389 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 1389 "llds_out_file.m"
                }
#line 1389 "llds_out_file.m"
                continue;
#line 1388 "llds_out_file.m"
              }
#line 1383 "llds_out_file.m"
            else
#line 1391 "llds_out_file.m"
              {
#line 1391 "llds_out_file.m"
                /* direct tailcall eliminated */
#line 1391 "llds_out_file.m"
                {
#line 1391 "llds_out_file.m"
                  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__Instrs0_9;

#line 1391 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 1391 "llds_out_file.m"
                }
#line 1391 "llds_out_file.m"
                continue;
#line 1391 "llds_out_file.m"
              }
#line 1382 "llds_out_file.m"
          }
#line 1381 "llds_out_file.m"
      }
#line 1381 "llds_out_file.m"
      break;
#line 1381 "llds_out_file.m"
    }
#line 1378 "llds_out_file.m"
}

#line 1328 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__find_cont_labels_3_p_0(
#line 1328 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 1328 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_0_2,
#line 1328 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_3)
#line 1328 "llds_out_file.m"
{
#line 1331 "llds_out_file.m"
  while (MR_TRUE)
#line 1331 "llds_out_file.m"
    {
#line 1331 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 1331 "llds_out_file.m"
      {
#line 1331 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 1331 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1331 "llds_out_file.m"
          *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_3 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_0_2;
#line 1331 "llds_out_file.m"
        else
#line 1332 "llds_out_file.m"
          {
#line 1332 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Instr_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 1332 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Instrs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 1332 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Uinstr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Instr_7, (MR_Integer) 0)));
#line 1332 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_35_35;
#line 1333 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Instr_7, (MR_Integer) 1)));
#line 1334 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__ContLabel_13;

#line 1337 "llds_out_file.m"
#line 1337 "llds_out_file.m"
            switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr_10)) {
#line 1337 "llds_out_file.m"
              default:
#line 1337 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__succeeded = MR_FALSE;
#line 1337 "llds_out_file.m"
                break;
#line 1337 "llds_out_file.m"
              case (MR_Integer) 3:
#line 1337 "llds_out_file.m"
#line 1337 "llds_out_file.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 0)))) {
#line 1337 "llds_out_file.m"
                  default:
#line 1337 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__succeeded = MR_FALSE;
#line 1337 "llds_out_file.m"
                    break;
#line 1337 "llds_out_file.m"
                  case (MR_Integer) 1:
#line 1342 "llds_out_file.m"
                    {
#line 1342 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__Const_21;
#line 1342 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 1)));
#line 1342 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 2)));
#line 1342 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_31_31;
#line 1342 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_20_20;

#line 1342 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__V_29_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__V_29_29, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 1342 "llds_out_file.m"
                      if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1342 "llds_out_file.m"
                        {
#line 1342 "llds_out_file.m"
                          ll_backend__llds_out__llds_out_file__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__V_29_29, (MR_Integer) 1)));
#line 1342 "llds_out_file.m"
                          ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__V_30_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__V_30_30, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1342 "llds_out_file.m"
                          if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1342 "llds_out_file.m"
                            {
#line 1342 "llds_out_file.m"
                              ll_backend__llds_out__llds_out_file__Const_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__V_30_30, (MR_Integer) 1)));
#line 1343 "llds_out_file.m"
                              ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Const_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Const_21, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1343 "llds_out_file.m"
                              if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1343 "llds_out_file.m"
                                {
#line 1343 "llds_out_file.m"
                                  ll_backend__llds_out__llds_out_file__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Const_21, (MR_Integer) 1)));
#line 1343 "llds_out_file.m"
                                  ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__V_31_31)) == (MR_mktag((MR_Integer) 1)));
#line 1343 "llds_out_file.m"
                                  if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1343 "llds_out_file.m"
                                    ll_backend__llds_out__llds_out_file__ContLabel_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__V_31_31, (MR_Integer) 0)));
#line 1343 "llds_out_file.m"
                                }
#line 1342 "llds_out_file.m"
                            }
#line 1342 "llds_out_file.m"
                        }
#line 1342 "llds_out_file.m"
                    }
#line 1337 "llds_out_file.m"
                    break;
#line 1337 "llds_out_file.m"
                  case (MR_Integer) 3:
#line 1336 "llds_out_file.m"
                    {
#line 1336 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 2)));
#line 1336 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 1)));
#line 1336 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 3)));
#line 1336 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 4)));
#line 1336 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 5)));
#line 1336 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 6)));

#line 1336 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 1336 "llds_out_file.m"
                      if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1336 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__ContLabel_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__V_34_34, (MR_Integer) 0)));
#line 1336 "llds_out_file.m"
                    }
#line 1337 "llds_out_file.m"
                    break;
#line 1337 "llds_out_file.m"
                  case (MR_Integer) 4:
#line 1338 "llds_out_file.m"
                    {
#line 1338 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 2)));
#line 1338 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_33_33;
#line 1338 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 1)));

#line 1338 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__V_32_32)) == (MR_mktag((MR_Integer) 1)));
#line 1338 "llds_out_file.m"
                      if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1338 "llds_out_file.m"
                        {
#line 1338 "llds_out_file.m"
                          ll_backend__llds_out__llds_out_file__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__V_32_32, (MR_Integer) 0)));
#line 1338 "llds_out_file.m"
                          ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__V_33_33)) == (MR_mktag((MR_Integer) 1)));
#line 1338 "llds_out_file.m"
                          if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1338 "llds_out_file.m"
                            ll_backend__llds_out__llds_out_file__ContLabel_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__V_33_33, (MR_Integer) 0)));
#line 1338 "llds_out_file.m"
                        }
#line 1338 "llds_out_file.m"
                    }
#line 1337 "llds_out_file.m"
                    break;
#line 1337 "llds_out_file.m"
                  case (MR_Integer) 30:
#line 1340 "llds_out_file.m"
                    {
#line 1340 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 1)));

#line 1340 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__ContLabel_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 2)));
#line 1340 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__succeeded = MR_TRUE;
#line 1340 "llds_out_file.m"
                    }
#line 1337 "llds_out_file.m"
                    break;
#line 1337 "llds_out_file.m"
                }
#line 1337 "llds_out_file.m"
                break;
#line 1337 "llds_out_file.m"
            }
#line 1334 "llds_out_file.m"
            if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1346 "llds_out_file.m"
              {
#line 1346 "llds_out_file.m"
                {
#line 1346 "llds_out_file.m"
                  mercury__set_tree234__insert_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__llds_out__llds_out_file__ContLabel_13)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_0_2, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_35_35);
                }
#line 1346 "llds_out_file.m"
              }
#line 1334 "llds_out_file.m"
            else
#line 1347 "llds_out_file.m"
              {
#line 1347 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__Label1_23;
#line 1348 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__V_22_22;

#line 1348 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 0)))) == (MR_Integer) 29)));
#line 1348 "llds_out_file.m"
                if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1348 "llds_out_file.m"
                  {
#line 1348 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 1)));
#line 1348 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__Label1_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 2)));
#line 1350 "llds_out_file.m"
                    {
#line 1350 "llds_out_file.m"
                      mercury__set_tree234__insert_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__llds_out__llds_out_file__Label1_23)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_0_2, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_35_35);
                    }
#line 1348 "llds_out_file.m"
                  }
#line 1348 "llds_out_file.m"
                else
#line 1351 "llds_out_file.m"
                  {
#line 1351 "llds_out_file.m"
                    MR_Word ll_backend__llds_out__llds_out_file__Block_26;
#line 1352 "llds_out_file.m"
                    MR_Integer ll_backend__llds_out__llds_out_file__V_24_24;
#line 1352 "llds_out_file.m"
                    MR_Integer ll_backend__llds_out__llds_out_file__V_25_25;

#line 1352 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1352 "llds_out_file.m"
                    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1352 "llds_out_file.m"
                      {
#line 1352 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 1)));
#line 1352 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 2)));
#line 1352 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__Block_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 3)));
#line 1354 "llds_out_file.m"
                        {
#line 1354 "llds_out_file.m"
                          ll_backend__llds_out__llds_out_file__find_cont_labels_3_p_0(ll_backend__llds_out__llds_out_file__Block_26, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_0_2, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_35_35);
                        }
#line 1352 "llds_out_file.m"
                      }
#line 1352 "llds_out_file.m"
                    else
#line 1351 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_35_35 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_0_2;
#line 1351 "llds_out_file.m"
                  }
#line 1347 "llds_out_file.m"
              }
#line 1358 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 1358 "llds_out_file.m"
            {
#line 1358 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__Instrs_8;
#line 1358 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_0__tmp_copy_2 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_35_35;

#line 1358 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_0_2 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_0__tmp_copy_2;
#line 1358 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 1358 "llds_out_file.m"
            }
#line 1358 "llds_out_file.m"
            continue;
#line 1332 "llds_out_file.m"
          }
#line 1331 "llds_out_file.m"
      }
#line 1331 "llds_out_file.m"
      break;
#line 1331 "llds_out_file.m"
    }
#line 1328 "llds_out_file.m"
}

#line 1308 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__find_caller_label_2_p_0(
#line 1308 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 1308 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__CallerLabel_2)
#line 1308 "llds_out_file.m"
{
#line 1310 "llds_out_file.m"
  while (MR_TRUE)
#line 1310 "llds_out_file.m"
    {
#line 1310 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 1310 "llds_out_file.m"
      {
#line 1310 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 1310 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1310 "llds_out_file.m"
          {
#line 1311 "llds_out_file.m"
            {
#line 1311 "llds_out_file.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_out.llds_out_file", (MR_String) "predicate \140ll_backend.llds_out.llds_out_file.find_caller_label\'/2", (MR_String) "cannot find caller label");
#line 1311 "llds_out_file.m"
              return;
            }
#line 1310 "llds_out_file.m"
          }
#line 1310 "llds_out_file.m"
        else
#line 1312 "llds_out_file.m"
          {
#line 1312 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Uinstr_7;
#line 1312 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Instrs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 1312 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 1312 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__V_8_8;
#line 1313 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Label_11;

#line 1312 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__Uinstr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_16_16, (MR_Integer) 0)));
#line 1312 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_16_16, (MR_Integer) 1)));
#line 1313 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_7, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1313 "llds_out_file.m"
            if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1313 "llds_out_file.m"
              {
#line 1313 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__Label_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_7, (MR_Integer) 1)));
#line 1317 "llds_out_file.m"
                if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Label_11)) == (MR_mktag((MR_Integer) 1))))
#line 1319 "llds_out_file.m"
                  *ll_backend__llds_out__llds_out_file__CallerLabel_2 = ll_backend__llds_out__llds_out_file__Label_11;
#line 1317 "llds_out_file.m"
                else
#line 1315 "llds_out_file.m"
                  {
#line 1316 "llds_out_file.m"
                    {
#line 1316 "llds_out_file.m"
                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_out.llds_out_file", (MR_String) "predicate \140ll_backend.llds_out.llds_out_file.find_caller_label\'/2", (MR_String) "caller label is internal label");
#line 1316 "llds_out_file.m"
                      return;
                    }
#line 1315 "llds_out_file.m"
                  }
#line 1313 "llds_out_file.m"
              }
#line 1313 "llds_out_file.m"
            else
#line 1322 "llds_out_file.m"
              {
#line 1322 "llds_out_file.m"
                /* direct tailcall eliminated */
#line 1322 "llds_out_file.m"
                {
#line 1322 "llds_out_file.m"
                  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__Instrs_9;

#line 1322 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 1322 "llds_out_file.m"
                }
#line 1322 "llds_out_file.m"
                continue;
#line 1322 "llds_out_file.m"
              }
#line 1312 "llds_out_file.m"
          }
#line 1310 "llds_out_file.m"
      }
#line 1310 "llds_out_file.m"
      break;
#line 1310 "llds_out_file.m"
    }
#line 1308 "llds_out_file.m"
}

#line 1255 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_annotated_c_procedure_4_p_0(
#line 1255 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_5,
#line 1255 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__AnnotatedProc_6)
#line 1255 "llds_out_file.m"
{
#line 1258 "llds_out_file.m"
  {
#line 1258 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 1258 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__Proc_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__AnnotatedProc_6, (MR_Integer) 0)));
#line 1258 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__LabelOutputInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__AnnotatedProc_6, (MR_Integer) 1)));
#line 1258 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__Name_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_8, (MR_Integer) 0)));
#line 1258 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__Arity_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_8, (MR_Integer) 1)));
#line 1258 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__Instrs_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_8, (MR_Integer) 5)));
#line 1258 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__PredProcId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_8, (MR_Integer) 2)));
#line 1258 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__ProcId_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__PredProcId_13, (MR_Integer) 1)));
#line 1258 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__ModeNum_16;
#line 1258 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__LocalThreadEngineBase_17;
#line 1262 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_8, (MR_Integer) 3)));
#line 1262 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_8, (MR_Integer) 4)));
#line 1262 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_8, (MR_Integer) 6)));
#line 1262 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_8, (MR_Integer) 7)));
#line 1262 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_8, (MR_Integer) 8)));
#line 1266 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__PredProcId_13, (MR_Integer) 0)));
#line 1281 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_91_91;
#line 1281 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_92_92;
#line 1281 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_93_93;
#line 1281 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_94_94;
#line 1281 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_95_95;
#line 1281 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_96_96;
#line 1281 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_97_97;
#line 1281 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_98_98;
#line 1281 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_99_99;
#line 1281 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_100_100;
#line 1281 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_101_101;
#line 1281 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_102_102;
#line 1281 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_103_103;
#line 1281 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_104_104;
#line 1281 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_105_105;
#line 1281 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_106_106;
#line 1281 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_107_107;
#line 1281 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_108_108;
#line 1281 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_109_109;
#line 1281 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_110_110;
#line 1281 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_111_111;

#line 1267 "llds_out_file.m"
    {
#line 1267 "llds_out_file.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(ll_backend__llds_out__llds_out_file__ProcId_15, &ll_backend__llds_out__llds_out_file__ModeNum_16);
    }
#line 1269 "llds_out_file.m"
    {
#line 1269 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\n/*-------------------------------------");
    }
#line 1270 "llds_out_file.m"
    {
#line 1270 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "------------------------------------*/\n");
    }
#line 1271 "llds_out_file.m"
    {
#line 1271 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "/* code for \'");
    }
#line 1274 "llds_out_file.m"
    {
#line 1274 "llds_out_file.m"
      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__Name_10);
    }
#line 1275 "llds_out_file.m"
    {
#line 1275 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\'/");
    }
#line 1276 "llds_out_file.m"
    {
#line 1276 "llds_out_file.m"
      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_file__Arity_11);
    }
#line 1277 "llds_out_file.m"
    {
#line 1277 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) " mode ");
    }
#line 1278 "llds_out_file.m"
    {
#line 1278 "llds_out_file.m"
      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_file__ModeNum_16);
    }
#line 1279 "llds_out_file.m"
    {
#line 1279 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) " */\n");
    }
#line 1281 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 0)));
#line 1281 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_92_92 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 1)));
#line 1281 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_93_93 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 2)));
#line 1281 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 3)));
#line 1281 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 4)));
#line 1281 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 5)));
#line 1281 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)));
#line 1281 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_98_98 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 1281 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_99_99 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1281 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_100_100 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1281 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_101_101 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1281 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__LocalThreadEngineBase_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1281 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_102_102 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1281 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_103_103 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1281 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_104_104 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1281 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_105_105 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 1281 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_106_106 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 1281 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_107_107 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 1281 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_108_108 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 1281 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_109_109 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 1281 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_110_110 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 1281 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 8)));
#line 5758 "ll_backend.llds_out.llds_out_file.c"
#line 5759 "ll_backend.llds_out.llds_out_file.c"
    switch (ll_backend__llds_out__llds_out_file__LocalThreadEngineBase_17) {
#line 5761 "ll_backend.llds_out.llds_out_file.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 5763 "ll_backend.llds_out.llds_out_file.c"
      case (MR_Integer) 0:
#line 1292 "llds_out_file.m"
        {
#line 1292 "llds_out_file.m"
          ll_backend__llds_out__llds_out_instr__output_instruction_list_6_p_0(ll_backend__llds_out__llds_out_file__Info_5, ll_backend__llds_out__llds_out_file__Instrs_12, ll_backend__llds_out__llds_out_file__LabelOutputInfo_9, (MR_Integer) 0);
        }
#line 5770 "ll_backend.llds_out.llds_out_file.c"
        break;
#line 5772 "ll_backend.llds_out.llds_out_file.c"
      case (MR_Integer) 1:
#line 5774 "ll_backend.llds_out.llds_out_file.c"
        {
#line 1284 "llds_out_file.m"
          {
#line 1284 "llds_out_file.m"
            mercury__io__write_string_3_p_0((MR_String) "#ifdef MR_maybe_local_thread_engine_base\n");
          }
#line 1285 "llds_out_file.m"
          {
#line 1285 "llds_out_file.m"
            mercury__io__write_string_3_p_0((MR_String) "\t#undef MR_maybe_local_thread_engine_base\n");
          }
#line 1286 "llds_out_file.m"
          {
#line 1286 "llds_out_file.m"
            mercury__io__write_string_3_p_0((MR_String) "\t#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base\n");
          }
#line 1288 "llds_out_file.m"
          {
#line 1288 "llds_out_file.m"
            mercury__io__write_string_3_p_0((MR_String) "#endif\n");
          }
#line 1292 "llds_out_file.m"
          {
#line 1292 "llds_out_file.m"
            ll_backend__llds_out__llds_out_instr__output_instruction_list_6_p_0(ll_backend__llds_out__llds_out_file__Info_5, ll_backend__llds_out__llds_out_file__Instrs_12, ll_backend__llds_out__llds_out_file__LabelOutputInfo_9, (MR_Integer) 0);
          }
#line 1296 "llds_out_file.m"
          {
#line 1296 "llds_out_file.m"
            mercury__io__write_string_3_p_0((MR_String) "#ifdef MR_maybe_local_thread_engine_base\n");
          }
#line 1297 "llds_out_file.m"
          {
#line 1297 "llds_out_file.m"
            mercury__io__write_string_3_p_0((MR_String) "\t#undef MR_maybe_local_thread_engine_base\n");
          }
#line 1298 "llds_out_file.m"
          {
#line 1298 "llds_out_file.m"
            mercury__io__write_string_3_p_0((MR_String) "\t#define MR_maybe_local_thread_engine_base MR_thread_engine_base\n");
          }
#line 1300 "llds_out_file.m"
          {
#line 1300 "llds_out_file.m"
            mercury__io__write_string_3_p_0((MR_String) "#endif\n");
          }
#line 5821 "ll_backend.llds_out.llds_out_file.c"
        }
#line 5823 "ll_backend.llds_out.llds_out_file.c"
        break;
#line 5825 "ll_backend.llds_out.llds_out_file.c"
    }
#line 1258 "llds_out_file.m"
  }
#line 1255 "llds_out_file.m"
}

#line 1241 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_global_var_decl_5_p_0(
#line 1241 "llds_out_file.m"
  MR_String ll_backend__llds_out__llds_out_file__VarName_6,
#line 1241 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_10,
#line 1241 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_11)
#line 1241 "llds_out_file.m"
{
#line 1244 "llds_out_file.m"
  {
#line 1244 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 1244 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__GlobalVar_9 = (MR_Word) ll_backend__llds_out__llds_out_file__VarName_6;
#line 1246 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_14_14;

#line 1246 "llds_out_file.m"
    {
#line 1246 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_14_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1246 "llds_out_file.m"
      MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__V_14_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1246 "llds_out_file.m"
      MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__V_14_14, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__GlobalVar_9));
#line 1246 "llds_out_file.m"
    }
#line 1246 "llds_out_file.m"
    {
#line 1246 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(ll_backend__llds_out__llds_out_file__V_14_14, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_10);
    }
#line 1246 "llds_out_file.m"
    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1247 "llds_out_file.m"
      *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_11 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_10;
#line 1246 "llds_out_file.m"
    else
#line 1249 "llds_out_file.m"
      {
#line 1249 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_15_15;
#line 1249 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__V_19_19;

#line 1249 "llds_out_file.m"
        {
#line 1249 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__V_15_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1249 "llds_out_file.m"
          MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__V_15_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1249 "llds_out_file.m"
          MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__V_15_15, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__GlobalVar_9));
#line 1249 "llds_out_file.m"
        }
#line 1249 "llds_out_file.m"
        {
#line 1249 "llds_out_file.m"
          ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__llds_out__llds_out_file__V_15_15, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_10, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_11);
        }
#line 1250 "llds_out_file.m"
        {
#line 1250 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "extern MR_Word ");
        }
#line 1251 "llds_out_file.m"
        {
#line 1251 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__V_19_19 = ll_backend__llds_out__llds_out_data__c_global_var_name_1_f_0(ll_backend__llds_out__llds_out_file__GlobalVar_9);
        }
#line 1251 "llds_out_file.m"
        {
#line 1251 "llds_out_file.m"
          mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__V_19_19);
        }
#line 1252 "llds_out_file.m"
        {
#line 1252 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) ";\n");
        }
#line 1249 "llds_out_file.m"
      }
#line 1244 "llds_out_file.m"
  }
#line 1241 "llds_out_file.m"
}

#line 1239 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_c_procedure_decls_6_p_0_2(
#line 1239 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1239 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1239 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1239 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 1239 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 1239 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5)
#line 1239 "llds_out_file.m"
{
#line 1239 "llds_out_file.m"
  {
#line 1239 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 1239 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv3_HeadVar__4_4;

#line 1239 "llds_out_file.m"
    {
#line 1239 "llds_out_file.m"
      ll_backend__llds_out__llds_out_instr__output_record_instruction_decls_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv3_HeadVar__4_4);
    }
#line 1239 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv3_HeadVar__4_4));
#line 1239 "llds_out_file.m"
  }
#line 1239 "llds_out_file.m"
}

#line 1238 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_c_procedure_decls_6_p_0_1(
#line 1238 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1238 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1238 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1238 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 1238 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 1238 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5)
#line 1238 "llds_out_file.m"
{
#line 1238 "llds_out_file.m"
  {
#line 1238 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 1238 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_DeclSet_11;

#line 1238 "llds_out_file.m"
    {
#line 1238 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_c_global_var_decl_5_p_0(((MR_String) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_DeclSet_11);
    }
#line 1238 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_DeclSet_11));
#line 1238 "llds_out_file.m"
  }
#line 1238 "llds_out_file.m"
}

#line 1229 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_c_procedure_decls_6_p_0(
#line 1229 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_7,
#line 1229 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__AnnotatedProc_8,
#line 1229 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_15,
#line 1229 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_16)
#line 1229 "llds_out_file.m"
{
#line 1233 "llds_out_file.m"
  {
#line 1233 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 1233 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_42_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1233 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeInfo_48_48;
#line 1233 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_49_49;
#line 1233 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__Proc_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__AnnotatedProc_8, (MR_Integer) 0)));
#line 1233 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__Instrs_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 5)));
#line 1233 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__CGlobalVarSet_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 8)));
#line 1233 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__CGlobalVars_14;
#line 1233 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_20_20;
#line 1233 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_22_22;
#line 1234 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__AnnotatedProc_8, (MR_Integer) 1)));
#line 1235 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 0)));
#line 1235 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 1)));
#line 1235 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 2)));
#line 1235 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 3)));
#line 1235 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 4)));
#line 1235 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 6)));
#line 1235 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 7)));
#line 1238 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_DeclSet_20_20;
#line 1238 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_IO_21_21;
#line 1239 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv5_STATE_VARIABLE_DeclSet_16;
#line 1239 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv4_STATE_VARIABLE_IO_18;

#line 1237 "llds_out_file.m"
    {
#line 1237 "llds_out_file.m"
      mercury__set__to_sorted_list_2_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_42_42, ll_backend__llds_out__llds_out_file__CGlobalVarSet_13, &ll_backend__llds_out__llds_out_file__CGlobalVars_14);
    }
#line 6059 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeInfo_48_48 = (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_1[0];
#line 6061 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_49_49 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 1238 "llds_out_file.m"
    {
#line 1238 "llds_out_file.m"
      mercury__list__foldl2_6_p_2(ll_backend__llds_out__llds_out_file__TypeCtorInfo_42_42, ll_backend__llds_out__llds_out_file__TypeInfo_48_48, ll_backend__llds_out__llds_out_file__TypeCtorInfo_49_49, (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_2[11], ll_backend__llds_out__llds_out_file__CGlobalVars_14, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_15)), &ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_DeclSet_20_20, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_IO_21_21);
    }
#line 1238 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_20_20 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_DeclSet_20_20);
#line 1239 "llds_out_file.m"
    {
#line 1239 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1239 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_22_22, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_6[13]));
#line 1239 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_22_22, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_record_c_procedure_decls_6_p_0_2));
#line 1239 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1239 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_22_22, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_7));
#line 1239 "llds_out_file.m"
    }
#line 1239 "llds_out_file.m"
    {
#line 1239 "llds_out_file.m"
      mercury__list__foldl2_6_p_2((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__llds_out__llds_out_file__TypeInfo_48_48, ll_backend__llds_out__llds_out_file__TypeCtorInfo_49_49, ll_backend__llds_out__llds_out_file__V_22_22, ll_backend__llds_out__llds_out_file__Instrs_12, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_20_20)), &ll_backend__llds_out__llds_out_file__conv5_STATE_VARIABLE_DeclSet_16, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv4_STATE_VARIABLE_IO_18);
    }
#line 1239 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_16 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv5_STATE_VARIABLE_DeclSet_16);
#line 1233 "llds_out_file.m"
  }
#line 1229 "llds_out_file.m"
}

#line 1194 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_entry_label_init_4_p_0(
#line 1194 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__EntryLabelToLayoutMap_5,
#line 1194 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Label_6)
#line 1194 "llds_out_file.m"
{
#line 1197 "llds_out_file.m"
  {
#line 1197 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 1197 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__SuffixOpen_9;
#line 1197 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ProcLabel_10;
#line 1197 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__TabInitMacro_11;
#line 1198 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file___LayoutId_8;
#line 1198 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv0__LayoutId_8;

#line 1198 "llds_out_file.m"
    {
#line 1198 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0, ll_backend__llds_out__llds_out_file__EntryLabelToLayoutMap_5, ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_6)), &ll_backend__llds_out__llds_out_file__conv0__LayoutId_8);
    }
#line 1198 "llds_out_file.m"
    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1198 "llds_out_file.m"
      {
#line 1198 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file___LayoutId_8 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv0__LayoutId_8);
#line 1198 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__succeeded = MR_TRUE;
#line 1198 "llds_out_file.m"
      }
#line 1198 "llds_out_file.m"
    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1199 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__SuffixOpen_9 = (MR_String) "_sl(";
#line 1198 "llds_out_file.m"
    else
#line 1201 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__SuffixOpen_9 = (MR_String) "(";
#line 1207 "llds_out_file.m"
    if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Label_6)) == (MR_mktag((MR_Integer) 1))))
#line 1207 "llds_out_file.m"
      {
#line 1207 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__Label_6, (MR_Integer) 1)));
#line 1207 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__Label_6, (MR_Integer) 0)));

#line 1207 "llds_out_file.m"
#line 1207 "llds_out_file.m"
        switch (ll_backend__llds_out__llds_out_file__V_35_35) {
#line 1207 "llds_out_file.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1207 "llds_out_file.m"
          case (MR_Integer) 0:
#line 1211 "llds_out_file.m"
            {
#line 1211 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__ProcLabel_10 = ll_backend__llds_out__llds_out_file__V_34_34;
#line 1212 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__TabInitMacro_11 = (MR_String) "\tMR_init_local1";
#line 1211 "llds_out_file.m"
            }
#line 1207 "llds_out_file.m"
            break;
#line 1207 "llds_out_file.m"
          case (MR_Integer) 2:
#line 1205 "llds_out_file.m"
            {
#line 1205 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__ProcLabel_10 = ll_backend__llds_out__llds_out_file__V_34_34;
#line 1206 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__TabInitMacro_11 = (MR_String) "\tMR_init_entry1";
#line 1205 "llds_out_file.m"
            }
#line 1207 "llds_out_file.m"
            break;
#line 1207 "llds_out_file.m"
          case (MR_Integer) 1:
#line 1208 "llds_out_file.m"
            {
#line 1208 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__ProcLabel_10 = ll_backend__llds_out__llds_out_file__V_34_34;
#line 1209 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__TabInitMacro_11 = (MR_String) "\tMR_init_entry1";
#line 1208 "llds_out_file.m"
            }
#line 1207 "llds_out_file.m"
            break;
#line 1207 "llds_out_file.m"
        }
#line 1207 "llds_out_file.m"
      }
#line 1207 "llds_out_file.m"
    else
#line 1214 "llds_out_file.m"
      {
#line 1216 "llds_out_file.m"
        {
#line 1216 "llds_out_file.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_out.llds_out_file", (MR_String) "predicate \140ll_backend.llds_out.llds_out_file.output_c_entry_label_init\'/4", (MR_String) "internal label");
#line 1216 "llds_out_file.m"
          return;
        }
#line 1214 "llds_out_file.m"
      }
#line 1218 "llds_out_file.m"
    {
#line 1218 "llds_out_file.m"
      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__TabInitMacro_11);
    }
#line 1219 "llds_out_file.m"
    {
#line 1219 "llds_out_file.m"
      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__SuffixOpen_9);
    }
#line 1220 "llds_out_file.m"
    {
#line 1220 "llds_out_file.m"
      backend_libs__name_mangle__output_proc_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_file__ProcLabel_10);
    }
#line 1221 "llds_out_file.m"
    {
#line 1221 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) ");\n");
    }
#line 1223 "llds_out_file.m"
    {
#line 1223 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\tMR_INIT_PROC_LAYOUT_ADDR(");
    }
#line 1224 "llds_out_file.m"
    {
#line 1224 "llds_out_file.m"
      ll_backend__llds_out__llds_out_code_addr__output_label_3_p_0(ll_backend__llds_out__llds_out_file__Label_6);
    }
#line 1225 "llds_out_file.m"
    {
#line 1225 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) ");\n");
    }
#line 1197 "llds_out_file.m"
  }
#line 1194 "llds_out_file.m"
}

#line 1187 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__write_int_pair_3_p_0(
#line 1187 "llds_out_file.m"
  MR_Tuple ll_backend__llds_out__llds_out_file__HeadVar__1_1)
#line 1187 "llds_out_file.m"
{
#line 1189 "llds_out_file.m"
  {
#line 1189 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 1189 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__LabelNum_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 1189 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__SlotNum_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));

#line 1190 "llds_out_file.m"
    {
#line 1190 "llds_out_file.m"
      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_file__LabelNum_4);
    }
#line 1191 "llds_out_file.m"
    {
#line 1191 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) ",");
    }
#line 1192 "llds_out_file.m"
    {
#line 1192 "llds_out_file.m"
      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_file__SlotNum_5);
    }
#line 1189 "llds_out_file.m"
  }
#line 1187 "llds_out_file.m"
}

#line 1184 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_chunk_6_p_0_1(
#line 1184 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1184 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1184 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1184 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 1184 "llds_out_file.m"
{
#line 1184 "llds_out_file.m"
  {
#line 1184 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 1184 "llds_out_file.m"
    {
#line 1184 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__write_int_pair_3_p_0(((MR_Tuple) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
    }
#line 1184 "llds_out_file.m"
  }
#line 1184 "llds_out_file.m"
}

#line 1170 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_chunk_6_p_0(
#line 1170 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_7,
#line 1170 "llds_out_file.m"
  MR_String ll_backend__llds_out__llds_out_file__Suffix_8,
#line 1170 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ProcLabel_9,
#line 1170 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__LabelSlotNums_10)
#line 1170 "llds_out_file.m"
{
#line 1174 "llds_out_file.m"
  {
#line 1174 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 1174 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeInfo_54_54;
#line 1174 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__ModuleName_12;
#line 1174 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__V_18_18;
#line 1181 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_33_33;
#line 1181 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_34_34;
#line 1181 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_35_35;
#line 1181 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_36_36;
#line 1181 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_37_37;
#line 1181 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_38_38;
#line 1181 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_39_39;
#line 1181 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_40_40;
#line 1181 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_41_41;
#line 1181 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_42_42;
#line 1181 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_43_43;
#line 1181 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_44_44;
#line 1181 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_45_45;
#line 1181 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_46_46;
#line 1181 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_47_47;
#line 1181 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_48_48;
#line 1181 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_49_49;
#line 1181 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_50_50;
#line 1181 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_51_51;
#line 1181 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_52_52;
#line 1181 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_53_53;

#line 1175 "llds_out_file.m"
    {
#line 1175 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\tMR_init_label");
    }
#line 1176 "llds_out_file.m"
    {
#line 1176 "llds_out_file.m"
      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__Suffix_8);
    }
#line 6390 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeInfo_54_54 = (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_3[0];
#line 1177 "llds_out_file.m"
    {
#line 1177 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_18_18 = mercury__list__length_1_f_0(ll_backend__llds_out__llds_out_file__TypeInfo_54_54, ll_backend__llds_out__llds_out_file__LabelSlotNums_10);
    }
#line 1177 "llds_out_file.m"
    {
#line 1177 "llds_out_file.m"
      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_file__V_18_18);
    }
#line 1178 "llds_out_file.m"
    {
#line 1178 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "(");
    }
#line 1179 "llds_out_file.m"
    {
#line 1179 "llds_out_file.m"
      backend_libs__name_mangle__output_proc_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_file__ProcLabel_9);
    }
#line 1180 "llds_out_file.m"
    {
#line 1180 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1181 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 0)));
#line 1181 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__ModuleName_12 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 1)));
#line 1181 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 2)));
#line 1181 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 3)));
#line 1181 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 4)));
#line 1181 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 5)));
#line 1181 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 6)));
#line 1181 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_39_39 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 1181 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1181 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1181 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1181 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1181 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1181 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1181 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1181 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 1181 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 1181 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 1181 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 1181 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 1181 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 1181 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 8)));
#line 1182 "llds_out_file.m"
    {
#line 1182 "llds_out_file.m"
      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_12);
    }
#line 1183 "llds_out_file.m"
    {
#line 1183 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
    }
#line 1184 "llds_out_file.m"
    {
#line 1184 "llds_out_file.m"
      mercury__io__write_list_5_p_0(ll_backend__llds_out__llds_out_file__TypeInfo_54_54, ll_backend__llds_out__llds_out_file__LabelSlotNums_10, (MR_String) ", ", (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_2[10]);
    }
#line 1185 "llds_out_file.m"
    {
#line 1185 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) ")\n");
    }
#line 1174 "llds_out_file.m"
  }
#line 1170 "llds_out_file.m"
}

#line 1167 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_group_5_p_0_1(
#line 1167 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1167 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1167 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1167 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 1167 "llds_out_file.m"
{
#line 1167 "llds_out_file.m"
  {
#line 1167 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 1167 "llds_out_file.m"
    {
#line 1167 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_chunk_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 5))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
    }
#line 1167 "llds_out_file.m"
  }
#line 1167 "llds_out_file.m"
}

#line 1155 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_group_5_p_0(
#line 1155 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_6,
#line 1155 "llds_out_file.m"
  MR_String ll_backend__llds_out__llds_out_file__Suffix_7,
#line 1155 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__3_3)
#line 1155 "llds_out_file.m"
{
#line 1160 "llds_out_file.m"
  {
#line 1160 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 1160 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeInfo_18_18 = (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_3[0];
#line 1160 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ProcLabel_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__3_3, (MR_Integer) 0)));
#line 1160 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__RevLabelSlotNums_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__3_3, (MR_Integer) 1)));
#line 1160 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__LabelSlotNums_11;
#line 1160 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__LabelSlotNumChunks_13;
#line 1160 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_16_16;
#line 1166 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_IO_15;

#line 1161 "llds_out_file.m"
    {
#line 1161 "llds_out_file.m"
      mercury__list__reverse_2_p_0(ll_backend__llds_out__llds_out_file__TypeInfo_18_18, ll_backend__llds_out__llds_out_file__RevLabelSlotNums_9, &ll_backend__llds_out__llds_out_file__LabelSlotNums_11);
    }
#line 1165 "llds_out_file.m"
    {
#line 1165 "llds_out_file.m"
      mercury__list__chunk_3_p_0(ll_backend__llds_out__llds_out_file__TypeInfo_18_18, ll_backend__llds_out__llds_out_file__LabelSlotNums_11, (MR_Integer) 10, &ll_backend__llds_out__llds_out_file__LabelSlotNumChunks_13);
    }
#line 1167 "llds_out_file.m"
    {
#line 1167 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1167 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_16_16, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_6[12]));
#line 1167 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_16_16, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_group_5_p_0_1));
#line 1167 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1167 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_16_16, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_6));
#line 1167 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_16_16, 4) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Suffix_7));
#line 1167 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_16_16, 5) = ((MR_Box) (ll_backend__llds_out__llds_out_file__ProcLabel_8));
#line 1167 "llds_out_file.m"
    }
#line 1166 "llds_out_file.m"
    {
#line 1166 "llds_out_file.m"
      mercury__list__foldl_4_p_2((MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_1[3], (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__llds_out__llds_out_file__V_16_16, ll_backend__llds_out__llds_out_file__LabelSlotNumChunks_13, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_IO_15);
    }
#line 1160 "llds_out_file.m"
  }
#line 1155 "llds_out_file.m"
}

#line 1152 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_no_layout_init_chunk_4_p_0_1(
#line 1152 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1152 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1152 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1152 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 1152 "llds_out_file.m"
{
#line 1152 "llds_out_file.m"
  {
#line 1152 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 1152 "llds_out_file.m"
    {
#line 1152 "llds_out_file.m"
      mercury__io__write_int_3_p_0(((MR_Integer) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
    }
#line 1152 "llds_out_file.m"
  }
#line 1152 "llds_out_file.m"
}

#line 1143 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_no_layout_init_chunk_4_p_0(
#line 1143 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ProcLabel_5,
#line 1143 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__LabelNums_6)
#line 1143 "llds_out_file.m"
{
#line 1146 "llds_out_file.m"
  {
#line 1146 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 1146 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_24_24;
#line 1146 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__V_12_12;

#line 1147 "llds_out_file.m"
    {
#line 1147 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\tMR_init_label");
    }
#line 6633 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_24_24 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1148 "llds_out_file.m"
    {
#line 1148 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_12_12 = mercury__list__length_1_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_24_24, ll_backend__llds_out__llds_out_file__LabelNums_6);
    }
#line 1148 "llds_out_file.m"
    {
#line 1148 "llds_out_file.m"
      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_file__V_12_12);
    }
#line 1149 "llds_out_file.m"
    {
#line 1149 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "(");
    }
#line 1150 "llds_out_file.m"
    {
#line 1150 "llds_out_file.m"
      backend_libs__name_mangle__output_proc_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_file__ProcLabel_5);
    }
#line 1151 "llds_out_file.m"
    {
#line 1151 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) ",");
    }
#line 1152 "llds_out_file.m"
    {
#line 1152 "llds_out_file.m"
      mercury__io__write_list_5_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_24_24, ll_backend__llds_out__llds_out_file__LabelNums_6, (MR_String) ",", (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_2[9]);
    }
#line 1153 "llds_out_file.m"
    {
#line 1153 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) ")\n");
    }
#line 1146 "llds_out_file.m"
  }
#line 1143 "llds_out_file.m"
}

#line 1140 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_no_layout_init_group_3_p_0_1(
#line 1140 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1140 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1140 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1140 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 1140 "llds_out_file.m"
{
#line 1140 "llds_out_file.m"
  {
#line 1140 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 1140 "llds_out_file.m"
    {
#line 1140 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_c_internal_label_no_layout_init_chunk_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
    }
#line 1140 "llds_out_file.m"
  }
#line 1140 "llds_out_file.m"
}

#line 1131 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_no_layout_init_group_3_p_0(
#line 1131 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1)
#line 1131 "llds_out_file.m"
{
#line 1134 "llds_out_file.m"
  {
#line 1134 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 1134 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_14_14 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1134 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ProcLabel_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 1134 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__RevLabelNums_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 1134 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__LabelNums_7;
#line 1134 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__LabelNumChunks_9;
#line 1134 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_12_12;
#line 1140 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_IO_11;

#line 1135 "llds_out_file.m"
    {
#line 1135 "llds_out_file.m"
      mercury__list__reverse_2_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_14_14, ll_backend__llds_out__llds_out_file__RevLabelNums_5, &ll_backend__llds_out__llds_out_file__LabelNums_7);
    }
#line 1139 "llds_out_file.m"
    {
#line 1139 "llds_out_file.m"
      mercury__list__chunk_3_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_14_14, ll_backend__llds_out__llds_out_file__LabelNums_7, (MR_Integer) 10, &ll_backend__llds_out__llds_out_file__LabelNumChunks_9);
    }
#line 1140 "llds_out_file.m"
    {
#line 1140 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1140 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_12_12, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_4[5]));
#line 1140 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_12_12, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_c_internal_label_no_layout_init_group_3_p_0_1));
#line 1140 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1140 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_12_12, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__ProcLabel_4));
#line 1140 "llds_out_file.m"
    }
#line 1140 "llds_out_file.m"
    {
#line 1140 "llds_out_file.m"
      mercury__list__foldl_4_p_2((MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_1[2], (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__llds_out__llds_out_file__V_12_12, ll_backend__llds_out__llds_out_file__LabelNumChunks_9, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_IO_11);
    }
#line 1134 "llds_out_file.m"
  }
#line 1131 "llds_out_file.m"
}

#line 1089 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__group_init_c_labels_10_p_0(
#line 1089 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 1089 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2,
#line 1089 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoLayoutMap_0_3,
#line 1089 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoLayoutMap_4,
#line 1089 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_0_5,
#line 1089 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_6,
#line 1089 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_0_7,
#line 1089 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_8,
#line 1089 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_0_9,
#line 1089 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_10)
#line 1089 "llds_out_file.m"
{
#line 1098 "llds_out_file.m"
  while (MR_TRUE)
#line 1098 "llds_out_file.m"
    {
#line 1098 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 1098 "llds_out_file.m"
      {
#line 1098 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 1098 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1098 "llds_out_file.m"
          {
#line 1099 "llds_out_file.m"
            *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_10 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_0_9;
#line 1099 "llds_out_file.m"
            *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_8 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_0_7;
#line 1099 "llds_out_file.m"
            *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_6 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_0_5;
#line 1099 "llds_out_file.m"
            *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoLayoutMap_4 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoLayoutMap_0_3;
#line 1098 "llds_out_file.m"
          }
#line 1098 "llds_out_file.m"
        else
#line 1101 "llds_out_file.m"
          {
#line 1101 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Label_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 0)));
#line 1101 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Labels_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 1)));
#line 1101 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_51_51;
#line 1101 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_52_52;
#line 1101 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_53_53;
#line 1101 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoLayoutMap_57_57;

#line 1124 "llds_out_file.m"
            if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Label_25)) == (MR_mktag((MR_Integer) 1))))
#line 1125 "llds_out_file.m"
              {
#line 1126 "llds_out_file.m"
                {
#line 1126 "llds_out_file.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_out.llds_out_file", (MR_String) "predicate \140ll_backend.llds_out.llds_out_file.group_init_c_labels\'/10", (MR_String) "entry label");
#line 1126 "llds_out_file.m"
                  return;
                }
#line 1125 "llds_out_file.m"
              }
#line 1124 "llds_out_file.m"
            else
#line 1103 "llds_out_file.m"
              {
#line 1103 "llds_out_file.m"
                MR_Integer ll_backend__llds_out__llds_out_file__LabelNum_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Label_25, (MR_Integer) 0)));
#line 1103 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__ProcLabel_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Label_25, (MR_Integer) 1)));
#line 1104 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__Slot_33;
#line 1104 "llds_out_file.m"
                MR_Box ll_backend__llds_out__llds_out_file__conv0_Slot_33;

#line 1104 "llds_out_file.m"
                {
#line 1104 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0, ll_backend__llds_out__llds_out_file__HeadVar__1_1, ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_25)), &ll_backend__llds_out__llds_out_file__conv0_Slot_33);
                }
#line 1104 "llds_out_file.m"
                if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1104 "llds_out_file.m"
                  {
#line 1104 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__Slot_33 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv0_Slot_33);
#line 1104 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__succeeded = MR_TRUE;
#line 1104 "llds_out_file.m"
                  }
#line 1104 "llds_out_file.m"
                if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1105 "llds_out_file.m"
                  {
#line 1105 "llds_out_file.m"
                    MR_Word ll_backend__llds_out__llds_out_file__ArrayName_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Slot_33, (MR_Integer) 0)));
#line 1105 "llds_out_file.m"
                    MR_Integer ll_backend__llds_out__llds_out_file__SlotNum_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Slot_33, (MR_Integer) 1)));
#line 1106 "llds_out_file.m"
                    MR_Word ll_backend__llds_out__llds_out_file__Vars_36;

#line 1106 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__ArrayName_34)) == (MR_mktag((MR_Integer) 1)));
#line 1106 "llds_out_file.m"
                    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1106 "llds_out_file.m"
                      {
#line 1106 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__Vars_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__ArrayName_34, (MR_Integer) 0)));
#line 1107 "llds_out_file.m"
                        {
#line 1107 "llds_out_file.m"
                          MR_Tuple ll_backend__llds_out__llds_out_file__Pair_37;

#line 1107 "llds_out_file.m"
                          {
#line 1107 "llds_out_file.m"
                            ll_backend__llds_out__llds_out_file__Pair_37 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1107 "llds_out_file.m"
                            MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Pair_37, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__LabelNum_31));
#line 1107 "llds_out_file.m"
                            MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Pair_37, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__SlotNum_35));
#line 1107 "llds_out_file.m"
                          }
#line 1111 "llds_out_file.m"
#line 1111 "llds_out_file.m"
                          switch (ll_backend__llds_out__llds_out_file__Vars_36) {
#line 1111 "llds_out_file.m"
                            default: /*NOTREACHED*/ MR_assert(0);
#line 1111 "llds_out_file.m"
                            case (MR_Integer) 2:
#line 1115 "llds_out_file.m"
                              {
#line 1116 "llds_out_file.m"
                                {
#line 1116 "llds_out_file.m"
                                  mercury__multi_map__set_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_3[0], ((MR_Box) (ll_backend__llds_out__llds_out_file__ProcLabel_32)), ((MR_Box) (ll_backend__llds_out__llds_out_file__Pair_37)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_0_9, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_51_51);
                                }
#line 1115 "llds_out_file.m"
                                ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_53_53 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_0_5;
#line 1115 "llds_out_file.m"
                                ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_52_52 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_0_7;
#line 1115 "llds_out_file.m"
                              }
#line 1111 "llds_out_file.m"
                              break;
#line 1111 "llds_out_file.m"
                            case (MR_Integer) 0:
#line 1109 "llds_out_file.m"
                              {
#line 1110 "llds_out_file.m"
                                {
#line 1110 "llds_out_file.m"
                                  mercury__multi_map__set_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_3[0], ((MR_Box) (ll_backend__llds_out__llds_out_file__ProcLabel_32)), ((MR_Box) (ll_backend__llds_out__llds_out_file__Pair_37)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_0_5, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_53_53);
                                }
#line 1109 "llds_out_file.m"
                                ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_52_52 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_0_7;
#line 1109 "llds_out_file.m"
                                ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_51_51 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_0_9;
#line 1109 "llds_out_file.m"
                              }
#line 1111 "llds_out_file.m"
                              break;
#line 1111 "llds_out_file.m"
                            case (MR_Integer) 1:
#line 1112 "llds_out_file.m"
                              {
#line 1113 "llds_out_file.m"
                                {
#line 1113 "llds_out_file.m"
                                  mercury__multi_map__set_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_3[0], ((MR_Box) (ll_backend__llds_out__llds_out_file__ProcLabel_32)), ((MR_Box) (ll_backend__llds_out__llds_out_file__Pair_37)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_0_7, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_52_52);
                                }
#line 1112 "llds_out_file.m"
                                ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_53_53 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_0_5;
#line 1112 "llds_out_file.m"
                                ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_51_51 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_0_9;
#line 1112 "llds_out_file.m"
                              }
#line 1111 "llds_out_file.m"
                              break;
#line 1111 "llds_out_file.m"
                          }
#line 1107 "llds_out_file.m"
                        }
#line 1106 "llds_out_file.m"
                      }
#line 1106 "llds_out_file.m"
                    else
#line 1119 "llds_out_file.m"
                      {
#line 1119 "llds_out_file.m"
                        {
#line 1119 "llds_out_file.m"
                          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_out.llds_out_file", (MR_String) "predicate \140ll_backend.llds_out.llds_out_file.group_init_c_labels\'/10", (MR_String) "bad slot type");
#line 1119 "llds_out_file.m"
                          return;
                        }
#line 1119 "llds_out_file.m"
                      }
#line 1105 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoLayoutMap_57_57 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoLayoutMap_0_3;
#line 1105 "llds_out_file.m"
                  }
#line 1104 "llds_out_file.m"
                else
#line 1122 "llds_out_file.m"
                  {
#line 1122 "llds_out_file.m"
                    {
#line 1122 "llds_out_file.m"
                      mercury__multi_map__set_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (ll_backend__llds_out__llds_out_file__ProcLabel_32)), ((MR_Box) (ll_backend__llds_out__llds_out_file__LabelNum_31)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoLayoutMap_0_3, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoLayoutMap_57_57);
                    }
#line 1122 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_51_51 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_0_9;
#line 1122 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_52_52 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_0_7;
#line 1122 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_53_53 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_0_5;
#line 1122 "llds_out_file.m"
                  }
#line 1103 "llds_out_file.m"
              }
#line 1128 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 1128 "llds_out_file.m"
            {
#line 1128 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_file__Labels_26;
#line 1128 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoLayoutMap_0__tmp_copy_3 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoLayoutMap_57_57;
#line 1128 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_0__tmp_copy_5 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_53_53;
#line 1128 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_0__tmp_copy_7 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_52_52;
#line 1128 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_0__tmp_copy_9 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_51_51;

#line 1128 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_0_9 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_0__tmp_copy_9;
#line 1128 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_0_7 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_0__tmp_copy_7;
#line 1128 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_0_5 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_0__tmp_copy_5;
#line 1128 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoLayoutMap_0_3 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoLayoutMap_0__tmp_copy_3;
#line 1128 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__2_2 = ll_backend__llds_out__llds_out_file__HeadVar__2__tmp_copy_2;
#line 1128 "llds_out_file.m"
            }
#line 1128 "llds_out_file.m"
            continue;
#line 1101 "llds_out_file.m"
          }
#line 1098 "llds_out_file.m"
      }
#line 1098 "llds_out_file.m"
      break;
#line 1098 "llds_out_file.m"
    }
#line 1089 "llds_out_file.m"
}

#line 1086 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0_5(
#line 1086 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1086 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1086 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1086 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 1086 "llds_out_file.m"
{
#line 1086 "llds_out_file.m"
  {
#line 1086 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 1086 "llds_out_file.m"
    {
#line 1086 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_group_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
    }
#line 1086 "llds_out_file.m"
  }
#line 1086 "llds_out_file.m"
}

#line 1082 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0_4(
#line 1082 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1082 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1082 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1082 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 1082 "llds_out_file.m"
{
#line 1082 "llds_out_file.m"
  {
#line 1082 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 1082 "llds_out_file.m"
    {
#line 1082 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_group_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
    }
#line 1082 "llds_out_file.m"
  }
#line 1082 "llds_out_file.m"
}

#line 1078 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0_3(
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
    }
#line 1078 "llds_out_file.m"
  }
#line 1078 "llds_out_file.m"
}

#line 1074 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0_2(
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
      ll_backend__llds_out__llds_out_file__output_c_internal_label_no_layout_init_group_3_p_0(((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
    }
#line 1074 "llds_out_file.m"
  }
#line 1074 "llds_out_file.m"
}

#line 1063 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0_1(
#line 1063 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1063 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1063 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1063 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 1063 "llds_out_file.m"
{
#line 1063 "llds_out_file.m"
  {
#line 1063 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 1063 "llds_out_file.m"
    {
#line 1063 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_c_entry_label_init_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
    }
#line 1063 "llds_out_file.m"
  }
#line 1063 "llds_out_file.m"
}

#line 1058 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0(
#line 1058 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_6,
#line 1058 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__EntryLabels_7,
#line 1058 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__InternalLabels_8)
#line 1058 "llds_out_file.m"
{
#line 1061 "llds_out_file.m"
  {
#line 1061 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 1061 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85;
#line 1061 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_86_86;
#line 1061 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_87_87;
#line 1061 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeInfo_88_88;
#line 1061 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeInfo_96_96;
#line 1061 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__EntryLabelToLayoutMap_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 4)));
#line 1061 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__InternalLabelToLayoutMap_11;
#line 1061 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__NoLayoutInternalMap_12;
#line 1061 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__NoVarLayoutInternalMap_13;
#line 1061 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__SVarLayoutInternalMap_14;
#line 1061 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__LVarLayoutInternalMap_15;
#line 1061 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__NoLayoutInternalList_16;
#line 1061 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__NoVarLayoutInternalList_17;
#line 1061 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__SVarLayoutInternalList_18;
#line 1061 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__LVarLayoutInternalList_19;
#line 1061 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_22_22;
#line 1061 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_24_24;
#line 1061 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_25_25;
#line 1061 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_26_26;
#line 1061 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_27_27;
#line 1061 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_30_30;
#line 1061 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_33_33;
#line 1061 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_36_36;
#line 1062 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 0)));
#line 1062 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_40_40 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 1)));
#line 1062 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_41_41 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 2)));
#line 1062 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 3)));
#line 1062 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 5)));
#line 1062 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 6)));
#line 1062 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_45_45 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 1062 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1062 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1062 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1062 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1062 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1062 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1062 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1062 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 1062 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 1062 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 1062 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 1062 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 1062 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 1062 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 8)));
#line 1063 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_IO_23_23;
#line 1066 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_60_60;
#line 1066 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_61_61;
#line 1066 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_62_62;
#line 1066 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_63_63;
#line 1066 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_64_64;
#line 1066 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_65_65;
#line 1066 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_66_66;
#line 1066 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_67_67;
#line 1066 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_68_68;
#line 1066 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_69_69;
#line 1066 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_70_70;
#line 1066 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_71_71;
#line 1066 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_72_72;
#line 1066 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_73_73;
#line 1066 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_74_74;
#line 1066 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_75_75;
#line 1066 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_76_76;
#line 1066 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_77_77;
#line 1066 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_78_78;
#line 1066 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_79_79;
#line 1066 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_80_80;
#line 1074 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_IO_29_29;
#line 1078 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_IO_31_31;
#line 1082 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv3_STATE_VARIABLE_IO_34_34;
#line 1086 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv4_STATE_VARIABLE_IO_21;

#line 1063 "llds_out_file.m"
    {
#line 1063 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1063 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_22_22, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_4[4]));
#line 1063 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_22_22, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0_1));
#line 1063 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1063 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_22_22, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__EntryLabelToLayoutMap_10));
#line 1063 "llds_out_file.m"
    }
#line 7353 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 1063 "llds_out_file.m"
    {
#line 1063 "llds_out_file.m"
      mercury__list__foldl_4_p_2((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85, ll_backend__llds_out__llds_out_file__V_22_22, ll_backend__llds_out__llds_out_file__EntryLabels_7, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_IO_23_23);
    }
#line 1066 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 0)));
#line 1066 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_61_61 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 1)));
#line 1066 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_62_62 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 2)));
#line 1066 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__InternalLabelToLayoutMap_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 3)));
#line 1066 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 4)));
#line 1066 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 5)));
#line 1066 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 6)));
#line 1066 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_66_66 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 1066 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_67_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1066 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_68_68 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1066 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_69_69 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1066 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_70_70 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1066 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1066 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1066 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1066 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 1066 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_75_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 1066 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_76_76 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 1066 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_77_77 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 1066 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_78_78 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 1066 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_79_79 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 1066 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 8)));
#line 7404 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_86_86 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0;
#line 7406 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_87_87 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1068 "llds_out_file.m"
    {
#line 1068 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_24_24 = mercury__multi_map__init_0_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_86_86, ll_backend__llds_out__llds_out_file__TypeCtorInfo_87_87);
    }
#line 7413 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeInfo_88_88 = (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_3[0];
#line 1069 "llds_out_file.m"
    {
#line 1069 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_25_25 = mercury__multi_map__init_0_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_86_86, ll_backend__llds_out__llds_out_file__TypeInfo_88_88);
    }
#line 1070 "llds_out_file.m"
    {
#line 1070 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_26_26 = mercury__multi_map__init_0_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_86_86, ll_backend__llds_out__llds_out_file__TypeInfo_88_88);
    }
#line 1071 "llds_out_file.m"
    {
#line 1071 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_27_27 = mercury__multi_map__init_0_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_86_86, ll_backend__llds_out__llds_out_file__TypeInfo_88_88);
    }
#line 1067 "llds_out_file.m"
    {
#line 1067 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__group_init_c_labels_10_p_0(ll_backend__llds_out__llds_out_file__InternalLabelToLayoutMap_11, ll_backend__llds_out__llds_out_file__InternalLabels_8, ll_backend__llds_out__llds_out_file__V_24_24, &ll_backend__llds_out__llds_out_file__NoLayoutInternalMap_12, ll_backend__llds_out__llds_out_file__V_25_25, &ll_backend__llds_out__llds_out_file__NoVarLayoutInternalMap_13, ll_backend__llds_out__llds_out_file__V_26_26, &ll_backend__llds_out__llds_out_file__SVarLayoutInternalMap_14, ll_backend__llds_out__llds_out_file__V_27_27, &ll_backend__llds_out__llds_out_file__LVarLayoutInternalMap_15);
    }
#line 1073 "llds_out_file.m"
    {
#line 1073 "llds_out_file.m"
      mercury__multi_map__to_assoc_list_2_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_86_86, ll_backend__llds_out__llds_out_file__TypeCtorInfo_87_87, ll_backend__llds_out__llds_out_file__NoLayoutInternalMap_12, &ll_backend__llds_out__llds_out_file__NoLayoutInternalList_16);
    }
#line 1074 "llds_out_file.m"
    {
#line 1074 "llds_out_file.m"
      mercury__list__foldl_4_p_2((MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_2[0], ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85, (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_2[8], ll_backend__llds_out__llds_out_file__NoLayoutInternalList_16, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_IO_29_29);
    }
#line 1077 "llds_out_file.m"
    {
#line 1077 "llds_out_file.m"
      mercury__multi_map__to_assoc_list_2_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_86_86, ll_backend__llds_out__llds_out_file__TypeInfo_88_88, ll_backend__llds_out__llds_out_file__NoVarLayoutInternalMap_13, &ll_backend__llds_out__llds_out_file__NoVarLayoutInternalList_17);
    }
#line 1078 "llds_out_file.m"
    {
#line 1078 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1078 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_30_30, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_5[3]));
#line 1078 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_30_30, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0_3));
#line 1078 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1078 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_30_30, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_6));
#line 1078 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_30_30, 4) = ((MR_Box) ((MR_String) "_nvi"));
#line 1078 "llds_out_file.m"
    }
#line 7466 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeInfo_96_96 = (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_2[1];
#line 1078 "llds_out_file.m"
    {
#line 1078 "llds_out_file.m"
      mercury__list__foldl_4_p_2(ll_backend__llds_out__llds_out_file__TypeInfo_96_96, ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85, ll_backend__llds_out__llds_out_file__V_30_30, ll_backend__llds_out__llds_out_file__NoVarLayoutInternalList_17, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_IO_31_31);
    }
#line 1081 "llds_out_file.m"
    {
#line 1081 "llds_out_file.m"
      mercury__multi_map__to_assoc_list_2_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_86_86, ll_backend__llds_out__llds_out_file__TypeInfo_88_88, ll_backend__llds_out__llds_out_file__SVarLayoutInternalMap_14, &ll_backend__llds_out__llds_out_file__SVarLayoutInternalList_18);
    }
#line 1082 "llds_out_file.m"
    {
#line 1082 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1082 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_33_33, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_5[3]));
#line 1082 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_33_33, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0_4));
#line 1082 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1082 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_33_33, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_6));
#line 1082 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_33_33, 4) = ((MR_Box) ((MR_String) "_svi"));
#line 1082 "llds_out_file.m"
    }
#line 1082 "llds_out_file.m"
    {
#line 1082 "llds_out_file.m"
      mercury__list__foldl_4_p_2(ll_backend__llds_out__llds_out_file__TypeInfo_96_96, ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85, ll_backend__llds_out__llds_out_file__V_33_33, ll_backend__llds_out__llds_out_file__SVarLayoutInternalList_18, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv3_STATE_VARIABLE_IO_34_34);
    }
#line 1085 "llds_out_file.m"
    {
#line 1085 "llds_out_file.m"
      mercury__multi_map__to_assoc_list_2_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_86_86, ll_backend__llds_out__llds_out_file__TypeInfo_88_88, ll_backend__llds_out__llds_out_file__LVarLayoutInternalMap_15, &ll_backend__llds_out__llds_out_file__LVarLayoutInternalList_19);
    }
#line 1086 "llds_out_file.m"
    {
#line 1086 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1086 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_36_36, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_5[3]));
#line 1086 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_36_36, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0_5));
#line 1086 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_36_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1086 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_36_36, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_6));
#line 1086 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_36_36, 4) = ((MR_Box) ((MR_String) "_lvi"));
#line 1086 "llds_out_file.m"
    }
#line 1086 "llds_out_file.m"
    {
#line 1086 "llds_out_file.m"
      mercury__list__foldl_4_p_2(ll_backend__llds_out__llds_out_file__TypeInfo_96_96, ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85, ll_backend__llds_out__llds_out_file__V_36_36, ll_backend__llds_out__llds_out_file__LVarLayoutInternalList_19, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv4_STATE_VARIABLE_IO_21);
    }
#line 1061 "llds_out_file.m"
  }
#line 1058 "llds_out_file.m"
}

#line 1027 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_entry_label_decl_6_p_0(
#line 1027 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file___Info_7,
#line 1027 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Label_8,
#line 1027 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_17,
#line 1027 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_18)
#line 1027 "llds_out_file.m"
{
#line 1030 "llds_out_file.m"
  {
#line 1030 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 1030 "llds_out_file.m"
    {
#line 1030 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_114_101_99_111_114_100_95_101_110_116_114_121_95_108_97_98_101_108_95_100_101_99_108_95_95_91_49_93_95_48_6_p_0(ll_backend__llds_out__llds_out_file__Label_8, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_17, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_18);
    }
#line 1030 "llds_out_file.m"
  }
#line 1027 "llds_out_file.m"
}

#line 1020 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__insert_internal_label_code_addr_decl_4_p_0(
#line 1020 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ProcLabel_5,
#line 1020 "llds_out_file.m"
  MR_Integer ll_backend__llds_out__llds_out_file__LabelNum_6,
#line 1020 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_9,
#line 1020 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_10)
#line 1020 "llds_out_file.m"
{
#line 1023 "llds_out_file.m"
  {
#line 1023 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 1023 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__DeclId_8;
#line 1023 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_11_11;
#line 1023 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_12_12;

#line 1024 "llds_out_file.m"
    {
#line 1024 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1024 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_12_12, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__LabelNum_6));
#line 1024 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_12_12, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__ProcLabel_5));
#line 1024 "llds_out_file.m"
    }
#line 1024 "llds_out_file.m"
    {
#line 1024 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1024 "llds_out_file.m"
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__V_11_11, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__V_12_12));
#line 1024 "llds_out_file.m"
    }
#line 1024 "llds_out_file.m"
    {
#line 1024 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__DeclId_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1024 "llds_out_file.m"
      MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_file__DeclId_8, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__V_11_11));
#line 1024 "llds_out_file.m"
    }
#line 1025 "llds_out_file.m"
    {
#line 1025 "llds_out_file.m"
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__llds_out__llds_out_file__DeclId_8, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_9, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_10);
    }
#line 1023 "llds_out_file.m"
  }
#line 1020 "llds_out_file.m"
}

#line 1017 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_internal_label_decl_group_6_p_0_2(
#line 1017 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1017 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1017 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1017 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 1017 "llds_out_file.m"
{
#line 1017 "llds_out_file.m"
  {
#line 1017 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 1017 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_DeclSet_10;

#line 1017 "llds_out_file.m"
    {
#line 1017 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__insert_internal_label_code_addr_decl_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Integer) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_DeclSet_10);
    }
#line 1017 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_DeclSet_10));
#line 1017 "llds_out_file.m"
  }
#line 1017 "llds_out_file.m"
}

#line 1015 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_internal_label_decl_group_6_p_0_1(
#line 1015 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1015 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1015 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1015 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 1015 "llds_out_file.m"
{
#line 1015 "llds_out_file.m"
  {
#line 1015 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 1015 "llds_out_file.m"
    {
#line 1015 "llds_out_file.m"
      mercury__io__write_int_3_p_0(((MR_Integer) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
    }
#line 1015 "llds_out_file.m"
  }
#line 1015 "llds_out_file.m"
}

#line 1005 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_internal_label_decl_group_6_p_0(
#line 1005 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ProcLabel_7,
#line 1005 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__LabelNums_8,
#line 1005 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_11,
#line 1005 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_12)
#line 1005 "llds_out_file.m"
{
#line 1009 "llds_out_file.m"
  {
#line 1009 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 1009 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_31_31;
#line 1009 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__V_17_17;
#line 1009 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_29_29;
#line 1017 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_DeclSet_12;

#line 1010 "llds_out_file.m"
    {
#line 1010 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "MR_decl_label");
    }
#line 7709 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_31_31 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1011 "llds_out_file.m"
    {
#line 1011 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_17_17 = mercury__list__length_1_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_31_31, ll_backend__llds_out__llds_out_file__LabelNums_8);
    }
#line 1011 "llds_out_file.m"
    {
#line 1011 "llds_out_file.m"
      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_file__V_17_17);
    }
#line 1012 "llds_out_file.m"
    {
#line 1012 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "(");
    }
#line 1013 "llds_out_file.m"
    {
#line 1013 "llds_out_file.m"
      backend_libs__name_mangle__output_proc_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_file__ProcLabel_7);
    }
#line 1014 "llds_out_file.m"
    {
#line 1014 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1015 "llds_out_file.m"
    {
#line 1015 "llds_out_file.m"
      mercury__io__write_list_5_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_31_31, ll_backend__llds_out__llds_out_file__LabelNums_8, (MR_String) ",", (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_2[7]);
    }
#line 1016 "llds_out_file.m"
    {
#line 1016 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) ")\n");
    }
#line 1017 "llds_out_file.m"
    {
#line 1017 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1017 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_29_29, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_4[3]));
#line 1017 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_29_29, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_record_internal_label_decl_group_6_p_0_2));
#line 1017 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_29_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1017 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_29_29, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__ProcLabel_7));
#line 1017 "llds_out_file.m"
    }
#line 1017 "llds_out_file.m"
    {
#line 1017 "llds_out_file.m"
      mercury__list__foldl_4_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_31_31, (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_1[0], ll_backend__llds_out__llds_out_file__V_29_29, ll_backend__llds_out__llds_out_file__LabelNums_8, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_11)), &ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_DeclSet_12);
    }
#line 1017 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_12 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_DeclSet_12);
#line 1009 "llds_out_file.m"
  }
#line 1005 "llds_out_file.m"
}

#line 1002 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_internal_label_decls_5_p_0_2(
#line 1002 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1002 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1002 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1002 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 1002 "llds_out_file.m"
{
#line 1002 "llds_out_file.m"
  {
#line 1002 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 1002 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv3_STATE_VARIABLE_DeclSet_10;

#line 1002 "llds_out_file.m"
    {
#line 1002 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__insert_internal_label_code_addr_decl_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Integer) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv3_STATE_VARIABLE_DeclSet_10);
    }
#line 1002 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv3_STATE_VARIABLE_DeclSet_10));
#line 1002 "llds_out_file.m"
  }
#line 1002 "llds_out_file.m"
}

#line 1000 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_internal_label_decls_5_p_0_1(
#line 1000 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1000 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1000 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1000 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 1000 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 1000 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5)
#line 1000 "llds_out_file.m"
{
#line 1000 "llds_out_file.m"
  {
#line 1000 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 1000 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_DeclSet_12;

#line 1000 "llds_out_file.m"
    {
#line 1000 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_record_internal_label_decl_group_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_DeclSet_12);
    }
#line 1000 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_DeclSet_12));
#line 1000 "llds_out_file.m"
  }
#line 1000 "llds_out_file.m"
}

#line 991 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_internal_label_decls_5_p_0(
#line 991 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 991 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_13,
#line 991 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_14)
#line 991 "llds_out_file.m"
{
#line 994 "llds_out_file.m"
  {
#line 994 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 994 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_22_22 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 994 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeInfo_29_29;
#line 994 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ProcLabel_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 994 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__RevLabelNums_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 994 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__LabelNums_10;
#line 994 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__LabelNumChunks_12;
#line 994 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_17_17;
#line 994 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_18_18;
#line 994 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_20_20;
#line 1000 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_DeclSet_18_18;
#line 1000 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_IO_16;
#line 1002 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv4_STATE_VARIABLE_DeclSet_14;

#line 995 "llds_out_file.m"
    {
#line 995 "llds_out_file.m"
      mercury__list__reverse_2_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_22_22, ll_backend__llds_out__llds_out_file__RevLabelNums_7, &ll_backend__llds_out__llds_out_file__LabelNums_10);
    }
#line 999 "llds_out_file.m"
    {
#line 999 "llds_out_file.m"
      mercury__list__chunk_3_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_22_22, ll_backend__llds_out__llds_out_file__LabelNums_10, (MR_Integer) 10, &ll_backend__llds_out__llds_out_file__LabelNumChunks_12);
    }
#line 1000 "llds_out_file.m"
    {
#line 1000 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1000 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_17_17, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_6[11]));
#line 1000 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_17_17, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_record_internal_label_decls_5_p_0_1));
#line 1000 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1000 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_17_17, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__ProcLabel_6));
#line 1000 "llds_out_file.m"
    }
#line 7904 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeInfo_29_29 = (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_1[0];
#line 1000 "llds_out_file.m"
    {
#line 1000 "llds_out_file.m"
      mercury__list__foldl2_6_p_2((MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_1[2], ll_backend__llds_out__llds_out_file__TypeInfo_29_29, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__llds_out__llds_out_file__V_17_17, ll_backend__llds_out__llds_out_file__LabelNumChunks_12, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_13)), &ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_DeclSet_18_18, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_IO_16);
    }
#line 1000 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_18_18 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_DeclSet_18_18);
#line 1002 "llds_out_file.m"
    {
#line 1002 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1002 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_20_20, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_4[3]));
#line 1002 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_20_20, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_record_internal_label_decls_5_p_0_2));
#line 1002 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1002 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_20_20, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__ProcLabel_6));
#line 1002 "llds_out_file.m"
    }
#line 1002 "llds_out_file.m"
    {
#line 1002 "llds_out_file.m"
      mercury__list__foldl_4_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_22_22, ll_backend__llds_out__llds_out_file__TypeInfo_29_29, ll_backend__llds_out__llds_out_file__V_20_20, ll_backend__llds_out__llds_out_file__LabelNums_10, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_18_18)), &ll_backend__llds_out__llds_out_file__conv4_STATE_VARIABLE_DeclSet_14);
    }
#line 1002 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_14 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv4_STATE_VARIABLE_DeclSet_14);
#line 994 "llds_out_file.m"
  }
#line 991 "llds_out_file.m"
}

#line 977 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__group_decl_c_labels_3_p_0(
#line 977 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 977 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabelMap_0_2,
#line 977 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabelMap_3)
#line 977 "llds_out_file.m"
{
#line 980 "llds_out_file.m"
  while (MR_TRUE)
#line 980 "llds_out_file.m"
    {
#line 980 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 980 "llds_out_file.m"
      {
#line 980 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 980 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 980 "llds_out_file.m"
          *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabelMap_3 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabelMap_0_2;
#line 980 "llds_out_file.m"
        else
#line 981 "llds_out_file.m"
          {
#line 981 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Label_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 981 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Labels_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 981 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabelMap_19_19;

#line 985 "llds_out_file.m"
            if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Label_7)) == (MR_mktag((MR_Integer) 1))))
#line 986 "llds_out_file.m"
              {
#line 987 "llds_out_file.m"
                {
#line 987 "llds_out_file.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_out.llds_out_file", (MR_String) "predicate \140ll_backend.llds_out.llds_out_file.group_decl_c_labels\'/3", (MR_String) "entry label");
#line 987 "llds_out_file.m"
                  return;
                }
#line 986 "llds_out_file.m"
              }
#line 985 "llds_out_file.m"
            else
#line 983 "llds_out_file.m"
              {
#line 983 "llds_out_file.m"
                MR_Integer ll_backend__llds_out__llds_out_file__LabelNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Label_7, (MR_Integer) 0)));
#line 983 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__ProcLabel_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Label_7, (MR_Integer) 1)));

#line 984 "llds_out_file.m"
                {
#line 984 "llds_out_file.m"
                  mercury__multi_map__set_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (ll_backend__llds_out__llds_out_file__ProcLabel_11)), ((MR_Box) (ll_backend__llds_out__llds_out_file__LabelNum_10)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabelMap_0_2, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabelMap_19_19);
                }
#line 983 "llds_out_file.m"
              }
#line 989 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 989 "llds_out_file.m"
            {
#line 989 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__Labels_8;
#line 989 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabelMap_0__tmp_copy_2 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabelMap_19_19;

#line 989 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabelMap_0_2 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabelMap_0__tmp_copy_2;
#line 989 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 989 "llds_out_file.m"
            }
#line 989 "llds_out_file.m"
            continue;
#line 981 "llds_out_file.m"
          }
#line 980 "llds_out_file.m"
      }
#line 980 "llds_out_file.m"
      break;
#line 980 "llds_out_file.m"
    }
#line 977 "llds_out_file.m"
}

#line 974 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_c_label_decls_7_p_0_2(
#line 974 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 974 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 974 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 974 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 974 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 974 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5)
#line 974 "llds_out_file.m"
{
#line 974 "llds_out_file.m"
  {
#line 974 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 974 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv3_STATE_VARIABLE_DeclSet_18;

#line 974 "llds_out_file.m"
    {
#line 974 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_record_entry_label_decl_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv3_STATE_VARIABLE_DeclSet_18);
    }
#line 974 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv3_STATE_VARIABLE_DeclSet_18));
#line 974 "llds_out_file.m"
  }
#line 974 "llds_out_file.m"
}

#line 972 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_c_label_decls_7_p_0_1(
#line 972 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 972 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 972 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 972 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 972 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 972 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5)
#line 972 "llds_out_file.m"
{
#line 972 "llds_out_file.m"
  {
#line 972 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 972 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_DeclSet_14;

#line 972 "llds_out_file.m"
    {
#line 972 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_record_internal_label_decls_5_p_0(((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_DeclSet_14);
    }
#line 972 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_DeclSet_14));
#line 972 "llds_out_file.m"
  }
#line 972 "llds_out_file.m"
}

#line 964 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_c_label_decls_7_p_0(
#line 964 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_8,
#line 964 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__EntryLabels_9,
#line 964 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__InternalLabels_10,
#line 964 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_15,
#line 964 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_16)
#line 964 "llds_out_file.m"
{
#line 969 "llds_out_file.m"
  {
#line 969 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 969 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_26_26 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0;
#line 969 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_27_27 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 969 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeInfo_34_34;
#line 969 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_35_35;
#line 969 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__InternalLabelMap_13;
#line 969 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__InternalLabelList_14;
#line 969 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_19_19;
#line 969 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_21_21;
#line 969 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_23_23;
#line 972 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_DeclSet_21_21;
#line 972 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_IO_22_22;
#line 974 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv5_STATE_VARIABLE_DeclSet_16;
#line 974 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv4_STATE_VARIABLE_IO_18;

#line 970 "llds_out_file.m"
    {
#line 970 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_19_19 = mercury__multi_map__init_0_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_26_26, ll_backend__llds_out__llds_out_file__TypeCtorInfo_27_27);
    }
#line 970 "llds_out_file.m"
    {
#line 970 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__group_decl_c_labels_3_p_0(ll_backend__llds_out__llds_out_file__InternalLabels_10, ll_backend__llds_out__llds_out_file__V_19_19, &ll_backend__llds_out__llds_out_file__InternalLabelMap_13);
    }
#line 971 "llds_out_file.m"
    {
#line 971 "llds_out_file.m"
      mercury__multi_map__to_assoc_list_2_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_26_26, ll_backend__llds_out__llds_out_file__TypeCtorInfo_27_27, ll_backend__llds_out__llds_out_file__InternalLabelMap_13, &ll_backend__llds_out__llds_out_file__InternalLabelList_14);
    }
#line 8166 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeInfo_34_34 = (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_1[0];
#line 8168 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_35_35 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 972 "llds_out_file.m"
    {
#line 972 "llds_out_file.m"
      mercury__list__foldl2_6_p_2((MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_2[0], ll_backend__llds_out__llds_out_file__TypeInfo_34_34, ll_backend__llds_out__llds_out_file__TypeCtorInfo_35_35, (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_2[6], ll_backend__llds_out__llds_out_file__InternalLabelList_14, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_15)), &ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_DeclSet_21_21, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_IO_22_22);
    }
#line 972 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_21_21 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_DeclSet_21_21);
#line 974 "llds_out_file.m"
    {
#line 974 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 974 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_23_23, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_6[10]));
#line 974 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_23_23, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_record_c_label_decls_7_p_0_2));
#line 974 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 974 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_23_23, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_8));
#line 974 "llds_out_file.m"
    }
#line 974 "llds_out_file.m"
    {
#line 974 "llds_out_file.m"
      mercury__list__foldl2_6_p_2((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ll_backend__llds_out__llds_out_file__TypeInfo_34_34, ll_backend__llds_out__llds_out_file__TypeCtorInfo_35_35, ll_backend__llds_out__llds_out_file__V_23_23, ll_backend__llds_out__llds_out_file__EntryLabels_9, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_21_21)), &ll_backend__llds_out__llds_out_file__conv5_STATE_VARIABLE_DeclSet_16, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv4_STATE_VARIABLE_IO_18);
    }
#line 974 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_16 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv5_STATE_VARIABLE_DeclSet_16);
#line 969 "llds_out_file.m"
  }
#line 964 "llds_out_file.m"
}

#line 928 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_foreign_decl_or_code_7_p_0(
#line 928 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_8,
#line 928 "llds_out_file.m"
  MR_String ll_backend__llds_out__llds_out_file__PragmaType_9,
#line 928 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Lang_10,
#line 928 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__LiteralOrInclude_11,
#line 928 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Context_12)
#line 928 "llds_out_file.m"
{
#line 933 "llds_out_file.m"
  {
#line 933 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 933 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__AutoComments_14 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 933 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__LineNumbers_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 934 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 0)));
#line 934 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_42_42 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 1)));
#line 934 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_43_43 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 2)));
#line 934 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 3)));
#line 934 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 4)));
#line 934 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 5)));
#line 934 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 6)));
#line 934 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 934 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 934 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 934 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 934 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 934 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 934 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 934 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 934 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 934 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 934 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 934 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 934 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 8)));

#line 937 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__succeeded = (ll_backend__llds_out__llds_out_file__AutoComments_14 == (MR_Integer) 1);
#line 937 "llds_out_file.m"
    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 938 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__succeeded = (ll_backend__llds_out__llds_out_file__LineNumbers_15 == (MR_Integer) 1);
#line 936 "llds_out_file.m"
    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 940 "llds_out_file.m"
      {
#line 940 "llds_out_file.m"
        {
#line 940 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "/* ");
        }
#line 941 "llds_out_file.m"
        {
#line 941 "llds_out_file.m"
          parse_tree__prog_out__write_context_3_p_0(ll_backend__llds_out__llds_out_file__Context_12);
        }
#line 942 "llds_out_file.m"
        {
#line 942 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) " pragma ");
        }
#line 943 "llds_out_file.m"
        {
#line 943 "llds_out_file.m"
          mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__PragmaType_9);
        }
#line 944 "llds_out_file.m"
        {
#line 944 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "(");
        }
#line 945 "llds_out_file.m"
        {
#line 945 "llds_out_file.m"
          mercury__io__write_3_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, ((MR_Box) (ll_backend__llds_out__llds_out_file__Lang_10)));
        }
#line 946 "llds_out_file.m"
        {
#line 946 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) ") */\n");
        }
#line 940 "llds_out_file.m"
      }
#line 936 "llds_out_file.m"
    else
#line 936 "llds_out_file.m"
      {
#line 936 "llds_out_file.m"
      }
#line 954 "llds_out_file.m"
    if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__LiteralOrInclude_11)) == (MR_mktag((MR_Integer) 1))))
#line 955 "llds_out_file.m"
      {
#line 955 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__IncludeFileName_17 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__LiteralOrInclude_11, (MR_Integer) 0)));
#line 955 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__SourceFileName_18 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 2)));
#line 955 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__IncludePath_19;
#line 955 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_33_33;
#line 956 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 0)));
#line 956 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__V_84_84 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 1)));
#line 956 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 3)));
#line 956 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 4)));
#line 956 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 5)));
#line 956 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 6)));
#line 956 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_89_89 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 956 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_90_90 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 956 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_91_91 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 956 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_92_92 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 956 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_93_93 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 956 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_94_94 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 956 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_95_95 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 956 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_96_96 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 956 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_97_97 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 956 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_98_98 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 956 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_99_99 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 956 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_100_100 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 956 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_101_101 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 956 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_102_102 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 956 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 8)));

#line 957 "llds_out_file.m"
        {
#line 957 "llds_out_file.m"
          parse_tree__file_names__make_include_file_path_3_p_0(ll_backend__llds_out__llds_out_file__SourceFileName_18, ll_backend__llds_out__llds_out_file__IncludeFileName_17, &ll_backend__llds_out__llds_out_file__IncludePath_19);
        }
#line 958 "llds_out_file.m"
        {
#line 958 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 958 "llds_out_file.m"
          MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_33_33, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__IncludePath_19));
#line 958 "llds_out_file.m"
          MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_33_33, 1) = ((MR_Box) ((MR_Integer) 1));
#line 958 "llds_out_file.m"
        }
#line 958 "llds_out_file.m"
        {
#line 958 "llds_out_file.m"
          ll_backend__llds_out__llds_out_util__output_set_line_num_4_p_0(ll_backend__llds_out__llds_out_file__Info_8, ll_backend__llds_out__llds_out_file__V_33_33);
        }
#line 959 "llds_out_file.m"
        {
#line 959 "llds_out_file.m"
          libs__file_util__write_include_file_contents_3_p_0(ll_backend__llds_out__llds_out_file__IncludePath_19);
        }
#line 955 "llds_out_file.m"
      }
#line 954 "llds_out_file.m"
    else
#line 951 "llds_out_file.m"
      {
#line 951 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__Code_16 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__LiteralOrInclude_11, (MR_Integer) 0)));

#line 952 "llds_out_file.m"
        {
#line 952 "llds_out_file.m"
          ll_backend__llds_out__llds_out_util__output_set_line_num_4_p_0(ll_backend__llds_out__llds_out_file__Info_8, ll_backend__llds_out__llds_out_file__Context_12);
        }
#line 953 "llds_out_file.m"
        {
#line 953 "llds_out_file.m"
          mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__Code_16);
        }
#line 951 "llds_out_file.m"
      }
#line 961 "llds_out_file.m"
    {
#line 961 "llds_out_file.m"
      mercury__io__nl_2_p_0();
    }
#line 962 "llds_out_file.m"
    {
#line 962 "llds_out_file.m"
      ll_backend__llds_out__llds_out_util__output_reset_line_num_3_p_0(ll_backend__llds_out__llds_out_file__Info_8);
    }
#line 933 "llds_out_file.m"
  }
#line 928 "llds_out_file.m"
}

#line 903 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_foreign_header_include_line_6_p_0(
#line 903 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_7,
#line 903 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Decl_8,
#line 903 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AlreadyDone_0_15,
#line 903 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AlreadyDone_16)
#line 903 "llds_out_file.m"
{
#line 908 "llds_out_file.m"
  {
#line 908 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 908 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__Lang_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Decl_8, (MR_Integer) 0)));
#line 908 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__LiteralOrInclude_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Decl_8, (MR_Integer) 2)));
#line 908 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Decl_8, (MR_Integer) 3)));
#line 909 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file___IsLocal_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Decl_8, (MR_Integer) 1)));

#line 919 "llds_out_file.m"
#line 919 "llds_out_file.m"
    switch (ll_backend__llds_out__llds_out_file__Lang_11) {
#line 919 "llds_out_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 919 "llds_out_file.m"
      case (MR_Integer) 0:
#line 913 "llds_out_file.m"
        {
#line 913 "llds_out_file.m"
          MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AlreadyDone_22_22;

#line 913 "llds_out_file.m"
          {
#line 913 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__succeeded = mercury__set__insert_new_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_literal_or_include_0, ((MR_Box) (ll_backend__llds_out__llds_out_file__LiteralOrInclude_13)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AlreadyDone_0_15, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AlreadyDone_22_22);
          }
#line 913 "llds_out_file.m"
          if (ll_backend__llds_out__llds_out_file__succeeded)
#line 914 "llds_out_file.m"
            {
#line 914 "llds_out_file.m"
              *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AlreadyDone_16 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AlreadyDone_22_22;
#line 914 "llds_out_file.m"
              {
#line 914 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__output_foreign_decl_or_code_7_p_0(ll_backend__llds_out__llds_out_file__Info_7, (MR_String) "foreign_decl", ll_backend__llds_out__llds_out_file__Lang_11, ll_backend__llds_out__llds_out_file__LiteralOrInclude_13, ll_backend__llds_out__llds_out_file__Context_14);
              }
#line 914 "llds_out_file.m"
            }
#line 913 "llds_out_file.m"
          else
#line 917 "llds_out_file.m"
            *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AlreadyDone_16 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AlreadyDone_0_15;
#line 913 "llds_out_file.m"
        }
#line 919 "llds_out_file.m"
        break;
#line 919 "llds_out_file.m"
      case (MR_Integer) 1:
#line 919 "llds_out_file.m"
      case (MR_Integer) 3:
#line 919 "llds_out_file.m"
      case (MR_Integer) 2:
#line 923 "llds_out_file.m"
        {
#line 924 "llds_out_file.m"
          {
#line 924 "llds_out_file.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_out.llds_out_file", (MR_String) "predicate \140ll_backend.llds_out.llds_out_file.output_foreign_header_include_line\'/6", (MR_String) "unexpected: foreign decl code other than C");
#line 924 "llds_out_file.m"
            return;
          }
#line 923 "llds_out_file.m"
        }
#line 919 "llds_out_file.m"
        break;
#line 919 "llds_out_file.m"
    }
#line 908 "llds_out_file.m"
  }
#line 903 "llds_out_file.m"
}

#line 900 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_foreign_header_include_lines_4_p_0_1(
#line 900 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 900 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 900 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 900 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 900 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 900 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5)
#line 900 "llds_out_file.m"
{
#line 900 "llds_out_file.m"
  {
#line 900 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 900 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_AlreadyDone_16;

#line 900 "llds_out_file.m"
    {
#line 900 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_foreign_header_include_line_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_AlreadyDone_16);
    }
#line 900 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_AlreadyDone_16));
#line 900 "llds_out_file.m"
  }
#line 900 "llds_out_file.m"
}

#line 896 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_foreign_header_include_lines_4_p_0(
#line 896 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_5,
#line 896 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Decls_6)
#line 896 "llds_out_file.m"
{
#line 899 "llds_out_file.m"
  {
#line 899 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 899 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_11_11;
#line 899 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_12_12;
#line 900 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_8_8;
#line 900 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv2_V_8_8;
#line 900 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_IO_10;

#line 900 "llds_out_file.m"
    {
#line 900 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 900 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_11_11, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_6[9]));
#line 900 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_11_11, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_foreign_header_include_lines_4_p_0_1));
#line 900 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 900 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_11_11, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_5));
#line 900 "llds_out_file.m"
    }
#line 901 "llds_out_file.m"
    {
#line 901 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_12_12 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_literal_or_include_0);
    }
#line 900 "llds_out_file.m"
    {
#line 900 "llds_out_file.m"
      mercury__list__foldl2_6_p_2((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0, (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_1[1], (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__llds_out__llds_out_file__V_11_11, ll_backend__llds_out__llds_out_file__Decls_6, ((MR_Box) (ll_backend__llds_out__llds_out_file__V_12_12)), &ll_backend__llds_out__llds_out_file__conv2_V_8_8, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_IO_10);
    }
#line 900 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_8_8 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv2_V_8_8);
#line 899 "llds_out_file.m"
  }
#line 896 "llds_out_file.m"
}

#line 878 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_foreign_body_code_4_p_0(
#line 878 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_5,
#line 878 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ForeignBodyCode_6)
#line 878 "llds_out_file.m"
{
#line 881 "llds_out_file.m"
  {
#line 881 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 881 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__Lang_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__ForeignBodyCode_6, (MR_Integer) 0)));
#line 881 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__LiteralOrInclude_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__ForeignBodyCode_6, (MR_Integer) 1)));
#line 881 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__ForeignBodyCode_6, (MR_Integer) 2)));

#line 887 "llds_out_file.m"
#line 887 "llds_out_file.m"
    switch (ll_backend__llds_out__llds_out_file__Lang_8) {
#line 887 "llds_out_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 887 "llds_out_file.m"
      case (MR_Integer) 0:
#line 884 "llds_out_file.m"
        {
#line 885 "llds_out_file.m"
          {
#line 885 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__output_foreign_decl_or_code_7_p_0(ll_backend__llds_out__llds_out_file__Info_5, (MR_String) "foreign_code", ll_backend__llds_out__llds_out_file__Lang_8, ll_backend__llds_out__llds_out_file__LiteralOrInclude_9, ll_backend__llds_out__llds_out_file__Context_10);
          }
#line 884 "llds_out_file.m"
        }
#line 887 "llds_out_file.m"
        break;
#line 887 "llds_out_file.m"
      case (MR_Integer) 1:
#line 887 "llds_out_file.m"
      case (MR_Integer) 3:
#line 887 "llds_out_file.m"
      case (MR_Integer) 2:
#line 891 "llds_out_file.m"
        {
#line 892 "llds_out_file.m"
          {
#line 892 "llds_out_file.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_out.llds_out_file", (MR_String) "predicate \140ll_backend.llds_out.llds_out_file.output_foreign_body_code\'/4", (MR_String) "unimplemented: foreign code other than C");
#line 892 "llds_out_file.m"
            return;
          }
#line 891 "llds_out_file.m"
        }
#line 887 "llds_out_file.m"
        break;
#line 887 "llds_out_file.m"
    }
#line 881 "llds_out_file.m"
  }
#line 878 "llds_out_file.m"
}

#line 862 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_static_linkage_define_2_p_0(void)
#line 862 "llds_out_file.m"
{
#line 864 "llds_out_file.m"
  {
#line 864 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 870 "llds_out_file.m"
    {
#line 870 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#ifdef _MSC_VER\n");
    }
#line 871 "llds_out_file.m"
    {
#line 871 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#define MR_STATIC_LINKAGE extern\n");
    }
#line 872 "llds_out_file.m"
    {
#line 872 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#else\n");
    }
#line 873 "llds_out_file.m"
    {
#line 873 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#define MR_STATIC_LINKAGE static\n");
    }
#line 874 "llds_out_file.m"
    {
#line 874 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#endif\n");
    }
#line 864 "llds_out_file.m"
  }
#line 862 "llds_out_file.m"
}

#line 857 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_annotated_c_module_6_p_0_2(
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
      ll_backend__llds_out__llds_out_file__output_annotated_c_procedure_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
    }
#line 857 "llds_out_file.m"
  }
#line 857 "llds_out_file.m"
}

#line 849 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_annotated_c_module_6_p_0_1(
#line 849 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 849 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 849 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 849 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 849 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 849 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5)
#line 849 "llds_out_file.m"
{
#line 849 "llds_out_file.m"
  {
#line 849 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 849 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_DeclSet_16;

#line 849 "llds_out_file.m"
    {
#line 849 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_record_c_procedure_decls_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_DeclSet_16);
    }
#line 849 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_DeclSet_16));
#line 849 "llds_out_file.m"
  }
#line 849 "llds_out_file.m"
}

#line 842 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_annotated_c_module_6_p_0(
#line 842 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_7,
#line 842 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__AnnotatedModule_8,
#line 842 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_15,
#line 842 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_16)
#line 842 "llds_out_file.m"
{
#line 845 "llds_out_file.m"
  {
#line 845 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 845 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_43_43;
#line 845 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_45_45;
#line 845 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__ModuleName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__AnnotatedModule_8, (MR_Integer) 0)));
#line 845 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__AnnotatedProcedures_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__AnnotatedModule_8, (MR_Integer) 1)));
#line 845 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__EntryLabels_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__AnnotatedModule_8, (MR_Integer) 2)));
#line 845 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__InternalLabels_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__AnnotatedModule_8, (MR_Integer) 3)));
#line 845 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_21_21;
#line 845 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_34_34;
#line 849 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_DeclSet_16;
#line 849 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_IO_23_23;
#line 857 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv3_STATE_VARIABLE_IO_35_35;

#line 848 "llds_out_file.m"
    {
#line 848 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 849 "llds_out_file.m"
    {
#line 849 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 849 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_21_21, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_6[8]));
#line 849 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_21_21, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_annotated_c_module_6_p_0_1));
#line 849 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 849 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_21_21, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_7));
#line 849 "llds_out_file.m"
    }
#line 8844 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_43_43 = (MR_Word) &ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__type_ctor_info_annotated_c_procedure_0;
#line 8846 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_45_45 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 849 "llds_out_file.m"
    {
#line 849 "llds_out_file.m"
      mercury__list__foldl2_6_p_2(ll_backend__llds_out__llds_out_file__TypeCtorInfo_43_43, (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_1[0], ll_backend__llds_out__llds_out_file__TypeCtorInfo_45_45, ll_backend__llds_out__llds_out_file__V_21_21, ll_backend__llds_out__llds_out_file__AnnotatedProcedures_12, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_15)), &ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_DeclSet_16, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_IO_23_23);
    }
#line 849 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_16 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_DeclSet_16);
#line 851 "llds_out_file.m"
    {
#line 851 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 852 "llds_out_file.m"
    {
#line 852 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "MR_BEGIN_MODULE(");
    }
#line 853 "llds_out_file.m"
    {
#line 853 "llds_out_file.m"
      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_11);
    }
#line 854 "llds_out_file.m"
    {
#line 854 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) ")\n");
    }
#line 855 "llds_out_file.m"
    {
#line 855 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0(ll_backend__llds_out__llds_out_file__Info_7, ll_backend__llds_out__llds_out_file__EntryLabels_13, ll_backend__llds_out__llds_out_file__InternalLabels_14);
    }
#line 856 "llds_out_file.m"
    {
#line 856 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "MR_BEGIN_CODE\n");
    }
#line 857 "llds_out_file.m"
    {
#line 857 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 857 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_34_34, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_4[2]));
#line 857 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_34_34, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_annotated_c_module_6_p_0_2));
#line 857 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 857 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_34_34, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_7));
#line 857 "llds_out_file.m"
    }
#line 857 "llds_out_file.m"
    {
#line 857 "llds_out_file.m"
      mercury__list__foldl_4_p_2(ll_backend__llds_out__llds_out_file__TypeCtorInfo_43_43, ll_backend__llds_out__llds_out_file__TypeCtorInfo_45_45, ll_backend__llds_out__llds_out_file__V_34_34, ll_backend__llds_out__llds_out_file__AnnotatedProcedures_12, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv3_STATE_VARIABLE_IO_35_35);
    }
#line 858 "llds_out_file.m"
    {
#line 858 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "MR_END_MODULE\n");
    }
#line 845 "llds_out_file.m"
  }
#line 842 "llds_out_file.m"
}

#line 832 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_required_init_or_final_calls_3_p_0(
#line 832 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1)
#line 832 "llds_out_file.m"
{
#line 835 "llds_out_file.m"
  while (MR_TRUE)
#line 835 "llds_out_file.m"
    {
#line 835 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 835 "llds_out_file.m"
      {
#line 835 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 835 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 835 "llds_out_file.m"
          {
#line 835 "llds_out_file.m"
          }
#line 835 "llds_out_file.m"
        else
#line 836 "llds_out_file.m"
          {
#line 836 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__Name_7 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 836 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Names_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 836 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__V_12_12;
#line 836 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__V_15_15;

#line 837 "llds_out_file.m"
            {
#line 837 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__V_15_15 = mercury__string__f_43_43_2_f_0(ll_backend__llds_out__llds_out_file__Name_7, (MR_String) "();\n");
            }
#line 837 "llds_out_file.m"
            {
#line 837 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) "\t", ll_backend__llds_out__llds_out_file__V_15_15);
            }
#line 837 "llds_out_file.m"
            {
#line 837 "llds_out_file.m"
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__V_12_12);
            }
#line 838 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 838 "llds_out_file.m"
            {
#line 838 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__Names_8;

#line 838 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 838 "llds_out_file.m"
            }
#line 838 "llds_out_file.m"
            continue;
#line 836 "llds_out_file.m"
          }
#line 835 "llds_out_file.m"
      }
#line 835 "llds_out_file.m"
      break;
#line 835 "llds_out_file.m"
    }
#line 832 "llds_out_file.m"
}

#line 825 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_env_var_init_3_p_0(
#line 825 "llds_out_file.m"
  MR_String ll_backend__llds_out__llds_out_file__EnvVarName_4)
#line 825 "llds_out_file.m"
{
#line 827 "llds_out_file.m"
  {
#line 827 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 828 "llds_out_file.m"
    {
#line 828 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "ENVVAR ");
    }
#line 829 "llds_out_file.m"
    {
#line 829 "llds_out_file.m"
      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__EnvVarName_4);
    }
#line 830 "llds_out_file.m"
    {
#line 830 "llds_out_file.m"
      mercury__io__nl_2_p_0();
    }
#line 827 "llds_out_file.m"
  }
#line 825 "llds_out_file.m"
}

#line 821 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_init_comment_6_p_0_1(
#line 821 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 821 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 821 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 821 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 821 "llds_out_file.m"
{
#line 821 "llds_out_file.m"
  {
#line 821 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 821 "llds_out_file.m"
    {
#line 821 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_env_var_init_3_p_0(((MR_String) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
    }
#line 821 "llds_out_file.m"
  }
#line 821 "llds_out_file.m"
}

#line 794 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_init_comment_6_p_0(
#line 794 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ModuleName_7,
#line 794 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__UserInitPredCNames_8,
#line 794 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__UserFinalPredCNames_9,
#line 794 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__EnvVarNames_10)
#line 794 "llds_out_file.m"
{
#line 798 "llds_out_file.m"
  {
#line 798 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 821 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_IO_36_36;

#line 799 "llds_out_file.m"
    {
#line 799 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "/*\n");
    }
#line 800 "llds_out_file.m"
    {
#line 800 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "INIT ");
    }
#line 801 "llds_out_file.m"
    {
#line 801 "llds_out_file.m"
      backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_7);
    }
#line 802 "llds_out_file.m"
    {
#line 802 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "init\n");
    }
#line 807 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__UserInitPredCNames_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 806 "llds_out_file.m"
      {
#line 806 "llds_out_file.m"
      }
#line 807 "llds_out_file.m"
    else
#line 808 "llds_out_file.m"
      {
#line 809 "llds_out_file.m"
        {
#line 809 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "REQUIRED_INIT ");
        }
#line 810 "llds_out_file.m"
        {
#line 810 "llds_out_file.m"
          backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_7);
        }
#line 811 "llds_out_file.m"
        {
#line 811 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "required_init\n");
        }
#line 808 "llds_out_file.m"
      }
#line 815 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__UserFinalPredCNames_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 814 "llds_out_file.m"
      {
#line 814 "llds_out_file.m"
      }
#line 815 "llds_out_file.m"
    else
#line 816 "llds_out_file.m"
      {
#line 817 "llds_out_file.m"
        {
#line 817 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "REQUIRED_FINAL ");
        }
#line 818 "llds_out_file.m"
        {
#line 818 "llds_out_file.m"
          backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_7);
        }
#line 819 "llds_out_file.m"
        {
#line 819 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "required_final\n");
        }
#line 816 "llds_out_file.m"
      }
#line 821 "llds_out_file.m"
    {
#line 821 "llds_out_file.m"
      mercury__list__foldl_4_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_2[5], ll_backend__llds_out__llds_out_file__EnvVarNames_10, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_IO_36_36);
    }
#line 822 "llds_out_file.m"
    {
#line 822 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "ENDINIT\n");
    }
#line 823 "llds_out_file.m"
    {
#line 823 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "*/\n\n");
    }
#line 798 "llds_out_file.m"
  }
#line 794 "llds_out_file.m"
}

#line 761 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_write_proc_static_list_3_p_0(
#line 761 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1)
#line 761 "llds_out_file.m"
{
#line 764 "llds_out_file.m"
  while (MR_TRUE)
#line 764 "llds_out_file.m"
    {
#line 764 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 764 "llds_out_file.m"
      {
#line 764 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 764 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 764 "llds_out_file.m"
          {
#line 764 "llds_out_file.m"
          }
#line 764 "llds_out_file.m"
        else
#line 765 "llds_out_file.m"
          {
#line 765 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__ProcLayout_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 765 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__ProcLayouts_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 765 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__RttiProcLabel_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__ProcLayout_7, (MR_Integer) 0)));
#line 765 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__MaybeMore_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__ProcLayout_7, (MR_Integer) 2)));
#line 766 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__ProcLayout_7, (MR_Integer) 1)));
#line 767 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_22_22;
#line 767 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_14_14;
#line 767 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_15_15;
#line 767 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_16_16;
#line 767 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file___ProcStatic_13;

#line 767 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__MaybeMore_12)) == (MR_mktag((MR_Integer) 1)));
#line 767 "llds_out_file.m"
            if (ll_backend__llds_out__llds_out_file__succeeded)
#line 767 "llds_out_file.m"
              {
#line 767 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__MaybeMore_12, (MR_Integer) 0)));
#line 767 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__MaybeMore_12, (MR_Integer) 1)));
#line 767 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__MaybeMore_12, (MR_Integer) 2)));
#line 767 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__MaybeMore_12, (MR_Integer) 3)));
#line 767 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__V_22_22)) == (MR_mktag((MR_Integer) 1)));
#line 767 "llds_out_file.m"
                if (ll_backend__llds_out__llds_out_file__succeeded)
#line 767 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file___ProcStatic_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__V_22_22, (MR_Integer) 0)));
#line 767 "llds_out_file.m"
              }
#line 767 "llds_out_file.m"
            if (ll_backend__llds_out__llds_out_file__succeeded)
#line 768 "llds_out_file.m"
              {
#line 768 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__ProcLabel_17;
#line 768 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__UserOrUCI_18;
#line 768 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__Kind_19;
#line 768 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__V_27_27;

#line 768 "llds_out_file.m"
                {
#line 768 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__ProcLabel_17 = backend_libs__proc_label__make_proc_label_from_rtti_1_f_0(ll_backend__llds_out__llds_out_file__RttiProcLabel_10);
                }
#line 769 "llds_out_file.m"
                {
#line 769 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__UserOrUCI_18 = ll_backend__layout_out__proc_label_user_or_uci_1_f_0(ll_backend__llds_out__llds_out_file__ProcLabel_17);
                }
#line 770 "llds_out_file.m"
                {
#line 770 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__Kind_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 770 "llds_out_file.m"
                  MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__Kind_19, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__UserOrUCI_18));
#line 770 "llds_out_file.m"
                }
#line 776 "llds_out_file.m"
#line 776 "llds_out_file.m"
                switch (ll_backend__llds_out__llds_out_file__UserOrUCI_18) {
#line 776 "llds_out_file.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 776 "llds_out_file.m"
                  case (MR_Integer) 1:
#line 777 "llds_out_file.m"
                    {
#line 778 "llds_out_file.m"
                      {
#line 778 "llds_out_file.m"
                        mercury__io__write_string_3_p_0((MR_String) "\tMR_write_out_uci_proc_static(deep_fp, procrep_fp,\n\t\t&");
                      }
#line 777 "llds_out_file.m"
                    }
#line 776 "llds_out_file.m"
                    break;
#line 776 "llds_out_file.m"
                  case (MR_Integer) 0:
#line 772 "llds_out_file.m"
                    {
#line 773 "llds_out_file.m"
                      {
#line 773 "llds_out_file.m"
                        mercury__io__write_string_3_p_0((MR_String) "\tMR_write_out_user_proc_static(deep_fp, procrep_fp,\n\t\t&");
                      }
#line 772 "llds_out_file.m"
                    }
#line 776 "llds_out_file.m"
                    break;
#line 776 "llds_out_file.m"
                }
#line 782 "llds_out_file.m"
                {
#line 782 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 782 "llds_out_file.m"
                  MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_27_27, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__RttiProcLabel_10));
#line 782 "llds_out_file.m"
                  MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_27_27, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Kind_19));
#line 782 "llds_out_file.m"
                }
#line 782 "llds_out_file.m"
                {
#line 782 "llds_out_file.m"
                  ll_backend__layout_out__output_layout_name_3_p_0(ll_backend__llds_out__llds_out_file__V_27_27);
                }
#line 783 "llds_out_file.m"
                {
#line 783 "llds_out_file.m"
                  mercury__io__write_string_3_p_0((MR_String) ");\n");
                }
#line 768 "llds_out_file.m"
              }
#line 767 "llds_out_file.m"
            else
#line 767 "llds_out_file.m"
              {
#line 767 "llds_out_file.m"
              }
#line 787 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 787 "llds_out_file.m"
            {
#line 787 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__ProcLayouts_8;

#line 787 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 787 "llds_out_file.m"
            }
#line 787 "llds_out_file.m"
            continue;
#line 765 "llds_out_file.m"
          }
#line 764 "llds_out_file.m"
      }
#line 764 "llds_out_file.m"
      break;
#line 764 "llds_out_file.m"
    }
#line 761 "llds_out_file.m"
}

#line 748 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_debugger_init_list_3_p_0(
#line 748 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1)
#line 748 "llds_out_file.m"
{
#line 751 "llds_out_file.m"
  while (MR_TRUE)
#line 751 "llds_out_file.m"
    {
#line 751 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 751 "llds_out_file.m"
      {
#line 751 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 751 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 751 "llds_out_file.m"
          {
#line 751 "llds_out_file.m"
          }
#line 751 "llds_out_file.m"
        else
#line 752 "llds_out_file.m"
          {
#line 752 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Data_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 752 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Datas_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 752 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__ModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Data_7, (MR_Integer) 0)));
#line 752 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_23_23;
#line 753 "llds_out_file.m"
            MR_Integer ll_backend__llds_out__llds_out_file__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Data_7, (MR_Integer) 1)));
#line 753 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Data_7, (MR_Integer) 2)));
#line 753 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Data_7, (MR_Integer) 3)));
#line 753 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Data_7, (MR_Integer) 4)));

#line 754 "llds_out_file.m"
            {
#line 754 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "\tif (MR_register_module_layout != NULL) {\n");
            }
#line 755 "llds_out_file.m"
            {
#line 755 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "\t\t(*MR_register_module_layout)(");
            }
#line 756 "llds_out_file.m"
            {
#line 756 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "\n\t\t\t&");
            }
#line 757 "llds_out_file.m"
            {
#line 757 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__V_23_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 757 "llds_out_file.m"
              MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__V_23_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
#line 757 "llds_out_file.m"
              MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__V_23_23, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__ModuleName_10));
#line 757 "llds_out_file.m"
            }
#line 757 "llds_out_file.m"
            {
#line 757 "llds_out_file.m"
              ll_backend__layout_out__output_layout_name_3_p_0(ll_backend__llds_out__llds_out_file__V_23_23);
            }
#line 758 "llds_out_file.m"
            {
#line 758 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) ");\n\t}\n");
            }
#line 759 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 759 "llds_out_file.m"
            {
#line 759 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__Datas_8;

#line 759 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 759 "llds_out_file.m"
            }
#line 759 "llds_out_file.m"
            continue;
#line 752 "llds_out_file.m"
          }
#line 751 "llds_out_file.m"
      }
#line 751 "llds_out_file.m"
      break;
#line 751 "llds_out_file.m"
    }
#line 748 "llds_out_file.m"
}

#line 736 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_type_tables_init_list_3_p_0(
#line 736 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1)
#line 736 "llds_out_file.m"
{
#line 739 "llds_out_file.m"
  while (MR_TRUE)
#line 739 "llds_out_file.m"
    {
#line 739 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 739 "llds_out_file.m"
      {
#line 739 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 739 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 739 "llds_out_file.m"
          {
#line 739 "llds_out_file.m"
          }
#line 739 "llds_out_file.m"
        else
#line 740 "llds_out_file.m"
          {
#line 740 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Data_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 740 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Datas_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));

#line 741 "llds_out_file.m"
            {
#line 741 "llds_out_file.m"
              ll_backend__rtti_out__register_rtti_data_if_nec_3_p_0(ll_backend__llds_out__llds_out_file__Data_7);
            }
#line 742 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 742 "llds_out_file.m"
            {
#line 742 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__Datas_8;

#line 742 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 742 "llds_out_file.m"
            }
#line 742 "llds_out_file.m"
            continue;
#line 740 "llds_out_file.m"
          }
#line 739 "llds_out_file.m"
      }
#line 739 "llds_out_file.m"
      break;
#line 739 "llds_out_file.m"
    }
#line 736 "llds_out_file.m"
}

#line 714 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_alloc_sites_init_4_p_0(
#line 714 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_5,
#line 714 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__AllocSites_6)
#line 714 "llds_out_file.m"
{
#line 719 "llds_out_file.m"
  {
#line 719 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 719 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__AllocSites_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 719 "llds_out_file.m"
      {
#line 719 "llds_out_file.m"
      }
#line 719 "llds_out_file.m"
    else
#line 721 "llds_out_file.m"
      {
#line 721 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__MangledModuleName_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 1)));
#line 721 "llds_out_file.m"
        MR_Integer ll_backend__llds_out__llds_out_file__NumAllocSites_11;
#line 722 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 0)));
#line 722 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 2)));
#line 722 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 3)));
#line 722 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 4)));
#line 722 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 5)));
#line 722 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)));
#line 722 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_34_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 722 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 722 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 722 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 722 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 722 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 722 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 722 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 722 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 722 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 722 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 722 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 722 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 722 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 722 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 8)));

#line 723 "llds_out_file.m"
        {
#line 723 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__NumAllocSites_11 = mercury__list__length_1_f_0((MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_alloc_site_info_0, ll_backend__llds_out__llds_out_file__AllocSites_6);
        }
#line 724 "llds_out_file.m"
        {
#line 724 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "#ifdef MR_MPROF_PROFILE_MEMORY_ATTRIBUTION\n");
        }
#line 725 "llds_out_file.m"
        {
#line 725 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "\tMR_register_alloc_sites(");
        }
#line 726 "llds_out_file.m"
        {
#line 726 "llds_out_file.m"
          ll_backend__layout_out__output_layout_array_name_5_p_0((MR_Integer) 0, ll_backend__llds_out__llds_out_file__MangledModuleName_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17)));
        }
#line 728 "llds_out_file.m"
        {
#line 728 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) ", ");
        }
#line 729 "llds_out_file.m"
        {
#line 729 "llds_out_file.m"
          mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_file__NumAllocSites_11);
        }
#line 730 "llds_out_file.m"
        {
#line 730 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) ");\n");
        }
#line 731 "llds_out_file.m"
        {
#line 731 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "#endif\n");
        }
#line 721 "llds_out_file.m"
      }
#line 719 "llds_out_file.m"
  }
#line 714 "llds_out_file.m"
}

#line 705 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_data_init_list_3_p_0(
#line 705 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1)
#line 705 "llds_out_file.m"
{
#line 707 "llds_out_file.m"
  while (MR_TRUE)
#line 707 "llds_out_file.m"
    {
#line 707 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 707 "llds_out_file.m"
      {
#line 707 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 707 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 707 "llds_out_file.m"
          {
#line 707 "llds_out_file.m"
          }
#line 707 "llds_out_file.m"
        else
#line 708 "llds_out_file.m"
          {
#line 708 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Data_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 708 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Datas_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));

#line 709 "llds_out_file.m"
            {
#line 709 "llds_out_file.m"
              ll_backend__rtti_out__init_rtti_data_if_nec_3_p_0(ll_backend__llds_out__llds_out_file__Data_7);
            }
#line 710 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 710 "llds_out_file.m"
            {
#line 710 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__Datas_8;

#line 710 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 710 "llds_out_file.m"
            }
#line 710 "llds_out_file.m"
            continue;
#line 708 "llds_out_file.m"
          }
#line 707 "llds_out_file.m"
      }
#line 707 "llds_out_file.m"
      break;
#line 707 "llds_out_file.m"
    }
#line 705 "llds_out_file.m"
}

#line 679 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_init_bunch_calls_6_p_0(
#line 679 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_1,
#line 679 "llds_out_file.m"
  MR_String ll_backend__llds_out__llds_out_file__InitStatus_2,
#line 679 "llds_out_file.m"
  MR_Integer ll_backend__llds_out__llds_out_file__Seq_3,
#line 679 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__4_4)
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
        if ((ll_backend__llds_out__llds_out_file__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 682 "llds_out_file.m"
          {
#line 682 "llds_out_file.m"
          }
#line 682 "llds_out_file.m"
        else
#line 683 "llds_out_file.m"
          {
#line 683 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Bunches_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__4_4, (MR_Integer) 1)));
#line 683 "llds_out_file.m"
            MR_Integer ll_backend__llds_out__llds_out_file__NextSeq_19;
#line 683 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__MangledModuleName_35;
#line 683 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__4_4, (MR_Integer) 0)));
#line 695 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_45_45;
#line 695 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__V_46_46;
#line 695 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_47_47;
#line 695 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_48_48;
#line 695 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_49_49;
#line 695 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_50_50;
#line 695 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_51_51;
#line 695 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_52_52;
#line 695 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_53_53;
#line 695 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_54_54;
#line 695 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_55_55;
#line 695 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_56_56;
#line 695 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_57_57;
#line 695 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_58_58;
#line 695 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_59_59;
#line 695 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_60_60;
#line 695 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_61_61;
#line 695 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_62_62;
#line 695 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_63_63;
#line 695 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_64_64;
#line 695 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_65_65;

#line 684 "llds_out_file.m"
            {
#line 684 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "\t");
            }
#line 694 "llds_out_file.m"
            {
#line 694 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "mercury__");
            }
#line 695 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 0)));
#line 695 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__MangledModuleName_35 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 1)));
#line 695 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_46_46 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 2)));
#line 695 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 3)));
#line 695 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 4)));
#line 695 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 5)));
#line 695 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 6)));
#line 695 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_51_51 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 695 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 695 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 695 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 695 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 695 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 695 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 695 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 695 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 695 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 695 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 695 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_62_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 695 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 695 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 695 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 8)));
#line 696 "llds_out_file.m"
            {
#line 696 "llds_out_file.m"
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__MangledModuleName_35);
            }
#line 697 "llds_out_file.m"
            {
#line 697 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "_");
            }
#line 698 "llds_out_file.m"
            {
#line 698 "llds_out_file.m"
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__InitStatus_2);
            }
#line 699 "llds_out_file.m"
            {
#line 699 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "_bunch_");
            }
#line 700 "llds_out_file.m"
            {
#line 700 "llds_out_file.m"
              mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_file__Seq_3);
            }
#line 686 "llds_out_file.m"
            {
#line 686 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "();\n");
            }
#line 687 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__NextSeq_19 = (ll_backend__llds_out__llds_out_file__Seq_3 + (MR_Integer) 1);
#line 688 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 688 "llds_out_file.m"
            {
#line 688 "llds_out_file.m"
              MR_Integer ll_backend__llds_out__llds_out_file__Seq__tmp_copy_3 = ll_backend__llds_out__llds_out_file__NextSeq_19;
#line 688 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__4__tmp_copy_4 = ll_backend__llds_out__llds_out_file__Bunches_17;

#line 688 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__4_4 = ll_backend__llds_out__llds_out_file__HeadVar__4__tmp_copy_4;
#line 688 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__Seq_3 = ll_backend__llds_out__llds_out_file__Seq__tmp_copy_3;
#line 688 "llds_out_file.m"
            }
#line 688 "llds_out_file.m"
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

#line 668 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_init_bunch_def_3_p_0(
#line 668 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1)
#line 668 "llds_out_file.m"
{
#line 671 "llds_out_file.m"
  while (MR_TRUE)
#line 671 "llds_out_file.m"
    {
#line 671 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 671 "llds_out_file.m"
      {
#line 671 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 671 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 671 "llds_out_file.m"
          {
#line 671 "llds_out_file.m"
          }
#line 671 "llds_out_file.m"
        else
#line 672 "llds_out_file.m"
          {
#line 672 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__AnnotatedModule_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 672 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__AnnotatedModules_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 672 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__C_ModuleName_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__AnnotatedModule_7, (MR_Integer) 0)));
#line 673 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__AnnotatedModule_7, (MR_Integer) 1)));
#line 673 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__AnnotatedModule_7, (MR_Integer) 2)));
#line 673 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__AnnotatedModule_7, (MR_Integer) 3)));

#line 674 "llds_out_file.m"
            {
#line 674 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "\t");
            }
#line 675 "llds_out_file.m"
            {
#line 675 "llds_out_file.m"
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__C_ModuleName_10);
            }
#line 676 "llds_out_file.m"
            {
#line 676 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "();\n");
            }
#line 677 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 677 "llds_out_file.m"
            {
#line 677 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__AnnotatedModules_8;

#line 677 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 677 "llds_out_file.m"
            }
#line 677 "llds_out_file.m"
            continue;
#line 672 "llds_out_file.m"
          }
#line 671 "llds_out_file.m"
      }
#line 671 "llds_out_file.m"
      break;
#line 671 "llds_out_file.m"
    }
#line 668 "llds_out_file.m"
}

#line 654 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_init_bunch_defs_6_p_0(
#line 654 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_1,
#line 654 "llds_out_file.m"
  MR_String ll_backend__llds_out__llds_out_file__InitStatus_2,
#line 654 "llds_out_file.m"
  MR_Integer ll_backend__llds_out__llds_out_file__Seq_3,
#line 654 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__4_4)
#line 654 "llds_out_file.m"
{
#line 657 "llds_out_file.m"
  while (MR_TRUE)
#line 657 "llds_out_file.m"
    {
#line 657 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 657 "llds_out_file.m"
      {
#line 657 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 657 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 657 "llds_out_file.m"
          {
#line 657 "llds_out_file.m"
          }
#line 657 "llds_out_file.m"
        else
#line 658 "llds_out_file.m"
          {
#line 658 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Bunch_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__4_4, (MR_Integer) 0)));
#line 658 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Bunches_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__4_4, (MR_Integer) 1)));
#line 658 "llds_out_file.m"
            MR_Integer ll_backend__llds_out__llds_out_file__NextSeq_19;
#line 658 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__MangledModuleName_40;
#line 695 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_50_50;
#line 695 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__V_51_51;
#line 695 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_52_52;
#line 695 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_53_53;
#line 695 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_54_54;
#line 695 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_55_55;
#line 695 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_56_56;
#line 695 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_57_57;
#line 695 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_58_58;
#line 695 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_59_59;
#line 695 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_60_60;
#line 695 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_61_61;
#line 695 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_62_62;
#line 695 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_63_63;
#line 695 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_64_64;
#line 695 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_65_65;
#line 695 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_66_66;
#line 695 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_67_67;
#line 695 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_68_68;
#line 695 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_69_69;
#line 695 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_70_70;

#line 659 "llds_out_file.m"
            {
#line 659 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "static void ");
            }
#line 694 "llds_out_file.m"
            {
#line 694 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "mercury__");
            }
#line 695 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 0)));
#line 695 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__MangledModuleName_40 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 1)));
#line 695 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 2)));
#line 695 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 3)));
#line 695 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 4)));
#line 695 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 5)));
#line 695 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 6)));
#line 695 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_56_56 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 695 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 695 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 695 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 695 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 695 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 695 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_62_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 695 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 695 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 695 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 695 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 695 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_67_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 695 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_68_68 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 695 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_69_69 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 695 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 8)));
#line 696 "llds_out_file.m"
            {
#line 696 "llds_out_file.m"
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__MangledModuleName_40);
            }
#line 697 "llds_out_file.m"
            {
#line 697 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "_");
            }
#line 698 "llds_out_file.m"
            {
#line 698 "llds_out_file.m"
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__InitStatus_2);
            }
#line 699 "llds_out_file.m"
            {
#line 699 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "_bunch_");
            }
#line 700 "llds_out_file.m"
            {
#line 700 "llds_out_file.m"
              mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_file__Seq_3);
            }
#line 661 "llds_out_file.m"
            {
#line 661 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "(void)\n");
            }
#line 662 "llds_out_file.m"
            {
#line 662 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "{\n");
            }
#line 663 "llds_out_file.m"
            {
#line 663 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__output_init_bunch_def_3_p_0(ll_backend__llds_out__llds_out_file__Bunch_16);
            }
#line 664 "llds_out_file.m"
            {
#line 664 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "}\n\n");
            }
#line 665 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__NextSeq_19 = (ll_backend__llds_out__llds_out_file__Seq_3 + (MR_Integer) 1);
#line 666 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 666 "llds_out_file.m"
            {
#line 666 "llds_out_file.m"
              MR_Integer ll_backend__llds_out__llds_out_file__Seq__tmp_copy_3 = ll_backend__llds_out__llds_out_file__NextSeq_19;
#line 666 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__4__tmp_copy_4 = ll_backend__llds_out__llds_out_file__Bunches_17;

#line 666 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__4_4 = ll_backend__llds_out__llds_out_file__HeadVar__4__tmp_copy_4;
#line 666 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__Seq_3 = ll_backend__llds_out__llds_out_file__Seq__tmp_copy_3;
#line 666 "llds_out_file.m"
            }
#line 666 "llds_out_file.m"
            continue;
#line 658 "llds_out_file.m"
          }
#line 657 "llds_out_file.m"
      }
#line 657 "llds_out_file.m"
      break;
#line 657 "llds_out_file.m"
    }
#line 654 "llds_out_file.m"
}

#line 646 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__entry_label_has_layout_2_p_0(
#line 646 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__EntryLabelToLayoutMap_3,
#line 646 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Label_4)
#line 646 "llds_out_file.m"
{
#line 650 "llds_out_file.m"
  {
#line 650 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 650 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_5_5;
#line 650 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv0_V_5_5;

#line 650 "llds_out_file.m"
    {
#line 650 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0, ll_backend__llds_out__llds_out_file__EntryLabelToLayoutMap_3, ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_4)), &ll_backend__llds_out__llds_out_file__conv0_V_5_5);
    }
#line 650 "llds_out_file.m"
    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 650 "llds_out_file.m"
      {
#line 650 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_5_5 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv0_V_5_5);
#line 650 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__succeeded = MR_TRUE;
#line 650 "llds_out_file.m"
      }
#line 650 "llds_out_file.m"
    return ll_backend__llds_out__llds_out_file__succeeded;
#line 650 "llds_out_file.m"
  }
#line 646 "llds_out_file.m"
}

#line 640 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__internal_label_has_layout_2_p_0(
#line 640 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__InternalLabelToLayoutMap_3,
#line 640 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Label_4)
#line 640 "llds_out_file.m"
{
#line 644 "llds_out_file.m"
  {
#line 644 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 644 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_5_5;
#line 644 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv0_V_5_5;

#line 644 "llds_out_file.m"
    {
#line 644 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0, ll_backend__llds_out__llds_out_file__InternalLabelToLayoutMap_3, ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_4)), &ll_backend__llds_out__llds_out_file__conv0_V_5_5);
    }
#line 644 "llds_out_file.m"
    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 644 "llds_out_file.m"
      {
#line 644 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_5_5 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv0_V_5_5);
#line 644 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__succeeded = MR_TRUE;
#line 644 "llds_out_file.m"
      }
#line 644 "llds_out_file.m"
    return ll_backend__llds_out__llds_out_file__succeeded;
#line 644 "llds_out_file.m"
  }
#line 640 "llds_out_file.m"
}

#line 636 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__module_defines_label_with_layout_2_p_0_2(
#line 636 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 636 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1)
#line 636 "llds_out_file.m"
{
#line 636 "llds_out_file.m"
  {
#line 636 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 636 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 636 "llds_out_file.m"
    {
#line 636 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__succeeded = ll_backend__llds_out__llds_out_file__entry_label_has_layout_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
    }
#line 636 "llds_out_file.m"
    return ll_backend__llds_out__llds_out_file__succeeded;
#line 636 "llds_out_file.m"
  }
#line 636 "llds_out_file.m"
}

#line 631 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__module_defines_label_with_layout_2_p_0_1(
#line 631 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 631 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1)
#line 631 "llds_out_file.m"
{
#line 631 "llds_out_file.m"
  {
#line 631 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 631 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 631 "llds_out_file.m"
    {
#line 631 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__succeeded = ll_backend__llds_out__llds_out_file__internal_label_has_layout_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
    }
#line 631 "llds_out_file.m"
    return ll_backend__llds_out__llds_out_file__succeeded;
#line 631 "llds_out_file.m"
  }
#line 631 "llds_out_file.m"
}

#line 620 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__module_defines_label_with_layout_2_p_0(
#line 620 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_3,
#line 620 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__AnnotatedModule_4)
#line 620 "llds_out_file.m"
{
#line 623 "llds_out_file.m"
  {
#line 623 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 623 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__EntryLabels_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__AnnotatedModule_4, (MR_Integer) 2)));
#line 623 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__InternalLabels_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__AnnotatedModule_4, (MR_Integer) 3)));
#line 623 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 4)));
#line 623 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 3)));
#line 624 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__AnnotatedModule_4, (MR_Integer) 0)));
#line 624 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__AnnotatedModule_4, (MR_Integer) 1)));
#line 629 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 8)));
#line 629 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 629 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_67_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 629 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_68_68 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 629 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_69_69 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 629 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_70_70 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 629 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 629 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 629 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 629 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 629 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_75_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 629 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_76_76 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 629 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_77_77 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 629 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_78_78 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 629 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_79_79 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 629 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 6)));
#line 629 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 5)));
#line 629 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_84_84 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 2)));
#line 629 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_85_85 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 1)));
#line 629 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 0)));

#line 629 "llds_out_file.m"
    {
#line 629 "llds_out_file.m"
      MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_60_60;
#line 629 "llds_out_file.m"
      MR_Word ll_backend__llds_out__llds_out_file__V_14_14;
#line 631 "llds_out_file.m"
      MR_Word ll_backend__llds_out__llds_out_file__V_10_10;
#line 631 "llds_out_file.m"
      MR_Box ll_backend__llds_out__llds_out_file__conv0_V_10_10;

#line 630 "llds_out_file.m"
      {
#line 630 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0, ll_backend__llds_out__llds_out_file__V_83_83);
      }
#line 630 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__succeeded = !(ll_backend__llds_out__llds_out_file__succeeded);
#line 629 "llds_out_file.m"
      if (ll_backend__llds_out__llds_out_file__succeeded)
#line 629 "llds_out_file.m"
        {
#line 10414 "ll_backend.llds_out.llds_out_file.c"
          ll_backend__llds_out__llds_out_file__TypeCtorInfo_60_60 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 631 "llds_out_file.m"
          {
#line 631 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 631 "llds_out_file.m"
            MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_14_14, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_8[2]));
#line 631 "llds_out_file.m"
            MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_14_14, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__module_defines_label_with_layout_2_p_0_1));
#line 631 "llds_out_file.m"
            MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 631 "llds_out_file.m"
            MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_14_14, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__V_83_83));
#line 631 "llds_out_file.m"
          }
#line 631 "llds_out_file.m"
          {
#line 631 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__succeeded = mercury__list__find_first_match_3_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_60_60, ll_backend__llds_out__llds_out_file__V_14_14, ll_backend__llds_out__llds_out_file__InternalLabels_8, &ll_backend__llds_out__llds_out_file__conv0_V_10_10);
          }
#line 631 "llds_out_file.m"
          if (ll_backend__llds_out__llds_out_file__succeeded)
#line 631 "llds_out_file.m"
            {
#line 631 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__V_10_10 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv0_V_10_10);
#line 631 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__succeeded = MR_TRUE;
#line 631 "llds_out_file.m"
            }
#line 629 "llds_out_file.m"
        }
#line 629 "llds_out_file.m"
    }
#line 633 "llds_out_file.m"
    if (!(ll_backend__llds_out__llds_out_file__succeeded))
#line 634 "llds_out_file.m"
      {
#line 634 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_64_64;
#line 634 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_13_13;
#line 636 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_12_12;
#line 636 "llds_out_file.m"
        MR_Box ll_backend__llds_out__llds_out_file__conv1_V_12_12;

#line 635 "llds_out_file.m"
        {
#line 635 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0, ll_backend__llds_out__llds_out_file__V_82_82);
        }
#line 635 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__succeeded = !(ll_backend__llds_out__llds_out_file__succeeded);
#line 634 "llds_out_file.m"
        if (ll_backend__llds_out__llds_out_file__succeeded)
#line 634 "llds_out_file.m"
          {
#line 10473 "ll_backend.llds_out.llds_out_file.c"
            ll_backend__llds_out__llds_out_file__TypeCtorInfo_64_64 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 636 "llds_out_file.m"
            {
#line 636 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 636 "llds_out_file.m"
              MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_13_13, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_8[3]));
#line 636 "llds_out_file.m"
              MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_13_13, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__module_defines_label_with_layout_2_p_0_2));
#line 636 "llds_out_file.m"
              MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 636 "llds_out_file.m"
              MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_13_13, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__V_82_82));
#line 636 "llds_out_file.m"
            }
#line 636 "llds_out_file.m"
            {
#line 636 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__succeeded = mercury__list__find_first_match_3_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_64_64, ll_backend__llds_out__llds_out_file__V_13_13, ll_backend__llds_out__llds_out_file__EntryLabels_7, &ll_backend__llds_out__llds_out_file__conv1_V_12_12);
            }
#line 636 "llds_out_file.m"
            if (ll_backend__llds_out__llds_out_file__succeeded)
#line 636 "llds_out_file.m"
              {
#line 636 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__V_12_12 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv1_V_12_12);
#line 636 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__succeeded = MR_TRUE;
#line 636 "llds_out_file.m"
              }
#line 634 "llds_out_file.m"
          }
#line 634 "llds_out_file.m"
      }
#line 623 "llds_out_file.m"
    return ll_backend__llds_out__llds_out_file__succeeded;
#line 623 "llds_out_file.m"
  }
#line 620 "llds_out_file.m"
}

#line 415 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_module_init_list_15_p_0_1(
#line 415 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 415 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1)
#line 415 "llds_out_file.m"
{
#line 415 "llds_out_file.m"
  {
#line 415 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 415 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 415 "llds_out_file.m"
    {
#line 415 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__succeeded = ll_backend__llds_out__llds_out_file__module_defines_label_with_layout_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
    }
#line 415 "llds_out_file.m"
    return ll_backend__llds_out__llds_out_file__succeeded;
#line 415 "llds_out_file.m"
  }
#line 415 "llds_out_file.m"
}

#line 405 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_module_init_list_15_p_0(
#line 405 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_16,
#line 405 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ModuleName_17,
#line 405 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__AnnotatedModules_18,
#line 405 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__RttiDatas_19,
#line 405 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ProcLayoutDatas_20,
#line 405 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ModuleLayoutDatas_21,
#line 405 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ComplexityProcs_22,
#line 405 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__TSStringTable_23,
#line 405 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__AllocSites_24,
#line 405 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__InitPredNames_25,
#line 405 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__FinalPredNames_26,
#line 405 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_52,
#line 405 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_53)
#line 405 "llds_out_file.m"
{
#line 414 "llds_out_file.m"
  {
#line 414 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 414 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_303_303;
#line 414 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__MustInit_29;
#line 414 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__AlwaysInitAnnotatedModules_31;
#line 414 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__MaybeInitAnnotatedModules_32;
#line 414 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__AlwaysInitAnnotatedModuleBunches_33;
#line 414 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__MaybeInitAnnotatedModuleBunches_34;
#line 414 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ModuleLayoutName_43;

#line 415 "llds_out_file.m"
    {
#line 415 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__MustInit_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 415 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__MustInit_29, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_8[1]));
#line 415 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__MustInit_29, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_c_module_init_list_15_p_0_1));
#line 415 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__MustInit_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 415 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__MustInit_29, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_16));
#line 415 "llds_out_file.m"
    }
#line 10607 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_303_303 = (MR_Word) &ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__type_ctor_info_annotated_c_module_0;
#line 418 "llds_out_file.m"
    {
#line 418 "llds_out_file.m"
      mercury__list__filter_4_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_303_303, ll_backend__llds_out__llds_out_file__MustInit_29, ll_backend__llds_out__llds_out_file__AnnotatedModules_18, &ll_backend__llds_out__llds_out_file__AlwaysInitAnnotatedModules_31, &ll_backend__llds_out__llds_out_file__MaybeInitAnnotatedModules_32);
    }
#line 420 "llds_out_file.m"
    {
#line 420 "llds_out_file.m"
      mercury__list__chunk_3_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_303_303, ll_backend__llds_out__llds_out_file__AlwaysInitAnnotatedModules_31, (MR_Integer) 40, &ll_backend__llds_out__llds_out_file__AlwaysInitAnnotatedModuleBunches_33);
    }
#line 422 "llds_out_file.m"
    {
#line 422 "llds_out_file.m"
      mercury__list__chunk_3_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_303_303, ll_backend__llds_out__llds_out_file__MaybeInitAnnotatedModules_32, (MR_Integer) 40, &ll_backend__llds_out__llds_out_file__MaybeInitAnnotatedModuleBunches_34);
    }
#line 425 "llds_out_file.m"
    {
#line 425 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_init_bunch_defs_6_p_0(ll_backend__llds_out__llds_out_file__Info_16, (MR_String) "always", (MR_Integer) 0, ll_backend__llds_out__llds_out_file__AlwaysInitAnnotatedModuleBunches_33);
    }
#line 429 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__MaybeInitAnnotatedModuleBunches_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 428 "llds_out_file.m"
      {
#line 428 "llds_out_file.m"
      }
#line 429 "llds_out_file.m"
    else
#line 430 "llds_out_file.m"
      {
#line 431 "llds_out_file.m"
        {
#line 431 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__output_init_bunch_defs_6_p_0(ll_backend__llds_out__llds_out_file__Info_16, (MR_String) "maybe", (MR_Integer) 0, ll_backend__llds_out__llds_out_file__MaybeInitAnnotatedModuleBunches_34);
        }
#line 430 "llds_out_file.m"
      }
#line 435 "llds_out_file.m"
    {
#line 435 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "/* suppress gcc -Wmissing-decls warnings */\n");
    }
#line 436 "llds_out_file.m"
    {
#line 436 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "void ");
    }
#line 437 "llds_out_file.m"
    {
#line 437 "llds_out_file.m"
      backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
    }
#line 438 "llds_out_file.m"
    {
#line 438 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "init(void);\n");
    }
#line 440 "llds_out_file.m"
    {
#line 440 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "void ");
    }
#line 441 "llds_out_file.m"
    {
#line 441 "llds_out_file.m"
      backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
    }
#line 442 "llds_out_file.m"
    {
#line 442 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "init_type_tables(void);\n");
    }
#line 443 "llds_out_file.m"
    {
#line 443 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "void ");
    }
#line 444 "llds_out_file.m"
    {
#line 444 "llds_out_file.m"
      backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
    }
#line 445 "llds_out_file.m"
    {
#line 445 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "init_debugger(void);\n");
    }
#line 447 "llds_out_file.m"
    {
#line 447 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#ifdef MR_DEEP_PROFILING\n");
    }
#line 448 "llds_out_file.m"
    {
#line 448 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "void ");
    }
#line 449 "llds_out_file.m"
    {
#line 449 "llds_out_file.m"
      backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
    }
#line 450 "llds_out_file.m"
    {
#line 450 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);\n");
    }
#line 452 "llds_out_file.m"
    {
#line 452 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#endif\n");
    }
#line 454 "llds_out_file.m"
    {
#line 454 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#ifdef MR_RECORD_TERM_SIZES\n");
    }
#line 455 "llds_out_file.m"
    {
#line 455 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "void ");
    }
#line 456 "llds_out_file.m"
    {
#line 456 "llds_out_file.m"
      backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
    }
#line 457 "llds_out_file.m"
    {
#line 457 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "init_complexity_procs(void);\n");
    }
#line 458 "llds_out_file.m"
    {
#line 458 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#endif\n");
    }
#line 460 "llds_out_file.m"
    {
#line 460 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#ifdef MR_THREADSCOPE\n");
    }
#line 461 "llds_out_file.m"
    {
#line 461 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "void ");
    }
#line 462 "llds_out_file.m"
    {
#line 462 "llds_out_file.m"
      backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
    }
#line 463 "llds_out_file.m"
    {
#line 463 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "init_threadscope_string_table(void);\n");
    }
#line 464 "llds_out_file.m"
    {
#line 464 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#endif\n");
    }
#line 468 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__InitPredNames_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 467 "llds_out_file.m"
      {
#line 467 "llds_out_file.m"
      }
#line 468 "llds_out_file.m"
    else
#line 469 "llds_out_file.m"
      {
#line 470 "llds_out_file.m"
        {
#line 470 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "void ");
        }
#line 471 "llds_out_file.m"
        {
#line 471 "llds_out_file.m"
          backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
        }
#line 472 "llds_out_file.m"
        {
#line 472 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "required_init(void);\n");
        }
#line 469 "llds_out_file.m"
      }
#line 477 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__FinalPredNames_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 476 "llds_out_file.m"
      {
#line 476 "llds_out_file.m"
      }
#line 477 "llds_out_file.m"
    else
#line 478 "llds_out_file.m"
      {
#line 479 "llds_out_file.m"
        {
#line 479 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "void ");
        }
#line 480 "llds_out_file.m"
        {
#line 480 "llds_out_file.m"
          backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
        }
#line 481 "llds_out_file.m"
        {
#line 481 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "required_final(void);\n");
        }
#line 478 "llds_out_file.m"
      }
#line 484 "llds_out_file.m"
    {
#line 484 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 486 "llds_out_file.m"
    {
#line 486 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "void ");
    }
#line 487 "llds_out_file.m"
    {
#line 487 "llds_out_file.m"
      backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
    }
#line 488 "llds_out_file.m"
    {
#line 488 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "init(void)\n");
    }
#line 489 "llds_out_file.m"
    {
#line 489 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "{\n");
    }
#line 490 "llds_out_file.m"
    {
#line 490 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\tstatic MR_bool done = MR_FALSE;\n");
    }
#line 491 "llds_out_file.m"
    {
#line 491 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\tif (done) {\n");
    }
#line 492 "llds_out_file.m"
    {
#line 492 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\treturn;\n");
    }
#line 493 "llds_out_file.m"
    {
#line 493 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\t}\n");
    }
#line 494 "llds_out_file.m"
    {
#line 494 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\tdone = MR_TRUE;\n");
    }
#line 496 "llds_out_file.m"
    {
#line 496 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_init_bunch_calls_6_p_0(ll_backend__llds_out__llds_out_file__Info_16, (MR_String) "always", (MR_Integer) 0, ll_backend__llds_out__llds_out_file__AlwaysInitAnnotatedModuleBunches_33);
    }
#line 500 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__MaybeInitAnnotatedModuleBunches_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 499 "llds_out_file.m"
      {
#line 499 "llds_out_file.m"
      }
#line 500 "llds_out_file.m"
    else
#line 501 "llds_out_file.m"
      {
#line 502 "llds_out_file.m"
        {
#line 502 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__output_init_bunch_calls_6_p_0(ll_backend__llds_out__llds_out_file__Info_16, (MR_String) "maybe", (MR_Integer) 0, ll_backend__llds_out__llds_out_file__MaybeInitAnnotatedModuleBunches_34);
        }
#line 501 "llds_out_file.m"
      }
#line 506 "llds_out_file.m"
    {
#line 506 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_c_data_init_list_3_p_0(ll_backend__llds_out__llds_out_file__RttiDatas_19);
    }
#line 507 "llds_out_file.m"
    {
#line 507 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_alloc_sites_init_4_p_0(ll_backend__llds_out__llds_out_file__Info_16, ll_backend__llds_out__llds_out_file__AllocSites_24);
    }
#line 513 "llds_out_file.m"
    {
#line 513 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\t");
    }
#line 514 "llds_out_file.m"
    {
#line 514 "llds_out_file.m"
      backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
    }
#line 515 "llds_out_file.m"
    {
#line 515 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "init_debugger();\n");
    }
#line 516 "llds_out_file.m"
    {
#line 516 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "}\n\n");
    }
#line 518 "llds_out_file.m"
    {
#line 518 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "void ");
    }
#line 519 "llds_out_file.m"
    {
#line 519 "llds_out_file.m"
      backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
    }
#line 520 "llds_out_file.m"
    {
#line 520 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "init_type_tables(void)\n");
    }
#line 521 "llds_out_file.m"
    {
#line 521 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "{\n");
    }
#line 522 "llds_out_file.m"
    {
#line 522 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\tstatic MR_bool done = MR_FALSE;\n");
    }
#line 523 "llds_out_file.m"
    {
#line 523 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\tif (done) {\n");
    }
#line 524 "llds_out_file.m"
    {
#line 524 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\treturn;\n");
    }
#line 525 "llds_out_file.m"
    {
#line 525 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\t}\n");
    }
#line 526 "llds_out_file.m"
    {
#line 526 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\tdone = MR_TRUE;\n");
    }
#line 527 "llds_out_file.m"
    {
#line 527 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_type_tables_init_list_3_p_0(ll_backend__llds_out__llds_out_file__RttiDatas_19);
    }
#line 528 "llds_out_file.m"
    {
#line 528 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "}\n\n");
    }
#line 530 "llds_out_file.m"
    {
#line 530 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 531 "llds_out_file.m"
    {
#line 531 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "void ");
    }
#line 532 "llds_out_file.m"
    {
#line 532 "llds_out_file.m"
      backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
    }
#line 533 "llds_out_file.m"
    {
#line 533 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "init_debugger(void)\n");
    }
#line 534 "llds_out_file.m"
    {
#line 534 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "{\n");
    }
#line 535 "llds_out_file.m"
    {
#line 535 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\tstatic MR_bool done = MR_FALSE;\n");
    }
#line 536 "llds_out_file.m"
    {
#line 536 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\tif (done) {\n");
    }
#line 537 "llds_out_file.m"
    {
#line 537 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\treturn;\n");
    }
#line 538 "llds_out_file.m"
    {
#line 538 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\t}\n");
    }
#line 539 "llds_out_file.m"
    {
#line 539 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\tdone = MR_TRUE;\n");
    }
#line 540 "llds_out_file.m"
    {
#line 540 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_debugger_init_list_3_p_0(ll_backend__llds_out__llds_out_file__ModuleLayoutDatas_21);
    }
#line 541 "llds_out_file.m"
    {
#line 541 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "}\n\n");
    }
#line 543 "llds_out_file.m"
    {
#line 543 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#ifdef MR_DEEP_PROFILING\n");
    }
#line 544 "llds_out_file.m"
    {
#line 544 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\nvoid ");
    }
#line 545 "llds_out_file.m"
    {
#line 545 "llds_out_file.m"
      backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
    }
#line 546 "llds_out_file.m"
    {
#line 546 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)\n");
    }
#line 548 "llds_out_file.m"
    {
#line 548 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "{\n");
    }
#line 549 "llds_out_file.m"
    {
#line 549 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\tMR_write_out_module_proc_reps_start(procrep_fp, &");
    }
#line 551 "llds_out_file.m"
    {
#line 551 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__ModuleLayoutName_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 551 "llds_out_file.m"
      MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__ModuleLayoutName_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
#line 551 "llds_out_file.m"
      MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__ModuleLayoutName_43, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__ModuleName_17));
#line 551 "llds_out_file.m"
    }
#line 552 "llds_out_file.m"
    {
#line 552 "llds_out_file.m"
      ll_backend__layout_out__output_layout_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleLayoutName_43);
    }
#line 553 "llds_out_file.m"
    {
#line 553 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) ");\n");
    }
#line 554 "llds_out_file.m"
    {
#line 554 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_write_proc_static_list_3_p_0(ll_backend__llds_out__llds_out_file__ProcLayoutDatas_20);
    }
#line 555 "llds_out_file.m"
    {
#line 555 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\tMR_write_out_module_proc_reps_end(procrep_fp);\n");
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
      mercury__io__write_string_3_p_0((MR_String) "#ifdef MR_RECORD_TERM_SIZES\n");
    }
#line 560 "llds_out_file.m"
    {
#line 560 "llds_out_file.m"
      ll_backend__llds_out__llds_out_global__output_complexity_arg_info_arrays_3_p_0(ll_backend__llds_out__llds_out_file__ComplexityProcs_22);
    }
#line 561 "llds_out_file.m"
    {
#line 561 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\nvoid ");
    }
#line 562 "llds_out_file.m"
    {
#line 562 "llds_out_file.m"
      backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
    }
#line 563 "llds_out_file.m"
    {
#line 563 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "init_complexity_procs(void)\n");
    }
#line 564 "llds_out_file.m"
    {
#line 564 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "{\n");
    }
#line 565 "llds_out_file.m"
    {
#line 565 "llds_out_file.m"
      ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_p_0(ll_backend__llds_out__llds_out_file__ComplexityProcs_22);
    }
#line 566 "llds_out_file.m"
    {
#line 566 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "}\n");
    }
#line 567 "llds_out_file.m"
    {
#line 567 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\n#endif\n\n");
    }
#line 569 "llds_out_file.m"
    {
#line 569 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#ifdef MR_THREADSCOPE\n");
    }
#line 570 "llds_out_file.m"
    {
#line 570 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\nvoid ");
    }
#line 571 "llds_out_file.m"
    {
#line 571 "llds_out_file.m"
      backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
    }
#line 572 "llds_out_file.m"
    {
#line 572 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "init_threadscope_string_table(void)\n");
    }
#line 573 "llds_out_file.m"
    {
#line 573 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "{\n");
    }
#line 576 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__TSStringTable_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 575 "llds_out_file.m"
      {
#line 575 "llds_out_file.m"
      }
#line 576 "llds_out_file.m"
    else
#line 577 "llds_out_file.m"
      {
#line 577 "llds_out_file.m"
        MR_Integer ll_backend__llds_out__llds_out_file__TSStringTableSize_46;
#line 577 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__MangledModuleName_47;
#line 577 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__V_308_308;
#line 581 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_282_282;
#line 581 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__V_283_283;
#line 581 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_284_284;
#line 581 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_285_285;
#line 581 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_286_286;
#line 581 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_287_287;
#line 581 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_288_288;
#line 581 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_289_289;
#line 581 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_290_290;
#line 581 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_291_291;
#line 581 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_292_292;
#line 581 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_293_293;
#line 581 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_294_294;
#line 581 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_295_295;
#line 581 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_296_296;
#line 581 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_297_297;
#line 581 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_298_298;
#line 581 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_299_299;
#line 581 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_300_300;
#line 581 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_301_301;
#line 581 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_302_302;

#line 578 "llds_out_file.m"
        {
#line 578 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__TSStringTableSize_46 = mercury__list__length_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ll_backend__llds_out__llds_out_file__TSStringTable_23);
        }
#line 579 "llds_out_file.m"
        {
#line 579 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "\tMR_threadscope_register_strings_array(\n");
        }
#line 580 "llds_out_file.m"
        {
#line 580 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "\t\t");
        }
#line 581 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_282_282 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 0)));
#line 581 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__MangledModuleName_47 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 1)));
#line 581 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_283_283 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 2)));
#line 581 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_284_284 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 3)));
#line 581 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_285_285 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 4)));
#line 581 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_286_286 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 5)));
#line 581 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_287_287 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 6)));
#line 581 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_288_288 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 581 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_289_289 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 581 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_290_290 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 581 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_291_291 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 581 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_292_292 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 581 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_293_293 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 581 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_294_294 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 581 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_295_295 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 581 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_296_296 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 581 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_297_297 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 581 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_298_298 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 581 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_299_299 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 581 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_300_300 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 581 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_301_301 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 581 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_302_302 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 8)));
#line 582 "llds_out_file.m"
        {
#line 582 "llds_out_file.m"
          ll_backend__layout_out__output_layout_array_name_5_p_0((MR_Integer) 1, ll_backend__llds_out__llds_out_file__MangledModuleName_47, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)));
        }
#line 584 "llds_out_file.m"
        {
#line 584 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) ", ");
        }
#line 584 "llds_out_file.m"
        {
#line 584 "llds_out_file.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_9[0], ll_backend__llds_out__llds_out_file__TSStringTableSize_46, &ll_backend__llds_out__llds_out_file__V_308_308);
        }
#line 584 "llds_out_file.m"
        {
#line 584 "llds_out_file.m"
          mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__V_308_308);
        }
#line 584 "llds_out_file.m"
        {
#line 584 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) ");\n");
        }
#line 577 "llds_out_file.m"
      }
#line 586 "llds_out_file.m"
    {
#line 586 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "}\n");
    }
#line 587 "llds_out_file.m"
    {
#line 587 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\n#endif\n\n");
    }
#line 591 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__InitPredNames_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 590 "llds_out_file.m"
      {
#line 590 "llds_out_file.m"
      }
#line 591 "llds_out_file.m"
    else
#line 592 "llds_out_file.m"
      {
#line 593 "llds_out_file.m"
        {
#line 593 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "void ");
        }
#line 594 "llds_out_file.m"
        {
#line 594 "llds_out_file.m"
          backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
        }
#line 595 "llds_out_file.m"
        {
#line 595 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "required_init(void)\n");
        }
#line 596 "llds_out_file.m"
        {
#line 596 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "{\n");
        }
#line 597 "llds_out_file.m"
        {
#line 597 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__output_required_init_or_final_calls_3_p_0(ll_backend__llds_out__llds_out_file__InitPredNames_25);
        }
#line 598 "llds_out_file.m"
        {
#line 598 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "}\n");
        }
#line 599 "llds_out_file.m"
        {
#line 599 "llds_out_file.m"
          mercury__io__nl_2_p_0();
        }
#line 592 "llds_out_file.m"
      }
#line 604 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__FinalPredNames_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 603 "llds_out_file.m"
      {
#line 603 "llds_out_file.m"
      }
#line 604 "llds_out_file.m"
    else
#line 605 "llds_out_file.m"
      {
#line 606 "llds_out_file.m"
        {
#line 606 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "void ");
        }
#line 607 "llds_out_file.m"
        {
#line 607 "llds_out_file.m"
          backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
        }
#line 608 "llds_out_file.m"
        {
#line 608 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "required_final(void)\n");
        }
#line 609 "llds_out_file.m"
        {
#line 609 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "{\n");
        }
#line 610 "llds_out_file.m"
        {
#line 610 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__output_required_init_or_final_calls_3_p_0(ll_backend__llds_out__llds_out_file__FinalPredNames_26);
        }
#line 611 "llds_out_file.m"
        {
#line 611 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "}\n");
        }
#line 605 "llds_out_file.m"
      }
#line 614 "llds_out_file.m"
    {
#line 614 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "/* ensure everything is compiled with the same grade */\n");
    }
#line 617 "llds_out_file.m"
    {
#line 617 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "static const void *const MR_grade = &MR_GRADE_VAR;\n");
    }
#line 414 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_53 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_52;
#line 414 "llds_out_file.m"
  }
#line 405 "llds_out_file.m"
}

#line 382 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__gather_labels_from_instrs_acc_5_p_0(
#line 382 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 382 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_0_2,
#line 382 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_3,
#line 382 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_0_4,
#line 382 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_5)
#line 382 "llds_out_file.m"
{
#line 386 "llds_out_file.m"
  while (MR_TRUE)
#line 386 "llds_out_file.m"
    {
#line 386 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 386 "llds_out_file.m"
      {
#line 386 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 386 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 386 "llds_out_file.m"
          {
#line 386 "llds_out_file.m"
            *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_5 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_0_4;
#line 386 "llds_out_file.m"
            *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_3 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_0_2;
#line 386 "llds_out_file.m"
          }
#line 386 "llds_out_file.m"
        else
#line 388 "llds_out_file.m"
          {
#line 388 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Instr_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 388 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Instrs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 388 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_27_27;
#line 388 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_28_28;
#line 389 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Label_16;
#line 389 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Instr_12, (MR_Integer) 0)));
#line 389 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Instr_12, (MR_Integer) 1)));

#line 389 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__V_26_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__V_26_26, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 389 "llds_out_file.m"
            if (ll_backend__llds_out__llds_out_file__succeeded)
#line 389 "llds_out_file.m"
              {
#line 389 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__Label_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__V_26_26, (MR_Integer) 1)));
#line 393 "llds_out_file.m"
                if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Label_16)) == (MR_mktag((MR_Integer) 1))))
#line 391 "llds_out_file.m"
                  {
#line 392 "llds_out_file.m"
                    {
#line 392 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 392 "llds_out_file.m"
                      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_28_28, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_16));
#line 392 "llds_out_file.m"
                      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_28_28, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_0_2));
#line 392 "llds_out_file.m"
                    }
#line 391 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_27_27 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_0_4;
#line 391 "llds_out_file.m"
                  }
#line 393 "llds_out_file.m"
                else
#line 394 "llds_out_file.m"
                  {
#line 395 "llds_out_file.m"
                    {
#line 395 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 395 "llds_out_file.m"
                      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_27_27, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_16));
#line 395 "llds_out_file.m"
                      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_27_27, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_0_4));
#line 395 "llds_out_file.m"
                    }
#line 394 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_28_28 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_0_2;
#line 394 "llds_out_file.m"
                  }
#line 389 "llds_out_file.m"
              }
#line 389 "llds_out_file.m"
            else
#line 398 "llds_out_file.m"
              {
#line 398 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_27_27 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_0_4;
#line 398 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_28_28 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_0_2;
#line 398 "llds_out_file.m"
              }
#line 400 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 400 "llds_out_file.m"
            {
#line 400 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__Instrs_13;
#line 400 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_0__tmp_copy_2 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_28_28;
#line 400 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_0__tmp_copy_4 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_27_27;

#line 400 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_0_4 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_0__tmp_copy_4;
#line 400 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_0_2 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_0__tmp_copy_2;
#line 400 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 400 "llds_out_file.m"
            }
#line 400 "llds_out_file.m"
            continue;
#line 388 "llds_out_file.m"
          }
#line 386 "llds_out_file.m"
      }
#line 386 "llds_out_file.m"
      break;
#line 386 "llds_out_file.m"
    }
#line 382 "llds_out_file.m"
}

#line 373 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__annotate_c_procedure_9_p_0_1(
#line 373 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 373 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1)
#line 373 "llds_out_file.m"
{
#line 373 "llds_out_file.m"
  {
#line 373 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 373 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 373 "llds_out_file.m"
    {
#line 373 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__succeeded = ll_backend__llds_out__llds_out_file__IntroducedFrom__pred__annotate_c_procedure__373__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
    }
#line 373 "llds_out_file.m"
    return ll_backend__llds_out__llds_out_file__succeeded;
#line 373 "llds_out_file.m"
  }
#line 373 "llds_out_file.m"
}

#line 324 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__annotate_c_procedure_9_p_0(
#line 324 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_10,
#line 324 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Proc_11,
#line 324 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__AnnotatedProc_12,
#line 324 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllEntryLabels_0_30,
#line 324 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllEntryLabels_31,
#line 324 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllInternalLabels_0_32,
#line 324 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllInternalLabels_33,
#line 324 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_0_34,
#line 324 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_35)
#line 324 "llds_out_file.m"
{
#line 330 "llds_out_file.m"
  {
#line 330 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 330 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85;
#line 330 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ProcEnvVarNames_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 8)));
#line 330 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__Instrs_17;
#line 330 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__RevEntryLabels_18;
#line 330 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__RevInternalLabels0_19;
#line 330 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__EntryLabels_20;
#line 330 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__InternalLabels0_21;
#line 330 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__CallerLabel_22;
#line 330 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ContLabels_23;
#line 330 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__EmitCLoops_24;
#line 330 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__WhileLabels_25;
#line 330 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__UndefWhileLabels_26;
#line 330 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__LabelOutputInfo_28;
#line 330 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__InternalLabels_29;
#line 330 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_39_39;
#line 330 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_44_44;
#line 330 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_46_46;
#line 331 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_47_47 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 0)));
#line 331 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 1)));
#line 331 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 2)));
#line 331 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 3)));
#line 331 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 4)));
#line 331 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 5)));
#line 331 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 6)));
#line 331 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 7)));
#line 334 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_55_55;
#line 334 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__V_56_56;
#line 334 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_57_57;
#line 334 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_58_58;
#line 334 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_59_59;
#line 334 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_60_60;
#line 334 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_61_61;
#line 334 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_62_62;
#line 342 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_63_63;
#line 342 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_64_64;
#line 342 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_65_65;
#line 342 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_66_66;
#line 342 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_67_67;
#line 342 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_68_68;
#line 342 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_69_69;
#line 342 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_70_70;
#line 342 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_71_71;
#line 342 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_72_72;
#line 342 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_73_73;
#line 342 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_74_74;
#line 342 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_75_75;
#line 342 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_76_76;
#line 342 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_77_77;
#line 342 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_78_78;
#line 342 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_79_79;
#line 342 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_80_80;
#line 342 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_81_81;
#line 342 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_82_82;
#line 342 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_83_83;

#line 332 "llds_out_file.m"
    {
#line 332 "llds_out_file.m"
      mercury__set__union_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ll_backend__llds_out__llds_out_file__ProcEnvVarNames_16, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_0_34, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_35);
    }
#line 334 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_55_55 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 0)));
#line 334 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 1)));
#line 334 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 2)));
#line 334 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 3)));
#line 334 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 4)));
#line 334 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__Instrs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 5)));
#line 334 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 6)));
#line 334 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 7)));
#line 334 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 8)));
#line 335 "llds_out_file.m"
    {
#line 335 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__gather_labels_from_instrs_acc_5_p_0(ll_backend__llds_out__llds_out_file__Instrs_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__RevEntryLabels_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__RevInternalLabels0_19);
    }
#line 11778 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 337 "llds_out_file.m"
    {
#line 337 "llds_out_file.m"
      mercury__list__reverse_2_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85, ll_backend__llds_out__llds_out_file__RevEntryLabels_18, &ll_backend__llds_out__llds_out_file__EntryLabels_20);
    }
#line 338 "llds_out_file.m"
    {
#line 338 "llds_out_file.m"
      mercury__list__reverse_2_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85, ll_backend__llds_out__llds_out_file__RevInternalLabels0_19, &ll_backend__llds_out__llds_out_file__InternalLabels0_21);
    }
#line 340 "llds_out_file.m"
    {
#line 340 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__find_caller_label_2_p_0(ll_backend__llds_out__llds_out_file__Instrs_17, &ll_backend__llds_out__llds_out_file__CallerLabel_22);
    }
#line 341 "llds_out_file.m"
    {
#line 341 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_39_39 = mercury__set_tree234__init_0_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85);
    }
#line 341 "llds_out_file.m"
    {
#line 341 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__find_cont_labels_3_p_0(ll_backend__llds_out__llds_out_file__Instrs_17, ll_backend__llds_out__llds_out_file__V_39_39, &ll_backend__llds_out__llds_out_file__ContLabels_23);
    }
#line 342 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 0)));
#line 342 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_64_64 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 1)));
#line 342 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_65_65 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 2)));
#line 342 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 3)));
#line 342 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 4)));
#line 342 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 5)));
#line 342 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 6)));
#line 342 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_70_70 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 342 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 342 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__EmitCLoops_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 342 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 342 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 342 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 342 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_75_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 342 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_76_76 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 342 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_77_77 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 342 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_78_78 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 342 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_79_79 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 342 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_80_80 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 342 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_81_81 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 342 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_82_82 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 342 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 8)));
#line 347 "llds_out_file.m"
#line 347 "llds_out_file.m"
    switch (ll_backend__llds_out__llds_out_file__EmitCLoops_24) {
#line 347 "llds_out_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 347 "llds_out_file.m"
      case (MR_Integer) 0:
#line 344 "llds_out_file.m"
        {
#line 345 "llds_out_file.m"
          {
#line 345 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__WhileLabels_25 = mercury__set_tree234__init_0_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85);
          }
#line 346 "llds_out_file.m"
          {
#line 346 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__UndefWhileLabels_26 = mercury__set_tree234__init_0_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85);
          }
#line 344 "llds_out_file.m"
        }
#line 347 "llds_out_file.m"
        break;
#line 347 "llds_out_file.m"
      case (MR_Integer) 1:
#line 348 "llds_out_file.m"
        {
#line 348 "llds_out_file.m"
          MR_Word ll_backend__llds_out__llds_out_file__UndefWhileLabels0_27;
#line 348 "llds_out_file.m"
          MR_Word ll_backend__llds_out__llds_out_file__V_40_40;

#line 349 "llds_out_file.m"
          {
#line 349 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_40_40 = mercury__set_tree234__init_0_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85);
          }
#line 349 "llds_out_file.m"
          {
#line 349 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__find_while_labels_3_p_0(ll_backend__llds_out__llds_out_file__Instrs_17, ll_backend__llds_out__llds_out_file__V_40_40, &ll_backend__llds_out__llds_out_file__WhileLabels_25);
          }
#line 357 "llds_out_file.m"
          {
#line 357 "llds_out_file.m"
            mercury__set_tree234__difference_3_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85, ll_backend__llds_out__llds_out_file__WhileLabels_25, ll_backend__llds_out__llds_out_file__ContLabels_23, &ll_backend__llds_out__llds_out_file__UndefWhileLabels0_27);
          }
#line 358 "llds_out_file.m"
          {
#line 358 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__succeeded = mercury__set_tree234__is_empty_1_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85, ll_backend__llds_out__llds_out_file__UndefWhileLabels0_27);
          }
#line 358 "llds_out_file.m"
          if (ll_backend__llds_out__llds_out_file__succeeded)
#line 359 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__UndefWhileLabels_26 = ll_backend__llds_out__llds_out_file__UndefWhileLabels0_27;
#line 358 "llds_out_file.m"
          else
#line 364 "llds_out_file.m"
            {
#line 364 "llds_out_file.m"
              {
#line 364 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__find_while_labels_to_define_5_p_0(ll_backend__llds_out__llds_out_file__Instrs_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__llds_out__llds_out_file__WhileLabels_25, ll_backend__llds_out__llds_out_file__UndefWhileLabels0_27, &ll_backend__llds_out__llds_out_file__UndefWhileLabels_26);
              }
#line 364 "llds_out_file.m"
            }
#line 348 "llds_out_file.m"
        }
#line 347 "llds_out_file.m"
        break;
#line 347 "llds_out_file.m"
    }
#line 368 "llds_out_file.m"
    {
#line 368 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__LabelOutputInfo_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 368 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__LabelOutputInfo_28, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__CallerLabel_22));
#line 368 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__LabelOutputInfo_28, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__ContLabels_23));
#line 368 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__LabelOutputInfo_28, 2) = ((MR_Box) (ll_backend__llds_out__llds_out_file__WhileLabels_25));
#line 368 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__LabelOutputInfo_28, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__UndefWhileLabels_26));
#line 368 "llds_out_file.m"
    }
#line 370 "llds_out_file.m"
    {
#line 370 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__succeeded = mercury__set_tree234__is_empty_1_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85, ll_backend__llds_out__llds_out_file__UndefWhileLabels_26);
    }
#line 370 "llds_out_file.m"
    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 371 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__InternalLabels_29 = ll_backend__llds_out__llds_out_file__InternalLabels0_21;
#line 370 "llds_out_file.m"
    else
#line 373 "llds_out_file.m"
      {
#line 373 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_42_42;

#line 373 "llds_out_file.m"
        {
#line 373 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 373 "llds_out_file.m"
          MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_42_42, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_8[0]));
#line 373 "llds_out_file.m"
          MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_42_42, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__annotate_c_procedure_9_p_0_1));
#line 373 "llds_out_file.m"
          MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_42_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 373 "llds_out_file.m"
          MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_42_42, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__UndefWhileLabels_26));
#line 373 "llds_out_file.m"
        }
#line 373 "llds_out_file.m"
        {
#line 373 "llds_out_file.m"
          mercury__list__negated_filter_3_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85, ll_backend__llds_out__llds_out_file__V_42_42, ll_backend__llds_out__llds_out_file__InternalLabels0_21, &ll_backend__llds_out__llds_out_file__InternalLabels_29);
        }
#line 373 "llds_out_file.m"
      }
#line 376 "llds_out_file.m"
    {
#line 376 "llds_out_file.m"
      MR_Word base;
#line 376 "llds_out_file.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 376 "llds_out_file.m"
      *ll_backend__llds_out__llds_out_file__AnnotatedProc_12 = base;
#line 376 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Proc_11));
#line 376 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__LabelOutputInfo_28));
#line 376 "llds_out_file.m"
    }
#line 378 "llds_out_file.m"
    {
#line 378 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_44_44 = mercury__cord__from_list_1_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85, ll_backend__llds_out__llds_out_file__EntryLabels_20);
    }
#line 378 "llds_out_file.m"
    {
#line 378 "llds_out_file.m"
      *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllEntryLabels_31 = mercury__cord__f_43_43_2_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllEntryLabels_0_30, ll_backend__llds_out__llds_out_file__V_44_44);
    }
#line 380 "llds_out_file.m"
    {
#line 380 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_46_46 = mercury__cord__from_list_1_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85, ll_backend__llds_out__llds_out_file__InternalLabels_29);
    }
#line 379 "llds_out_file.m"
    {
#line 379 "llds_out_file.m"
      *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllInternalLabels_33 = mercury__cord__f_43_43_2_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllInternalLabels_0_32, ll_backend__llds_out__llds_out_file__V_46_46);
    }
#line 330 "llds_out_file.m"
  }
#line 324 "llds_out_file.m"
}

#line 310 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__annotate_c_procedures_9_p_0(
#line 310 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_1,
#line 310 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2,
#line 310 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__HeadVar__3_3,
#line 310 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllEntryLabels_0_4,
#line 310 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllEntryLabels_5,
#line 310 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllInternalLabels_0_6,
#line 310 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllInternalLabels_7,
#line 310 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_0_8,
#line 310 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_9)
#line 310 "llds_out_file.m"
{
#line 315 "llds_out_file.m"
  {
#line 315 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 315 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 315 "llds_out_file.m"
      {
#line 315 "llds_out_file.m"
        *ll_backend__llds_out__llds_out_file__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 316 "llds_out_file.m"
        *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_9 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_0_8;
#line 316 "llds_out_file.m"
        *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllInternalLabels_7 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllInternalLabels_0_6;
#line 316 "llds_out_file.m"
        *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllEntryLabels_5 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllEntryLabels_0_4;
#line 315 "llds_out_file.m"
      }
#line 315 "llds_out_file.m"
    else
#line 318 "llds_out_file.m"
      {
#line 318 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__Proc_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 0)));
#line 318 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__Procs_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 1)));
#line 318 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__AnnotatedProc_23;
#line 318 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__AnnotatedProcs_24;
#line 318 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllEntryLabels_34_34;
#line 318 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllInternalLabels_35_35;
#line 318 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_36_36;

#line 319 "llds_out_file.m"
        {
#line 319 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__annotate_c_procedure_9_p_0(ll_backend__llds_out__llds_out_file__Info_1, ll_backend__llds_out__llds_out_file__Proc_21, &ll_backend__llds_out__llds_out_file__AnnotatedProc_23, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllEntryLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllEntryLabels_34_34, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllInternalLabels_0_6, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllInternalLabels_35_35, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_0_8, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_36_36);
        }
#line 321 "llds_out_file.m"
        {
#line 321 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__annotate_c_procedures_9_p_0(ll_backend__llds_out__llds_out_file__Info_1, ll_backend__llds_out__llds_out_file__Procs_22, &ll_backend__llds_out__llds_out_file__AnnotatedProcs_24, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllEntryLabels_34_34, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllEntryLabels_5, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllInternalLabels_35_35, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllInternalLabels_7, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_36_36, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_9);
        }
#line 317 "llds_out_file.m"
        {
#line 317 "llds_out_file.m"
          MR_Word base;
#line 317 "llds_out_file.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 317 "llds_out_file.m"
          *ll_backend__llds_out__llds_out_file__HeadVar__3_3 = base;
#line 317 "llds_out_file.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__AnnotatedProc_23));
#line 317 "llds_out_file.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__AnnotatedProcs_24));
#line 317 "llds_out_file.m"
        }
#line 318 "llds_out_file.m"
      }
#line 315 "llds_out_file.m"
  }
#line 310 "llds_out_file.m"
}

#line 278 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__annotate_c_modules_9_p_0(
#line 278 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_1,
#line 278 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2,
#line 278 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__HeadVar__3_3,
#line 278 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EntryLabels_0_4,
#line 278 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EntryLabels_5,
#line 278 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabels_0_6,
#line 278 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabels_7,
#line 278 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_0_8,
#line 278 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_9)
#line 278 "llds_out_file.m"
{
#line 283 "llds_out_file.m"
  {
#line 283 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 283 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 283 "llds_out_file.m"
      {
#line 283 "llds_out_file.m"
        *ll_backend__llds_out__llds_out_file__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 283 "llds_out_file.m"
        *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_9 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_0_8;
#line 283 "llds_out_file.m"
        *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabels_7 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabels_0_6;
#line 283 "llds_out_file.m"
        *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EntryLabels_5 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EntryLabels_0_4;
#line 283 "llds_out_file.m"
      }
#line 283 "llds_out_file.m"
    else
#line 286 "llds_out_file.m"
      {
#line 286 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_34_64 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 286 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__Module_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 0)));
#line 286 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__Modules_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 1)));
#line 286 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__AnnotatedModule_23;
#line 286 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__AnnotatedModules_24;
#line 286 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EntryLabels_34_34;
#line 286 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabels_35_35;
#line 286 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_36_36;
#line 286 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__ModuleName_52 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Module_21, (MR_Integer) 0)));
#line 286 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__Procs_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Module_21, (MR_Integer) 1)));
#line 286 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__AnnotatedProcs_54;
#line 286 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__ModuleEntryLabels_55;
#line 286 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__ModuleInternalLabels_56;
#line 286 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__ModuleEntryLabelList_57;
#line 286 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__ModuleInternalLabelList_58;
#line 286 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_59_59;
#line 286 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_60_60;

#line 301 "llds_out_file.m"
        {
#line 301 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__V_59_59 = mercury__cord__init_0_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_34_64);
        }
#line 301 "llds_out_file.m"
        {
#line 301 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__V_60_60 = mercury__cord__init_0_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_34_64);
        }
#line 300 "llds_out_file.m"
        {
#line 300 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__annotate_c_procedures_9_p_0(ll_backend__llds_out__llds_out_file__Info_1, ll_backend__llds_out__llds_out_file__Procs_53, &ll_backend__llds_out__llds_out_file__AnnotatedProcs_54, ll_backend__llds_out__llds_out_file__V_59_59, &ll_backend__llds_out__llds_out_file__ModuleEntryLabels_55, ll_backend__llds_out__llds_out_file__V_60_60, &ll_backend__llds_out__llds_out_file__ModuleInternalLabels_56, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_0_8, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_36_36);
        }
#line 303 "llds_out_file.m"
        {
#line 303 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__ModuleEntryLabelList_57 = mercury__cord__list_1_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_34_64, ll_backend__llds_out__llds_out_file__ModuleEntryLabels_55);
        }
#line 304 "llds_out_file.m"
        {
#line 304 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__ModuleInternalLabelList_58 = mercury__cord__list_1_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_34_64, ll_backend__llds_out__llds_out_file__ModuleInternalLabels_56);
        }
#line 305 "llds_out_file.m"
        {
#line 305 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__AnnotatedModule_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 305 "llds_out_file.m"
          MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__AnnotatedModule_23, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__ModuleName_52));
#line 305 "llds_out_file.m"
          MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__AnnotatedModule_23, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__AnnotatedProcs_54));
#line 305 "llds_out_file.m"
          MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__AnnotatedModule_23, 2) = ((MR_Box) (ll_backend__llds_out__llds_out_file__ModuleEntryLabelList_57));
#line 305 "llds_out_file.m"
          MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__AnnotatedModule_23, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__ModuleInternalLabelList_58));
#line 305 "llds_out_file.m"
        }
#line 307 "llds_out_file.m"
        {
#line 307 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EntryLabels_34_34 = mercury__cord__f_43_43_2_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_34_64, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EntryLabels_0_4, ll_backend__llds_out__llds_out_file__ModuleEntryLabels_55);
        }
#line 308 "llds_out_file.m"
        {
#line 308 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabels_35_35 = mercury__cord__f_43_43_2_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_34_64, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabels_0_6, ll_backend__llds_out__llds_out_file__ModuleInternalLabels_56);
        }
#line 289 "llds_out_file.m"
        {
#line 289 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__annotate_c_modules_9_p_0(ll_backend__llds_out__llds_out_file__Info_1, ll_backend__llds_out__llds_out_file__Modules_22, &ll_backend__llds_out__llds_out_file__AnnotatedModules_24, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EntryLabels_34_34, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EntryLabels_5, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabels_35_35, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabels_7, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_36_36, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_9);
        }
#line 285 "llds_out_file.m"
        {
#line 285 "llds_out_file.m"
          MR_Word base;
#line 285 "llds_out_file.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 285 "llds_out_file.m"
          *ll_backend__llds_out__llds_out_file__HeadVar__3_3 = base;
#line 285 "llds_out_file.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__AnnotatedModule_23));
#line 285 "llds_out_file.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__AnnotatedModules_24));
#line 285 "llds_out_file.m"
        }
#line 286 "llds_out_file.m"
      }
#line 283 "llds_out_file.m"
  }
#line 278 "llds_out_file.m"
}

#line 221 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_file_mercury_headers_3_p_0(
#line 221 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_4)
#line 221 "llds_out_file.m"
{
#line 224 "llds_out_file.m"
  {
#line 224 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 224 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TraceLevel_6;
#line 224 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TraceLevelIsNone_7;
#line 224 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__DeepProfile_8;
#line 224 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__GenerateBytecode_9;
#line 227 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_22_22;
#line 227 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_23_23;
#line 227 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_24_24;
#line 227 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_25_25;
#line 227 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_26_26;
#line 227 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_27_27;
#line 227 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_28_28;
#line 227 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_29_29;
#line 227 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_30_30;
#line 227 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_31_31;
#line 227 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_32_32;
#line 227 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_33_33;
#line 227 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_34_34;
#line 227 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_35_35;
#line 227 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_36_36;
#line 227 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_37_37;
#line 227 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_38_38;
#line 227 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_39_39;
#line 227 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_40_40;
#line 227 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_41_41;
#line 227 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_42_42;
#line 235 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_43_43;
#line 235 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_44_44;
#line 235 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_45_45;
#line 235 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_46_46;
#line 235 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_47_47;
#line 235 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_48_48;
#line 235 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_49_49;
#line 235 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_50_50;
#line 235 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_51_51;
#line 235 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_52_52;
#line 235 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_54_54;
#line 235 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_55_55;
#line 235 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_56_56;
#line 235 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_57_57;
#line 235 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_58_58;
#line 235 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_59_59;
#line 235 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_60_60;
#line 235 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_61_61;
#line 235 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_62_62;
#line 235 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_63_63;

#line 225 "llds_out_file.m"
    {
#line 225 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#define MR_ALLOW_RESET\n");
    }
#line 226 "llds_out_file.m"
    {
#line 226 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#include \"mercury_imp.h\"\n");
    }
#line 227 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 0)));
#line 227 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 1)));
#line 227 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 2)));
#line 227 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 3)));
#line 227 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 4)));
#line 227 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 5)));
#line 227 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 6)));
#line 227 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 227 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 227 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 227 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 227 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 227 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 227 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 227 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 227 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 227 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 227 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 227 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 227 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 227 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__TraceLevel_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 227 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 8)));
#line 228 "llds_out_file.m"
    {
#line 228 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__TraceLevelIsNone_7 = libs__trace_params__given_trace_level_is_none_1_f_0(ll_backend__llds_out__llds_out_file__TraceLevel_6);
    }
#line 232 "llds_out_file.m"
#line 232 "llds_out_file.m"
    switch (ll_backend__llds_out__llds_out_file__TraceLevelIsNone_7) {
#line 232 "llds_out_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 232 "llds_out_file.m"
      case (MR_Integer) 0:
#line 230 "llds_out_file.m"
        {
#line 231 "llds_out_file.m"
          {
#line 231 "llds_out_file.m"
            mercury__io__write_string_3_p_0((MR_String) "#include \"mercury_trace_base.h\"\n");
          }
#line 230 "llds_out_file.m"
        }
#line 232 "llds_out_file.m"
        break;
#line 232 "llds_out_file.m"
      case (MR_Integer) 1:
#line 233 "llds_out_file.m"
        {
#line 233 "llds_out_file.m"
        }
#line 232 "llds_out_file.m"
        break;
#line 232 "llds_out_file.m"
    }
#line 235 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 0)));
#line 235 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 1)));
#line 235 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 2)));
#line 235 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 3)));
#line 235 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 4)));
#line 235 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 5)));
#line 235 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 6)));
#line 235 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_50_50 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 235 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 235 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 235 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__GenerateBytecode_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 235 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 235 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 235 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 235 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 235 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__DeepProfile_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 235 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 235 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 235 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 235 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 235 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_62_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 235 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 8)));
#line 239 "llds_out_file.m"
#line 239 "llds_out_file.m"
    switch (ll_backend__llds_out__llds_out_file__DeepProfile_8) {
#line 239 "llds_out_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 239 "llds_out_file.m"
      case (MR_Integer) 0:
#line 240 "llds_out_file.m"
        {
#line 240 "llds_out_file.m"
        }
#line 239 "llds_out_file.m"
        break;
#line 239 "llds_out_file.m"
      case (MR_Integer) 1:
#line 237 "llds_out_file.m"
        {
#line 238 "llds_out_file.m"
          {
#line 238 "llds_out_file.m"
            mercury__io__write_string_3_p_0((MR_String) "#include \"mercury_deep_profiling.h\"\n");
          }
#line 237 "llds_out_file.m"
        }
#line 239 "llds_out_file.m"
        break;
#line 239 "llds_out_file.m"
    }
#line 246 "llds_out_file.m"
#line 246 "llds_out_file.m"
    switch (ll_backend__llds_out__llds_out_file__GenerateBytecode_9) {
#line 246 "llds_out_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 246 "llds_out_file.m"
      case (MR_Integer) 0:
#line 247 "llds_out_file.m"
        {
#line 247 "llds_out_file.m"
        }
#line 246 "llds_out_file.m"
        break;
#line 246 "llds_out_file.m"
      case (MR_Integer) 1:
#line 244 "llds_out_file.m"
        {
#line 245 "llds_out_file.m"
          {
#line 245 "llds_out_file.m"
            mercury__io__write_string_3_p_0((MR_String) "#include \"mb_interface_stub.h\"\n");
          }
#line 244 "llds_out_file.m"
        }
#line 246 "llds_out_file.m"
        break;
#line 246 "llds_out_file.m"
    }
#line 224 "llds_out_file.m"
  }
#line 221 "llds_out_file.m"
}

#line 208 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_12(
#line 208 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 208 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 208 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 208 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 208 "llds_out_file.m"
{
#line 208 "llds_out_file.m"
  {
#line 208 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 208 "llds_out_file.m"
    {
#line 208 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__IntroducedFrom__pred__output_single_c_file__208__1_3_p_0(((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
    }
#line 208 "llds_out_file.m"
  }
#line 208 "llds_out_file.m"
}

#line 207 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_11(
#line 207 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 207 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 207 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 207 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 207 "llds_out_file.m"
{
#line 207 "llds_out_file.m"
  {
#line 207 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 207 "llds_out_file.m"
    {
#line 207 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_foreign_body_code_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
    }
#line 207 "llds_out_file.m"
  }
#line 207 "llds_out_file.m"
}

#line 205 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_10(
#line 205 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 205 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 205 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 205 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 205 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 205 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5)
#line 205 "llds_out_file.m"
{
#line 205 "llds_out_file.m"
  {
#line 205 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 205 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv27_STATE_VARIABLE_DeclSet_16;

#line 205 "llds_out_file.m"
    {
#line 205 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_annotated_c_module_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv27_STATE_VARIABLE_DeclSet_16);
    }
#line 205 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv27_STATE_VARIABLE_DeclSet_16));
#line 205 "llds_out_file.m"
  }
#line 205 "llds_out_file.m"
}

#line 192 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_9(
#line 192 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 192 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 192 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 192 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 192 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 192 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5)
#line 192 "llds_out_file.m"
{
#line 192 "llds_out_file.m"
  {
#line 192 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 192 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv24_HeadVar__4_4;

#line 192 "llds_out_file.m"
    {
#line 192 "llds_out_file.m"
      ll_backend__layout_out__output_closure_layout_data_defn_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv24_HeadVar__4_4);
    }
#line 192 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv24_HeadVar__4_4));
#line 192 "llds_out_file.m"
  }
#line 192 "llds_out_file.m"
}

#line 190 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_8(
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
    MR_Word ll_backend__llds_out__llds_out_file__conv21_HeadVar__4_4;

#line 190 "llds_out_file.m"
    {
#line 190 "llds_out_file.m"
      ll_backend__layout_out__output_module_layout_data_defn_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv21_HeadVar__4_4);
    }
#line 190 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv21_HeadVar__4_4));
#line 190 "llds_out_file.m"
  }
#line 190 "llds_out_file.m"
}

#line 188 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_7(
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
    MR_Word ll_backend__llds_out__llds_out_file__conv18_HeadVar__4_4;

#line 188 "llds_out_file.m"
    {
#line 188 "llds_out_file.m"
      ll_backend__layout_out__output_proc_layout_data_defn_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv18_HeadVar__4_4);
    }
#line 188 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv18_HeadVar__4_4));
#line 188 "llds_out_file.m"
  }
#line 188 "llds_out_file.m"
}

#line 178 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_6(
#line 178 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 178 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 178 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 178 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 178 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 178 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5)
#line 178 "llds_out_file.m"
{
#line 178 "llds_out_file.m"
  {
#line 178 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 178 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv15_HeadVar__4_4;

#line 178 "llds_out_file.m"
    {
#line 178 "llds_out_file.m"
      ll_backend__rtti_out__output_rtti_data_defn_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv15_HeadVar__4_4);
    }
#line 178 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv15_HeadVar__4_4));
#line 178 "llds_out_file.m"
  }
#line 178 "llds_out_file.m"
}

#line 176 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_5(
#line 176 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 176 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 176 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 176 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 176 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 176 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5)
#line 176 "llds_out_file.m"
{
#line 176 "llds_out_file.m"
  {
#line 176 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 176 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv12_HeadVar__4_4;

#line 176 "llds_out_file.m"
    {
#line 176 "llds_out_file.m"
      ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv12_HeadVar__4_4);
    }
#line 176 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv12_HeadVar__4_4));
#line 176 "llds_out_file.m"
  }
#line 176 "llds_out_file.m"
}

#line 174 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_4(
#line 174 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 174 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 174 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 174 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 174 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 174 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5)
#line 174 "llds_out_file.m"
{
#line 174 "llds_out_file.m"
  {
#line 174 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 174 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv9_HeadVar__4_4;

#line 174 "llds_out_file.m"
    {
#line 174 "llds_out_file.m"
      ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv9_HeadVar__4_4);
    }
#line 174 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv9_HeadVar__4_4));
#line 174 "llds_out_file.m"
  }
#line 174 "llds_out_file.m"
}

#line 172 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_3(
#line 172 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 172 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 172 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 172 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 172 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 172 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5)
#line 172 "llds_out_file.m"
{
#line 172 "llds_out_file.m"
  {
#line 172 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 172 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv6_HeadVar__4_4;

#line 172 "llds_out_file.m"
    {
#line 172 "llds_out_file.m"
      ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv6_HeadVar__4_4);
    }
#line 172 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv6_HeadVar__4_4));
#line 172 "llds_out_file.m"
  }
#line 172 "llds_out_file.m"
}

#line 167 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_2(
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
    MR_Word ll_backend__llds_out__llds_out_file__conv3_HeadVar__3_3;

#line 167 "llds_out_file.m"
    {
#line 167 "llds_out_file.m"
      ll_backend__llds_out__llds_out_global__output_vector_common_data_decl_5_p_0(((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv3_HeadVar__3_3);
    }
#line 167 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv3_HeadVar__3_3));
#line 167 "llds_out_file.m"
  }
#line 167 "llds_out_file.m"
}

#line 165 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_1(
#line 165 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 165 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 165 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 165 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 165 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 165 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5)
#line 165 "llds_out_file.m"
{
#line 165 "llds_out_file.m"
  {
#line 165 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 165 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv0_HeadVar__3_3;

#line 165 "llds_out_file.m"
    {
#line 165 "llds_out_file.m"
      ll_backend__llds_out__llds_out_global__output_scalar_common_data_decl_5_p_0(((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv0_HeadVar__3_3);
    }
#line 165 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv0_HeadVar__3_3));
#line 165 "llds_out_file.m"
  }
#line 165 "llds_out_file.m"
}

#line 127 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0(
#line 127 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Globals_7,
#line 127 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__CFile_8,
#line 127 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_65,
#line 127 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_66)
#line 127 "llds_out_file.m"
{
#line 130 "llds_out_file.m"
  {
#line 130 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_134_134;
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_135_135;
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_141_141;
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeInfo_142_142;
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_143_143;
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_149_149;
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ModuleName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 0)));
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__C_HeaderLines_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 1)));
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ForeignBodyCodes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 2)));
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__Exports_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 3)));
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TablingInfoStructs_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 4)));
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ScalarCommonDatas_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 5)));
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__VectorCommonDatas_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 6)));
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__RttiDatas_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 7)));
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__PseudoTypeInfos_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 8)));
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__HLDSVarNums_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 9)));
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ShortLocns_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 10)));
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__LongLocns_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 11)));
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__UserEventVarNums_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 12)));
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__UserEvents_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 13)));
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__NoVarLabelLayouts_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 14)));
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__SVarLabelLayouts_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 15)));
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__LVarLabelLayouts_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 16)));
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__InternalLabelToLayoutMap_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 17)));
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__EntryLabelToLayoutMap_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 18)));
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__CallSiteStatics_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 19)));
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__CoveragePoints_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 20)));
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ProcStatics_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 21)));
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ProcHeadVarNums_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 22)));
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ProcVarNames_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 23)));
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ProcBodyBytecodes_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 24)));
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TSStringTable_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 25)));
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TableIoEntries_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 26)));
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TableIoEntryMap_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 27)));
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ProcEventLayouts_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 28)));
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ExecTraces_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 29)));
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ProcLayoutDatas_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 30)));
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ModuleLayoutDatas_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 31)));
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ClosureLayoutDatas_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 32)));
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__AllocSites_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 33)));
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__AllocSiteMap_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 34)));
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__Modules_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 35)));
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__UserInitPredCNames_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 36)));
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__UserFinalPredCNames_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 37)));
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ComplexityProcs_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 38)));
#line 130 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__Version_50;
#line 130 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__Fullarch_51;
#line 130 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__SourceFileName_52;
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__Info_53;
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__AnnotatedModules_54;
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__EntryLabelsCord_55;
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__InternalLabelsCord_56;
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__EnvVarNameSet_57;
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__EntryLabels_58;
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__InternalLabels_59;
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__EnvVarNames_60;
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_71_71;
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_72_72;
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_73_73;
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_81_81;
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_84_84;
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_86_86;
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_88_88;
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_90_90;
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_91_91;
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_93_93;
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_94_94;
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_96_96;
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_97_97;
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_99_99;
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_100_100;
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_104_104;
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_105_105;
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_107_107;
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_108_108;
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_110_110;
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_111_111;
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_114_114;
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_116_116;
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_118_118;
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_119_119;
#line 130 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_121_121;
#line 165 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_DeclSet_81_81;
#line 165 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_IO_82_82;
#line 167 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv5_STATE_VARIABLE_DeclSet_84_84;
#line 167 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv4_STATE_VARIABLE_IO_85_85;
#line 172 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv8_STATE_VARIABLE_DeclSet_91_91;
#line 172 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv7_STATE_VARIABLE_IO_92_92;
#line 174 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv11_STATE_VARIABLE_DeclSet_94_94;
#line 174 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv10_STATE_VARIABLE_IO_95_95;
#line 176 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv14_STATE_VARIABLE_DeclSet_97_97;
#line 176 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv13_STATE_VARIABLE_IO_98_98;
#line 178 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv17_STATE_VARIABLE_DeclSet_100_100;
#line 178 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv16_STATE_VARIABLE_IO_101_101;
#line 188 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv20_STATE_VARIABLE_DeclSet_105_105;
#line 188 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv19_STATE_VARIABLE_IO_106_106;
#line 190 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv23_STATE_VARIABLE_DeclSet_108_108;
#line 190 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv22_STATE_VARIABLE_IO_109_109;
#line 192 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv26_STATE_VARIABLE_DeclSet_111_111;
#line 192 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv25_STATE_VARIABLE_IO_112_112;
#line 205 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv29_STATE_VARIABLE_DeclSet_119_119;
#line 205 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv28_STATE_VARIABLE_IO_120_120;
#line 207 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv30_STATE_VARIABLE_IO_122_122;
#line 213 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv31_STATE_VARIABLE_IO_126_126;

#line 143 "llds_out_file.m"
    {
#line 143 "llds_out_file.m"
      mercury__library__version_2_p_0(&ll_backend__llds_out__llds_out_file__Version_50, &ll_backend__llds_out__llds_out_file__Fullarch_51);
    }
#line 144 "llds_out_file.m"
    {
#line 144 "llds_out_file.m"
      parse_tree__file_names__module_source_filename_5_p_0(ll_backend__llds_out__llds_out_file__Globals_7, ll_backend__llds_out__llds_out_file__ModuleName_11, &ll_backend__llds_out__llds_out_file__SourceFileName_52);
    }
#line 145 "llds_out_file.m"
    {
#line 145 "llds_out_file.m"
      backend_libs__c_util__output_c_file_intro_and_grade_6_p_0(ll_backend__llds_out__llds_out_file__Globals_7, ll_backend__llds_out__llds_out_file__SourceFileName_52, ll_backend__llds_out__llds_out_file__Version_50, ll_backend__llds_out__llds_out_file__Fullarch_51);
    }
#line 148 "llds_out_file.m"
    {
#line 148 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__Info_53 = ll_backend__llds_out__llds_out_util__init_llds_out_info_7_f_0(ll_backend__llds_out__llds_out_file__ModuleName_11, ll_backend__llds_out__llds_out_file__SourceFileName_52, ll_backend__llds_out__llds_out_file__Globals_7, ll_backend__llds_out__llds_out_file__InternalLabelToLayoutMap_28, ll_backend__llds_out__llds_out_file__EntryLabelToLayoutMap_29, ll_backend__llds_out__llds_out_file__TableIoEntryMap_38, ll_backend__llds_out__llds_out_file__AllocSiteMap_45);
    }
#line 13216 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_134_134 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 152 "llds_out_file.m"
    {
#line 152 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_71_71 = mercury__cord__init_0_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_134_134);
    }
#line 152 "llds_out_file.m"
    {
#line 152 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_72_72 = mercury__cord__init_0_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_134_134);
    }
#line 13228 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_135_135 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 153 "llds_out_file.m"
    {
#line 153 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_73_73 = mercury__set__init_0_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_135_135);
    }
#line 151 "llds_out_file.m"
    {
#line 151 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__annotate_c_modules_9_p_0(ll_backend__llds_out__llds_out_file__Info_53, ll_backend__llds_out__llds_out_file__Modules_46, &ll_backend__llds_out__llds_out_file__AnnotatedModules_54, ll_backend__llds_out__llds_out_file__V_71_71, &ll_backend__llds_out__llds_out_file__EntryLabelsCord_55, ll_backend__llds_out__llds_out_file__V_72_72, &ll_backend__llds_out__llds_out_file__InternalLabelsCord_56, ll_backend__llds_out__llds_out_file__V_73_73, &ll_backend__llds_out__llds_out_file__EnvVarNameSet_57);
    }
#line 154 "llds_out_file.m"
    {
#line 154 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__EntryLabels_58 = mercury__cord__list_1_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_134_134, ll_backend__llds_out__llds_out_file__EntryLabelsCord_55);
    }
#line 155 "llds_out_file.m"
    {
#line 155 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__InternalLabels_59 = mercury__cord__list_1_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_134_134, ll_backend__llds_out__llds_out_file__InternalLabelsCord_56);
    }
#line 156 "llds_out_file.m"
    {
#line 156 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__EnvVarNames_60 = mercury__set__to_sorted_list_1_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_135_135, ll_backend__llds_out__llds_out_file__EnvVarNameSet_57);
    }
#line 157 "llds_out_file.m"
    {
#line 157 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_init_comment_6_p_0(ll_backend__llds_out__llds_out_file__ModuleName_11, ll_backend__llds_out__llds_out_file__UserInitPredCNames_47, ll_backend__llds_out__llds_out_file__UserFinalPredCNames_48, ll_backend__llds_out__llds_out_file__EnvVarNames_60);
    }
#line 159 "llds_out_file.m"
    {
#line 159 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_c_file_mercury_headers_3_p_0(ll_backend__llds_out__llds_out_file__Info_53);
    }
#line 161 "llds_out_file.m"
    {
#line 161 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_foreign_header_include_lines_4_p_0(ll_backend__llds_out__llds_out_file__Info_53, ll_backend__llds_out__llds_out_file__C_HeaderLines_12);
    }
#line 162 "llds_out_file.m"
    {
#line 162 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 164 "llds_out_file.m"
    {
#line 164 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_static_linkage_define_2_p_0();
    }
#line 13280 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_141_141 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_scalar_common_data_array_0;
#line 13282 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeInfo_142_142 = (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_1[0];
#line 13284 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_143_143 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 165 "llds_out_file.m"
    {
#line 165 "llds_out_file.m"
      mercury__list__foldl2_6_p_2(ll_backend__llds_out__llds_out_file__TypeCtorInfo_141_141, ll_backend__llds_out__llds_out_file__TypeInfo_142_142, ll_backend__llds_out__llds_out_file__TypeCtorInfo_143_143, (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_2[2], ll_backend__llds_out__llds_out_file__ScalarCommonDatas_16, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_65)), &ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_DeclSet_81_81, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_IO_82_82);
    }
#line 165 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_81_81 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_DeclSet_81_81);
#line 13293 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_149_149 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_vector_common_data_array_0;
#line 167 "llds_out_file.m"
    {
#line 167 "llds_out_file.m"
      mercury__list__foldl2_6_p_2(ll_backend__llds_out__llds_out_file__TypeCtorInfo_149_149, ll_backend__llds_out__llds_out_file__TypeInfo_142_142, ll_backend__llds_out__llds_out_file__TypeCtorInfo_143_143, (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_2[3], ll_backend__llds_out__llds_out_file__VectorCommonDatas_17, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_81_81)), &ll_backend__llds_out__llds_out_file__conv5_STATE_VARIABLE_DeclSet_84_84, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv4_STATE_VARIABLE_IO_85_85);
    }
#line 167 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_84_84 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv5_STATE_VARIABLE_DeclSet_84_84);
#line 169 "llds_out_file.m"
    {
#line 169 "llds_out_file.m"
      ll_backend__rtti_out__output_rtti_data_decl_list_6_p_0(ll_backend__llds_out__llds_out_file__Info_53, ll_backend__llds_out__llds_out_file__RttiDatas_18, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_84_84, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_86_86);
    }
#line 170 "llds_out_file.m"
    {
#line 170 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_record_c_label_decls_7_p_0(ll_backend__llds_out__llds_out_file__Info_53, ll_backend__llds_out__llds_out_file__EntryLabels_58, ll_backend__llds_out__llds_out_file__InternalLabels_59, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_86_86, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_88_88);
    }
#line 172 "llds_out_file.m"
    {
#line 172 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 172 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_90_90, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_6[0]));
#line 172 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_90_90, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_3));
#line 172 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_90_90, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 172 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_90_90, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_53));
#line 172 "llds_out_file.m"
    }
#line 172 "llds_out_file.m"
    {
#line 172 "llds_out_file.m"
      mercury__list__foldl2_6_p_2((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_tabling_info_struct_0, ll_backend__llds_out__llds_out_file__TypeInfo_142_142, ll_backend__llds_out__llds_out_file__TypeCtorInfo_143_143, ll_backend__llds_out__llds_out_file__V_90_90, ll_backend__llds_out__llds_out_file__TablingInfoStructs_15, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_88_88)), &ll_backend__llds_out__llds_out_file__conv8_STATE_VARIABLE_DeclSet_91_91, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv7_STATE_VARIABLE_IO_92_92);
    }
#line 172 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_91_91 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv8_STATE_VARIABLE_DeclSet_91_91);
#line 174 "llds_out_file.m"
    {
#line 174 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 174 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_93_93, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_6[1]));
#line 174 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_93_93, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_4));
#line 174 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_93_93, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 174 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_93_93, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_53));
#line 174 "llds_out_file.m"
    }
#line 174 "llds_out_file.m"
    {
#line 174 "llds_out_file.m"
      mercury__list__foldl2_6_p_2(ll_backend__llds_out__llds_out_file__TypeCtorInfo_141_141, ll_backend__llds_out__llds_out_file__TypeInfo_142_142, ll_backend__llds_out__llds_out_file__TypeCtorInfo_143_143, ll_backend__llds_out__llds_out_file__V_93_93, ll_backend__llds_out__llds_out_file__ScalarCommonDatas_16, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_91_91)), &ll_backend__llds_out__llds_out_file__conv11_STATE_VARIABLE_DeclSet_94_94, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv10_STATE_VARIABLE_IO_95_95);
    }
#line 174 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_94_94 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv11_STATE_VARIABLE_DeclSet_94_94);
#line 176 "llds_out_file.m"
    {
#line 176 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 176 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_96_96, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_6[2]));
#line 176 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_96_96, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_5));
#line 176 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_96_96, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 176 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_96_96, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_53));
#line 176 "llds_out_file.m"
    }
#line 176 "llds_out_file.m"
    {
#line 176 "llds_out_file.m"
      mercury__list__foldl2_6_p_2(ll_backend__llds_out__llds_out_file__TypeCtorInfo_149_149, ll_backend__llds_out__llds_out_file__TypeInfo_142_142, ll_backend__llds_out__llds_out_file__TypeCtorInfo_143_143, ll_backend__llds_out__llds_out_file__V_96_96, ll_backend__llds_out__llds_out_file__VectorCommonDatas_17, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_94_94)), &ll_backend__llds_out__llds_out_file__conv14_STATE_VARIABLE_DeclSet_97_97, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv13_STATE_VARIABLE_IO_98_98);
    }
#line 176 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_97_97 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv14_STATE_VARIABLE_DeclSet_97_97);
#line 178 "llds_out_file.m"
    {
#line 178 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_99_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 178 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_99_99, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_6[3]));
#line 178 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_99_99, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_6));
#line 178 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_99_99, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 178 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_99_99, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_53));
#line 178 "llds_out_file.m"
    }
#line 178 "llds_out_file.m"
    {
#line 178 "llds_out_file.m"
      mercury__list__foldl2_6_p_2((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0, ll_backend__llds_out__llds_out_file__TypeInfo_142_142, ll_backend__llds_out__llds_out_file__TypeCtorInfo_143_143, ll_backend__llds_out__llds_out_file__V_99_99, ll_backend__llds_out__llds_out_file__RttiDatas_18, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_97_97)), &ll_backend__llds_out__llds_out_file__conv17_STATE_VARIABLE_DeclSet_100_100, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv16_STATE_VARIABLE_IO_101_101);
    }
#line 178 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_100_100 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv17_STATE_VARIABLE_DeclSet_100_100);
#line 180 "llds_out_file.m"
    {
#line 180 "llds_out_file.m"
      mercury__io__nl_2_p_0();
    }
#line 181 "llds_out_file.m"
    {
#line 181 "llds_out_file.m"
      ll_backend__layout_out__output_layout_array_decls_22_p_0(ll_backend__llds_out__llds_out_file__Info_53, ll_backend__llds_out__llds_out_file__PseudoTypeInfos_19, ll_backend__llds_out__llds_out_file__HLDSVarNums_20, ll_backend__llds_out__llds_out_file__ShortLocns_21, ll_backend__llds_out__llds_out_file__LongLocns_22, ll_backend__llds_out__llds_out_file__UserEventVarNums_23, ll_backend__llds_out__llds_out_file__UserEvents_24, ll_backend__llds_out__llds_out_file__NoVarLabelLayouts_25, ll_backend__llds_out__llds_out_file__SVarLabelLayouts_26, ll_backend__llds_out__llds_out_file__LVarLabelLayouts_27, ll_backend__llds_out__llds_out_file__CallSiteStatics_30, ll_backend__llds_out__llds_out_file__CoveragePoints_31, ll_backend__llds_out__llds_out_file__ProcStatics_32, ll_backend__llds_out__llds_out_file__ProcHeadVarNums_33, ll_backend__llds_out__llds_out_file__ProcVarNames_34, ll_backend__llds_out__llds_out_file__ProcBodyBytecodes_35, ll_backend__llds_out__llds_out_file__TableIoEntries_37, ll_backend__llds_out__llds_out_file__ProcEventLayouts_39, ll_backend__llds_out__llds_out_file__ExecTraces_40, ll_backend__llds_out__llds_out_file__AllocSites_44);
    }
#line 188 "llds_out_file.m"
    {
#line 188 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 188 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_104_104, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_6[4]));
#line 188 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_104_104, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_7));
#line 188 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_104_104, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 188 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_104_104, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_53));
#line 188 "llds_out_file.m"
    }
#line 188 "llds_out_file.m"
    {
#line 188 "llds_out_file.m"
      mercury__list__foldl2_6_p_2((MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_data_0, ll_backend__llds_out__llds_out_file__TypeInfo_142_142, ll_backend__llds_out__llds_out_file__TypeCtorInfo_143_143, ll_backend__llds_out__llds_out_file__V_104_104, ll_backend__llds_out__llds_out_file__ProcLayoutDatas_41, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_100_100)), &ll_backend__llds_out__llds_out_file__conv20_STATE_VARIABLE_DeclSet_105_105, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv19_STATE_VARIABLE_IO_106_106);
    }
#line 188 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_105_105 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv20_STATE_VARIABLE_DeclSet_105_105);
#line 190 "llds_out_file.m"
    {
#line 190 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_107_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 190 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_107_107, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_6[5]));
#line 190 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_107_107, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_8));
#line 190 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_107_107, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 190 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_107_107, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_53));
#line 190 "llds_out_file.m"
    }
#line 190 "llds_out_file.m"
    {
#line 190 "llds_out_file.m"
      mercury__list__foldl2_6_p_2((MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_module_layout_data_0, ll_backend__llds_out__llds_out_file__TypeInfo_142_142, ll_backend__llds_out__llds_out_file__TypeCtorInfo_143_143, ll_backend__llds_out__llds_out_file__V_107_107, ll_backend__llds_out__llds_out_file__ModuleLayoutDatas_42, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_105_105)), &ll_backend__llds_out__llds_out_file__conv23_STATE_VARIABLE_DeclSet_108_108, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv22_STATE_VARIABLE_IO_109_109);
    }
#line 190 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_108_108 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv23_STATE_VARIABLE_DeclSet_108_108);
#line 192 "llds_out_file.m"
    {
#line 192 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_110_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 192 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_110_110, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_6[6]));
#line 192 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_110_110, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_9));
#line 192 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_110_110, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 192 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_110_110, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_53));
#line 192 "llds_out_file.m"
    }
#line 192 "llds_out_file.m"
    {
#line 192 "llds_out_file.m"
      mercury__list__foldl2_6_p_2((MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_closure_proc_id_data_0, ll_backend__llds_out__llds_out_file__TypeInfo_142_142, ll_backend__llds_out__llds_out_file__TypeCtorInfo_143_143, ll_backend__llds_out__llds_out_file__V_110_110, ll_backend__llds_out__llds_out_file__ClosureLayoutDatas_43, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_108_108)), &ll_backend__llds_out__llds_out_file__conv26_STATE_VARIABLE_DeclSet_111_111, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv25_STATE_VARIABLE_IO_112_112);
    }
#line 192 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_111_111 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv26_STATE_VARIABLE_DeclSet_111_111);
#line 194 "llds_out_file.m"
    {
#line 194 "llds_out_file.m"
      mercury__io__nl_2_p_0();
    }
#line 196 "llds_out_file.m"
    {
#line 196 "llds_out_file.m"
      ll_backend__llds_out__llds_out_data__output_record_rvals_decls_6_p_0(ll_backend__llds_out__llds_out_file__Info_53, ll_backend__llds_out__llds_out_file__PseudoTypeInfos_19, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_111_111, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_114_114);
    }
#line 197 "llds_out_file.m"
    {
#line 197 "llds_out_file.m"
      ll_backend__layout_out__output_layout_array_defns_25_p_0(ll_backend__llds_out__llds_out_file__Info_53, ll_backend__llds_out__llds_out_file__PseudoTypeInfos_19, ll_backend__llds_out__llds_out_file__HLDSVarNums_20, ll_backend__llds_out__llds_out_file__ShortLocns_21, ll_backend__llds_out__llds_out_file__LongLocns_22, ll_backend__llds_out__llds_out_file__UserEventVarNums_23, ll_backend__llds_out__llds_out_file__UserEvents_24, ll_backend__llds_out__llds_out_file__NoVarLabelLayouts_25, ll_backend__llds_out__llds_out_file__SVarLabelLayouts_26, ll_backend__llds_out__llds_out_file__LVarLabelLayouts_27, ll_backend__llds_out__llds_out_file__CallSiteStatics_30, ll_backend__llds_out__llds_out_file__CoveragePoints_31, ll_backend__llds_out__llds_out_file__ProcStatics_32, ll_backend__llds_out__llds_out_file__ProcHeadVarNums_33, ll_backend__llds_out__llds_out_file__ProcVarNames_34, ll_backend__llds_out__llds_out_file__ProcBodyBytecodes_35, ll_backend__llds_out__llds_out_file__TableIoEntries_37, ll_backend__llds_out__llds_out_file__ProcEventLayouts_39, ll_backend__llds_out__llds_out_file__ExecTraces_40, ll_backend__llds_out__llds_out_file__TSStringTable_36, ll_backend__llds_out__llds_out_file__AllocSites_44, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_114_114, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_116_116);
    }
#line 205 "llds_out_file.m"
    {
#line 205 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_118_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 205 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_118_118, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_6[7]));
#line 205 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_118_118, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_10));
#line 205 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_118_118, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 205 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_118_118, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_53));
#line 205 "llds_out_file.m"
    }
#line 205 "llds_out_file.m"
    {
#line 205 "llds_out_file.m"
      mercury__list__foldl2_6_p_2((MR_Word) &ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__type_ctor_info_annotated_c_module_0, ll_backend__llds_out__llds_out_file__TypeInfo_142_142, ll_backend__llds_out__llds_out_file__TypeCtorInfo_143_143, ll_backend__llds_out__llds_out_file__V_118_118, ll_backend__llds_out__llds_out_file__AnnotatedModules_54, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_116_116)), &ll_backend__llds_out__llds_out_file__conv29_STATE_VARIABLE_DeclSet_119_119, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv28_STATE_VARIABLE_IO_120_120);
    }
#line 205 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_119_119 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv29_STATE_VARIABLE_DeclSet_119_119);
#line 207 "llds_out_file.m"
    {
#line 207 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_121_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 207 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_121_121, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_4[1]));
#line 207 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_121_121, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_11));
#line 207 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_121_121, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 207 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_121_121, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_53));
#line 207 "llds_out_file.m"
    }
#line 207 "llds_out_file.m"
    {
#line 207 "llds_out_file.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0, ll_backend__llds_out__llds_out_file__TypeCtorInfo_143_143, ll_backend__llds_out__llds_out_file__V_121_121, ll_backend__llds_out__llds_out_file__ForeignBodyCodes_13, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv30_STATE_VARIABLE_IO_122_122);
    }
#line 213 "llds_out_file.m"
    {
#line 213 "llds_out_file.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_defn_0, ll_backend__llds_out__llds_out_file__TypeCtorInfo_143_143, (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_2[4], ll_backend__llds_out__llds_out_file__Exports_14, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv31_STATE_VARIABLE_IO_126_126);
    }
#line 214 "llds_out_file.m"
    {
#line 214 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 215 "llds_out_file.m"
    {
#line 215 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_c_module_init_list_15_p_0(ll_backend__llds_out__llds_out_file__Info_53, ll_backend__llds_out__llds_out_file__ModuleName_11, ll_backend__llds_out__llds_out_file__AnnotatedModules_54, ll_backend__llds_out__llds_out_file__RttiDatas_18, ll_backend__llds_out__llds_out_file__ProcLayoutDatas_41, ll_backend__llds_out__llds_out_file__ModuleLayoutDatas_42, ll_backend__llds_out__llds_out_file__ComplexityProcs_49, ll_backend__llds_out__llds_out_file__TSStringTable_36, ll_backend__llds_out__llds_out_file__AllocSites_44, ll_backend__llds_out__llds_out_file__UserInitPredCNames_47, ll_backend__llds_out__llds_out_file__UserFinalPredCNames_48, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_119_119, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_66);
    }
#line 130 "llds_out_file.m"
  }
#line 127 "llds_out_file.m"
}

#line 121 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_llds_2_4_p_0(
#line 121 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Globals_5,
#line 121 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__CFile_6)
#line 121 "llds_out_file.m"
{
#line 123 "llds_out_file.m"
  {
#line 123 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 123 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__DeclSet0_8;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_9_9;

#line 124 "llds_out_file.m"
    {
#line 124 "llds_out_file.m"
      ll_backend__llds_out__llds_out_util__decl_set_init_1_p_0(&ll_backend__llds_out__llds_out_file__DeclSet0_8);
    }
#line 125 "llds_out_file.m"
    {
#line 125 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0(ll_backend__llds_out__llds_out_file__Globals_5, ll_backend__llds_out__llds_out_file__CFile_6, ll_backend__llds_out__llds_out_file__DeclSet0_8, &ll_backend__llds_out__llds_out_file__V_9_9);
    }
#line 123 "llds_out_file.m"
  }
#line 121 "llds_out_file.m"
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
#line 1686 "llds_out_file.m"
  {
#line 1686 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded = (ll_backend__llds_out__llds_out_file__InclCodeAddr_5 == (MR_Integer) 1);
#line 1686 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__HeadVar__3_3;
#line 1688 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_6_6;
#line 1688 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_7_7;

#line 1688 "llds_out_file.m"
    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1688 "llds_out_file.m"
      {
#line 1689 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_6_6 = (MR_Integer) 445;
#line 1689 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_7_7 = (MR_Integer) 0;
#line 1689 "llds_out_file.m"
        {
#line 1689 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__succeeded = libs__globals__lookup_bool_option_3_p_1(ll_backend__llds_out__llds_out_file__Globals_4, ll_backend__llds_out__llds_out_file__V_6_6, ll_backend__llds_out__llds_out_file__V_7_7);
        }
#line 1688 "llds_out_file.m"
      }
#line 1686 "llds_out_file.m"
    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1691 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__HeadVar__3_3 = (MR_String) "";
#line 1686 "llds_out_file.m"
    else
#line 1693 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__HeadVar__3_3 = (MR_String) "const ";
#line 1686 "llds_out_file.m"
    return ll_backend__llds_out__llds_out_file__HeadVar__3_3;
#line 1686 "llds_out_file.m"
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
#line 1668 "llds_out_file.m"
  {
#line 1668 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 1668 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__LinkageStr_6;

#line 1668 "llds_out_file.m"
#line 1668 "llds_out_file.m"
    switch (ll_backend__llds_out__llds_out_file__DefaultLinkage_4) {
#line 1668 "llds_out_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1668 "llds_out_file.m"
      case (MR_Integer) 0:
#line 1672 "llds_out_file.m"
#line 1672 "llds_out_file.m"
        switch (ll_backend__llds_out__llds_out_file__BeingDefined_5) {
#line 1672 "llds_out_file.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1672 "llds_out_file.m"
          case (MR_Integer) 0:
#line 1674 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__LinkageStr_6 = (MR_String) "extern ";
#line 1672 "llds_out_file.m"
            break;
#line 1672 "llds_out_file.m"
          case (MR_Integer) 1:
#line 1671 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__LinkageStr_6 = (MR_String) "";
#line 1672 "llds_out_file.m"
            break;
#line 1672 "llds_out_file.m"
        }
#line 1668 "llds_out_file.m"
        break;
#line 1668 "llds_out_file.m"
      case (MR_Integer) 1:
#line 1683 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__LinkageStr_6 = (MR_String) "static ";
#line 1668 "llds_out_file.m"
        break;
#line 1668 "llds_out_file.m"
    }
#line 1668 "llds_out_file.m"
    return ll_backend__llds_out__llds_out_file__LinkageStr_6;
#line 1668 "llds_out_file.m"
  }
#line 42 "llds_out_file.m"
}

#line 118 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_llds_5_p_0_1(
#line 118 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 118 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 118 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_2)
#line 118 "llds_out_file.m"
{
#line 118 "llds_out_file.m"
  {
#line 118 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 118 "llds_out_file.m"
    {
#line 118 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_llds_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 4))));
    }
#line 118 "llds_out_file.m"
  }
#line 118 "llds_out_file.m"
}

#line 32 "llds_out_file.m"
void MR_CALL 
ll_backend__llds_out__llds_out_file__output_llds_5_p_0(
#line 32 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Globals_6,
#line 32 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__CFile_7,
#line 32 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__Succeeded_8)
#line 32 "llds_out_file.m"
{
#line 114 "llds_out_file.m"
  {
#line 114 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 114 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 0)));
#line 114 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__FileName_11;
#line 114 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_17_17;
#line 115 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 1)));
#line 115 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 2)));
#line 115 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 3)));
#line 115 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 4)));
#line 115 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 5)));
#line 115 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 6)));
#line 115 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 7)));
#line 115 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 8)));
#line 115 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 9)));
#line 115 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 10)));
#line 115 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 11)));
#line 115 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 12)));
#line 115 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 13)));
#line 115 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 14)));
#line 115 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 15)));
#line 115 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 16)));
#line 115 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 17)));
#line 115 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 18)));
#line 115 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 19)));
#line 115 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 20)));
#line 115 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 21)));
#line 115 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 22)));
#line 115 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 23)));
#line 115 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 24)));
#line 115 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 25)));
#line 115 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 26)));
#line 115 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 27)));
#line 115 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 28)));
#line 115 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 29)));
#line 115 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 30)));
#line 115 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 31)));
#line 115 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 32)));
#line 115 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 33)));
#line 115 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 34)));
#line 115 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 35)));
#line 115 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 36)));
#line 115 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 37)));
#line 115 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_7, (MR_Integer) 38)));

#line 116 "llds_out_file.m"
    {
#line 116 "llds_out_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(ll_backend__llds_out__llds_out_file__Globals_6, ll_backend__llds_out__llds_out_file__ModuleName_10, (MR_String) ".c", (MR_Integer) 0, &ll_backend__llds_out__llds_out_file__FileName_11);
    }
#line 118 "llds_out_file.m"
    {
#line 118 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 118 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_17_17, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_4[0]));
#line 118 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_17_17, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_llds_5_p_0_1));
#line 118 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 118 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_17_17, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Globals_6));
#line 118 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_17_17, 4) = ((MR_Box) (ll_backend__llds_out__llds_out_file__CFile_7));
#line 118 "llds_out_file.m"
    }
#line 118 "llds_out_file.m"
    {
#line 118 "llds_out_file.m"
      libs__file_util__output_to_file_6_p_0(ll_backend__llds_out__llds_out_file__Globals_6, ll_backend__llds_out__llds_out_file__FileName_11, ll_backend__llds_out__llds_out_file__V_17_17, ll_backend__llds_out__llds_out_file__Succeeded_8);
    }
#line 114 "llds_out_file.m"
  }
#line 32 "llds_out_file.m"
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
