/*
** Automatically generated from `llds_out_file.m'
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




#line 167 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0;

#line 170 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds__type_ctor_info_label_0;

#line 173 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__llds_out__llds_out_file__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__layout__type_ctor_info_layout_slot_name_0;

#line 176 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__llds_out__llds_out_file__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__llds__type_ctor_info_data_id_0;

#line 179 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_foreign_literal_or_include_0;

#line 182 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__llds_out__llds_out_file__list__ti_list_1builtin__type_ctor_info_int_0;

#line 185 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__llds_out__llds_out_file__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_list__ti_list_1builtin__type_ctor_info_int_0;

#line 188 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_file__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

#line 191 "ll_backend.llds_out.llds_out_file.c"
static const MR_VA_TypeInfo_Struct2 ll_backend__llds_out__llds_out_file____vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

#line 194 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__llds_out__llds_out_file__list__ti_list_1__vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

#line 197 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__llds_out__llds_out_file__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_list__ti_list_1__vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

#line 200 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_file__list__pti_list_1__plain___vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

#line 203 "ll_backend.llds_out.llds_out_file.c"
static const MR_VA_PseudoTypeInfo_Struct2 ll_backend__llds_out__llds_out_file____vpti_tuple_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0;

#line 206 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__llds_out__llds_out_file__list__ti_list_1ll_backend__llds_out__llds_out_file__type_ctor_info_annotated_c_procedure_0;

#line 209 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__llds_out__llds_out_file__list__ti_list_1ll_backend__llds__type_ctor_info_label_0;

#line 212 "ll_backend.llds_out.llds_out_file.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__field_types_annotated_c_module_0_0[4];

#line 215 "ll_backend.llds_out.llds_out_file.c"
static const MR_ConstString ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__field_names_annotated_c_module_0_0[4];

#line 218 "ll_backend.llds_out.llds_out_file.c"
static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_functor_desc_annotated_c_module_0_0;

#line 221 "ll_backend.llds_out.llds_out_file.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_stag_ordered_annotated_c_module_0_0[1];

#line 224 "ll_backend.llds_out.llds_out_file.c"
static const MR_DuPtagLayout ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_ptag_ordered_annotated_c_module_0[1];

#line 227 "ll_backend.llds_out.llds_out_file.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_name_ordered_annotated_c_module_0[1];

#line 230 "ll_backend.llds_out.llds_out_file.c"
static const MR_Integer ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__functor_number_map_annotated_c_module_0[1];

#line 233 "ll_backend.llds_out.llds_out_file.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__field_types_annotated_c_procedure_0_0[2];

#line 236 "ll_backend.llds_out.llds_out_file.c"
static const MR_ConstString ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__field_names_annotated_c_procedure_0_0[2];

#line 239 "ll_backend.llds_out.llds_out_file.c"
static const MR_DuFunctorDesc ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_functor_desc_annotated_c_procedure_0_0;

#line 242 "ll_backend.llds_out.llds_out_file.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_stag_ordered_annotated_c_procedure_0_0[1];

#line 245 "ll_backend.llds_out.llds_out_file.c"
static const MR_DuPtagLayout ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_ptag_ordered_annotated_c_procedure_0[1];

#line 248 "ll_backend.llds_out.llds_out_file.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_name_ordered_annotated_c_procedure_0[1];

#line 251 "ll_backend.llds_out.llds_out_file.c"
static const MR_Integer ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__functor_number_map_annotated_c_procedure_0[1];

#line 254 "ll_backend.llds_out.llds_out_file.c"
static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_functor_desc_linkage_0_0;

#line 257 "ll_backend.llds_out.llds_out_file.c"
static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_functor_desc_linkage_0_1;

#line 260 "ll_backend.llds_out.llds_out_file.c"
static const MR_EnumFunctorDescPtr ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_value_ordered_linkage_0[2];

#line 263 "ll_backend.llds_out.llds_out_file.c"
static const MR_EnumFunctorDescPtr ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_name_ordered_linkage_0[2];

#line 266 "ll_backend.llds_out.llds_out_file.c"
static const MR_Integer ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__functor_number_map_linkage_0[2];

#line 269 "ll_backend.llds_out.llds_out_file.c"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file____Unify____annotated_c_module_0_0_10001(
#line 272 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 274 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2);

#line 277 "ll_backend.llds_out.llds_out_file.c"
static void MR_CALL 
ll_backend__llds_out__llds_out_file____Compare____annotated_c_module_0_0_10001(
#line 280 "ll_backend.llds_out.llds_out_file.c"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 282 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 284 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 287 "ll_backend.llds_out.llds_out_file.c"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file____Unify____annotated_c_procedure_0_0_10001(
#line 290 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 292 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2);

#line 295 "ll_backend.llds_out.llds_out_file.c"
static void MR_CALL 
ll_backend__llds_out__llds_out_file____Compare____annotated_c_procedure_0_0_10001(
#line 298 "ll_backend.llds_out.llds_out_file.c"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 300 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 302 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 305 "ll_backend.llds_out.llds_out_file.c"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file____Unify____linkage_0_0_10001(
#line 308 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 310 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2);

#line 313 "ll_backend.llds_out.llds_out_file.c"
static void MR_CALL 
ll_backend__llds_out__llds_out_file____Compare____linkage_0_0_10001(
#line 316 "ll_backend.llds_out.llds_out_file.c"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 318 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 320 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 1022 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_114_101_99_111_114_100_95_101_110_116_114_121_95_108_97_98_101_108_95_100_101_99_108_95_95_91_49_93_95_48_6_p_0(
#line 1022 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Label_8,
#line 1022 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_17,
#line 1022 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_18);

#line 368 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__IntroducedFrom__pred__annotate_c_procedure__368__1_2_p_0(
#line 368 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__UndefWhileLabels_26,
#line 368 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_86);

#line 203 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__IntroducedFrom__pred__output_single_c_file__203__1_3_p_0(
#line 203 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__LambdaHeadVar__1_123);

#line 267 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file____Compare____annotated_c_procedure_0_0(
#line 267 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 267 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2,
#line 267 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__3_3);

#line 267 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file____Unify____annotated_c_procedure_0_0(
#line 267 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 267 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2);

#line 259 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file____Compare____annotated_c_module_0_0(
#line 259 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 259 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2,
#line 259 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__3_3);

#line 259 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file____Unify____annotated_c_module_0_0(
#line 259 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 259 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2);

#line 1650 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__delete_any_maybe_labels_3_p_0(
#line 1650 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 1650 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_2,
#line 1650 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_3);

#line 1639 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__delete_any_maybe_label_3_p_0(
#line 1639 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__MaybeLabel_4,
#line 1639 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_7,
#line 1639 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_8);

#line 1631 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(
#line 1631 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 1631 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_2,
#line 1631 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_3);

#line 1621 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__delete_any_label_3_p_0(
#line 1621 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__CodeAddr_4,
#line 1621 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_7,
#line 1621 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_8);

#line 1444 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__find_while_labels_to_define_5_p_0(
#line 1444 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 1444 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2,
#line 1444 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__WhileLabels_3,
#line 1444 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4,
#line 1444 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_5);

#line 1410 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__count_while_label_in_block_4_p_0(
#line 1410 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Label_1,
#line 1410 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2,
#line 1410 "llds_out_file.m"
  MR_Integer ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_3,
#line 1410 "llds_out_file.m"
  MR_Integer * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_4);

#line 1389 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__is_while_label_5_p_0(
#line 1389 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Label_1,
#line 1389 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2,
#line 1389 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__HeadVar__3_3,
#line 1389 "llds_out_file.m"
  MR_Integer ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_4,
#line 1389 "llds_out_file.m"
  MR_Integer * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_5);

#line 1373 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__find_while_labels_3_p_0(
#line 1373 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 1373 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_WhileSet_0_2,
#line 1373 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_WhileSet_3);

#line 1323 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__find_cont_labels_3_p_0(
#line 1323 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 1323 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_0_2,
#line 1323 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_3);

#line 1303 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__find_caller_label_2_p_0(
#line 1303 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 1303 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__CallerLabel_2);

#line 1250 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_annotated_c_procedure_4_p_0(
#line 1250 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_5,
#line 1250 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__AnnotatedProc_6);

#line 1236 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_global_var_decl_5_p_0(
#line 1236 "llds_out_file.m"
  MR_String ll_backend__llds_out__llds_out_file__VarName_6,
#line 1236 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_10,
#line 1236 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_11);

#line 1234 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_c_procedure_decls_6_p_0_2(
#line 1234 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1234 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1234 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1234 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 1234 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 1234 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5);

#line 1233 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_c_procedure_decls_6_p_0_1(
#line 1233 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1233 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1233 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1233 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 1233 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 1233 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5);

#line 1224 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_c_procedure_decls_6_p_0(
#line 1224 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_7,
#line 1224 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__AnnotatedProc_8,
#line 1224 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_15,
#line 1224 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_16);

#line 1189 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_entry_label_init_4_p_0(
#line 1189 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__EntryLabelToLayoutMap_5,
#line 1189 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Label_6);

#line 1182 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__write_int_pair_3_p_0(
#line 1182 "llds_out_file.m"
  MR_Tuple ll_backend__llds_out__llds_out_file__HeadVar__1_1);

#line 1179 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_chunk_6_p_0_1(
#line 1179 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1179 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1179 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1179 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 1165 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_chunk_6_p_0(
#line 1165 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_7,
#line 1165 "llds_out_file.m"
  MR_String ll_backend__llds_out__llds_out_file__Suffix_8,
#line 1165 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ProcLabel_9,
#line 1165 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__LabelSlotNums_10);

#line 1162 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_group_5_p_0_1(
#line 1162 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1162 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1162 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1162 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 1150 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_group_5_p_0(
#line 1150 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_6,
#line 1150 "llds_out_file.m"
  MR_String ll_backend__llds_out__llds_out_file__Suffix_7,
#line 1150 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__3_3);

#line 1147 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_no_layout_init_chunk_4_p_0_1(
#line 1147 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1147 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1147 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1147 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 1138 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_no_layout_init_chunk_4_p_0(
#line 1138 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ProcLabel_5,
#line 1138 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__LabelNums_6);

#line 1135 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_no_layout_init_group_3_p_0_1(
#line 1135 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1135 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1135 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1135 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 1126 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_no_layout_init_group_3_p_0(
#line 1126 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1);

#line 1084 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__group_init_c_labels_10_p_0(
#line 1084 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 1084 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2,
#line 1084 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoLayoutMap_0_3,
#line 1084 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoLayoutMap_4,
#line 1084 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_0_5,
#line 1084 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_6,
#line 1084 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_0_7,
#line 1084 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_8,
#line 1084 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_0_9,
#line 1084 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_10);

#line 1081 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0_5(
#line 1081 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1081 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1081 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1081 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 1077 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0_4(
#line 1077 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1077 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1077 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1077 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 1073 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0_3(
#line 1073 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1073 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1073 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1073 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 1069 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0_2(
#line 1069 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1069 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1069 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1069 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 1058 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0_1(
#line 1058 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1058 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1058 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1058 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 1053 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0(
#line 1053 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_6,
#line 1053 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__EntryLabels_7,
#line 1053 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__InternalLabels_8);

#line 1022 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_entry_label_decl_6_p_0(
#line 1022 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file___Info_7,
#line 1022 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Label_8,
#line 1022 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_17,
#line 1022 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_18);

#line 1015 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__insert_internal_label_code_addr_decl_4_p_0(
#line 1015 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ProcLabel_5,
#line 1015 "llds_out_file.m"
  MR_Integer ll_backend__llds_out__llds_out_file__LabelNum_6,
#line 1015 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_9,
#line 1015 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_10);

#line 1012 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_internal_label_decl_group_6_p_0_2(
#line 1012 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1012 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1012 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1012 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 1010 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_internal_label_decl_group_6_p_0_1(
#line 1010 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1010 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1010 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1010 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 1000 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_internal_label_decl_group_6_p_0(
#line 1000 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ProcLabel_7,
#line 1000 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__LabelNums_8,
#line 1000 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_11,
#line 1000 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_12);

#line 997 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_internal_label_decls_5_p_0_2(
#line 997 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 997 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 997 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 997 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 995 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_internal_label_decls_5_p_0_1(
#line 995 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 995 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 995 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 995 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 995 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 995 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5);

#line 986 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_internal_label_decls_5_p_0(
#line 986 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 986 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_13,
#line 986 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_14);

#line 972 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__group_decl_c_labels_3_p_0(
#line 972 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 972 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabelMap_0_2,
#line 972 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabelMap_3);

#line 969 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_c_label_decls_7_p_0_2(
#line 969 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 969 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 969 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 969 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 969 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 969 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5);

#line 967 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_c_label_decls_7_p_0_1(
#line 967 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 967 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 967 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 967 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 967 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 967 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5);

#line 959 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_c_label_decls_7_p_0(
#line 959 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_8,
#line 959 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__EntryLabels_9,
#line 959 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__InternalLabels_10,
#line 959 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_15,
#line 959 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_16);

#line 923 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_foreign_decl_or_code_7_p_0(
#line 923 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_8,
#line 923 "llds_out_file.m"
  MR_String ll_backend__llds_out__llds_out_file__PragmaType_9,
#line 923 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Lang_10,
#line 923 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__LiteralOrInclude_11,
#line 923 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Context_12);

#line 898 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_foreign_header_include_line_6_p_0(
#line 898 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_7,
#line 898 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Decl_8,
#line 898 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AlreadyDone_0_15,
#line 898 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AlreadyDone_16);

#line 895 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_foreign_header_include_lines_4_p_0_1(
#line 895 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 895 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 895 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 895 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 895 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 895 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5);

#line 891 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_foreign_header_include_lines_4_p_0(
#line 891 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_5,
#line 891 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Decls_6);

#line 873 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_foreign_body_code_4_p_0(
#line 873 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_5,
#line 873 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ForeignBodyCode_6);

#line 857 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_static_linkage_define_2_p_0(void);

#line 852 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_annotated_c_module_6_p_0_2(
#line 852 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 852 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 852 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 852 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 844 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_annotated_c_module_6_p_0_1(
#line 844 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 844 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 844 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 844 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 844 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 844 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5);

#line 837 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_annotated_c_module_6_p_0(
#line 837 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_7,
#line 837 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__AnnotatedModule_8,
#line 837 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_15,
#line 837 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_16);

#line 827 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_required_init_or_final_calls_3_p_0(
#line 827 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1);

#line 820 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_env_var_init_3_p_0(
#line 820 "llds_out_file.m"
  MR_String ll_backend__llds_out__llds_out_file__EnvVarName_4);

#line 816 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_init_comment_6_p_0_1(
#line 816 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 816 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 816 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 816 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3);

#line 789 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_init_comment_6_p_0(
#line 789 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ModuleName_7,
#line 789 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__UserInitPredCNames_8,
#line 789 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__UserFinalPredCNames_9,
#line 789 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__EnvVarNames_10);

#line 756 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_write_proc_static_list_3_p_0(
#line 756 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1);

#line 743 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_debugger_init_list_3_p_0(
#line 743 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1);

#line 731 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_type_tables_init_list_3_p_0(
#line 731 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1);

#line 709 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_alloc_sites_init_4_p_0(
#line 709 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_5,
#line 709 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__AllocSites_6);

#line 700 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_data_init_list_3_p_0(
#line 700 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1);

#line 674 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_init_bunch_calls_6_p_0(
#line 674 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_1,
#line 674 "llds_out_file.m"
  MR_String ll_backend__llds_out__llds_out_file__InitStatus_2,
#line 674 "llds_out_file.m"
  MR_Integer ll_backend__llds_out__llds_out_file__Seq_3,
#line 674 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__4_4);

#line 663 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_init_bunch_def_3_p_0(
#line 663 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1);

#line 649 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_init_bunch_defs_6_p_0(
#line 649 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_1,
#line 649 "llds_out_file.m"
  MR_String ll_backend__llds_out__llds_out_file__InitStatus_2,
#line 649 "llds_out_file.m"
  MR_Integer ll_backend__llds_out__llds_out_file__Seq_3,
#line 649 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__4_4);

#line 641 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__entry_label_has_layout_2_p_0(
#line 641 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__EntryLabelToLayoutMap_3,
#line 641 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Label_4);

#line 635 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__internal_label_has_layout_2_p_0(
#line 635 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__InternalLabelToLayoutMap_3,
#line 635 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Label_4);

#line 631 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__module_defines_label_with_layout_2_p_0_2(
#line 631 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 631 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1);

#line 626 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__module_defines_label_with_layout_2_p_0_1(
#line 626 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 626 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1);

#line 615 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__module_defines_label_with_layout_2_p_0(
#line 615 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_3,
#line 615 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__AnnotatedModule_4);

#line 410 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_module_init_list_15_p_0_1(
#line 410 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 410 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1);

#line 400 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_module_init_list_15_p_0(
#line 400 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_16,
#line 400 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ModuleName_17,
#line 400 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__AnnotatedModules_18,
#line 400 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__RttiDatas_19,
#line 400 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ProcLayoutDatas_20,
#line 400 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ModuleLayoutDatas_21,
#line 400 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ComplexityProcs_22,
#line 400 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__TSStringTable_23,
#line 400 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__AllocSites_24,
#line 400 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__InitPredNames_25,
#line 400 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__FinalPredNames_26,
#line 400 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_52,
#line 400 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_53);

#line 377 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__gather_labels_from_instrs_acc_5_p_0(
#line 377 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 377 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_0_2,
#line 377 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_3,
#line 377 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_0_4,
#line 377 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_5);

#line 368 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__annotate_c_procedure_9_p_0_1(
#line 368 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 368 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1);

#line 319 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__annotate_c_procedure_9_p_0(
#line 319 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_10,
#line 319 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Proc_11,
#line 319 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__AnnotatedProc_12,
#line 319 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllEntryLabels_0_30,
#line 319 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllEntryLabels_31,
#line 319 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllInternalLabels_0_32,
#line 319 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllInternalLabels_33,
#line 319 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_0_34,
#line 319 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_35);

#line 305 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__annotate_c_procedures_9_p_0(
#line 305 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_1,
#line 305 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2,
#line 305 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__HeadVar__3_3,
#line 305 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllEntryLabels_0_4,
#line 305 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllEntryLabels_5,
#line 305 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllInternalLabels_0_6,
#line 305 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllInternalLabels_7,
#line 305 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_0_8,
#line 305 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_9);

#line 273 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__annotate_c_modules_9_p_0(
#line 273 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_1,
#line 273 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2,
#line 273 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__HeadVar__3_3,
#line 273 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EntryLabels_0_4,
#line 273 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EntryLabels_5,
#line 273 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabels_0_6,
#line 273 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabels_7,
#line 273 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_0_8,
#line 273 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_9);

#line 216 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_file_mercury_headers_3_p_0(
#line 216 "llds_out_file.m"
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
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_65,
#line 122 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_66);

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



#line 2016 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0
  }
};

#line 2024 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_file__set_tree234__pti_set_tree234_1__plain_ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

#line 2032 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__llds_out__llds_out_file__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__layout__type_ctor_info_layout_slot_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0
  }
};

#line 2041 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__llds_out__llds_out_file__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_ll_backend__llds__type_ctor_info_data_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0
  }
};

#line 2050 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_foreign_literal_or_include_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_literal_or_include_0
  }
};

#line 2058 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__llds_out__llds_out_file__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2066 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__llds_out__llds_out_file__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
    (MR_PseudoTypeInfo) &ll_backend__llds_out__llds_out_file__list__ti_list_1builtin__type_ctor_info_int_0
  }
};

#line 2075 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_file__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2083 "ll_backend.llds_out.llds_out_file.c"
static const MR_VA_TypeInfo_Struct2 ll_backend__llds_out__llds_out_file____vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2093 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__llds_out__llds_out_file__list__ti_list_1__vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__llds_out__llds_out_file____vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0
  }
};

#line 2101 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__llds_out__llds_out_file__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_list__ti_list_1__vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
    (MR_PseudoTypeInfo) &ll_backend__llds_out__llds_out_file__list__ti_list_1__vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0
  }
};

#line 2110 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_file__list__pti_list_1__plain___vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds_out__llds_out_file____vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0
  }
};

#line 2118 "ll_backend.llds_out.llds_out_file.c"
static const MR_VA_PseudoTypeInfo_Struct2 ll_backend__llds_out__llds_out_file____vpti_tuple_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2128 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__llds_out__llds_out_file__list__ti_list_1ll_backend__llds_out__llds_out_file__type_ctor_info_annotated_c_procedure_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__type_ctor_info_annotated_c_procedure_0
  }
};

#line 2136 "ll_backend.llds_out.llds_out_file.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__llds_out__llds_out_file__list__ti_list_1ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

#line 2144 "ll_backend.llds_out.llds_out_file.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__field_types_annotated_c_module_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &ll_backend__llds_out__llds_out_file__list__ti_list_1ll_backend__llds_out__llds_out_file__type_ctor_info_annotated_c_procedure_0,
  (MR_PseudoTypeInfo) &ll_backend__llds_out__llds_out_file__list__ti_list_1ll_backend__llds__type_ctor_info_label_0,
  (MR_PseudoTypeInfo) &ll_backend__llds_out__llds_out_file__list__ti_list_1ll_backend__llds__type_ctor_info_label_0
};

#line 2152 "ll_backend.llds_out.llds_out_file.c"
static const MR_ConstString ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__field_names_annotated_c_module_0_0[4] = {
  (MR_String) "acm_name",
  (MR_String) "acm_procs",
  (MR_String) "acm_entry_labels",
  (MR_String) "acm_internal_labels"
};

#line 2160 "ll_backend.llds_out.llds_out_file.c"
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

#line 2175 "ll_backend.llds_out.llds_out_file.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_stag_ordered_annotated_c_module_0_0[1] = {
  &ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_functor_desc_annotated_c_module_0_0
};

#line 2180 "ll_backend.llds_out.llds_out_file.c"
static const MR_DuPtagLayout ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_ptag_ordered_annotated_c_module_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_stag_ordered_annotated_c_module_0_0
  }
};

#line 2189 "ll_backend.llds_out.llds_out_file.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_name_ordered_annotated_c_module_0[1] = {
  &ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_functor_desc_annotated_c_module_0_0
};

#line 2194 "ll_backend.llds_out.llds_out_file.c"
static const MR_Integer ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__functor_number_map_annotated_c_module_0[1] = {
  (MR_Integer) 0
};

#line 2199 "ll_backend.llds_out.llds_out_file.c"
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

#line 2216 "ll_backend.llds_out.llds_out_file.c"
static const MR_PseudoTypeInfo ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__field_types_annotated_c_procedure_0_0[2] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0,
  (MR_PseudoTypeInfo) &ll_backend__llds_out__llds_out_instr__ll_backend__llds_out__llds_out_instr__type_ctor_info_label_output_info_0
};

#line 2222 "ll_backend.llds_out.llds_out_file.c"
static const MR_ConstString ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__field_names_annotated_c_procedure_0_0[2] = {
  (MR_String) "acp_proc",
  (MR_String) "acp_label_output_info"
};

#line 2228 "ll_backend.llds_out.llds_out_file.c"
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

#line 2243 "ll_backend.llds_out.llds_out_file.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_stag_ordered_annotated_c_procedure_0_0[1] = {
  &ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_functor_desc_annotated_c_procedure_0_0
};

#line 2248 "ll_backend.llds_out.llds_out_file.c"
static const MR_DuPtagLayout ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_ptag_ordered_annotated_c_procedure_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_stag_ordered_annotated_c_procedure_0_0
  }
};

#line 2257 "ll_backend.llds_out.llds_out_file.c"
static const MR_DuFunctorDescPtr ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_name_ordered_annotated_c_procedure_0[1] = {
  &ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__du_functor_desc_annotated_c_procedure_0_0
};

#line 2262 "ll_backend.llds_out.llds_out_file.c"
static const MR_Integer ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__functor_number_map_annotated_c_procedure_0[1] = {
  (MR_Integer) 0
};

#line 2267 "ll_backend.llds_out.llds_out_file.c"
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

#line 2284 "ll_backend.llds_out.llds_out_file.c"
static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_functor_desc_linkage_0_0 = {
  (MR_String) "extern",
  (MR_Integer) 0
};

#line 2290 "ll_backend.llds_out.llds_out_file.c"
static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_functor_desc_linkage_0_1 = {
  (MR_String) "static",
  (MR_Integer) 1
};

#line 2296 "ll_backend.llds_out.llds_out_file.c"
static const MR_EnumFunctorDescPtr ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_value_ordered_linkage_0[2] = {
  &ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_functor_desc_linkage_0_0,
  &ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_functor_desc_linkage_0_1
};

#line 2302 "ll_backend.llds_out.llds_out_file.c"
static const MR_EnumFunctorDescPtr ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_name_ordered_linkage_0[2] = {
  &ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_functor_desc_linkage_0_0,
  &ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__enum_functor_desc_linkage_0_1
};

#line 2308 "ll_backend.llds_out.llds_out_file.c"
static const MR_Integer ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__functor_number_map_linkage_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2314 "ll_backend.llds_out.llds_out_file.c"
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

#line 2331 "ll_backend.llds_out.llds_out_file.c"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file____Unify____annotated_c_module_0_0_10001(
#line 2334 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 2336 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2)
#line 2338 "ll_backend.llds_out.llds_out_file.c"
{
#line 2340 "ll_backend.llds_out.llds_out_file.c"
  {
#line 2342 "ll_backend.llds_out.llds_out_file.c"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 2345 "ll_backend.llds_out.llds_out_file.c"
    {
#line 2347 "ll_backend.llds_out.llds_out_file.c"
      ll_backend__llds_out__llds_out_file__succeeded = ll_backend__llds_out__llds_out_file____Unify____annotated_c_module_0_0(((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2));
    }
#line 2350 "ll_backend.llds_out.llds_out_file.c"
    return ll_backend__llds_out__llds_out_file__succeeded;
#line 2352 "ll_backend.llds_out.llds_out_file.c"
  }
#line 2354 "ll_backend.llds_out.llds_out_file.c"
}

#line 2357 "ll_backend.llds_out.llds_out_file.c"
static void MR_CALL 
ll_backend__llds_out__llds_out_file____Compare____annotated_c_module_0_0_10001(
#line 2360 "ll_backend.llds_out.llds_out_file.c"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 2362 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 2364 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 2366 "ll_backend.llds_out.llds_out_file.c"
{
#line 2368 "ll_backend.llds_out.llds_out_file.c"
  {
#line 2370 "ll_backend.llds_out.llds_out_file.c"
    MR_Word ll_backend__llds_out__llds_out_file__conv0_HeadVar__1_1;

#line 2373 "ll_backend.llds_out.llds_out_file.c"
    {
#line 2375 "ll_backend.llds_out.llds_out_file.c"
      ll_backend__llds_out__llds_out_file____Compare____annotated_c_module_0_0(&ll_backend__llds_out__llds_out_file__conv0_HeadVar__1_1, ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_3));
    }
#line 2378 "ll_backend.llds_out.llds_out_file.c"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_1 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv0_HeadVar__1_1));
#line 2380 "ll_backend.llds_out.llds_out_file.c"
  }
#line 2382 "ll_backend.llds_out.llds_out_file.c"
}

#line 2385 "ll_backend.llds_out.llds_out_file.c"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file____Unify____annotated_c_procedure_0_0_10001(
#line 2388 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 2390 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2)
#line 2392 "ll_backend.llds_out.llds_out_file.c"
{
#line 2394 "ll_backend.llds_out.llds_out_file.c"
  {
#line 2396 "ll_backend.llds_out.llds_out_file.c"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 2399 "ll_backend.llds_out.llds_out_file.c"
    {
#line 2401 "ll_backend.llds_out.llds_out_file.c"
      ll_backend__llds_out__llds_out_file__succeeded = ll_backend__llds_out__llds_out_file____Unify____annotated_c_procedure_0_0(((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2));
    }
#line 2404 "ll_backend.llds_out.llds_out_file.c"
    return ll_backend__llds_out__llds_out_file__succeeded;
#line 2406 "ll_backend.llds_out.llds_out_file.c"
  }
#line 2408 "ll_backend.llds_out.llds_out_file.c"
}

#line 2411 "ll_backend.llds_out.llds_out_file.c"
static void MR_CALL 
ll_backend__llds_out__llds_out_file____Compare____annotated_c_procedure_0_0_10001(
#line 2414 "ll_backend.llds_out.llds_out_file.c"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 2416 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 2418 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 2420 "ll_backend.llds_out.llds_out_file.c"
{
#line 2422 "ll_backend.llds_out.llds_out_file.c"
  {
#line 2424 "ll_backend.llds_out.llds_out_file.c"
    MR_Word ll_backend__llds_out__llds_out_file__conv0_HeadVar__1_1;

#line 2427 "ll_backend.llds_out.llds_out_file.c"
    {
#line 2429 "ll_backend.llds_out.llds_out_file.c"
      ll_backend__llds_out__llds_out_file____Compare____annotated_c_procedure_0_0(&ll_backend__llds_out__llds_out_file__conv0_HeadVar__1_1, ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_3));
    }
#line 2432 "ll_backend.llds_out.llds_out_file.c"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_1 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv0_HeadVar__1_1));
#line 2434 "ll_backend.llds_out.llds_out_file.c"
  }
#line 2436 "ll_backend.llds_out.llds_out_file.c"
}

#line 2439 "ll_backend.llds_out.llds_out_file.c"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file____Unify____linkage_0_0_10001(
#line 2442 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 2444 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2)
#line 2446 "ll_backend.llds_out.llds_out_file.c"
{
#line 2448 "ll_backend.llds_out.llds_out_file.c"
  {
#line 2450 "ll_backend.llds_out.llds_out_file.c"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 2453 "ll_backend.llds_out.llds_out_file.c"
    {
#line 2455 "ll_backend.llds_out.llds_out_file.c"
      ll_backend__llds_out__llds_out_file__succeeded = ll_backend__llds_out__llds_out_file____Unify____linkage_0_0(((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2));
    }
#line 2458 "ll_backend.llds_out.llds_out_file.c"
    return ll_backend__llds_out__llds_out_file__succeeded;
#line 2460 "ll_backend.llds_out.llds_out_file.c"
  }
#line 2462 "ll_backend.llds_out.llds_out_file.c"
}

#line 2465 "ll_backend.llds_out.llds_out_file.c"
static void MR_CALL 
ll_backend__llds_out__llds_out_file____Compare____linkage_0_0_10001(
#line 2468 "ll_backend.llds_out.llds_out_file.c"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 2470 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 2472 "ll_backend.llds_out.llds_out_file.c"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 2474 "ll_backend.llds_out.llds_out_file.c"
{
#line 2476 "ll_backend.llds_out.llds_out_file.c"
  {
#line 2478 "ll_backend.llds_out.llds_out_file.c"
    MR_Word ll_backend__llds_out__llds_out_file__conv0_HeadVar__1_1;

#line 2481 "ll_backend.llds_out.llds_out_file.c"
    {
#line 2483 "ll_backend.llds_out.llds_out_file.c"
      ll_backend__llds_out__llds_out_file____Compare____linkage_0_0(&ll_backend__llds_out__llds_out_file__conv0_HeadVar__1_1, ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_3));
    }
#line 2486 "ll_backend.llds_out.llds_out_file.c"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_1 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv0_HeadVar__1_1));
#line 2488 "ll_backend.llds_out.llds_out_file.c"
  }
#line 2490 "ll_backend.llds_out.llds_out_file.c"
}

#line 1022 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_114_101_99_111_114_100_95_101_110_116_114_121_95_108_97_98_101_108_95_100_101_99_108_95_95_91_49_93_95_48_6_p_0(
#line 1022 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Label_8,
#line 1022 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_17,
#line 1022 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_18)
#line 1022 "llds_out_file.m"
{
#line 1025 "llds_out_file.m"
  {
#line 1025 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 1025 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__DeclMacro_12;
#line 1025 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_33_33;
#line 1025 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_35_35;

#line 1029 "llds_out_file.m"
    if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Label_8)) == (MR_mktag((MR_Integer) 1))))
#line 1029 "llds_out_file.m"
      {
#line 1029 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__Label_8, (MR_Integer) 0)));
#line 1027 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__Label_8, (MR_Integer) 1)));

#line 1029 "llds_out_file.m"
#line 1029 "llds_out_file.m"
        switch (ll_backend__llds_out__llds_out_file__V_37_37) {
#line 1029 "llds_out_file.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1029 "llds_out_file.m"
          case (MR_Integer) 0:
#line 1034 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__DeclMacro_12 = (MR_String) "MR_decl_local";
#line 1029 "llds_out_file.m"
            break;
#line 1029 "llds_out_file.m"
          case (MR_Integer) 2:
#line 1028 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__DeclMacro_12 = (MR_String) "MR_def_extern_entry";
#line 1029 "llds_out_file.m"
            break;
#line 1029 "llds_out_file.m"
          case (MR_Integer) 1:
#line 1031 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__DeclMacro_12 = (MR_String) "MR_decl_static";
#line 1029 "llds_out_file.m"
            break;
#line 1029 "llds_out_file.m"
        }
#line 1029 "llds_out_file.m"
      }
#line 1029 "llds_out_file.m"
    else
#line 1036 "llds_out_file.m"
      {
#line 1037 "llds_out_file.m"
        {
#line 1037 "llds_out_file.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_out.llds_out_file", (MR_String) "predicate \140ll_backend.llds_out.llds_out_file.output_record_entry_label_decl\'/6", (MR_String) "internal label");
#line 1037 "llds_out_file.m"
          return;
        }
#line 1036 "llds_out_file.m"
      }
#line 1039 "llds_out_file.m"
    {
#line 1039 "llds_out_file.m"
      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__DeclMacro_12);
    }
#line 1040 "llds_out_file.m"
    {
#line 1040 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "(");
    }
#line 1041 "llds_out_file.m"
    {
#line 1041 "llds_out_file.m"
      ll_backend__llds_out__llds_out_code_addr__output_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_file__Label_8);
    }
#line 1042 "llds_out_file.m"
    {
#line 1042 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) ")\n");
    }
#line 1043 "llds_out_file.m"
    {
#line 1043 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1043 "llds_out_file.m"
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__V_35_35, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_8));
#line 1043 "llds_out_file.m"
    }
#line 1043 "llds_out_file.m"
    {
#line 1043 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_33_33 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1043 "llds_out_file.m"
      MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_file__V_33_33, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__V_35_35));
#line 1043 "llds_out_file.m"
    }
#line 1043 "llds_out_file.m"
    {
#line 1043 "llds_out_file.m"
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__llds_out__llds_out_file__V_33_33, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_17, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_18);
#line 1043 "llds_out_file.m"
      return;
    }
#line 1025 "llds_out_file.m"
  }
#line 1022 "llds_out_file.m"
}

#line 368 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__IntroducedFrom__pred__annotate_c_procedure__368__1_2_p_0(
#line 368 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__UndefWhileLabels_26,
#line 368 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_86)
#line 368 "llds_out_file.m"
{
#line 368 "llds_out_file.m"
  {
#line 368 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 368 "llds_out_file.m"
    {
#line 368 "llds_out_file.m"
      return ll_backend__llds_out__llds_out_file__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ll_backend__llds_out__llds_out_file__UndefWhileLabels_26, ((MR_Box) (ll_backend__llds_out__llds_out_file__HeadVar__2_86)));
    }
#line 368 "llds_out_file.m"
    return ll_backend__llds_out__llds_out_file__succeeded;
#line 368 "llds_out_file.m"
  }
#line 368 "llds_out_file.m"
}

#line 203 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__IntroducedFrom__pred__output_single_c_file__203__1_3_p_0(
#line 203 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__LambdaHeadVar__1_123)
#line 203 "llds_out_file.m"
{
#line 203 "llds_out_file.m"
  {
#line 203 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 203 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__ForeignExportCode_64 = (MR_String) ll_backend__llds_out__llds_out_file__LambdaHeadVar__1_123;

#line 206 "llds_out_file.m"
    {
#line 206 "llds_out_file.m"
      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__ForeignExportCode_64);
#line 206 "llds_out_file.m"
      return;
    }
#line 203 "llds_out_file.m"
  }
#line 203 "llds_out_file.m"
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
#line 2705 "ll_backend.llds_out.llds_out_file.c"
  {
#line 2707 "ll_backend.llds_out.llds_out_file.c"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded = (ll_backend__llds_out__llds_out_file__HeadVar__2_1 == ll_backend__llds_out__llds_out_file__HeadVar__2_2);

#line 2710 "ll_backend.llds_out.llds_out_file.c"
    return ll_backend__llds_out__llds_out_file__succeeded;
#line 2712 "ll_backend.llds_out.llds_out_file.c"
  }
#line 59 "llds_out_file.m"
}

#line 267 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file____Compare____annotated_c_procedure_0_0(
#line 267 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 267 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2,
#line 267 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__3_3)
#line 267 "llds_out_file.m"
{
#line 267 "llds_out_file.m"
  {
#line 267 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 267 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__CastX_9 = (MR_Integer) ll_backend__llds_out__llds_out_file__HeadVar__2_2;
#line 267 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__CastY_10 = (MR_Integer) ll_backend__llds_out__llds_out_file__HeadVar__3_3;

#line 267 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__succeeded = (ll_backend__llds_out__llds_out_file__CastX_9 == ll_backend__llds_out__llds_out_file__CastY_10);
#line 267 "llds_out_file.m"
    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 2741 "ll_backend.llds_out.llds_out_file.c"
      *ll_backend__llds_out__llds_out_file__HeadVar__1_1 = (MR_Integer) 0;
#line 267 "llds_out_file.m"
    else
#line 267 "llds_out_file.m"
      {
#line 267 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 0)));
#line 267 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 1)));
#line 267 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__3_3, (MR_Integer) 0)));
#line 267 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__3_3, (MR_Integer) 1)));
#line 267 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_8_8;

#line 267 "llds_out_file.m"
        {
#line 267 "llds_out_file.m"
          ll_backend__llds____Compare____c_procedure_0_0(&ll_backend__llds_out__llds_out_file__V_8_8, ll_backend__llds_out__llds_out_file__V_4_4, ll_backend__llds_out__llds_out_file__V_6_6);
        }
#line 2763 "ll_backend.llds_out.llds_out_file.c"
        ll_backend__llds_out__llds_out_file__succeeded = (ll_backend__llds_out__llds_out_file__V_8_8 == (MR_Integer) 0);
#line 267 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__succeeded = !(ll_backend__llds_out__llds_out_file__succeeded);
#line 267 "llds_out_file.m"
        if (ll_backend__llds_out__llds_out_file__succeeded)
#line 267 "llds_out_file.m"
          *ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__V_8_8;
#line 267 "llds_out_file.m"
        else
#line 267 "llds_out_file.m"
          {
#line 267 "llds_out_file.m"
            ll_backend__llds_out__llds_out_instr____Compare____label_output_info_0_0(ll_backend__llds_out__llds_out_file__HeadVar__1_1, ll_backend__llds_out__llds_out_file__V_5_5, ll_backend__llds_out__llds_out_file__V_7_7);
#line 267 "llds_out_file.m"
            return;
          }
#line 267 "llds_out_file.m"
      }
#line 267 "llds_out_file.m"
  }
#line 267 "llds_out_file.m"
}

#line 267 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file____Unify____annotated_c_procedure_0_0(
#line 267 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 267 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2)
#line 267 "llds_out_file.m"
{
#line 267 "llds_out_file.m"
  {
#line 267 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 267 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__CastX_7 = (MR_Integer) ll_backend__llds_out__llds_out_file__HeadVar__1_1;
#line 267 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__CastY_8 = (MR_Integer) ll_backend__llds_out__llds_out_file__HeadVar__2_2;

#line 267 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__succeeded = (ll_backend__llds_out__llds_out_file__CastX_7 == ll_backend__llds_out__llds_out_file__CastY_8);
#line 267 "llds_out_file.m"
    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 267 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__succeeded = MR_TRUE;
#line 267 "llds_out_file.m"
    else
#line 267 "llds_out_file.m"
      {
#line 267 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 267 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 267 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 0)));
#line 267 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 1)));

#line 2824 "ll_backend.llds_out.llds_out_file.c"
        {
#line 2826 "ll_backend.llds_out.llds_out_file.c"
          ll_backend__llds_out__llds_out_file__succeeded = ll_backend__llds____Unify____c_procedure_0_0(ll_backend__llds_out__llds_out_file__V_3_3, ll_backend__llds_out__llds_out_file__V_5_5);
        }
#line 267 "llds_out_file.m"
        if (ll_backend__llds_out__llds_out_file__succeeded)
#line 2831 "ll_backend.llds_out.llds_out_file.c"
          {
#line 2833 "ll_backend.llds_out.llds_out_file.c"
            return ll_backend__llds_out__llds_out_file__succeeded = ll_backend__llds_out__llds_out_instr____Unify____label_output_info_0_0(ll_backend__llds_out__llds_out_file__V_4_4, ll_backend__llds_out__llds_out_file__V_6_6);
          }
#line 267 "llds_out_file.m"
      }
#line 267 "llds_out_file.m"
    return ll_backend__llds_out__llds_out_file__succeeded;
#line 267 "llds_out_file.m"
  }
#line 267 "llds_out_file.m"
}

#line 259 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file____Compare____annotated_c_module_0_0(
#line 259 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 259 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2,
#line 259 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__3_3)
#line 259 "llds_out_file.m"
{
#line 259 "llds_out_file.m"
  {
#line 259 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 259 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__CastX_15 = (MR_Integer) ll_backend__llds_out__llds_out_file__HeadVar__2_2;
#line 259 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__CastY_16 = (MR_Integer) ll_backend__llds_out__llds_out_file__HeadVar__3_3;

#line 259 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__succeeded = (ll_backend__llds_out__llds_out_file__CastX_15 == ll_backend__llds_out__llds_out_file__CastY_16);
#line 259 "llds_out_file.m"
    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 2869 "ll_backend.llds_out.llds_out_file.c"
      *ll_backend__llds_out__llds_out_file__HeadVar__1_1 = (MR_Integer) 0;
#line 259 "llds_out_file.m"
    else
#line 259 "llds_out_file.m"
      {
#line 259 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 0)));
#line 259 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 1)));
#line 259 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 2)));
#line 259 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 3)));
#line 259 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__3_3, (MR_Integer) 0)));
#line 259 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__3_3, (MR_Integer) 1)));
#line 259 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__3_3, (MR_Integer) 2)));
#line 259 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__3_3, (MR_Integer) 3)));
#line 259 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_12_12;

#line 259 "llds_out_file.m"
        {
#line 259 "llds_out_file.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&ll_backend__llds_out__llds_out_file__V_12_12, ll_backend__llds_out__llds_out_file__V_4_4, ll_backend__llds_out__llds_out_file__V_8_8);
        }
#line 2899 "ll_backend.llds_out.llds_out_file.c"
        ll_backend__llds_out__llds_out_file__succeeded = (ll_backend__llds_out__llds_out_file__V_12_12 == (MR_Integer) 0);
#line 259 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__succeeded = !(ll_backend__llds_out__llds_out_file__succeeded);
#line 259 "llds_out_file.m"
        if (ll_backend__llds_out__llds_out_file__succeeded)
#line 259 "llds_out_file.m"
          *ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__V_12_12;
#line 259 "llds_out_file.m"
        else
#line 259 "llds_out_file.m"
          {
#line 259 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_13_13;

#line 259 "llds_out_file.m"
            {
#line 259 "llds_out_file.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_1[4], &ll_backend__llds_out__llds_out_file__V_13_13, ((MR_Box) (ll_backend__llds_out__llds_out_file__V_5_5)), ((MR_Box) (ll_backend__llds_out__llds_out_file__V_9_9)));
            }
#line 2919 "ll_backend.llds_out.llds_out_file.c"
            ll_backend__llds_out__llds_out_file__succeeded = (ll_backend__llds_out__llds_out_file__V_13_13 == (MR_Integer) 0);
#line 259 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__succeeded = !(ll_backend__llds_out__llds_out_file__succeeded);
#line 259 "llds_out_file.m"
            if (ll_backend__llds_out__llds_out_file__succeeded)
#line 259 "llds_out_file.m"
              *ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__V_13_13;
#line 259 "llds_out_file.m"
            else
#line 259 "llds_out_file.m"
              {
#line 259 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__V_14_14;

#line 259 "llds_out_file.m"
                {
#line 259 "llds_out_file.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_1[5], &ll_backend__llds_out__llds_out_file__V_14_14, ((MR_Box) (ll_backend__llds_out__llds_out_file__V_6_6)), ((MR_Box) (ll_backend__llds_out__llds_out_file__V_10_10)));
                }
#line 2939 "ll_backend.llds_out.llds_out_file.c"
                ll_backend__llds_out__llds_out_file__succeeded = (ll_backend__llds_out__llds_out_file__V_14_14 == (MR_Integer) 0);
#line 259 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__succeeded = !(ll_backend__llds_out__llds_out_file__succeeded);
#line 259 "llds_out_file.m"
                if (ll_backend__llds_out__llds_out_file__succeeded)
#line 259 "llds_out_file.m"
                  *ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__V_14_14;
#line 259 "llds_out_file.m"
                else
#line 259 "llds_out_file.m"
                  {
#line 259 "llds_out_file.m"
                    {
#line 259 "llds_out_file.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_1[5], ll_backend__llds_out__llds_out_file__HeadVar__1_1, ((MR_Box) (ll_backend__llds_out__llds_out_file__V_7_7)), ((MR_Box) (ll_backend__llds_out__llds_out_file__V_11_11)));
#line 259 "llds_out_file.m"
                      return;
                    }
#line 259 "llds_out_file.m"
                  }
#line 259 "llds_out_file.m"
              }
#line 259 "llds_out_file.m"
          }
#line 259 "llds_out_file.m"
      }
#line 259 "llds_out_file.m"
  }
#line 259 "llds_out_file.m"
}

#line 259 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file____Unify____annotated_c_module_0_0(
#line 259 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 259 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2)
#line 259 "llds_out_file.m"
{
#line 259 "llds_out_file.m"
  {
#line 259 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 259 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__CastX_11 = (MR_Integer) ll_backend__llds_out__llds_out_file__HeadVar__1_1;
#line 259 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__CastY_12 = (MR_Integer) ll_backend__llds_out__llds_out_file__HeadVar__2_2;

#line 259 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__succeeded = (ll_backend__llds_out__llds_out_file__CastX_11 == ll_backend__llds_out__llds_out_file__CastY_12);
#line 259 "llds_out_file.m"
    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 259 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__succeeded = MR_TRUE;
#line 259 "llds_out_file.m"
    else
#line 259 "llds_out_file.m"
      {
#line 259 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__TypeInfo_13_13;
#line 259 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__TypeInfo_14_14;
#line 259 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__TypeInfo_15_15;
#line 259 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 259 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 259 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 2)));
#line 259 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 3)));
#line 259 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 0)));
#line 259 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 1)));
#line 259 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 2)));
#line 259 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 3)));

#line 3022 "ll_backend.llds_out.llds_out_file.c"
        ll_backend__llds_out__llds_out_file__succeeded = (strcmp(ll_backend__llds_out__llds_out_file__V_3_3, ll_backend__llds_out__llds_out_file__V_7_7) == 0);
#line 259 "llds_out_file.m"
        if (ll_backend__llds_out__llds_out_file__succeeded)
#line 259 "llds_out_file.m"
          {
#line 3028 "ll_backend.llds_out.llds_out_file.c"
            ll_backend__llds_out__llds_out_file__TypeInfo_13_13 = (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_1[4];
#line 3030 "ll_backend.llds_out.llds_out_file.c"
            {
#line 3032 "ll_backend.llds_out.llds_out_file.c"
              ll_backend__llds_out__llds_out_file__succeeded = mercury__builtin__unify_2_p_0(ll_backend__llds_out__llds_out_file__TypeInfo_13_13, ((MR_Box) (ll_backend__llds_out__llds_out_file__V_4_4)), ((MR_Box) (ll_backend__llds_out__llds_out_file__V_8_8)));
            }
#line 259 "llds_out_file.m"
            if (ll_backend__llds_out__llds_out_file__succeeded)
#line 259 "llds_out_file.m"
              {
#line 3039 "ll_backend.llds_out.llds_out_file.c"
                ll_backend__llds_out__llds_out_file__TypeInfo_14_14 = (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_1[5];
#line 3041 "ll_backend.llds_out.llds_out_file.c"
                {
#line 3043 "ll_backend.llds_out.llds_out_file.c"
                  ll_backend__llds_out__llds_out_file__succeeded = mercury__builtin__unify_2_p_0(ll_backend__llds_out__llds_out_file__TypeInfo_14_14, ((MR_Box) (ll_backend__llds_out__llds_out_file__V_5_5)), ((MR_Box) (ll_backend__llds_out__llds_out_file__V_9_9)));
                }
#line 259 "llds_out_file.m"
                if (ll_backend__llds_out__llds_out_file__succeeded)
#line 259 "llds_out_file.m"
                  {
#line 3050 "ll_backend.llds_out.llds_out_file.c"
                    ll_backend__llds_out__llds_out_file__TypeInfo_15_15 = (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_1[5];
#line 3052 "ll_backend.llds_out.llds_out_file.c"
                    {
#line 3054 "ll_backend.llds_out.llds_out_file.c"
                      return ll_backend__llds_out__llds_out_file__succeeded = mercury__builtin__unify_2_p_0(ll_backend__llds_out__llds_out_file__TypeInfo_15_15, ((MR_Box) (ll_backend__llds_out__llds_out_file__V_6_6)), ((MR_Box) (ll_backend__llds_out__llds_out_file__V_10_10)));
                    }
#line 259 "llds_out_file.m"
                  }
#line 259 "llds_out_file.m"
              }
#line 259 "llds_out_file.m"
          }
#line 259 "llds_out_file.m"
      }
#line 259 "llds_out_file.m"
    return ll_backend__llds_out__llds_out_file__succeeded;
#line 259 "llds_out_file.m"
  }
#line 259 "llds_out_file.m"
}

#line 1650 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__delete_any_maybe_labels_3_p_0(
#line 1650 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 1650 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_2,
#line 1650 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_3)
#line 1650 "llds_out_file.m"
{
#line 1653 "llds_out_file.m"
  while (MR_TRUE)
#line 1653 "llds_out_file.m"
    {
#line 1653 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 1653 "llds_out_file.m"
      {
#line 1653 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 1653 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1653 "llds_out_file.m"
          *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_3 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_2;
#line 1653 "llds_out_file.m"
        else
#line 1654 "llds_out_file.m"
          {
#line 1654 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__MaybeLabel_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 1654 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__MaybeLabels_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 1654 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_12_12;

#line 1644 "llds_out_file.m"
            if ((ll_backend__llds_out__llds_out_file__MaybeLabel_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1644 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_12_12 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_2;
#line 1644 "llds_out_file.m"
            else
#line 1646 "llds_out_file.m"
              {
#line 1646 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__Label_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__MaybeLabel_7, (MR_Integer) 0)));

#line 1647 "llds_out_file.m"
                {
#line 1647 "llds_out_file.m"
                  mercury__set_tree234__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_18)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_2, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_12_12);
                }
#line 1646 "llds_out_file.m"
              }
#line 1656 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 1656 "llds_out_file.m"
            {
#line 1656 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__MaybeLabels_8;
#line 1656 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0__tmp_copy_2 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_12_12;

#line 1656 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_2 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0__tmp_copy_2;
#line 1656 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 1656 "llds_out_file.m"
            }
#line 1656 "llds_out_file.m"
            continue;
#line 1654 "llds_out_file.m"
          }
#line 1653 "llds_out_file.m"
      }
#line 1653 "llds_out_file.m"
      break;
#line 1653 "llds_out_file.m"
    }
#line 1650 "llds_out_file.m"
}

#line 1639 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__delete_any_maybe_label_3_p_0(
#line 1639 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__MaybeLabel_4,
#line 1639 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_7,
#line 1639 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_8)
#line 1639 "llds_out_file.m"
{
#line 1644 "llds_out_file.m"
  {
#line 1644 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 1644 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__MaybeLabel_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1644 "llds_out_file.m"
      *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_8 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_7;
#line 1644 "llds_out_file.m"
    else
#line 1646 "llds_out_file.m"
      {
#line 1646 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__Label_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__MaybeLabel_4, (MR_Integer) 0)));

#line 1647 "llds_out_file.m"
        {
#line 1647 "llds_out_file.m"
          mercury__set_tree234__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_6)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_7, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_8);
#line 1647 "llds_out_file.m"
          return;
        }
#line 1646 "llds_out_file.m"
      }
#line 1644 "llds_out_file.m"
  }
#line 1639 "llds_out_file.m"
}

#line 1631 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(
#line 1631 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 1631 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_2,
#line 1631 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_3)
#line 1631 "llds_out_file.m"
{
#line 1634 "llds_out_file.m"
  while (MR_TRUE)
#line 1634 "llds_out_file.m"
    {
#line 1634 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 1634 "llds_out_file.m"
      {
#line 1634 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 1634 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1634 "llds_out_file.m"
          *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_3 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_2;
#line 1634 "llds_out_file.m"
        else
#line 1635 "llds_out_file.m"
          {
#line 1635 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__CodeAddr_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 1635 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__CodeAddrs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 1635 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_12_12;
#line 1627 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Label_18;

#line 1625 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__CodeAddr_7)) == (MR_mktag((MR_Integer) 1)));
#line 1625 "llds_out_file.m"
            if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1625 "llds_out_file.m"
              {
#line 1625 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__Label_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__CodeAddr_7, (MR_Integer) 0)));
#line 1626 "llds_out_file.m"
                {
#line 1626 "llds_out_file.m"
                  mercury__set_tree234__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_18)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_2, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_12_12);
                }
#line 1625 "llds_out_file.m"
              }
#line 1625 "llds_out_file.m"
            else
#line 1627 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_12_12 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_2;
#line 1637 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 1637 "llds_out_file.m"
            {
#line 1637 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__CodeAddrs_8;
#line 1637 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0__tmp_copy_2 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_12_12;

#line 1637 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_2 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0__tmp_copy_2;
#line 1637 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 1637 "llds_out_file.m"
            }
#line 1637 "llds_out_file.m"
            continue;
#line 1635 "llds_out_file.m"
          }
#line 1634 "llds_out_file.m"
      }
#line 1634 "llds_out_file.m"
      break;
#line 1634 "llds_out_file.m"
    }
#line 1631 "llds_out_file.m"
}

#line 1621 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__delete_any_label_3_p_0(
#line 1621 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__CodeAddr_4,
#line 1621 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_7,
#line 1621 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_8)
#line 1621 "llds_out_file.m"
{
#line 1627 "llds_out_file.m"
  {
#line 1627 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__CodeAddr_4)) == (MR_mktag((MR_Integer) 1)));
#line 1627 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__Label_6;

#line 1625 "llds_out_file.m"
    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1625 "llds_out_file.m"
      {
#line 1625 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__Label_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__CodeAddr_4, (MR_Integer) 0)));
#line 1626 "llds_out_file.m"
        {
#line 1626 "llds_out_file.m"
          mercury__set_tree234__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_6)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_7, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_8);
#line 1626 "llds_out_file.m"
          return;
        }
#line 1625 "llds_out_file.m"
      }
#line 1625 "llds_out_file.m"
    else
#line 1627 "llds_out_file.m"
      *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_8 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_7;
#line 1627 "llds_out_file.m"
  }
#line 1621 "llds_out_file.m"
}

#line 1444 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__find_while_labels_to_define_5_p_0(
#line 1444 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 1444 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2,
#line 1444 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__WhileLabels_3,
#line 1444 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4,
#line 1444 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_5)
#line 1444 "llds_out_file.m"
{
#line 1448 "llds_out_file.m"
  while (MR_TRUE)
#line 1448 "llds_out_file.m"
    {
#line 1448 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 1448 "llds_out_file.m"
      {
#line 1448 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 1448 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1448 "llds_out_file.m"
          *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_5 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4;
#line 1448 "llds_out_file.m"
        else
#line 1450 "llds_out_file.m"
          {
#line 1450 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Instr0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 1450 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Instrs0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 1450 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Uinstr0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Instr0_11, (MR_Integer) 0)));
#line 1450 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19;
#line 1450 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145;
#line 1451 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Instr0_11, (MR_Integer) 1)));

#line 1459 "llds_out_file.m"
#line 1459 "llds_out_file.m"
            switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_16)) {
#line 1459 "llds_out_file.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1459 "llds_out_file.m"
              case (MR_Integer) 0:
#line 1609 "llds_out_file.m"
                {
#line 1610 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1609 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4;
#line 1609 "llds_out_file.m"
                }
#line 1459 "llds_out_file.m"
                break;
#line 1459 "llds_out_file.m"
              case (MR_Integer) 1:
#line 1459 "llds_out_file.m"
              case (MR_Integer) 2:
#line 1609 "llds_out_file.m"
                {
#line 1610 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1609 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4;
#line 1609 "llds_out_file.m"
                }
#line 1459 "llds_out_file.m"
                break;
#line 1459 "llds_out_file.m"
              case (MR_Integer) 3:
#line 1459 "llds_out_file.m"
#line 1459 "llds_out_file.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 0)))) {
#line 1459 "llds_out_file.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1459 "llds_out_file.m"
                  case (MR_Integer) 0:
#line 1494 "llds_out_file.m"
                    {
#line 1494 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__BlockInstrs_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 3)));
#line 1494 "llds_out_file.m"
                      MR_Integer ll_backend__llds_out__llds_out_file__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1494 "llds_out_file.m"
                      MR_Integer ll_backend__llds_out__llds_out_file__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));

#line 1495 "llds_out_file.m"
                      {
#line 1495 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__find_while_labels_to_define_5_p_0(ll_backend__llds_out__llds_out_file__BlockInstrs_34, ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2, ll_backend__llds_out__llds_out_file__WhileLabels_3, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                      }
#line 1498 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1494 "llds_out_file.m"
                    }
#line 1459 "llds_out_file.m"
                    break;
#line 1459 "llds_out_file.m"
                  case (MR_Integer) 1:
#line 1511 "llds_out_file.m"
                    {
#line 1511 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__Lval_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1511 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__LvalCodeAddrs_39;
#line 1511 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_135_135;
#line 1511 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__Rval_153 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1511 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__RvalCodeAddrs_154;
#line 1512 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_40_40;
#line 1513 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_41_41;

#line 1512 "llds_out_file.m"
                      {
#line 1512 "llds_out_file.m"
                        ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Lval_38, &ll_backend__llds_out__llds_out_file__LvalCodeAddrs_39, &ll_backend__llds_out__llds_out_file__V_40_40);
                      }
#line 1513 "llds_out_file.m"
                      {
#line 1513 "llds_out_file.m"
                        ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Rval_153, &ll_backend__llds_out__llds_out_file__RvalCodeAddrs_154, &ll_backend__llds_out__llds_out_file__V_41_41);
                      }
#line 1514 "llds_out_file.m"
                      {
#line 1514 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__LvalCodeAddrs_39, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_135_135);
                      }
#line 1515 "llds_out_file.m"
                      {
#line 1515 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__RvalCodeAddrs_154, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_135_135, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                      }
#line 1516 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1511 "llds_out_file.m"
                    }
#line 1459 "llds_out_file.m"
                    break;
#line 1459 "llds_out_file.m"
                  case (MR_Integer) 2:
#line 1511 "llds_out_file.m"
                    {
#line 1511 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__Lval_185 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1511 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__LvalCodeAddrs_186;
#line 1511 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_135_189;
#line 1511 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__Rval_190 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1511 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__RvalCodeAddrs_191;
#line 1512 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_183_183;
#line 1513 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_184_184;

#line 1512 "llds_out_file.m"
                      {
#line 1512 "llds_out_file.m"
                        ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Lval_185, &ll_backend__llds_out__llds_out_file__LvalCodeAddrs_186, &ll_backend__llds_out__llds_out_file__V_183_183);
                      }
#line 1513 "llds_out_file.m"
                      {
#line 1513 "llds_out_file.m"
                        ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Rval_190, &ll_backend__llds_out__llds_out_file__RvalCodeAddrs_191, &ll_backend__llds_out__llds_out_file__V_184_184);
                      }
#line 1514 "llds_out_file.m"
                      {
#line 1514 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__LvalCodeAddrs_186, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_135_189);
                      }
#line 1515 "llds_out_file.m"
                      {
#line 1515 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__RvalCodeAddrs_191, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_135_189, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                      }
#line 1516 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1511 "llds_out_file.m"
                    }
#line 1459 "llds_out_file.m"
                    break;
#line 1459 "llds_out_file.m"
                  case (MR_Integer) 3:
#line 1489 "llds_out_file.m"
                    {
#line 1489 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__Continuation_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1489 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_139_139;
#line 1489 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__Target_152 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1489 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 3)));
#line 1489 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 4)));
#line 1489 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 5)));
#line 1489 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 6)));

#line 1490 "llds_out_file.m"
                      {
#line 1490 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_label_3_p_0(ll_backend__llds_out__llds_out_file__Target_152, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_139_139);
                      }
#line 1491 "llds_out_file.m"
                      {
#line 1491 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_label_3_p_0(ll_backend__llds_out__llds_out_file__Continuation_27, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_139_139, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                      }
#line 1492 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1489 "llds_out_file.m"
                    }
#line 1459 "llds_out_file.m"
                    break;
#line 1459 "llds_out_file.m"
                  case (MR_Integer) 4:
#line 1500 "llds_out_file.m"
                    {
#line 1500 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__MaybeNextCodeAddr_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1500 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));

#line 1504 "llds_out_file.m"
                      if ((ll_backend__llds_out__llds_out_file__MaybeNextCodeAddr_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1505 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4;
#line 1504 "llds_out_file.m"
                      else
#line 1502 "llds_out_file.m"
                        {
#line 1502 "llds_out_file.m"
                          MR_Word ll_backend__llds_out__llds_out_file__NextCodeAddr_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__MaybeNextCodeAddr_36, (MR_Integer) 0)));

#line 1503 "llds_out_file.m"
                          {
#line 1503 "llds_out_file.m"
                            ll_backend__llds_out__llds_out_file__delete_any_label_3_p_0(ll_backend__llds_out__llds_out_file__NextCodeAddr_37, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                          }
#line 1502 "llds_out_file.m"
                        }
#line 1507 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1500 "llds_out_file.m"
                    }
#line 1459 "llds_out_file.m"
                    break;
#line 1459 "llds_out_file.m"
                  case (MR_Integer) 5:
#line 1453 "llds_out_file.m"
                    {
#line 1453 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__Label_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));

#line 1454 "llds_out_file.m"
                      {
#line 1454 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ll_backend__llds_out__llds_out_file__WhileLabels_3, ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_18)));
                      }
#line 1456 "llds_out_file.m"
                      if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1455 "llds_out_file.m"
                        {
#line 1455 "llds_out_file.m"
                          ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1455 "llds_out_file.m"
                          MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_18));
#line 1455 "llds_out_file.m"
                        }
#line 1456 "llds_out_file.m"
                      else
#line 1457 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1453 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4;
#line 1453 "llds_out_file.m"
                    }
#line 1459 "llds_out_file.m"
                    break;
#line 1459 "llds_out_file.m"
                  case (MR_Integer) 6:
#line 1475 "llds_out_file.m"
                    {
#line 1475 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__Target_148 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1478 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__TargetLabel_147;

#line 1476 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Target_148)) == (MR_mktag((MR_Integer) 1)));
#line 1476 "llds_out_file.m"
                      if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1476 "llds_out_file.m"
                        {
#line 1476 "llds_out_file.m"
                          ll_backend__llds_out__llds_out_file__TargetLabel_147 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__Target_148, (MR_Integer) 0)));
#line 1477 "llds_out_file.m"
                          {
#line 1477 "llds_out_file.m"
                            mercury__set_tree234__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__llds_out__llds_out_file__TargetLabel_147)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                          }
#line 1476 "llds_out_file.m"
                        }
#line 1476 "llds_out_file.m"
                      else
#line 1478 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4;
#line 1481 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1475 "llds_out_file.m"
                    }
#line 1459 "llds_out_file.m"
                    break;
#line 1459 "llds_out_file.m"
                  case (MR_Integer) 7:
#line 1483 "llds_out_file.m"
                    {
#line 1483 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__MaybeTargets_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1483 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_141_141;
#line 1483 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__Rval_150 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1483 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__RvalCodeAddrs_151;
#line 1484 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_26_26;

#line 1484 "llds_out_file.m"
                      {
#line 1484 "llds_out_file.m"
                        ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Rval_150, &ll_backend__llds_out__llds_out_file__RvalCodeAddrs_151, &ll_backend__llds_out__llds_out_file__V_26_26);
                      }
#line 1485 "llds_out_file.m"
                      {
#line 1485 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__RvalCodeAddrs_151, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_141_141);
                      }
#line 1486 "llds_out_file.m"
                      {
#line 1486 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_maybe_labels_3_p_0(ll_backend__llds_out__llds_out_file__MaybeTargets_25, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_141_141, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                      }
#line 1487 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1483 "llds_out_file.m"
                    }
#line 1459 "llds_out_file.m"
                    break;
#line 1459 "llds_out_file.m"
                  case (MR_Integer) 8:
#line 1459 "llds_out_file.m"
                  case (MR_Integer) 16:
#line 1459 "llds_out_file.m"
                  case (MR_Integer) 19:
#line 1459 "llds_out_file.m"
                  case (MR_Integer) 24:
#line 1459 "llds_out_file.m"
                  case (MR_Integer) 25:
#line 1459 "llds_out_file.m"
                  case (MR_Integer) 26:
#line 1609 "llds_out_file.m"
                    {
#line 1610 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1609 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4;
#line 1609 "llds_out_file.m"
                    }
#line 1459 "llds_out_file.m"
                    break;
#line 1459 "llds_out_file.m"
                  case (MR_Integer) 9:
#line 1460 "llds_out_file.m"
                    {
#line 1460 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__Rval_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1460 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__Target_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1460 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__RvalCodeAddrs_22;
#line 1460 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_144_144;
#line 1461 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_23_23;
#line 1470 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__TargetLabel_24;

#line 1461 "llds_out_file.m"
                      {
#line 1461 "llds_out_file.m"
                        ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Rval_20, &ll_backend__llds_out__llds_out_file__RvalCodeAddrs_22, &ll_backend__llds_out__llds_out_file__V_23_23);
                      }
#line 1462 "llds_out_file.m"
                      {
#line 1462 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__RvalCodeAddrs_22, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_144_144);
                      }
#line 1463 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Target_21)) == (MR_mktag((MR_Integer) 1)));
#line 1463 "llds_out_file.m"
                      if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1463 "llds_out_file.m"
                        {
#line 1463 "llds_out_file.m"
                          ll_backend__llds_out__llds_out_file__TargetLabel_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__Target_21, (MR_Integer) 0)));
#line 1467 "llds_out_file.m"
                          {
#line 1464 "llds_out_file.m"
                            MR_Word ll_backend__llds_out__llds_out_file__V_174_174;

#line 1464 "llds_out_file.m"
                            ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2)) == (MR_mktag((MR_Integer) 1)));
#line 1464 "llds_out_file.m"
                            if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1464 "llds_out_file.m"
                              {
#line 1464 "llds_out_file.m"
                                ll_backend__llds_out__llds_out_file__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2, (MR_Integer) 0)));
#line 1464 "llds_out_file.m"
                                {
#line 1464 "llds_out_file.m"
                                  ll_backend__llds_out__llds_out_file__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__llds_out__llds_out_file__TargetLabel_24, ll_backend__llds_out__llds_out_file__V_174_174);
                                }
#line 1464 "llds_out_file.m"
                              }
#line 1467 "llds_out_file.m"
                            if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1467 "llds_out_file.m"
                              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_144_144;
#line 1467 "llds_out_file.m"
                            else
#line 1468 "llds_out_file.m"
                              {
#line 1468 "llds_out_file.m"
                                {
#line 1468 "llds_out_file.m"
                                  mercury__set_tree234__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__llds_out__llds_out_file__TargetLabel_24)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_144_144, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                                }
#line 1468 "llds_out_file.m"
                              }
#line 1467 "llds_out_file.m"
                          }
#line 1463 "llds_out_file.m"
                        }
#line 1463 "llds_out_file.m"
                      else
#line 1470 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_144_144;
#line 1473 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1460 "llds_out_file.m"
                    }
#line 1459 "llds_out_file.m"
                    break;
#line 1459 "llds_out_file.m"
                  case (MR_Integer) 10:
#line 1527 "llds_out_file.m"
                    {
#line 1527 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__Lval_226 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1527 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__LvalCodeAddrs_227;
#line 1528 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_224_224;

#line 1528 "llds_out_file.m"
                      {
#line 1528 "llds_out_file.m"
                        ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Lval_226, &ll_backend__llds_out__llds_out_file__LvalCodeAddrs_227, &ll_backend__llds_out__llds_out_file__V_224_224);
                      }
#line 1529 "llds_out_file.m"
                      {
#line 1529 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__LvalCodeAddrs_227, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                      }
#line 1530 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1527 "llds_out_file.m"
                    }
#line 1459 "llds_out_file.m"
                    break;
#line 1459 "llds_out_file.m"
                  case (MR_Integer) 11:
#line 1527 "llds_out_file.m"
                    {
#line 1527 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__Lval_222 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1527 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__LvalCodeAddrs_223;
#line 1528 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_220_220;

#line 1528 "llds_out_file.m"
                      {
#line 1528 "llds_out_file.m"
                        ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Lval_222, &ll_backend__llds_out__llds_out_file__LvalCodeAddrs_223, &ll_backend__llds_out__llds_out_file__V_220_220);
                      }
#line 1529 "llds_out_file.m"
                      {
#line 1529 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__LvalCodeAddrs_223, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                      }
#line 1530 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1527 "llds_out_file.m"
                    }
#line 1459 "llds_out_file.m"
                    break;
#line 1459 "llds_out_file.m"
                  case (MR_Integer) 12:
#line 1543 "llds_out_file.m"
                    {
#line 1543 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__TargetLval_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1543 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__SizeRval_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 4)));
#line 1543 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__MaybeRegionIdRval_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 7)));
#line 1543 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__TargetLvalCodeAddrs_60;
#line 1543 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__SizeRvalCodeAddrs_62;
#line 1543 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_130_130;
#line 1543 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_131_131;
#line 1542 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1542 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 3)));
#line 1542 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 5)));
#line 1542 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 6)));
#line 1542 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 8)));
#line 1544 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_61_61;
#line 1545 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_63_63;

#line 1544 "llds_out_file.m"
                      {
#line 1544 "llds_out_file.m"
                        ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__TargetLval_52, &ll_backend__llds_out__llds_out_file__TargetLvalCodeAddrs_60, &ll_backend__llds_out__llds_out_file__V_61_61);
                      }
#line 1545 "llds_out_file.m"
                      {
#line 1545 "llds_out_file.m"
                        ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__SizeRval_55, &ll_backend__llds_out__llds_out_file__SizeRvalCodeAddrs_62, &ll_backend__llds_out__llds_out_file__V_63_63);
                      }
#line 1546 "llds_out_file.m"
                      {
#line 1546 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__TargetLvalCodeAddrs_60, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_130_130);
                      }
#line 1547 "llds_out_file.m"
                      {
#line 1547 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__SizeRvalCodeAddrs_62, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_130_130, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_131_131);
                      }
#line 1550 "llds_out_file.m"
                      if ((ll_backend__llds_out__llds_out_file__MaybeRegionIdRval_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1549 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_131_131;
#line 1550 "llds_out_file.m"
                      else
#line 1551 "llds_out_file.m"
                        {
#line 1551 "llds_out_file.m"
                          MR_Word ll_backend__llds_out__llds_out_file__RegionIdRval_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__MaybeRegionIdRval_58, (MR_Integer) 0)));
#line 1551 "llds_out_file.m"
                          MR_Word ll_backend__llds_out__llds_out_file__RegionIdRvalCodeAddrs_65;
#line 1552 "llds_out_file.m"
                          MR_Word ll_backend__llds_out__llds_out_file__V_66_66;

#line 1552 "llds_out_file.m"
                          {
#line 1552 "llds_out_file.m"
                            ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__RegionIdRval_64, &ll_backend__llds_out__llds_out_file__RegionIdRvalCodeAddrs_65, &ll_backend__llds_out__llds_out_file__V_66_66);
                          }
#line 1553 "llds_out_file.m"
                          {
#line 1553 "llds_out_file.m"
                            ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__RegionIdRvalCodeAddrs_65, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_131_131, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                          }
#line 1551 "llds_out_file.m"
                        }
#line 1555 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1543 "llds_out_file.m"
                    }
#line 1459 "llds_out_file.m"
                    break;
#line 1459 "llds_out_file.m"
                  case (MR_Integer) 13:
#line 1527 "llds_out_file.m"
                    {
#line 1527 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__Lval_198 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1527 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__LvalCodeAddrs_199;
#line 1528 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_196_196;

#line 1528 "llds_out_file.m"
                      {
#line 1528 "llds_out_file.m"
                        ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Lval_198, &ll_backend__llds_out__llds_out_file__LvalCodeAddrs_199, &ll_backend__llds_out__llds_out_file__V_196_196);
                      }
#line 1529 "llds_out_file.m"
                      {
#line 1529 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__LvalCodeAddrs_199, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                      }
#line 1530 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1527 "llds_out_file.m"
                    }
#line 1459 "llds_out_file.m"
                    break;
#line 1459 "llds_out_file.m"
                  case (MR_Integer) 14:
#line 1537 "llds_out_file.m"
                    {
#line 1537 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__Rval_218 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1537 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__RvalCodeAddrs_219;
#line 1538 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_216_216;

#line 1538 "llds_out_file.m"
                      {
#line 1538 "llds_out_file.m"
                        ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Rval_218, &ll_backend__llds_out__llds_out_file__RvalCodeAddrs_219, &ll_backend__llds_out__llds_out_file__V_216_216);
                      }
#line 1539 "llds_out_file.m"
                      {
#line 1539 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__RvalCodeAddrs_219, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                      }
#line 1540 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1537 "llds_out_file.m"
                    }
#line 1459 "llds_out_file.m"
                    break;
#line 1459 "llds_out_file.m"
                  case (MR_Integer) 15:
#line 1537 "llds_out_file.m"
                    {
#line 1537 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__Rval_157 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1537 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__RvalCodeAddrs_158;
#line 1538 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_51_51;

#line 1538 "llds_out_file.m"
                      {
#line 1538 "llds_out_file.m"
                        ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Rval_157, &ll_backend__llds_out__llds_out_file__RvalCodeAddrs_158, &ll_backend__llds_out__llds_out_file__V_51_51);
                      }
#line 1539 "llds_out_file.m"
                      {
#line 1539 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__RvalCodeAddrs_158, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                      }
#line 1540 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1537 "llds_out_file.m"
                    }
#line 1459 "llds_out_file.m"
                    break;
#line 1459 "llds_out_file.m"
                  case (MR_Integer) 17:
#line 1567 "llds_out_file.m"
                    {
#line 1567 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__NumLval_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 4)));
#line 1567 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__AddrLval_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 5)));
#line 1567 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__NumLvalCodeAddrs_82;
#line 1567 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__AddrLvalCodeAddrs_84;
#line 1567 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_122_122;
#line 1567 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_123_123;
#line 1567 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__RegionIdRval_159 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 3)));
#line 1567 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__RegionIdRvalCodeAddrs_160;
#line 1567 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1567 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1568 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_81_81;
#line 1569 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_83_83;
#line 1570 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_85_85;

#line 1568 "llds_out_file.m"
                      {
#line 1568 "llds_out_file.m"
                        ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__RegionIdRval_159, &ll_backend__llds_out__llds_out_file__RegionIdRvalCodeAddrs_160, &ll_backend__llds_out__llds_out_file__V_81_81);
                      }
#line 1569 "llds_out_file.m"
                      {
#line 1569 "llds_out_file.m"
                        ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__NumLval_79, &ll_backend__llds_out__llds_out_file__NumLvalCodeAddrs_82, &ll_backend__llds_out__llds_out_file__V_83_83);
                      }
#line 1570 "llds_out_file.m"
                      {
#line 1570 "llds_out_file.m"
                        ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__AddrLval_80, &ll_backend__llds_out__llds_out_file__AddrLvalCodeAddrs_84, &ll_backend__llds_out__llds_out_file__V_85_85);
                      }
#line 1571 "llds_out_file.m"
                      {
#line 1571 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__RegionIdRvalCodeAddrs_160, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_122_122);
                      }
#line 1572 "llds_out_file.m"
                      {
#line 1572 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__NumLvalCodeAddrs_82, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_122_122, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_123_123);
                      }
#line 1573 "llds_out_file.m"
                      {
#line 1573 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__AddrLvalCodeAddrs_84, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_123_123, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                      }
#line 1574 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1567 "llds_out_file.m"
                    }
#line 1459 "llds_out_file.m"
                    break;
#line 1459 "llds_out_file.m"
                  case (MR_Integer) 18:
#line 1537 "llds_out_file.m"
                    {
#line 1537 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__Rval_210 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 3)));
#line 1537 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__RvalCodeAddrs_211;
#line 1534 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1534 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1538 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_208_208;

#line 1538 "llds_out_file.m"
                      {
#line 1538 "llds_out_file.m"
                        ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Rval_210, &ll_backend__llds_out__llds_out_file__RvalCodeAddrs_211, &ll_backend__llds_out__llds_out_file__V_208_208);
                      }
#line 1539 "llds_out_file.m"
                      {
#line 1539 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__RvalCodeAddrs_211, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                      }
#line 1540 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1537 "llds_out_file.m"
                    }
#line 1459 "llds_out_file.m"
                    break;
#line 1459 "llds_out_file.m"
                  case (MR_Integer) 20:
#line 1527 "llds_out_file.m"
                    {
#line 1527 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__Lval_230 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1527 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__LvalCodeAddrs_231;
#line 1528 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_228_228;

#line 1528 "llds_out_file.m"
                      {
#line 1528 "llds_out_file.m"
                        ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Lval_230, &ll_backend__llds_out__llds_out_file__LvalCodeAddrs_231, &ll_backend__llds_out__llds_out_file__V_228_228);
                      }
#line 1529 "llds_out_file.m"
                      {
#line 1529 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__LvalCodeAddrs_231, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                      }
#line 1530 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1527 "llds_out_file.m"
                    }
#line 1459 "llds_out_file.m"
                    break;
#line 1459 "llds_out_file.m"
                  case (MR_Integer) 21:
#line 1537 "llds_out_file.m"
                    {
#line 1537 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__Rval_214 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1537 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__RvalCodeAddrs_215;
#line 1535 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1538 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_212_212;

#line 1538 "llds_out_file.m"
                      {
#line 1538 "llds_out_file.m"
                        ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Rval_214, &ll_backend__llds_out__llds_out_file__RvalCodeAddrs_215, &ll_backend__llds_out__llds_out_file__V_212_212);
                      }
#line 1539 "llds_out_file.m"
                      {
#line 1539 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__RvalCodeAddrs_215, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                      }
#line 1540 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1537 "llds_out_file.m"
                    }
#line 1459 "llds_out_file.m"
                    break;
#line 1459 "llds_out_file.m"
                  case (MR_Integer) 22:
#line 1527 "llds_out_file.m"
                    {
#line 1527 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__Lval_202 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1527 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__LvalCodeAddrs_203;
#line 1528 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_200_200;

#line 1528 "llds_out_file.m"
                      {
#line 1528 "llds_out_file.m"
                        ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Lval_202, &ll_backend__llds_out__llds_out_file__LvalCodeAddrs_203, &ll_backend__llds_out__llds_out_file__V_200_200);
                      }
#line 1529 "llds_out_file.m"
                      {
#line 1529 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__LvalCodeAddrs_203, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                      }
#line 1530 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1527 "llds_out_file.m"
                    }
#line 1459 "llds_out_file.m"
                    break;
#line 1459 "llds_out_file.m"
                  case (MR_Integer) 23:
#line 1537 "llds_out_file.m"
                    {
#line 1537 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__Rval_206 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1537 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__RvalCodeAddrs_207;
#line 1538 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_204_204;

#line 1538 "llds_out_file.m"
                      {
#line 1538 "llds_out_file.m"
                        ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Rval_206, &ll_backend__llds_out__llds_out_file__RvalCodeAddrs_207, &ll_backend__llds_out__llds_out_file__V_204_204);
                      }
#line 1539 "llds_out_file.m"
                      {
#line 1539 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__RvalCodeAddrs_207, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                      }
#line 1540 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1537 "llds_out_file.m"
                    }
#line 1459 "llds_out_file.m"
                    break;
#line 1459 "llds_out_file.m"
                  case (MR_Integer) 27:
#line 1559 "llds_out_file.m"
                    {
#line 1559 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__MaybeFixNoLayoutLabel_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 4)));
#line 1559 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__MaybeFixLayoutLabel_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 5)));
#line 1559 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__MaybeFixOnlyLayoutLabel_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 6)));
#line 1559 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__MaybeNoFixLabel_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 7)));
#line 1559 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__MaybeHashDefLabel_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 8)));
#line 1559 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_125_125;
#line 1559 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_126_126;
#line 1559 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_127_127;
#line 1559 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_128_128;
#line 1557 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1557 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1557 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 3)));
#line 1557 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 9)));
#line 1557 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 10)));

#line 1560 "llds_out_file.m"
                      {
#line 1560 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_maybe_label_3_p_0(ll_backend__llds_out__llds_out_file__MaybeFixNoLayoutLabel_70, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_125_125);
                      }
#line 1561 "llds_out_file.m"
                      {
#line 1561 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_maybe_label_3_p_0(ll_backend__llds_out__llds_out_file__MaybeFixLayoutLabel_71, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_125_125, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_126_126);
                      }
#line 1562 "llds_out_file.m"
                      {
#line 1562 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_maybe_label_3_p_0(ll_backend__llds_out__llds_out_file__MaybeFixOnlyLayoutLabel_72, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_126_126, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_127_127);
                      }
#line 1563 "llds_out_file.m"
                      {
#line 1563 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_maybe_label_3_p_0(ll_backend__llds_out__llds_out_file__MaybeNoFixLabel_73, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_127_127, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_128_128);
                      }
#line 1564 "llds_out_file.m"
                      {
#line 1564 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_maybe_label_3_p_0(ll_backend__llds_out__llds_out_file__MaybeHashDefLabel_74, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_128_128, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                      }
#line 1565 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1559 "llds_out_file.m"
                    }
#line 1459 "llds_out_file.m"
                    break;
#line 1459 "llds_out_file.m"
                  case (MR_Integer) 28:
#line 1527 "llds_out_file.m"
                    {
#line 1527 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__Lval_177 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1527 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__LvalCodeAddrs_178;
#line 1523 "llds_out_file.m"
                      MR_Integer ll_backend__llds_out__llds_out_file__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1523 "llds_out_file.m"
                      MR_Integer ll_backend__llds_out__llds_out_file__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 3)));
#line 1528 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_175_175;

#line 1528 "llds_out_file.m"
                      {
#line 1528 "llds_out_file.m"
                        ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Lval_177, &ll_backend__llds_out__llds_out_file__LvalCodeAddrs_178, &ll_backend__llds_out__llds_out_file__V_175_175);
                      }
#line 1529 "llds_out_file.m"
                      {
#line 1529 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__LvalCodeAddrs_178, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                      }
#line 1530 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1527 "llds_out_file.m"
                    }
#line 1459 "llds_out_file.m"
                    break;
#line 1459 "llds_out_file.m"
                  case (MR_Integer) 29:
#line 1527 "llds_out_file.m"
                    {
#line 1527 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__Lval_155 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1527 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__LvalCodeAddrs_156;
#line 1524 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1528 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_47_47;

#line 1528 "llds_out_file.m"
                      {
#line 1528 "llds_out_file.m"
                        ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Lval_155, &ll_backend__llds_out__llds_out_file__LvalCodeAddrs_156, &ll_backend__llds_out__llds_out_file__V_47_47);
                      }
#line 1529 "llds_out_file.m"
                      {
#line 1529 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__LvalCodeAddrs_156, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                      }
#line 1530 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1527 "llds_out_file.m"
                    }
#line 1459 "llds_out_file.m"
                    break;
#line 1459 "llds_out_file.m"
                  case (MR_Integer) 30:
#line 1527 "llds_out_file.m"
                    {
#line 1527 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__Lval_181 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1527 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__LvalCodeAddrs_182;
#line 1525 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1528 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_179_179;

#line 1528 "llds_out_file.m"
                      {
#line 1528 "llds_out_file.m"
                        ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Lval_181, &ll_backend__llds_out__llds_out_file__LvalCodeAddrs_182, &ll_backend__llds_out__llds_out_file__V_179_179);
                      }
#line 1529 "llds_out_file.m"
                      {
#line 1529 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__LvalCodeAddrs_182, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                      }
#line 1530 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1527 "llds_out_file.m"
                    }
#line 1459 "llds_out_file.m"
                    break;
#line 1459 "llds_out_file.m"
                  case (MR_Integer) 31:
#line 1527 "llds_out_file.m"
                    {
#line 1527 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__Lval_194 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1527 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__LvalCodeAddrs_195;
#line 1526 "llds_out_file.m"
                      MR_Integer ll_backend__llds_out__llds_out_file__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1528 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_192_192;

#line 1528 "llds_out_file.m"
                      {
#line 1528 "llds_out_file.m"
                        ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__Lval_194, &ll_backend__llds_out__llds_out_file__LvalCodeAddrs_195, &ll_backend__llds_out__llds_out_file__V_192_192);
                      }
#line 1529 "llds_out_file.m"
                      {
#line 1529 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__LvalCodeAddrs_195, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                      }
#line 1530 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1527 "llds_out_file.m"
                    }
#line 1459 "llds_out_file.m"
                    break;
#line 1459 "llds_out_file.m"
                  case (MR_Integer) 32:
#line 1576 "llds_out_file.m"
                    {
#line 1576 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__LoopControlRval_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1576 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__SlotLval_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1576 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__LoopControlRvalCodeAddrs_88;
#line 1576 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__SlotLvalCodeAddrs_90;
#line 1576 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_119_119;
#line 1576 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_120_120;
#line 1576 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__Label_161 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 3)));
#line 1577 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_89_89;
#line 1578 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_91_91;

#line 1577 "llds_out_file.m"
                      {
#line 1577 "llds_out_file.m"
                        ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__LoopControlRval_86, &ll_backend__llds_out__llds_out_file__LoopControlRvalCodeAddrs_88, &ll_backend__llds_out__llds_out_file__V_89_89);
                      }
#line 1578 "llds_out_file.m"
                      {
#line 1578 "llds_out_file.m"
                        ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__SlotLval_87, &ll_backend__llds_out__llds_out_file__SlotLvalCodeAddrs_90, &ll_backend__llds_out__llds_out_file__V_91_91);
                      }
#line 1579 "llds_out_file.m"
                      {
#line 1579 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__LoopControlRvalCodeAddrs_88, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_119_119);
                      }
#line 1580 "llds_out_file.m"
                      {
#line 1580 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__SlotLvalCodeAddrs_90, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_119_119, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_120_120);
                      }
#line 1581 "llds_out_file.m"
                      {
#line 1581 "llds_out_file.m"
                        mercury__set_tree234__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_161)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_120_120, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                      }
#line 1582 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1576 "llds_out_file.m"
                    }
#line 1459 "llds_out_file.m"
                    break;
#line 1459 "llds_out_file.m"
                  case (MR_Integer) 33:
#line 1584 "llds_out_file.m"
                    {
#line 1584 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__SlotRval_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1584 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__SlotRvalCodeAddrs_94;
#line 1584 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_116_116;
#line 1584 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_117_117;
#line 1584 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__Label_162 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 3)));
#line 1584 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__LoopControlRval_163 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1584 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__LoopControlRvalCodeAddrs_164;
#line 1585 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_93_93;
#line 1586 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_95_95;

#line 1585 "llds_out_file.m"
                      {
#line 1585 "llds_out_file.m"
                        ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__LoopControlRval_163, &ll_backend__llds_out__llds_out_file__LoopControlRvalCodeAddrs_164, &ll_backend__llds_out__llds_out_file__V_93_93);
                      }
#line 1586 "llds_out_file.m"
                      {
#line 1586 "llds_out_file.m"
                        ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__SlotRval_92, &ll_backend__llds_out__llds_out_file__SlotRvalCodeAddrs_94, &ll_backend__llds_out__llds_out_file__V_95_95);
                      }
#line 1587 "llds_out_file.m"
                      {
#line 1587 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__LoopControlRvalCodeAddrs_164, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_116_116);
                      }
#line 1588 "llds_out_file.m"
                      {
#line 1588 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__SlotRvalCodeAddrs_94, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_116_116, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_117_117);
                      }
#line 1589 "llds_out_file.m"
                      {
#line 1589 "llds_out_file.m"
                        mercury__set_tree234__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_162)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_117_117, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                      }
#line 1590 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1584 "llds_out_file.m"
                    }
#line 1459 "llds_out_file.m"
                    break;
#line 1459 "llds_out_file.m"
                  case (MR_Integer) 34:
#line 1592 "llds_out_file.m"
                    {
#line 1592 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_114_114;
#line 1592 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__LoopControlRval_165 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 1)));
#line 1592 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__LoopControlRvalCodeAddrs_166;
#line 1592 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__SlotRval_167 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_16, (MR_Integer) 2)));
#line 1592 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__SlotRvalCodeAddrs_168;
#line 1593 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_96_96;
#line 1594 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_97_97;

#line 1593 "llds_out_file.m"
                      {
#line 1593 "llds_out_file.m"
                        ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__LoopControlRval_165, &ll_backend__llds_out__llds_out_file__LoopControlRvalCodeAddrs_166, &ll_backend__llds_out__llds_out_file__V_96_96);
                      }
#line 1594 "llds_out_file.m"
                      {
#line 1594 "llds_out_file.m"
                        ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__llds_out__llds_out_file__SlotRval_167, &ll_backend__llds_out__llds_out_file__SlotRvalCodeAddrs_168, &ll_backend__llds_out__llds_out_file__V_97_97);
                      }
#line 1595 "llds_out_file.m"
                      {
#line 1595 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__LoopControlRvalCodeAddrs_166, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_114_114);
                      }
#line 1596 "llds_out_file.m"
                      {
#line 1596 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__delete_any_labels_3_p_0(ll_backend__llds_out__llds_out_file__SlotRvalCodeAddrs_168, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_114_114, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145);
                      }
#line 1597 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2;
#line 1592 "llds_out_file.m"
                    }
#line 1459 "llds_out_file.m"
                    break;
#line 1459 "llds_out_file.m"
                }
#line 1459 "llds_out_file.m"
                break;
#line 1459 "llds_out_file.m"
            }
#line 1612 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 1612 "llds_out_file.m"
            {
#line 1612 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__Instrs0_12;
#line 1612 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0__tmp_copy_2 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel_19;
#line 1612 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0__tmp_copy_4 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_145_145;

#line 1612 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0_4 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_UndefWhileLabels_0__tmp_copy_4;
#line 1612 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0_2 = ll_backend__llds_out__llds_out_file__MaybeCurWhileLabel0__tmp_copy_2;
#line 1612 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 1612 "llds_out_file.m"
            }
#line 1612 "llds_out_file.m"
            continue;
#line 1450 "llds_out_file.m"
          }
#line 1448 "llds_out_file.m"
      }
#line 1448 "llds_out_file.m"
      break;
#line 1448 "llds_out_file.m"
    }
#line 1444 "llds_out_file.m"
}

#line 1410 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__count_while_label_in_block_4_p_0(
#line 1410 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Label_1,
#line 1410 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2,
#line 1410 "llds_out_file.m"
  MR_Integer ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_3,
#line 1410 "llds_out_file.m"
  MR_Integer * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_4)
#line 1410 "llds_out_file.m"
{
#line 1413 "llds_out_file.m"
  while (MR_TRUE)
#line 1413 "llds_out_file.m"
    {
#line 1413 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 1413 "llds_out_file.m"
      {
#line 1413 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 1413 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1413 "llds_out_file.m"
          *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_4 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_3;
#line 1413 "llds_out_file.m"
        else
#line 1414 "llds_out_file.m"
          {
#line 1414 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Instr0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 0)));
#line 1414 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Instrs0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 1)));
#line 1414 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Uinstr0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Instr0_10, (MR_Integer) 0)));
#line 1415 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Instr0_10, (MR_Integer) 1)));
#line 1416 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_15_15;

#line 1416 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_13, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1416 "llds_out_file.m"
            if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1416 "llds_out_file.m"
              {
#line 1416 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_13, (MR_Integer) 1)));
#line 1417 "llds_out_file.m"
                {
#line 1417 "llds_out_file.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_out.llds_out_file", (MR_String) "predicate \140ll_backend.llds_out.llds_out_file.count_while_label_in_block\'/4", (MR_String) "label in block");
#line 1417 "llds_out_file.m"
                  return;
                }
#line 1416 "llds_out_file.m"
              }
#line 1416 "llds_out_file.m"
            else
#line 1427 "llds_out_file.m"
              {
#line 1427 "llds_out_file.m"
                MR_Integer ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_26_26;
#line 1419 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__V_25_25;
#line 1419 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__V_35_35;

#line 1419 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_13, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 1419 "llds_out_file.m"
                if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1419 "llds_out_file.m"
                  {
#line 1419 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_13, (MR_Integer) 1)));
#line 1419 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__V_25_25)) == (MR_mktag((MR_Integer) 1)));
#line 1419 "llds_out_file.m"
                    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1419 "llds_out_file.m"
                      {
#line 1419 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__V_25_25, (MR_Integer) 0)));
#line 1419 "llds_out_file.m"
                        {
#line 1419 "llds_out_file.m"
                          ll_backend__llds_out__llds_out_file__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__llds_out__llds_out_file__Label_1, ll_backend__llds_out__llds_out_file__V_35_35);
                        }
#line 1419 "llds_out_file.m"
                      }
#line 1419 "llds_out_file.m"
                  }
#line 1421 "llds_out_file.m"
                if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1420 "llds_out_file.m"
                  {
#line 1420 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_26_26 = (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_3 + (MR_Integer) 1);
#line 1420 "llds_out_file.m"
                  }
#line 1421 "llds_out_file.m"
                else
#line 1423 "llds_out_file.m"
                  {
#line 1421 "llds_out_file.m"
                    MR_Word ll_backend__llds_out__llds_out_file__V_28_28;
#line 1421 "llds_out_file.m"
                    MR_Word ll_backend__llds_out__llds_out_file__V_36_36;
#line 1421 "llds_out_file.m"
                    MR_Word ll_backend__llds_out__llds_out_file__V_16_16;

#line 1421 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_13, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 1421 "llds_out_file.m"
                    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1421 "llds_out_file.m"
                      {
#line 1421 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_13, (MR_Integer) 1)));
#line 1421 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_13, (MR_Integer) 2)));
#line 1421 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 1421 "llds_out_file.m"
                        if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1421 "llds_out_file.m"
                          {
#line 1421 "llds_out_file.m"
                            ll_backend__llds_out__llds_out_file__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__V_28_28, (MR_Integer) 0)));
#line 1421 "llds_out_file.m"
                            {
#line 1421 "llds_out_file.m"
                              ll_backend__llds_out__llds_out_file__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__llds_out__llds_out_file__Label_1, ll_backend__llds_out__llds_out_file__V_36_36);
                            }
#line 1421 "llds_out_file.m"
                          }
#line 1421 "llds_out_file.m"
                      }
#line 1423 "llds_out_file.m"
                    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1422 "llds_out_file.m"
                      {
#line 1422 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_26_26 = (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_3 + (MR_Integer) 1);
#line 1422 "llds_out_file.m"
                      }
#line 1423 "llds_out_file.m"
                    else
#line 1425 "llds_out_file.m"
                      {
#line 1423 "llds_out_file.m"
                        MR_Integer ll_backend__llds_out__llds_out_file__V_17_17;
#line 1423 "llds_out_file.m"
                        MR_Integer ll_backend__llds_out__llds_out_file__V_18_18;
#line 1423 "llds_out_file.m"
                        MR_Word ll_backend__llds_out__llds_out_file__V_19_19;

#line 1423 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_13, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1423 "llds_out_file.m"
                        if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1423 "llds_out_file.m"
                          {
#line 1423 "llds_out_file.m"
                            ll_backend__llds_out__llds_out_file__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_13, (MR_Integer) 1)));
#line 1423 "llds_out_file.m"
                            ll_backend__llds_out__llds_out_file__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_13, (MR_Integer) 2)));
#line 1423 "llds_out_file.m"
                            ll_backend__llds_out__llds_out_file__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_13, (MR_Integer) 3)));
#line 1424 "llds_out_file.m"
                            {
#line 1424 "llds_out_file.m"
                              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_out.llds_out_file", (MR_String) "predicate \140ll_backend.llds_out.llds_out_file.count_while_label_in_block\'/4", (MR_String) "block in block");
#line 1424 "llds_out_file.m"
                              return;
                            }
#line 1423 "llds_out_file.m"
                          }
#line 1423 "llds_out_file.m"
                        else
#line 1426 "llds_out_file.m"
                          {
#line 1426 "llds_out_file.m"
                          }
#line 1425 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_26_26 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_3;
#line 1425 "llds_out_file.m"
                      }
#line 1423 "llds_out_file.m"
                  }
#line 1428 "llds_out_file.m"
                /* direct tailcall eliminated */
#line 1428 "llds_out_file.m"
                {
#line 1428 "llds_out_file.m"
                  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_file__Instrs0_11;
#line 1428 "llds_out_file.m"
                  MR_Integer ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0__tmp_copy_3 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_26_26;

#line 1428 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_3 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0__tmp_copy_3;
#line 1428 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__HeadVar__2_2 = ll_backend__llds_out__llds_out_file__HeadVar__2__tmp_copy_2;
#line 1428 "llds_out_file.m"
                }
#line 1428 "llds_out_file.m"
                continue;
#line 1427 "llds_out_file.m"
              }
#line 1414 "llds_out_file.m"
          }
#line 1413 "llds_out_file.m"
      }
#line 1413 "llds_out_file.m"
      break;
#line 1413 "llds_out_file.m"
    }
#line 1410 "llds_out_file.m"
}

#line 1389 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__is_while_label_5_p_0(
#line 1389 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Label_1,
#line 1389 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2,
#line 1389 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__HeadVar__3_3,
#line 1389 "llds_out_file.m"
  MR_Integer ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_4,
#line 1389 "llds_out_file.m"
  MR_Integer * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_5)
#line 1389 "llds_out_file.m"
{
#line 1392 "llds_out_file.m"
  while (MR_TRUE)
#line 1392 "llds_out_file.m"
    {
#line 1392 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 1392 "llds_out_file.m"
      {
#line 1392 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 1392 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1392 "llds_out_file.m"
          {
#line 1392 "llds_out_file.m"
            *ll_backend__llds_out__llds_out_file__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1392 "llds_out_file.m"
            *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_5 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_4;
#line 1392 "llds_out_file.m"
          }
#line 1392 "llds_out_file.m"
        else
#line 1393 "llds_out_file.m"
          {
#line 1393 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Instr0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 0)));
#line 1393 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Instrs0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 1)));
#line 1393 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Uinstr0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Instr0_11, (MR_Integer) 0)));
#line 1394 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Instr0_11, (MR_Integer) 1)));
#line 1395 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_17_17;

#line 1395 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_15, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1395 "llds_out_file.m"
            if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1395 "llds_out_file.m"
              {
#line 1395 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_15, (MR_Integer) 1)));
#line 1396 "llds_out_file.m"
                *ll_backend__llds_out__llds_out_file__HeadVar__3_3 = ll_backend__llds_out__llds_out_file__HeadVar__2_2;
#line 1396 "llds_out_file.m"
                *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_5 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_4;
#line 1395 "llds_out_file.m"
              }
#line 1395 "llds_out_file.m"
            else
#line 1406 "llds_out_file.m"
              {
#line 1406 "llds_out_file.m"
                MR_Integer ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_25_25;
#line 1398 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__V_24_24;
#line 1398 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__V_32_32;

#line 1398 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_15, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 1398 "llds_out_file.m"
                if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1398 "llds_out_file.m"
                  {
#line 1398 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_15, (MR_Integer) 1)));
#line 1398 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__V_24_24)) == (MR_mktag((MR_Integer) 1)));
#line 1398 "llds_out_file.m"
                    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1398 "llds_out_file.m"
                      {
#line 1398 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__V_24_24, (MR_Integer) 0)));
#line 1398 "llds_out_file.m"
                        {
#line 1398 "llds_out_file.m"
                          ll_backend__llds_out__llds_out_file__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__llds_out__llds_out_file__Label_1, ll_backend__llds_out__llds_out_file__V_32_32);
                        }
#line 1398 "llds_out_file.m"
                      }
#line 1398 "llds_out_file.m"
                  }
#line 1400 "llds_out_file.m"
                if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1399 "llds_out_file.m"
                  {
#line 1399 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_25_25 = (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_4 + (MR_Integer) 1);
#line 1399 "llds_out_file.m"
                  }
#line 1400 "llds_out_file.m"
                else
#line 1402 "llds_out_file.m"
                  {
#line 1400 "llds_out_file.m"
                    MR_Word ll_backend__llds_out__llds_out_file__V_27_27;
#line 1400 "llds_out_file.m"
                    MR_Word ll_backend__llds_out__llds_out_file__V_33_33;
#line 1400 "llds_out_file.m"
                    MR_Word ll_backend__llds_out__llds_out_file__V_18_18;

#line 1400 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_15, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 1400 "llds_out_file.m"
                    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1400 "llds_out_file.m"
                      {
#line 1400 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_15, (MR_Integer) 1)));
#line 1400 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_15, (MR_Integer) 2)));
#line 1400 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__V_27_27)) == (MR_mktag((MR_Integer) 1)));
#line 1400 "llds_out_file.m"
                        if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1400 "llds_out_file.m"
                          {
#line 1400 "llds_out_file.m"
                            ll_backend__llds_out__llds_out_file__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__V_27_27, (MR_Integer) 0)));
#line 1400 "llds_out_file.m"
                            {
#line 1400 "llds_out_file.m"
                              ll_backend__llds_out__llds_out_file__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__llds_out__llds_out_file__Label_1, ll_backend__llds_out__llds_out_file__V_33_33);
                            }
#line 1400 "llds_out_file.m"
                          }
#line 1400 "llds_out_file.m"
                      }
#line 1402 "llds_out_file.m"
                    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1401 "llds_out_file.m"
                      {
#line 1401 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_25_25 = (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_4 + (MR_Integer) 1);
#line 1401 "llds_out_file.m"
                      }
#line 1402 "llds_out_file.m"
                    else
#line 1404 "llds_out_file.m"
                      {
#line 1404 "llds_out_file.m"
                        MR_Word ll_backend__llds_out__llds_out_file__BlockInstrs_21;
#line 1402 "llds_out_file.m"
                        MR_Integer ll_backend__llds_out__llds_out_file__V_19_19;
#line 1402 "llds_out_file.m"
                        MR_Integer ll_backend__llds_out__llds_out_file__V_20_20;

#line 1402 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_15, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1402 "llds_out_file.m"
                        if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1402 "llds_out_file.m"
                          {
#line 1402 "llds_out_file.m"
                            ll_backend__llds_out__llds_out_file__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_15, (MR_Integer) 1)));
#line 1402 "llds_out_file.m"
                            ll_backend__llds_out__llds_out_file__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_15, (MR_Integer) 2)));
#line 1402 "llds_out_file.m"
                            ll_backend__llds_out__llds_out_file__BlockInstrs_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_15, (MR_Integer) 3)));
#line 1403 "llds_out_file.m"
                            {
#line 1403 "llds_out_file.m"
                              ll_backend__llds_out__llds_out_file__count_while_label_in_block_4_p_0(ll_backend__llds_out__llds_out_file__Label_1, ll_backend__llds_out__llds_out_file__BlockInstrs_21, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_25_25);
                            }
#line 1402 "llds_out_file.m"
                          }
#line 1402 "llds_out_file.m"
                        else
#line 1404 "llds_out_file.m"
                          ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_25_25 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_4;
#line 1404 "llds_out_file.m"
                      }
#line 1402 "llds_out_file.m"
                  }
#line 1407 "llds_out_file.m"
                /* direct tailcall eliminated */
#line 1407 "llds_out_file.m"
                {
#line 1407 "llds_out_file.m"
                  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_file__Instrs0_12;
#line 1407 "llds_out_file.m"
                  MR_Integer ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0__tmp_copy_4 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_25_25;

#line 1407 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0_4 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_Count_0__tmp_copy_4;
#line 1407 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__HeadVar__2_2 = ll_backend__llds_out__llds_out_file__HeadVar__2__tmp_copy_2;
#line 1407 "llds_out_file.m"
                }
#line 1407 "llds_out_file.m"
                continue;
#line 1406 "llds_out_file.m"
              }
#line 1393 "llds_out_file.m"
          }
#line 1392 "llds_out_file.m"
      }
#line 1392 "llds_out_file.m"
      break;
#line 1392 "llds_out_file.m"
    }
#line 1389 "llds_out_file.m"
}

#line 1373 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__find_while_labels_3_p_0(
#line 1373 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 1373 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_WhileSet_0_2,
#line 1373 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_WhileSet_3)
#line 1373 "llds_out_file.m"
{
#line 1376 "llds_out_file.m"
  while (MR_TRUE)
#line 1376 "llds_out_file.m"
    {
#line 1376 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 1376 "llds_out_file.m"
      {
#line 1376 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 1376 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1376 "llds_out_file.m"
          *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_WhileSet_3 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_WhileSet_0_2;
#line 1376 "llds_out_file.m"
        else
#line 1377 "llds_out_file.m"
          {
#line 1377 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Uinstr0_7;
#line 1377 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Instrs0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 1377 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 1377 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__V_8_8;
#line 1385 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Label_11;
#line 1385 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Instrs1_12;
#line 1379 "llds_out_file.m"
            MR_Integer ll_backend__llds_out__llds_out_file__UseCount_13;
#line 1379 "llds_out_file.m"
            MR_Integer ll_backend__llds_out__llds_out_file__V_17_17;
#line 1379 "llds_out_file.m"
            MR_Integer ll_backend__llds_out__llds_out_file__V_18_18;

#line 1377 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__Uinstr0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_16_16, (MR_Integer) 0)));
#line 1377 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_16_16, (MR_Integer) 1)));
#line 1379 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_7, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1379 "llds_out_file.m"
            if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1379 "llds_out_file.m"
              {
#line 1379 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__Label_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr0_7, (MR_Integer) 1)));
#line 1380 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__V_17_17 = (MR_Integer) 0;
#line 1380 "llds_out_file.m"
                {
#line 1380 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__is_while_label_5_p_0(ll_backend__llds_out__llds_out_file__Label_11, ll_backend__llds_out__llds_out_file__Instrs0_9, &ll_backend__llds_out__llds_out_file__Instrs1_12, ll_backend__llds_out__llds_out_file__V_17_17, &ll_backend__llds_out__llds_out_file__UseCount_13);
                }
#line 1381 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__V_18_18 = (MR_Integer) 0;
#line 1381 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__succeeded = (ll_backend__llds_out__llds_out_file__UseCount_13 > ll_backend__llds_out__llds_out_file__V_18_18);
#line 1379 "llds_out_file.m"
              }
#line 1385 "llds_out_file.m"
            if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1383 "llds_out_file.m"
              {
#line 1383 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_WhileSet_19_19;

#line 1383 "llds_out_file.m"
                {
#line 1383 "llds_out_file.m"
                  mercury__set_tree234__insert_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_11)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_WhileSet_0_2, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_WhileSet_19_19);
                }
#line 1384 "llds_out_file.m"
                /* direct tailcall eliminated */
#line 1384 "llds_out_file.m"
                {
#line 1384 "llds_out_file.m"
                  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__Instrs1_12;
#line 1384 "llds_out_file.m"
                  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_WhileSet_0__tmp_copy_2 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_WhileSet_19_19;

#line 1384 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__STATE_VARIABLE_WhileSet_0_2 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_WhileSet_0__tmp_copy_2;
#line 1384 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 1384 "llds_out_file.m"
                }
#line 1384 "llds_out_file.m"
                continue;
#line 1383 "llds_out_file.m"
              }
#line 1385 "llds_out_file.m"
            else
#line 1386 "llds_out_file.m"
              {
#line 1386 "llds_out_file.m"
                /* direct tailcall eliminated */
#line 1386 "llds_out_file.m"
                {
#line 1386 "llds_out_file.m"
                  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__Instrs0_9;

#line 1386 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 1386 "llds_out_file.m"
                }
#line 1386 "llds_out_file.m"
                continue;
#line 1386 "llds_out_file.m"
              }
#line 1377 "llds_out_file.m"
          }
#line 1376 "llds_out_file.m"
      }
#line 1376 "llds_out_file.m"
      break;
#line 1376 "llds_out_file.m"
    }
#line 1373 "llds_out_file.m"
}

#line 1323 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__find_cont_labels_3_p_0(
#line 1323 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 1323 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_0_2,
#line 1323 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_3)
#line 1323 "llds_out_file.m"
{
#line 1326 "llds_out_file.m"
  while (MR_TRUE)
#line 1326 "llds_out_file.m"
    {
#line 1326 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 1326 "llds_out_file.m"
      {
#line 1326 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 1326 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1326 "llds_out_file.m"
          *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_3 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_0_2;
#line 1326 "llds_out_file.m"
        else
#line 1327 "llds_out_file.m"
          {
#line 1327 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Instr_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 1327 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Instrs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 1327 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Uinstr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Instr_7, (MR_Integer) 0)));
#line 1327 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_35_35;
#line 1328 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Instr_7, (MR_Integer) 1)));
#line 1342 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__ContLabel_13;

#line 1332 "llds_out_file.m"
#line 1332 "llds_out_file.m"
            switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr_10)) {
#line 1332 "llds_out_file.m"
              default:
#line 1332 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__succeeded = MR_FALSE;
#line 1332 "llds_out_file.m"
                break;
#line 1332 "llds_out_file.m"
              case (MR_Integer) 3:
#line 1332 "llds_out_file.m"
#line 1332 "llds_out_file.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 0)))) {
#line 1332 "llds_out_file.m"
                  default:
#line 1332 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__succeeded = MR_FALSE;
#line 1332 "llds_out_file.m"
                    break;
#line 1332 "llds_out_file.m"
                  case (MR_Integer) 1:
#line 1337 "llds_out_file.m"
                    {
#line 1337 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__Const_21;
#line 1337 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 1)));
#line 1337 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 2)));
#line 1337 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_31_31;
#line 1337 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_20_20;

#line 1337 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__V_29_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__V_29_29, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 1337 "llds_out_file.m"
                      if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1337 "llds_out_file.m"
                        {
#line 1337 "llds_out_file.m"
                          ll_backend__llds_out__llds_out_file__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__V_29_29, (MR_Integer) 1)));
#line 1337 "llds_out_file.m"
                          ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__V_30_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__V_30_30, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1337 "llds_out_file.m"
                          if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1337 "llds_out_file.m"
                            {
#line 1337 "llds_out_file.m"
                              ll_backend__llds_out__llds_out_file__Const_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__V_30_30, (MR_Integer) 1)));
#line 1338 "llds_out_file.m"
                              ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Const_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Const_21, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1338 "llds_out_file.m"
                              if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1338 "llds_out_file.m"
                                {
#line 1338 "llds_out_file.m"
                                  ll_backend__llds_out__llds_out_file__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Const_21, (MR_Integer) 1)));
#line 1338 "llds_out_file.m"
                                  ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__V_31_31)) == (MR_mktag((MR_Integer) 1)));
#line 1338 "llds_out_file.m"
                                  if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1338 "llds_out_file.m"
                                    ll_backend__llds_out__llds_out_file__ContLabel_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__V_31_31, (MR_Integer) 0)));
#line 1338 "llds_out_file.m"
                                }
#line 1337 "llds_out_file.m"
                            }
#line 1337 "llds_out_file.m"
                        }
#line 1337 "llds_out_file.m"
                    }
#line 1332 "llds_out_file.m"
                    break;
#line 1332 "llds_out_file.m"
                  case (MR_Integer) 3:
#line 1331 "llds_out_file.m"
                    {
#line 1331 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 2)));
#line 1331 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 1)));
#line 1331 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 3)));
#line 1331 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 4)));
#line 1331 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 5)));
#line 1331 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 6)));

#line 1331 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 1331 "llds_out_file.m"
                      if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1331 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__ContLabel_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__V_34_34, (MR_Integer) 0)));
#line 1331 "llds_out_file.m"
                    }
#line 1332 "llds_out_file.m"
                    break;
#line 1332 "llds_out_file.m"
                  case (MR_Integer) 4:
#line 1333 "llds_out_file.m"
                    {
#line 1333 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 2)));
#line 1333 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_33_33;
#line 1333 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 1)));

#line 1333 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__V_32_32)) == (MR_mktag((MR_Integer) 1)));
#line 1333 "llds_out_file.m"
                      if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1333 "llds_out_file.m"
                        {
#line 1333 "llds_out_file.m"
                          ll_backend__llds_out__llds_out_file__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__V_32_32, (MR_Integer) 0)));
#line 1333 "llds_out_file.m"
                          ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__V_33_33)) == (MR_mktag((MR_Integer) 1)));
#line 1333 "llds_out_file.m"
                          if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1333 "llds_out_file.m"
                            ll_backend__llds_out__llds_out_file__ContLabel_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__V_33_33, (MR_Integer) 0)));
#line 1333 "llds_out_file.m"
                        }
#line 1333 "llds_out_file.m"
                    }
#line 1332 "llds_out_file.m"
                    break;
#line 1332 "llds_out_file.m"
                  case (MR_Integer) 30:
#line 1335 "llds_out_file.m"
                    {
#line 1335 "llds_out_file.m"
                      MR_Word ll_backend__llds_out__llds_out_file__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 1)));

#line 1335 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__ContLabel_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 2)));
#line 1335 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__succeeded = MR_TRUE;
#line 1335 "llds_out_file.m"
                    }
#line 1332 "llds_out_file.m"
                    break;
#line 1332 "llds_out_file.m"
                }
#line 1332 "llds_out_file.m"
                break;
#line 1332 "llds_out_file.m"
            }
#line 1342 "llds_out_file.m"
            if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1341 "llds_out_file.m"
              {
#line 1341 "llds_out_file.m"
                {
#line 1341 "llds_out_file.m"
                  mercury__set_tree234__insert_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__llds_out__llds_out_file__ContLabel_13)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_0_2, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_35_35);
                }
#line 1341 "llds_out_file.m"
              }
#line 1342 "llds_out_file.m"
            else
#line 1346 "llds_out_file.m"
              {
#line 1346 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__Label1_23;
#line 1343 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__V_22_22;

#line 1343 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 0)))) == (MR_Integer) 29)));
#line 1343 "llds_out_file.m"
                if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1343 "llds_out_file.m"
                  {
#line 1343 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 1)));
#line 1343 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__Label1_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 2)));
#line 1345 "llds_out_file.m"
                    {
#line 1345 "llds_out_file.m"
                      mercury__set_tree234__insert_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__llds_out__llds_out_file__Label1_23)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_0_2, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_35_35);
                    }
#line 1343 "llds_out_file.m"
                  }
#line 1343 "llds_out_file.m"
                else
#line 1350 "llds_out_file.m"
                  {
#line 1350 "llds_out_file.m"
                    MR_Word ll_backend__llds_out__llds_out_file__Block_26;
#line 1347 "llds_out_file.m"
                    MR_Integer ll_backend__llds_out__llds_out_file__V_24_24;
#line 1347 "llds_out_file.m"
                    MR_Integer ll_backend__llds_out__llds_out_file__V_25_25;

#line 1347 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1347 "llds_out_file.m"
                    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1347 "llds_out_file.m"
                      {
#line 1347 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 1)));
#line 1347 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 2)));
#line 1347 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__Block_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_10, (MR_Integer) 3)));
#line 1349 "llds_out_file.m"
                        {
#line 1349 "llds_out_file.m"
                          ll_backend__llds_out__llds_out_file__find_cont_labels_3_p_0(ll_backend__llds_out__llds_out_file__Block_26, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_0_2, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_35_35);
                        }
#line 1347 "llds_out_file.m"
                      }
#line 1347 "llds_out_file.m"
                    else
#line 1350 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_35_35 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_0_2;
#line 1350 "llds_out_file.m"
                  }
#line 1346 "llds_out_file.m"
              }
#line 1353 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 1353 "llds_out_file.m"
            {
#line 1353 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__Instrs_8;
#line 1353 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_0__tmp_copy_2 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_35_35;

#line 1353 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_0_2 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_ContLabels_0__tmp_copy_2;
#line 1353 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 1353 "llds_out_file.m"
            }
#line 1353 "llds_out_file.m"
            continue;
#line 1327 "llds_out_file.m"
          }
#line 1326 "llds_out_file.m"
      }
#line 1326 "llds_out_file.m"
      break;
#line 1326 "llds_out_file.m"
    }
#line 1323 "llds_out_file.m"
}

#line 1303 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__find_caller_label_2_p_0(
#line 1303 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 1303 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__CallerLabel_2)
#line 1303 "llds_out_file.m"
{
#line 1305 "llds_out_file.m"
  while (MR_TRUE)
#line 1305 "llds_out_file.m"
    {
#line 1305 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 1305 "llds_out_file.m"
      {
#line 1305 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 1305 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1305 "llds_out_file.m"
          {
#line 1306 "llds_out_file.m"
            {
#line 1306 "llds_out_file.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_out.llds_out_file", (MR_String) "predicate \140ll_backend.llds_out.llds_out_file.find_caller_label\'/2", (MR_String) "cannot find caller label");
#line 1306 "llds_out_file.m"
              return;
            }
#line 1305 "llds_out_file.m"
          }
#line 1305 "llds_out_file.m"
        else
#line 1307 "llds_out_file.m"
          {
#line 1307 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Uinstr_7;
#line 1307 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Instrs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 1307 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 1307 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__V_8_8;
#line 1316 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Label_11;

#line 1307 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__Uinstr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_16_16, (MR_Integer) 0)));
#line 1307 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_16_16, (MR_Integer) 1)));
#line 1308 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Uinstr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_7, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1308 "llds_out_file.m"
            if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1308 "llds_out_file.m"
              {
#line 1308 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__Label_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__Uinstr_7, (MR_Integer) 1)));
#line 1312 "llds_out_file.m"
                if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Label_11)) == (MR_mktag((MR_Integer) 1))))
#line 1314 "llds_out_file.m"
                  *ll_backend__llds_out__llds_out_file__CallerLabel_2 = ll_backend__llds_out__llds_out_file__Label_11;
#line 1312 "llds_out_file.m"
                else
#line 1310 "llds_out_file.m"
                  {
#line 1311 "llds_out_file.m"
                    {
#line 1311 "llds_out_file.m"
                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_out.llds_out_file", (MR_String) "predicate \140ll_backend.llds_out.llds_out_file.find_caller_label\'/2", (MR_String) "caller label is internal label");
#line 1311 "llds_out_file.m"
                      return;
                    }
#line 1310 "llds_out_file.m"
                  }
#line 1308 "llds_out_file.m"
              }
#line 1308 "llds_out_file.m"
            else
#line 1317 "llds_out_file.m"
              {
#line 1317 "llds_out_file.m"
                /* direct tailcall eliminated */
#line 1317 "llds_out_file.m"
                {
#line 1317 "llds_out_file.m"
                  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__Instrs_9;

#line 1317 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 1317 "llds_out_file.m"
                }
#line 1317 "llds_out_file.m"
                continue;
#line 1317 "llds_out_file.m"
              }
#line 1307 "llds_out_file.m"
          }
#line 1305 "llds_out_file.m"
      }
#line 1305 "llds_out_file.m"
      break;
#line 1305 "llds_out_file.m"
    }
#line 1303 "llds_out_file.m"
}

#line 1250 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_annotated_c_procedure_4_p_0(
#line 1250 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_5,
#line 1250 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__AnnotatedProc_6)
#line 1250 "llds_out_file.m"
{
#line 1253 "llds_out_file.m"
  {
#line 1253 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 1253 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__Proc_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__AnnotatedProc_6, (MR_Integer) 0)));
#line 1253 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__LabelOutputInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__AnnotatedProc_6, (MR_Integer) 1)));
#line 1253 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__Name_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_8, (MR_Integer) 0)));
#line 1253 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__Arity_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_8, (MR_Integer) 1)));
#line 1253 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__Instrs_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_8, (MR_Integer) 5)));
#line 1253 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__PredProcId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_8, (MR_Integer) 2)));
#line 1253 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__ProcId_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__PredProcId_13, (MR_Integer) 1)));
#line 1253 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__ModeNum_16;
#line 1253 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__LocalThreadEngineBase_17;
#line 1257 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_8, (MR_Integer) 3)));
#line 1257 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_8, (MR_Integer) 4)));
#line 1257 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_8, (MR_Integer) 6)));
#line 1257 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_8, (MR_Integer) 7)));
#line 1257 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_8, (MR_Integer) 8)));
#line 1261 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__PredProcId_13, (MR_Integer) 0)));
#line 1276 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_91_91;
#line 1276 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_92_92;
#line 1276 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_93_93;
#line 1276 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_94_94;
#line 1276 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_95_95;
#line 1276 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_96_96;
#line 1276 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_97_97;
#line 1276 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_98_98;
#line 1276 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_99_99;
#line 1276 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_100_100;
#line 1276 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_101_101;
#line 1276 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_102_102;
#line 1276 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_103_103;
#line 1276 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_104_104;
#line 1276 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_105_105;
#line 1276 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_106_106;
#line 1276 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_107_107;
#line 1276 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_108_108;
#line 1276 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_109_109;
#line 1276 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_110_110;
#line 1276 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_111_111;

#line 1262 "llds_out_file.m"
    {
#line 1262 "llds_out_file.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(ll_backend__llds_out__llds_out_file__ProcId_15, &ll_backend__llds_out__llds_out_file__ModeNum_16);
    }
#line 1264 "llds_out_file.m"
    {
#line 1264 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\n/*-------------------------------------");
    }
#line 1265 "llds_out_file.m"
    {
#line 1265 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "------------------------------------*/\n");
    }
#line 1266 "llds_out_file.m"
    {
#line 1266 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "/* code for \'");
    }
#line 1269 "llds_out_file.m"
    {
#line 1269 "llds_out_file.m"
      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__Name_10);
    }
#line 1270 "llds_out_file.m"
    {
#line 1270 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\'/");
    }
#line 1271 "llds_out_file.m"
    {
#line 1271 "llds_out_file.m"
      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_file__Arity_11);
    }
#line 1272 "llds_out_file.m"
    {
#line 1272 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) " mode ");
    }
#line 1273 "llds_out_file.m"
    {
#line 1273 "llds_out_file.m"
      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_file__ModeNum_16);
    }
#line 1274 "llds_out_file.m"
    {
#line 1274 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) " */\n");
    }
#line 1276 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 0)));
#line 1276 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_92_92 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 1)));
#line 1276 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_93_93 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 2)));
#line 1276 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 3)));
#line 1276 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 4)));
#line 1276 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 5)));
#line 1276 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)));
#line 1276 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_98_98 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 1276 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_99_99 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1276 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_100_100 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1276 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_101_101 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1276 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__LocalThreadEngineBase_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1276 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_102_102 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1276 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_103_103 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1276 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_104_104 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1276 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_105_105 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 1276 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_106_106 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 1276 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_107_107 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 1276 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_108_108 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 1276 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_109_109 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 1276 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_110_110 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 1276 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 8)));
#line 5770 "ll_backend.llds_out.llds_out_file.c"
#line 5771 "ll_backend.llds_out.llds_out_file.c"
    switch (ll_backend__llds_out__llds_out_file__LocalThreadEngineBase_17) {
#line 5773 "ll_backend.llds_out.llds_out_file.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 5775 "ll_backend.llds_out.llds_out_file.c"
      case (MR_Integer) 0:
#line 1287 "llds_out_file.m"
        {
#line 1287 "llds_out_file.m"
          ll_backend__llds_out__llds_out_instr__output_instruction_list_6_p_0(ll_backend__llds_out__llds_out_file__Info_5, ll_backend__llds_out__llds_out_file__Instrs_12, ll_backend__llds_out__llds_out_file__LabelOutputInfo_9, (MR_Integer) 0);
#line 1287 "llds_out_file.m"
          return;
        }
#line 5784 "ll_backend.llds_out.llds_out_file.c"
        break;
#line 5786 "ll_backend.llds_out.llds_out_file.c"
      case (MR_Integer) 1:
#line 5788 "ll_backend.llds_out.llds_out_file.c"
        {
#line 1279 "llds_out_file.m"
          {
#line 1279 "llds_out_file.m"
            mercury__io__write_string_3_p_0((MR_String) "#ifdef MR_maybe_local_thread_engine_base\n");
          }
#line 1280 "llds_out_file.m"
          {
#line 1280 "llds_out_file.m"
            mercury__io__write_string_3_p_0((MR_String) "\t#undef MR_maybe_local_thread_engine_base\n");
          }
#line 1281 "llds_out_file.m"
          {
#line 1281 "llds_out_file.m"
            mercury__io__write_string_3_p_0((MR_String) "\t#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base\n");
          }
#line 1283 "llds_out_file.m"
          {
#line 1283 "llds_out_file.m"
            mercury__io__write_string_3_p_0((MR_String) "#endif\n");
          }
#line 1287 "llds_out_file.m"
          {
#line 1287 "llds_out_file.m"
            ll_backend__llds_out__llds_out_instr__output_instruction_list_6_p_0(ll_backend__llds_out__llds_out_file__Info_5, ll_backend__llds_out__llds_out_file__Instrs_12, ll_backend__llds_out__llds_out_file__LabelOutputInfo_9, (MR_Integer) 0);
          }
#line 1291 "llds_out_file.m"
          {
#line 1291 "llds_out_file.m"
            mercury__io__write_string_3_p_0((MR_String) "#ifdef MR_maybe_local_thread_engine_base\n");
          }
#line 1292 "llds_out_file.m"
          {
#line 1292 "llds_out_file.m"
            mercury__io__write_string_3_p_0((MR_String) "\t#undef MR_maybe_local_thread_engine_base\n");
          }
#line 1293 "llds_out_file.m"
          {
#line 1293 "llds_out_file.m"
            mercury__io__write_string_3_p_0((MR_String) "\t#define MR_maybe_local_thread_engine_base MR_thread_engine_base\n");
          }
#line 1295 "llds_out_file.m"
          {
#line 1295 "llds_out_file.m"
            mercury__io__write_string_3_p_0((MR_String) "#endif\n");
#line 1295 "llds_out_file.m"
            return;
          }
#line 5837 "ll_backend.llds_out.llds_out_file.c"
        }
#line 5839 "ll_backend.llds_out.llds_out_file.c"
        break;
#line 5841 "ll_backend.llds_out.llds_out_file.c"
    }
#line 1253 "llds_out_file.m"
  }
#line 1250 "llds_out_file.m"
}

#line 1236 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_global_var_decl_5_p_0(
#line 1236 "llds_out_file.m"
  MR_String ll_backend__llds_out__llds_out_file__VarName_6,
#line 1236 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_10,
#line 1236 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_11)
#line 1236 "llds_out_file.m"
{
#line 1239 "llds_out_file.m"
  {
#line 1239 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 1239 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__GlobalVar_9 = (MR_Word) ll_backend__llds_out__llds_out_file__VarName_6;
#line 1241 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_14_14;

#line 1241 "llds_out_file.m"
    {
#line 1241 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_14_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1241 "llds_out_file.m"
      MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__V_14_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1241 "llds_out_file.m"
      MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__V_14_14, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__GlobalVar_9));
#line 1241 "llds_out_file.m"
    }
#line 1241 "llds_out_file.m"
    {
#line 1241 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(ll_backend__llds_out__llds_out_file__V_14_14, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_10);
    }
#line 1243 "llds_out_file.m"
    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1242 "llds_out_file.m"
      *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_11 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_10;
#line 1243 "llds_out_file.m"
    else
#line 1244 "llds_out_file.m"
      {
#line 1244 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_15_15;
#line 1244 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__V_19_19;

#line 1244 "llds_out_file.m"
        {
#line 1244 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__V_15_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1244 "llds_out_file.m"
          MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__V_15_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1244 "llds_out_file.m"
          MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__V_15_15, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__GlobalVar_9));
#line 1244 "llds_out_file.m"
        }
#line 1244 "llds_out_file.m"
        {
#line 1244 "llds_out_file.m"
          ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__llds_out__llds_out_file__V_15_15, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_10, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_11);
        }
#line 1245 "llds_out_file.m"
        {
#line 1245 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "extern MR_Word ");
        }
#line 1246 "llds_out_file.m"
        {
#line 1246 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__V_19_19 = ll_backend__llds_out__llds_out_data__c_global_var_name_1_f_0(ll_backend__llds_out__llds_out_file__GlobalVar_9);
        }
#line 1246 "llds_out_file.m"
        {
#line 1246 "llds_out_file.m"
          mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__V_19_19);
        }
#line 1247 "llds_out_file.m"
        {
#line 1247 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) ";\n");
#line 1247 "llds_out_file.m"
          return;
        }
#line 1244 "llds_out_file.m"
      }
#line 1239 "llds_out_file.m"
  }
#line 1236 "llds_out_file.m"
}

#line 1234 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_c_procedure_decls_6_p_0_2(
#line 1234 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1234 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1234 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1234 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 1234 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 1234 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5)
#line 1234 "llds_out_file.m"
{
#line 1234 "llds_out_file.m"
  {
#line 1234 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 1234 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv3_HeadVar__4_4;

#line 1234 "llds_out_file.m"
    {
#line 1234 "llds_out_file.m"
      ll_backend__llds_out__llds_out_instr__output_record_instruction_decls_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv3_HeadVar__4_4);
    }
#line 1234 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv3_HeadVar__4_4));
#line 1234 "llds_out_file.m"
  }
#line 1234 "llds_out_file.m"
}

#line 1233 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_c_procedure_decls_6_p_0_1(
#line 1233 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1233 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1233 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1233 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 1233 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 1233 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5)
#line 1233 "llds_out_file.m"
{
#line 1233 "llds_out_file.m"
  {
#line 1233 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 1233 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_DeclSet_11;

#line 1233 "llds_out_file.m"
    {
#line 1233 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_c_global_var_decl_5_p_0(((MR_String) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_DeclSet_11);
    }
#line 1233 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_DeclSet_11));
#line 1233 "llds_out_file.m"
  }
#line 1233 "llds_out_file.m"
}

#line 1224 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_c_procedure_decls_6_p_0(
#line 1224 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_7,
#line 1224 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__AnnotatedProc_8,
#line 1224 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_15,
#line 1224 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_16)
#line 1224 "llds_out_file.m"
{
#line 1228 "llds_out_file.m"
  {
#line 1228 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 1228 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_42_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1228 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeInfo_48_48;
#line 1228 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_49_49;
#line 1228 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__Proc_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__AnnotatedProc_8, (MR_Integer) 0)));
#line 1228 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__Instrs_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 5)));
#line 1228 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__CGlobalVarSet_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 8)));
#line 1228 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__CGlobalVars_14;
#line 1228 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_20_20;
#line 1228 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_22_22;
#line 1229 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__AnnotatedProc_8, (MR_Integer) 1)));
#line 1230 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 0)));
#line 1230 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 1)));
#line 1230 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 2)));
#line 1230 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 3)));
#line 1230 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 4)));
#line 1230 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 6)));
#line 1230 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 7)));
#line 1233 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_DeclSet_20_20;
#line 1233 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_IO_21_21;
#line 1234 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv5_STATE_VARIABLE_DeclSet_16;
#line 1234 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv4_STATE_VARIABLE_IO_18;

#line 1232 "llds_out_file.m"
    {
#line 1232 "llds_out_file.m"
      mercury__set__to_sorted_list_2_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_42_42, ll_backend__llds_out__llds_out_file__CGlobalVarSet_13, &ll_backend__llds_out__llds_out_file__CGlobalVars_14);
    }
#line 6077 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeInfo_48_48 = (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_1[0];
#line 6079 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_49_49 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 1233 "llds_out_file.m"
    {
#line 1233 "llds_out_file.m"
      mercury__list__foldl2_6_p_2(ll_backend__llds_out__llds_out_file__TypeCtorInfo_42_42, ll_backend__llds_out__llds_out_file__TypeInfo_48_48, ll_backend__llds_out__llds_out_file__TypeCtorInfo_49_49, (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_2[11], ll_backend__llds_out__llds_out_file__CGlobalVars_14, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_15)), &ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_DeclSet_20_20, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_IO_21_21);
    }
#line 1233 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_20_20 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_DeclSet_20_20);
#line 1234 "llds_out_file.m"
    {
#line 1234 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1234 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_22_22, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_6[13]));
#line 1234 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_22_22, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_record_c_procedure_decls_6_p_0_2));
#line 1234 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1234 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_22_22, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_7));
#line 1234 "llds_out_file.m"
    }
#line 1234 "llds_out_file.m"
    {
#line 1234 "llds_out_file.m"
      mercury__list__foldl2_6_p_2((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__llds_out__llds_out_file__TypeInfo_48_48, ll_backend__llds_out__llds_out_file__TypeCtorInfo_49_49, ll_backend__llds_out__llds_out_file__V_22_22, ll_backend__llds_out__llds_out_file__Instrs_12, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_20_20)), &ll_backend__llds_out__llds_out_file__conv5_STATE_VARIABLE_DeclSet_16, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv4_STATE_VARIABLE_IO_18);
    }
#line 1234 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_16 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv5_STATE_VARIABLE_DeclSet_16);
#line 1228 "llds_out_file.m"
  }
#line 1224 "llds_out_file.m"
}

#line 1189 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_entry_label_init_4_p_0(
#line 1189 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__EntryLabelToLayoutMap_5,
#line 1189 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Label_6)
#line 1189 "llds_out_file.m"
{
#line 1192 "llds_out_file.m"
  {
#line 1192 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 1192 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__SuffixOpen_9;
#line 1192 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ProcLabel_10;
#line 1192 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__TabInitMacro_11;
#line 1193 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file___LayoutId_8;
#line 1193 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv0__LayoutId_8;

#line 1193 "llds_out_file.m"
    {
#line 1193 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0, ll_backend__llds_out__llds_out_file__EntryLabelToLayoutMap_5, ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_6)), &ll_backend__llds_out__llds_out_file__conv0__LayoutId_8);
    }
#line 1193 "llds_out_file.m"
    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1193 "llds_out_file.m"
      {
#line 1193 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file___LayoutId_8 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv0__LayoutId_8);
#line 1193 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__succeeded = MR_TRUE;
#line 1193 "llds_out_file.m"
      }
#line 1195 "llds_out_file.m"
    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1194 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__SuffixOpen_9 = (MR_String) "_sl(";
#line 1195 "llds_out_file.m"
    else
#line 1196 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__SuffixOpen_9 = (MR_String) "(";
#line 1202 "llds_out_file.m"
    if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Label_6)) == (MR_mktag((MR_Integer) 1))))
#line 1202 "llds_out_file.m"
      {
#line 1202 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__Label_6, (MR_Integer) 1)));
#line 1202 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__Label_6, (MR_Integer) 0)));

#line 1202 "llds_out_file.m"
#line 1202 "llds_out_file.m"
        switch (ll_backend__llds_out__llds_out_file__V_35_35) {
#line 1202 "llds_out_file.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1202 "llds_out_file.m"
          case (MR_Integer) 0:
#line 1206 "llds_out_file.m"
            {
#line 1206 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__ProcLabel_10 = ll_backend__llds_out__llds_out_file__V_34_34;
#line 1207 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__TabInitMacro_11 = (MR_String) "\tMR_init_local1";
#line 1206 "llds_out_file.m"
            }
#line 1202 "llds_out_file.m"
            break;
#line 1202 "llds_out_file.m"
          case (MR_Integer) 2:
#line 1200 "llds_out_file.m"
            {
#line 1200 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__ProcLabel_10 = ll_backend__llds_out__llds_out_file__V_34_34;
#line 1201 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__TabInitMacro_11 = (MR_String) "\tMR_init_entry1";
#line 1200 "llds_out_file.m"
            }
#line 1202 "llds_out_file.m"
            break;
#line 1202 "llds_out_file.m"
          case (MR_Integer) 1:
#line 1203 "llds_out_file.m"
            {
#line 1203 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__ProcLabel_10 = ll_backend__llds_out__llds_out_file__V_34_34;
#line 1204 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__TabInitMacro_11 = (MR_String) "\tMR_init_entry1";
#line 1203 "llds_out_file.m"
            }
#line 1202 "llds_out_file.m"
            break;
#line 1202 "llds_out_file.m"
        }
#line 1202 "llds_out_file.m"
      }
#line 1202 "llds_out_file.m"
    else
#line 1209 "llds_out_file.m"
      {
#line 1211 "llds_out_file.m"
        {
#line 1211 "llds_out_file.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_out.llds_out_file", (MR_String) "predicate \140ll_backend.llds_out.llds_out_file.output_c_entry_label_init\'/4", (MR_String) "internal label");
#line 1211 "llds_out_file.m"
          return;
        }
#line 1209 "llds_out_file.m"
      }
#line 1213 "llds_out_file.m"
    {
#line 1213 "llds_out_file.m"
      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__TabInitMacro_11);
    }
#line 1214 "llds_out_file.m"
    {
#line 1214 "llds_out_file.m"
      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__SuffixOpen_9);
    }
#line 1215 "llds_out_file.m"
    {
#line 1215 "llds_out_file.m"
      backend_libs__name_mangle__output_proc_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_file__ProcLabel_10);
    }
#line 1216 "llds_out_file.m"
    {
#line 1216 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) ");\n");
    }
#line 1218 "llds_out_file.m"
    {
#line 1218 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\tMR_INIT_PROC_LAYOUT_ADDR(");
    }
#line 1219 "llds_out_file.m"
    {
#line 1219 "llds_out_file.m"
      ll_backend__llds_out__llds_out_code_addr__output_label_3_p_0(ll_backend__llds_out__llds_out_file__Label_6);
    }
#line 1220 "llds_out_file.m"
    {
#line 1220 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) ");\n");
#line 1220 "llds_out_file.m"
      return;
    }
#line 1192 "llds_out_file.m"
  }
#line 1189 "llds_out_file.m"
}

#line 1182 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__write_int_pair_3_p_0(
#line 1182 "llds_out_file.m"
  MR_Tuple ll_backend__llds_out__llds_out_file__HeadVar__1_1)
#line 1182 "llds_out_file.m"
{
#line 1184 "llds_out_file.m"
  {
#line 1184 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 1184 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__LabelNum_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 1184 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__SlotNum_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));

#line 1185 "llds_out_file.m"
    {
#line 1185 "llds_out_file.m"
      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_file__LabelNum_4);
    }
#line 1186 "llds_out_file.m"
    {
#line 1186 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) ",");
    }
#line 1187 "llds_out_file.m"
    {
#line 1187 "llds_out_file.m"
      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_file__SlotNum_5);
#line 1187 "llds_out_file.m"
      return;
    }
#line 1184 "llds_out_file.m"
  }
#line 1182 "llds_out_file.m"
}

#line 1179 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_chunk_6_p_0_1(
#line 1179 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1179 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1179 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1179 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 1179 "llds_out_file.m"
{
#line 1179 "llds_out_file.m"
  {
#line 1179 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 1179 "llds_out_file.m"
    {
#line 1179 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__write_int_pair_3_p_0(((MR_Tuple) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
#line 1179 "llds_out_file.m"
      return;
    }
#line 1179 "llds_out_file.m"
  }
#line 1179 "llds_out_file.m"
}

#line 1165 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_chunk_6_p_0(
#line 1165 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_7,
#line 1165 "llds_out_file.m"
  MR_String ll_backend__llds_out__llds_out_file__Suffix_8,
#line 1165 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ProcLabel_9,
#line 1165 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__LabelSlotNums_10)
#line 1165 "llds_out_file.m"
{
#line 1169 "llds_out_file.m"
  {
#line 1169 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 1169 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeInfo_54_54;
#line 1169 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__ModuleName_12;
#line 1169 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__V_18_18;
#line 1176 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_33_33;
#line 1176 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_34_34;
#line 1176 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_35_35;
#line 1176 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_36_36;
#line 1176 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_37_37;
#line 1176 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_38_38;
#line 1176 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_39_39;
#line 1176 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_40_40;
#line 1176 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_41_41;
#line 1176 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_42_42;
#line 1176 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_43_43;
#line 1176 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_44_44;
#line 1176 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_45_45;
#line 1176 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_46_46;
#line 1176 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_47_47;
#line 1176 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_48_48;
#line 1176 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_49_49;
#line 1176 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_50_50;
#line 1176 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_51_51;
#line 1176 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_52_52;
#line 1176 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_53_53;

#line 1170 "llds_out_file.m"
    {
#line 1170 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\tMR_init_label");
    }
#line 1171 "llds_out_file.m"
    {
#line 1171 "llds_out_file.m"
      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__Suffix_8);
    }
#line 6414 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeInfo_54_54 = (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_3[0];
#line 1172 "llds_out_file.m"
    {
#line 1172 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_18_18 = mercury__list__length_1_f_0(ll_backend__llds_out__llds_out_file__TypeInfo_54_54, ll_backend__llds_out__llds_out_file__LabelSlotNums_10);
    }
#line 1172 "llds_out_file.m"
    {
#line 1172 "llds_out_file.m"
      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_file__V_18_18);
    }
#line 1173 "llds_out_file.m"
    {
#line 1173 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "(");
    }
#line 1174 "llds_out_file.m"
    {
#line 1174 "llds_out_file.m"
      backend_libs__name_mangle__output_proc_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_file__ProcLabel_9);
    }
#line 1175 "llds_out_file.m"
    {
#line 1175 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1176 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 0)));
#line 1176 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__ModuleName_12 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 1)));
#line 1176 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 2)));
#line 1176 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 3)));
#line 1176 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 4)));
#line 1176 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 5)));
#line 1176 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 6)));
#line 1176 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_39_39 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 1176 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1176 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1176 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1176 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1176 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1176 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1176 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1176 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 1176 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 1176 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 1176 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 1176 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 1176 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 1176 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_7, (MR_Integer) 8)));
#line 1177 "llds_out_file.m"
    {
#line 1177 "llds_out_file.m"
      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_12);
    }
#line 1178 "llds_out_file.m"
    {
#line 1178 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) ",\n\t\t");
    }
#line 1179 "llds_out_file.m"
    {
#line 1179 "llds_out_file.m"
      mercury__io__write_list_5_p_0(ll_backend__llds_out__llds_out_file__TypeInfo_54_54, ll_backend__llds_out__llds_out_file__LabelSlotNums_10, (MR_String) ", ", (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_2[10]);
    }
#line 1180 "llds_out_file.m"
    {
#line 1180 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) ")\n");
#line 1180 "llds_out_file.m"
      return;
    }
#line 1169 "llds_out_file.m"
  }
#line 1165 "llds_out_file.m"
}

#line 1162 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_group_5_p_0_1(
#line 1162 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1162 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1162 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1162 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 1162 "llds_out_file.m"
{
#line 1162 "llds_out_file.m"
  {
#line 1162 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 1162 "llds_out_file.m"
    {
#line 1162 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_chunk_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 5))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
#line 1162 "llds_out_file.m"
      return;
    }
#line 1162 "llds_out_file.m"
  }
#line 1162 "llds_out_file.m"
}

#line 1150 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_group_5_p_0(
#line 1150 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_6,
#line 1150 "llds_out_file.m"
  MR_String ll_backend__llds_out__llds_out_file__Suffix_7,
#line 1150 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__3_3)
#line 1150 "llds_out_file.m"
{
#line 1155 "llds_out_file.m"
  {
#line 1155 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 1155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeInfo_18_18 = (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_3[0];
#line 1155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ProcLabel_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__3_3, (MR_Integer) 0)));
#line 1155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__RevLabelSlotNums_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__3_3, (MR_Integer) 1)));
#line 1155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__LabelSlotNums_11;
#line 1155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__LabelSlotNumChunks_13;
#line 1155 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_16_16;
#line 1161 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_IO_15;

#line 1156 "llds_out_file.m"
    {
#line 1156 "llds_out_file.m"
      mercury__list__reverse_2_p_0(ll_backend__llds_out__llds_out_file__TypeInfo_18_18, ll_backend__llds_out__llds_out_file__RevLabelSlotNums_9, &ll_backend__llds_out__llds_out_file__LabelSlotNums_11);
    }
#line 1160 "llds_out_file.m"
    {
#line 1160 "llds_out_file.m"
      mercury__list__chunk_3_p_0(ll_backend__llds_out__llds_out_file__TypeInfo_18_18, ll_backend__llds_out__llds_out_file__LabelSlotNums_11, (MR_Integer) 10, &ll_backend__llds_out__llds_out_file__LabelSlotNumChunks_13);
    }
#line 1162 "llds_out_file.m"
    {
#line 1162 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1162 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_16_16, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_6[12]));
#line 1162 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_16_16, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_group_5_p_0_1));
#line 1162 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1162 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_16_16, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_6));
#line 1162 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_16_16, 4) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Suffix_7));
#line 1162 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_16_16, 5) = ((MR_Box) (ll_backend__llds_out__llds_out_file__ProcLabel_8));
#line 1162 "llds_out_file.m"
    }
#line 1161 "llds_out_file.m"
    {
#line 1161 "llds_out_file.m"
      mercury__list__foldl_4_p_2((MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_1[3], (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__llds_out__llds_out_file__V_16_16, ll_backend__llds_out__llds_out_file__LabelSlotNumChunks_13, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_IO_15);
    }
#line 1155 "llds_out_file.m"
  }
#line 1150 "llds_out_file.m"
}

#line 1147 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_no_layout_init_chunk_4_p_0_1(
#line 1147 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1147 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1147 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1147 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 1147 "llds_out_file.m"
{
#line 1147 "llds_out_file.m"
  {
#line 1147 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 1147 "llds_out_file.m"
    {
#line 1147 "llds_out_file.m"
      mercury__io__write_int_3_p_0(((MR_Integer) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
#line 1147 "llds_out_file.m"
      return;
    }
#line 1147 "llds_out_file.m"
  }
#line 1147 "llds_out_file.m"
}

#line 1138 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_no_layout_init_chunk_4_p_0(
#line 1138 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ProcLabel_5,
#line 1138 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__LabelNums_6)
#line 1138 "llds_out_file.m"
{
#line 1141 "llds_out_file.m"
  {
#line 1141 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 1141 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_24_24;
#line 1141 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__V_12_12;

#line 1142 "llds_out_file.m"
    {
#line 1142 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\tMR_init_label");
    }
#line 6663 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_24_24 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1143 "llds_out_file.m"
    {
#line 1143 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_12_12 = mercury__list__length_1_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_24_24, ll_backend__llds_out__llds_out_file__LabelNums_6);
    }
#line 1143 "llds_out_file.m"
    {
#line 1143 "llds_out_file.m"
      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_file__V_12_12);
    }
#line 1144 "llds_out_file.m"
    {
#line 1144 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "(");
    }
#line 1145 "llds_out_file.m"
    {
#line 1145 "llds_out_file.m"
      backend_libs__name_mangle__output_proc_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_file__ProcLabel_5);
    }
#line 1146 "llds_out_file.m"
    {
#line 1146 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) ",");
    }
#line 1147 "llds_out_file.m"
    {
#line 1147 "llds_out_file.m"
      mercury__io__write_list_5_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_24_24, ll_backend__llds_out__llds_out_file__LabelNums_6, (MR_String) ",", (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_2[9]);
    }
#line 1148 "llds_out_file.m"
    {
#line 1148 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) ")\n");
#line 1148 "llds_out_file.m"
      return;
    }
#line 1141 "llds_out_file.m"
  }
#line 1138 "llds_out_file.m"
}

#line 1135 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_no_layout_init_group_3_p_0_1(
#line 1135 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1135 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1135 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1135 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 1135 "llds_out_file.m"
{
#line 1135 "llds_out_file.m"
  {
#line 1135 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 1135 "llds_out_file.m"
    {
#line 1135 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_c_internal_label_no_layout_init_chunk_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
#line 1135 "llds_out_file.m"
      return;
    }
#line 1135 "llds_out_file.m"
  }
#line 1135 "llds_out_file.m"
}

#line 1126 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_internal_label_no_layout_init_group_3_p_0(
#line 1126 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1)
#line 1126 "llds_out_file.m"
{
#line 1129 "llds_out_file.m"
  {
#line 1129 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 1129 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_14_14 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1129 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ProcLabel_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 1129 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__RevLabelNums_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 1129 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__LabelNums_7;
#line 1129 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__LabelNumChunks_9;
#line 1129 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_12_12;
#line 1135 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_IO_11;

#line 1130 "llds_out_file.m"
    {
#line 1130 "llds_out_file.m"
      mercury__list__reverse_2_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_14_14, ll_backend__llds_out__llds_out_file__RevLabelNums_5, &ll_backend__llds_out__llds_out_file__LabelNums_7);
    }
#line 1134 "llds_out_file.m"
    {
#line 1134 "llds_out_file.m"
      mercury__list__chunk_3_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_14_14, ll_backend__llds_out__llds_out_file__LabelNums_7, (MR_Integer) 10, &ll_backend__llds_out__llds_out_file__LabelNumChunks_9);
    }
#line 1135 "llds_out_file.m"
    {
#line 1135 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1135 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_12_12, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_4[5]));
#line 1135 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_12_12, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_c_internal_label_no_layout_init_group_3_p_0_1));
#line 1135 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1135 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_12_12, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__ProcLabel_4));
#line 1135 "llds_out_file.m"
    }
#line 1135 "llds_out_file.m"
    {
#line 1135 "llds_out_file.m"
      mercury__list__foldl_4_p_2((MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_1[2], (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__llds_out__llds_out_file__V_12_12, ll_backend__llds_out__llds_out_file__LabelNumChunks_9, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_IO_11);
    }
#line 1129 "llds_out_file.m"
  }
#line 1126 "llds_out_file.m"
}

#line 1084 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__group_init_c_labels_10_p_0(
#line 1084 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 1084 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2,
#line 1084 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoLayoutMap_0_3,
#line 1084 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoLayoutMap_4,
#line 1084 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_0_5,
#line 1084 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_6,
#line 1084 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_0_7,
#line 1084 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_8,
#line 1084 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_0_9,
#line 1084 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_10)
#line 1084 "llds_out_file.m"
{
#line 1093 "llds_out_file.m"
  while (MR_TRUE)
#line 1093 "llds_out_file.m"
    {
#line 1093 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 1093 "llds_out_file.m"
      {
#line 1093 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 1093 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1093 "llds_out_file.m"
          {
#line 1094 "llds_out_file.m"
            *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_10 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_0_9;
#line 1094 "llds_out_file.m"
            *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_8 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_0_7;
#line 1094 "llds_out_file.m"
            *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_6 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_0_5;
#line 1094 "llds_out_file.m"
            *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoLayoutMap_4 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoLayoutMap_0_3;
#line 1093 "llds_out_file.m"
          }
#line 1093 "llds_out_file.m"
        else
#line 1096 "llds_out_file.m"
          {
#line 1096 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Label_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 0)));
#line 1096 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Labels_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 1)));
#line 1096 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_51_51;
#line 1096 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_52_52;
#line 1096 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_53_53;
#line 1096 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoLayoutMap_57_57;

#line 1119 "llds_out_file.m"
            if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Label_25)) == (MR_mktag((MR_Integer) 1))))
#line 1120 "llds_out_file.m"
              {
#line 1121 "llds_out_file.m"
                {
#line 1121 "llds_out_file.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_out.llds_out_file", (MR_String) "predicate \140ll_backend.llds_out.llds_out_file.group_init_c_labels\'/10", (MR_String) "entry label");
#line 1121 "llds_out_file.m"
                  return;
                }
#line 1120 "llds_out_file.m"
              }
#line 1119 "llds_out_file.m"
            else
#line 1098 "llds_out_file.m"
              {
#line 1098 "llds_out_file.m"
                MR_Integer ll_backend__llds_out__llds_out_file__LabelNum_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Label_25, (MR_Integer) 0)));
#line 1098 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__ProcLabel_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Label_25, (MR_Integer) 1)));
#line 1116 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__Slot_33;
#line 1099 "llds_out_file.m"
                MR_Box ll_backend__llds_out__llds_out_file__conv0_Slot_33;

#line 1099 "llds_out_file.m"
                {
#line 1099 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0, ll_backend__llds_out__llds_out_file__HeadVar__1_1, ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_25)), &ll_backend__llds_out__llds_out_file__conv0_Slot_33);
                }
#line 1099 "llds_out_file.m"
                if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1099 "llds_out_file.m"
                  {
#line 1099 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__Slot_33 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv0_Slot_33);
#line 1099 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__succeeded = MR_TRUE;
#line 1099 "llds_out_file.m"
                  }
#line 1116 "llds_out_file.m"
                if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1100 "llds_out_file.m"
                  {
#line 1100 "llds_out_file.m"
                    MR_Word ll_backend__llds_out__llds_out_file__ArrayName_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Slot_33, (MR_Integer) 0)));
#line 1100 "llds_out_file.m"
                    MR_Integer ll_backend__llds_out__llds_out_file__SlotNum_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Slot_33, (MR_Integer) 1)));
#line 1113 "llds_out_file.m"
                    MR_Word ll_backend__llds_out__llds_out_file__Vars_36;

#line 1101 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__ArrayName_34)) == (MR_mktag((MR_Integer) 1)));
#line 1101 "llds_out_file.m"
                    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1101 "llds_out_file.m"
                      {
#line 1101 "llds_out_file.m"
                        ll_backend__llds_out__llds_out_file__Vars_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__ArrayName_34, (MR_Integer) 0)));
#line 1102 "llds_out_file.m"
                        {
#line 1102 "llds_out_file.m"
                          MR_Tuple ll_backend__llds_out__llds_out_file__Pair_37;

#line 1102 "llds_out_file.m"
                          {
#line 1102 "llds_out_file.m"
                            ll_backend__llds_out__llds_out_file__Pair_37 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1102 "llds_out_file.m"
                            MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Pair_37, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__LabelNum_31));
#line 1102 "llds_out_file.m"
                            MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Pair_37, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__SlotNum_35));
#line 1102 "llds_out_file.m"
                          }
#line 1106 "llds_out_file.m"
#line 1106 "llds_out_file.m"
                          switch (ll_backend__llds_out__llds_out_file__Vars_36) {
#line 1106 "llds_out_file.m"
                            default: /*NOTREACHED*/ MR_assert(0);
#line 1106 "llds_out_file.m"
                            case (MR_Integer) 2:
#line 1110 "llds_out_file.m"
                              {
#line 1111 "llds_out_file.m"
                                {
#line 1111 "llds_out_file.m"
                                  mercury__multi_map__set_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_3[0], ((MR_Box) (ll_backend__llds_out__llds_out_file__ProcLabel_32)), ((MR_Box) (ll_backend__llds_out__llds_out_file__Pair_37)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_0_9, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_51_51);
                                }
#line 1110 "llds_out_file.m"
                                ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_53_53 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_0_5;
#line 1110 "llds_out_file.m"
                                ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_52_52 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_0_7;
#line 1110 "llds_out_file.m"
                              }
#line 1106 "llds_out_file.m"
                              break;
#line 1106 "llds_out_file.m"
                            case (MR_Integer) 0:
#line 1104 "llds_out_file.m"
                              {
#line 1105 "llds_out_file.m"
                                {
#line 1105 "llds_out_file.m"
                                  mercury__multi_map__set_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_3[0], ((MR_Box) (ll_backend__llds_out__llds_out_file__ProcLabel_32)), ((MR_Box) (ll_backend__llds_out__llds_out_file__Pair_37)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_0_5, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_53_53);
                                }
#line 1104 "llds_out_file.m"
                                ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_52_52 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_0_7;
#line 1104 "llds_out_file.m"
                                ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_51_51 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_0_9;
#line 1104 "llds_out_file.m"
                              }
#line 1106 "llds_out_file.m"
                              break;
#line 1106 "llds_out_file.m"
                            case (MR_Integer) 1:
#line 1107 "llds_out_file.m"
                              {
#line 1108 "llds_out_file.m"
                                {
#line 1108 "llds_out_file.m"
                                  mercury__multi_map__set_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_3[0], ((MR_Box) (ll_backend__llds_out__llds_out_file__ProcLabel_32)), ((MR_Box) (ll_backend__llds_out__llds_out_file__Pair_37)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_0_7, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_52_52);
                                }
#line 1107 "llds_out_file.m"
                                ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_53_53 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_0_5;
#line 1107 "llds_out_file.m"
                                ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_51_51 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_0_9;
#line 1107 "llds_out_file.m"
                              }
#line 1106 "llds_out_file.m"
                              break;
#line 1106 "llds_out_file.m"
                          }
#line 1102 "llds_out_file.m"
                        }
#line 1101 "llds_out_file.m"
                      }
#line 1101 "llds_out_file.m"
                    else
#line 1114 "llds_out_file.m"
                      {
#line 1114 "llds_out_file.m"
                        {
#line 1114 "llds_out_file.m"
                          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_out.llds_out_file", (MR_String) "predicate \140ll_backend.llds_out.llds_out_file.group_init_c_labels\'/10", (MR_String) "bad slot type");
#line 1114 "llds_out_file.m"
                          return;
                        }
#line 1114 "llds_out_file.m"
                      }
#line 1100 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoLayoutMap_57_57 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoLayoutMap_0_3;
#line 1100 "llds_out_file.m"
                  }
#line 1116 "llds_out_file.m"
                else
#line 1117 "llds_out_file.m"
                  {
#line 1117 "llds_out_file.m"
                    {
#line 1117 "llds_out_file.m"
                      mercury__multi_map__set_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (ll_backend__llds_out__llds_out_file__ProcLabel_32)), ((MR_Box) (ll_backend__llds_out__llds_out_file__LabelNum_31)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoLayoutMap_0_3, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoLayoutMap_57_57);
                    }
#line 1117 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_51_51 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_0_9;
#line 1117 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_52_52 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_0_7;
#line 1117 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_53_53 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_0_5;
#line 1117 "llds_out_file.m"
                  }
#line 1098 "llds_out_file.m"
              }
#line 1123 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 1123 "llds_out_file.m"
            {
#line 1123 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_file__Labels_26;
#line 1123 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoLayoutMap_0__tmp_copy_3 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoLayoutMap_57_57;
#line 1123 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_0__tmp_copy_5 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_53_53;
#line 1123 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_0__tmp_copy_7 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_52_52;
#line 1123 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_0__tmp_copy_9 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_51_51;

#line 1123 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_0_9 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_LVarLayoutMap_0__tmp_copy_9;
#line 1123 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_0_7 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_SVarLayoutMap_0__tmp_copy_7;
#line 1123 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_0_5 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoVarLayoutMap_0__tmp_copy_5;
#line 1123 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoLayoutMap_0_3 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_NoLayoutMap_0__tmp_copy_3;
#line 1123 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__2_2 = ll_backend__llds_out__llds_out_file__HeadVar__2__tmp_copy_2;
#line 1123 "llds_out_file.m"
            }
#line 1123 "llds_out_file.m"
            continue;
#line 1096 "llds_out_file.m"
          }
#line 1093 "llds_out_file.m"
      }
#line 1093 "llds_out_file.m"
      break;
#line 1093 "llds_out_file.m"
    }
#line 1084 "llds_out_file.m"
}

#line 1081 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0_5(
#line 1081 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1081 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1081 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1081 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 1081 "llds_out_file.m"
{
#line 1081 "llds_out_file.m"
  {
#line 1081 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 1081 "llds_out_file.m"
    {
#line 1081 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_group_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
#line 1081 "llds_out_file.m"
      return;
    }
#line 1081 "llds_out_file.m"
  }
#line 1081 "llds_out_file.m"
}

#line 1077 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0_4(
#line 1077 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1077 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1077 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1077 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 1077 "llds_out_file.m"
{
#line 1077 "llds_out_file.m"
  {
#line 1077 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 1077 "llds_out_file.m"
    {
#line 1077 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_group_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
#line 1077 "llds_out_file.m"
      return;
    }
#line 1077 "llds_out_file.m"
  }
#line 1077 "llds_out_file.m"
}

#line 1073 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0_3(
#line 1073 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1073 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1073 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1073 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 1073 "llds_out_file.m"
{
#line 1073 "llds_out_file.m"
  {
#line 1073 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 1073 "llds_out_file.m"
    {
#line 1073 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_c_internal_label_layout_init_group_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
#line 1073 "llds_out_file.m"
      return;
    }
#line 1073 "llds_out_file.m"
  }
#line 1073 "llds_out_file.m"
}

#line 1069 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0_2(
#line 1069 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1069 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1069 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1069 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 1069 "llds_out_file.m"
{
#line 1069 "llds_out_file.m"
  {
#line 1069 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 1069 "llds_out_file.m"
    {
#line 1069 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_c_internal_label_no_layout_init_group_3_p_0(((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
#line 1069 "llds_out_file.m"
      return;
    }
#line 1069 "llds_out_file.m"
  }
#line 1069 "llds_out_file.m"
}

#line 1058 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0_1(
#line 1058 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1058 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1058 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1058 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 1058 "llds_out_file.m"
{
#line 1058 "llds_out_file.m"
  {
#line 1058 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 1058 "llds_out_file.m"
    {
#line 1058 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_c_entry_label_init_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
#line 1058 "llds_out_file.m"
      return;
    }
#line 1058 "llds_out_file.m"
  }
#line 1058 "llds_out_file.m"
}

#line 1053 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0(
#line 1053 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_6,
#line 1053 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__EntryLabels_7,
#line 1053 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__InternalLabels_8)
#line 1053 "llds_out_file.m"
{
#line 1056 "llds_out_file.m"
  {
#line 1056 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 1056 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85;
#line 1056 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_86_86;
#line 1056 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_87_87;
#line 1056 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeInfo_88_88;
#line 1056 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeInfo_96_96;
#line 1056 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__EntryLabelToLayoutMap_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 4)));
#line 1056 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__InternalLabelToLayoutMap_11;
#line 1056 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__NoLayoutInternalMap_12;
#line 1056 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__NoVarLayoutInternalMap_13;
#line 1056 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__SVarLayoutInternalMap_14;
#line 1056 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__LVarLayoutInternalMap_15;
#line 1056 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__NoLayoutInternalList_16;
#line 1056 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__NoVarLayoutInternalList_17;
#line 1056 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__SVarLayoutInternalList_18;
#line 1056 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__LVarLayoutInternalList_19;
#line 1056 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_22_22;
#line 1056 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_24_24;
#line 1056 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_25_25;
#line 1056 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_26_26;
#line 1056 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_27_27;
#line 1056 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_30_30;
#line 1056 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_33_33;
#line 1056 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_36_36;
#line 1057 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 0)));
#line 1057 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_40_40 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 1)));
#line 1057 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_41_41 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 2)));
#line 1057 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 3)));
#line 1057 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 5)));
#line 1057 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 6)));
#line 1057 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_45_45 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 1057 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1057 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1057 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1057 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1057 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1057 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1057 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1057 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 1057 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 1057 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 1057 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 1057 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 1057 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 1057 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 8)));
#line 1058 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_IO_23_23;
#line 1061 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_60_60;
#line 1061 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_61_61;
#line 1061 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_62_62;
#line 1061 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_63_63;
#line 1061 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_64_64;
#line 1061 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_65_65;
#line 1061 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_66_66;
#line 1061 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_67_67;
#line 1061 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_68_68;
#line 1061 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_69_69;
#line 1061 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_70_70;
#line 1061 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_71_71;
#line 1061 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_72_72;
#line 1061 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_73_73;
#line 1061 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_74_74;
#line 1061 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_75_75;
#line 1061 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_76_76;
#line 1061 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_77_77;
#line 1061 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_78_78;
#line 1061 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_79_79;
#line 1061 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_80_80;
#line 1069 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_IO_29_29;
#line 1073 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_IO_31_31;
#line 1077 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv3_STATE_VARIABLE_IO_34_34;
#line 1081 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv4_STATE_VARIABLE_IO_21;

#line 1058 "llds_out_file.m"
    {
#line 1058 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1058 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_22_22, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_4[4]));
#line 1058 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_22_22, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0_1));
#line 1058 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1058 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_22_22, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__EntryLabelToLayoutMap_10));
#line 1058 "llds_out_file.m"
    }
#line 7397 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 1058 "llds_out_file.m"
    {
#line 1058 "llds_out_file.m"
      mercury__list__foldl_4_p_2((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85, ll_backend__llds_out__llds_out_file__V_22_22, ll_backend__llds_out__llds_out_file__EntryLabels_7, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_IO_23_23);
    }
#line 1061 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 0)));
#line 1061 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_61_61 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 1)));
#line 1061 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_62_62 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 2)));
#line 1061 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__InternalLabelToLayoutMap_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 3)));
#line 1061 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 4)));
#line 1061 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 5)));
#line 1061 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 6)));
#line 1061 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_66_66 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 1061 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_67_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1061 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_68_68 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1061 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_69_69 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1061 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_70_70 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1061 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1061 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 1061 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 1061 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 1061 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_75_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 1061 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_76_76 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 1061 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_77_77 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 1061 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_78_78 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 1061 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_79_79 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 1061 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_6, (MR_Integer) 8)));
#line 7448 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_86_86 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0;
#line 7450 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_87_87 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1063 "llds_out_file.m"
    {
#line 1063 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_24_24 = mercury__multi_map__init_0_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_86_86, ll_backend__llds_out__llds_out_file__TypeCtorInfo_87_87);
    }
#line 7457 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeInfo_88_88 = (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_3[0];
#line 1064 "llds_out_file.m"
    {
#line 1064 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_25_25 = mercury__multi_map__init_0_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_86_86, ll_backend__llds_out__llds_out_file__TypeInfo_88_88);
    }
#line 1065 "llds_out_file.m"
    {
#line 1065 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_26_26 = mercury__multi_map__init_0_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_86_86, ll_backend__llds_out__llds_out_file__TypeInfo_88_88);
    }
#line 1066 "llds_out_file.m"
    {
#line 1066 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_27_27 = mercury__multi_map__init_0_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_86_86, ll_backend__llds_out__llds_out_file__TypeInfo_88_88);
    }
#line 1062 "llds_out_file.m"
    {
#line 1062 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__group_init_c_labels_10_p_0(ll_backend__llds_out__llds_out_file__InternalLabelToLayoutMap_11, ll_backend__llds_out__llds_out_file__InternalLabels_8, ll_backend__llds_out__llds_out_file__V_24_24, &ll_backend__llds_out__llds_out_file__NoLayoutInternalMap_12, ll_backend__llds_out__llds_out_file__V_25_25, &ll_backend__llds_out__llds_out_file__NoVarLayoutInternalMap_13, ll_backend__llds_out__llds_out_file__V_26_26, &ll_backend__llds_out__llds_out_file__SVarLayoutInternalMap_14, ll_backend__llds_out__llds_out_file__V_27_27, &ll_backend__llds_out__llds_out_file__LVarLayoutInternalMap_15);
    }
#line 1068 "llds_out_file.m"
    {
#line 1068 "llds_out_file.m"
      mercury__multi_map__to_assoc_list_2_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_86_86, ll_backend__llds_out__llds_out_file__TypeCtorInfo_87_87, ll_backend__llds_out__llds_out_file__NoLayoutInternalMap_12, &ll_backend__llds_out__llds_out_file__NoLayoutInternalList_16);
    }
#line 1069 "llds_out_file.m"
    {
#line 1069 "llds_out_file.m"
      mercury__list__foldl_4_p_2((MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_2[0], ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85, (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_2[8], ll_backend__llds_out__llds_out_file__NoLayoutInternalList_16, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_IO_29_29);
    }
#line 1072 "llds_out_file.m"
    {
#line 1072 "llds_out_file.m"
      mercury__multi_map__to_assoc_list_2_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_86_86, ll_backend__llds_out__llds_out_file__TypeInfo_88_88, ll_backend__llds_out__llds_out_file__NoVarLayoutInternalMap_13, &ll_backend__llds_out__llds_out_file__NoVarLayoutInternalList_17);
    }
#line 1073 "llds_out_file.m"
    {
#line 1073 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1073 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_30_30, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_5[3]));
#line 1073 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_30_30, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0_3));
#line 1073 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1073 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_30_30, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_6));
#line 1073 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_30_30, 4) = ((MR_Box) ((MR_String) "_nvi"));
#line 1073 "llds_out_file.m"
    }
#line 7510 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeInfo_96_96 = (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_2[1];
#line 1073 "llds_out_file.m"
    {
#line 1073 "llds_out_file.m"
      mercury__list__foldl_4_p_2(ll_backend__llds_out__llds_out_file__TypeInfo_96_96, ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85, ll_backend__llds_out__llds_out_file__V_30_30, ll_backend__llds_out__llds_out_file__NoVarLayoutInternalList_17, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_IO_31_31);
    }
#line 1076 "llds_out_file.m"
    {
#line 1076 "llds_out_file.m"
      mercury__multi_map__to_assoc_list_2_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_86_86, ll_backend__llds_out__llds_out_file__TypeInfo_88_88, ll_backend__llds_out__llds_out_file__SVarLayoutInternalMap_14, &ll_backend__llds_out__llds_out_file__SVarLayoutInternalList_18);
    }
#line 1077 "llds_out_file.m"
    {
#line 1077 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1077 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_33_33, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_5[3]));
#line 1077 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_33_33, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0_4));
#line 1077 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1077 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_33_33, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_6));
#line 1077 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_33_33, 4) = ((MR_Box) ((MR_String) "_svi"));
#line 1077 "llds_out_file.m"
    }
#line 1077 "llds_out_file.m"
    {
#line 1077 "llds_out_file.m"
      mercury__list__foldl_4_p_2(ll_backend__llds_out__llds_out_file__TypeInfo_96_96, ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85, ll_backend__llds_out__llds_out_file__V_33_33, ll_backend__llds_out__llds_out_file__SVarLayoutInternalList_18, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv3_STATE_VARIABLE_IO_34_34);
    }
#line 1080 "llds_out_file.m"
    {
#line 1080 "llds_out_file.m"
      mercury__multi_map__to_assoc_list_2_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_86_86, ll_backend__llds_out__llds_out_file__TypeInfo_88_88, ll_backend__llds_out__llds_out_file__LVarLayoutInternalMap_15, &ll_backend__llds_out__llds_out_file__LVarLayoutInternalList_19);
    }
#line 1081 "llds_out_file.m"
    {
#line 1081 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1081 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_36_36, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_5[3]));
#line 1081 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_36_36, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0_5));
#line 1081 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_36_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1081 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_36_36, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_6));
#line 1081 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_36_36, 4) = ((MR_Box) ((MR_String) "_lvi"));
#line 1081 "llds_out_file.m"
    }
#line 1081 "llds_out_file.m"
    {
#line 1081 "llds_out_file.m"
      mercury__list__foldl_4_p_2(ll_backend__llds_out__llds_out_file__TypeInfo_96_96, ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85, ll_backend__llds_out__llds_out_file__V_36_36, ll_backend__llds_out__llds_out_file__LVarLayoutInternalList_19, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv4_STATE_VARIABLE_IO_21);
    }
#line 1056 "llds_out_file.m"
  }
#line 1053 "llds_out_file.m"
}

#line 1022 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_entry_label_decl_6_p_0(
#line 1022 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file___Info_7,
#line 1022 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Label_8,
#line 1022 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_17,
#line 1022 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_18)
#line 1022 "llds_out_file.m"
{
#line 1025 "llds_out_file.m"
  {
#line 1025 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 1025 "llds_out_file.m"
    {
#line 1025 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_114_101_99_111_114_100_95_101_110_116_114_121_95_108_97_98_101_108_95_100_101_99_108_95_95_91_49_93_95_48_6_p_0(ll_backend__llds_out__llds_out_file__Label_8, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_17, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_18);
#line 1025 "llds_out_file.m"
      return;
    }
#line 1025 "llds_out_file.m"
  }
#line 1022 "llds_out_file.m"
}

#line 1015 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__insert_internal_label_code_addr_decl_4_p_0(
#line 1015 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ProcLabel_5,
#line 1015 "llds_out_file.m"
  MR_Integer ll_backend__llds_out__llds_out_file__LabelNum_6,
#line 1015 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_9,
#line 1015 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_10)
#line 1015 "llds_out_file.m"
{
#line 1018 "llds_out_file.m"
  {
#line 1018 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 1018 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__DeclId_8;
#line 1018 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_11_11;
#line 1018 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_12_12;

#line 1019 "llds_out_file.m"
    {
#line 1019 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1019 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_12_12, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__LabelNum_6));
#line 1019 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_12_12, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__ProcLabel_5));
#line 1019 "llds_out_file.m"
    }
#line 1019 "llds_out_file.m"
    {
#line 1019 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1019 "llds_out_file.m"
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__V_11_11, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__V_12_12));
#line 1019 "llds_out_file.m"
    }
#line 1019 "llds_out_file.m"
    {
#line 1019 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__DeclId_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1019 "llds_out_file.m"
      MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_file__DeclId_8, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__V_11_11));
#line 1019 "llds_out_file.m"
    }
#line 1020 "llds_out_file.m"
    {
#line 1020 "llds_out_file.m"
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__llds_out__llds_out_file__DeclId_8, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_9, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_10);
#line 1020 "llds_out_file.m"
      return;
    }
#line 1018 "llds_out_file.m"
  }
#line 1015 "llds_out_file.m"
}

#line 1012 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_internal_label_decl_group_6_p_0_2(
#line 1012 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1012 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1012 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1012 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 1012 "llds_out_file.m"
{
#line 1012 "llds_out_file.m"
  {
#line 1012 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 1012 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_DeclSet_10;

#line 1012 "llds_out_file.m"
    {
#line 1012 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__insert_internal_label_code_addr_decl_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Integer) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_DeclSet_10);
    }
#line 1012 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_DeclSet_10));
#line 1012 "llds_out_file.m"
  }
#line 1012 "llds_out_file.m"
}

#line 1010 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_internal_label_decl_group_6_p_0_1(
#line 1010 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 1010 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 1010 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 1010 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 1010 "llds_out_file.m"
{
#line 1010 "llds_out_file.m"
  {
#line 1010 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 1010 "llds_out_file.m"
    {
#line 1010 "llds_out_file.m"
      mercury__io__write_int_3_p_0(((MR_Integer) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
#line 1010 "llds_out_file.m"
      return;
    }
#line 1010 "llds_out_file.m"
  }
#line 1010 "llds_out_file.m"
}

#line 1000 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_internal_label_decl_group_6_p_0(
#line 1000 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ProcLabel_7,
#line 1000 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__LabelNums_8,
#line 1000 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_11,
#line 1000 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_12)
#line 1000 "llds_out_file.m"
{
#line 1004 "llds_out_file.m"
  {
#line 1004 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 1004 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_31_31;
#line 1004 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__V_17_17;
#line 1004 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_29_29;
#line 1012 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_DeclSet_12;

#line 1005 "llds_out_file.m"
    {
#line 1005 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "MR_decl_label");
    }
#line 7759 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_31_31 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1006 "llds_out_file.m"
    {
#line 1006 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_17_17 = mercury__list__length_1_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_31_31, ll_backend__llds_out__llds_out_file__LabelNums_8);
    }
#line 1006 "llds_out_file.m"
    {
#line 1006 "llds_out_file.m"
      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_file__V_17_17);
    }
#line 1007 "llds_out_file.m"
    {
#line 1007 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "(");
    }
#line 1008 "llds_out_file.m"
    {
#line 1008 "llds_out_file.m"
      backend_libs__name_mangle__output_proc_label_no_prefix_3_p_0(ll_backend__llds_out__llds_out_file__ProcLabel_7);
    }
#line 1009 "llds_out_file.m"
    {
#line 1009 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
#line 1010 "llds_out_file.m"
    {
#line 1010 "llds_out_file.m"
      mercury__io__write_list_5_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_31_31, ll_backend__llds_out__llds_out_file__LabelNums_8, (MR_String) ",", (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_2[7]);
    }
#line 1011 "llds_out_file.m"
    {
#line 1011 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) ")\n");
    }
#line 1012 "llds_out_file.m"
    {
#line 1012 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1012 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_29_29, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_4[3]));
#line 1012 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_29_29, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_record_internal_label_decl_group_6_p_0_2));
#line 1012 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_29_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1012 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_29_29, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__ProcLabel_7));
#line 1012 "llds_out_file.m"
    }
#line 1012 "llds_out_file.m"
    {
#line 1012 "llds_out_file.m"
      mercury__list__foldl_4_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_31_31, (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_1[0], ll_backend__llds_out__llds_out_file__V_29_29, ll_backend__llds_out__llds_out_file__LabelNums_8, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_11)), &ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_DeclSet_12);
    }
#line 1012 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_12 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_DeclSet_12);
#line 1004 "llds_out_file.m"
  }
#line 1000 "llds_out_file.m"
}

#line 997 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_internal_label_decls_5_p_0_2(
#line 997 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 997 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 997 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 997 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 997 "llds_out_file.m"
{
#line 997 "llds_out_file.m"
  {
#line 997 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 997 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv3_STATE_VARIABLE_DeclSet_10;

#line 997 "llds_out_file.m"
    {
#line 997 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__insert_internal_label_code_addr_decl_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Integer) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv3_STATE_VARIABLE_DeclSet_10);
    }
#line 997 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv3_STATE_VARIABLE_DeclSet_10));
#line 997 "llds_out_file.m"
  }
#line 997 "llds_out_file.m"
}

#line 995 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_internal_label_decls_5_p_0_1(
#line 995 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 995 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 995 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 995 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 995 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 995 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5)
#line 995 "llds_out_file.m"
{
#line 995 "llds_out_file.m"
  {
#line 995 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 995 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_DeclSet_12;

#line 995 "llds_out_file.m"
    {
#line 995 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_record_internal_label_decl_group_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_DeclSet_12);
    }
#line 995 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_DeclSet_12));
#line 995 "llds_out_file.m"
  }
#line 995 "llds_out_file.m"
}

#line 986 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_internal_label_decls_5_p_0(
#line 986 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 986 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_13,
#line 986 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_14)
#line 986 "llds_out_file.m"
{
#line 989 "llds_out_file.m"
  {
#line 989 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 989 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_22_22 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 989 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeInfo_29_29;
#line 989 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ProcLabel_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 989 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__RevLabelNums_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 989 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__LabelNums_10;
#line 989 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__LabelNumChunks_12;
#line 989 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_17_17;
#line 989 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_18_18;
#line 989 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_20_20;
#line 995 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_DeclSet_18_18;
#line 995 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_IO_16;
#line 997 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv4_STATE_VARIABLE_DeclSet_14;

#line 990 "llds_out_file.m"
    {
#line 990 "llds_out_file.m"
      mercury__list__reverse_2_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_22_22, ll_backend__llds_out__llds_out_file__RevLabelNums_7, &ll_backend__llds_out__llds_out_file__LabelNums_10);
    }
#line 994 "llds_out_file.m"
    {
#line 994 "llds_out_file.m"
      mercury__list__chunk_3_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_22_22, ll_backend__llds_out__llds_out_file__LabelNums_10, (MR_Integer) 10, &ll_backend__llds_out__llds_out_file__LabelNumChunks_12);
    }
#line 995 "llds_out_file.m"
    {
#line 995 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 995 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_17_17, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_6[11]));
#line 995 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_17_17, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_record_internal_label_decls_5_p_0_1));
#line 995 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 995 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_17_17, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__ProcLabel_6));
#line 995 "llds_out_file.m"
    }
#line 7954 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeInfo_29_29 = (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_1[0];
#line 995 "llds_out_file.m"
    {
#line 995 "llds_out_file.m"
      mercury__list__foldl2_6_p_2((MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_1[2], ll_backend__llds_out__llds_out_file__TypeInfo_29_29, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__llds_out__llds_out_file__V_17_17, ll_backend__llds_out__llds_out_file__LabelNumChunks_12, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_13)), &ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_DeclSet_18_18, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_IO_16);
    }
#line 995 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_18_18 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_DeclSet_18_18);
#line 997 "llds_out_file.m"
    {
#line 997 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 997 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_20_20, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_4[3]));
#line 997 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_20_20, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_record_internal_label_decls_5_p_0_2));
#line 997 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 997 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_20_20, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__ProcLabel_6));
#line 997 "llds_out_file.m"
    }
#line 997 "llds_out_file.m"
    {
#line 997 "llds_out_file.m"
      mercury__list__foldl_4_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_22_22, ll_backend__llds_out__llds_out_file__TypeInfo_29_29, ll_backend__llds_out__llds_out_file__V_20_20, ll_backend__llds_out__llds_out_file__LabelNums_10, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_18_18)), &ll_backend__llds_out__llds_out_file__conv4_STATE_VARIABLE_DeclSet_14);
    }
#line 997 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_14 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv4_STATE_VARIABLE_DeclSet_14);
#line 989 "llds_out_file.m"
  }
#line 986 "llds_out_file.m"
}

#line 972 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__group_decl_c_labels_3_p_0(
#line 972 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 972 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabelMap_0_2,
#line 972 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabelMap_3)
#line 972 "llds_out_file.m"
{
#line 975 "llds_out_file.m"
  while (MR_TRUE)
#line 975 "llds_out_file.m"
    {
#line 975 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 975 "llds_out_file.m"
      {
#line 975 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 975 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 975 "llds_out_file.m"
          *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabelMap_3 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabelMap_0_2;
#line 975 "llds_out_file.m"
        else
#line 976 "llds_out_file.m"
          {
#line 976 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Label_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 976 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Labels_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 976 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabelMap_19_19;

#line 980 "llds_out_file.m"
            if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Label_7)) == (MR_mktag((MR_Integer) 1))))
#line 981 "llds_out_file.m"
              {
#line 982 "llds_out_file.m"
                {
#line 982 "llds_out_file.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_out.llds_out_file", (MR_String) "predicate \140ll_backend.llds_out.llds_out_file.group_decl_c_labels\'/3", (MR_String) "entry label");
#line 982 "llds_out_file.m"
                  return;
                }
#line 981 "llds_out_file.m"
              }
#line 980 "llds_out_file.m"
            else
#line 978 "llds_out_file.m"
              {
#line 978 "llds_out_file.m"
                MR_Integer ll_backend__llds_out__llds_out_file__LabelNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Label_7, (MR_Integer) 0)));
#line 978 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__ProcLabel_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Label_7, (MR_Integer) 1)));

#line 979 "llds_out_file.m"
                {
#line 979 "llds_out_file.m"
                  mercury__multi_map__set_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (ll_backend__llds_out__llds_out_file__ProcLabel_11)), ((MR_Box) (ll_backend__llds_out__llds_out_file__LabelNum_10)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabelMap_0_2, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabelMap_19_19);
                }
#line 978 "llds_out_file.m"
              }
#line 984 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 984 "llds_out_file.m"
            {
#line 984 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__Labels_8;
#line 984 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabelMap_0__tmp_copy_2 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabelMap_19_19;

#line 984 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabelMap_0_2 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabelMap_0__tmp_copy_2;
#line 984 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 984 "llds_out_file.m"
            }
#line 984 "llds_out_file.m"
            continue;
#line 976 "llds_out_file.m"
          }
#line 975 "llds_out_file.m"
      }
#line 975 "llds_out_file.m"
      break;
#line 975 "llds_out_file.m"
    }
#line 972 "llds_out_file.m"
}

#line 969 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_c_label_decls_7_p_0_2(
#line 969 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 969 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 969 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 969 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 969 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 969 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5)
#line 969 "llds_out_file.m"
{
#line 969 "llds_out_file.m"
  {
#line 969 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 969 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv3_STATE_VARIABLE_DeclSet_18;

#line 969 "llds_out_file.m"
    {
#line 969 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_record_entry_label_decl_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv3_STATE_VARIABLE_DeclSet_18);
    }
#line 969 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv3_STATE_VARIABLE_DeclSet_18));
#line 969 "llds_out_file.m"
  }
#line 969 "llds_out_file.m"
}

#line 967 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_c_label_decls_7_p_0_1(
#line 967 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 967 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 967 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 967 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 967 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 967 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5)
#line 967 "llds_out_file.m"
{
#line 967 "llds_out_file.m"
  {
#line 967 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 967 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_DeclSet_14;

#line 967 "llds_out_file.m"
    {
#line 967 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_record_internal_label_decls_5_p_0(((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_DeclSet_14);
    }
#line 967 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_DeclSet_14));
#line 967 "llds_out_file.m"
  }
#line 967 "llds_out_file.m"
}

#line 959 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_record_c_label_decls_7_p_0(
#line 959 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_8,
#line 959 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__EntryLabels_9,
#line 959 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__InternalLabels_10,
#line 959 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_15,
#line 959 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_16)
#line 959 "llds_out_file.m"
{
#line 964 "llds_out_file.m"
  {
#line 964 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 964 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_26_26 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0;
#line 964 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_27_27 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 964 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeInfo_34_34;
#line 964 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_35_35;
#line 964 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__InternalLabelMap_13;
#line 964 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__InternalLabelList_14;
#line 964 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_19_19;
#line 964 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_21_21;
#line 964 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_23_23;
#line 967 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_DeclSet_21_21;
#line 967 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_IO_22_22;
#line 969 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv5_STATE_VARIABLE_DeclSet_16;
#line 969 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv4_STATE_VARIABLE_IO_18;

#line 965 "llds_out_file.m"
    {
#line 965 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_19_19 = mercury__multi_map__init_0_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_26_26, ll_backend__llds_out__llds_out_file__TypeCtorInfo_27_27);
    }
#line 965 "llds_out_file.m"
    {
#line 965 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__group_decl_c_labels_3_p_0(ll_backend__llds_out__llds_out_file__InternalLabels_10, ll_backend__llds_out__llds_out_file__V_19_19, &ll_backend__llds_out__llds_out_file__InternalLabelMap_13);
    }
#line 966 "llds_out_file.m"
    {
#line 966 "llds_out_file.m"
      mercury__multi_map__to_assoc_list_2_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_26_26, ll_backend__llds_out__llds_out_file__TypeCtorInfo_27_27, ll_backend__llds_out__llds_out_file__InternalLabelMap_13, &ll_backend__llds_out__llds_out_file__InternalLabelList_14);
    }
#line 8216 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeInfo_34_34 = (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_1[0];
#line 8218 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_35_35 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 967 "llds_out_file.m"
    {
#line 967 "llds_out_file.m"
      mercury__list__foldl2_6_p_2((MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_2[0], ll_backend__llds_out__llds_out_file__TypeInfo_34_34, ll_backend__llds_out__llds_out_file__TypeCtorInfo_35_35, (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_2[6], ll_backend__llds_out__llds_out_file__InternalLabelList_14, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_15)), &ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_DeclSet_21_21, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_IO_22_22);
    }
#line 967 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_21_21 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_DeclSet_21_21);
#line 969 "llds_out_file.m"
    {
#line 969 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 969 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_23_23, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_6[10]));
#line 969 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_23_23, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_record_c_label_decls_7_p_0_2));
#line 969 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 969 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_23_23, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_8));
#line 969 "llds_out_file.m"
    }
#line 969 "llds_out_file.m"
    {
#line 969 "llds_out_file.m"
      mercury__list__foldl2_6_p_2((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ll_backend__llds_out__llds_out_file__TypeInfo_34_34, ll_backend__llds_out__llds_out_file__TypeCtorInfo_35_35, ll_backend__llds_out__llds_out_file__V_23_23, ll_backend__llds_out__llds_out_file__EntryLabels_9, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_21_21)), &ll_backend__llds_out__llds_out_file__conv5_STATE_VARIABLE_DeclSet_16, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv4_STATE_VARIABLE_IO_18);
    }
#line 969 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_16 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv5_STATE_VARIABLE_DeclSet_16);
#line 964 "llds_out_file.m"
  }
#line 959 "llds_out_file.m"
}

#line 923 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_foreign_decl_or_code_7_p_0(
#line 923 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_8,
#line 923 "llds_out_file.m"
  MR_String ll_backend__llds_out__llds_out_file__PragmaType_9,
#line 923 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Lang_10,
#line 923 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__LiteralOrInclude_11,
#line 923 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Context_12)
#line 923 "llds_out_file.m"
{
#line 928 "llds_out_file.m"
  {
#line 928 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 928 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__AutoComments_14 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 928 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__LineNumbers_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 929 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 0)));
#line 929 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_42_42 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 1)));
#line 929 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_43_43 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 2)));
#line 929 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 3)));
#line 929 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 4)));
#line 929 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 5)));
#line 929 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 6)));
#line 929 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 929 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 929 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 929 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 929 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 929 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 929 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 929 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 929 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 929 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 929 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 929 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 929 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 8)));

#line 932 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__succeeded = (ll_backend__llds_out__llds_out_file__AutoComments_14 == (MR_Integer) 1);
#line 932 "llds_out_file.m"
    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 933 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__succeeded = (ll_backend__llds_out__llds_out_file__LineNumbers_15 == (MR_Integer) 1);
#line 942 "llds_out_file.m"
    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 935 "llds_out_file.m"
      {
#line 935 "llds_out_file.m"
        {
#line 935 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "/* ");
        }
#line 936 "llds_out_file.m"
        {
#line 936 "llds_out_file.m"
          parse_tree__prog_out__write_context_3_p_0(ll_backend__llds_out__llds_out_file__Context_12);
        }
#line 937 "llds_out_file.m"
        {
#line 937 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) " pragma ");
        }
#line 938 "llds_out_file.m"
        {
#line 938 "llds_out_file.m"
          mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__PragmaType_9);
        }
#line 939 "llds_out_file.m"
        {
#line 939 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "(");
        }
#line 940 "llds_out_file.m"
        {
#line 940 "llds_out_file.m"
          mercury__io__write_3_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, ((MR_Box) (ll_backend__llds_out__llds_out_file__Lang_10)));
        }
#line 941 "llds_out_file.m"
        {
#line 941 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) ") */\n");
        }
#line 935 "llds_out_file.m"
      }
#line 942 "llds_out_file.m"
    else
#line 942 "llds_out_file.m"
      {
#line 942 "llds_out_file.m"
      }
#line 949 "llds_out_file.m"
    if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__LiteralOrInclude_11)) == (MR_mktag((MR_Integer) 1))))
#line 950 "llds_out_file.m"
      {
#line 950 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__IncludeFileName_17 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__LiteralOrInclude_11, (MR_Integer) 0)));
#line 950 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__SourceFileName_18 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 2)));
#line 950 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__IncludePath_19;
#line 950 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_33_33;
#line 951 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 0)));
#line 951 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__V_84_84 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 1)));
#line 951 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 3)));
#line 951 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 4)));
#line 951 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 5)));
#line 951 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 6)));
#line 951 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_89_89 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 951 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_90_90 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 951 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_91_91 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 951 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_92_92 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 951 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_93_93 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 951 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_94_94 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 951 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_95_95 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 951 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_96_96 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 951 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_97_97 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 951 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_98_98 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 951 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_99_99 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 951 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_100_100 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 951 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_101_101 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 951 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_102_102 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 951 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_8, (MR_Integer) 8)));

#line 952 "llds_out_file.m"
        {
#line 952 "llds_out_file.m"
          parse_tree__file_names__make_include_file_path_3_p_0(ll_backend__llds_out__llds_out_file__SourceFileName_18, ll_backend__llds_out__llds_out_file__IncludeFileName_17, &ll_backend__llds_out__llds_out_file__IncludePath_19);
        }
#line 953 "llds_out_file.m"
        {
#line 953 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 953 "llds_out_file.m"
          MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_33_33, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__IncludePath_19));
#line 953 "llds_out_file.m"
          MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_33_33, 1) = ((MR_Box) ((MR_Integer) 1));
#line 953 "llds_out_file.m"
        }
#line 953 "llds_out_file.m"
        {
#line 953 "llds_out_file.m"
          ll_backend__llds_out__llds_out_util__output_set_line_num_4_p_0(ll_backend__llds_out__llds_out_file__Info_8, ll_backend__llds_out__llds_out_file__V_33_33);
        }
#line 954 "llds_out_file.m"
        {
#line 954 "llds_out_file.m"
          libs__file_util__write_include_file_contents_3_p_0(ll_backend__llds_out__llds_out_file__IncludePath_19);
        }
#line 950 "llds_out_file.m"
      }
#line 949 "llds_out_file.m"
    else
#line 946 "llds_out_file.m"
      {
#line 946 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__Code_16 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__LiteralOrInclude_11, (MR_Integer) 0)));

#line 947 "llds_out_file.m"
        {
#line 947 "llds_out_file.m"
          ll_backend__llds_out__llds_out_util__output_set_line_num_4_p_0(ll_backend__llds_out__llds_out_file__Info_8, ll_backend__llds_out__llds_out_file__Context_12);
        }
#line 948 "llds_out_file.m"
        {
#line 948 "llds_out_file.m"
          mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__Code_16);
        }
#line 946 "llds_out_file.m"
      }
#line 956 "llds_out_file.m"
    {
#line 956 "llds_out_file.m"
      mercury__io__nl_2_p_0();
    }
#line 957 "llds_out_file.m"
    {
#line 957 "llds_out_file.m"
      ll_backend__llds_out__llds_out_util__output_reset_line_num_3_p_0(ll_backend__llds_out__llds_out_file__Info_8);
#line 957 "llds_out_file.m"
      return;
    }
#line 928 "llds_out_file.m"
  }
#line 923 "llds_out_file.m"
}

#line 898 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_foreign_header_include_line_6_p_0(
#line 898 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_7,
#line 898 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Decl_8,
#line 898 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AlreadyDone_0_15,
#line 898 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AlreadyDone_16)
#line 898 "llds_out_file.m"
{
#line 903 "llds_out_file.m"
  {
#line 903 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 903 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__Lang_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Decl_8, (MR_Integer) 0)));
#line 903 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__LiteralOrInclude_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Decl_8, (MR_Integer) 2)));
#line 903 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Decl_8, (MR_Integer) 3)));
#line 904 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file___IsLocal_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Decl_8, (MR_Integer) 1)));

#line 914 "llds_out_file.m"
#line 914 "llds_out_file.m"
    switch (ll_backend__llds_out__llds_out_file__Lang_11) {
#line 914 "llds_out_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 914 "llds_out_file.m"
      case (MR_Integer) 0:
#line 911 "llds_out_file.m"
        {
#line 911 "llds_out_file.m"
          MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AlreadyDone_22_22;

#line 908 "llds_out_file.m"
          {
#line 908 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__succeeded = mercury__set__insert_new_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_literal_or_include_0, ((MR_Box) (ll_backend__llds_out__llds_out_file__LiteralOrInclude_13)), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AlreadyDone_0_15, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AlreadyDone_22_22);
          }
#line 911 "llds_out_file.m"
          if (ll_backend__llds_out__llds_out_file__succeeded)
#line 909 "llds_out_file.m"
            {
#line 909 "llds_out_file.m"
              *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AlreadyDone_16 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AlreadyDone_22_22;
#line 909 "llds_out_file.m"
              {
#line 909 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__output_foreign_decl_or_code_7_p_0(ll_backend__llds_out__llds_out_file__Info_7, (MR_String) "foreign_decl", ll_backend__llds_out__llds_out_file__Lang_11, ll_backend__llds_out__llds_out_file__LiteralOrInclude_13, ll_backend__llds_out__llds_out_file__Context_14);
#line 909 "llds_out_file.m"
                return;
              }
#line 909 "llds_out_file.m"
            }
#line 911 "llds_out_file.m"
          else
#line 912 "llds_out_file.m"
            *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AlreadyDone_16 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AlreadyDone_0_15;
#line 911 "llds_out_file.m"
        }
#line 914 "llds_out_file.m"
        break;
#line 914 "llds_out_file.m"
      case (MR_Integer) 1:
#line 914 "llds_out_file.m"
      case (MR_Integer) 3:
#line 914 "llds_out_file.m"
      case (MR_Integer) 2:
#line 918 "llds_out_file.m"
        {
#line 919 "llds_out_file.m"
          {
#line 919 "llds_out_file.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_out.llds_out_file", (MR_String) "predicate \140ll_backend.llds_out.llds_out_file.output_foreign_header_include_line\'/6", (MR_String) "unexpected: foreign decl code other than C");
#line 919 "llds_out_file.m"
            return;
          }
#line 918 "llds_out_file.m"
        }
#line 914 "llds_out_file.m"
        break;
#line 914 "llds_out_file.m"
    }
#line 903 "llds_out_file.m"
  }
#line 898 "llds_out_file.m"
}

#line 895 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_foreign_header_include_lines_4_p_0_1(
#line 895 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 895 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 895 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 895 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 895 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 895 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5)
#line 895 "llds_out_file.m"
{
#line 895 "llds_out_file.m"
  {
#line 895 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 895 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_AlreadyDone_16;

#line 895 "llds_out_file.m"
    {
#line 895 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_foreign_header_include_line_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_AlreadyDone_16);
    }
#line 895 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_AlreadyDone_16));
#line 895 "llds_out_file.m"
  }
#line 895 "llds_out_file.m"
}

#line 891 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_foreign_header_include_lines_4_p_0(
#line 891 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_5,
#line 891 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Decls_6)
#line 891 "llds_out_file.m"
{
#line 894 "llds_out_file.m"
  {
#line 894 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 894 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_11_11;
#line 894 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_12_12;
#line 895 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_8_8;
#line 895 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv2_V_8_8;
#line 895 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_IO_10;

#line 895 "llds_out_file.m"
    {
#line 895 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 895 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_11_11, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_6[9]));
#line 895 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_11_11, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_foreign_header_include_lines_4_p_0_1));
#line 895 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 895 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_11_11, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_5));
#line 895 "llds_out_file.m"
    }
#line 896 "llds_out_file.m"
    {
#line 896 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_12_12 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_literal_or_include_0);
    }
#line 895 "llds_out_file.m"
    {
#line 895 "llds_out_file.m"
      mercury__list__foldl2_6_p_2((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0, (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_1[1], (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__llds_out__llds_out_file__V_11_11, ll_backend__llds_out__llds_out_file__Decls_6, ((MR_Box) (ll_backend__llds_out__llds_out_file__V_12_12)), &ll_backend__llds_out__llds_out_file__conv2_V_8_8, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_IO_10);
    }
#line 895 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_8_8 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv2_V_8_8);
#line 894 "llds_out_file.m"
  }
#line 891 "llds_out_file.m"
}

#line 873 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_foreign_body_code_4_p_0(
#line 873 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_5,
#line 873 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ForeignBodyCode_6)
#line 873 "llds_out_file.m"
{
#line 876 "llds_out_file.m"
  {
#line 876 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 876 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__Lang_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__ForeignBodyCode_6, (MR_Integer) 0)));
#line 876 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__LiteralOrInclude_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__ForeignBodyCode_6, (MR_Integer) 1)));
#line 876 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__ForeignBodyCode_6, (MR_Integer) 2)));

#line 882 "llds_out_file.m"
#line 882 "llds_out_file.m"
    switch (ll_backend__llds_out__llds_out_file__Lang_8) {
#line 882 "llds_out_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 882 "llds_out_file.m"
      case (MR_Integer) 0:
#line 879 "llds_out_file.m"
        {
#line 880 "llds_out_file.m"
          {
#line 880 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__output_foreign_decl_or_code_7_p_0(ll_backend__llds_out__llds_out_file__Info_5, (MR_String) "foreign_code", ll_backend__llds_out__llds_out_file__Lang_8, ll_backend__llds_out__llds_out_file__LiteralOrInclude_9, ll_backend__llds_out__llds_out_file__Context_10);
#line 880 "llds_out_file.m"
            return;
          }
#line 879 "llds_out_file.m"
        }
#line 882 "llds_out_file.m"
        break;
#line 882 "llds_out_file.m"
      case (MR_Integer) 1:
#line 882 "llds_out_file.m"
      case (MR_Integer) 3:
#line 882 "llds_out_file.m"
      case (MR_Integer) 2:
#line 886 "llds_out_file.m"
        {
#line 887 "llds_out_file.m"
          {
#line 887 "llds_out_file.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_out.llds_out_file", (MR_String) "predicate \140ll_backend.llds_out.llds_out_file.output_foreign_body_code\'/4", (MR_String) "unimplemented: foreign code other than C");
#line 887 "llds_out_file.m"
            return;
          }
#line 886 "llds_out_file.m"
        }
#line 882 "llds_out_file.m"
        break;
#line 882 "llds_out_file.m"
    }
#line 876 "llds_out_file.m"
  }
#line 873 "llds_out_file.m"
}

#line 857 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_static_linkage_define_2_p_0(void)
#line 857 "llds_out_file.m"
{
#line 859 "llds_out_file.m"
  {
#line 859 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 865 "llds_out_file.m"
    {
#line 865 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#ifdef _MSC_VER\n");
    }
#line 866 "llds_out_file.m"
    {
#line 866 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#define MR_STATIC_LINKAGE extern\n");
    }
#line 867 "llds_out_file.m"
    {
#line 867 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#else\n");
    }
#line 868 "llds_out_file.m"
    {
#line 868 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#define MR_STATIC_LINKAGE static\n");
    }
#line 869 "llds_out_file.m"
    {
#line 869 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#endif\n");
#line 869 "llds_out_file.m"
      return;
    }
#line 859 "llds_out_file.m"
  }
#line 857 "llds_out_file.m"
}

#line 852 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_annotated_c_module_6_p_0_2(
#line 852 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 852 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 852 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 852 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 852 "llds_out_file.m"
{
#line 852 "llds_out_file.m"
  {
#line 852 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 852 "llds_out_file.m"
    {
#line 852 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_annotated_c_procedure_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
#line 852 "llds_out_file.m"
      return;
    }
#line 852 "llds_out_file.m"
  }
#line 852 "llds_out_file.m"
}

#line 844 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_annotated_c_module_6_p_0_1(
#line 844 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 844 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 844 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 844 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3,
#line 844 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_4,
#line 844 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_5)
#line 844 "llds_out_file.m"
{
#line 844 "llds_out_file.m"
  {
#line 844 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;
#line 844 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_DeclSet_16;

#line 844 "llds_out_file.m"
    {
#line 844 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_record_c_procedure_decls_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_2), &ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_DeclSet_16);
    }
#line 844 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_DeclSet_16));
#line 844 "llds_out_file.m"
  }
#line 844 "llds_out_file.m"
}

#line 837 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_annotated_c_module_6_p_0(
#line 837 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_7,
#line 837 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__AnnotatedModule_8,
#line 837 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_15,
#line 837 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_16)
#line 837 "llds_out_file.m"
{
#line 840 "llds_out_file.m"
  {
#line 840 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 840 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_43_43;
#line 840 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_45_45;
#line 840 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__ModuleName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__AnnotatedModule_8, (MR_Integer) 0)));
#line 840 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__AnnotatedProcedures_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__AnnotatedModule_8, (MR_Integer) 1)));
#line 840 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__EntryLabels_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__AnnotatedModule_8, (MR_Integer) 2)));
#line 840 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__InternalLabels_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__AnnotatedModule_8, (MR_Integer) 3)));
#line 840 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_21_21;
#line 840 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_34_34;
#line 844 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_DeclSet_16;
#line 844 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_IO_23_23;
#line 852 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv3_STATE_VARIABLE_IO_35_35;

#line 843 "llds_out_file.m"
    {
#line 843 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 844 "llds_out_file.m"
    {
#line 844 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 844 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_21_21, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_6[8]));
#line 844 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_21_21, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_annotated_c_module_6_p_0_1));
#line 844 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 844 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_21_21, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_7));
#line 844 "llds_out_file.m"
    }
#line 8904 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_43_43 = (MR_Word) &ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__type_ctor_info_annotated_c_procedure_0;
#line 8906 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_45_45 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 844 "llds_out_file.m"
    {
#line 844 "llds_out_file.m"
      mercury__list__foldl2_6_p_2(ll_backend__llds_out__llds_out_file__TypeCtorInfo_43_43, (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_1[0], ll_backend__llds_out__llds_out_file__TypeCtorInfo_45_45, ll_backend__llds_out__llds_out_file__V_21_21, ll_backend__llds_out__llds_out_file__AnnotatedProcedures_12, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_15)), &ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_DeclSet_16, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_IO_23_23);
    }
#line 844 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_16 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_DeclSet_16);
#line 846 "llds_out_file.m"
    {
#line 846 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 847 "llds_out_file.m"
    {
#line 847 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "MR_BEGIN_MODULE(");
    }
#line 848 "llds_out_file.m"
    {
#line 848 "llds_out_file.m"
      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_11);
    }
#line 849 "llds_out_file.m"
    {
#line 849 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) ")\n");
    }
#line 850 "llds_out_file.m"
    {
#line 850 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_c_label_inits_5_p_0(ll_backend__llds_out__llds_out_file__Info_7, ll_backend__llds_out__llds_out_file__EntryLabels_13, ll_backend__llds_out__llds_out_file__InternalLabels_14);
    }
#line 851 "llds_out_file.m"
    {
#line 851 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "MR_BEGIN_CODE\n");
    }
#line 852 "llds_out_file.m"
    {
#line 852 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 852 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_34_34, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_4[2]));
#line 852 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_34_34, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_annotated_c_module_6_p_0_2));
#line 852 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 852 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_34_34, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_7));
#line 852 "llds_out_file.m"
    }
#line 852 "llds_out_file.m"
    {
#line 852 "llds_out_file.m"
      mercury__list__foldl_4_p_2(ll_backend__llds_out__llds_out_file__TypeCtorInfo_43_43, ll_backend__llds_out__llds_out_file__TypeCtorInfo_45_45, ll_backend__llds_out__llds_out_file__V_34_34, ll_backend__llds_out__llds_out_file__AnnotatedProcedures_12, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv3_STATE_VARIABLE_IO_35_35);
    }
#line 853 "llds_out_file.m"
    {
#line 853 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "MR_END_MODULE\n");
#line 853 "llds_out_file.m"
      return;
    }
#line 840 "llds_out_file.m"
  }
#line 837 "llds_out_file.m"
}

#line 827 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_required_init_or_final_calls_3_p_0(
#line 827 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1)
#line 827 "llds_out_file.m"
{
#line 830 "llds_out_file.m"
  while (MR_TRUE)
#line 830 "llds_out_file.m"
    {
#line 830 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 830 "llds_out_file.m"
      {
#line 830 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 830 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 830 "llds_out_file.m"
          {
#line 830 "llds_out_file.m"
          }
#line 830 "llds_out_file.m"
        else
#line 831 "llds_out_file.m"
          {
#line 831 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__Name_7 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 831 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Names_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 831 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__V_12_12;
#line 831 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__V_15_15;

#line 832 "llds_out_file.m"
            {
#line 832 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__V_15_15 = mercury__string__f_43_43_2_f_0(ll_backend__llds_out__llds_out_file__Name_7, (MR_String) "();\n");
            }
#line 832 "llds_out_file.m"
            {
#line 832 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) "\t", ll_backend__llds_out__llds_out_file__V_15_15);
            }
#line 832 "llds_out_file.m"
            {
#line 832 "llds_out_file.m"
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__V_12_12);
            }
#line 833 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 833 "llds_out_file.m"
            {
#line 833 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__Names_8;

#line 833 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 833 "llds_out_file.m"
            }
#line 833 "llds_out_file.m"
            continue;
#line 831 "llds_out_file.m"
          }
#line 830 "llds_out_file.m"
      }
#line 830 "llds_out_file.m"
      break;
#line 830 "llds_out_file.m"
    }
#line 827 "llds_out_file.m"
}

#line 820 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_env_var_init_3_p_0(
#line 820 "llds_out_file.m"
  MR_String ll_backend__llds_out__llds_out_file__EnvVarName_4)
#line 820 "llds_out_file.m"
{
#line 822 "llds_out_file.m"
  {
#line 822 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 823 "llds_out_file.m"
    {
#line 823 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "ENVVAR ");
    }
#line 824 "llds_out_file.m"
    {
#line 824 "llds_out_file.m"
      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__EnvVarName_4);
    }
#line 825 "llds_out_file.m"
    {
#line 825 "llds_out_file.m"
      mercury__io__nl_2_p_0();
#line 825 "llds_out_file.m"
      return;
    }
#line 822 "llds_out_file.m"
  }
#line 820 "llds_out_file.m"
}

#line 816 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_init_comment_6_p_0_1(
#line 816 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 816 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1,
#line 816 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_2,
#line 816 "llds_out_file.m"
  MR_Box * ll_backend__llds_out__llds_out_file__wrapper_arg_3)
#line 816 "llds_out_file.m"
{
#line 816 "llds_out_file.m"
  {
#line 816 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 816 "llds_out_file.m"
    {
#line 816 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_env_var_init_3_p_0(((MR_String) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
#line 816 "llds_out_file.m"
      return;
    }
#line 816 "llds_out_file.m"
  }
#line 816 "llds_out_file.m"
}

#line 789 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_init_comment_6_p_0(
#line 789 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ModuleName_7,
#line 789 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__UserInitPredCNames_8,
#line 789 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__UserFinalPredCNames_9,
#line 789 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__EnvVarNames_10)
#line 789 "llds_out_file.m"
{
#line 793 "llds_out_file.m"
  {
#line 793 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 816 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_IO_36_36;

#line 794 "llds_out_file.m"
    {
#line 794 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "/*\n");
    }
#line 795 "llds_out_file.m"
    {
#line 795 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "INIT ");
    }
#line 796 "llds_out_file.m"
    {
#line 796 "llds_out_file.m"
      backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_7);
    }
#line 797 "llds_out_file.m"
    {
#line 797 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "init\n");
    }
#line 802 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__UserInitPredCNames_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 801 "llds_out_file.m"
      {
#line 801 "llds_out_file.m"
      }
#line 802 "llds_out_file.m"
    else
#line 803 "llds_out_file.m"
      {
#line 804 "llds_out_file.m"
        {
#line 804 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "REQUIRED_INIT ");
        }
#line 805 "llds_out_file.m"
        {
#line 805 "llds_out_file.m"
          backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_7);
        }
#line 806 "llds_out_file.m"
        {
#line 806 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "required_init\n");
        }
#line 803 "llds_out_file.m"
      }
#line 810 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__UserFinalPredCNames_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 809 "llds_out_file.m"
      {
#line 809 "llds_out_file.m"
      }
#line 810 "llds_out_file.m"
    else
#line 811 "llds_out_file.m"
      {
#line 812 "llds_out_file.m"
        {
#line 812 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "REQUIRED_FINAL ");
        }
#line 813 "llds_out_file.m"
        {
#line 813 "llds_out_file.m"
          backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_7);
        }
#line 814 "llds_out_file.m"
        {
#line 814 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "required_final\n");
        }
#line 811 "llds_out_file.m"
      }
#line 816 "llds_out_file.m"
    {
#line 816 "llds_out_file.m"
      mercury__list__foldl_4_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_2[5], ll_backend__llds_out__llds_out_file__EnvVarNames_10, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv0_STATE_VARIABLE_IO_36_36);
    }
#line 817 "llds_out_file.m"
    {
#line 817 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "ENDINIT\n");
    }
#line 818 "llds_out_file.m"
    {
#line 818 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "*/\n\n");
#line 818 "llds_out_file.m"
      return;
    }
#line 793 "llds_out_file.m"
  }
#line 789 "llds_out_file.m"
}

#line 756 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_write_proc_static_list_3_p_0(
#line 756 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1)
#line 756 "llds_out_file.m"
{
#line 759 "llds_out_file.m"
  while (MR_TRUE)
#line 759 "llds_out_file.m"
    {
#line 759 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 759 "llds_out_file.m"
      {
#line 759 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 759 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 759 "llds_out_file.m"
          {
#line 759 "llds_out_file.m"
          }
#line 759 "llds_out_file.m"
        else
#line 760 "llds_out_file.m"
          {
#line 760 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__ProcLayout_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 760 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__ProcLayouts_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 760 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__RttiProcLabel_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__ProcLayout_7, (MR_Integer) 0)));
#line 760 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__MaybeMore_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__ProcLayout_7, (MR_Integer) 2)));
#line 761 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__ProcLayout_7, (MR_Integer) 1)));
#line 762 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_22_22;
#line 762 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_14_14;
#line 762 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_15_15;
#line 762 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_16_16;
#line 762 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file___ProcStatic_13;

#line 762 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__MaybeMore_12)) == (MR_mktag((MR_Integer) 1)));
#line 762 "llds_out_file.m"
            if (ll_backend__llds_out__llds_out_file__succeeded)
#line 762 "llds_out_file.m"
              {
#line 762 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__MaybeMore_12, (MR_Integer) 0)));
#line 762 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__MaybeMore_12, (MR_Integer) 1)));
#line 762 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__MaybeMore_12, (MR_Integer) 2)));
#line 762 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__MaybeMore_12, (MR_Integer) 3)));
#line 762 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__V_22_22)) == (MR_mktag((MR_Integer) 1)));
#line 762 "llds_out_file.m"
                if (ll_backend__llds_out__llds_out_file__succeeded)
#line 762 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file___ProcStatic_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__V_22_22, (MR_Integer) 0)));
#line 762 "llds_out_file.m"
              }
#line 779 "llds_out_file.m"
            if (ll_backend__llds_out__llds_out_file__succeeded)
#line 763 "llds_out_file.m"
              {
#line 763 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__ProcLabel_17;
#line 763 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__UserOrUCI_18;
#line 763 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__Kind_19;
#line 763 "llds_out_file.m"
                MR_Word ll_backend__llds_out__llds_out_file__V_27_27;

#line 763 "llds_out_file.m"
                {
#line 763 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__ProcLabel_17 = backend_libs__proc_label__make_proc_label_from_rtti_1_f_0(ll_backend__llds_out__llds_out_file__RttiProcLabel_10);
                }
#line 764 "llds_out_file.m"
                {
#line 764 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__UserOrUCI_18 = ll_backend__layout_out__proc_label_user_or_uci_1_f_0(ll_backend__llds_out__llds_out_file__ProcLabel_17);
                }
#line 765 "llds_out_file.m"
                {
#line 765 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__Kind_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 765 "llds_out_file.m"
                  MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__Kind_19, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__UserOrUCI_18));
#line 765 "llds_out_file.m"
                }
#line 771 "llds_out_file.m"
#line 771 "llds_out_file.m"
                switch (ll_backend__llds_out__llds_out_file__UserOrUCI_18) {
#line 771 "llds_out_file.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 771 "llds_out_file.m"
                  case (MR_Integer) 1:
#line 772 "llds_out_file.m"
                    {
#line 773 "llds_out_file.m"
                      {
#line 773 "llds_out_file.m"
                        mercury__io__write_string_3_p_0((MR_String) "\tMR_write_out_uci_proc_static(deep_fp, procrep_fp,\n\t\t&");
                      }
#line 772 "llds_out_file.m"
                    }
#line 771 "llds_out_file.m"
                    break;
#line 771 "llds_out_file.m"
                  case (MR_Integer) 0:
#line 767 "llds_out_file.m"
                    {
#line 768 "llds_out_file.m"
                      {
#line 768 "llds_out_file.m"
                        mercury__io__write_string_3_p_0((MR_String) "\tMR_write_out_user_proc_static(deep_fp, procrep_fp,\n\t\t&");
                      }
#line 767 "llds_out_file.m"
                    }
#line 771 "llds_out_file.m"
                    break;
#line 771 "llds_out_file.m"
                }
#line 777 "llds_out_file.m"
                {
#line 777 "llds_out_file.m"
                  ll_backend__llds_out__llds_out_file__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 777 "llds_out_file.m"
                  MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_27_27, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__RttiProcLabel_10));
#line 777 "llds_out_file.m"
                  MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_27_27, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Kind_19));
#line 777 "llds_out_file.m"
                }
#line 777 "llds_out_file.m"
                {
#line 777 "llds_out_file.m"
                  ll_backend__layout_out__output_layout_name_3_p_0(ll_backend__llds_out__llds_out_file__V_27_27);
                }
#line 778 "llds_out_file.m"
                {
#line 778 "llds_out_file.m"
                  mercury__io__write_string_3_p_0((MR_String) ");\n");
                }
#line 763 "llds_out_file.m"
              }
#line 779 "llds_out_file.m"
            else
#line 779 "llds_out_file.m"
              {
#line 779 "llds_out_file.m"
              }
#line 782 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 782 "llds_out_file.m"
            {
#line 782 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__ProcLayouts_8;

#line 782 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 782 "llds_out_file.m"
            }
#line 782 "llds_out_file.m"
            continue;
#line 760 "llds_out_file.m"
          }
#line 759 "llds_out_file.m"
      }
#line 759 "llds_out_file.m"
      break;
#line 759 "llds_out_file.m"
    }
#line 756 "llds_out_file.m"
}

#line 743 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_debugger_init_list_3_p_0(
#line 743 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1)
#line 743 "llds_out_file.m"
{
#line 746 "llds_out_file.m"
  while (MR_TRUE)
#line 746 "llds_out_file.m"
    {
#line 746 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 746 "llds_out_file.m"
      {
#line 746 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 746 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 746 "llds_out_file.m"
          {
#line 746 "llds_out_file.m"
          }
#line 746 "llds_out_file.m"
        else
#line 747 "llds_out_file.m"
          {
#line 747 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Data_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 747 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Datas_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 747 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__ModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Data_7, (MR_Integer) 0)));
#line 747 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_23_23;
#line 748 "llds_out_file.m"
            MR_Integer ll_backend__llds_out__llds_out_file__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Data_7, (MR_Integer) 1)));
#line 748 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Data_7, (MR_Integer) 2)));
#line 748 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Data_7, (MR_Integer) 3)));
#line 748 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Data_7, (MR_Integer) 4)));

#line 749 "llds_out_file.m"
            {
#line 749 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "\tif (MR_register_module_layout != NULL) {\n");
            }
#line 750 "llds_out_file.m"
            {
#line 750 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "\t\t(*MR_register_module_layout)(");
            }
#line 751 "llds_out_file.m"
            {
#line 751 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "\n\t\t\t&");
            }
#line 752 "llds_out_file.m"
            {
#line 752 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__V_23_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 752 "llds_out_file.m"
              MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__V_23_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
#line 752 "llds_out_file.m"
              MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__V_23_23, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__ModuleName_10));
#line 752 "llds_out_file.m"
            }
#line 752 "llds_out_file.m"
            {
#line 752 "llds_out_file.m"
              ll_backend__layout_out__output_layout_name_3_p_0(ll_backend__llds_out__llds_out_file__V_23_23);
            }
#line 753 "llds_out_file.m"
            {
#line 753 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) ");\n\t}\n");
            }
#line 754 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 754 "llds_out_file.m"
            {
#line 754 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__Datas_8;

#line 754 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 754 "llds_out_file.m"
            }
#line 754 "llds_out_file.m"
            continue;
#line 747 "llds_out_file.m"
          }
#line 746 "llds_out_file.m"
      }
#line 746 "llds_out_file.m"
      break;
#line 746 "llds_out_file.m"
    }
#line 743 "llds_out_file.m"
}

#line 731 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_type_tables_init_list_3_p_0(
#line 731 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1)
#line 731 "llds_out_file.m"
{
#line 734 "llds_out_file.m"
  while (MR_TRUE)
#line 734 "llds_out_file.m"
    {
#line 734 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 734 "llds_out_file.m"
      {
#line 734 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 734 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 734 "llds_out_file.m"
          {
#line 734 "llds_out_file.m"
          }
#line 734 "llds_out_file.m"
        else
#line 735 "llds_out_file.m"
          {
#line 735 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Data_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 735 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Datas_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));

#line 736 "llds_out_file.m"
            {
#line 736 "llds_out_file.m"
              ll_backend__rtti_out__register_rtti_data_if_nec_3_p_0(ll_backend__llds_out__llds_out_file__Data_7);
            }
#line 737 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 737 "llds_out_file.m"
            {
#line 737 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__Datas_8;

#line 737 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 737 "llds_out_file.m"
            }
#line 737 "llds_out_file.m"
            continue;
#line 735 "llds_out_file.m"
          }
#line 734 "llds_out_file.m"
      }
#line 734 "llds_out_file.m"
      break;
#line 734 "llds_out_file.m"
    }
#line 731 "llds_out_file.m"
}

#line 709 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_alloc_sites_init_4_p_0(
#line 709 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_5,
#line 709 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__AllocSites_6)
#line 709 "llds_out_file.m"
{
#line 714 "llds_out_file.m"
  {
#line 714 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 714 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__AllocSites_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 714 "llds_out_file.m"
      {
#line 714 "llds_out_file.m"
      }
#line 714 "llds_out_file.m"
    else
#line 716 "llds_out_file.m"
      {
#line 716 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__MangledModuleName_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 1)));
#line 716 "llds_out_file.m"
        MR_Integer ll_backend__llds_out__llds_out_file__NumAllocSites_11;
#line 717 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 0)));
#line 717 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 2)));
#line 717 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 3)));
#line 717 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 4)));
#line 717 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 5)));
#line 717 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 6)));
#line 717 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_34_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 717 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 717 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 717 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 717 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 717 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 717 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 717 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 717 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 717 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 717 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 717 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 717 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 717 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 717 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_5, (MR_Integer) 8)));

#line 718 "llds_out_file.m"
        {
#line 718 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__NumAllocSites_11 = mercury__list__length_1_f_0((MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_alloc_site_info_0, ll_backend__llds_out__llds_out_file__AllocSites_6);
        }
#line 719 "llds_out_file.m"
        {
#line 719 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "#ifdef MR_MPROF_PROFILE_MEMORY_ATTRIBUTION\n");
        }
#line 720 "llds_out_file.m"
        {
#line 720 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "\tMR_register_alloc_sites(");
        }
#line 721 "llds_out_file.m"
        {
#line 721 "llds_out_file.m"
          ll_backend__layout_out__output_layout_array_name_5_p_0((MR_Integer) 0, ll_backend__llds_out__llds_out_file__MangledModuleName_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17)));
        }
#line 723 "llds_out_file.m"
        {
#line 723 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) ", ");
        }
#line 724 "llds_out_file.m"
        {
#line 724 "llds_out_file.m"
          mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_file__NumAllocSites_11);
        }
#line 725 "llds_out_file.m"
        {
#line 725 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) ");\n");
        }
#line 726 "llds_out_file.m"
        {
#line 726 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "#endif\n");
#line 726 "llds_out_file.m"
          return;
        }
#line 716 "llds_out_file.m"
      }
#line 714 "llds_out_file.m"
  }
#line 709 "llds_out_file.m"
}

#line 700 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_data_init_list_3_p_0(
#line 700 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1)
#line 700 "llds_out_file.m"
{
#line 702 "llds_out_file.m"
  while (MR_TRUE)
#line 702 "llds_out_file.m"
    {
#line 702 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 702 "llds_out_file.m"
      {
#line 702 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 702 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 702 "llds_out_file.m"
          {
#line 702 "llds_out_file.m"
          }
#line 702 "llds_out_file.m"
        else
#line 703 "llds_out_file.m"
          {
#line 703 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Data_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 703 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Datas_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));

#line 704 "llds_out_file.m"
            {
#line 704 "llds_out_file.m"
              ll_backend__rtti_out__init_rtti_data_if_nec_3_p_0(ll_backend__llds_out__llds_out_file__Data_7);
            }
#line 705 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 705 "llds_out_file.m"
            {
#line 705 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__Datas_8;

#line 705 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 705 "llds_out_file.m"
            }
#line 705 "llds_out_file.m"
            continue;
#line 703 "llds_out_file.m"
          }
#line 702 "llds_out_file.m"
      }
#line 702 "llds_out_file.m"
      break;
#line 702 "llds_out_file.m"
    }
#line 700 "llds_out_file.m"
}

#line 674 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_init_bunch_calls_6_p_0(
#line 674 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_1,
#line 674 "llds_out_file.m"
  MR_String ll_backend__llds_out__llds_out_file__InitStatus_2,
#line 674 "llds_out_file.m"
  MR_Integer ll_backend__llds_out__llds_out_file__Seq_3,
#line 674 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__4_4)
#line 674 "llds_out_file.m"
{
#line 677 "llds_out_file.m"
  while (MR_TRUE)
#line 677 "llds_out_file.m"
    {
#line 677 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 677 "llds_out_file.m"
      {
#line 677 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 677 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 677 "llds_out_file.m"
          {
#line 677 "llds_out_file.m"
          }
#line 677 "llds_out_file.m"
        else
#line 678 "llds_out_file.m"
          {
#line 678 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Bunches_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__4_4, (MR_Integer) 1)));
#line 678 "llds_out_file.m"
            MR_Integer ll_backend__llds_out__llds_out_file__NextSeq_19;
#line 678 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__MangledModuleName_35;
#line 678 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__4_4, (MR_Integer) 0)));
#line 690 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_45_45;
#line 690 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__V_46_46;
#line 690 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_47_47;
#line 690 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_48_48;
#line 690 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_49_49;
#line 690 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_50_50;
#line 690 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_51_51;
#line 690 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_52_52;
#line 690 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_53_53;
#line 690 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_54_54;
#line 690 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_55_55;
#line 690 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_56_56;
#line 690 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_57_57;
#line 690 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_58_58;
#line 690 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_59_59;
#line 690 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_60_60;
#line 690 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_61_61;
#line 690 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_62_62;
#line 690 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_63_63;
#line 690 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_64_64;
#line 690 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_65_65;

#line 679 "llds_out_file.m"
            {
#line 679 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "\t");
            }
#line 689 "llds_out_file.m"
            {
#line 689 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "mercury__");
            }
#line 690 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 0)));
#line 690 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__MangledModuleName_35 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 1)));
#line 690 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_46_46 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 2)));
#line 690 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 3)));
#line 690 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 4)));
#line 690 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 5)));
#line 690 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 6)));
#line 690 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_51_51 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 690 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 690 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 690 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 690 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 690 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 690 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 690 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 690 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 690 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 690 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 690 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_62_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 690 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 690 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 690 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 8)));
#line 691 "llds_out_file.m"
            {
#line 691 "llds_out_file.m"
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__MangledModuleName_35);
            }
#line 692 "llds_out_file.m"
            {
#line 692 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "_");
            }
#line 693 "llds_out_file.m"
            {
#line 693 "llds_out_file.m"
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__InitStatus_2);
            }
#line 694 "llds_out_file.m"
            {
#line 694 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "_bunch_");
            }
#line 695 "llds_out_file.m"
            {
#line 695 "llds_out_file.m"
              mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_file__Seq_3);
            }
#line 681 "llds_out_file.m"
            {
#line 681 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "();\n");
            }
#line 682 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__NextSeq_19 = (ll_backend__llds_out__llds_out_file__Seq_3 + (MR_Integer) 1);
#line 683 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 683 "llds_out_file.m"
            {
#line 683 "llds_out_file.m"
              MR_Integer ll_backend__llds_out__llds_out_file__Seq__tmp_copy_3 = ll_backend__llds_out__llds_out_file__NextSeq_19;
#line 683 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__4__tmp_copy_4 = ll_backend__llds_out__llds_out_file__Bunches_17;

#line 683 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__4_4 = ll_backend__llds_out__llds_out_file__HeadVar__4__tmp_copy_4;
#line 683 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__Seq_3 = ll_backend__llds_out__llds_out_file__Seq__tmp_copy_3;
#line 683 "llds_out_file.m"
            }
#line 683 "llds_out_file.m"
            continue;
#line 678 "llds_out_file.m"
          }
#line 677 "llds_out_file.m"
      }
#line 677 "llds_out_file.m"
      break;
#line 677 "llds_out_file.m"
    }
#line 674 "llds_out_file.m"
}

#line 663 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_init_bunch_def_3_p_0(
#line 663 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1)
#line 663 "llds_out_file.m"
{
#line 666 "llds_out_file.m"
  while (MR_TRUE)
#line 666 "llds_out_file.m"
    {
#line 666 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 666 "llds_out_file.m"
      {
#line 666 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 666 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 666 "llds_out_file.m"
          {
#line 666 "llds_out_file.m"
          }
#line 666 "llds_out_file.m"
        else
#line 667 "llds_out_file.m"
          {
#line 667 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__AnnotatedModule_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 667 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__AnnotatedModules_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 667 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__C_ModuleName_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__AnnotatedModule_7, (MR_Integer) 0)));
#line 668 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__AnnotatedModule_7, (MR_Integer) 1)));
#line 668 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__AnnotatedModule_7, (MR_Integer) 2)));
#line 668 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__AnnotatedModule_7, (MR_Integer) 3)));

#line 669 "llds_out_file.m"
            {
#line 669 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "\t");
            }
#line 670 "llds_out_file.m"
            {
#line 670 "llds_out_file.m"
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__C_ModuleName_10);
            }
#line 671 "llds_out_file.m"
            {
#line 671 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "();\n");
            }
#line 672 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 672 "llds_out_file.m"
            {
#line 672 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__AnnotatedModules_8;

#line 672 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 672 "llds_out_file.m"
            }
#line 672 "llds_out_file.m"
            continue;
#line 667 "llds_out_file.m"
          }
#line 666 "llds_out_file.m"
      }
#line 666 "llds_out_file.m"
      break;
#line 666 "llds_out_file.m"
    }
#line 663 "llds_out_file.m"
}

#line 649 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_init_bunch_defs_6_p_0(
#line 649 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_1,
#line 649 "llds_out_file.m"
  MR_String ll_backend__llds_out__llds_out_file__InitStatus_2,
#line 649 "llds_out_file.m"
  MR_Integer ll_backend__llds_out__llds_out_file__Seq_3,
#line 649 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__4_4)
#line 649 "llds_out_file.m"
{
#line 652 "llds_out_file.m"
  while (MR_TRUE)
#line 652 "llds_out_file.m"
    {
#line 652 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 652 "llds_out_file.m"
      {
#line 652 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 652 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 652 "llds_out_file.m"
          {
#line 652 "llds_out_file.m"
          }
#line 652 "llds_out_file.m"
        else
#line 653 "llds_out_file.m"
          {
#line 653 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Bunch_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__4_4, (MR_Integer) 0)));
#line 653 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Bunches_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__4_4, (MR_Integer) 1)));
#line 653 "llds_out_file.m"
            MR_Integer ll_backend__llds_out__llds_out_file__NextSeq_19;
#line 653 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__MangledModuleName_40;
#line 690 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_50_50;
#line 690 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__V_51_51;
#line 690 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_52_52;
#line 690 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_53_53;
#line 690 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_54_54;
#line 690 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_55_55;
#line 690 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_56_56;
#line 690 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_57_57;
#line 690 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_58_58;
#line 690 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_59_59;
#line 690 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_60_60;
#line 690 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_61_61;
#line 690 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_62_62;
#line 690 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_63_63;
#line 690 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_64_64;
#line 690 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_65_65;
#line 690 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_66_66;
#line 690 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_67_67;
#line 690 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_68_68;
#line 690 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_69_69;
#line 690 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_70_70;

#line 654 "llds_out_file.m"
            {
#line 654 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "static void ");
            }
#line 689 "llds_out_file.m"
            {
#line 689 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "mercury__");
            }
#line 690 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 0)));
#line 690 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__MangledModuleName_40 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 1)));
#line 690 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 2)));
#line 690 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 3)));
#line 690 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 4)));
#line 690 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 5)));
#line 690 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 6)));
#line 690 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_56_56 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 690 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 690 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 690 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 690 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 690 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 690 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_62_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 690 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 690 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 690 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 690 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 690 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_67_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 690 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_68_68 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 690 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_69_69 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 690 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_1, (MR_Integer) 8)));
#line 691 "llds_out_file.m"
            {
#line 691 "llds_out_file.m"
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__MangledModuleName_40);
            }
#line 692 "llds_out_file.m"
            {
#line 692 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "_");
            }
#line 693 "llds_out_file.m"
            {
#line 693 "llds_out_file.m"
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__InitStatus_2);
            }
#line 694 "llds_out_file.m"
            {
#line 694 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "_bunch_");
            }
#line 695 "llds_out_file.m"
            {
#line 695 "llds_out_file.m"
              mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_file__Seq_3);
            }
#line 656 "llds_out_file.m"
            {
#line 656 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "(void)\n");
            }
#line 657 "llds_out_file.m"
            {
#line 657 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "{\n");
            }
#line 658 "llds_out_file.m"
            {
#line 658 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__output_init_bunch_def_3_p_0(ll_backend__llds_out__llds_out_file__Bunch_16);
            }
#line 659 "llds_out_file.m"
            {
#line 659 "llds_out_file.m"
              mercury__io__write_string_3_p_0((MR_String) "}\n\n");
            }
#line 660 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__NextSeq_19 = (ll_backend__llds_out__llds_out_file__Seq_3 + (MR_Integer) 1);
#line 661 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 661 "llds_out_file.m"
            {
#line 661 "llds_out_file.m"
              MR_Integer ll_backend__llds_out__llds_out_file__Seq__tmp_copy_3 = ll_backend__llds_out__llds_out_file__NextSeq_19;
#line 661 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__4__tmp_copy_4 = ll_backend__llds_out__llds_out_file__Bunches_17;

#line 661 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__4_4 = ll_backend__llds_out__llds_out_file__HeadVar__4__tmp_copy_4;
#line 661 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__Seq_3 = ll_backend__llds_out__llds_out_file__Seq__tmp_copy_3;
#line 661 "llds_out_file.m"
            }
#line 661 "llds_out_file.m"
            continue;
#line 653 "llds_out_file.m"
          }
#line 652 "llds_out_file.m"
      }
#line 652 "llds_out_file.m"
      break;
#line 652 "llds_out_file.m"
    }
#line 649 "llds_out_file.m"
}

#line 641 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__entry_label_has_layout_2_p_0(
#line 641 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__EntryLabelToLayoutMap_3,
#line 641 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Label_4)
#line 641 "llds_out_file.m"
{
#line 645 "llds_out_file.m"
  {
#line 645 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 645 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_5_5;
#line 645 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv0_V_5_5;

#line 645 "llds_out_file.m"
    {
#line 645 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0, ll_backend__llds_out__llds_out_file__EntryLabelToLayoutMap_3, ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_4)), &ll_backend__llds_out__llds_out_file__conv0_V_5_5);
    }
#line 645 "llds_out_file.m"
    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 645 "llds_out_file.m"
      {
#line 645 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_5_5 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv0_V_5_5);
#line 645 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__succeeded = MR_TRUE;
#line 645 "llds_out_file.m"
      }
#line 645 "llds_out_file.m"
    return ll_backend__llds_out__llds_out_file__succeeded;
#line 645 "llds_out_file.m"
  }
#line 641 "llds_out_file.m"
}

#line 635 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__internal_label_has_layout_2_p_0(
#line 635 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__InternalLabelToLayoutMap_3,
#line 635 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Label_4)
#line 635 "llds_out_file.m"
{
#line 639 "llds_out_file.m"
  {
#line 639 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 639 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_5_5;
#line 639 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv0_V_5_5;

#line 639 "llds_out_file.m"
    {
#line 639 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0, ll_backend__llds_out__llds_out_file__InternalLabelToLayoutMap_3, ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_4)), &ll_backend__llds_out__llds_out_file__conv0_V_5_5);
    }
#line 639 "llds_out_file.m"
    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 639 "llds_out_file.m"
      {
#line 639 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_5_5 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv0_V_5_5);
#line 639 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__succeeded = MR_TRUE;
#line 639 "llds_out_file.m"
      }
#line 639 "llds_out_file.m"
    return ll_backend__llds_out__llds_out_file__succeeded;
#line 639 "llds_out_file.m"
  }
#line 635 "llds_out_file.m"
}

#line 631 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__module_defines_label_with_layout_2_p_0_2(
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
      return ll_backend__llds_out__llds_out_file__succeeded = ll_backend__llds_out__llds_out_file__entry_label_has_layout_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
    }
#line 631 "llds_out_file.m"
    return ll_backend__llds_out__llds_out_file__succeeded;
#line 631 "llds_out_file.m"
  }
#line 631 "llds_out_file.m"
}

#line 626 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__module_defines_label_with_layout_2_p_0_1(
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
      return ll_backend__llds_out__llds_out_file__succeeded = ll_backend__llds_out__llds_out_file__internal_label_has_layout_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
    }
#line 626 "llds_out_file.m"
    return ll_backend__llds_out__llds_out_file__succeeded;
#line 626 "llds_out_file.m"
  }
#line 626 "llds_out_file.m"
}

#line 615 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__module_defines_label_with_layout_2_p_0(
#line 615 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_3,
#line 615 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__AnnotatedModule_4)
#line 615 "llds_out_file.m"
{
#line 618 "llds_out_file.m"
  {
#line 618 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 618 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__EntryLabels_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__AnnotatedModule_4, (MR_Integer) 2)));
#line 618 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__InternalLabels_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__AnnotatedModule_4, (MR_Integer) 3)));
#line 618 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 4)));
#line 618 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 3)));
#line 619 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__AnnotatedModule_4, (MR_Integer) 0)));
#line 619 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__AnnotatedModule_4, (MR_Integer) 1)));
#line 624 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 8)));
#line 624 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 624 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_67_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 624 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_68_68 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 624 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_69_69 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 624 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_70_70 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 624 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 624 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 624 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 624 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 624 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_75_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 624 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_76_76 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 624 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_77_77 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 624 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_78_78 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 624 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_79_79 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 624 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 6)));
#line 624 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 5)));
#line 624 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_84_84 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 2)));
#line 624 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_85_85 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 1)));
#line 624 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_3, (MR_Integer) 0)));

#line 624 "llds_out_file.m"
    {
#line 624 "llds_out_file.m"
      MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_60_60;
#line 624 "llds_out_file.m"
      MR_Word ll_backend__llds_out__llds_out_file__V_14_14;
#line 626 "llds_out_file.m"
      MR_Word ll_backend__llds_out__llds_out_file__V_10_10;
#line 626 "llds_out_file.m"
      MR_Box ll_backend__llds_out__llds_out_file__conv0_V_10_10;

#line 625 "llds_out_file.m"
      {
#line 625 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0, ll_backend__llds_out__llds_out_file__V_83_83);
      }
#line 625 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__succeeded = !(ll_backend__llds_out__llds_out_file__succeeded);
#line 624 "llds_out_file.m"
      if (ll_backend__llds_out__llds_out_file__succeeded)
#line 624 "llds_out_file.m"
        {
#line 10484 "ll_backend.llds_out.llds_out_file.c"
          ll_backend__llds_out__llds_out_file__TypeCtorInfo_60_60 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 626 "llds_out_file.m"
          {
#line 626 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 626 "llds_out_file.m"
            MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_14_14, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_8[2]));
#line 626 "llds_out_file.m"
            MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_14_14, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__module_defines_label_with_layout_2_p_0_1));
#line 626 "llds_out_file.m"
            MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 626 "llds_out_file.m"
            MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_14_14, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__V_83_83));
#line 626 "llds_out_file.m"
          }
#line 626 "llds_out_file.m"
          {
#line 626 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__succeeded = mercury__list__find_first_match_3_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_60_60, ll_backend__llds_out__llds_out_file__V_14_14, ll_backend__llds_out__llds_out_file__InternalLabels_8, &ll_backend__llds_out__llds_out_file__conv0_V_10_10);
          }
#line 626 "llds_out_file.m"
          if (ll_backend__llds_out__llds_out_file__succeeded)
#line 626 "llds_out_file.m"
            {
#line 626 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__V_10_10 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv0_V_10_10);
#line 626 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__succeeded = MR_TRUE;
#line 626 "llds_out_file.m"
            }
#line 624 "llds_out_file.m"
        }
#line 624 "llds_out_file.m"
    }
#line 628 "llds_out_file.m"
    if (!(ll_backend__llds_out__llds_out_file__succeeded))
#line 629 "llds_out_file.m"
      {
#line 629 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_64_64;
#line 629 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_13_13;
#line 631 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_12_12;
#line 631 "llds_out_file.m"
        MR_Box ll_backend__llds_out__llds_out_file__conv1_V_12_12;

#line 630 "llds_out_file.m"
        {
#line 630 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0, ll_backend__llds_out__llds_out_file__V_82_82);
        }
#line 630 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__succeeded = !(ll_backend__llds_out__llds_out_file__succeeded);
#line 629 "llds_out_file.m"
        if (ll_backend__llds_out__llds_out_file__succeeded)
#line 629 "llds_out_file.m"
          {
#line 10543 "ll_backend.llds_out.llds_out_file.c"
            ll_backend__llds_out__llds_out_file__TypeCtorInfo_64_64 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 631 "llds_out_file.m"
            {
#line 631 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 631 "llds_out_file.m"
              MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_13_13, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_8[3]));
#line 631 "llds_out_file.m"
              MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_13_13, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__module_defines_label_with_layout_2_p_0_2));
#line 631 "llds_out_file.m"
              MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 631 "llds_out_file.m"
              MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_13_13, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__V_82_82));
#line 631 "llds_out_file.m"
            }
#line 631 "llds_out_file.m"
            {
#line 631 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__succeeded = mercury__list__find_first_match_3_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_64_64, ll_backend__llds_out__llds_out_file__V_13_13, ll_backend__llds_out__llds_out_file__EntryLabels_7, &ll_backend__llds_out__llds_out_file__conv1_V_12_12);
            }
#line 631 "llds_out_file.m"
            if (ll_backend__llds_out__llds_out_file__succeeded)
#line 631 "llds_out_file.m"
              {
#line 631 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__V_12_12 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv1_V_12_12);
#line 631 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__succeeded = MR_TRUE;
#line 631 "llds_out_file.m"
              }
#line 629 "llds_out_file.m"
          }
#line 629 "llds_out_file.m"
      }
#line 618 "llds_out_file.m"
    return ll_backend__llds_out__llds_out_file__succeeded;
#line 618 "llds_out_file.m"
  }
#line 615 "llds_out_file.m"
}

#line 410 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_module_init_list_15_p_0_1(
#line 410 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 410 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1)
#line 410 "llds_out_file.m"
{
#line 410 "llds_out_file.m"
  {
#line 410 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 410 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 410 "llds_out_file.m"
    {
#line 410 "llds_out_file.m"
      return ll_backend__llds_out__llds_out_file__succeeded = ll_backend__llds_out__llds_out_file__module_defines_label_with_layout_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
    }
#line 410 "llds_out_file.m"
    return ll_backend__llds_out__llds_out_file__succeeded;
#line 410 "llds_out_file.m"
  }
#line 410 "llds_out_file.m"
}

#line 400 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_module_init_list_15_p_0(
#line 400 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_16,
#line 400 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ModuleName_17,
#line 400 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__AnnotatedModules_18,
#line 400 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__RttiDatas_19,
#line 400 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ProcLayoutDatas_20,
#line 400 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ModuleLayoutDatas_21,
#line 400 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__ComplexityProcs_22,
#line 400 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__TSStringTable_23,
#line 400 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__AllocSites_24,
#line 400 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__InitPredNames_25,
#line 400 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__FinalPredNames_26,
#line 400 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_52,
#line 400 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_53)
#line 400 "llds_out_file.m"
{
#line 409 "llds_out_file.m"
  {
#line 409 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 409 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_303_303;
#line 409 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__MustInit_29;
#line 409 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__AlwaysInitAnnotatedModules_31;
#line 409 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__MaybeInitAnnotatedModules_32;
#line 409 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__AlwaysInitAnnotatedModuleBunches_33;
#line 409 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__MaybeInitAnnotatedModuleBunches_34;
#line 409 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ModuleLayoutName_43;

#line 410 "llds_out_file.m"
    {
#line 410 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__MustInit_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 410 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__MustInit_29, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_8[1]));
#line 410 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__MustInit_29, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_c_module_init_list_15_p_0_1));
#line 410 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__MustInit_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 410 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__MustInit_29, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_16));
#line 410 "llds_out_file.m"
    }
#line 10677 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_303_303 = (MR_Word) &ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__type_ctor_info_annotated_c_module_0;
#line 413 "llds_out_file.m"
    {
#line 413 "llds_out_file.m"
      mercury__list__filter_4_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_303_303, ll_backend__llds_out__llds_out_file__MustInit_29, ll_backend__llds_out__llds_out_file__AnnotatedModules_18, &ll_backend__llds_out__llds_out_file__AlwaysInitAnnotatedModules_31, &ll_backend__llds_out__llds_out_file__MaybeInitAnnotatedModules_32);
    }
#line 415 "llds_out_file.m"
    {
#line 415 "llds_out_file.m"
      mercury__list__chunk_3_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_303_303, ll_backend__llds_out__llds_out_file__AlwaysInitAnnotatedModules_31, (MR_Integer) 40, &ll_backend__llds_out__llds_out_file__AlwaysInitAnnotatedModuleBunches_33);
    }
#line 417 "llds_out_file.m"
    {
#line 417 "llds_out_file.m"
      mercury__list__chunk_3_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_303_303, ll_backend__llds_out__llds_out_file__MaybeInitAnnotatedModules_32, (MR_Integer) 40, &ll_backend__llds_out__llds_out_file__MaybeInitAnnotatedModuleBunches_34);
    }
#line 420 "llds_out_file.m"
    {
#line 420 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_init_bunch_defs_6_p_0(ll_backend__llds_out__llds_out_file__Info_16, (MR_String) "always", (MR_Integer) 0, ll_backend__llds_out__llds_out_file__AlwaysInitAnnotatedModuleBunches_33);
    }
#line 424 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__MaybeInitAnnotatedModuleBunches_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 423 "llds_out_file.m"
      {
#line 423 "llds_out_file.m"
      }
#line 424 "llds_out_file.m"
    else
#line 425 "llds_out_file.m"
      {
#line 426 "llds_out_file.m"
        {
#line 426 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__output_init_bunch_defs_6_p_0(ll_backend__llds_out__llds_out_file__Info_16, (MR_String) "maybe", (MR_Integer) 0, ll_backend__llds_out__llds_out_file__MaybeInitAnnotatedModuleBunches_34);
        }
#line 425 "llds_out_file.m"
      }
#line 430 "llds_out_file.m"
    {
#line 430 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "/* suppress gcc -Wmissing-decls warnings */\n");
    }
#line 431 "llds_out_file.m"
    {
#line 431 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "void ");
    }
#line 432 "llds_out_file.m"
    {
#line 432 "llds_out_file.m"
      backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
    }
#line 433 "llds_out_file.m"
    {
#line 433 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "init(void);\n");
    }
#line 435 "llds_out_file.m"
    {
#line 435 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "void ");
    }
#line 436 "llds_out_file.m"
    {
#line 436 "llds_out_file.m"
      backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
    }
#line 437 "llds_out_file.m"
    {
#line 437 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "init_type_tables(void);\n");
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
      mercury__io__write_string_3_p_0((MR_String) "init_debugger(void);\n");
    }
#line 442 "llds_out_file.m"
    {
#line 442 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#ifdef MR_DEEP_PROFILING\n");
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
      mercury__io__write_string_3_p_0((MR_String) "write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);\n");
    }
#line 447 "llds_out_file.m"
    {
#line 447 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#endif\n");
    }
#line 449 "llds_out_file.m"
    {
#line 449 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#ifdef MR_RECORD_TERM_SIZES\n");
    }
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
      mercury__io__write_string_3_p_0((MR_String) "init_complexity_procs(void);\n");
    }
#line 453 "llds_out_file.m"
    {
#line 453 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#endif\n");
    }
#line 455 "llds_out_file.m"
    {
#line 455 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#ifdef MR_THREADSCOPE\n");
    }
#line 456 "llds_out_file.m"
    {
#line 456 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "void ");
    }
#line 457 "llds_out_file.m"
    {
#line 457 "llds_out_file.m"
      backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
    }
#line 458 "llds_out_file.m"
    {
#line 458 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "init_threadscope_string_table(void);\n");
    }
#line 459 "llds_out_file.m"
    {
#line 459 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#endif\n");
    }
#line 463 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__InitPredNames_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 462 "llds_out_file.m"
      {
#line 462 "llds_out_file.m"
      }
#line 463 "llds_out_file.m"
    else
#line 464 "llds_out_file.m"
      {
#line 465 "llds_out_file.m"
        {
#line 465 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "void ");
        }
#line 466 "llds_out_file.m"
        {
#line 466 "llds_out_file.m"
          backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
        }
#line 467 "llds_out_file.m"
        {
#line 467 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "required_init(void);\n");
        }
#line 464 "llds_out_file.m"
      }
#line 472 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__FinalPredNames_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 471 "llds_out_file.m"
      {
#line 471 "llds_out_file.m"
      }
#line 472 "llds_out_file.m"
    else
#line 473 "llds_out_file.m"
      {
#line 474 "llds_out_file.m"
        {
#line 474 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "void ");
        }
#line 475 "llds_out_file.m"
        {
#line 475 "llds_out_file.m"
          backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
        }
#line 476 "llds_out_file.m"
        {
#line 476 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "required_final(void);\n");
        }
#line 473 "llds_out_file.m"
      }
#line 479 "llds_out_file.m"
    {
#line 479 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 481 "llds_out_file.m"
    {
#line 481 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "void ");
    }
#line 482 "llds_out_file.m"
    {
#line 482 "llds_out_file.m"
      backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
    }
#line 483 "llds_out_file.m"
    {
#line 483 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "init(void)\n");
    }
#line 484 "llds_out_file.m"
    {
#line 484 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "{\n");
    }
#line 485 "llds_out_file.m"
    {
#line 485 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\tstatic MR_bool done = MR_FALSE;\n");
    }
#line 486 "llds_out_file.m"
    {
#line 486 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\tif (done) {\n");
    }
#line 487 "llds_out_file.m"
    {
#line 487 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\treturn;\n");
    }
#line 488 "llds_out_file.m"
    {
#line 488 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\t}\n");
    }
#line 489 "llds_out_file.m"
    {
#line 489 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\tdone = MR_TRUE;\n");
    }
#line 491 "llds_out_file.m"
    {
#line 491 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_init_bunch_calls_6_p_0(ll_backend__llds_out__llds_out_file__Info_16, (MR_String) "always", (MR_Integer) 0, ll_backend__llds_out__llds_out_file__AlwaysInitAnnotatedModuleBunches_33);
    }
#line 495 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__MaybeInitAnnotatedModuleBunches_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 494 "llds_out_file.m"
      {
#line 494 "llds_out_file.m"
      }
#line 495 "llds_out_file.m"
    else
#line 496 "llds_out_file.m"
      {
#line 497 "llds_out_file.m"
        {
#line 497 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__output_init_bunch_calls_6_p_0(ll_backend__llds_out__llds_out_file__Info_16, (MR_String) "maybe", (MR_Integer) 0, ll_backend__llds_out__llds_out_file__MaybeInitAnnotatedModuleBunches_34);
        }
#line 496 "llds_out_file.m"
      }
#line 501 "llds_out_file.m"
    {
#line 501 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_c_data_init_list_3_p_0(ll_backend__llds_out__llds_out_file__RttiDatas_19);
    }
#line 502 "llds_out_file.m"
    {
#line 502 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_alloc_sites_init_4_p_0(ll_backend__llds_out__llds_out_file__Info_16, ll_backend__llds_out__llds_out_file__AllocSites_24);
    }
#line 508 "llds_out_file.m"
    {
#line 508 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\t");
    }
#line 509 "llds_out_file.m"
    {
#line 509 "llds_out_file.m"
      backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
    }
#line 510 "llds_out_file.m"
    {
#line 510 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "init_debugger();\n");
    }
#line 511 "llds_out_file.m"
    {
#line 511 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "}\n\n");
    }
#line 513 "llds_out_file.m"
    {
#line 513 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "void ");
    }
#line 514 "llds_out_file.m"
    {
#line 514 "llds_out_file.m"
      backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
    }
#line 515 "llds_out_file.m"
    {
#line 515 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "init_type_tables(void)\n");
    }
#line 516 "llds_out_file.m"
    {
#line 516 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "{\n");
    }
#line 517 "llds_out_file.m"
    {
#line 517 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\tstatic MR_bool done = MR_FALSE;\n");
    }
#line 518 "llds_out_file.m"
    {
#line 518 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\tif (done) {\n");
    }
#line 519 "llds_out_file.m"
    {
#line 519 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\treturn;\n");
    }
#line 520 "llds_out_file.m"
    {
#line 520 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\t}\n");
    }
#line 521 "llds_out_file.m"
    {
#line 521 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\tdone = MR_TRUE;\n");
    }
#line 522 "llds_out_file.m"
    {
#line 522 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_type_tables_init_list_3_p_0(ll_backend__llds_out__llds_out_file__RttiDatas_19);
    }
#line 523 "llds_out_file.m"
    {
#line 523 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "}\n\n");
    }
#line 525 "llds_out_file.m"
    {
#line 525 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 526 "llds_out_file.m"
    {
#line 526 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "void ");
    }
#line 527 "llds_out_file.m"
    {
#line 527 "llds_out_file.m"
      backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
    }
#line 528 "llds_out_file.m"
    {
#line 528 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "init_debugger(void)\n");
    }
#line 529 "llds_out_file.m"
    {
#line 529 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "{\n");
    }
#line 530 "llds_out_file.m"
    {
#line 530 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\tstatic MR_bool done = MR_FALSE;\n");
    }
#line 531 "llds_out_file.m"
    {
#line 531 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\tif (done) {\n");
    }
#line 532 "llds_out_file.m"
    {
#line 532 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\treturn;\n");
    }
#line 533 "llds_out_file.m"
    {
#line 533 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\t}\n");
    }
#line 534 "llds_out_file.m"
    {
#line 534 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\tdone = MR_TRUE;\n");
    }
#line 535 "llds_out_file.m"
    {
#line 535 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_debugger_init_list_3_p_0(ll_backend__llds_out__llds_out_file__ModuleLayoutDatas_21);
    }
#line 536 "llds_out_file.m"
    {
#line 536 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "}\n\n");
    }
#line 538 "llds_out_file.m"
    {
#line 538 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#ifdef MR_DEEP_PROFILING\n");
    }
#line 539 "llds_out_file.m"
    {
#line 539 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\nvoid ");
    }
#line 540 "llds_out_file.m"
    {
#line 540 "llds_out_file.m"
      backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
    }
#line 541 "llds_out_file.m"
    {
#line 541 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)\n");
    }
#line 543 "llds_out_file.m"
    {
#line 543 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "{\n");
    }
#line 544 "llds_out_file.m"
    {
#line 544 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\tMR_write_out_module_proc_reps_start(procrep_fp, &");
    }
#line 546 "llds_out_file.m"
    {
#line 546 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__ModuleLayoutName_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 546 "llds_out_file.m"
      MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__ModuleLayoutName_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
#line 546 "llds_out_file.m"
      MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__ModuleLayoutName_43, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__ModuleName_17));
#line 546 "llds_out_file.m"
    }
#line 547 "llds_out_file.m"
    {
#line 547 "llds_out_file.m"
      ll_backend__layout_out__output_layout_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleLayoutName_43);
    }
#line 548 "llds_out_file.m"
    {
#line 548 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) ");\n");
    }
#line 549 "llds_out_file.m"
    {
#line 549 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_write_proc_static_list_3_p_0(ll_backend__llds_out__llds_out_file__ProcLayoutDatas_20);
    }
#line 550 "llds_out_file.m"
    {
#line 550 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\tMR_write_out_module_proc_reps_end(procrep_fp);\n");
    }
#line 551 "llds_out_file.m"
    {
#line 551 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "}\n");
    }
#line 552 "llds_out_file.m"
    {
#line 552 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\n#endif\n\n");
    }
#line 554 "llds_out_file.m"
    {
#line 554 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#ifdef MR_RECORD_TERM_SIZES\n");
    }
#line 555 "llds_out_file.m"
    {
#line 555 "llds_out_file.m"
      ll_backend__llds_out__llds_out_global__output_complexity_arg_info_arrays_3_p_0(ll_backend__llds_out__llds_out_file__ComplexityProcs_22);
    }
#line 556 "llds_out_file.m"
    {
#line 556 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\nvoid ");
    }
#line 557 "llds_out_file.m"
    {
#line 557 "llds_out_file.m"
      backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
    }
#line 558 "llds_out_file.m"
    {
#line 558 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "init_complexity_procs(void)\n");
    }
#line 559 "llds_out_file.m"
    {
#line 559 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "{\n");
    }
#line 560 "llds_out_file.m"
    {
#line 560 "llds_out_file.m"
      ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_p_0(ll_backend__llds_out__llds_out_file__ComplexityProcs_22);
    }
#line 561 "llds_out_file.m"
    {
#line 561 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "}\n");
    }
#line 562 "llds_out_file.m"
    {
#line 562 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\n#endif\n\n");
    }
#line 564 "llds_out_file.m"
    {
#line 564 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#ifdef MR_THREADSCOPE\n");
    }
#line 565 "llds_out_file.m"
    {
#line 565 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\nvoid ");
    }
#line 566 "llds_out_file.m"
    {
#line 566 "llds_out_file.m"
      backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
    }
#line 567 "llds_out_file.m"
    {
#line 567 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "init_threadscope_string_table(void)\n");
    }
#line 568 "llds_out_file.m"
    {
#line 568 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "{\n");
    }
#line 571 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__TSStringTable_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 570 "llds_out_file.m"
      {
#line 570 "llds_out_file.m"
      }
#line 571 "llds_out_file.m"
    else
#line 572 "llds_out_file.m"
      {
#line 572 "llds_out_file.m"
        MR_Integer ll_backend__llds_out__llds_out_file__TSStringTableSize_46;
#line 572 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__MangledModuleName_47;
#line 572 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__V_308_308;
#line 576 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_282_282;
#line 576 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__V_283_283;
#line 576 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_284_284;
#line 576 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_285_285;
#line 576 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_286_286;
#line 576 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_287_287;
#line 576 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_288_288;
#line 576 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_289_289;
#line 576 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_290_290;
#line 576 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_291_291;
#line 576 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_292_292;
#line 576 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_293_293;
#line 576 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_294_294;
#line 576 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_295_295;
#line 576 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_296_296;
#line 576 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_297_297;
#line 576 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_298_298;
#line 576 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_299_299;
#line 576 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_300_300;
#line 576 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_301_301;
#line 576 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_302_302;

#line 573 "llds_out_file.m"
        {
#line 573 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__TSStringTableSize_46 = mercury__list__length_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ll_backend__llds_out__llds_out_file__TSStringTable_23);
        }
#line 574 "llds_out_file.m"
        {
#line 574 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "\tMR_threadscope_register_strings_array(\n");
        }
#line 575 "llds_out_file.m"
        {
#line 575 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "\t\t");
        }
#line 576 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_282_282 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 0)));
#line 576 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__MangledModuleName_47 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 1)));
#line 576 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_283_283 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 2)));
#line 576 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_284_284 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 3)));
#line 576 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_285_285 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 4)));
#line 576 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_286_286 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 5)));
#line 576 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_287_287 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 6)));
#line 576 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_288_288 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 576 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_289_289 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 576 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_290_290 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 576 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_291_291 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 576 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_292_292 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 576 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_293_293 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 576 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_294_294 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 576 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_295_295 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 576 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_296_296 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 576 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_297_297 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 576 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_298_298 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 576 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_299_299 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 576 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_300_300 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 576 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_301_301 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 576 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_302_302 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_16, (MR_Integer) 8)));
#line 577 "llds_out_file.m"
        {
#line 577 "llds_out_file.m"
          ll_backend__layout_out__output_layout_array_name_5_p_0((MR_Integer) 1, ll_backend__llds_out__llds_out_file__MangledModuleName_47, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)));
        }
#line 579 "llds_out_file.m"
        {
#line 579 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) ", ");
        }
#line 579 "llds_out_file.m"
        {
#line 579 "llds_out_file.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_9[0], ll_backend__llds_out__llds_out_file__TSStringTableSize_46, &ll_backend__llds_out__llds_out_file__V_308_308);
        }
#line 579 "llds_out_file.m"
        {
#line 579 "llds_out_file.m"
          mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_file__V_308_308);
        }
#line 579 "llds_out_file.m"
        {
#line 579 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) ");\n");
        }
#line 572 "llds_out_file.m"
      }
#line 581 "llds_out_file.m"
    {
#line 581 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "}\n");
    }
#line 582 "llds_out_file.m"
    {
#line 582 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\n#endif\n\n");
    }
#line 586 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__InitPredNames_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 585 "llds_out_file.m"
      {
#line 585 "llds_out_file.m"
      }
#line 586 "llds_out_file.m"
    else
#line 587 "llds_out_file.m"
      {
#line 588 "llds_out_file.m"
        {
#line 588 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "void ");
        }
#line 589 "llds_out_file.m"
        {
#line 589 "llds_out_file.m"
          backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
        }
#line 590 "llds_out_file.m"
        {
#line 590 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "required_init(void)\n");
        }
#line 591 "llds_out_file.m"
        {
#line 591 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "{\n");
        }
#line 592 "llds_out_file.m"
        {
#line 592 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__output_required_init_or_final_calls_3_p_0(ll_backend__llds_out__llds_out_file__InitPredNames_25);
        }
#line 593 "llds_out_file.m"
        {
#line 593 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "}\n");
        }
#line 594 "llds_out_file.m"
        {
#line 594 "llds_out_file.m"
          mercury__io__nl_2_p_0();
        }
#line 587 "llds_out_file.m"
      }
#line 599 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__FinalPredNames_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 598 "llds_out_file.m"
      {
#line 598 "llds_out_file.m"
      }
#line 599 "llds_out_file.m"
    else
#line 600 "llds_out_file.m"
      {
#line 601 "llds_out_file.m"
        {
#line 601 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "void ");
        }
#line 602 "llds_out_file.m"
        {
#line 602 "llds_out_file.m"
          backend_libs__name_mangle__output_init_name_3_p_0(ll_backend__llds_out__llds_out_file__ModuleName_17);
        }
#line 603 "llds_out_file.m"
        {
#line 603 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "required_final(void)\n");
        }
#line 604 "llds_out_file.m"
        {
#line 604 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "{\n");
        }
#line 605 "llds_out_file.m"
        {
#line 605 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__output_required_init_or_final_calls_3_p_0(ll_backend__llds_out__llds_out_file__FinalPredNames_26);
        }
#line 606 "llds_out_file.m"
        {
#line 606 "llds_out_file.m"
          mercury__io__write_string_3_p_0((MR_String) "}\n");
        }
#line 600 "llds_out_file.m"
      }
#line 609 "llds_out_file.m"
    {
#line 609 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "/* ensure everything is compiled with the same grade */\n");
    }
#line 612 "llds_out_file.m"
    {
#line 612 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "static const void *const MR_grade = &MR_GRADE_VAR;\n");
    }
#line 409 "llds_out_file.m"
    *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_53 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_52;
#line 409 "llds_out_file.m"
  }
#line 400 "llds_out_file.m"
}

#line 377 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__gather_labels_from_instrs_acc_5_p_0(
#line 377 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1_1,
#line 377 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_0_2,
#line 377 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_3,
#line 377 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_0_4,
#line 377 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_5)
#line 377 "llds_out_file.m"
{
#line 381 "llds_out_file.m"
  while (MR_TRUE)
#line 381 "llds_out_file.m"
    {
#line 381 "llds_out_file.m"
      /* tailcall optimized into a loop */
#line 381 "llds_out_file.m"
      {
#line 381 "llds_out_file.m"
        MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 381 "llds_out_file.m"
        if ((ll_backend__llds_out__llds_out_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 381 "llds_out_file.m"
          {
#line 381 "llds_out_file.m"
            *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_5 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_0_4;
#line 381 "llds_out_file.m"
            *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_3 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_0_2;
#line 381 "llds_out_file.m"
          }
#line 381 "llds_out_file.m"
        else
#line 383 "llds_out_file.m"
          {
#line 383 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Instr_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 0)));
#line 383 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Instrs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__1_1, (MR_Integer) 1)));
#line 383 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_27_27;
#line 383 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_28_28;
#line 392 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__Label_16;
#line 384 "llds_out_file.m"
            MR_Word ll_backend__llds_out__llds_out_file__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Instr_12, (MR_Integer) 0)));
#line 384 "llds_out_file.m"
            MR_String ll_backend__llds_out__llds_out_file__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Instr_12, (MR_Integer) 1)));

#line 384 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__V_26_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__V_26_26, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 384 "llds_out_file.m"
            if (ll_backend__llds_out__llds_out_file__succeeded)
#line 384 "llds_out_file.m"
              {
#line 384 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__Label_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_file__V_26_26, (MR_Integer) 1)));
#line 388 "llds_out_file.m"
                if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_file__Label_16)) == (MR_mktag((MR_Integer) 1))))
#line 386 "llds_out_file.m"
                  {
#line 387 "llds_out_file.m"
                    {
#line 387 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 387 "llds_out_file.m"
                      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_28_28, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_16));
#line 387 "llds_out_file.m"
                      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_28_28, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_0_2));
#line 387 "llds_out_file.m"
                    }
#line 386 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_27_27 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_0_4;
#line 386 "llds_out_file.m"
                  }
#line 388 "llds_out_file.m"
                else
#line 389 "llds_out_file.m"
                  {
#line 390 "llds_out_file.m"
                    {
#line 390 "llds_out_file.m"
                      ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 390 "llds_out_file.m"
                      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_27_27, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Label_16));
#line 390 "llds_out_file.m"
                      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_27_27, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_0_4));
#line 390 "llds_out_file.m"
                    }
#line 389 "llds_out_file.m"
                    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_28_28 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_0_2;
#line 389 "llds_out_file.m"
                  }
#line 384 "llds_out_file.m"
              }
#line 384 "llds_out_file.m"
            else
#line 393 "llds_out_file.m"
              {
#line 393 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_27_27 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_0_4;
#line 393 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_28_28 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_0_2;
#line 393 "llds_out_file.m"
              }
#line 395 "llds_out_file.m"
            /* direct tailcall eliminated */
#line 395 "llds_out_file.m"
            {
#line 395 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1 = ll_backend__llds_out__llds_out_file__Instrs_13;
#line 395 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_0__tmp_copy_2 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_28_28;
#line 395 "llds_out_file.m"
              MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_0__tmp_copy_4 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_27_27;

#line 395 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_0_4 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevInternalLabels_0__tmp_copy_4;
#line 395 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_0_2 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_RevEntryLabels_0__tmp_copy_2;
#line 395 "llds_out_file.m"
              ll_backend__llds_out__llds_out_file__HeadVar__1_1 = ll_backend__llds_out__llds_out_file__HeadVar__1__tmp_copy_1;
#line 395 "llds_out_file.m"
            }
#line 395 "llds_out_file.m"
            continue;
#line 383 "llds_out_file.m"
          }
#line 381 "llds_out_file.m"
      }
#line 381 "llds_out_file.m"
      break;
#line 381 "llds_out_file.m"
    }
#line 377 "llds_out_file.m"
}

#line 368 "llds_out_file.m"
static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_file__annotate_c_procedure_9_p_0_1(
#line 368 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__closure_arg,
#line 368 "llds_out_file.m"
  MR_Box ll_backend__llds_out__llds_out_file__wrapper_arg_1)
#line 368 "llds_out_file.m"
{
#line 368 "llds_out_file.m"
  {
#line 368 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 368 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__closure = ll_backend__llds_out__llds_out_file__closure_arg;

#line 368 "llds_out_file.m"
    {
#line 368 "llds_out_file.m"
      return ll_backend__llds_out__llds_out_file__succeeded = ll_backend__llds_out__llds_out_file__IntroducedFrom__pred__annotate_c_procedure__368__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
    }
#line 368 "llds_out_file.m"
    return ll_backend__llds_out__llds_out_file__succeeded;
#line 368 "llds_out_file.m"
  }
#line 368 "llds_out_file.m"
}

#line 319 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__annotate_c_procedure_9_p_0(
#line 319 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_10,
#line 319 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Proc_11,
#line 319 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__AnnotatedProc_12,
#line 319 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllEntryLabels_0_30,
#line 319 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllEntryLabels_31,
#line 319 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllInternalLabels_0_32,
#line 319 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllInternalLabels_33,
#line 319 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_0_34,
#line 319 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_35)
#line 319 "llds_out_file.m"
{
#line 325 "llds_out_file.m"
  {
#line 325 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 325 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85;
#line 325 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ProcEnvVarNames_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 8)));
#line 325 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__Instrs_17;
#line 325 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__RevEntryLabels_18;
#line 325 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__RevInternalLabels0_19;
#line 325 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__EntryLabels_20;
#line 325 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__InternalLabels0_21;
#line 325 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__CallerLabel_22;
#line 325 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ContLabels_23;
#line 325 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__EmitCLoops_24;
#line 325 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__WhileLabels_25;
#line 325 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__UndefWhileLabels_26;
#line 325 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__LabelOutputInfo_28;
#line 325 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__InternalLabels_29;
#line 325 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_39_39;
#line 325 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_44_44;
#line 325 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_46_46;
#line 326 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_47_47 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 0)));
#line 326 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 1)));
#line 326 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 2)));
#line 326 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 3)));
#line 326 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 4)));
#line 326 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 5)));
#line 326 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 6)));
#line 326 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 7)));
#line 329 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_55_55;
#line 329 "llds_out_file.m"
    MR_Integer ll_backend__llds_out__llds_out_file__V_56_56;
#line 329 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_57_57;
#line 329 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_58_58;
#line 329 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_59_59;
#line 329 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_60_60;
#line 329 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_61_61;
#line 329 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_62_62;
#line 337 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_63_63;
#line 337 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_64_64;
#line 337 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_65_65;
#line 337 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_66_66;
#line 337 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_67_67;
#line 337 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_68_68;
#line 337 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_69_69;
#line 337 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_70_70;
#line 337 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_71_71;
#line 337 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_72_72;
#line 337 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_73_73;
#line 337 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_74_74;
#line 337 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_75_75;
#line 337 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_76_76;
#line 337 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_77_77;
#line 337 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_78_78;
#line 337 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_79_79;
#line 337 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_80_80;
#line 337 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_81_81;
#line 337 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_82_82;
#line 337 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_83_83;

#line 327 "llds_out_file.m"
    {
#line 327 "llds_out_file.m"
      mercury__set__union_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ll_backend__llds_out__llds_out_file__ProcEnvVarNames_16, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_0_34, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_35);
    }
#line 329 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_55_55 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 0)));
#line 329 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 1)));
#line 329 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 2)));
#line 329 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 3)));
#line 329 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 4)));
#line 329 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__Instrs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 5)));
#line 329 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 6)));
#line 329 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 7)));
#line 329 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Proc_11, (MR_Integer) 8)));
#line 330 "llds_out_file.m"
    {
#line 330 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__gather_labels_from_instrs_acc_5_p_0(ll_backend__llds_out__llds_out_file__Instrs_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__RevEntryLabels_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__RevInternalLabels0_19);
    }
#line 11848 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 332 "llds_out_file.m"
    {
#line 332 "llds_out_file.m"
      mercury__list__reverse_2_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85, ll_backend__llds_out__llds_out_file__RevEntryLabels_18, &ll_backend__llds_out__llds_out_file__EntryLabels_20);
    }
#line 333 "llds_out_file.m"
    {
#line 333 "llds_out_file.m"
      mercury__list__reverse_2_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85, ll_backend__llds_out__llds_out_file__RevInternalLabels0_19, &ll_backend__llds_out__llds_out_file__InternalLabels0_21);
    }
#line 335 "llds_out_file.m"
    {
#line 335 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__find_caller_label_2_p_0(ll_backend__llds_out__llds_out_file__Instrs_17, &ll_backend__llds_out__llds_out_file__CallerLabel_22);
    }
#line 336 "llds_out_file.m"
    {
#line 336 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_39_39 = mercury__set_tree234__init_0_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85);
    }
#line 336 "llds_out_file.m"
    {
#line 336 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__find_cont_labels_3_p_0(ll_backend__llds_out__llds_out_file__Instrs_17, ll_backend__llds_out__llds_out_file__V_39_39, &ll_backend__llds_out__llds_out_file__ContLabels_23);
    }
#line 337 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 0)));
#line 337 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_64_64 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 1)));
#line 337 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_65_65 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 2)));
#line 337 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 3)));
#line 337 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 4)));
#line 337 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 5)));
#line 337 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 6)));
#line 337 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_70_70 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 337 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 337 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__EmitCLoops_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 337 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 337 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 337 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 337 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_75_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 337 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_76_76 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 337 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_77_77 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 337 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_78_78 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 337 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_79_79 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 337 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_80_80 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 337 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_81_81 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 337 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_82_82 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 337 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_10, (MR_Integer) 8)));
#line 342 "llds_out_file.m"
#line 342 "llds_out_file.m"
    switch (ll_backend__llds_out__llds_out_file__EmitCLoops_24) {
#line 342 "llds_out_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 342 "llds_out_file.m"
      case (MR_Integer) 0:
#line 339 "llds_out_file.m"
        {
#line 340 "llds_out_file.m"
          {
#line 340 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__WhileLabels_25 = mercury__set_tree234__init_0_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85);
          }
#line 341 "llds_out_file.m"
          {
#line 341 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__UndefWhileLabels_26 = mercury__set_tree234__init_0_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85);
          }
#line 339 "llds_out_file.m"
        }
#line 342 "llds_out_file.m"
        break;
#line 342 "llds_out_file.m"
      case (MR_Integer) 1:
#line 343 "llds_out_file.m"
        {
#line 343 "llds_out_file.m"
          MR_Word ll_backend__llds_out__llds_out_file__UndefWhileLabels0_27;
#line 343 "llds_out_file.m"
          MR_Word ll_backend__llds_out__llds_out_file__V_40_40;

#line 344 "llds_out_file.m"
          {
#line 344 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__V_40_40 = mercury__set_tree234__init_0_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85);
          }
#line 344 "llds_out_file.m"
          {
#line 344 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__find_while_labels_3_p_0(ll_backend__llds_out__llds_out_file__Instrs_17, ll_backend__llds_out__llds_out_file__V_40_40, &ll_backend__llds_out__llds_out_file__WhileLabels_25);
          }
#line 352 "llds_out_file.m"
          {
#line 352 "llds_out_file.m"
            mercury__set_tree234__difference_3_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85, ll_backend__llds_out__llds_out_file__WhileLabels_25, ll_backend__llds_out__llds_out_file__ContLabels_23, &ll_backend__llds_out__llds_out_file__UndefWhileLabels0_27);
          }
#line 353 "llds_out_file.m"
          {
#line 353 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__succeeded = mercury__set_tree234__is_empty_1_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85, ll_backend__llds_out__llds_out_file__UndefWhileLabels0_27);
          }
#line 355 "llds_out_file.m"
          if (ll_backend__llds_out__llds_out_file__succeeded)
#line 354 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__UndefWhileLabels_26 = ll_backend__llds_out__llds_out_file__UndefWhileLabels0_27;
#line 355 "llds_out_file.m"
          else
#line 359 "llds_out_file.m"
            {
#line 359 "llds_out_file.m"
              {
#line 359 "llds_out_file.m"
                ll_backend__llds_out__llds_out_file__find_while_labels_to_define_5_p_0(ll_backend__llds_out__llds_out_file__Instrs_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__llds_out__llds_out_file__WhileLabels_25, ll_backend__llds_out__llds_out_file__UndefWhileLabels0_27, &ll_backend__llds_out__llds_out_file__UndefWhileLabels_26);
              }
#line 359 "llds_out_file.m"
            }
#line 343 "llds_out_file.m"
        }
#line 342 "llds_out_file.m"
        break;
#line 342 "llds_out_file.m"
    }
#line 363 "llds_out_file.m"
    {
#line 363 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__LabelOutputInfo_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 363 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__LabelOutputInfo_28, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__CallerLabel_22));
#line 363 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__LabelOutputInfo_28, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__ContLabels_23));
#line 363 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__LabelOutputInfo_28, 2) = ((MR_Box) (ll_backend__llds_out__llds_out_file__WhileLabels_25));
#line 363 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__LabelOutputInfo_28, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__UndefWhileLabels_26));
#line 363 "llds_out_file.m"
    }
#line 365 "llds_out_file.m"
    {
#line 365 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__succeeded = mercury__set_tree234__is_empty_1_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85, ll_backend__llds_out__llds_out_file__UndefWhileLabels_26);
    }
#line 367 "llds_out_file.m"
    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 366 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__InternalLabels_29 = ll_backend__llds_out__llds_out_file__InternalLabels0_21;
#line 367 "llds_out_file.m"
    else
#line 368 "llds_out_file.m"
      {
#line 368 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_42_42;

#line 368 "llds_out_file.m"
        {
#line 368 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 368 "llds_out_file.m"
          MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_42_42, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_8[0]));
#line 368 "llds_out_file.m"
          MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_42_42, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__annotate_c_procedure_9_p_0_1));
#line 368 "llds_out_file.m"
          MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_42_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 368 "llds_out_file.m"
          MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_42_42, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__UndefWhileLabels_26));
#line 368 "llds_out_file.m"
        }
#line 368 "llds_out_file.m"
        {
#line 368 "llds_out_file.m"
          mercury__list__negated_filter_3_p_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85, ll_backend__llds_out__llds_out_file__V_42_42, ll_backend__llds_out__llds_out_file__InternalLabels0_21, &ll_backend__llds_out__llds_out_file__InternalLabels_29);
        }
#line 368 "llds_out_file.m"
      }
#line 371 "llds_out_file.m"
    {
#line 371 "llds_out_file.m"
      MR_Word base;
#line 371 "llds_out_file.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 371 "llds_out_file.m"
      *ll_backend__llds_out__llds_out_file__AnnotatedProc_12 = base;
#line 371 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Proc_11));
#line 371 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__LabelOutputInfo_28));
#line 371 "llds_out_file.m"
    }
#line 373 "llds_out_file.m"
    {
#line 373 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_44_44 = mercury__cord__from_list_1_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85, ll_backend__llds_out__llds_out_file__EntryLabels_20);
    }
#line 373 "llds_out_file.m"
    {
#line 373 "llds_out_file.m"
      *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllEntryLabels_31 = mercury__cord__f_43_43_2_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllEntryLabels_0_30, ll_backend__llds_out__llds_out_file__V_44_44);
    }
#line 375 "llds_out_file.m"
    {
#line 375 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_46_46 = mercury__cord__from_list_1_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85, ll_backend__llds_out__llds_out_file__InternalLabels_29);
    }
#line 374 "llds_out_file.m"
    {
#line 374 "llds_out_file.m"
      *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllInternalLabels_33 = mercury__cord__f_43_43_2_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_85_85, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllInternalLabels_0_32, ll_backend__llds_out__llds_out_file__V_46_46);
    }
#line 325 "llds_out_file.m"
  }
#line 319 "llds_out_file.m"
}

#line 305 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__annotate_c_procedures_9_p_0(
#line 305 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_1,
#line 305 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2,
#line 305 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__HeadVar__3_3,
#line 305 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllEntryLabels_0_4,
#line 305 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllEntryLabels_5,
#line 305 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllInternalLabels_0_6,
#line 305 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllInternalLabels_7,
#line 305 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_0_8,
#line 305 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_9)
#line 305 "llds_out_file.m"
{
#line 310 "llds_out_file.m"
  {
#line 310 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 310 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 310 "llds_out_file.m"
      {
#line 310 "llds_out_file.m"
        *ll_backend__llds_out__llds_out_file__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 311 "llds_out_file.m"
        *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_9 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_0_8;
#line 311 "llds_out_file.m"
        *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllInternalLabels_7 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllInternalLabels_0_6;
#line 311 "llds_out_file.m"
        *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllEntryLabels_5 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllEntryLabels_0_4;
#line 310 "llds_out_file.m"
      }
#line 310 "llds_out_file.m"
    else
#line 313 "llds_out_file.m"
      {
#line 313 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__Proc_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 0)));
#line 313 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__Procs_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 1)));
#line 313 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__AnnotatedProc_23;
#line 313 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__AnnotatedProcs_24;
#line 313 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllEntryLabels_34_34;
#line 313 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllInternalLabels_35_35;
#line 313 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_36_36;

#line 314 "llds_out_file.m"
        {
#line 314 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__annotate_c_procedure_9_p_0(ll_backend__llds_out__llds_out_file__Info_1, ll_backend__llds_out__llds_out_file__Proc_21, &ll_backend__llds_out__llds_out_file__AnnotatedProc_23, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllEntryLabels_0_4, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllEntryLabels_34_34, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllInternalLabels_0_6, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllInternalLabels_35_35, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_0_8, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_36_36);
        }
#line 316 "llds_out_file.m"
        {
#line 316 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__annotate_c_procedures_9_p_0(ll_backend__llds_out__llds_out_file__Info_1, ll_backend__llds_out__llds_out_file__Procs_22, &ll_backend__llds_out__llds_out_file__AnnotatedProcs_24, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllEntryLabels_34_34, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllEntryLabels_5, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllInternalLabels_35_35, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_AllInternalLabels_7, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_36_36, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_9);
        }
#line 312 "llds_out_file.m"
        {
#line 312 "llds_out_file.m"
          MR_Word base;
#line 312 "llds_out_file.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 312 "llds_out_file.m"
          *ll_backend__llds_out__llds_out_file__HeadVar__3_3 = base;
#line 312 "llds_out_file.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__AnnotatedProc_23));
#line 312 "llds_out_file.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__AnnotatedProcs_24));
#line 312 "llds_out_file.m"
        }
#line 313 "llds_out_file.m"
      }
#line 310 "llds_out_file.m"
  }
#line 305 "llds_out_file.m"
}

#line 273 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__annotate_c_modules_9_p_0(
#line 273 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_1,
#line 273 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__HeadVar__2_2,
#line 273 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__HeadVar__3_3,
#line 273 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EntryLabels_0_4,
#line 273 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EntryLabels_5,
#line 273 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabels_0_6,
#line 273 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabels_7,
#line 273 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_0_8,
#line 273 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_9)
#line 273 "llds_out_file.m"
{
#line 278 "llds_out_file.m"
  {
#line 278 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;

#line 278 "llds_out_file.m"
    if ((ll_backend__llds_out__llds_out_file__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 278 "llds_out_file.m"
      {
#line 278 "llds_out_file.m"
        *ll_backend__llds_out__llds_out_file__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 278 "llds_out_file.m"
        *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_9 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_0_8;
#line 278 "llds_out_file.m"
        *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabels_7 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabels_0_6;
#line 278 "llds_out_file.m"
        *ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EntryLabels_5 = ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EntryLabels_0_4;
#line 278 "llds_out_file.m"
      }
#line 278 "llds_out_file.m"
    else
#line 281 "llds_out_file.m"
      {
#line 281 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_34_64 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 281 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__Module_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 0)));
#line 281 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__Modules_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_file__HeadVar__2_2, (MR_Integer) 1)));
#line 281 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__AnnotatedModule_23;
#line 281 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__AnnotatedModules_24;
#line 281 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EntryLabels_34_34;
#line 281 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabels_35_35;
#line 281 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_36_36;
#line 281 "llds_out_file.m"
        MR_String ll_backend__llds_out__llds_out_file__ModuleName_52 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Module_21, (MR_Integer) 0)));
#line 281 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__Procs_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Module_21, (MR_Integer) 1)));
#line 281 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__AnnotatedProcs_54;
#line 281 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__ModuleEntryLabels_55;
#line 281 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__ModuleInternalLabels_56;
#line 281 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__ModuleEntryLabelList_57;
#line 281 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__ModuleInternalLabelList_58;
#line 281 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_59_59;
#line 281 "llds_out_file.m"
        MR_Word ll_backend__llds_out__llds_out_file__V_60_60;

#line 296 "llds_out_file.m"
        {
#line 296 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__V_59_59 = mercury__cord__init_0_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_34_64);
        }
#line 296 "llds_out_file.m"
        {
#line 296 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__V_60_60 = mercury__cord__init_0_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_34_64);
        }
#line 295 "llds_out_file.m"
        {
#line 295 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__annotate_c_procedures_9_p_0(ll_backend__llds_out__llds_out_file__Info_1, ll_backend__llds_out__llds_out_file__Procs_53, &ll_backend__llds_out__llds_out_file__AnnotatedProcs_54, ll_backend__llds_out__llds_out_file__V_59_59, &ll_backend__llds_out__llds_out_file__ModuleEntryLabels_55, ll_backend__llds_out__llds_out_file__V_60_60, &ll_backend__llds_out__llds_out_file__ModuleInternalLabels_56, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_0_8, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_36_36);
        }
#line 298 "llds_out_file.m"
        {
#line 298 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__ModuleEntryLabelList_57 = mercury__cord__list_1_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_34_64, ll_backend__llds_out__llds_out_file__ModuleEntryLabels_55);
        }
#line 299 "llds_out_file.m"
        {
#line 299 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__ModuleInternalLabelList_58 = mercury__cord__list_1_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_34_64, ll_backend__llds_out__llds_out_file__ModuleInternalLabels_56);
        }
#line 300 "llds_out_file.m"
        {
#line 300 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__AnnotatedModule_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 300 "llds_out_file.m"
          MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__AnnotatedModule_23, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__ModuleName_52));
#line 300 "llds_out_file.m"
          MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__AnnotatedModule_23, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__AnnotatedProcs_54));
#line 300 "llds_out_file.m"
          MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__AnnotatedModule_23, 2) = ((MR_Box) (ll_backend__llds_out__llds_out_file__ModuleEntryLabelList_57));
#line 300 "llds_out_file.m"
          MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__AnnotatedModule_23, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__ModuleInternalLabelList_58));
#line 300 "llds_out_file.m"
        }
#line 302 "llds_out_file.m"
        {
#line 302 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EntryLabels_34_34 = mercury__cord__f_43_43_2_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_34_64, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EntryLabels_0_4, ll_backend__llds_out__llds_out_file__ModuleEntryLabels_55);
        }
#line 303 "llds_out_file.m"
        {
#line 303 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabels_35_35 = mercury__cord__f_43_43_2_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_34_64, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabels_0_6, ll_backend__llds_out__llds_out_file__ModuleInternalLabels_56);
        }
#line 284 "llds_out_file.m"
        {
#line 284 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__annotate_c_modules_9_p_0(ll_backend__llds_out__llds_out_file__Info_1, ll_backend__llds_out__llds_out_file__Modules_22, &ll_backend__llds_out__llds_out_file__AnnotatedModules_24, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EntryLabels_34_34, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EntryLabels_5, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabels_35_35, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_InternalLabels_7, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_36_36, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_EnvVarNames_9);
        }
#line 280 "llds_out_file.m"
        {
#line 280 "llds_out_file.m"
          MR_Word base;
#line 280 "llds_out_file.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 280 "llds_out_file.m"
          *ll_backend__llds_out__llds_out_file__HeadVar__3_3 = base;
#line 280 "llds_out_file.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_file__AnnotatedModule_23));
#line 280 "llds_out_file.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__AnnotatedModules_24));
#line 280 "llds_out_file.m"
        }
#line 281 "llds_out_file.m"
      }
#line 278 "llds_out_file.m"
  }
#line 273 "llds_out_file.m"
}

#line 216 "llds_out_file.m"
static void MR_CALL 
ll_backend__llds_out__llds_out_file__output_c_file_mercury_headers_3_p_0(
#line 216 "llds_out_file.m"
  MR_Word ll_backend__llds_out__llds_out_file__Info_4)
#line 216 "llds_out_file.m"
{
#line 219 "llds_out_file.m"
  {
#line 219 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 219 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TraceLevel_6;
#line 219 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TraceLevelIsNone_7;
#line 219 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__DeepProfile_8;
#line 219 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__GenerateBytecode_9;
#line 222 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_22_22;
#line 222 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_23_23;
#line 222 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_24_24;
#line 222 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_25_25;
#line 222 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_26_26;
#line 222 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_27_27;
#line 222 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_28_28;
#line 222 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_29_29;
#line 222 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_30_30;
#line 222 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_31_31;
#line 222 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_32_32;
#line 222 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_33_33;
#line 222 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_34_34;
#line 222 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_35_35;
#line 222 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_36_36;
#line 222 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_37_37;
#line 222 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_38_38;
#line 222 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_39_39;
#line 222 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_40_40;
#line 222 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_41_41;
#line 222 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_42_42;
#line 230 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_43_43;
#line 230 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_44_44;
#line 230 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__V_45_45;
#line 230 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_46_46;
#line 230 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_47_47;
#line 230 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_48_48;
#line 230 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_49_49;
#line 230 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_50_50;
#line 230 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_51_51;
#line 230 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_52_52;
#line 230 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_54_54;
#line 230 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_55_55;
#line 230 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_56_56;
#line 230 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_57_57;
#line 230 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_58_58;
#line 230 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_59_59;
#line 230 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_60_60;
#line 230 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_61_61;
#line 230 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_62_62;
#line 230 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_63_63;

#line 220 "llds_out_file.m"
    {
#line 220 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#define MR_ALLOW_RESET\n");
    }
#line 221 "llds_out_file.m"
    {
#line 221 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "#include \"mercury_imp.h\"\n");
    }
#line 222 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 0)));
#line 222 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 1)));
#line 222 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 2)));
#line 222 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 3)));
#line 222 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 4)));
#line 222 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 5)));
#line 222 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 6)));
#line 222 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 222 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 222 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 222 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 222 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 222 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 222 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 222 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 222 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 222 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 222 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 222 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 222 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 222 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__TraceLevel_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 222 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 8)));
#line 223 "llds_out_file.m"
    {
#line 223 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__TraceLevelIsNone_7 = libs__trace_params__given_trace_level_is_none_1_f_0(ll_backend__llds_out__llds_out_file__TraceLevel_6);
    }
#line 227 "llds_out_file.m"
#line 227 "llds_out_file.m"
    switch (ll_backend__llds_out__llds_out_file__TraceLevelIsNone_7) {
#line 227 "llds_out_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 227 "llds_out_file.m"
      case (MR_Integer) 0:
#line 225 "llds_out_file.m"
        {
#line 226 "llds_out_file.m"
          {
#line 226 "llds_out_file.m"
            mercury__io__write_string_3_p_0((MR_String) "#include \"mercury_trace_base.h\"\n");
          }
#line 225 "llds_out_file.m"
        }
#line 227 "llds_out_file.m"
        break;
#line 227 "llds_out_file.m"
      case (MR_Integer) 1:
#line 228 "llds_out_file.m"
        {
#line 228 "llds_out_file.m"
        }
#line 227 "llds_out_file.m"
        break;
#line 227 "llds_out_file.m"
    }
#line 230 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 0)));
#line 230 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 1)));
#line 230 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 2)));
#line 230 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 3)));
#line 230 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 4)));
#line 230 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 5)));
#line 230 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 6)));
#line 230 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_50_50 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) & (MR_Integer) 1);
#line 230 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 230 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 230 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__GenerateBytecode_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 230 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 230 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 230 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 230 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 230 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__DeepProfile_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
#line 230 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
#line 230 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 230 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
#line 230 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
#line 230 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_62_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
#line 230 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__Info_4, (MR_Integer) 8)));
#line 234 "llds_out_file.m"
#line 234 "llds_out_file.m"
    switch (ll_backend__llds_out__llds_out_file__DeepProfile_8) {
#line 234 "llds_out_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 234 "llds_out_file.m"
      case (MR_Integer) 0:
#line 235 "llds_out_file.m"
        {
#line 235 "llds_out_file.m"
        }
#line 234 "llds_out_file.m"
        break;
#line 234 "llds_out_file.m"
      case (MR_Integer) 1:
#line 232 "llds_out_file.m"
        {
#line 233 "llds_out_file.m"
          {
#line 233 "llds_out_file.m"
            mercury__io__write_string_3_p_0((MR_String) "#include \"mercury_deep_profiling.h\"\n");
          }
#line 232 "llds_out_file.m"
        }
#line 234 "llds_out_file.m"
        break;
#line 234 "llds_out_file.m"
    }
#line 241 "llds_out_file.m"
#line 241 "llds_out_file.m"
    switch (ll_backend__llds_out__llds_out_file__GenerateBytecode_9) {
#line 241 "llds_out_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 241 "llds_out_file.m"
      case (MR_Integer) 0:
#line 242 "llds_out_file.m"
        {
#line 242 "llds_out_file.m"
        }
#line 241 "llds_out_file.m"
        break;
#line 241 "llds_out_file.m"
      case (MR_Integer) 1:
#line 239 "llds_out_file.m"
        {
#line 240 "llds_out_file.m"
          {
#line 240 "llds_out_file.m"
            mercury__io__write_string_3_p_0((MR_String) "#include \"mb_interface_stub.h\"\n");
#line 240 "llds_out_file.m"
            return;
          }
#line 239 "llds_out_file.m"
        }
#line 241 "llds_out_file.m"
        break;
#line 241 "llds_out_file.m"
    }
#line 219 "llds_out_file.m"
  }
#line 216 "llds_out_file.m"
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
      ll_backend__llds_out__llds_out_file__IntroducedFrom__pred__output_single_c_file__203__1_3_p_0(((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
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
      ll_backend__llds_out__llds_out_file__output_foreign_body_code_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_file__wrapper_arg_1));
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
  MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_65,
#line 122 "llds_out_file.m"
  MR_Word * ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_66)
#line 122 "llds_out_file.m"
{
#line 125 "llds_out_file.m"
  {
#line 125 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_134_134;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_135_135;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_141_141;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeInfo_142_142;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_143_143;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__TypeCtorInfo_149_149;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ModuleName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 0)));
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__C_HeaderLines_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 1)));
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__ForeignBodyCodes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__CFile_8, (MR_Integer) 2)));
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
    MR_Word ll_backend__llds_out__llds_out_file__V_71_71;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_72_72;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_73_73;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_81_81;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_84_84;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_86_86;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_88_88;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_90_90;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_91_91;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_93_93;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_94_94;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_96_96;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_97_97;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_99_99;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_100_100;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_104_104;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_105_105;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_107_107;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_108_108;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_110_110;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_111_111;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_114_114;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_116_116;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_118_118;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_119_119;
#line 125 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_121_121;
#line 160 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_DeclSet_81_81;
#line 160 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_IO_82_82;
#line 162 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv5_STATE_VARIABLE_DeclSet_84_84;
#line 162 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv4_STATE_VARIABLE_IO_85_85;
#line 167 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv8_STATE_VARIABLE_DeclSet_91_91;
#line 167 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv7_STATE_VARIABLE_IO_92_92;
#line 169 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv11_STATE_VARIABLE_DeclSet_94_94;
#line 169 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv10_STATE_VARIABLE_IO_95_95;
#line 171 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv14_STATE_VARIABLE_DeclSet_97_97;
#line 171 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv13_STATE_VARIABLE_IO_98_98;
#line 173 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv17_STATE_VARIABLE_DeclSet_100_100;
#line 173 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv16_STATE_VARIABLE_IO_101_101;
#line 183 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv20_STATE_VARIABLE_DeclSet_105_105;
#line 183 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv19_STATE_VARIABLE_IO_106_106;
#line 185 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv23_STATE_VARIABLE_DeclSet_108_108;
#line 185 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv22_STATE_VARIABLE_IO_109_109;
#line 187 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv26_STATE_VARIABLE_DeclSet_111_111;
#line 187 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv25_STATE_VARIABLE_IO_112_112;
#line 200 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv29_STATE_VARIABLE_DeclSet_119_119;
#line 200 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv28_STATE_VARIABLE_IO_120_120;
#line 202 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv30_STATE_VARIABLE_IO_122_122;
#line 208 "llds_out_file.m"
    MR_Box ll_backend__llds_out__llds_out_file__conv31_STATE_VARIABLE_IO_126_126;

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
#line 13292 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_134_134 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 147 "llds_out_file.m"
    {
#line 147 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_71_71 = mercury__cord__init_0_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_134_134);
    }
#line 147 "llds_out_file.m"
    {
#line 147 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_72_72 = mercury__cord__init_0_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_134_134);
    }
#line 13304 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_135_135 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 148 "llds_out_file.m"
    {
#line 148 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_73_73 = mercury__set__init_0_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_135_135);
    }
#line 146 "llds_out_file.m"
    {
#line 146 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__annotate_c_modules_9_p_0(ll_backend__llds_out__llds_out_file__Info_53, ll_backend__llds_out__llds_out_file__Modules_46, &ll_backend__llds_out__llds_out_file__AnnotatedModules_54, ll_backend__llds_out__llds_out_file__V_71_71, &ll_backend__llds_out__llds_out_file__EntryLabelsCord_55, ll_backend__llds_out__llds_out_file__V_72_72, &ll_backend__llds_out__llds_out_file__InternalLabelsCord_56, ll_backend__llds_out__llds_out_file__V_73_73, &ll_backend__llds_out__llds_out_file__EnvVarNameSet_57);
    }
#line 149 "llds_out_file.m"
    {
#line 149 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__EntryLabels_58 = mercury__cord__list_1_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_134_134, ll_backend__llds_out__llds_out_file__EntryLabelsCord_55);
    }
#line 150 "llds_out_file.m"
    {
#line 150 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__InternalLabels_59 = mercury__cord__list_1_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_134_134, ll_backend__llds_out__llds_out_file__InternalLabelsCord_56);
    }
#line 151 "llds_out_file.m"
    {
#line 151 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__EnvVarNames_60 = mercury__set__to_sorted_list_1_f_0(ll_backend__llds_out__llds_out_file__TypeCtorInfo_135_135, ll_backend__llds_out__llds_out_file__EnvVarNameSet_57);
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
#line 13356 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_141_141 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_scalar_common_data_array_0;
#line 13358 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeInfo_142_142 = (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_1[0];
#line 13360 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_143_143 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 160 "llds_out_file.m"
    {
#line 160 "llds_out_file.m"
      mercury__list__foldl2_6_p_2(ll_backend__llds_out__llds_out_file__TypeCtorInfo_141_141, ll_backend__llds_out__llds_out_file__TypeInfo_142_142, ll_backend__llds_out__llds_out_file__TypeCtorInfo_143_143, (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_2[2], ll_backend__llds_out__llds_out_file__ScalarCommonDatas_16, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_0_65)), &ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_DeclSet_81_81, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv1_STATE_VARIABLE_IO_82_82);
    }
#line 160 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_81_81 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv2_STATE_VARIABLE_DeclSet_81_81);
#line 13369 "ll_backend.llds_out.llds_out_file.c"
    ll_backend__llds_out__llds_out_file__TypeCtorInfo_149_149 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_vector_common_data_array_0;
#line 162 "llds_out_file.m"
    {
#line 162 "llds_out_file.m"
      mercury__list__foldl2_6_p_2(ll_backend__llds_out__llds_out_file__TypeCtorInfo_149_149, ll_backend__llds_out__llds_out_file__TypeInfo_142_142, ll_backend__llds_out__llds_out_file__TypeCtorInfo_143_143, (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_2[3], ll_backend__llds_out__llds_out_file__VectorCommonDatas_17, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_81_81)), &ll_backend__llds_out__llds_out_file__conv5_STATE_VARIABLE_DeclSet_84_84, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv4_STATE_VARIABLE_IO_85_85);
    }
#line 162 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_84_84 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv5_STATE_VARIABLE_DeclSet_84_84);
#line 164 "llds_out_file.m"
    {
#line 164 "llds_out_file.m"
      ll_backend__rtti_out__output_rtti_data_decl_list_6_p_0(ll_backend__llds_out__llds_out_file__Info_53, ll_backend__llds_out__llds_out_file__RttiDatas_18, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_84_84, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_86_86);
    }
#line 165 "llds_out_file.m"
    {
#line 165 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_record_c_label_decls_7_p_0(ll_backend__llds_out__llds_out_file__Info_53, ll_backend__llds_out__llds_out_file__EntryLabels_58, ll_backend__llds_out__llds_out_file__InternalLabels_59, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_86_86, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_88_88);
    }
#line 167 "llds_out_file.m"
    {
#line 167 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 167 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_90_90, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_6[0]));
#line 167 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_90_90, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_3));
#line 167 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_90_90, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 167 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_90_90, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_53));
#line 167 "llds_out_file.m"
    }
#line 167 "llds_out_file.m"
    {
#line 167 "llds_out_file.m"
      mercury__list__foldl2_6_p_2((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_tabling_info_struct_0, ll_backend__llds_out__llds_out_file__TypeInfo_142_142, ll_backend__llds_out__llds_out_file__TypeCtorInfo_143_143, ll_backend__llds_out__llds_out_file__V_90_90, ll_backend__llds_out__llds_out_file__TablingInfoStructs_15, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_88_88)), &ll_backend__llds_out__llds_out_file__conv8_STATE_VARIABLE_DeclSet_91_91, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv7_STATE_VARIABLE_IO_92_92);
    }
#line 167 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_91_91 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv8_STATE_VARIABLE_DeclSet_91_91);
#line 169 "llds_out_file.m"
    {
#line 169 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 169 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_93_93, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_6[1]));
#line 169 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_93_93, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_4));
#line 169 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_93_93, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 169 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_93_93, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_53));
#line 169 "llds_out_file.m"
    }
#line 169 "llds_out_file.m"
    {
#line 169 "llds_out_file.m"
      mercury__list__foldl2_6_p_2(ll_backend__llds_out__llds_out_file__TypeCtorInfo_141_141, ll_backend__llds_out__llds_out_file__TypeInfo_142_142, ll_backend__llds_out__llds_out_file__TypeCtorInfo_143_143, ll_backend__llds_out__llds_out_file__V_93_93, ll_backend__llds_out__llds_out_file__ScalarCommonDatas_16, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_91_91)), &ll_backend__llds_out__llds_out_file__conv11_STATE_VARIABLE_DeclSet_94_94, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv10_STATE_VARIABLE_IO_95_95);
    }
#line 169 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_94_94 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv11_STATE_VARIABLE_DeclSet_94_94);
#line 171 "llds_out_file.m"
    {
#line 171 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 171 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_96_96, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_6[2]));
#line 171 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_96_96, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_5));
#line 171 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_96_96, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 171 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_96_96, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_53));
#line 171 "llds_out_file.m"
    }
#line 171 "llds_out_file.m"
    {
#line 171 "llds_out_file.m"
      mercury__list__foldl2_6_p_2(ll_backend__llds_out__llds_out_file__TypeCtorInfo_149_149, ll_backend__llds_out__llds_out_file__TypeInfo_142_142, ll_backend__llds_out__llds_out_file__TypeCtorInfo_143_143, ll_backend__llds_out__llds_out_file__V_96_96, ll_backend__llds_out__llds_out_file__VectorCommonDatas_17, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_94_94)), &ll_backend__llds_out__llds_out_file__conv14_STATE_VARIABLE_DeclSet_97_97, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv13_STATE_VARIABLE_IO_98_98);
    }
#line 171 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_97_97 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv14_STATE_VARIABLE_DeclSet_97_97);
#line 173 "llds_out_file.m"
    {
#line 173 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_99_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 173 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_99_99, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_6[3]));
#line 173 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_99_99, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_6));
#line 173 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_99_99, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 173 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_99_99, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_53));
#line 173 "llds_out_file.m"
    }
#line 173 "llds_out_file.m"
    {
#line 173 "llds_out_file.m"
      mercury__list__foldl2_6_p_2((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0, ll_backend__llds_out__llds_out_file__TypeInfo_142_142, ll_backend__llds_out__llds_out_file__TypeCtorInfo_143_143, ll_backend__llds_out__llds_out_file__V_99_99, ll_backend__llds_out__llds_out_file__RttiDatas_18, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_97_97)), &ll_backend__llds_out__llds_out_file__conv17_STATE_VARIABLE_DeclSet_100_100, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv16_STATE_VARIABLE_IO_101_101);
    }
#line 173 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_100_100 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv17_STATE_VARIABLE_DeclSet_100_100);
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
      ll_backend__llds_out__llds_out_file__V_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 183 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_104_104, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_6[4]));
#line 183 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_104_104, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_7));
#line 183 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_104_104, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 183 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_104_104, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_53));
#line 183 "llds_out_file.m"
    }
#line 183 "llds_out_file.m"
    {
#line 183 "llds_out_file.m"
      mercury__list__foldl2_6_p_2((MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_data_0, ll_backend__llds_out__llds_out_file__TypeInfo_142_142, ll_backend__llds_out__llds_out_file__TypeCtorInfo_143_143, ll_backend__llds_out__llds_out_file__V_104_104, ll_backend__llds_out__llds_out_file__ProcLayoutDatas_41, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_100_100)), &ll_backend__llds_out__llds_out_file__conv20_STATE_VARIABLE_DeclSet_105_105, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv19_STATE_VARIABLE_IO_106_106);
    }
#line 183 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_105_105 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv20_STATE_VARIABLE_DeclSet_105_105);
#line 185 "llds_out_file.m"
    {
#line 185 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_107_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 185 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_107_107, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_6[5]));
#line 185 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_107_107, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_8));
#line 185 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_107_107, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 185 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_107_107, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_53));
#line 185 "llds_out_file.m"
    }
#line 185 "llds_out_file.m"
    {
#line 185 "llds_out_file.m"
      mercury__list__foldl2_6_p_2((MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_module_layout_data_0, ll_backend__llds_out__llds_out_file__TypeInfo_142_142, ll_backend__llds_out__llds_out_file__TypeCtorInfo_143_143, ll_backend__llds_out__llds_out_file__V_107_107, ll_backend__llds_out__llds_out_file__ModuleLayoutDatas_42, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_105_105)), &ll_backend__llds_out__llds_out_file__conv23_STATE_VARIABLE_DeclSet_108_108, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv22_STATE_VARIABLE_IO_109_109);
    }
#line 185 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_108_108 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv23_STATE_VARIABLE_DeclSet_108_108);
#line 187 "llds_out_file.m"
    {
#line 187 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_110_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 187 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_110_110, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_6[6]));
#line 187 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_110_110, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_9));
#line 187 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_110_110, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 187 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_110_110, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_53));
#line 187 "llds_out_file.m"
    }
#line 187 "llds_out_file.m"
    {
#line 187 "llds_out_file.m"
      mercury__list__foldl2_6_p_2((MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_closure_proc_id_data_0, ll_backend__llds_out__llds_out_file__TypeInfo_142_142, ll_backend__llds_out__llds_out_file__TypeCtorInfo_143_143, ll_backend__llds_out__llds_out_file__V_110_110, ll_backend__llds_out__llds_out_file__ClosureLayoutDatas_43, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_108_108)), &ll_backend__llds_out__llds_out_file__conv26_STATE_VARIABLE_DeclSet_111_111, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv25_STATE_VARIABLE_IO_112_112);
    }
#line 187 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_111_111 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv26_STATE_VARIABLE_DeclSet_111_111);
#line 189 "llds_out_file.m"
    {
#line 189 "llds_out_file.m"
      mercury__io__nl_2_p_0();
    }
#line 191 "llds_out_file.m"
    {
#line 191 "llds_out_file.m"
      ll_backend__llds_out__llds_out_data__output_record_rvals_decls_6_p_0(ll_backend__llds_out__llds_out_file__Info_53, ll_backend__llds_out__llds_out_file__PseudoTypeInfos_19, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_111_111, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_114_114);
    }
#line 192 "llds_out_file.m"
    {
#line 192 "llds_out_file.m"
      ll_backend__layout_out__output_layout_array_defns_25_p_0(ll_backend__llds_out__llds_out_file__Info_53, ll_backend__llds_out__llds_out_file__PseudoTypeInfos_19, ll_backend__llds_out__llds_out_file__HLDSVarNums_20, ll_backend__llds_out__llds_out_file__ShortLocns_21, ll_backend__llds_out__llds_out_file__LongLocns_22, ll_backend__llds_out__llds_out_file__UserEventVarNums_23, ll_backend__llds_out__llds_out_file__UserEvents_24, ll_backend__llds_out__llds_out_file__NoVarLabelLayouts_25, ll_backend__llds_out__llds_out_file__SVarLabelLayouts_26, ll_backend__llds_out__llds_out_file__LVarLabelLayouts_27, ll_backend__llds_out__llds_out_file__CallSiteStatics_30, ll_backend__llds_out__llds_out_file__CoveragePoints_31, ll_backend__llds_out__llds_out_file__ProcStatics_32, ll_backend__llds_out__llds_out_file__ProcHeadVarNums_33, ll_backend__llds_out__llds_out_file__ProcVarNames_34, ll_backend__llds_out__llds_out_file__ProcBodyBytecodes_35, ll_backend__llds_out__llds_out_file__TableIoEntries_37, ll_backend__llds_out__llds_out_file__ProcEventLayouts_39, ll_backend__llds_out__llds_out_file__ExecTraces_40, ll_backend__llds_out__llds_out_file__TSStringTable_36, ll_backend__llds_out__llds_out_file__AllocSites_44, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_114_114, &ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_116_116);
    }
#line 200 "llds_out_file.m"
    {
#line 200 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_118_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 200 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_118_118, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_6[7]));
#line 200 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_118_118, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_10));
#line 200 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_118_118, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 200 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_118_118, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_53));
#line 200 "llds_out_file.m"
    }
#line 200 "llds_out_file.m"
    {
#line 200 "llds_out_file.m"
      mercury__list__foldl2_6_p_2((MR_Word) &ll_backend__llds_out__llds_out_file__ll_backend__llds_out__llds_out_file__type_ctor_info_annotated_c_module_0, ll_backend__llds_out__llds_out_file__TypeInfo_142_142, ll_backend__llds_out__llds_out_file__TypeCtorInfo_143_143, ll_backend__llds_out__llds_out_file__V_118_118, ll_backend__llds_out__llds_out_file__AnnotatedModules_54, ((MR_Box) (ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_116_116)), &ll_backend__llds_out__llds_out_file__conv29_STATE_VARIABLE_DeclSet_119_119, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv28_STATE_VARIABLE_IO_120_120);
    }
#line 200 "llds_out_file.m"
    ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_119_119 = ((MR_Word) ll_backend__llds_out__llds_out_file__conv29_STATE_VARIABLE_DeclSet_119_119);
#line 202 "llds_out_file.m"
    {
#line 202 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__V_121_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 202 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_121_121, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_file_scalar_common_4[1]));
#line 202 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_121_121, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_file__output_single_c_file_6_p_0_11));
#line 202 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_121_121, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 202 "llds_out_file.m"
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_file__V_121_121, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_file__Info_53));
#line 202 "llds_out_file.m"
    }
#line 202 "llds_out_file.m"
    {
#line 202 "llds_out_file.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0, ll_backend__llds_out__llds_out_file__TypeCtorInfo_143_143, ll_backend__llds_out__llds_out_file__V_121_121, ll_backend__llds_out__llds_out_file__ForeignBodyCodes_13, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv30_STATE_VARIABLE_IO_122_122);
    }
#line 208 "llds_out_file.m"
    {
#line 208 "llds_out_file.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_defn_0, ll_backend__llds_out__llds_out_file__TypeCtorInfo_143_143, (MR_Word) &ll_backend__llds_out__llds_out_file_scalar_common_2[4], ll_backend__llds_out__llds_out_file__Exports_14, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_file__conv31_STATE_VARIABLE_IO_126_126);
    }
#line 209 "llds_out_file.m"
    {
#line 209 "llds_out_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 210 "llds_out_file.m"
    {
#line 210 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__output_c_module_init_list_15_p_0(ll_backend__llds_out__llds_out_file__Info_53, ll_backend__llds_out__llds_out_file__ModuleName_11, ll_backend__llds_out__llds_out_file__AnnotatedModules_54, ll_backend__llds_out__llds_out_file__RttiDatas_18, ll_backend__llds_out__llds_out_file__ProcLayoutDatas_41, ll_backend__llds_out__llds_out_file__ModuleLayoutDatas_42, ll_backend__llds_out__llds_out_file__ComplexityProcs_49, ll_backend__llds_out__llds_out_file__TSStringTable_36, ll_backend__llds_out__llds_out_file__AllocSites_44, ll_backend__llds_out__llds_out_file__UserInitPredCNames_47, ll_backend__llds_out__llds_out_file__UserFinalPredCNames_48, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_119_119, ll_backend__llds_out__llds_out_file__STATE_VARIABLE_DeclSet_66);
#line 210 "llds_out_file.m"
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
#line 1681 "llds_out_file.m"
  {
#line 1681 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded = (ll_backend__llds_out__llds_out_file__InclCodeAddr_5 == (MR_Integer) 1);
#line 1681 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__HeadVar__3_3;
#line 1683 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_6_6;
#line 1683 "llds_out_file.m"
    MR_Word ll_backend__llds_out__llds_out_file__V_7_7;

#line 1683 "llds_out_file.m"
    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1683 "llds_out_file.m"
      {
#line 1684 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_6_6 = (MR_Integer) 444;
#line 1684 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__V_7_7 = (MR_Integer) 0;
#line 1684 "llds_out_file.m"
        {
#line 1684 "llds_out_file.m"
          ll_backend__llds_out__llds_out_file__succeeded = libs__globals__lookup_bool_option_3_p_1(ll_backend__llds_out__llds_out_file__Globals_4, ll_backend__llds_out__llds_out_file__V_6_6, ll_backend__llds_out__llds_out_file__V_7_7);
        }
#line 1683 "llds_out_file.m"
      }
#line 1681 "llds_out_file.m"
    if (ll_backend__llds_out__llds_out_file__succeeded)
#line 1686 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__HeadVar__3_3 = (MR_String) "";
#line 1681 "llds_out_file.m"
    else
#line 1688 "llds_out_file.m"
      ll_backend__llds_out__llds_out_file__HeadVar__3_3 = (MR_String) "const ";
#line 1681 "llds_out_file.m"
    return ll_backend__llds_out__llds_out_file__HeadVar__3_3;
#line 1681 "llds_out_file.m"
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
#line 1663 "llds_out_file.m"
  {
#line 1663 "llds_out_file.m"
    MR_bool ll_backend__llds_out__llds_out_file__succeeded;
#line 1663 "llds_out_file.m"
    MR_String ll_backend__llds_out__llds_out_file__LinkageStr_6;

#line 1663 "llds_out_file.m"
#line 1663 "llds_out_file.m"
    switch (ll_backend__llds_out__llds_out_file__DefaultLinkage_4) {
#line 1663 "llds_out_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1663 "llds_out_file.m"
      case (MR_Integer) 0:
#line 1667 "llds_out_file.m"
#line 1667 "llds_out_file.m"
        switch (ll_backend__llds_out__llds_out_file__BeingDefined_5) {
#line 1667 "llds_out_file.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1667 "llds_out_file.m"
          case (MR_Integer) 0:
#line 1669 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__LinkageStr_6 = (MR_String) "extern ";
#line 1667 "llds_out_file.m"
            break;
#line 1667 "llds_out_file.m"
          case (MR_Integer) 1:
#line 1666 "llds_out_file.m"
            ll_backend__llds_out__llds_out_file__LinkageStr_6 = (MR_String) "";
#line 1667 "llds_out_file.m"
            break;
#line 1667 "llds_out_file.m"
        }
#line 1663 "llds_out_file.m"
        break;
#line 1663 "llds_out_file.m"
      case (MR_Integer) 1:
#line 1678 "llds_out_file.m"
        ll_backend__llds_out__llds_out_file__LinkageStr_6 = (MR_String) "static ";
#line 1663 "llds_out_file.m"
        break;
#line 1663 "llds_out_file.m"
    }
#line 1663 "llds_out_file.m"
    return ll_backend__llds_out__llds_out_file__LinkageStr_6;
#line 1663 "llds_out_file.m"
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
