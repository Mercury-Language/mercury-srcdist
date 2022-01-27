/*
** Automatically generated from `builtin_ops.m'
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


/* :- module backend_libs.builtin_ops. */
/* :- implementation. */

/*
INIT mercury__backend_libs__builtin_ops__init
ENDINIT
*/

#include "backend_libs.builtin_ops.mih"


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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "io.mih"
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
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
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
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
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
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 129 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_array_elem_type_0_0[1];

#line 132 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_array_elem_type_0_0;

#line 135 "backend_libs.builtin_ops.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__builtin_ops__list__ti_list_1backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0;

#line 138 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_array_elem_type_0_1[1];

#line 141 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_array_elem_type_0_1;

#line 144 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_array_elem_type_0_0[1];

#line 147 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_array_elem_type_0_1[1];

#line 150 "backend_libs.builtin_ops.c"
static const MR_DuPtagLayout backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_array_elem_type_0[2];

#line 153 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_array_elem_type_0[2];

#line 156 "backend_libs.builtin_ops.c"
static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_array_elem_type_0[2];

#line 159 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_0;

#line 162 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_1;

#line 165 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_2;

#line 168 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_3;

#line 171 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_4;

#line 174 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_5;

#line 177 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_6;

#line 180 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_7;

#line 183 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_8;

#line 186 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_9;

#line 189 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_10;

#line 192 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_11;

#line 195 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_12;

#line 198 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_13;

#line 201 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_14;

#line 204 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_binary_op_0_15[1];

#line 207 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_15;

#line 210 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_16;

#line 213 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_17;

#line 216 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_18;

#line 219 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_19;

#line 222 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_20;

#line 225 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_21;

#line 228 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_22;

#line 231 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_23;

#line 234 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_24;

#line 237 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_25;

#line 240 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_26;

#line 243 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_27;

#line 246 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_28;

#line 249 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_29;

#line 252 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_30;

#line 255 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_31;

#line 258 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_32;

#line 261 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_33;

#line 264 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_34;

#line 267 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_35;

#line 270 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_36;

#line 273 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_37;

#line 276 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_38;

#line 279 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_39;

#line 282 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_40;

#line 285 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_41;

#line 288 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_0[41];

#line 291 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_1[1];

#line 294 "backend_libs.builtin_ops.c"
static const MR_DuPtagLayout backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_binary_op_0[2];

#line 297 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_binary_op_0[42];

#line 300 "backend_libs.builtin_ops.c"
static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_binary_op_0[42];

#line 303 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_0;

#line 306 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_1;

#line 309 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_2;

#line 312 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_value_ordered_scalar_array_elem_type_0[3];

#line 315 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_name_ordered_scalar_array_elem_type_0[3];

#line 318 "backend_libs.builtin_ops.c"
static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_scalar_array_elem_type_0[3];

#line 321 "backend_libs.builtin_ops.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__builtin_ops__backend_libs__builtin_ops__pti_simple_expr_1__pseudo_1;

#line 324 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_0[2];

#line 327 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_0;

#line 330 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_1[2];

#line 333 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_1;

#line 336 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_2[1];

#line 339 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_2;

#line 342 "backend_libs.builtin_ops.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__builtin_ops__list__pti_list_1__pseudo_1;

#line 345 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_3[1];

#line 348 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_3;

#line 351 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_0[1];

#line 354 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_1[1];

#line 357 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_2[1];

#line 360 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_3[1];

#line 363 "backend_libs.builtin_ops.c"
static const MR_DuPtagLayout backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_simple_code_1[4];

#line 366 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_simple_code_1[4];

#line 369 "backend_libs.builtin_ops.c"
static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_simple_code_1[4];

#line 372 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_0[1];

#line 375 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_0;

#line 378 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_1[1];

#line 381 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_1;

#line 384 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_2[1];

#line 387 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_2;

#line 390 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_3[2];

#line 393 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_3;

#line 396 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_4[3];

#line 399 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_4;

#line 402 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_0[1];

#line 405 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_1[1];

#line 408 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_2[1];

#line 411 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_3[2];

#line 414 "backend_libs.builtin_ops.c"
static const MR_DuPtagLayout backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_simple_expr_1[4];

#line 417 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_simple_expr_1[5];

#line 420 "backend_libs.builtin_ops.c"
static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_simple_expr_1[5];

#line 423 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_0;

#line 426 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_1;

#line 429 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_2;

#line 432 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_3;

#line 435 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_4;

#line 438 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_5;

#line 441 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_6;

#line 444 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_7;

#line 447 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_8;

#line 450 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_9;

#line 453 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_10;

#line 456 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_value_ordered_unary_op_0[11];

#line 459 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_name_ordered_unary_op_0[11];

#line 462 "backend_libs.builtin_ops.c"
static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_unary_op_0[11];

#line 465 "backend_libs.builtin_ops.c"
static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____array_elem_type_0_0_10001(
#line 468 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 470 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2);

#line 473 "backend_libs.builtin_ops.c"
static void MR_CALL 
backend_libs__builtin_ops____Compare____array_elem_type_0_0_10001(
#line 476 "backend_libs.builtin_ops.c"
  MR_Box * backend_libs__builtin_ops__wrapper_arg_1,
#line 478 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
#line 480 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3);

#line 483 "backend_libs.builtin_ops.c"
static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____binary_op_0_0_10001(
#line 486 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 488 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2);

#line 491 "backend_libs.builtin_ops.c"
static void MR_CALL 
backend_libs__builtin_ops____Compare____binary_op_0_0_10001(
#line 494 "backend_libs.builtin_ops.c"
  MR_Box * backend_libs__builtin_ops__wrapper_arg_1,
#line 496 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
#line 498 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3);

#line 501 "backend_libs.builtin_ops.c"
static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____scalar_array_elem_type_0_0_10001(
#line 504 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 506 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2);

#line 509 "backend_libs.builtin_ops.c"
static void MR_CALL 
backend_libs__builtin_ops____Compare____scalar_array_elem_type_0_0_10001(
#line 512 "backend_libs.builtin_ops.c"
  MR_Box * backend_libs__builtin_ops__wrapper_arg_1,
#line 514 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
#line 516 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3);

#line 519 "backend_libs.builtin_ops.c"
static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____simple_code_1_0_10001(
#line 522 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 524 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
#line 526 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3);

#line 529 "backend_libs.builtin_ops.c"
static void MR_CALL 
backend_libs__builtin_ops____Compare____simple_code_1_0_10001(
#line 532 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 534 "backend_libs.builtin_ops.c"
  MR_Box * backend_libs__builtin_ops__wrapper_arg_2,
#line 536 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3,
#line 538 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_4);

#line 541 "backend_libs.builtin_ops.c"
static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____simple_expr_1_0_10001(
#line 544 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 546 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
#line 548 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3);

#line 551 "backend_libs.builtin_ops.c"
static void MR_CALL 
backend_libs__builtin_ops____Compare____simple_expr_1_0_10001(
#line 554 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 556 "backend_libs.builtin_ops.c"
  MR_Box * backend_libs__builtin_ops__wrapper_arg_2,
#line 558 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3,
#line 560 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_4);

#line 563 "backend_libs.builtin_ops.c"
static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____unary_op_0_0_10001(
#line 566 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 568 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2);

#line 571 "backend_libs.builtin_ops.c"
static void MR_CALL 
backend_libs__builtin_ops____Compare____unary_op_0_0_10001(
#line 574 "backend_libs.builtin_ops.c"
  MR_Box * backend_libs__builtin_ops__wrapper_arg_1,
#line 576 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
#line 578 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3);

#line 181 "builtin_ops.m"
static MR_bool MR_CALL 
backend_libs__builtin_ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_p_0(
#line 181 "builtin_ops.m"
  MR_String backend_libs__builtin_ops__HeadVar__1_1,
#line 181 "builtin_ops.m"
  MR_String backend_libs__builtin_ops__HeadVar__2_2,
#line 181 "builtin_ops.m"
  MR_Integer backend_libs__builtin_ops__HeadVar__3_3,
#line 181 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__4_4,
#line 181 "builtin_ops.m"
  MR_Word * backend_libs__builtin_ops__HeadVar__5_5);


static /* final */ const MR_Box backend_libs__builtin_ops_scalar_common_1[1][2];

static /* final */ const MR_Box backend_libs__builtin_ops_scalar_common_2[3][1];

static /* final */ const MR_Float backend_libs__builtin_ops_scalar_common_3[1];




static /* final */ const MR_Box backend_libs__builtin_ops_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0))
  },
};

static /* final */ const MR_Box backend_libs__builtin_ops_scalar_common_2[3][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    (MR_Box) &backend_libs__builtin_ops_scalar_common_3[0]
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Float backend_libs__builtin_ops_scalar_common_3[1] = {
  /* row 0 */
  (MR_Float) 0.0000000000000000,
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 650 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_array_elem_type_0_0[1] = {
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0
};

#line 655 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_array_elem_type_0_0 = {
  (MR_String) "array_elem_scalar",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_array_elem_type_0_0,
  NULL,
  NULL,
  NULL
};

#line 670 "backend_libs.builtin_ops.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__builtin_ops__list__ti_list_1backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0
  }
};

#line 678 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_array_elem_type_0_1[1] = {
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__list__ti_list_1backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0
};

#line 683 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_array_elem_type_0_1 = {
  (MR_String) "array_elem_struct",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_array_elem_type_0_1,
  NULL,
  NULL,
  NULL
};

#line 698 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_array_elem_type_0_0[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_array_elem_type_0_0
};

#line 703 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_array_elem_type_0_1[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_array_elem_type_0_1
};

#line 708 "backend_libs.builtin_ops.c"
static const MR_DuPtagLayout backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_array_elem_type_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_array_elem_type_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_array_elem_type_0_1
  }
};

#line 722 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_array_elem_type_0[2] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_array_elem_type_0_0,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_array_elem_type_0_1
};

#line 728 "backend_libs.builtin_ops.c"
static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_array_elem_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 734 "backend_libs.builtin_ops.c"
const MR_TypeCtorInfo_Struct backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_array_elem_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__builtin_ops____Unify____array_elem_type_0_0_10001)),
  ((MR_Box) (backend_libs__builtin_ops____Compare____array_elem_type_0_0_10001)),
  (MR_String) "backend_libs.builtin_ops",
  (MR_String) "array_elem_type",
  {
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_array_elem_type_0
  },
  {
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_array_elem_type_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_array_elem_type_0
};

#line 755 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_0 = {
  (MR_String) "int_add",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 770 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_1 = {
  (MR_String) "int_sub",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 785 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_2 = {
  (MR_String) "int_mul",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 800 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_3 = {
  (MR_String) "int_div",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 815 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_4 = {
  (MR_String) "int_mod",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 4,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 830 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_5 = {
  (MR_String) "unchecked_left_shift",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 5,
  (MR_Integer) 5,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 845 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_6 = {
  (MR_String) "unchecked_right_shift",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 6,
  (MR_Integer) 6,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 860 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_7 = {
  (MR_String) "bitwise_and",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 7,
  (MR_Integer) 7,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 875 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_8 = {
  (MR_String) "bitwise_or",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 8,
  (MR_Integer) 8,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 890 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_9 = {
  (MR_String) "bitwise_xor",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 9,
  (MR_Integer) 9,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 905 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_10 = {
  (MR_String) "logical_and",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 10,
  (MR_Integer) 10,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 920 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_11 = {
  (MR_String) "logical_or",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 11,
  (MR_Integer) 11,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 935 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_12 = {
  (MR_String) "eq",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 12,
  (MR_Integer) 12,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 950 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_13 = {
  (MR_String) "ne",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 13,
  (MR_Integer) 13,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 965 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_14 = {
  (MR_String) "body",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 14,
  (MR_Integer) 14,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 980 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_binary_op_0_15[1] = {
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_array_elem_type_0
};

#line 985 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_15 = {
  (MR_String) "array_index",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 15,
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_binary_op_0_15,
  NULL,
  NULL,
  NULL
};

#line 1000 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_16 = {
  (MR_String) "str_eq",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 16,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1015 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_17 = {
  (MR_String) "str_ne",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 17,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1030 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_18 = {
  (MR_String) "str_lt",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 18,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1045 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_19 = {
  (MR_String) "str_gt",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 18,
  (MR_Integer) 19,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1060 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_20 = {
  (MR_String) "str_le",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 19,
  (MR_Integer) 20,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1075 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_21 = {
  (MR_String) "str_ge",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 20,
  (MR_Integer) 21,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1090 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_22 = {
  (MR_String) "str_cmp",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 21,
  (MR_Integer) 22,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1105 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_23 = {
  (MR_String) "int_lt",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 22,
  (MR_Integer) 23,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1120 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_24 = {
  (MR_String) "int_gt",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 23,
  (MR_Integer) 24,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1135 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_25 = {
  (MR_String) "int_le",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 24,
  (MR_Integer) 25,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1150 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_26 = {
  (MR_String) "int_ge",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 25,
  (MR_Integer) 26,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1165 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_27 = {
  (MR_String) "unsigned_le",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 26,
  (MR_Integer) 27,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1180 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_28 = {
  (MR_String) "float_plus",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 27,
  (MR_Integer) 28,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1195 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_29 = {
  (MR_String) "float_minus",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 28,
  (MR_Integer) 29,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1210 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_30 = {
  (MR_String) "float_times",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 29,
  (MR_Integer) 30,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1225 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_31 = {
  (MR_String) "float_divide",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 30,
  (MR_Integer) 31,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1240 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_32 = {
  (MR_String) "float_eq",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 31,
  (MR_Integer) 32,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1255 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_33 = {
  (MR_String) "float_ne",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 32,
  (MR_Integer) 33,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1270 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_34 = {
  (MR_String) "float_lt",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 33,
  (MR_Integer) 34,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1285 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_35 = {
  (MR_String) "float_gt",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 34,
  (MR_Integer) 35,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1300 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_36 = {
  (MR_String) "float_le",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 35,
  (MR_Integer) 36,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1315 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_37 = {
  (MR_String) "float_ge",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 36,
  (MR_Integer) 37,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1330 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_38 = {
  (MR_String) "float_word_bits",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 37,
  (MR_Integer) 38,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1345 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_39 = {
  (MR_String) "float_from_dword",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 38,
  (MR_Integer) 39,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1360 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_40 = {
  (MR_String) "compound_eq",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 39,
  (MR_Integer) 40,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1375 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_41 = {
  (MR_String) "compound_lt",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 40,
  (MR_Integer) 41,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1390 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_0[41] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_0,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_1,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_2,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_3,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_4,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_5,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_6,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_7,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_8,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_9,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_10,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_11,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_12,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_13,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_14,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_16,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_17,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_18,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_19,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_20,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_21,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_22,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_23,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_24,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_25,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_26,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_27,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_28,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_29,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_30,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_31,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_32,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_33,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_34,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_35,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_36,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_37,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_38,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_39,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_40,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_41
};

#line 1435 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_1[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_15
};

#line 1440 "backend_libs.builtin_ops.c"
static const MR_DuPtagLayout backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_binary_op_0[2] = {
  {
    (MR_Integer) 41,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_1
  }
};

#line 1454 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_binary_op_0[42] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_15,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_7,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_8,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_9,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_14,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_40,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_41,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_12,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_31,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_32,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_39,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_37,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_35,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_36,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_34,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_29,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_33,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_28,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_30,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_38,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_0,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_3,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_26,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_24,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_25,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_23,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_4,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_2,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_1,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_10,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_11,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_13,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_22,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_16,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_21,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_19,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_20,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_18,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_17,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_5,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_6,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_27
};

#line 1500 "backend_libs.builtin_ops.c"
static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_binary_op_0[42] = {
  (MR_Integer) 20,
  (MR_Integer) 28,
  (MR_Integer) 27,
  (MR_Integer) 21,
  (MR_Integer) 26,
  (MR_Integer) 39,
  (MR_Integer) 40,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 29,
  (MR_Integer) 30,
  (MR_Integer) 7,
  (MR_Integer) 31,
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 33,
  (MR_Integer) 38,
  (MR_Integer) 37,
  (MR_Integer) 35,
  (MR_Integer) 36,
  (MR_Integer) 34,
  (MR_Integer) 32,
  (MR_Integer) 25,
  (MR_Integer) 23,
  (MR_Integer) 24,
  (MR_Integer) 22,
  (MR_Integer) 41,
  (MR_Integer) 17,
  (MR_Integer) 15,
  (MR_Integer) 18,
  (MR_Integer) 8,
  (MR_Integer) 9,
  (MR_Integer) 16,
  (MR_Integer) 14,
  (MR_Integer) 12,
  (MR_Integer) 13,
  (MR_Integer) 11,
  (MR_Integer) 19,
  (MR_Integer) 10,
  (MR_Integer) 5,
  (MR_Integer) 6
};

#line 1546 "backend_libs.builtin_ops.c"
const MR_TypeCtorInfo_Struct backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_binary_op_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__builtin_ops____Unify____binary_op_0_0_10001)),
  ((MR_Box) (backend_libs__builtin_ops____Compare____binary_op_0_0_10001)),
  (MR_String) "backend_libs.builtin_ops",
  (MR_String) "binary_op",
  {
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_binary_op_0
  },
  {
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_binary_op_0
  },
  (MR_Integer) 42,
  (MR_Integer) 4,
  backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_binary_op_0
};

#line 1567 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_0 = {
  (MR_String) "scalar_elem_string",
  (MR_Integer) 0
};

#line 1573 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_1 = {
  (MR_String) "scalar_elem_int",
  (MR_Integer) 1
};

#line 1579 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_2 = {
  (MR_String) "scalar_elem_generic",
  (MR_Integer) 2
};

#line 1585 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_value_ordered_scalar_array_elem_type_0[3] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_0,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_1,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_2
};

#line 1592 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_name_ordered_scalar_array_elem_type_0[3] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_2,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_1,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_0
};

#line 1599 "backend_libs.builtin_ops.c"
static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_scalar_array_elem_type_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1606 "backend_libs.builtin_ops.c"
const MR_TypeCtorInfo_Struct backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__builtin_ops____Unify____scalar_array_elem_type_0_0_10001)),
  ((MR_Box) (backend_libs__builtin_ops____Compare____scalar_array_elem_type_0_0_10001)),
  (MR_String) "backend_libs.builtin_ops",
  (MR_String) "scalar_array_elem_type",
  {
    backend_libs__builtin_ops__backend_libs__builtin_ops__enum_name_ordered_scalar_array_elem_type_0
  },
  {
    backend_libs__builtin_ops__backend_libs__builtin_ops__enum_value_ordered_scalar_array_elem_type_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_scalar_array_elem_type_0
};

#line 1627 "backend_libs.builtin_ops.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__builtin_ops__backend_libs__builtin_ops__pti_simple_expr_1__pseudo_1 = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_simple_expr_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1635 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_0[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__pti_simple_expr_1__pseudo_1
};

#line 1641 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_0 = {
  (MR_String) "assign",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_0,
  NULL,
  NULL,
  NULL
};

#line 1656 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_1[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 1662 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_1 = {
  (MR_String) "ref_assign",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_1,
  NULL,
  NULL,
  NULL
};

#line 1677 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_2[1] = {
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__pti_simple_expr_1__pseudo_1
};

#line 1682 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_2 = {
  (MR_String) "test",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_2,
  NULL,
  NULL,
  NULL
};

#line 1697 "backend_libs.builtin_ops.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__builtin_ops__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1705 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_3[1] = {
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__list__pti_list_1__pseudo_1
};

#line 1710 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_3 = {
  (MR_String) "noop",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 3,
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_3,
  NULL,
  NULL,
  NULL
};

#line 1725 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_0[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_0
};

#line 1730 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_1[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_1
};

#line 1735 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_2[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_2
};

#line 1740 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_3[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_3
};

#line 1745 "backend_libs.builtin_ops.c"
static const MR_DuPtagLayout backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_simple_code_1[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_2
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_3
  }
};

#line 1769 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_simple_code_1[4] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_0,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_3,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_1,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_2
};

#line 1777 "backend_libs.builtin_ops.c"
static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_simple_code_1[4] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1
};

#line 1785 "backend_libs.builtin_ops.c"
const MR_TypeCtorInfo_Struct backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_simple_code_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__builtin_ops____Unify____simple_code_1_0_10001)),
  ((MR_Box) (backend_libs__builtin_ops____Compare____simple_code_1_0_10001)),
  (MR_String) "backend_libs.builtin_ops",
  (MR_String) "simple_code",
  {
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_simple_code_1
  },
  {
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_simple_code_1
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_simple_code_1
};

#line 1806 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 1811 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_0 = {
  (MR_String) "leaf",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_0,
  NULL,
  NULL,
  NULL
};

#line 1826 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1831 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_1 = {
  (MR_String) "int_const",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_1,
  NULL,
  NULL,
  NULL
};

#line 1846 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 1851 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_2 = {
  (MR_String) "float_const",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_2,
  NULL,
  NULL,
  NULL
};

#line 1866 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_3[2] = {
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_unary_op_0,
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__pti_simple_expr_1__pseudo_1
};

#line 1872 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_3 = {
  (MR_String) "unary",
  (MR_Integer) 2,
  (MR_Integer) 2,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_3,
  NULL,
  NULL,
  NULL
};

#line 1887 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_4[3] = {
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_binary_op_0,
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__pti_simple_expr_1__pseudo_1,
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__pti_simple_expr_1__pseudo_1
};

#line 1894 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_4 = {
  (MR_String) "binary",
  (MR_Integer) 3,
  (MR_Integer) 6,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_4,
  NULL,
  NULL,
  NULL
};

#line 1909 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_0[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_0
};

#line 1914 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_1[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_1
};

#line 1919 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_2[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_2
};

#line 1924 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_3[2] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_3,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_4
};

#line 1930 "backend_libs.builtin_ops.c"
static const MR_DuPtagLayout backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_simple_expr_1[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_2
  },
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_3
  }
};

#line 1954 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_simple_expr_1[5] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_4,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_2,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_1,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_0,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_3
};

#line 1963 "backend_libs.builtin_ops.c"
static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_simple_expr_1[5] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 0
};

#line 1972 "backend_libs.builtin_ops.c"
const MR_TypeCtorInfo_Struct backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_simple_expr_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__builtin_ops____Unify____simple_expr_1_0_10001)),
  ((MR_Box) (backend_libs__builtin_ops____Compare____simple_expr_1_0_10001)),
  (MR_String) "backend_libs.builtin_ops",
  (MR_String) "simple_expr",
  {
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_simple_expr_1
  },
  {
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_simple_expr_1
  },
  (MR_Integer) 5,
  (MR_Integer) 4,
  backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_simple_expr_1
};

#line 1993 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_0 = {
  (MR_String) "mktag",
  (MR_Integer) 0
};

#line 1999 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_1 = {
  (MR_String) "tag",
  (MR_Integer) 1
};

#line 2005 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_2 = {
  (MR_String) "unmktag",
  (MR_Integer) 2
};

#line 2011 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_3 = {
  (MR_String) "strip_tag",
  (MR_Integer) 3
};

#line 2017 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_4 = {
  (MR_String) "mkbody",
  (MR_Integer) 4
};

#line 2023 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_5 = {
  (MR_String) "unmkbody",
  (MR_Integer) 5
};

#line 2029 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_6 = {
  (MR_String) "bitwise_complement",
  (MR_Integer) 6
};

#line 2035 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_7 = {
  (MR_String) "logical_not",
  (MR_Integer) 7
};

#line 2041 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_8 = {
  (MR_String) "hash_string",
  (MR_Integer) 8
};

#line 2047 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_9 = {
  (MR_String) "hash_string2",
  (MR_Integer) 9
};

#line 2053 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_10 = {
  (MR_String) "hash_string3",
  (MR_Integer) 10
};

#line 2059 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_value_ordered_unary_op_0[11] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_0,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_1,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_2,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_3,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_4,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_5,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_6,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_7,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_8,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_9,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_10
};

#line 2074 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_name_ordered_unary_op_0[11] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_6,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_8,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_9,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_10,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_7,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_4,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_0,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_3,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_1,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_5,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_2
};

#line 2089 "backend_libs.builtin_ops.c"
static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_unary_op_0[11] = {
  (MR_Integer) 6,
  (MR_Integer) 8,
  (MR_Integer) 10,
  (MR_Integer) 7,
  (MR_Integer) 5,
  (MR_Integer) 9,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3
};

#line 2104 "backend_libs.builtin_ops.c"
const MR_TypeCtorInfo_Struct backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_unary_op_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__builtin_ops____Unify____unary_op_0_0_10001)),
  ((MR_Box) (backend_libs__builtin_ops____Compare____unary_op_0_0_10001)),
  (MR_String) "backend_libs.builtin_ops",
  (MR_String) "unary_op",
  {
    backend_libs__builtin_ops__backend_libs__builtin_ops__enum_name_ordered_unary_op_0
  },
  {
    backend_libs__builtin_ops__backend_libs__builtin_ops__enum_value_ordered_unary_op_0
  },
  (MR_Integer) 11,
  (MR_Integer) 4,
  backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_unary_op_0
};

#line 2125 "backend_libs.builtin_ops.c"
static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____array_elem_type_0_0_10001(
#line 2128 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 2130 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2)
#line 2132 "backend_libs.builtin_ops.c"
{
#line 2134 "backend_libs.builtin_ops.c"
  {
#line 2136 "backend_libs.builtin_ops.c"
    MR_bool backend_libs__builtin_ops__succeeded;

#line 2139 "backend_libs.builtin_ops.c"
    {
#line 2141 "backend_libs.builtin_ops.c"
      backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____array_elem_type_0_0(((MR_Word) backend_libs__builtin_ops__wrapper_arg_1), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_2));
    }
#line 2144 "backend_libs.builtin_ops.c"
    return backend_libs__builtin_ops__succeeded;
#line 2146 "backend_libs.builtin_ops.c"
  }
#line 2148 "backend_libs.builtin_ops.c"
}

#line 2151 "backend_libs.builtin_ops.c"
static void MR_CALL 
backend_libs__builtin_ops____Compare____array_elem_type_0_0_10001(
#line 2154 "backend_libs.builtin_ops.c"
  MR_Box * backend_libs__builtin_ops__wrapper_arg_1,
#line 2156 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
#line 2158 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3)
#line 2160 "backend_libs.builtin_ops.c"
{
#line 2162 "backend_libs.builtin_ops.c"
  {
#line 2164 "backend_libs.builtin_ops.c"
    MR_Word backend_libs__builtin_ops__conv0_HeadVar__1_1;

#line 2167 "backend_libs.builtin_ops.c"
    {
#line 2169 "backend_libs.builtin_ops.c"
      backend_libs__builtin_ops____Compare____array_elem_type_0_0(&backend_libs__builtin_ops__conv0_HeadVar__1_1, ((MR_Word) backend_libs__builtin_ops__wrapper_arg_2), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_3));
    }
#line 2172 "backend_libs.builtin_ops.c"
    *backend_libs__builtin_ops__wrapper_arg_1 = ((MR_Box) (backend_libs__builtin_ops__conv0_HeadVar__1_1));
#line 2174 "backend_libs.builtin_ops.c"
  }
#line 2176 "backend_libs.builtin_ops.c"
}

#line 2179 "backend_libs.builtin_ops.c"
static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____binary_op_0_0_10001(
#line 2182 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 2184 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2)
#line 2186 "backend_libs.builtin_ops.c"
{
#line 2188 "backend_libs.builtin_ops.c"
  {
#line 2190 "backend_libs.builtin_ops.c"
    MR_bool backend_libs__builtin_ops__succeeded;

#line 2193 "backend_libs.builtin_ops.c"
    {
#line 2195 "backend_libs.builtin_ops.c"
      backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____binary_op_0_0(((MR_Word) backend_libs__builtin_ops__wrapper_arg_1), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_2));
    }
#line 2198 "backend_libs.builtin_ops.c"
    return backend_libs__builtin_ops__succeeded;
#line 2200 "backend_libs.builtin_ops.c"
  }
#line 2202 "backend_libs.builtin_ops.c"
}

#line 2205 "backend_libs.builtin_ops.c"
static void MR_CALL 
backend_libs__builtin_ops____Compare____binary_op_0_0_10001(
#line 2208 "backend_libs.builtin_ops.c"
  MR_Box * backend_libs__builtin_ops__wrapper_arg_1,
#line 2210 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
#line 2212 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3)
#line 2214 "backend_libs.builtin_ops.c"
{
#line 2216 "backend_libs.builtin_ops.c"
  {
#line 2218 "backend_libs.builtin_ops.c"
    MR_Word backend_libs__builtin_ops__conv0_HeadVar__1_1;

#line 2221 "backend_libs.builtin_ops.c"
    {
#line 2223 "backend_libs.builtin_ops.c"
      backend_libs__builtin_ops____Compare____binary_op_0_0(&backend_libs__builtin_ops__conv0_HeadVar__1_1, ((MR_Word) backend_libs__builtin_ops__wrapper_arg_2), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_3));
    }
#line 2226 "backend_libs.builtin_ops.c"
    *backend_libs__builtin_ops__wrapper_arg_1 = ((MR_Box) (backend_libs__builtin_ops__conv0_HeadVar__1_1));
#line 2228 "backend_libs.builtin_ops.c"
  }
#line 2230 "backend_libs.builtin_ops.c"
}

#line 2233 "backend_libs.builtin_ops.c"
static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____scalar_array_elem_type_0_0_10001(
#line 2236 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 2238 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2)
#line 2240 "backend_libs.builtin_ops.c"
{
#line 2242 "backend_libs.builtin_ops.c"
  {
#line 2244 "backend_libs.builtin_ops.c"
    MR_bool backend_libs__builtin_ops__succeeded;

#line 2247 "backend_libs.builtin_ops.c"
    {
#line 2249 "backend_libs.builtin_ops.c"
      backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____scalar_array_elem_type_0_0(((MR_Word) backend_libs__builtin_ops__wrapper_arg_1), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_2));
    }
#line 2252 "backend_libs.builtin_ops.c"
    return backend_libs__builtin_ops__succeeded;
#line 2254 "backend_libs.builtin_ops.c"
  }
#line 2256 "backend_libs.builtin_ops.c"
}

#line 2259 "backend_libs.builtin_ops.c"
static void MR_CALL 
backend_libs__builtin_ops____Compare____scalar_array_elem_type_0_0_10001(
#line 2262 "backend_libs.builtin_ops.c"
  MR_Box * backend_libs__builtin_ops__wrapper_arg_1,
#line 2264 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
#line 2266 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3)
#line 2268 "backend_libs.builtin_ops.c"
{
#line 2270 "backend_libs.builtin_ops.c"
  {
#line 2272 "backend_libs.builtin_ops.c"
    MR_Word backend_libs__builtin_ops__conv0_HeadVar__1_1;

#line 2275 "backend_libs.builtin_ops.c"
    {
#line 2277 "backend_libs.builtin_ops.c"
      backend_libs__builtin_ops____Compare____scalar_array_elem_type_0_0(&backend_libs__builtin_ops__conv0_HeadVar__1_1, ((MR_Word) backend_libs__builtin_ops__wrapper_arg_2), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_3));
    }
#line 2280 "backend_libs.builtin_ops.c"
    *backend_libs__builtin_ops__wrapper_arg_1 = ((MR_Box) (backend_libs__builtin_ops__conv0_HeadVar__1_1));
#line 2282 "backend_libs.builtin_ops.c"
  }
#line 2284 "backend_libs.builtin_ops.c"
}

#line 2287 "backend_libs.builtin_ops.c"
static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____simple_code_1_0_10001(
#line 2290 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 2292 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
#line 2294 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3)
#line 2296 "backend_libs.builtin_ops.c"
{
#line 2298 "backend_libs.builtin_ops.c"
  {
#line 2300 "backend_libs.builtin_ops.c"
    MR_bool backend_libs__builtin_ops__succeeded;

#line 2303 "backend_libs.builtin_ops.c"
    {
#line 2305 "backend_libs.builtin_ops.c"
      backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____simple_code_1_0(((MR_Word) backend_libs__builtin_ops__wrapper_arg_1), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_2), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_3));
    }
#line 2308 "backend_libs.builtin_ops.c"
    return backend_libs__builtin_ops__succeeded;
#line 2310 "backend_libs.builtin_ops.c"
  }
#line 2312 "backend_libs.builtin_ops.c"
}

#line 2315 "backend_libs.builtin_ops.c"
static void MR_CALL 
backend_libs__builtin_ops____Compare____simple_code_1_0_10001(
#line 2318 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 2320 "backend_libs.builtin_ops.c"
  MR_Box * backend_libs__builtin_ops__wrapper_arg_2,
#line 2322 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3,
#line 2324 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_4)
#line 2326 "backend_libs.builtin_ops.c"
{
#line 2328 "backend_libs.builtin_ops.c"
  {
#line 2330 "backend_libs.builtin_ops.c"
    MR_Word backend_libs__builtin_ops__conv0_HeadVar__1_1;

#line 2333 "backend_libs.builtin_ops.c"
    {
#line 2335 "backend_libs.builtin_ops.c"
      backend_libs__builtin_ops____Compare____simple_code_1_0(((MR_Word) backend_libs__builtin_ops__wrapper_arg_1), &backend_libs__builtin_ops__conv0_HeadVar__1_1, ((MR_Word) backend_libs__builtin_ops__wrapper_arg_3), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_4));
    }
#line 2338 "backend_libs.builtin_ops.c"
    *backend_libs__builtin_ops__wrapper_arg_2 = ((MR_Box) (backend_libs__builtin_ops__conv0_HeadVar__1_1));
#line 2340 "backend_libs.builtin_ops.c"
  }
#line 2342 "backend_libs.builtin_ops.c"
}

#line 2345 "backend_libs.builtin_ops.c"
static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____simple_expr_1_0_10001(
#line 2348 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 2350 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
#line 2352 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3)
#line 2354 "backend_libs.builtin_ops.c"
{
#line 2356 "backend_libs.builtin_ops.c"
  {
#line 2358 "backend_libs.builtin_ops.c"
    MR_bool backend_libs__builtin_ops__succeeded;

#line 2361 "backend_libs.builtin_ops.c"
    {
#line 2363 "backend_libs.builtin_ops.c"
      backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____simple_expr_1_0(((MR_Word) backend_libs__builtin_ops__wrapper_arg_1), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_2), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_3));
    }
#line 2366 "backend_libs.builtin_ops.c"
    return backend_libs__builtin_ops__succeeded;
#line 2368 "backend_libs.builtin_ops.c"
  }
#line 2370 "backend_libs.builtin_ops.c"
}

#line 2373 "backend_libs.builtin_ops.c"
static void MR_CALL 
backend_libs__builtin_ops____Compare____simple_expr_1_0_10001(
#line 2376 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 2378 "backend_libs.builtin_ops.c"
  MR_Box * backend_libs__builtin_ops__wrapper_arg_2,
#line 2380 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3,
#line 2382 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_4)
#line 2384 "backend_libs.builtin_ops.c"
{
#line 2386 "backend_libs.builtin_ops.c"
  {
#line 2388 "backend_libs.builtin_ops.c"
    MR_Word backend_libs__builtin_ops__conv0_HeadVar__1_1;

#line 2391 "backend_libs.builtin_ops.c"
    {
#line 2393 "backend_libs.builtin_ops.c"
      backend_libs__builtin_ops____Compare____simple_expr_1_0(((MR_Word) backend_libs__builtin_ops__wrapper_arg_1), &backend_libs__builtin_ops__conv0_HeadVar__1_1, ((MR_Word) backend_libs__builtin_ops__wrapper_arg_3), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_4));
    }
#line 2396 "backend_libs.builtin_ops.c"
    *backend_libs__builtin_ops__wrapper_arg_2 = ((MR_Box) (backend_libs__builtin_ops__conv0_HeadVar__1_1));
#line 2398 "backend_libs.builtin_ops.c"
  }
#line 2400 "backend_libs.builtin_ops.c"
}

#line 2403 "backend_libs.builtin_ops.c"
static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____unary_op_0_0_10001(
#line 2406 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 2408 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2)
#line 2410 "backend_libs.builtin_ops.c"
{
#line 2412 "backend_libs.builtin_ops.c"
  {
#line 2414 "backend_libs.builtin_ops.c"
    MR_bool backend_libs__builtin_ops__succeeded;

#line 2417 "backend_libs.builtin_ops.c"
    {
#line 2419 "backend_libs.builtin_ops.c"
      backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____unary_op_0_0(((MR_Word) backend_libs__builtin_ops__wrapper_arg_1), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_2));
    }
#line 2422 "backend_libs.builtin_ops.c"
    return backend_libs__builtin_ops__succeeded;
#line 2424 "backend_libs.builtin_ops.c"
  }
#line 2426 "backend_libs.builtin_ops.c"
}

#line 2429 "backend_libs.builtin_ops.c"
static void MR_CALL 
backend_libs__builtin_ops____Compare____unary_op_0_0_10001(
#line 2432 "backend_libs.builtin_ops.c"
  MR_Box * backend_libs__builtin_ops__wrapper_arg_1,
#line 2434 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
#line 2436 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3)
#line 2438 "backend_libs.builtin_ops.c"
{
#line 2440 "backend_libs.builtin_ops.c"
  {
#line 2442 "backend_libs.builtin_ops.c"
    MR_Word backend_libs__builtin_ops__conv0_HeadVar__1_1;

#line 2445 "backend_libs.builtin_ops.c"
    {
#line 2447 "backend_libs.builtin_ops.c"
      backend_libs__builtin_ops____Compare____unary_op_0_0(&backend_libs__builtin_ops__conv0_HeadVar__1_1, ((MR_Word) backend_libs__builtin_ops__wrapper_arg_2), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_3));
    }
#line 2450 "backend_libs.builtin_ops.c"
    *backend_libs__builtin_ops__wrapper_arg_1 = ((MR_Box) (backend_libs__builtin_ops__conv0_HeadVar__1_1));
#line 2452 "backend_libs.builtin_ops.c"
  }
#line 2454 "backend_libs.builtin_ops.c"
}

#line 181 "builtin_ops.m"
static MR_bool MR_CALL 
backend_libs__builtin_ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_p_0(
#line 181 "builtin_ops.m"
  MR_String backend_libs__builtin_ops__HeadVar__1_1,
#line 181 "builtin_ops.m"
  MR_String backend_libs__builtin_ops__HeadVar__2_2,
#line 181 "builtin_ops.m"
  MR_Integer backend_libs__builtin_ops__HeadVar__3_3,
#line 181 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__4_4,
#line 181 "builtin_ops.m"
  MR_Word * backend_libs__builtin_ops__HeadVar__5_5)
#line 181 "builtin_ops.m"
{
#line 184 "builtin_ops.m"
  {
#line 184 "builtin_ops.m"
    MR_bool backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
#line 184 "builtin_ops.m"
    MR_Word backend_libs__builtin_ops__V_431_431;
#line 184 "builtin_ops.m"
    MR_Box backend_libs__builtin_ops__V_432_432;

#line 200 "builtin_ops.m"
    if (backend_libs__builtin_ops__succeeded)
#line 200 "builtin_ops.m"
      {
#line 200 "builtin_ops.m"
        backend_libs__builtin_ops__V_432_432 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__4_4, (MR_Integer) 0));
#line 200 "builtin_ops.m"
        backend_libs__builtin_ops__V_431_431 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__4_4, (MR_Integer) 1)));
#line 184 "builtin_ops.m"
        if ((strcmp(backend_libs__builtin_ops__HeadVar__1_1, (MR_String) "int") == 0))
#line 184 "builtin_ops.m"
          {
#line 184 "builtin_ops.m"
            MR_Word backend_libs__builtin_ops__V_443_443;
#line 184 "builtin_ops.m"
            MR_Box backend_libs__builtin_ops__V_444_444;

#line 232 "builtin_ops.m"
            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_431_431)) == (MR_mktag((MR_Integer) 1)));
#line 232 "builtin_ops.m"
            if (backend_libs__builtin_ops__succeeded)
#line 232 "builtin_ops.m"
              {
#line 232 "builtin_ops.m"
                backend_libs__builtin_ops__V_444_444 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_431_431, (MR_Integer) 0));
#line 232 "builtin_ops.m"
                backend_libs__builtin_ops__V_443_443 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_431_431, (MR_Integer) 1)));
#line 184 "builtin_ops.m"
                if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "*") == 0))
#line 232 "builtin_ops.m"
                  {
#line 232 "builtin_ops.m"
                    MR_Box backend_libs__builtin_ops__Z_155;
#line 232 "builtin_ops.m"
                    MR_Word backend_libs__builtin_ops__V_158_158;
#line 232 "builtin_ops.m"
                    MR_Word backend_libs__builtin_ops__V_159_159;
#line 232 "builtin_ops.m"
                    MR_Word backend_libs__builtin_ops__V_160_160;
#line 232 "builtin_ops.m"
                    MR_Word backend_libs__builtin_ops__V_161_161;
#line 232 "builtin_ops.m"
                    MR_Word backend_libs__builtin_ops__V_162_162;

#line 232 "builtin_ops.m"
                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__HeadVar__3_3 == (MR_Integer) 0);
#line 232 "builtin_ops.m"
                    if (backend_libs__builtin_ops__succeeded)
#line 232 "builtin_ops.m"
                      {
#line 232 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_443_443)) == (MR_mktag((MR_Integer) 1)));
#line 232 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 232 "builtin_ops.m"
                          {
#line 232 "builtin_ops.m"
                            backend_libs__builtin_ops__Z_155 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 0));
#line 232 "builtin_ops.m"
                            backend_libs__builtin_ops__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 1)));
#line 232 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_158_158 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 232 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 232 "builtin_ops.m"
                              {
#line 233 "builtin_ops.m"
                                backend_libs__builtin_ops__V_160_160 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 233 "builtin_ops.m"
                                {
#line 233 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_161_161 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 233 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_161_161, 0) = backend_libs__builtin_ops__V_432_432;
#line 233 "builtin_ops.m"
                                }
#line 233 "builtin_ops.m"
                                {
#line 233 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_162_162 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 233 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_162_162, 0) = backend_libs__builtin_ops__V_444_444;
#line 233 "builtin_ops.m"
                                }
#line 233 "builtin_ops.m"
                                {
#line 233 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_159_159 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 233 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_159_159, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 233 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_159_159, 1) = ((MR_Box) (backend_libs__builtin_ops__V_160_160));
#line 233 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_159_159, 2) = ((MR_Box) (backend_libs__builtin_ops__V_161_161));
#line 233 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_159_159, 3) = ((MR_Box) (backend_libs__builtin_ops__V_162_162));
#line 233 "builtin_ops.m"
                                }
#line 232 "builtin_ops.m"
                                {
#line 232 "builtin_ops.m"
                                  MR_Word base;
#line 232 "builtin_ops.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 232 "builtin_ops.m"
                                  *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 232 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__Z_155;
#line 232 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_159_159));
#line 232 "builtin_ops.m"
                                }
#line 232 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 232 "builtin_ops.m"
                              }
#line 232 "builtin_ops.m"
                          }
#line 232 "builtin_ops.m"
                      }
#line 232 "builtin_ops.m"
                  }
#line 184 "builtin_ops.m"
                else
#line 184 "builtin_ops.m"
                  if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "+") == 0))
#line 184 "builtin_ops.m"
                    if ((backend_libs__builtin_ops__HeadVar__3_3 == (MR_Integer) 0))
#line 184 "builtin_ops.m"
                      if ((backend_libs__builtin_ops__V_443_443 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 254 "builtin_ops.m"
                        {
#line 254 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_267_267;

#line 255 "builtin_ops.m"
                          {
#line 255 "builtin_ops.m"
                            backend_libs__builtin_ops__V_267_267 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 255 "builtin_ops.m"
                            MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_267_267, 0) = backend_libs__builtin_ops__V_432_432;
#line 255 "builtin_ops.m"
                          }
#line 254 "builtin_ops.m"
                          {
#line 254 "builtin_ops.m"
                            MR_Word base;
#line 254 "builtin_ops.m"
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 254 "builtin_ops.m"
                            *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 254 "builtin_ops.m"
                            MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__V_444_444;
#line 254 "builtin_ops.m"
                            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_267_267));
#line 254 "builtin_ops.m"
                          }
#line 254 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 254 "builtin_ops.m"
                        }
#line 184 "builtin_ops.m"
                      else
#line 216 "builtin_ops.m"
                        {
#line 216 "builtin_ops.m"
                          MR_Box backend_libs__builtin_ops__Z_75 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 0));
#line 216 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 1)));
#line 216 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_79_79;
#line 216 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_80_80;
#line 216 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_81_81;
#line 216 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_82_82;

#line 216 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_78_78 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 216 "builtin_ops.m"
                          if (backend_libs__builtin_ops__succeeded)
#line 216 "builtin_ops.m"
                            {
#line 217 "builtin_ops.m"
                              backend_libs__builtin_ops__V_80_80 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 217 "builtin_ops.m"
                              {
#line 217 "builtin_ops.m"
                                backend_libs__builtin_ops__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 217 "builtin_ops.m"
                                MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_81_81, 0) = backend_libs__builtin_ops__V_432_432;
#line 217 "builtin_ops.m"
                              }
#line 217 "builtin_ops.m"
                              {
#line 217 "builtin_ops.m"
                                backend_libs__builtin_ops__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 217 "builtin_ops.m"
                                MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_82_82, 0) = backend_libs__builtin_ops__V_444_444;
#line 217 "builtin_ops.m"
                              }
#line 217 "builtin_ops.m"
                              {
#line 217 "builtin_ops.m"
                                backend_libs__builtin_ops__V_79_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 217 "builtin_ops.m"
                                MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_79_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 217 "builtin_ops.m"
                                MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_79_79, 1) = ((MR_Box) (backend_libs__builtin_ops__V_80_80));
#line 217 "builtin_ops.m"
                                MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_79_79, 2) = ((MR_Box) (backend_libs__builtin_ops__V_81_81));
#line 217 "builtin_ops.m"
                                MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_79_79, 3) = ((MR_Box) (backend_libs__builtin_ops__V_82_82));
#line 217 "builtin_ops.m"
                              }
#line 216 "builtin_ops.m"
                              {
#line 216 "builtin_ops.m"
                                MR_Word base;
#line 216 "builtin_ops.m"
                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 216 "builtin_ops.m"
                                *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 216 "builtin_ops.m"
                                MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__Z_75;
#line 216 "builtin_ops.m"
                                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_79_79));
#line 216 "builtin_ops.m"
                              }
#line 216 "builtin_ops.m"
                              backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 216 "builtin_ops.m"
                            }
#line 216 "builtin_ops.m"
                        }
#line 184 "builtin_ops.m"
                    else
#line 184 "builtin_ops.m"
                      if ((backend_libs__builtin_ops__HeadVar__3_3 == (MR_Integer) 1))
#line 218 "builtin_ops.m"
                        {
#line 218 "builtin_ops.m"
                          MR_Box backend_libs__builtin_ops__Z_85;
#line 218 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_88_88;
#line 218 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_89_89;
#line 218 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_90_90;
#line 218 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_91_91;
#line 218 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_92_92;

#line 218 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_443_443)) == (MR_mktag((MR_Integer) 1)));
#line 218 "builtin_ops.m"
                          if (backend_libs__builtin_ops__succeeded)
#line 218 "builtin_ops.m"
                            {
#line 218 "builtin_ops.m"
                              backend_libs__builtin_ops__Z_85 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 0));
#line 218 "builtin_ops.m"
                              backend_libs__builtin_ops__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 1)));
#line 218 "builtin_ops.m"
                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_88_88 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 218 "builtin_ops.m"
                              if (backend_libs__builtin_ops__succeeded)
#line 218 "builtin_ops.m"
                                {
#line 219 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_90_90 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 219 "builtin_ops.m"
                                  {
#line 219 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 219 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_91_91, 0) = backend_libs__builtin_ops__Z_85;
#line 219 "builtin_ops.m"
                                  }
#line 219 "builtin_ops.m"
                                  {
#line 219 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 219 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_92_92, 0) = backend_libs__builtin_ops__V_444_444;
#line 219 "builtin_ops.m"
                                  }
#line 219 "builtin_ops.m"
                                  {
#line 219 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_89_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 219 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_89_89, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 219 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_89_89, 1) = ((MR_Box) (backend_libs__builtin_ops__V_90_90));
#line 219 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_89_89, 2) = ((MR_Box) (backend_libs__builtin_ops__V_91_91));
#line 219 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_89_89, 3) = ((MR_Box) (backend_libs__builtin_ops__V_92_92));
#line 219 "builtin_ops.m"
                                  }
#line 218 "builtin_ops.m"
                                  {
#line 218 "builtin_ops.m"
                                    MR_Word base;
#line 218 "builtin_ops.m"
                                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 218 "builtin_ops.m"
                                    *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 218 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__V_432_432;
#line 218 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_89_89));
#line 218 "builtin_ops.m"
                                  }
#line 218 "builtin_ops.m"
                                  backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 218 "builtin_ops.m"
                                }
#line 218 "builtin_ops.m"
                            }
#line 218 "builtin_ops.m"
                        }
#line 184 "builtin_ops.m"
                      else
#line 184 "builtin_ops.m"
                        if ((backend_libs__builtin_ops__HeadVar__3_3 == (MR_Integer) 2))
#line 220 "builtin_ops.m"
                          {
#line 220 "builtin_ops.m"
                            MR_Box backend_libs__builtin_ops__Z_95;
#line 220 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_98_98;
#line 220 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_99_99;
#line 220 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_100_100;
#line 220 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_101_101;
#line 220 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_102_102;

#line 220 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_443_443)) == (MR_mktag((MR_Integer) 1)));
#line 220 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 220 "builtin_ops.m"
                              {
#line 220 "builtin_ops.m"
                                backend_libs__builtin_ops__Z_95 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 0));
#line 220 "builtin_ops.m"
                                backend_libs__builtin_ops__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 1)));
#line 220 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_98_98 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 220 "builtin_ops.m"
                                if (backend_libs__builtin_ops__succeeded)
#line 220 "builtin_ops.m"
                                  {
#line 221 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_100_100 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 221 "builtin_ops.m"
                                    {
#line 221 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_101_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 221 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_101_101, 0) = backend_libs__builtin_ops__Z_95;
#line 221 "builtin_ops.m"
                                    }
#line 221 "builtin_ops.m"
                                    {
#line 221 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 221 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_102_102, 0) = backend_libs__builtin_ops__V_432_432;
#line 221 "builtin_ops.m"
                                    }
#line 221 "builtin_ops.m"
                                    {
#line 221 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_99_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 221 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_99_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 221 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_99_99, 1) = ((MR_Box) (backend_libs__builtin_ops__V_100_100));
#line 221 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_99_99, 2) = ((MR_Box) (backend_libs__builtin_ops__V_101_101));
#line 221 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_99_99, 3) = ((MR_Box) (backend_libs__builtin_ops__V_102_102));
#line 221 "builtin_ops.m"
                                    }
#line 220 "builtin_ops.m"
                                    {
#line 220 "builtin_ops.m"
                                      MR_Word base;
#line 220 "builtin_ops.m"
                                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 220 "builtin_ops.m"
                                      *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 220 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__V_444_444;
#line 220 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_99_99));
#line 220 "builtin_ops.m"
                                    }
#line 220 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 220 "builtin_ops.m"
                                  }
#line 220 "builtin_ops.m"
                              }
#line 220 "builtin_ops.m"
                          }
#line 184 "builtin_ops.m"
                        else
#line 184 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = MR_FALSE;
#line 184 "builtin_ops.m"
                  else
#line 184 "builtin_ops.m"
                    if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "-") == 0))
#line 184 "builtin_ops.m"
                      if ((backend_libs__builtin_ops__HeadVar__3_3 == (MR_Integer) 0))
#line 184 "builtin_ops.m"
                        if ((backend_libs__builtin_ops__V_443_443 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 256 "builtin_ops.m"
                          {
#line 256 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_272_272;
#line 256 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_276_276;

#line 257 "builtin_ops.m"
                            {
#line 257 "builtin_ops.m"
                              backend_libs__builtin_ops__V_276_276 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 257 "builtin_ops.m"
                              MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_276_276, 0) = backend_libs__builtin_ops__V_432_432;
#line 257 "builtin_ops.m"
                            }
#line 257 "builtin_ops.m"
                            {
#line 257 "builtin_ops.m"
                              backend_libs__builtin_ops__V_272_272 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 257 "builtin_ops.m"
                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_272_272, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 257 "builtin_ops.m"
                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_272_272, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 257 "builtin_ops.m"
                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_272_272, 2) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__builtin_ops_scalar_common_2[0])));
#line 257 "builtin_ops.m"
                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_272_272, 3) = ((MR_Box) (backend_libs__builtin_ops__V_276_276));
#line 257 "builtin_ops.m"
                            }
#line 256 "builtin_ops.m"
                            {
#line 256 "builtin_ops.m"
                              MR_Word base;
#line 256 "builtin_ops.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 256 "builtin_ops.m"
                              *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 256 "builtin_ops.m"
                              MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__V_444_444;
#line 256 "builtin_ops.m"
                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_272_272));
#line 256 "builtin_ops.m"
                            }
#line 256 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 256 "builtin_ops.m"
                          }
#line 184 "builtin_ops.m"
                        else
#line 224 "builtin_ops.m"
                          {
#line 224 "builtin_ops.m"
                            MR_Box backend_libs__builtin_ops__Z_115 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 0));
#line 224 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 1)));
#line 224 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_119_119;
#line 224 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_120_120;
#line 224 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_121_121;
#line 224 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_122_122;

#line 224 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_118_118 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 224 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 224 "builtin_ops.m"
                              {
#line 225 "builtin_ops.m"
                                backend_libs__builtin_ops__V_120_120 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 225 "builtin_ops.m"
                                {
#line 225 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_121_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 225 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_121_121, 0) = backend_libs__builtin_ops__V_432_432;
#line 225 "builtin_ops.m"
                                }
#line 225 "builtin_ops.m"
                                {
#line 225 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 225 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_122_122, 0) = backend_libs__builtin_ops__V_444_444;
#line 225 "builtin_ops.m"
                                }
#line 225 "builtin_ops.m"
                                {
#line 225 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_119_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 225 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_119_119, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 225 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_119_119, 1) = ((MR_Box) (backend_libs__builtin_ops__V_120_120));
#line 225 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_119_119, 2) = ((MR_Box) (backend_libs__builtin_ops__V_121_121));
#line 225 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_119_119, 3) = ((MR_Box) (backend_libs__builtin_ops__V_122_122));
#line 225 "builtin_ops.m"
                                }
#line 224 "builtin_ops.m"
                                {
#line 224 "builtin_ops.m"
                                  MR_Word base;
#line 224 "builtin_ops.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 224 "builtin_ops.m"
                                  *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 224 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__Z_115;
#line 224 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_119_119));
#line 224 "builtin_ops.m"
                                }
#line 224 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 224 "builtin_ops.m"
                              }
#line 224 "builtin_ops.m"
                          }
#line 184 "builtin_ops.m"
                      else
#line 184 "builtin_ops.m"
                        if ((backend_libs__builtin_ops__HeadVar__3_3 == (MR_Integer) 1))
#line 226 "builtin_ops.m"
                          {
#line 226 "builtin_ops.m"
                            MR_Box backend_libs__builtin_ops__Z_125;
#line 226 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_128_128;
#line 226 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_129_129;
#line 226 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_130_130;
#line 226 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_131_131;
#line 226 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_132_132;

#line 226 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_443_443)) == (MR_mktag((MR_Integer) 1)));
#line 226 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 226 "builtin_ops.m"
                              {
#line 226 "builtin_ops.m"
                                backend_libs__builtin_ops__Z_125 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 0));
#line 226 "builtin_ops.m"
                                backend_libs__builtin_ops__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 1)));
#line 226 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_128_128 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 226 "builtin_ops.m"
                                if (backend_libs__builtin_ops__succeeded)
#line 226 "builtin_ops.m"
                                  {
#line 227 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_130_130 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 227 "builtin_ops.m"
                                    {
#line 227 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_131_131 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 227 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_131_131, 0) = backend_libs__builtin_ops__V_444_444;
#line 227 "builtin_ops.m"
                                    }
#line 227 "builtin_ops.m"
                                    {
#line 227 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_132_132 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 227 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_132_132, 0) = backend_libs__builtin_ops__Z_125;
#line 227 "builtin_ops.m"
                                    }
#line 227 "builtin_ops.m"
                                    {
#line 227 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_129_129 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 227 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_129_129, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 227 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_129_129, 1) = ((MR_Box) (backend_libs__builtin_ops__V_130_130));
#line 227 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_129_129, 2) = ((MR_Box) (backend_libs__builtin_ops__V_131_131));
#line 227 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_129_129, 3) = ((MR_Box) (backend_libs__builtin_ops__V_132_132));
#line 227 "builtin_ops.m"
                                    }
#line 226 "builtin_ops.m"
                                    {
#line 226 "builtin_ops.m"
                                      MR_Word base;
#line 226 "builtin_ops.m"
                                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 226 "builtin_ops.m"
                                      *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 226 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__V_432_432;
#line 226 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_129_129));
#line 226 "builtin_ops.m"
                                    }
#line 226 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 226 "builtin_ops.m"
                                  }
#line 226 "builtin_ops.m"
                              }
#line 226 "builtin_ops.m"
                          }
#line 184 "builtin_ops.m"
                        else
#line 184 "builtin_ops.m"
                          if ((backend_libs__builtin_ops__HeadVar__3_3 == (MR_Integer) 2))
#line 228 "builtin_ops.m"
                            {
#line 228 "builtin_ops.m"
                              MR_Box backend_libs__builtin_ops__Z_135;
#line 228 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_138_138;
#line 228 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_139_139;
#line 228 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_140_140;
#line 228 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_141_141;
#line 228 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_142_142;

#line 228 "builtin_ops.m"
                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_443_443)) == (MR_mktag((MR_Integer) 1)));
#line 228 "builtin_ops.m"
                              if (backend_libs__builtin_ops__succeeded)
#line 228 "builtin_ops.m"
                                {
#line 228 "builtin_ops.m"
                                  backend_libs__builtin_ops__Z_135 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 0));
#line 228 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 1)));
#line 228 "builtin_ops.m"
                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_138_138 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 228 "builtin_ops.m"
                                  if (backend_libs__builtin_ops__succeeded)
#line 228 "builtin_ops.m"
                                    {
#line 229 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_140_140 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 229 "builtin_ops.m"
                                      {
#line 229 "builtin_ops.m"
                                        backend_libs__builtin_ops__V_141_141 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 229 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_141_141, 0) = backend_libs__builtin_ops__V_432_432;
#line 229 "builtin_ops.m"
                                      }
#line 229 "builtin_ops.m"
                                      {
#line 229 "builtin_ops.m"
                                        backend_libs__builtin_ops__V_142_142 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 229 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_142_142, 0) = backend_libs__builtin_ops__Z_135;
#line 229 "builtin_ops.m"
                                      }
#line 229 "builtin_ops.m"
                                      {
#line 229 "builtin_ops.m"
                                        backend_libs__builtin_ops__V_139_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 229 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_139_139, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 229 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_139_139, 1) = ((MR_Box) (backend_libs__builtin_ops__V_140_140));
#line 229 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_139_139, 2) = ((MR_Box) (backend_libs__builtin_ops__V_141_141));
#line 229 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_139_139, 3) = ((MR_Box) (backend_libs__builtin_ops__V_142_142));
#line 229 "builtin_ops.m"
                                      }
#line 228 "builtin_ops.m"
                                      {
#line 228 "builtin_ops.m"
                                        MR_Word base;
#line 228 "builtin_ops.m"
                                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 228 "builtin_ops.m"
                                        *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 228 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__V_444_444;
#line 228 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_139_139));
#line 228 "builtin_ops.m"
                                      }
#line 228 "builtin_ops.m"
                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 228 "builtin_ops.m"
                                    }
#line 228 "builtin_ops.m"
                                }
#line 228 "builtin_ops.m"
                            }
#line 184 "builtin_ops.m"
                          else
#line 184 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = MR_FALSE;
#line 184 "builtin_ops.m"
                    else
#line 184 "builtin_ops.m"
                      if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "<") == 0))
#line 263 "builtin_ops.m"
                        {
#line 263 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_296_296;
#line 263 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_297_297;
#line 263 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_298_298;
#line 263 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_299_299;

#line 263 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__HeadVar__3_3 == (MR_Integer) 0);
#line 263 "builtin_ops.m"
                          if (backend_libs__builtin_ops__succeeded)
#line 263 "builtin_ops.m"
                            {
#line 263 "builtin_ops.m"
                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_443_443 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 263 "builtin_ops.m"
                              if (backend_libs__builtin_ops__succeeded)
#line 263 "builtin_ops.m"
                                {
#line 264 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_297_297 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 22));
#line 264 "builtin_ops.m"
                                  {
#line 264 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_298_298 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 264 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_298_298, 0) = backend_libs__builtin_ops__V_432_432;
#line 264 "builtin_ops.m"
                                  }
#line 264 "builtin_ops.m"
                                  {
#line 264 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_299_299 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 264 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_299_299, 0) = backend_libs__builtin_ops__V_444_444;
#line 264 "builtin_ops.m"
                                  }
#line 264 "builtin_ops.m"
                                  {
#line 264 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_296_296 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 264 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_296_296, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 264 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_296_296, 1) = ((MR_Box) (backend_libs__builtin_ops__V_297_297));
#line 264 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_296_296, 2) = ((MR_Box) (backend_libs__builtin_ops__V_298_298));
#line 264 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_296_296, 3) = ((MR_Box) (backend_libs__builtin_ops__V_299_299));
#line 264 "builtin_ops.m"
                                  }
#line 263 "builtin_ops.m"
                                  {
#line 263 "builtin_ops.m"
                                    MR_Word base;
#line 263 "builtin_ops.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 263 "builtin_ops.m"
                                    *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 263 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (backend_libs__builtin_ops__V_296_296));
#line 263 "builtin_ops.m"
                                  }
#line 263 "builtin_ops.m"
                                  backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 263 "builtin_ops.m"
                                }
#line 263 "builtin_ops.m"
                            }
#line 263 "builtin_ops.m"
                        }
#line 184 "builtin_ops.m"
                      else
#line 184 "builtin_ops.m"
                        if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) ">") == 0))
#line 261 "builtin_ops.m"
                          {
#line 261 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_288_288;
#line 261 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_289_289;
#line 261 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_290_290;
#line 261 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_291_291;

#line 261 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__HeadVar__3_3 == (MR_Integer) 0);
#line 261 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 261 "builtin_ops.m"
                              {
#line 261 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_443_443 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 261 "builtin_ops.m"
                                if (backend_libs__builtin_ops__succeeded)
#line 261 "builtin_ops.m"
                                  {
#line 262 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_289_289 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 23));
#line 262 "builtin_ops.m"
                                    {
#line 262 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_290_290 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 262 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_290_290, 0) = backend_libs__builtin_ops__V_432_432;
#line 262 "builtin_ops.m"
                                    }
#line 262 "builtin_ops.m"
                                    {
#line 262 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_291_291 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 262 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_291_291, 0) = backend_libs__builtin_ops__V_444_444;
#line 262 "builtin_ops.m"
                                    }
#line 262 "builtin_ops.m"
                                    {
#line 262 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_288_288 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 262 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_288_288, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 262 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_288_288, 1) = ((MR_Box) (backend_libs__builtin_ops__V_289_289));
#line 262 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_288_288, 2) = ((MR_Box) (backend_libs__builtin_ops__V_290_290));
#line 262 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_288_288, 3) = ((MR_Box) (backend_libs__builtin_ops__V_291_291));
#line 262 "builtin_ops.m"
                                    }
#line 261 "builtin_ops.m"
                                    {
#line 261 "builtin_ops.m"
                                      MR_Word base;
#line 261 "builtin_ops.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 261 "builtin_ops.m"
                                      *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 261 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (backend_libs__builtin_ops__V_288_288));
#line 261 "builtin_ops.m"
                                    }
#line 261 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 261 "builtin_ops.m"
                                  }
#line 261 "builtin_ops.m"
                              }
#line 261 "builtin_ops.m"
                          }
#line 184 "builtin_ops.m"
                        else
#line 184 "builtin_ops.m"
                          if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "\\") == 0))
#line 258 "builtin_ops.m"
                            {
#line 258 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_281_281;
#line 258 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_282_282;
#line 258 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_283_283;

#line 258 "builtin_ops.m"
                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__HeadVar__3_3 == (MR_Integer) 0);
#line 258 "builtin_ops.m"
                              if (backend_libs__builtin_ops__succeeded)
#line 258 "builtin_ops.m"
                                {
#line 258 "builtin_ops.m"
                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_443_443 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 258 "builtin_ops.m"
                                  if (backend_libs__builtin_ops__succeeded)
#line 258 "builtin_ops.m"
                                    {
#line 259 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_282_282 = (MR_Integer) 6;
#line 259 "builtin_ops.m"
                                      {
#line 259 "builtin_ops.m"
                                        backend_libs__builtin_ops__V_283_283 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 259 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_283_283, 0) = backend_libs__builtin_ops__V_432_432;
#line 259 "builtin_ops.m"
                                      }
#line 259 "builtin_ops.m"
                                      {
#line 259 "builtin_ops.m"
                                        backend_libs__builtin_ops__V_281_281 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 259 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_281_281, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 259 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_281_281, 1) = ((MR_Box) (backend_libs__builtin_ops__V_282_282));
#line 259 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_281_281, 2) = ((MR_Box) (backend_libs__builtin_ops__V_283_283));
#line 259 "builtin_ops.m"
                                      }
#line 258 "builtin_ops.m"
                                      {
#line 258 "builtin_ops.m"
                                        MR_Word base;
#line 258 "builtin_ops.m"
                                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 258 "builtin_ops.m"
                                        *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 258 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__V_444_444;
#line 258 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_281_281));
#line 258 "builtin_ops.m"
                                      }
#line 258 "builtin_ops.m"
                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 258 "builtin_ops.m"
                                    }
#line 258 "builtin_ops.m"
                                }
#line 258 "builtin_ops.m"
                            }
#line 184 "builtin_ops.m"
                          else
#line 184 "builtin_ops.m"
                            if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "/\\") == 0))
#line 244 "builtin_ops.m"
                              {
#line 244 "builtin_ops.m"
                                MR_Box backend_libs__builtin_ops__Z_215;
#line 244 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_218_218;
#line 244 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_219_219;
#line 244 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_220_220;
#line 244 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_221_221;
#line 244 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_222_222;

#line 244 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__HeadVar__3_3 == (MR_Integer) 0);
#line 244 "builtin_ops.m"
                                if (backend_libs__builtin_ops__succeeded)
#line 244 "builtin_ops.m"
                                  {
#line 244 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_443_443)) == (MR_mktag((MR_Integer) 1)));
#line 244 "builtin_ops.m"
                                    if (backend_libs__builtin_ops__succeeded)
#line 244 "builtin_ops.m"
                                      {
#line 244 "builtin_ops.m"
                                        backend_libs__builtin_ops__Z_215 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 0));
#line 244 "builtin_ops.m"
                                        backend_libs__builtin_ops__V_218_218 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 1)));
#line 244 "builtin_ops.m"
                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_218_218 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 244 "builtin_ops.m"
                                        if (backend_libs__builtin_ops__succeeded)
#line 244 "builtin_ops.m"
                                          {
#line 245 "builtin_ops.m"
                                            backend_libs__builtin_ops__V_220_220 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 245 "builtin_ops.m"
                                            {
#line 245 "builtin_ops.m"
                                              backend_libs__builtin_ops__V_221_221 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 245 "builtin_ops.m"
                                              MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_221_221, 0) = backend_libs__builtin_ops__V_432_432;
#line 245 "builtin_ops.m"
                                            }
#line 245 "builtin_ops.m"
                                            {
#line 245 "builtin_ops.m"
                                              backend_libs__builtin_ops__V_222_222 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 245 "builtin_ops.m"
                                              MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_222_222, 0) = backend_libs__builtin_ops__V_444_444;
#line 245 "builtin_ops.m"
                                            }
#line 245 "builtin_ops.m"
                                            {
#line 245 "builtin_ops.m"
                                              backend_libs__builtin_ops__V_219_219 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 245 "builtin_ops.m"
                                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_219_219, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 245 "builtin_ops.m"
                                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_219_219, 1) = ((MR_Box) (backend_libs__builtin_ops__V_220_220));
#line 245 "builtin_ops.m"
                                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_219_219, 2) = ((MR_Box) (backend_libs__builtin_ops__V_221_221));
#line 245 "builtin_ops.m"
                                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_219_219, 3) = ((MR_Box) (backend_libs__builtin_ops__V_222_222));
#line 245 "builtin_ops.m"
                                            }
#line 244 "builtin_ops.m"
                                            {
#line 244 "builtin_ops.m"
                                              MR_Word base;
#line 244 "builtin_ops.m"
                                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 244 "builtin_ops.m"
                                              *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 244 "builtin_ops.m"
                                              MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__Z_215;
#line 244 "builtin_ops.m"
                                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_219_219));
#line 244 "builtin_ops.m"
                                            }
#line 244 "builtin_ops.m"
                                            backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 244 "builtin_ops.m"
                                          }
#line 244 "builtin_ops.m"
                                      }
#line 244 "builtin_ops.m"
                                  }
#line 244 "builtin_ops.m"
                              }
#line 184 "builtin_ops.m"
                            else
#line 184 "builtin_ops.m"
                              if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "=<") == 0))
#line 267 "builtin_ops.m"
                                {
#line 267 "builtin_ops.m"
                                  MR_Word backend_libs__builtin_ops__V_312_312;
#line 267 "builtin_ops.m"
                                  MR_Word backend_libs__builtin_ops__V_313_313;
#line 267 "builtin_ops.m"
                                  MR_Word backend_libs__builtin_ops__V_314_314;
#line 267 "builtin_ops.m"
                                  MR_Word backend_libs__builtin_ops__V_315_315;

#line 267 "builtin_ops.m"
                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__HeadVar__3_3 == (MR_Integer) 0);
#line 267 "builtin_ops.m"
                                  if (backend_libs__builtin_ops__succeeded)
#line 267 "builtin_ops.m"
                                    {
#line 267 "builtin_ops.m"
                                      backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_443_443 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 267 "builtin_ops.m"
                                      if (backend_libs__builtin_ops__succeeded)
#line 267 "builtin_ops.m"
                                        {
#line 268 "builtin_ops.m"
                                          backend_libs__builtin_ops__V_313_313 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 24));
#line 268 "builtin_ops.m"
                                          {
#line 268 "builtin_ops.m"
                                            backend_libs__builtin_ops__V_314_314 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 268 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_314_314, 0) = backend_libs__builtin_ops__V_432_432;
#line 268 "builtin_ops.m"
                                          }
#line 268 "builtin_ops.m"
                                          {
#line 268 "builtin_ops.m"
                                            backend_libs__builtin_ops__V_315_315 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 268 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_315_315, 0) = backend_libs__builtin_ops__V_444_444;
#line 268 "builtin_ops.m"
                                          }
#line 268 "builtin_ops.m"
                                          {
#line 268 "builtin_ops.m"
                                            backend_libs__builtin_ops__V_312_312 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 268 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_312_312, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 268 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_312_312, 1) = ((MR_Box) (backend_libs__builtin_ops__V_313_313));
#line 268 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_312_312, 2) = ((MR_Box) (backend_libs__builtin_ops__V_314_314));
#line 268 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_312_312, 3) = ((MR_Box) (backend_libs__builtin_ops__V_315_315));
#line 268 "builtin_ops.m"
                                          }
#line 267 "builtin_ops.m"
                                          {
#line 267 "builtin_ops.m"
                                            MR_Word base;
#line 267 "builtin_ops.m"
                                            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 267 "builtin_ops.m"
                                            *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 267 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (backend_libs__builtin_ops__V_312_312));
#line 267 "builtin_ops.m"
                                          }
#line 267 "builtin_ops.m"
                                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 267 "builtin_ops.m"
                                        }
#line 267 "builtin_ops.m"
                                    }
#line 267 "builtin_ops.m"
                                }
#line 184 "builtin_ops.m"
                              else
#line 184 "builtin_ops.m"
                                if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) ">=") == 0))
#line 265 "builtin_ops.m"
                                  {
#line 265 "builtin_ops.m"
                                    MR_Word backend_libs__builtin_ops__V_304_304;
#line 265 "builtin_ops.m"
                                    MR_Word backend_libs__builtin_ops__V_305_305;
#line 265 "builtin_ops.m"
                                    MR_Word backend_libs__builtin_ops__V_306_306;
#line 265 "builtin_ops.m"
                                    MR_Word backend_libs__builtin_ops__V_307_307;

#line 265 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__HeadVar__3_3 == (MR_Integer) 0);
#line 265 "builtin_ops.m"
                                    if (backend_libs__builtin_ops__succeeded)
#line 265 "builtin_ops.m"
                                      {
#line 265 "builtin_ops.m"
                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_443_443 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 265 "builtin_ops.m"
                                        if (backend_libs__builtin_ops__succeeded)
#line 265 "builtin_ops.m"
                                          {
#line 266 "builtin_ops.m"
                                            backend_libs__builtin_ops__V_305_305 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 25));
#line 266 "builtin_ops.m"
                                            {
#line 266 "builtin_ops.m"
                                              backend_libs__builtin_ops__V_306_306 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 266 "builtin_ops.m"
                                              MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_306_306, 0) = backend_libs__builtin_ops__V_432_432;
#line 266 "builtin_ops.m"
                                            }
#line 266 "builtin_ops.m"
                                            {
#line 266 "builtin_ops.m"
                                              backend_libs__builtin_ops__V_307_307 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 266 "builtin_ops.m"
                                              MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_307_307, 0) = backend_libs__builtin_ops__V_444_444;
#line 266 "builtin_ops.m"
                                            }
#line 266 "builtin_ops.m"
                                            {
#line 266 "builtin_ops.m"
                                              backend_libs__builtin_ops__V_304_304 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 266 "builtin_ops.m"
                                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_304_304, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 266 "builtin_ops.m"
                                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_304_304, 1) = ((MR_Box) (backend_libs__builtin_ops__V_305_305));
#line 266 "builtin_ops.m"
                                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_304_304, 2) = ((MR_Box) (backend_libs__builtin_ops__V_306_306));
#line 266 "builtin_ops.m"
                                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_304_304, 3) = ((MR_Box) (backend_libs__builtin_ops__V_307_307));
#line 266 "builtin_ops.m"
                                            }
#line 265 "builtin_ops.m"
                                            {
#line 265 "builtin_ops.m"
                                              MR_Word base;
#line 265 "builtin_ops.m"
                                              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 265 "builtin_ops.m"
                                              *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 265 "builtin_ops.m"
                                              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (backend_libs__builtin_ops__V_304_304));
#line 265 "builtin_ops.m"
                                            }
#line 265 "builtin_ops.m"
                                            backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 265 "builtin_ops.m"
                                          }
#line 265 "builtin_ops.m"
                                      }
#line 265 "builtin_ops.m"
                                  }
#line 184 "builtin_ops.m"
                                else
#line 184 "builtin_ops.m"
                                  if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "\\/") == 0))
#line 246 "builtin_ops.m"
                                    {
#line 246 "builtin_ops.m"
                                      MR_Box backend_libs__builtin_ops__Z_225;
#line 246 "builtin_ops.m"
                                      MR_Word backend_libs__builtin_ops__V_228_228;
#line 246 "builtin_ops.m"
                                      MR_Word backend_libs__builtin_ops__V_229_229;
#line 246 "builtin_ops.m"
                                      MR_Word backend_libs__builtin_ops__V_230_230;
#line 246 "builtin_ops.m"
                                      MR_Word backend_libs__builtin_ops__V_231_231;
#line 246 "builtin_ops.m"
                                      MR_Word backend_libs__builtin_ops__V_232_232;

#line 246 "builtin_ops.m"
                                      backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__HeadVar__3_3 == (MR_Integer) 0);
#line 246 "builtin_ops.m"
                                      if (backend_libs__builtin_ops__succeeded)
#line 246 "builtin_ops.m"
                                        {
#line 246 "builtin_ops.m"
                                          backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_443_443)) == (MR_mktag((MR_Integer) 1)));
#line 246 "builtin_ops.m"
                                          if (backend_libs__builtin_ops__succeeded)
#line 246 "builtin_ops.m"
                                            {
#line 246 "builtin_ops.m"
                                              backend_libs__builtin_ops__Z_225 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 0));
#line 246 "builtin_ops.m"
                                              backend_libs__builtin_ops__V_228_228 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 1)));
#line 246 "builtin_ops.m"
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_228_228 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 246 "builtin_ops.m"
                                              if (backend_libs__builtin_ops__succeeded)
#line 246 "builtin_ops.m"
                                                {
#line 247 "builtin_ops.m"
                                                  backend_libs__builtin_ops__V_230_230 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 247 "builtin_ops.m"
                                                  {
#line 247 "builtin_ops.m"
                                                    backend_libs__builtin_ops__V_231_231 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 247 "builtin_ops.m"
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_231_231, 0) = backend_libs__builtin_ops__V_432_432;
#line 247 "builtin_ops.m"
                                                  }
#line 247 "builtin_ops.m"
                                                  {
#line 247 "builtin_ops.m"
                                                    backend_libs__builtin_ops__V_232_232 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 247 "builtin_ops.m"
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_232_232, 0) = backend_libs__builtin_ops__V_444_444;
#line 247 "builtin_ops.m"
                                                  }
#line 247 "builtin_ops.m"
                                                  {
#line 247 "builtin_ops.m"
                                                    backend_libs__builtin_ops__V_229_229 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 247 "builtin_ops.m"
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_229_229, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 247 "builtin_ops.m"
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_229_229, 1) = ((MR_Box) (backend_libs__builtin_ops__V_230_230));
#line 247 "builtin_ops.m"
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_229_229, 2) = ((MR_Box) (backend_libs__builtin_ops__V_231_231));
#line 247 "builtin_ops.m"
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_229_229, 3) = ((MR_Box) (backend_libs__builtin_ops__V_232_232));
#line 247 "builtin_ops.m"
                                                  }
#line 246 "builtin_ops.m"
                                                  {
#line 246 "builtin_ops.m"
                                                    MR_Word base;
#line 246 "builtin_ops.m"
                                                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 246 "builtin_ops.m"
                                                    *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 246 "builtin_ops.m"
                                                    MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__Z_225;
#line 246 "builtin_ops.m"
                                                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_229_229));
#line 246 "builtin_ops.m"
                                                  }
#line 246 "builtin_ops.m"
                                                  backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 246 "builtin_ops.m"
                                                }
#line 246 "builtin_ops.m"
                                            }
#line 246 "builtin_ops.m"
                                        }
#line 246 "builtin_ops.m"
                                    }
#line 184 "builtin_ops.m"
                                  else
#line 184 "builtin_ops.m"
                                    if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "xor") == 0))
#line 184 "builtin_ops.m"
                                      {
#line 184 "builtin_ops.m"
                                        MR_Word backend_libs__builtin_ops__V_429_429;
#line 184 "builtin_ops.m"
                                        MR_Box backend_libs__builtin_ops__V_430_430;

#line 248 "builtin_ops.m"
                                        backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_443_443)) == (MR_mktag((MR_Integer) 1)));
#line 248 "builtin_ops.m"
                                        if (backend_libs__builtin_ops__succeeded)
#line 248 "builtin_ops.m"
                                          {
#line 248 "builtin_ops.m"
                                            backend_libs__builtin_ops__V_430_430 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 0));
#line 248 "builtin_ops.m"
                                            backend_libs__builtin_ops__V_429_429 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 1)));
#line 248 "builtin_ops.m"
                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_429_429 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 184 "builtin_ops.m"
                                            if (backend_libs__builtin_ops__succeeded)
#line 184 "builtin_ops.m"
                                              {
#line 184 "builtin_ops.m"
                                                if ((backend_libs__builtin_ops__HeadVar__3_3 == (MR_Integer) 0))
#line 248 "builtin_ops.m"
                                                  {
#line 248 "builtin_ops.m"
                                                    MR_Word backend_libs__builtin_ops__V_239_239;
#line 248 "builtin_ops.m"
                                                    MR_Word backend_libs__builtin_ops__V_241_241;
#line 248 "builtin_ops.m"
                                                    MR_Word backend_libs__builtin_ops__V_242_242;

#line 249 "builtin_ops.m"
                                                    {
#line 249 "builtin_ops.m"
                                                      backend_libs__builtin_ops__V_241_241 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 249 "builtin_ops.m"
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_241_241, 0) = backend_libs__builtin_ops__V_432_432;
#line 249 "builtin_ops.m"
                                                    }
#line 249 "builtin_ops.m"
                                                    {
#line 249 "builtin_ops.m"
                                                      backend_libs__builtin_ops__V_242_242 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 249 "builtin_ops.m"
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_242_242, 0) = backend_libs__builtin_ops__V_444_444;
#line 249 "builtin_ops.m"
                                                    }
#line 249 "builtin_ops.m"
                                                    {
#line 249 "builtin_ops.m"
                                                      backend_libs__builtin_ops__V_239_239 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 249 "builtin_ops.m"
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_239_239, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 249 "builtin_ops.m"
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_239_239, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
#line 249 "builtin_ops.m"
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_239_239, 2) = ((MR_Box) (backend_libs__builtin_ops__V_241_241));
#line 249 "builtin_ops.m"
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_239_239, 3) = ((MR_Box) (backend_libs__builtin_ops__V_242_242));
#line 249 "builtin_ops.m"
                                                    }
#line 248 "builtin_ops.m"
                                                    {
#line 248 "builtin_ops.m"
                                                      MR_Word base;
#line 248 "builtin_ops.m"
                                                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 248 "builtin_ops.m"
                                                      *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 248 "builtin_ops.m"
                                                      MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__V_430_430;
#line 248 "builtin_ops.m"
                                                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_239_239));
#line 248 "builtin_ops.m"
                                                    }
#line 248 "builtin_ops.m"
                                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 248 "builtin_ops.m"
                                                  }
#line 184 "builtin_ops.m"
                                                else
#line 184 "builtin_ops.m"
                                                  if ((backend_libs__builtin_ops__HeadVar__3_3 == (MR_Integer) 1))
#line 250 "builtin_ops.m"
                                                    {
#line 250 "builtin_ops.m"
                                                      MR_Word backend_libs__builtin_ops__V_249_249;
#line 250 "builtin_ops.m"
                                                      MR_Word backend_libs__builtin_ops__V_251_251;
#line 250 "builtin_ops.m"
                                                      MR_Word backend_libs__builtin_ops__V_252_252;

#line 251 "builtin_ops.m"
                                                      {
#line 251 "builtin_ops.m"
                                                        backend_libs__builtin_ops__V_251_251 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 251 "builtin_ops.m"
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_251_251, 0) = backend_libs__builtin_ops__V_432_432;
#line 251 "builtin_ops.m"
                                                      }
#line 251 "builtin_ops.m"
                                                      {
#line 251 "builtin_ops.m"
                                                        backend_libs__builtin_ops__V_252_252 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 251 "builtin_ops.m"
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_252_252, 0) = backend_libs__builtin_ops__V_430_430;
#line 251 "builtin_ops.m"
                                                      }
#line 251 "builtin_ops.m"
                                                      {
#line 251 "builtin_ops.m"
                                                        backend_libs__builtin_ops__V_249_249 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 251 "builtin_ops.m"
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_249_249, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 251 "builtin_ops.m"
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_249_249, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
#line 251 "builtin_ops.m"
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_249_249, 2) = ((MR_Box) (backend_libs__builtin_ops__V_251_251));
#line 251 "builtin_ops.m"
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_249_249, 3) = ((MR_Box) (backend_libs__builtin_ops__V_252_252));
#line 251 "builtin_ops.m"
                                                      }
#line 250 "builtin_ops.m"
                                                      {
#line 250 "builtin_ops.m"
                                                        MR_Word base;
#line 250 "builtin_ops.m"
                                                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 250 "builtin_ops.m"
                                                        *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 250 "builtin_ops.m"
                                                        MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__V_444_444;
#line 250 "builtin_ops.m"
                                                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_249_249));
#line 250 "builtin_ops.m"
                                                      }
#line 250 "builtin_ops.m"
                                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 250 "builtin_ops.m"
                                                    }
#line 184 "builtin_ops.m"
                                                  else
#line 184 "builtin_ops.m"
                                                    if ((backend_libs__builtin_ops__HeadVar__3_3 == (MR_Integer) 2))
#line 252 "builtin_ops.m"
                                                      {
#line 252 "builtin_ops.m"
                                                        MR_Word backend_libs__builtin_ops__V_259_259;
#line 252 "builtin_ops.m"
                                                        MR_Word backend_libs__builtin_ops__V_261_261;
#line 252 "builtin_ops.m"
                                                        MR_Word backend_libs__builtin_ops__V_262_262;

#line 253 "builtin_ops.m"
                                                        {
#line 253 "builtin_ops.m"
                                                          backend_libs__builtin_ops__V_261_261 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 253 "builtin_ops.m"
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_261_261, 0) = backend_libs__builtin_ops__V_444_444;
#line 253 "builtin_ops.m"
                                                        }
#line 253 "builtin_ops.m"
                                                        {
#line 253 "builtin_ops.m"
                                                          backend_libs__builtin_ops__V_262_262 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 253 "builtin_ops.m"
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_262_262, 0) = backend_libs__builtin_ops__V_430_430;
#line 253 "builtin_ops.m"
                                                        }
#line 253 "builtin_ops.m"
                                                        {
#line 253 "builtin_ops.m"
                                                          backend_libs__builtin_ops__V_259_259 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 253 "builtin_ops.m"
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_259_259, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 253 "builtin_ops.m"
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_259_259, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
#line 253 "builtin_ops.m"
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_259_259, 2) = ((MR_Box) (backend_libs__builtin_ops__V_261_261));
#line 253 "builtin_ops.m"
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_259_259, 3) = ((MR_Box) (backend_libs__builtin_ops__V_262_262));
#line 253 "builtin_ops.m"
                                                        }
#line 252 "builtin_ops.m"
                                                        {
#line 252 "builtin_ops.m"
                                                          MR_Word base;
#line 252 "builtin_ops.m"
                                                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 252 "builtin_ops.m"
                                                          *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 252 "builtin_ops.m"
                                                          MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__V_432_432;
#line 252 "builtin_ops.m"
                                                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_259_259));
#line 252 "builtin_ops.m"
                                                        }
#line 252 "builtin_ops.m"
                                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 252 "builtin_ops.m"
                                                      }
#line 184 "builtin_ops.m"
                                                    else
#line 184 "builtin_ops.m"
                                                      backend_libs__builtin_ops__succeeded = MR_FALSE;
#line 184 "builtin_ops.m"
                                              }
#line 248 "builtin_ops.m"
                                          }
#line 184 "builtin_ops.m"
                                      }
#line 184 "builtin_ops.m"
                                    else
#line 184 "builtin_ops.m"
                                      if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "plus") == 0))
#line 222 "builtin_ops.m"
                                        {
#line 222 "builtin_ops.m"
                                          MR_Box backend_libs__builtin_ops__Z_105;
#line 222 "builtin_ops.m"
                                          MR_Word backend_libs__builtin_ops__V_108_108;
#line 222 "builtin_ops.m"
                                          MR_Word backend_libs__builtin_ops__V_109_109;
#line 222 "builtin_ops.m"
                                          MR_Word backend_libs__builtin_ops__V_110_110;
#line 222 "builtin_ops.m"
                                          MR_Word backend_libs__builtin_ops__V_111_111;
#line 222 "builtin_ops.m"
                                          MR_Word backend_libs__builtin_ops__V_112_112;

#line 222 "builtin_ops.m"
                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__HeadVar__3_3 == (MR_Integer) 0);
#line 222 "builtin_ops.m"
                                          if (backend_libs__builtin_ops__succeeded)
#line 222 "builtin_ops.m"
                                            {
#line 222 "builtin_ops.m"
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_443_443)) == (MR_mktag((MR_Integer) 1)));
#line 222 "builtin_ops.m"
                                              if (backend_libs__builtin_ops__succeeded)
#line 222 "builtin_ops.m"
                                                {
#line 222 "builtin_ops.m"
                                                  backend_libs__builtin_ops__Z_105 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 0));
#line 222 "builtin_ops.m"
                                                  backend_libs__builtin_ops__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 1)));
#line 222 "builtin_ops.m"
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_108_108 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 222 "builtin_ops.m"
                                                  if (backend_libs__builtin_ops__succeeded)
#line 222 "builtin_ops.m"
                                                    {
#line 223 "builtin_ops.m"
                                                      backend_libs__builtin_ops__V_110_110 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 223 "builtin_ops.m"
                                                      {
#line 223 "builtin_ops.m"
                                                        backend_libs__builtin_ops__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 223 "builtin_ops.m"
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_111_111, 0) = backend_libs__builtin_ops__V_432_432;
#line 223 "builtin_ops.m"
                                                      }
#line 223 "builtin_ops.m"
                                                      {
#line 223 "builtin_ops.m"
                                                        backend_libs__builtin_ops__V_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 223 "builtin_ops.m"
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_112_112, 0) = backend_libs__builtin_ops__V_444_444;
#line 223 "builtin_ops.m"
                                                      }
#line 223 "builtin_ops.m"
                                                      {
#line 223 "builtin_ops.m"
                                                        backend_libs__builtin_ops__V_109_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 223 "builtin_ops.m"
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_109_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 223 "builtin_ops.m"
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_109_109, 1) = ((MR_Box) (backend_libs__builtin_ops__V_110_110));
#line 223 "builtin_ops.m"
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_109_109, 2) = ((MR_Box) (backend_libs__builtin_ops__V_111_111));
#line 223 "builtin_ops.m"
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_109_109, 3) = ((MR_Box) (backend_libs__builtin_ops__V_112_112));
#line 223 "builtin_ops.m"
                                                      }
#line 222 "builtin_ops.m"
                                                      {
#line 222 "builtin_ops.m"
                                                        MR_Word base;
#line 222 "builtin_ops.m"
                                                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 222 "builtin_ops.m"
                                                        *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 222 "builtin_ops.m"
                                                        MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__Z_105;
#line 222 "builtin_ops.m"
                                                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_109_109));
#line 222 "builtin_ops.m"
                                                      }
#line 222 "builtin_ops.m"
                                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 222 "builtin_ops.m"
                                                    }
#line 222 "builtin_ops.m"
                                                }
#line 222 "builtin_ops.m"
                                            }
#line 222 "builtin_ops.m"
                                        }
#line 184 "builtin_ops.m"
                                      else
#line 184 "builtin_ops.m"
                                        if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "minus") == 0))
#line 230 "builtin_ops.m"
                                          {
#line 230 "builtin_ops.m"
                                            MR_Box backend_libs__builtin_ops__Z_145;
#line 230 "builtin_ops.m"
                                            MR_Word backend_libs__builtin_ops__V_148_148;
#line 230 "builtin_ops.m"
                                            MR_Word backend_libs__builtin_ops__V_149_149;
#line 230 "builtin_ops.m"
                                            MR_Word backend_libs__builtin_ops__V_150_150;
#line 230 "builtin_ops.m"
                                            MR_Word backend_libs__builtin_ops__V_151_151;
#line 230 "builtin_ops.m"
                                            MR_Word backend_libs__builtin_ops__V_152_152;

#line 230 "builtin_ops.m"
                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__HeadVar__3_3 == (MR_Integer) 0);
#line 230 "builtin_ops.m"
                                            if (backend_libs__builtin_ops__succeeded)
#line 230 "builtin_ops.m"
                                              {
#line 230 "builtin_ops.m"
                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_443_443)) == (MR_mktag((MR_Integer) 1)));
#line 230 "builtin_ops.m"
                                                if (backend_libs__builtin_ops__succeeded)
#line 230 "builtin_ops.m"
                                                  {
#line 230 "builtin_ops.m"
                                                    backend_libs__builtin_ops__Z_145 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 0));
#line 230 "builtin_ops.m"
                                                    backend_libs__builtin_ops__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 1)));
#line 230 "builtin_ops.m"
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_148_148 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 230 "builtin_ops.m"
                                                    if (backend_libs__builtin_ops__succeeded)
#line 230 "builtin_ops.m"
                                                      {
#line 231 "builtin_ops.m"
                                                        backend_libs__builtin_ops__V_150_150 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 231 "builtin_ops.m"
                                                        {
#line 231 "builtin_ops.m"
                                                          backend_libs__builtin_ops__V_151_151 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 231 "builtin_ops.m"
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_151_151, 0) = backend_libs__builtin_ops__V_432_432;
#line 231 "builtin_ops.m"
                                                        }
#line 231 "builtin_ops.m"
                                                        {
#line 231 "builtin_ops.m"
                                                          backend_libs__builtin_ops__V_152_152 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 231 "builtin_ops.m"
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_152_152, 0) = backend_libs__builtin_ops__V_444_444;
#line 231 "builtin_ops.m"
                                                        }
#line 231 "builtin_ops.m"
                                                        {
#line 231 "builtin_ops.m"
                                                          backend_libs__builtin_ops__V_149_149 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 231 "builtin_ops.m"
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_149_149, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 231 "builtin_ops.m"
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_149_149, 1) = ((MR_Box) (backend_libs__builtin_ops__V_150_150));
#line 231 "builtin_ops.m"
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_149_149, 2) = ((MR_Box) (backend_libs__builtin_ops__V_151_151));
#line 231 "builtin_ops.m"
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_149_149, 3) = ((MR_Box) (backend_libs__builtin_ops__V_152_152));
#line 231 "builtin_ops.m"
                                                        }
#line 230 "builtin_ops.m"
                                                        {
#line 230 "builtin_ops.m"
                                                          MR_Word base;
#line 230 "builtin_ops.m"
                                                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 230 "builtin_ops.m"
                                                          *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 230 "builtin_ops.m"
                                                          MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__Z_145;
#line 230 "builtin_ops.m"
                                                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_149_149));
#line 230 "builtin_ops.m"
                                                        }
#line 230 "builtin_ops.m"
                                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 230 "builtin_ops.m"
                                                      }
#line 230 "builtin_ops.m"
                                                  }
#line 230 "builtin_ops.m"
                                              }
#line 230 "builtin_ops.m"
                                          }
#line 184 "builtin_ops.m"
                                        else
#line 184 "builtin_ops.m"
                                          if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "times") == 0))
#line 234 "builtin_ops.m"
                                            {
#line 234 "builtin_ops.m"
                                              MR_Box backend_libs__builtin_ops__Z_165;
#line 234 "builtin_ops.m"
                                              MR_Word backend_libs__builtin_ops__V_168_168;
#line 234 "builtin_ops.m"
                                              MR_Word backend_libs__builtin_ops__V_169_169;
#line 234 "builtin_ops.m"
                                              MR_Word backend_libs__builtin_ops__V_170_170;
#line 234 "builtin_ops.m"
                                              MR_Word backend_libs__builtin_ops__V_171_171;
#line 234 "builtin_ops.m"
                                              MR_Word backend_libs__builtin_ops__V_172_172;

#line 234 "builtin_ops.m"
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__HeadVar__3_3 == (MR_Integer) 0);
#line 234 "builtin_ops.m"
                                              if (backend_libs__builtin_ops__succeeded)
#line 234 "builtin_ops.m"
                                                {
#line 234 "builtin_ops.m"
                                                  backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_443_443)) == (MR_mktag((MR_Integer) 1)));
#line 234 "builtin_ops.m"
                                                  if (backend_libs__builtin_ops__succeeded)
#line 234 "builtin_ops.m"
                                                    {
#line 234 "builtin_ops.m"
                                                      backend_libs__builtin_ops__Z_165 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 0));
#line 234 "builtin_ops.m"
                                                      backend_libs__builtin_ops__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 1)));
#line 234 "builtin_ops.m"
                                                      backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_168_168 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 234 "builtin_ops.m"
                                                      if (backend_libs__builtin_ops__succeeded)
#line 234 "builtin_ops.m"
                                                        {
#line 235 "builtin_ops.m"
                                                          backend_libs__builtin_ops__V_170_170 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 235 "builtin_ops.m"
                                                          {
#line 235 "builtin_ops.m"
                                                            backend_libs__builtin_ops__V_171_171 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 235 "builtin_ops.m"
                                                            MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_171_171, 0) = backend_libs__builtin_ops__V_432_432;
#line 235 "builtin_ops.m"
                                                          }
#line 235 "builtin_ops.m"
                                                          {
#line 235 "builtin_ops.m"
                                                            backend_libs__builtin_ops__V_172_172 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 235 "builtin_ops.m"
                                                            MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_172_172, 0) = backend_libs__builtin_ops__V_444_444;
#line 235 "builtin_ops.m"
                                                          }
#line 235 "builtin_ops.m"
                                                          {
#line 235 "builtin_ops.m"
                                                            backend_libs__builtin_ops__V_169_169 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 235 "builtin_ops.m"
                                                            MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_169_169, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 235 "builtin_ops.m"
                                                            MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_169_169, 1) = ((MR_Box) (backend_libs__builtin_ops__V_170_170));
#line 235 "builtin_ops.m"
                                                            MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_169_169, 2) = ((MR_Box) (backend_libs__builtin_ops__V_171_171));
#line 235 "builtin_ops.m"
                                                            MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_169_169, 3) = ((MR_Box) (backend_libs__builtin_ops__V_172_172));
#line 235 "builtin_ops.m"
                                                          }
#line 234 "builtin_ops.m"
                                                          {
#line 234 "builtin_ops.m"
                                                            MR_Word base;
#line 234 "builtin_ops.m"
                                                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 234 "builtin_ops.m"
                                                            *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 234 "builtin_ops.m"
                                                            MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__Z_165;
#line 234 "builtin_ops.m"
                                                            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_169_169));
#line 234 "builtin_ops.m"
                                                          }
#line 234 "builtin_ops.m"
                                                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 234 "builtin_ops.m"
                                                        }
#line 234 "builtin_ops.m"
                                                    }
#line 234 "builtin_ops.m"
                                                }
#line 234 "builtin_ops.m"
                                            }
#line 184 "builtin_ops.m"
                                          else
#line 184 "builtin_ops.m"
                                            if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "unchecked_rem") == 0))
#line 238 "builtin_ops.m"
                                              {
#line 238 "builtin_ops.m"
                                                MR_Box backend_libs__builtin_ops__Z_185;
#line 238 "builtin_ops.m"
                                                MR_Word backend_libs__builtin_ops__V_188_188;
#line 238 "builtin_ops.m"
                                                MR_Word backend_libs__builtin_ops__V_189_189;
#line 238 "builtin_ops.m"
                                                MR_Word backend_libs__builtin_ops__V_190_190;
#line 238 "builtin_ops.m"
                                                MR_Word backend_libs__builtin_ops__V_191_191;
#line 238 "builtin_ops.m"
                                                MR_Word backend_libs__builtin_ops__V_192_192;

#line 238 "builtin_ops.m"
                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__HeadVar__3_3 == (MR_Integer) 0);
#line 238 "builtin_ops.m"
                                                if (backend_libs__builtin_ops__succeeded)
#line 238 "builtin_ops.m"
                                                  {
#line 238 "builtin_ops.m"
                                                    backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_443_443)) == (MR_mktag((MR_Integer) 1)));
#line 238 "builtin_ops.m"
                                                    if (backend_libs__builtin_ops__succeeded)
#line 238 "builtin_ops.m"
                                                      {
#line 238 "builtin_ops.m"
                                                        backend_libs__builtin_ops__Z_185 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 0));
#line 238 "builtin_ops.m"
                                                        backend_libs__builtin_ops__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 1)));
#line 238 "builtin_ops.m"
                                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_188_188 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 238 "builtin_ops.m"
                                                        if (backend_libs__builtin_ops__succeeded)
#line 238 "builtin_ops.m"
                                                          {
#line 239 "builtin_ops.m"
                                                            backend_libs__builtin_ops__V_190_190 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
#line 239 "builtin_ops.m"
                                                            {
#line 239 "builtin_ops.m"
                                                              backend_libs__builtin_ops__V_191_191 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 239 "builtin_ops.m"
                                                              MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_191_191, 0) = backend_libs__builtin_ops__V_432_432;
#line 239 "builtin_ops.m"
                                                            }
#line 239 "builtin_ops.m"
                                                            {
#line 239 "builtin_ops.m"
                                                              backend_libs__builtin_ops__V_192_192 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 239 "builtin_ops.m"
                                                              MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_192_192, 0) = backend_libs__builtin_ops__V_444_444;
#line 239 "builtin_ops.m"
                                                            }
#line 239 "builtin_ops.m"
                                                            {
#line 239 "builtin_ops.m"
                                                              backend_libs__builtin_ops__V_189_189 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 239 "builtin_ops.m"
                                                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_189_189, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 239 "builtin_ops.m"
                                                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_189_189, 1) = ((MR_Box) (backend_libs__builtin_ops__V_190_190));
#line 239 "builtin_ops.m"
                                                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_189_189, 2) = ((MR_Box) (backend_libs__builtin_ops__V_191_191));
#line 239 "builtin_ops.m"
                                                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_189_189, 3) = ((MR_Box) (backend_libs__builtin_ops__V_192_192));
#line 239 "builtin_ops.m"
                                                            }
#line 238 "builtin_ops.m"
                                                            {
#line 238 "builtin_ops.m"
                                                              MR_Word base;
#line 238 "builtin_ops.m"
                                                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 238 "builtin_ops.m"
                                                              *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 238 "builtin_ops.m"
                                                              MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__Z_185;
#line 238 "builtin_ops.m"
                                                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_189_189));
#line 238 "builtin_ops.m"
                                                            }
#line 238 "builtin_ops.m"
                                                            backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 238 "builtin_ops.m"
                                                          }
#line 238 "builtin_ops.m"
                                                      }
#line 238 "builtin_ops.m"
                                                  }
#line 238 "builtin_ops.m"
                                              }
#line 184 "builtin_ops.m"
                                            else
#line 184 "builtin_ops.m"
                                              if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "unchecked_quotient") == 0))
#line 236 "builtin_ops.m"
                                                {
#line 236 "builtin_ops.m"
                                                  MR_Box backend_libs__builtin_ops__Z_175;
#line 236 "builtin_ops.m"
                                                  MR_Word backend_libs__builtin_ops__V_178_178;
#line 236 "builtin_ops.m"
                                                  MR_Word backend_libs__builtin_ops__V_179_179;
#line 236 "builtin_ops.m"
                                                  MR_Word backend_libs__builtin_ops__V_180_180;
#line 236 "builtin_ops.m"
                                                  MR_Word backend_libs__builtin_ops__V_181_181;
#line 236 "builtin_ops.m"
                                                  MR_Word backend_libs__builtin_ops__V_182_182;

#line 236 "builtin_ops.m"
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__HeadVar__3_3 == (MR_Integer) 0);
#line 236 "builtin_ops.m"
                                                  if (backend_libs__builtin_ops__succeeded)
#line 236 "builtin_ops.m"
                                                    {
#line 236 "builtin_ops.m"
                                                      backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_443_443)) == (MR_mktag((MR_Integer) 1)));
#line 236 "builtin_ops.m"
                                                      if (backend_libs__builtin_ops__succeeded)
#line 236 "builtin_ops.m"
                                                        {
#line 236 "builtin_ops.m"
                                                          backend_libs__builtin_ops__Z_175 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 0));
#line 236 "builtin_ops.m"
                                                          backend_libs__builtin_ops__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 1)));
#line 236 "builtin_ops.m"
                                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_178_178 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 236 "builtin_ops.m"
                                                          if (backend_libs__builtin_ops__succeeded)
#line 236 "builtin_ops.m"
                                                            {
#line 237 "builtin_ops.m"
                                                              backend_libs__builtin_ops__V_180_180 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 237 "builtin_ops.m"
                                                              {
#line 237 "builtin_ops.m"
                                                                backend_libs__builtin_ops__V_181_181 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 237 "builtin_ops.m"
                                                                MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_181_181, 0) = backend_libs__builtin_ops__V_432_432;
#line 237 "builtin_ops.m"
                                                              }
#line 237 "builtin_ops.m"
                                                              {
#line 237 "builtin_ops.m"
                                                                backend_libs__builtin_ops__V_182_182 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 237 "builtin_ops.m"
                                                                MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_182_182, 0) = backend_libs__builtin_ops__V_444_444;
#line 237 "builtin_ops.m"
                                                              }
#line 237 "builtin_ops.m"
                                                              {
#line 237 "builtin_ops.m"
                                                                backend_libs__builtin_ops__V_179_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 237 "builtin_ops.m"
                                                                MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_179_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 237 "builtin_ops.m"
                                                                MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_179_179, 1) = ((MR_Box) (backend_libs__builtin_ops__V_180_180));
#line 237 "builtin_ops.m"
                                                                MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_179_179, 2) = ((MR_Box) (backend_libs__builtin_ops__V_181_181));
#line 237 "builtin_ops.m"
                                                                MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_179_179, 3) = ((MR_Box) (backend_libs__builtin_ops__V_182_182));
#line 237 "builtin_ops.m"
                                                              }
#line 236 "builtin_ops.m"
                                                              {
#line 236 "builtin_ops.m"
                                                                MR_Word base;
#line 236 "builtin_ops.m"
                                                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 236 "builtin_ops.m"
                                                                *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 236 "builtin_ops.m"
                                                                MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__Z_175;
#line 236 "builtin_ops.m"
                                                                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_179_179));
#line 236 "builtin_ops.m"
                                                              }
#line 236 "builtin_ops.m"
                                                              backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 236 "builtin_ops.m"
                                                            }
#line 236 "builtin_ops.m"
                                                        }
#line 236 "builtin_ops.m"
                                                    }
#line 236 "builtin_ops.m"
                                                }
#line 184 "builtin_ops.m"
                                              else
#line 184 "builtin_ops.m"
                                                if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "unchecked_left_shift") == 0))
#line 240 "builtin_ops.m"
                                                  {
#line 240 "builtin_ops.m"
                                                    MR_Box backend_libs__builtin_ops__Z_195;
#line 240 "builtin_ops.m"
                                                    MR_Word backend_libs__builtin_ops__V_198_198;
#line 240 "builtin_ops.m"
                                                    MR_Word backend_libs__builtin_ops__V_199_199;
#line 240 "builtin_ops.m"
                                                    MR_Word backend_libs__builtin_ops__V_200_200;
#line 240 "builtin_ops.m"
                                                    MR_Word backend_libs__builtin_ops__V_201_201;
#line 240 "builtin_ops.m"
                                                    MR_Word backend_libs__builtin_ops__V_202_202;

#line 240 "builtin_ops.m"
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__HeadVar__3_3 == (MR_Integer) 0);
#line 240 "builtin_ops.m"
                                                    if (backend_libs__builtin_ops__succeeded)
#line 240 "builtin_ops.m"
                                                      {
#line 240 "builtin_ops.m"
                                                        backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_443_443)) == (MR_mktag((MR_Integer) 1)));
#line 240 "builtin_ops.m"
                                                        if (backend_libs__builtin_ops__succeeded)
#line 240 "builtin_ops.m"
                                                          {
#line 240 "builtin_ops.m"
                                                            backend_libs__builtin_ops__Z_195 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 0));
#line 240 "builtin_ops.m"
                                                            backend_libs__builtin_ops__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 1)));
#line 240 "builtin_ops.m"
                                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_198_198 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 240 "builtin_ops.m"
                                                            if (backend_libs__builtin_ops__succeeded)
#line 240 "builtin_ops.m"
                                                              {
#line 241 "builtin_ops.m"
                                                                backend_libs__builtin_ops__V_200_200 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 241 "builtin_ops.m"
                                                                {
#line 241 "builtin_ops.m"
                                                                  backend_libs__builtin_ops__V_201_201 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 241 "builtin_ops.m"
                                                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_201_201, 0) = backend_libs__builtin_ops__V_432_432;
#line 241 "builtin_ops.m"
                                                                }
#line 241 "builtin_ops.m"
                                                                {
#line 241 "builtin_ops.m"
                                                                  backend_libs__builtin_ops__V_202_202 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 241 "builtin_ops.m"
                                                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_202_202, 0) = backend_libs__builtin_ops__V_444_444;
#line 241 "builtin_ops.m"
                                                                }
#line 241 "builtin_ops.m"
                                                                {
#line 241 "builtin_ops.m"
                                                                  backend_libs__builtin_ops__V_199_199 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 241 "builtin_ops.m"
                                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_199_199, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 241 "builtin_ops.m"
                                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_199_199, 1) = ((MR_Box) (backend_libs__builtin_ops__V_200_200));
#line 241 "builtin_ops.m"
                                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_199_199, 2) = ((MR_Box) (backend_libs__builtin_ops__V_201_201));
#line 241 "builtin_ops.m"
                                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_199_199, 3) = ((MR_Box) (backend_libs__builtin_ops__V_202_202));
#line 241 "builtin_ops.m"
                                                                }
#line 240 "builtin_ops.m"
                                                                {
#line 240 "builtin_ops.m"
                                                                  MR_Word base;
#line 240 "builtin_ops.m"
                                                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 240 "builtin_ops.m"
                                                                  *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 240 "builtin_ops.m"
                                                                  MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__Z_195;
#line 240 "builtin_ops.m"
                                                                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_199_199));
#line 240 "builtin_ops.m"
                                                                }
#line 240 "builtin_ops.m"
                                                                backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 240 "builtin_ops.m"
                                                              }
#line 240 "builtin_ops.m"
                                                          }
#line 240 "builtin_ops.m"
                                                      }
#line 240 "builtin_ops.m"
                                                  }
#line 184 "builtin_ops.m"
                                                else
#line 184 "builtin_ops.m"
                                                  if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "unchecked_right_shift") == 0))
#line 242 "builtin_ops.m"
                                                    {
#line 242 "builtin_ops.m"
                                                      MR_Box backend_libs__builtin_ops__Z_205;
#line 242 "builtin_ops.m"
                                                      MR_Word backend_libs__builtin_ops__V_208_208;
#line 242 "builtin_ops.m"
                                                      MR_Word backend_libs__builtin_ops__V_209_209;
#line 242 "builtin_ops.m"
                                                      MR_Word backend_libs__builtin_ops__V_210_210;
#line 242 "builtin_ops.m"
                                                      MR_Word backend_libs__builtin_ops__V_211_211;
#line 242 "builtin_ops.m"
                                                      MR_Word backend_libs__builtin_ops__V_212_212;

#line 242 "builtin_ops.m"
                                                      backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__HeadVar__3_3 == (MR_Integer) 0);
#line 242 "builtin_ops.m"
                                                      if (backend_libs__builtin_ops__succeeded)
#line 242 "builtin_ops.m"
                                                        {
#line 242 "builtin_ops.m"
                                                          backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_443_443)) == (MR_mktag((MR_Integer) 1)));
#line 242 "builtin_ops.m"
                                                          if (backend_libs__builtin_ops__succeeded)
#line 242 "builtin_ops.m"
                                                            {
#line 242 "builtin_ops.m"
                                                              backend_libs__builtin_ops__Z_205 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 0));
#line 242 "builtin_ops.m"
                                                              backend_libs__builtin_ops__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 1)));
#line 242 "builtin_ops.m"
                                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_208_208 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 242 "builtin_ops.m"
                                                              if (backend_libs__builtin_ops__succeeded)
#line 242 "builtin_ops.m"
                                                                {
#line 243 "builtin_ops.m"
                                                                  backend_libs__builtin_ops__V_210_210 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
#line 243 "builtin_ops.m"
                                                                  {
#line 243 "builtin_ops.m"
                                                                    backend_libs__builtin_ops__V_211_211 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 243 "builtin_ops.m"
                                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_211_211, 0) = backend_libs__builtin_ops__V_432_432;
#line 243 "builtin_ops.m"
                                                                  }
#line 243 "builtin_ops.m"
                                                                  {
#line 243 "builtin_ops.m"
                                                                    backend_libs__builtin_ops__V_212_212 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 243 "builtin_ops.m"
                                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_212_212, 0) = backend_libs__builtin_ops__V_444_444;
#line 243 "builtin_ops.m"
                                                                  }
#line 243 "builtin_ops.m"
                                                                  {
#line 243 "builtin_ops.m"
                                                                    backend_libs__builtin_ops__V_209_209 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 243 "builtin_ops.m"
                                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_209_209, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 243 "builtin_ops.m"
                                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_209_209, 1) = ((MR_Box) (backend_libs__builtin_ops__V_210_210));
#line 243 "builtin_ops.m"
                                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_209_209, 2) = ((MR_Box) (backend_libs__builtin_ops__V_211_211));
#line 243 "builtin_ops.m"
                                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_209_209, 3) = ((MR_Box) (backend_libs__builtin_ops__V_212_212));
#line 243 "builtin_ops.m"
                                                                  }
#line 242 "builtin_ops.m"
                                                                  {
#line 242 "builtin_ops.m"
                                                                    MR_Word base;
#line 242 "builtin_ops.m"
                                                                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 242 "builtin_ops.m"
                                                                    *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 242 "builtin_ops.m"
                                                                    MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__Z_205;
#line 242 "builtin_ops.m"
                                                                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_209_209));
#line 242 "builtin_ops.m"
                                                                  }
#line 242 "builtin_ops.m"
                                                                  backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 242 "builtin_ops.m"
                                                                }
#line 242 "builtin_ops.m"
                                                            }
#line 242 "builtin_ops.m"
                                                        }
#line 242 "builtin_ops.m"
                                                    }
#line 184 "builtin_ops.m"
                                                  else
#line 184 "builtin_ops.m"
                                                    backend_libs__builtin_ops__succeeded = MR_FALSE;
#line 232 "builtin_ops.m"
              }
#line 184 "builtin_ops.m"
          }
#line 184 "builtin_ops.m"
        else
#line 184 "builtin_ops.m"
          if ((strcmp(backend_libs__builtin_ops__HeadVar__1_1, (MR_String) "float") == 0))
#line 184 "builtin_ops.m"
            {
#line 184 "builtin_ops.m"
              MR_Word backend_libs__builtin_ops__V_441_441;
#line 184 "builtin_ops.m"
              MR_Box backend_libs__builtin_ops__V_442_442;

#line 274 "builtin_ops.m"
              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__HeadVar__3_3 == (MR_Integer) 0);
#line 184 "builtin_ops.m"
              if (backend_libs__builtin_ops__succeeded)
#line 184 "builtin_ops.m"
                {
#line 274 "builtin_ops.m"
                  backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_431_431)) == (MR_mktag((MR_Integer) 1)));
#line 274 "builtin_ops.m"
                  if (backend_libs__builtin_ops__succeeded)
#line 274 "builtin_ops.m"
                    {
#line 274 "builtin_ops.m"
                      backend_libs__builtin_ops__V_442_442 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_431_431, (MR_Integer) 0));
#line 274 "builtin_ops.m"
                      backend_libs__builtin_ops__V_441_441 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_431_431, (MR_Integer) 1)));
#line 184 "builtin_ops.m"
                      if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "*") == 0))
#line 274 "builtin_ops.m"
                        {
#line 274 "builtin_ops.m"
                          MR_Box backend_libs__builtin_ops__Z_338;
#line 274 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_341_341;
#line 274 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_342_342;
#line 274 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_343_343;
#line 274 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_344_344;
#line 274 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_345_345;

#line 274 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_441_441)) == (MR_mktag((MR_Integer) 1)));
#line 274 "builtin_ops.m"
                          if (backend_libs__builtin_ops__succeeded)
#line 274 "builtin_ops.m"
                            {
#line 274 "builtin_ops.m"
                              backend_libs__builtin_ops__Z_338 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_441_441, (MR_Integer) 0));
#line 274 "builtin_ops.m"
                              backend_libs__builtin_ops__V_341_341 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_441_441, (MR_Integer) 1)));
#line 274 "builtin_ops.m"
                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_341_341 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 274 "builtin_ops.m"
                              if (backend_libs__builtin_ops__succeeded)
#line 274 "builtin_ops.m"
                                {
#line 275 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_343_343 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 29));
#line 275 "builtin_ops.m"
                                  {
#line 275 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_344_344 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 275 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_344_344, 0) = backend_libs__builtin_ops__V_432_432;
#line 275 "builtin_ops.m"
                                  }
#line 275 "builtin_ops.m"
                                  {
#line 275 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_345_345 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 275 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_345_345, 0) = backend_libs__builtin_ops__V_442_442;
#line 275 "builtin_ops.m"
                                  }
#line 275 "builtin_ops.m"
                                  {
#line 275 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_342_342 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 275 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_342_342, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 275 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_342_342, 1) = ((MR_Box) (backend_libs__builtin_ops__V_343_343));
#line 275 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_342_342, 2) = ((MR_Box) (backend_libs__builtin_ops__V_344_344));
#line 275 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_342_342, 3) = ((MR_Box) (backend_libs__builtin_ops__V_345_345));
#line 275 "builtin_ops.m"
                                  }
#line 274 "builtin_ops.m"
                                  {
#line 274 "builtin_ops.m"
                                    MR_Word base;
#line 274 "builtin_ops.m"
                                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 274 "builtin_ops.m"
                                    *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 274 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__Z_338;
#line 274 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_342_342));
#line 274 "builtin_ops.m"
                                  }
#line 274 "builtin_ops.m"
                                  backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 274 "builtin_ops.m"
                                }
#line 274 "builtin_ops.m"
                            }
#line 274 "builtin_ops.m"
                        }
#line 184 "builtin_ops.m"
                      else
#line 184 "builtin_ops.m"
                        if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "+") == 0))
#line 184 "builtin_ops.m"
                          if ((backend_libs__builtin_ops__V_441_441 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 278 "builtin_ops.m"
                            {
#line 278 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_360_360;

#line 279 "builtin_ops.m"
                              {
#line 279 "builtin_ops.m"
                                backend_libs__builtin_ops__V_360_360 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 279 "builtin_ops.m"
                                MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_360_360, 0) = backend_libs__builtin_ops__V_432_432;
#line 279 "builtin_ops.m"
                              }
#line 278 "builtin_ops.m"
                              {
#line 278 "builtin_ops.m"
                                MR_Word base;
#line 278 "builtin_ops.m"
                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 278 "builtin_ops.m"
                                *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 278 "builtin_ops.m"
                                MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__V_442_442;
#line 278 "builtin_ops.m"
                                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_360_360));
#line 278 "builtin_ops.m"
                              }
#line 278 "builtin_ops.m"
                              backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 278 "builtin_ops.m"
                            }
#line 184 "builtin_ops.m"
                          else
#line 270 "builtin_ops.m"
                            {
#line 270 "builtin_ops.m"
                              MR_Box backend_libs__builtin_ops__Z_318 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_441_441, (MR_Integer) 0));
#line 270 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_321_321 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_441_441, (MR_Integer) 1)));
#line 270 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_322_322;
#line 270 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_323_323;
#line 270 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_324_324;
#line 270 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_325_325;

#line 270 "builtin_ops.m"
                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_321_321 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 270 "builtin_ops.m"
                              if (backend_libs__builtin_ops__succeeded)
#line 270 "builtin_ops.m"
                                {
#line 271 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_323_323 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 27));
#line 271 "builtin_ops.m"
                                  {
#line 271 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_324_324 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 271 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_324_324, 0) = backend_libs__builtin_ops__V_432_432;
#line 271 "builtin_ops.m"
                                  }
#line 271 "builtin_ops.m"
                                  {
#line 271 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_325_325 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 271 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_325_325, 0) = backend_libs__builtin_ops__V_442_442;
#line 271 "builtin_ops.m"
                                  }
#line 271 "builtin_ops.m"
                                  {
#line 271 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_322_322 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 271 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_322_322, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 271 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_322_322, 1) = ((MR_Box) (backend_libs__builtin_ops__V_323_323));
#line 271 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_322_322, 2) = ((MR_Box) (backend_libs__builtin_ops__V_324_324));
#line 271 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_322_322, 3) = ((MR_Box) (backend_libs__builtin_ops__V_325_325));
#line 271 "builtin_ops.m"
                                  }
#line 270 "builtin_ops.m"
                                  {
#line 270 "builtin_ops.m"
                                    MR_Word base;
#line 270 "builtin_ops.m"
                                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 270 "builtin_ops.m"
                                    *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 270 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__Z_318;
#line 270 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_322_322));
#line 270 "builtin_ops.m"
                                  }
#line 270 "builtin_ops.m"
                                  backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 270 "builtin_ops.m"
                                }
#line 270 "builtin_ops.m"
                            }
#line 184 "builtin_ops.m"
                        else
#line 184 "builtin_ops.m"
                          if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "-") == 0))
#line 184 "builtin_ops.m"
                            if ((backend_libs__builtin_ops__V_441_441 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 280 "builtin_ops.m"
                              {
#line 280 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_365_365;
#line 280 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_369_369;

#line 281 "builtin_ops.m"
                                {
#line 281 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_369_369 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 281 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_369_369, 0) = backend_libs__builtin_ops__V_432_432;
#line 281 "builtin_ops.m"
                                }
#line 281 "builtin_ops.m"
                                {
#line 281 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_365_365 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 281 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_365_365, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 281 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_365_365, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 28))));
#line 281 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_365_365, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &backend_libs__builtin_ops_scalar_common_2[1])));
#line 281 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_365_365, 3) = ((MR_Box) (backend_libs__builtin_ops__V_369_369));
#line 281 "builtin_ops.m"
                                }
#line 280 "builtin_ops.m"
                                {
#line 280 "builtin_ops.m"
                                  MR_Word base;
#line 280 "builtin_ops.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 280 "builtin_ops.m"
                                  *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 280 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__V_442_442;
#line 280 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_365_365));
#line 280 "builtin_ops.m"
                                }
#line 280 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 280 "builtin_ops.m"
                              }
#line 184 "builtin_ops.m"
                            else
#line 272 "builtin_ops.m"
                              {
#line 272 "builtin_ops.m"
                                MR_Box backend_libs__builtin_ops__Z_328 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_441_441, (MR_Integer) 0));
#line 272 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_331_331 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_441_441, (MR_Integer) 1)));
#line 272 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_332_332;
#line 272 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_333_333;
#line 272 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_334_334;
#line 272 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_335_335;

#line 272 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_331_331 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 272 "builtin_ops.m"
                                if (backend_libs__builtin_ops__succeeded)
#line 272 "builtin_ops.m"
                                  {
#line 273 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_333_333 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 28));
#line 273 "builtin_ops.m"
                                    {
#line 273 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_334_334 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 273 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_334_334, 0) = backend_libs__builtin_ops__V_432_432;
#line 273 "builtin_ops.m"
                                    }
#line 273 "builtin_ops.m"
                                    {
#line 273 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_335_335 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 273 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_335_335, 0) = backend_libs__builtin_ops__V_442_442;
#line 273 "builtin_ops.m"
                                    }
#line 273 "builtin_ops.m"
                                    {
#line 273 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_332_332 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 273 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_332_332, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 273 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_332_332, 1) = ((MR_Box) (backend_libs__builtin_ops__V_333_333));
#line 273 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_332_332, 2) = ((MR_Box) (backend_libs__builtin_ops__V_334_334));
#line 273 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_332_332, 3) = ((MR_Box) (backend_libs__builtin_ops__V_335_335));
#line 273 "builtin_ops.m"
                                    }
#line 272 "builtin_ops.m"
                                    {
#line 272 "builtin_ops.m"
                                      MR_Word base;
#line 272 "builtin_ops.m"
                                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 272 "builtin_ops.m"
                                      *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 272 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__Z_328;
#line 272 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_332_332));
#line 272 "builtin_ops.m"
                                    }
#line 272 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 272 "builtin_ops.m"
                                  }
#line 272 "builtin_ops.m"
                              }
#line 184 "builtin_ops.m"
                          else
#line 184 "builtin_ops.m"
                            if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "<") == 0))
#line 285 "builtin_ops.m"
                              {
#line 285 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_382_382;
#line 285 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_383_383;
#line 285 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_384_384;
#line 285 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_385_385;

#line 285 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_441_441 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 285 "builtin_ops.m"
                                if (backend_libs__builtin_ops__succeeded)
#line 285 "builtin_ops.m"
                                  {
#line 286 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_383_383 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 33));
#line 286 "builtin_ops.m"
                                    {
#line 286 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_384_384 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 286 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_384_384, 0) = backend_libs__builtin_ops__V_432_432;
#line 286 "builtin_ops.m"
                                    }
#line 286 "builtin_ops.m"
                                    {
#line 286 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_385_385 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 286 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_385_385, 0) = backend_libs__builtin_ops__V_442_442;
#line 286 "builtin_ops.m"
                                    }
#line 286 "builtin_ops.m"
                                    {
#line 286 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_382_382 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 286 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_382_382, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 286 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_382_382, 1) = ((MR_Box) (backend_libs__builtin_ops__V_383_383));
#line 286 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_382_382, 2) = ((MR_Box) (backend_libs__builtin_ops__V_384_384));
#line 286 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_382_382, 3) = ((MR_Box) (backend_libs__builtin_ops__V_385_385));
#line 286 "builtin_ops.m"
                                    }
#line 285 "builtin_ops.m"
                                    {
#line 285 "builtin_ops.m"
                                      MR_Word base;
#line 285 "builtin_ops.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 285 "builtin_ops.m"
                                      *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 285 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (backend_libs__builtin_ops__V_382_382));
#line 285 "builtin_ops.m"
                                    }
#line 285 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 285 "builtin_ops.m"
                                  }
#line 285 "builtin_ops.m"
                              }
#line 184 "builtin_ops.m"
                            else
#line 184 "builtin_ops.m"
                              if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) ">") == 0))
#line 283 "builtin_ops.m"
                                {
#line 283 "builtin_ops.m"
                                  MR_Word backend_libs__builtin_ops__V_374_374;
#line 283 "builtin_ops.m"
                                  MR_Word backend_libs__builtin_ops__V_375_375;
#line 283 "builtin_ops.m"
                                  MR_Word backend_libs__builtin_ops__V_376_376;
#line 283 "builtin_ops.m"
                                  MR_Word backend_libs__builtin_ops__V_377_377;

#line 283 "builtin_ops.m"
                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_441_441 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 283 "builtin_ops.m"
                                  if (backend_libs__builtin_ops__succeeded)
#line 283 "builtin_ops.m"
                                    {
#line 284 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_375_375 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 34));
#line 284 "builtin_ops.m"
                                      {
#line 284 "builtin_ops.m"
                                        backend_libs__builtin_ops__V_376_376 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 284 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_376_376, 0) = backend_libs__builtin_ops__V_432_432;
#line 284 "builtin_ops.m"
                                      }
#line 284 "builtin_ops.m"
                                      {
#line 284 "builtin_ops.m"
                                        backend_libs__builtin_ops__V_377_377 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 284 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_377_377, 0) = backend_libs__builtin_ops__V_442_442;
#line 284 "builtin_ops.m"
                                      }
#line 284 "builtin_ops.m"
                                      {
#line 284 "builtin_ops.m"
                                        backend_libs__builtin_ops__V_374_374 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 284 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_374_374, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 284 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_374_374, 1) = ((MR_Box) (backend_libs__builtin_ops__V_375_375));
#line 284 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_374_374, 2) = ((MR_Box) (backend_libs__builtin_ops__V_376_376));
#line 284 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_374_374, 3) = ((MR_Box) (backend_libs__builtin_ops__V_377_377));
#line 284 "builtin_ops.m"
                                      }
#line 283 "builtin_ops.m"
                                      {
#line 283 "builtin_ops.m"
                                        MR_Word base;
#line 283 "builtin_ops.m"
                                        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 283 "builtin_ops.m"
                                        *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 283 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (backend_libs__builtin_ops__V_374_374));
#line 283 "builtin_ops.m"
                                      }
#line 283 "builtin_ops.m"
                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 283 "builtin_ops.m"
                                    }
#line 283 "builtin_ops.m"
                                }
#line 184 "builtin_ops.m"
                              else
#line 184 "builtin_ops.m"
                                if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "=<") == 0))
#line 289 "builtin_ops.m"
                                  {
#line 289 "builtin_ops.m"
                                    MR_Word backend_libs__builtin_ops__V_398_398;
#line 289 "builtin_ops.m"
                                    MR_Word backend_libs__builtin_ops__V_399_399;
#line 289 "builtin_ops.m"
                                    MR_Word backend_libs__builtin_ops__V_400_400;
#line 289 "builtin_ops.m"
                                    MR_Word backend_libs__builtin_ops__V_401_401;

#line 289 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_441_441 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 289 "builtin_ops.m"
                                    if (backend_libs__builtin_ops__succeeded)
#line 289 "builtin_ops.m"
                                      {
#line 290 "builtin_ops.m"
                                        backend_libs__builtin_ops__V_399_399 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 35));
#line 290 "builtin_ops.m"
                                        {
#line 290 "builtin_ops.m"
                                          backend_libs__builtin_ops__V_400_400 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 290 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_400_400, 0) = backend_libs__builtin_ops__V_432_432;
#line 290 "builtin_ops.m"
                                        }
#line 290 "builtin_ops.m"
                                        {
#line 290 "builtin_ops.m"
                                          backend_libs__builtin_ops__V_401_401 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 290 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_401_401, 0) = backend_libs__builtin_ops__V_442_442;
#line 290 "builtin_ops.m"
                                        }
#line 290 "builtin_ops.m"
                                        {
#line 290 "builtin_ops.m"
                                          backend_libs__builtin_ops__V_398_398 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 290 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_398_398, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 290 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_398_398, 1) = ((MR_Box) (backend_libs__builtin_ops__V_399_399));
#line 290 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_398_398, 2) = ((MR_Box) (backend_libs__builtin_ops__V_400_400));
#line 290 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_398_398, 3) = ((MR_Box) (backend_libs__builtin_ops__V_401_401));
#line 290 "builtin_ops.m"
                                        }
#line 289 "builtin_ops.m"
                                        {
#line 289 "builtin_ops.m"
                                          MR_Word base;
#line 289 "builtin_ops.m"
                                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 289 "builtin_ops.m"
                                          *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 289 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (backend_libs__builtin_ops__V_398_398));
#line 289 "builtin_ops.m"
                                        }
#line 289 "builtin_ops.m"
                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 289 "builtin_ops.m"
                                      }
#line 289 "builtin_ops.m"
                                  }
#line 184 "builtin_ops.m"
                                else
#line 184 "builtin_ops.m"
                                  if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) ">=") == 0))
#line 287 "builtin_ops.m"
                                    {
#line 287 "builtin_ops.m"
                                      MR_Word backend_libs__builtin_ops__V_390_390;
#line 287 "builtin_ops.m"
                                      MR_Word backend_libs__builtin_ops__V_391_391;
#line 287 "builtin_ops.m"
                                      MR_Word backend_libs__builtin_ops__V_392_392;
#line 287 "builtin_ops.m"
                                      MR_Word backend_libs__builtin_ops__V_393_393;

#line 287 "builtin_ops.m"
                                      backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_441_441 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 287 "builtin_ops.m"
                                      if (backend_libs__builtin_ops__succeeded)
#line 287 "builtin_ops.m"
                                        {
#line 288 "builtin_ops.m"
                                          backend_libs__builtin_ops__V_391_391 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 36));
#line 288 "builtin_ops.m"
                                          {
#line 288 "builtin_ops.m"
                                            backend_libs__builtin_ops__V_392_392 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 288 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_392_392, 0) = backend_libs__builtin_ops__V_432_432;
#line 288 "builtin_ops.m"
                                          }
#line 288 "builtin_ops.m"
                                          {
#line 288 "builtin_ops.m"
                                            backend_libs__builtin_ops__V_393_393 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 288 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_393_393, 0) = backend_libs__builtin_ops__V_442_442;
#line 288 "builtin_ops.m"
                                          }
#line 288 "builtin_ops.m"
                                          {
#line 288 "builtin_ops.m"
                                            backend_libs__builtin_ops__V_390_390 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 288 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_390_390, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 288 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_390_390, 1) = ((MR_Box) (backend_libs__builtin_ops__V_391_391));
#line 288 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_390_390, 2) = ((MR_Box) (backend_libs__builtin_ops__V_392_392));
#line 288 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_390_390, 3) = ((MR_Box) (backend_libs__builtin_ops__V_393_393));
#line 288 "builtin_ops.m"
                                          }
#line 287 "builtin_ops.m"
                                          {
#line 287 "builtin_ops.m"
                                            MR_Word base;
#line 287 "builtin_ops.m"
                                            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 287 "builtin_ops.m"
                                            *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 287 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (backend_libs__builtin_ops__V_390_390));
#line 287 "builtin_ops.m"
                                          }
#line 287 "builtin_ops.m"
                                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 287 "builtin_ops.m"
                                        }
#line 287 "builtin_ops.m"
                                    }
#line 184 "builtin_ops.m"
                                  else
#line 184 "builtin_ops.m"
                                    if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "unchecked_quotient") == 0))
#line 276 "builtin_ops.m"
                                      {
#line 276 "builtin_ops.m"
                                        MR_Box backend_libs__builtin_ops__Z_348;
#line 276 "builtin_ops.m"
                                        MR_Word backend_libs__builtin_ops__V_351_351;
#line 276 "builtin_ops.m"
                                        MR_Word backend_libs__builtin_ops__V_352_352;
#line 276 "builtin_ops.m"
                                        MR_Word backend_libs__builtin_ops__V_353_353;
#line 276 "builtin_ops.m"
                                        MR_Word backend_libs__builtin_ops__V_354_354;
#line 276 "builtin_ops.m"
                                        MR_Word backend_libs__builtin_ops__V_355_355;

#line 276 "builtin_ops.m"
                                        backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_441_441)) == (MR_mktag((MR_Integer) 1)));
#line 276 "builtin_ops.m"
                                        if (backend_libs__builtin_ops__succeeded)
#line 276 "builtin_ops.m"
                                          {
#line 276 "builtin_ops.m"
                                            backend_libs__builtin_ops__Z_348 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_441_441, (MR_Integer) 0));
#line 276 "builtin_ops.m"
                                            backend_libs__builtin_ops__V_351_351 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_441_441, (MR_Integer) 1)));
#line 276 "builtin_ops.m"
                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_351_351 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 276 "builtin_ops.m"
                                            if (backend_libs__builtin_ops__succeeded)
#line 276 "builtin_ops.m"
                                              {
#line 277 "builtin_ops.m"
                                                backend_libs__builtin_ops__V_353_353 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 30));
#line 277 "builtin_ops.m"
                                                {
#line 277 "builtin_ops.m"
                                                  backend_libs__builtin_ops__V_354_354 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 277 "builtin_ops.m"
                                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_354_354, 0) = backend_libs__builtin_ops__V_432_432;
#line 277 "builtin_ops.m"
                                                }
#line 277 "builtin_ops.m"
                                                {
#line 277 "builtin_ops.m"
                                                  backend_libs__builtin_ops__V_355_355 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 277 "builtin_ops.m"
                                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_355_355, 0) = backend_libs__builtin_ops__V_442_442;
#line 277 "builtin_ops.m"
                                                }
#line 277 "builtin_ops.m"
                                                {
#line 277 "builtin_ops.m"
                                                  backend_libs__builtin_ops__V_352_352 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 277 "builtin_ops.m"
                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_352_352, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 277 "builtin_ops.m"
                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_352_352, 1) = ((MR_Box) (backend_libs__builtin_ops__V_353_353));
#line 277 "builtin_ops.m"
                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_352_352, 2) = ((MR_Box) (backend_libs__builtin_ops__V_354_354));
#line 277 "builtin_ops.m"
                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_352_352, 3) = ((MR_Box) (backend_libs__builtin_ops__V_355_355));
#line 277 "builtin_ops.m"
                                                }
#line 276 "builtin_ops.m"
                                                {
#line 276 "builtin_ops.m"
                                                  MR_Word base;
#line 276 "builtin_ops.m"
                                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 276 "builtin_ops.m"
                                                  *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 276 "builtin_ops.m"
                                                  MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__Z_348;
#line 276 "builtin_ops.m"
                                                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_352_352));
#line 276 "builtin_ops.m"
                                                }
#line 276 "builtin_ops.m"
                                                backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 276 "builtin_ops.m"
                                              }
#line 276 "builtin_ops.m"
                                          }
#line 276 "builtin_ops.m"
                                      }
#line 184 "builtin_ops.m"
                                    else
#line 184 "builtin_ops.m"
                                      backend_libs__builtin_ops__succeeded = MR_FALSE;
#line 274 "builtin_ops.m"
                    }
#line 184 "builtin_ops.m"
                }
#line 184 "builtin_ops.m"
            }
#line 184 "builtin_ops.m"
          else
#line 184 "builtin_ops.m"
            if ((strcmp(backend_libs__builtin_ops__HeadVar__1_1, (MR_String) "builtin") == 0))
#line 200 "builtin_ops.m"
              {
#line 200 "builtin_ops.m"
                MR_Box backend_libs__builtin_ops__Y_27;
#line 200 "builtin_ops.m"
                MR_Word backend_libs__builtin_ops__V_29_29;
#line 200 "builtin_ops.m"
                MR_Word backend_libs__builtin_ops__V_30_30;

#line 200 "builtin_ops.m"
                backend_libs__builtin_ops__succeeded = (strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "unsafe_promise_unique") == 0);
#line 200 "builtin_ops.m"
                if (backend_libs__builtin_ops__succeeded)
#line 200 "builtin_ops.m"
                  {
#line 200 "builtin_ops.m"
                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__HeadVar__3_3 == (MR_Integer) 0);
#line 200 "builtin_ops.m"
                    if (backend_libs__builtin_ops__succeeded)
#line 200 "builtin_ops.m"
                      {
#line 200 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_431_431)) == (MR_mktag((MR_Integer) 1)));
#line 200 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 200 "builtin_ops.m"
                          {
#line 200 "builtin_ops.m"
                            backend_libs__builtin_ops__Y_27 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_431_431, (MR_Integer) 0));
#line 200 "builtin_ops.m"
                            backend_libs__builtin_ops__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_431_431, (MR_Integer) 1)));
#line 200 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 200 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 200 "builtin_ops.m"
                              {
#line 201 "builtin_ops.m"
                                {
#line 201 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 201 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_30_30, 0) = backend_libs__builtin_ops__V_432_432;
#line 201 "builtin_ops.m"
                                }
#line 200 "builtin_ops.m"
                                {
#line 200 "builtin_ops.m"
                                  MR_Word base;
#line 200 "builtin_ops.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 200 "builtin_ops.m"
                                  *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 200 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__Y_27;
#line 200 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_30_30));
#line 200 "builtin_ops.m"
                                }
#line 200 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 200 "builtin_ops.m"
                              }
#line 200 "builtin_ops.m"
                          }
#line 200 "builtin_ops.m"
                      }
#line 200 "builtin_ops.m"
                  }
#line 200 "builtin_ops.m"
              }
#line 184 "builtin_ops.m"
            else
#line 184 "builtin_ops.m"
              if ((strcmp(backend_libs__builtin_ops__HeadVar__1_1, (MR_String) "private_builtin") == 0))
#line 184 "builtin_ops.m"
                {
#line 208 "builtin_ops.m"
                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__HeadVar__3_3 == (MR_Integer) 0);
#line 184 "builtin_ops.m"
                  if (backend_libs__builtin_ops__succeeded)
#line 184 "builtin_ops.m"
                    {
#line 184 "builtin_ops.m"
                      if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "store_at_ref") == 0))
#line 189 "builtin_ops.m"
                        {
#line 189 "builtin_ops.m"
                          MR_Box backend_libs__builtin_ops__Y_14;
#line 189 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_16_16;

#line 189 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_431_431)) == (MR_mktag((MR_Integer) 1)));
#line 189 "builtin_ops.m"
                          if (backend_libs__builtin_ops__succeeded)
#line 189 "builtin_ops.m"
                            {
#line 189 "builtin_ops.m"
                              backend_libs__builtin_ops__Y_14 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_431_431, (MR_Integer) 0));
#line 189 "builtin_ops.m"
                              backend_libs__builtin_ops__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_431_431, (MR_Integer) 1)));
#line 189 "builtin_ops.m"
                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_16_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 189 "builtin_ops.m"
                              if (backend_libs__builtin_ops__succeeded)
#line 189 "builtin_ops.m"
                                {
#line 189 "builtin_ops.m"
                                  {
#line 189 "builtin_ops.m"
                                    MR_Word base;
#line 189 "builtin_ops.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 189 "builtin_ops.m"
                                    *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 189 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(1), base, 0) = backend_libs__builtin_ops__V_432_432;
#line 189 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(1), base, 1) = backend_libs__builtin_ops__Y_14;
#line 189 "builtin_ops.m"
                                  }
#line 189 "builtin_ops.m"
                                  backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 189 "builtin_ops.m"
                                }
#line 189 "builtin_ops.m"
                            }
#line 189 "builtin_ops.m"
                        }
#line 184 "builtin_ops.m"
                      else
#line 184 "builtin_ops.m"
                        if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "builtin_int_gt") == 0))
#line 203 "builtin_ops.m"
                          {
#line 203 "builtin_ops.m"
                            MR_Box backend_libs__builtin_ops__Y_32;
#line 203 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_34_34;
#line 203 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_35_35;
#line 203 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_36_36;
#line 203 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_37_37;
#line 203 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_38_38;

#line 203 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_431_431)) == (MR_mktag((MR_Integer) 1)));
#line 203 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 203 "builtin_ops.m"
                              {
#line 203 "builtin_ops.m"
                                backend_libs__builtin_ops__Y_32 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_431_431, (MR_Integer) 0));
#line 203 "builtin_ops.m"
                                backend_libs__builtin_ops__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_431_431, (MR_Integer) 1)));
#line 203 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 203 "builtin_ops.m"
                                if (backend_libs__builtin_ops__succeeded)
#line 203 "builtin_ops.m"
                                  {
#line 204 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_36_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 23));
#line 204 "builtin_ops.m"
                                    {
#line 204 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 204 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_37_37, 0) = backend_libs__builtin_ops__V_432_432;
#line 204 "builtin_ops.m"
                                    }
#line 204 "builtin_ops.m"
                                    {
#line 204 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 204 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_38_38, 0) = backend_libs__builtin_ops__Y_32;
#line 204 "builtin_ops.m"
                                    }
#line 204 "builtin_ops.m"
                                    {
#line 204 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 204 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_35_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 204 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_35_35, 1) = ((MR_Box) (backend_libs__builtin_ops__V_36_36));
#line 204 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_35_35, 2) = ((MR_Box) (backend_libs__builtin_ops__V_37_37));
#line 204 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_35_35, 3) = ((MR_Box) (backend_libs__builtin_ops__V_38_38));
#line 204 "builtin_ops.m"
                                    }
#line 203 "builtin_ops.m"
                                    {
#line 203 "builtin_ops.m"
                                      MR_Word base;
#line 203 "builtin_ops.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 203 "builtin_ops.m"
                                      *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 203 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (backend_libs__builtin_ops__V_35_35));
#line 203 "builtin_ops.m"
                                    }
#line 203 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 203 "builtin_ops.m"
                                  }
#line 203 "builtin_ops.m"
                              }
#line 203 "builtin_ops.m"
                          }
#line 184 "builtin_ops.m"
                        else
#line 184 "builtin_ops.m"
                          if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "builtin_int_lt") == 0))
#line 205 "builtin_ops.m"
                            {
#line 205 "builtin_ops.m"
                              MR_Box backend_libs__builtin_ops__Y_40;
#line 205 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_42_42;
#line 205 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_43_43;
#line 205 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_44_44;
#line 205 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_45_45;
#line 205 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_46_46;

#line 205 "builtin_ops.m"
                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_431_431)) == (MR_mktag((MR_Integer) 1)));
#line 205 "builtin_ops.m"
                              if (backend_libs__builtin_ops__succeeded)
#line 205 "builtin_ops.m"
                                {
#line 205 "builtin_ops.m"
                                  backend_libs__builtin_ops__Y_40 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_431_431, (MR_Integer) 0));
#line 205 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_431_431, (MR_Integer) 1)));
#line 205 "builtin_ops.m"
                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_42_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 205 "builtin_ops.m"
                                  if (backend_libs__builtin_ops__succeeded)
#line 205 "builtin_ops.m"
                                    {
#line 206 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_44_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 22));
#line 206 "builtin_ops.m"
                                      {
#line 206 "builtin_ops.m"
                                        backend_libs__builtin_ops__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 206 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_45_45, 0) = backend_libs__builtin_ops__V_432_432;
#line 206 "builtin_ops.m"
                                      }
#line 206 "builtin_ops.m"
                                      {
#line 206 "builtin_ops.m"
                                        backend_libs__builtin_ops__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 206 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_46_46, 0) = backend_libs__builtin_ops__Y_40;
#line 206 "builtin_ops.m"
                                      }
#line 206 "builtin_ops.m"
                                      {
#line 206 "builtin_ops.m"
                                        backend_libs__builtin_ops__V_43_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 206 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_43_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 206 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_43_43, 1) = ((MR_Box) (backend_libs__builtin_ops__V_44_44));
#line 206 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_43_43, 2) = ((MR_Box) (backend_libs__builtin_ops__V_45_45));
#line 206 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_43_43, 3) = ((MR_Box) (backend_libs__builtin_ops__V_46_46));
#line 206 "builtin_ops.m"
                                      }
#line 205 "builtin_ops.m"
                                      {
#line 205 "builtin_ops.m"
                                        MR_Word base;
#line 205 "builtin_ops.m"
                                        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 205 "builtin_ops.m"
                                        *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 205 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (backend_libs__builtin_ops__V_43_43));
#line 205 "builtin_ops.m"
                                      }
#line 205 "builtin_ops.m"
                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 205 "builtin_ops.m"
                                    }
#line 205 "builtin_ops.m"
                                }
#line 205 "builtin_ops.m"
                            }
#line 184 "builtin_ops.m"
                          else
#line 184 "builtin_ops.m"
                            if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "unsafe_type_cast") == 0))
#line 198 "builtin_ops.m"
                              {
#line 198 "builtin_ops.m"
                                MR_Box backend_libs__builtin_ops__Y_22;
#line 198 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_24_24;
#line 198 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_25_25;

#line 198 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_431_431)) == (MR_mktag((MR_Integer) 1)));
#line 198 "builtin_ops.m"
                                if (backend_libs__builtin_ops__succeeded)
#line 198 "builtin_ops.m"
                                  {
#line 198 "builtin_ops.m"
                                    backend_libs__builtin_ops__Y_22 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_431_431, (MR_Integer) 0));
#line 198 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_431_431, (MR_Integer) 1)));
#line 198 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 198 "builtin_ops.m"
                                    if (backend_libs__builtin_ops__succeeded)
#line 198 "builtin_ops.m"
                                      {
#line 199 "builtin_ops.m"
                                        {
#line 199 "builtin_ops.m"
                                          backend_libs__builtin_ops__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 199 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_25_25, 0) = backend_libs__builtin_ops__V_432_432;
#line 199 "builtin_ops.m"
                                        }
#line 198 "builtin_ops.m"
                                        {
#line 198 "builtin_ops.m"
                                          MR_Word base;
#line 198 "builtin_ops.m"
                                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 198 "builtin_ops.m"
                                          *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 198 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__Y_22;
#line 198 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_25_25));
#line 198 "builtin_ops.m"
                                        }
#line 198 "builtin_ops.m"
                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 198 "builtin_ops.m"
                                      }
#line 198 "builtin_ops.m"
                                  }
#line 198 "builtin_ops.m"
                              }
#line 184 "builtin_ops.m"
                            else
#line 184 "builtin_ops.m"
                              if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "trace_get_io_state") == 0))
#line 184 "builtin_ops.m"
                                {
#line 184 "builtin_ops.m"
                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_431_431 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 184 "builtin_ops.m"
                                  if (backend_libs__builtin_ops__succeeded)
#line 184 "builtin_ops.m"
                                    {
#line 184 "builtin_ops.m"
                                      {
#line 184 "builtin_ops.m"
                                        MR_Word base;
#line 184 "builtin_ops.m"
                                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 184 "builtin_ops.m"
                                        *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 184 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (backend_libs__builtin_ops__HeadVar__4_4));
#line 184 "builtin_ops.m"
                                      }
#line 184 "builtin_ops.m"
                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 184 "builtin_ops.m"
                                    }
#line 184 "builtin_ops.m"
                                }
#line 184 "builtin_ops.m"
                              else
#line 184 "builtin_ops.m"
                                if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "trace_set_io_state") == 0))
#line 186 "builtin_ops.m"
                                  {
#line 186 "builtin_ops.m"
                                    MR_Word backend_libs__builtin_ops__V_12_12;

#line 186 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_431_431 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 186 "builtin_ops.m"
                                    if (backend_libs__builtin_ops__succeeded)
#line 186 "builtin_ops.m"
                                      {
#line 187 "builtin_ops.m"
                                        backend_libs__builtin_ops__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 186 "builtin_ops.m"
                                        *backend_libs__builtin_ops__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(3), &backend_libs__builtin_ops_scalar_common_2[2]);
#line 186 "builtin_ops.m"
                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 186 "builtin_ops.m"
                                      }
#line 186 "builtin_ops.m"
                                  }
#line 184 "builtin_ops.m"
                                else
#line 184 "builtin_ops.m"
                                  if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "builtin_compound_eq") == 0))
#line 208 "builtin_ops.m"
                                    {
#line 208 "builtin_ops.m"
                                      MR_Box backend_libs__builtin_ops__Y_48;
#line 208 "builtin_ops.m"
                                      MR_Word backend_libs__builtin_ops__V_50_50;
#line 208 "builtin_ops.m"
                                      MR_Word backend_libs__builtin_ops__V_51_51;
#line 208 "builtin_ops.m"
                                      MR_Word backend_libs__builtin_ops__V_52_52;
#line 208 "builtin_ops.m"
                                      MR_Word backend_libs__builtin_ops__V_53_53;
#line 208 "builtin_ops.m"
                                      MR_Word backend_libs__builtin_ops__V_54_54;

#line 208 "builtin_ops.m"
                                      backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_431_431)) == (MR_mktag((MR_Integer) 1)));
#line 208 "builtin_ops.m"
                                      if (backend_libs__builtin_ops__succeeded)
#line 208 "builtin_ops.m"
                                        {
#line 208 "builtin_ops.m"
                                          backend_libs__builtin_ops__Y_48 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_431_431, (MR_Integer) 0));
#line 208 "builtin_ops.m"
                                          backend_libs__builtin_ops__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_431_431, (MR_Integer) 1)));
#line 208 "builtin_ops.m"
                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_50_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 208 "builtin_ops.m"
                                          if (backend_libs__builtin_ops__succeeded)
#line 208 "builtin_ops.m"
                                            {
#line 209 "builtin_ops.m"
                                              backend_libs__builtin_ops__V_52_52 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 39));
#line 209 "builtin_ops.m"
                                              {
#line 209 "builtin_ops.m"
                                                backend_libs__builtin_ops__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 209 "builtin_ops.m"
                                                MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_53_53, 0) = backend_libs__builtin_ops__V_432_432;
#line 209 "builtin_ops.m"
                                              }
#line 209 "builtin_ops.m"
                                              {
#line 209 "builtin_ops.m"
                                                backend_libs__builtin_ops__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 209 "builtin_ops.m"
                                                MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_54_54, 0) = backend_libs__builtin_ops__Y_48;
#line 209 "builtin_ops.m"
                                              }
#line 209 "builtin_ops.m"
                                              {
#line 209 "builtin_ops.m"
                                                backend_libs__builtin_ops__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 209 "builtin_ops.m"
                                                MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_51_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 209 "builtin_ops.m"
                                                MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_51_51, 1) = ((MR_Box) (backend_libs__builtin_ops__V_52_52));
#line 209 "builtin_ops.m"
                                                MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_51_51, 2) = ((MR_Box) (backend_libs__builtin_ops__V_53_53));
#line 209 "builtin_ops.m"
                                                MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_51_51, 3) = ((MR_Box) (backend_libs__builtin_ops__V_54_54));
#line 209 "builtin_ops.m"
                                              }
#line 208 "builtin_ops.m"
                                              {
#line 208 "builtin_ops.m"
                                                MR_Word base;
#line 208 "builtin_ops.m"
                                                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 208 "builtin_ops.m"
                                                *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 208 "builtin_ops.m"
                                                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (backend_libs__builtin_ops__V_51_51));
#line 208 "builtin_ops.m"
                                              }
#line 208 "builtin_ops.m"
                                              backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 208 "builtin_ops.m"
                                            }
#line 208 "builtin_ops.m"
                                        }
#line 208 "builtin_ops.m"
                                    }
#line 184 "builtin_ops.m"
                                  else
#line 184 "builtin_ops.m"
                                    if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "builtin_compound_lt") == 0))
#line 210 "builtin_ops.m"
                                      {
#line 210 "builtin_ops.m"
                                        MR_Box backend_libs__builtin_ops__Y_56;
#line 210 "builtin_ops.m"
                                        MR_Word backend_libs__builtin_ops__V_58_58;
#line 210 "builtin_ops.m"
                                        MR_Word backend_libs__builtin_ops__V_59_59;
#line 210 "builtin_ops.m"
                                        MR_Word backend_libs__builtin_ops__V_60_60;
#line 210 "builtin_ops.m"
                                        MR_Word backend_libs__builtin_ops__V_61_61;
#line 210 "builtin_ops.m"
                                        MR_Word backend_libs__builtin_ops__V_62_62;

#line 210 "builtin_ops.m"
                                        backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_431_431)) == (MR_mktag((MR_Integer) 1)));
#line 210 "builtin_ops.m"
                                        if (backend_libs__builtin_ops__succeeded)
#line 210 "builtin_ops.m"
                                          {
#line 210 "builtin_ops.m"
                                            backend_libs__builtin_ops__Y_56 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_431_431, (MR_Integer) 0));
#line 210 "builtin_ops.m"
                                            backend_libs__builtin_ops__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_431_431, (MR_Integer) 1)));
#line 210 "builtin_ops.m"
                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_58_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 210 "builtin_ops.m"
                                            if (backend_libs__builtin_ops__succeeded)
#line 210 "builtin_ops.m"
                                              {
#line 211 "builtin_ops.m"
                                                backend_libs__builtin_ops__V_60_60 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 40));
#line 211 "builtin_ops.m"
                                                {
#line 211 "builtin_ops.m"
                                                  backend_libs__builtin_ops__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 211 "builtin_ops.m"
                                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_61_61, 0) = backend_libs__builtin_ops__V_432_432;
#line 211 "builtin_ops.m"
                                                }
#line 211 "builtin_ops.m"
                                                {
#line 211 "builtin_ops.m"
                                                  backend_libs__builtin_ops__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 211 "builtin_ops.m"
                                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_62_62, 0) = backend_libs__builtin_ops__Y_56;
#line 211 "builtin_ops.m"
                                                }
#line 211 "builtin_ops.m"
                                                {
#line 211 "builtin_ops.m"
                                                  backend_libs__builtin_ops__V_59_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 211 "builtin_ops.m"
                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_59_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 211 "builtin_ops.m"
                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_59_59, 1) = ((MR_Box) (backend_libs__builtin_ops__V_60_60));
#line 211 "builtin_ops.m"
                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_59_59, 2) = ((MR_Box) (backend_libs__builtin_ops__V_61_61));
#line 211 "builtin_ops.m"
                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_59_59, 3) = ((MR_Box) (backend_libs__builtin_ops__V_62_62));
#line 211 "builtin_ops.m"
                                                }
#line 210 "builtin_ops.m"
                                                {
#line 210 "builtin_ops.m"
                                                  MR_Word base;
#line 210 "builtin_ops.m"
                                                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 210 "builtin_ops.m"
                                                  *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 210 "builtin_ops.m"
                                                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (backend_libs__builtin_ops__V_59_59));
#line 210 "builtin_ops.m"
                                                }
#line 210 "builtin_ops.m"
                                                backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 210 "builtin_ops.m"
                                              }
#line 210 "builtin_ops.m"
                                          }
#line 210 "builtin_ops.m"
                                      }
#line 184 "builtin_ops.m"
                                    else
#line 184 "builtin_ops.m"
                                      if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "store_at_ref_impure") == 0))
#line 191 "builtin_ops.m"
                                        {
#line 191 "builtin_ops.m"
                                          MR_Box backend_libs__builtin_ops__Y_18;
#line 191 "builtin_ops.m"
                                          MR_Word backend_libs__builtin_ops__V_20_20;

#line 191 "builtin_ops.m"
                                          backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_431_431)) == (MR_mktag((MR_Integer) 1)));
#line 191 "builtin_ops.m"
                                          if (backend_libs__builtin_ops__succeeded)
#line 191 "builtin_ops.m"
                                            {
#line 191 "builtin_ops.m"
                                              backend_libs__builtin_ops__Y_18 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_431_431, (MR_Integer) 0));
#line 191 "builtin_ops.m"
                                              backend_libs__builtin_ops__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_431_431, (MR_Integer) 1)));
#line 191 "builtin_ops.m"
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 191 "builtin_ops.m"
                                              if (backend_libs__builtin_ops__succeeded)
#line 191 "builtin_ops.m"
                                                {
#line 191 "builtin_ops.m"
                                                  {
#line 191 "builtin_ops.m"
                                                    MR_Word base;
#line 191 "builtin_ops.m"
                                                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 191 "builtin_ops.m"
                                                    *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 191 "builtin_ops.m"
                                                    MR_hl_field(MR_mktag(1), base, 0) = backend_libs__builtin_ops__V_432_432;
#line 191 "builtin_ops.m"
                                                    MR_hl_field(MR_mktag(1), base, 1) = backend_libs__builtin_ops__Y_18;
#line 191 "builtin_ops.m"
                                                  }
#line 191 "builtin_ops.m"
                                                  backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 191 "builtin_ops.m"
                                                }
#line 191 "builtin_ops.m"
                                            }
#line 191 "builtin_ops.m"
                                        }
#line 184 "builtin_ops.m"
                                      else
#line 184 "builtin_ops.m"
                                        backend_libs__builtin_ops__succeeded = MR_FALSE;
#line 184 "builtin_ops.m"
                    }
#line 184 "builtin_ops.m"
                }
#line 184 "builtin_ops.m"
              else
#line 184 "builtin_ops.m"
                if ((strcmp(backend_libs__builtin_ops__HeadVar__1_1, (MR_String) "term_size_prof_builtin") == 0))
#line 213 "builtin_ops.m"
                  {
#line 213 "builtin_ops.m"
                    MR_Box backend_libs__builtin_ops__Y_64;
#line 213 "builtin_ops.m"
                    MR_Box backend_libs__builtin_ops__Z_65;
#line 213 "builtin_ops.m"
                    MR_Word backend_libs__builtin_ops__V_67_67;
#line 213 "builtin_ops.m"
                    MR_Word backend_libs__builtin_ops__V_68_68;
#line 213 "builtin_ops.m"
                    MR_Word backend_libs__builtin_ops__V_69_69;
#line 213 "builtin_ops.m"
                    MR_Word backend_libs__builtin_ops__V_70_70;
#line 213 "builtin_ops.m"
                    MR_Word backend_libs__builtin_ops__V_71_71;
#line 213 "builtin_ops.m"
                    MR_Word backend_libs__builtin_ops__V_72_72;

#line 213 "builtin_ops.m"
                    backend_libs__builtin_ops__succeeded = (strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "term_size_plus") == 0);
#line 213 "builtin_ops.m"
                    if (backend_libs__builtin_ops__succeeded)
#line 213 "builtin_ops.m"
                      {
#line 213 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__HeadVar__3_3 == (MR_Integer) 0);
#line 213 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 213 "builtin_ops.m"
                          {
#line 213 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_431_431)) == (MR_mktag((MR_Integer) 1)));
#line 213 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 213 "builtin_ops.m"
                              {
#line 213 "builtin_ops.m"
                                backend_libs__builtin_ops__Y_64 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_431_431, (MR_Integer) 0));
#line 213 "builtin_ops.m"
                                backend_libs__builtin_ops__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_431_431, (MR_Integer) 1)));
#line 213 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_67_67)) == (MR_mktag((MR_Integer) 1)));
#line 213 "builtin_ops.m"
                                if (backend_libs__builtin_ops__succeeded)
#line 213 "builtin_ops.m"
                                  {
#line 213 "builtin_ops.m"
                                    backend_libs__builtin_ops__Z_65 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_67_67, (MR_Integer) 0));
#line 213 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_67_67, (MR_Integer) 1)));
#line 213 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_68_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 213 "builtin_ops.m"
                                    if (backend_libs__builtin_ops__succeeded)
#line 213 "builtin_ops.m"
                                      {
#line 214 "builtin_ops.m"
                                        backend_libs__builtin_ops__V_70_70 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 214 "builtin_ops.m"
                                        {
#line 214 "builtin_ops.m"
                                          backend_libs__builtin_ops__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 214 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_71_71, 0) = backend_libs__builtin_ops__V_432_432;
#line 214 "builtin_ops.m"
                                        }
#line 214 "builtin_ops.m"
                                        {
#line 214 "builtin_ops.m"
                                          backend_libs__builtin_ops__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 214 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_72_72, 0) = backend_libs__builtin_ops__Y_64;
#line 214 "builtin_ops.m"
                                        }
#line 214 "builtin_ops.m"
                                        {
#line 214 "builtin_ops.m"
                                          backend_libs__builtin_ops__V_69_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 214 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_69_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 214 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_69_69, 1) = ((MR_Box) (backend_libs__builtin_ops__V_70_70));
#line 214 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_69_69, 2) = ((MR_Box) (backend_libs__builtin_ops__V_71_71));
#line 214 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_69_69, 3) = ((MR_Box) (backend_libs__builtin_ops__V_72_72));
#line 214 "builtin_ops.m"
                                        }
#line 213 "builtin_ops.m"
                                        {
#line 213 "builtin_ops.m"
                                          MR_Word base;
#line 213 "builtin_ops.m"
                                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 213 "builtin_ops.m"
                                          *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 213 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__Z_65;
#line 213 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_69_69));
#line 213 "builtin_ops.m"
                                        }
#line 213 "builtin_ops.m"
                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 213 "builtin_ops.m"
                                      }
#line 213 "builtin_ops.m"
                                  }
#line 213 "builtin_ops.m"
                              }
#line 213 "builtin_ops.m"
                          }
#line 213 "builtin_ops.m"
                      }
#line 213 "builtin_ops.m"
                  }
#line 184 "builtin_ops.m"
                else
#line 184 "builtin_ops.m"
                  backend_libs__builtin_ops__succeeded = MR_FALSE;
#line 200 "builtin_ops.m"
      }
#line 184 "builtin_ops.m"
    return backend_libs__builtin_ops__succeeded;
#line 184 "builtin_ops.m"
  }
#line 181 "builtin_ops.m"
}

#line 31 "builtin_ops.m"
void MR_CALL 
backend_libs__builtin_ops____Compare____unary_op_0_0(
#line 31 "builtin_ops.m"
  MR_Word * backend_libs__builtin_ops__HeadVar__1_1,
#line 31 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__2_2,
#line 31 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__3_3)
#line 31 "builtin_ops.m"
{
#line 31 "builtin_ops.m"
  {
#line 31 "builtin_ops.m"
    MR_bool backend_libs__builtin_ops__succeeded;
#line 31 "builtin_ops.m"
    MR_Integer backend_libs__builtin_ops__Cast_HeadVar1_4 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;
#line 31 "builtin_ops.m"
    MR_Integer backend_libs__builtin_ops__Cast_HeadVar2_5 = (MR_Integer) backend_libs__builtin_ops__HeadVar__3_3;

#line 31 "builtin_ops.m"
    {
#line 31 "builtin_ops.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__builtin_ops__HeadVar__1_1, backend_libs__builtin_ops__Cast_HeadVar1_4, backend_libs__builtin_ops__Cast_HeadVar2_5);
#line 31 "builtin_ops.m"
      return;
    }
#line 31 "builtin_ops.m"
  }
#line 31 "builtin_ops.m"
}

#line 31 "builtin_ops.m"
MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____unary_op_0_0(
#line 31 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__2_1,
#line 31 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__2_2)
#line 31 "builtin_ops.m"
{
#line 6260 "backend_libs.builtin_ops.c"
  {
#line 6262 "backend_libs.builtin_ops.c"
    MR_bool backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__HeadVar__2_1 == backend_libs__builtin_ops__HeadVar__2_2);

#line 6265 "backend_libs.builtin_ops.c"
    return backend_libs__builtin_ops__succeeded;
#line 6267 "backend_libs.builtin_ops.c"
  }
#line 31 "builtin_ops.m"
}

#line 135 "builtin_ops.m"
void MR_CALL 
backend_libs__builtin_ops____Compare____simple_expr_1_0(
#line 135 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__TypeInfo_for_T_89,
#line 135 "builtin_ops.m"
  MR_Word * backend_libs__builtin_ops__HeadVar__1_1,
#line 135 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__2_2,
#line 135 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__3_3)
#line 135 "builtin_ops.m"
{
#line 135 "builtin_ops.m"
  while (MR_TRUE)
#line 135 "builtin_ops.m"
    {
#line 135 "builtin_ops.m"
      /* tailcall optimized into a loop */
#line 135 "builtin_ops.m"
      {
#line 135 "builtin_ops.m"
        MR_bool backend_libs__builtin_ops__succeeded;
#line 135 "builtin_ops.m"
        MR_Integer backend_libs__builtin_ops__CastX_87 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;
#line 135 "builtin_ops.m"
        MR_Integer backend_libs__builtin_ops__CastY_88 = (MR_Integer) backend_libs__builtin_ops__HeadVar__3_3;

#line 135 "builtin_ops.m"
        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastX_87 == backend_libs__builtin_ops__CastY_88);
#line 135 "builtin_ops.m"
        if (backend_libs__builtin_ops__succeeded)
#line 6304 "backend_libs.builtin_ops.c"
          *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 0;
#line 135 "builtin_ops.m"
        else
#line 135 "builtin_ops.m"
          if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 135 "builtin_ops.m"
            {
#line 135 "builtin_ops.m"
              MR_Float backend_libs__builtin_ops__V_103_103 = MR_unbox_float((MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));

#line 135 "builtin_ops.m"
              if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 135 "builtin_ops.m"
                {
#line 135 "builtin_ops.m"
                  MR_Float backend_libs__builtin_ops__V_35_35 = MR_unbox_float((MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)));

#line 135 "builtin_ops.m"
                  {
#line 135 "builtin_ops.m"
                    mercury__private_builtin__builtin_compare_float_3_p_0(backend_libs__builtin_ops__HeadVar__1_1, backend_libs__builtin_ops__V_103_103, backend_libs__builtin_ops__V_35_35);
#line 135 "builtin_ops.m"
                    return;
                  }
#line 135 "builtin_ops.m"
                }
#line 135 "builtin_ops.m"
              else
#line 135 "builtin_ops.m"
                if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6335 "backend_libs.builtin_ops.c"
                  *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 135 "builtin_ops.m"
                else
#line 135 "builtin_ops.m"
                  if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 6341 "backend_libs.builtin_ops.c"
                    *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 135 "builtin_ops.m"
                  else
#line 135 "builtin_ops.m"
                    if (((((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 6347 "backend_libs.builtin_ops.c"
                      *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 135 "builtin_ops.m"
                    else
#line 6351 "backend_libs.builtin_ops.c"
                      *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 135 "builtin_ops.m"
            }
#line 135 "builtin_ops.m"
          else
#line 135 "builtin_ops.m"
            if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 135 "builtin_ops.m"
              {
#line 135 "builtin_ops.m"
                MR_Integer backend_libs__builtin_ops__V_104_104 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));

#line 135 "builtin_ops.m"
                if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6366 "backend_libs.builtin_ops.c"
                  *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 135 "builtin_ops.m"
                else
#line 135 "builtin_ops.m"
                  if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 135 "builtin_ops.m"
                    {
#line 135 "builtin_ops.m"
                      MR_Integer backend_libs__builtin_ops__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)));

#line 135 "builtin_ops.m"
                      {
#line 135 "builtin_ops.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__builtin_ops__HeadVar__1_1, backend_libs__builtin_ops__V_104_104, backend_libs__builtin_ops__V_20_20);
#line 135 "builtin_ops.m"
                        return;
                      }
#line 135 "builtin_ops.m"
                    }
#line 135 "builtin_ops.m"
                  else
#line 135 "builtin_ops.m"
                    if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 6390 "backend_libs.builtin_ops.c"
                      *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 135 "builtin_ops.m"
                    else
#line 135 "builtin_ops.m"
                      if (((((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 6396 "backend_libs.builtin_ops.c"
                        *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 135 "builtin_ops.m"
                      else
#line 6400 "backend_libs.builtin_ops.c"
                        *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 135 "builtin_ops.m"
              }
#line 135 "builtin_ops.m"
            else
#line 135 "builtin_ops.m"
              if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 135 "builtin_ops.m"
                {
#line 135 "builtin_ops.m"
                  MR_Box backend_libs__builtin_ops__V_105_105 = (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0));

#line 135 "builtin_ops.m"
                  if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6415 "backend_libs.builtin_ops.c"
                    *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 135 "builtin_ops.m"
                  else
#line 135 "builtin_ops.m"
                    if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6421 "backend_libs.builtin_ops.c"
                      *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 135 "builtin_ops.m"
                    else
#line 135 "builtin_ops.m"
                      if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 135 "builtin_ops.m"
                        {
#line 135 "builtin_ops.m"
                          MR_Box backend_libs__builtin_ops__V_5_5 = (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0));

#line 135 "builtin_ops.m"
                          {
#line 135 "builtin_ops.m"
                            mercury__builtin__compare_3_p_0(backend_libs__builtin_ops__TypeInfo_for_T_89, backend_libs__builtin_ops__HeadVar__1_1, backend_libs__builtin_ops__V_105_105, backend_libs__builtin_ops__V_5_5);
#line 135 "builtin_ops.m"
                            return;
                          }
#line 135 "builtin_ops.m"
                        }
#line 135 "builtin_ops.m"
                      else
#line 135 "builtin_ops.m"
                        if (((((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 6445 "backend_libs.builtin_ops.c"
                          *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 135 "builtin_ops.m"
                        else
#line 6449 "backend_libs.builtin_ops.c"
                          *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 135 "builtin_ops.m"
                }
#line 135 "builtin_ops.m"
              else
#line 135 "builtin_ops.m"
                if (((((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 135 "builtin_ops.m"
                  {
#line 135 "builtin_ops.m"
                    MR_Word backend_libs__builtin_ops__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 3)));
#line 135 "builtin_ops.m"
                    MR_Word backend_libs__builtin_ops__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 2)));
#line 135 "builtin_ops.m"
                    MR_Word backend_libs__builtin_ops__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 1)));

#line 135 "builtin_ops.m"
                    if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6468 "backend_libs.builtin_ops.c"
                      *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 135 "builtin_ops.m"
                    else
#line 135 "builtin_ops.m"
                      if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6474 "backend_libs.builtin_ops.c"
                        *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 135 "builtin_ops.m"
                      else
#line 135 "builtin_ops.m"
                        if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 6480 "backend_libs.builtin_ops.c"
                          *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 135 "builtin_ops.m"
                        else
#line 135 "builtin_ops.m"
                          if (((((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 135 "builtin_ops.m"
                            {
#line 135 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 1)));
#line 135 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 2)));
#line 135 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 3)));
#line 135 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_85_85;

#line 135 "builtin_ops.m"
                              {
#line 135 "builtin_ops.m"
                                backend_libs__builtin_ops____Compare____binary_op_0_0(&backend_libs__builtin_ops__V_85_85, backend_libs__builtin_ops__V_102_102, backend_libs__builtin_ops__V_82_82);
                              }
#line 6502 "backend_libs.builtin_ops.c"
                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_85_85 == (MR_Integer) 0);
#line 135 "builtin_ops.m"
                              backend_libs__builtin_ops__succeeded = !(backend_libs__builtin_ops__succeeded);
#line 135 "builtin_ops.m"
                              if (backend_libs__builtin_ops__succeeded)
#line 135 "builtin_ops.m"
                                *backend_libs__builtin_ops__HeadVar__1_1 = backend_libs__builtin_ops__V_85_85;
#line 135 "builtin_ops.m"
                              else
#line 135 "builtin_ops.m"
                                {
#line 135 "builtin_ops.m"
                                  MR_Word backend_libs__builtin_ops__V_86_86;

#line 135 "builtin_ops.m"
                                  {
#line 135 "builtin_ops.m"
                                    backend_libs__builtin_ops____Compare____simple_expr_1_0(backend_libs__builtin_ops__TypeInfo_for_T_89, &backend_libs__builtin_ops__V_86_86, backend_libs__builtin_ops__V_101_101, backend_libs__builtin_ops__V_83_83);
                                  }
#line 6522 "backend_libs.builtin_ops.c"
                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_86_86 == (MR_Integer) 0);
#line 135 "builtin_ops.m"
                                  backend_libs__builtin_ops__succeeded = !(backend_libs__builtin_ops__succeeded);
#line 135 "builtin_ops.m"
                                  if (backend_libs__builtin_ops__succeeded)
#line 135 "builtin_ops.m"
                                    *backend_libs__builtin_ops__HeadVar__1_1 = backend_libs__builtin_ops__V_86_86;
#line 135 "builtin_ops.m"
                                  else
#line 135 "builtin_ops.m"
                                    {
#line 135 "builtin_ops.m"
                                      /* direct tailcall eliminated */
#line 135 "builtin_ops.m"
                                      {
#line 135 "builtin_ops.m"
                                        MR_Word backend_libs__builtin_ops__HeadVar__2__tmp_copy_2 = backend_libs__builtin_ops__V_100_100;
#line 135 "builtin_ops.m"
                                        MR_Word backend_libs__builtin_ops__HeadVar__3__tmp_copy_3 = backend_libs__builtin_ops__V_84_84;

#line 135 "builtin_ops.m"
                                        backend_libs__builtin_ops__HeadVar__3_3 = backend_libs__builtin_ops__HeadVar__3__tmp_copy_3;
#line 135 "builtin_ops.m"
                                        backend_libs__builtin_ops__HeadVar__2_2 = backend_libs__builtin_ops__HeadVar__2__tmp_copy_2;
#line 135 "builtin_ops.m"
                                      }
#line 135 "builtin_ops.m"
                                      continue;
#line 135 "builtin_ops.m"
                                    }
#line 135 "builtin_ops.m"
                                }
#line 135 "builtin_ops.m"
                            }
#line 135 "builtin_ops.m"
                          else
#line 6559 "backend_libs.builtin_ops.c"
                            *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 135 "builtin_ops.m"
                  }
#line 135 "builtin_ops.m"
                else
#line 135 "builtin_ops.m"
                  {
#line 135 "builtin_ops.m"
                    MR_Word backend_libs__builtin_ops__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 2)));
#line 135 "builtin_ops.m"
                    MR_Word backend_libs__builtin_ops__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 1)));

#line 135 "builtin_ops.m"
                    if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6574 "backend_libs.builtin_ops.c"
                      *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 135 "builtin_ops.m"
                    else
#line 135 "builtin_ops.m"
                      if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6580 "backend_libs.builtin_ops.c"
                        *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 135 "builtin_ops.m"
                      else
#line 135 "builtin_ops.m"
                        if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 6586 "backend_libs.builtin_ops.c"
                          *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 135 "builtin_ops.m"
                        else
#line 135 "builtin_ops.m"
                          if (((((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 6592 "backend_libs.builtin_ops.c"
                            *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 135 "builtin_ops.m"
                          else
#line 135 "builtin_ops.m"
                            {
#line 135 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 1)));
#line 135 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 2)));
#line 135 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_56_56;
#line 135 "builtin_ops.m"
                              MR_Integer backend_libs__builtin_ops__V_108_108 = (MR_Integer) backend_libs__builtin_ops__V_107_107;
#line 135 "builtin_ops.m"
                              MR_Integer backend_libs__builtin_ops__V_109_109 = (MR_Integer) backend_libs__builtin_ops__V_54_54;

#line 135 "builtin_ops.m"
                              {
#line 135 "builtin_ops.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&backend_libs__builtin_ops__V_56_56, backend_libs__builtin_ops__V_108_108, backend_libs__builtin_ops__V_109_109);
                              }
#line 6614 "backend_libs.builtin_ops.c"
                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_56_56 == (MR_Integer) 0);
#line 135 "builtin_ops.m"
                              backend_libs__builtin_ops__succeeded = !(backend_libs__builtin_ops__succeeded);
#line 135 "builtin_ops.m"
                              if (backend_libs__builtin_ops__succeeded)
#line 135 "builtin_ops.m"
                                *backend_libs__builtin_ops__HeadVar__1_1 = backend_libs__builtin_ops__V_56_56;
#line 135 "builtin_ops.m"
                              else
#line 135 "builtin_ops.m"
                                {
#line 135 "builtin_ops.m"
                                  /* direct tailcall eliminated */
#line 135 "builtin_ops.m"
                                  {
#line 135 "builtin_ops.m"
                                    MR_Word backend_libs__builtin_ops__HeadVar__2__tmp_copy_2 = backend_libs__builtin_ops__V_106_106;
#line 135 "builtin_ops.m"
                                    MR_Word backend_libs__builtin_ops__HeadVar__3__tmp_copy_3 = backend_libs__builtin_ops__V_55_55;

#line 135 "builtin_ops.m"
                                    backend_libs__builtin_ops__HeadVar__3_3 = backend_libs__builtin_ops__HeadVar__3__tmp_copy_3;
#line 135 "builtin_ops.m"
                                    backend_libs__builtin_ops__HeadVar__2_2 = backend_libs__builtin_ops__HeadVar__2__tmp_copy_2;
#line 135 "builtin_ops.m"
                                  }
#line 135 "builtin_ops.m"
                                  continue;
#line 135 "builtin_ops.m"
                                }
#line 135 "builtin_ops.m"
                            }
#line 135 "builtin_ops.m"
                  }
#line 135 "builtin_ops.m"
      }
#line 135 "builtin_ops.m"
      break;
#line 135 "builtin_ops.m"
    }
#line 135 "builtin_ops.m"
}

#line 135 "builtin_ops.m"
MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____simple_expr_1_0(
#line 135 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__TypeInfo_for_T_21,
#line 135 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__1_1,
#line 135 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__2_2)
#line 135 "builtin_ops.m"
{
#line 135 "builtin_ops.m"
  while (MR_TRUE)
#line 135 "builtin_ops.m"
    {
#line 135 "builtin_ops.m"
      /* tailcall optimized into a loop */
#line 135 "builtin_ops.m"
      {
#line 135 "builtin_ops.m"
        MR_bool backend_libs__builtin_ops__succeeded;
#line 135 "builtin_ops.m"
        MR_Integer backend_libs__builtin_ops__CastX_19 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 135 "builtin_ops.m"
        MR_Integer backend_libs__builtin_ops__CastY_20 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 135 "builtin_ops.m"
        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastX_19 == backend_libs__builtin_ops__CastY_20);
#line 135 "builtin_ops.m"
        if (backend_libs__builtin_ops__succeeded)
#line 135 "builtin_ops.m"
          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 135 "builtin_ops.m"
        else
#line 135 "builtin_ops.m"
          if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 135 "builtin_ops.m"
            {
#line 135 "builtin_ops.m"
              MR_Float backend_libs__builtin_ops__V_7_7 = MR_unbox_float((MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 0)));
#line 135 "builtin_ops.m"
              MR_Float backend_libs__builtin_ops__V_8_8;

#line 135 "builtin_ops.m"
              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 135 "builtin_ops.m"
              if (backend_libs__builtin_ops__succeeded)
#line 135 "builtin_ops.m"
                {
#line 135 "builtin_ops.m"
                  backend_libs__builtin_ops__V_8_8 = MR_unbox_float((MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));
#line 6709 "backend_libs.builtin_ops.c"
                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_7_7 == backend_libs__builtin_ops__V_8_8);
#line 135 "builtin_ops.m"
                }
#line 135 "builtin_ops.m"
            }
#line 135 "builtin_ops.m"
          else
#line 135 "builtin_ops.m"
            if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 135 "builtin_ops.m"
              {
#line 135 "builtin_ops.m"
                MR_Integer backend_libs__builtin_ops__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 0)));
#line 135 "builtin_ops.m"
                MR_Integer backend_libs__builtin_ops__V_6_6;

#line 135 "builtin_ops.m"
                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 135 "builtin_ops.m"
                if (backend_libs__builtin_ops__succeeded)
#line 135 "builtin_ops.m"
                  {
#line 135 "builtin_ops.m"
                    backend_libs__builtin_ops__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));
#line 6734 "backend_libs.builtin_ops.c"
                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_5_5 == backend_libs__builtin_ops__V_6_6);
#line 135 "builtin_ops.m"
                  }
#line 135 "builtin_ops.m"
              }
#line 135 "builtin_ops.m"
            else
#line 135 "builtin_ops.m"
              if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 135 "builtin_ops.m"
                {
#line 135 "builtin_ops.m"
                  MR_Box backend_libs__builtin_ops__V_3_3 = (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 0));
#line 135 "builtin_ops.m"
                  MR_Box backend_libs__builtin_ops__V_4_4;

#line 135 "builtin_ops.m"
                  backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 135 "builtin_ops.m"
                  if (backend_libs__builtin_ops__succeeded)
#line 135 "builtin_ops.m"
                    {
#line 135 "builtin_ops.m"
                      backend_libs__builtin_ops__V_4_4 = (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0));
#line 6759 "backend_libs.builtin_ops.c"
                      {
#line 6761 "backend_libs.builtin_ops.c"
                        return backend_libs__builtin_ops__succeeded = mercury__builtin__unify_2_p_0(backend_libs__builtin_ops__TypeInfo_for_T_21, backend_libs__builtin_ops__V_3_3, backend_libs__builtin_ops__V_4_4);
                      }
#line 135 "builtin_ops.m"
                    }
#line 135 "builtin_ops.m"
                }
#line 135 "builtin_ops.m"
              else
#line 135 "builtin_ops.m"
                if (((((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 135 "builtin_ops.m"
                  {
#line 135 "builtin_ops.m"
                    MR_Word backend_libs__builtin_ops__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 1)));
#line 135 "builtin_ops.m"
                    MR_Word backend_libs__builtin_ops__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 2)));
#line 135 "builtin_ops.m"
                    MR_Word backend_libs__builtin_ops__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 3)));
#line 135 "builtin_ops.m"
                    MR_Word backend_libs__builtin_ops__V_16_16;
#line 135 "builtin_ops.m"
                    MR_Word backend_libs__builtin_ops__V_17_17;
#line 135 "builtin_ops.m"
                    MR_Word backend_libs__builtin_ops__V_18_18;

#line 135 "builtin_ops.m"
                    backend_libs__builtin_ops__succeeded = ((((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 135 "builtin_ops.m"
                    if (backend_libs__builtin_ops__succeeded)
#line 135 "builtin_ops.m"
                      {
#line 135 "builtin_ops.m"
                        backend_libs__builtin_ops__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 1)));
#line 135 "builtin_ops.m"
                        backend_libs__builtin_ops__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 2)));
#line 135 "builtin_ops.m"
                        backend_libs__builtin_ops__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 3)));
#line 6799 "backend_libs.builtin_ops.c"
                        {
#line 6801 "backend_libs.builtin_ops.c"
                          backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____binary_op_0_0(backend_libs__builtin_ops__V_13_13, backend_libs__builtin_ops__V_16_16);
                        }
#line 135 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 135 "builtin_ops.m"
                          {
#line 6808 "backend_libs.builtin_ops.c"
                            {
#line 6810 "backend_libs.builtin_ops.c"
                              backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____simple_expr_1_0(backend_libs__builtin_ops__TypeInfo_for_T_21, backend_libs__builtin_ops__V_14_14, backend_libs__builtin_ops__V_17_17);
                            }
#line 135 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 6815 "backend_libs.builtin_ops.c"
                              {
#line 6817 "backend_libs.builtin_ops.c"
                                /* direct tailcall eliminated */
#line 6819 "backend_libs.builtin_ops.c"
                                {
#line 6821 "backend_libs.builtin_ops.c"
                                  MR_Word backend_libs__builtin_ops__HeadVar__1__tmp_copy_1 = backend_libs__builtin_ops__V_15_15;
#line 6823 "backend_libs.builtin_ops.c"
                                  MR_Word backend_libs__builtin_ops__HeadVar__2__tmp_copy_2 = backend_libs__builtin_ops__V_18_18;

#line 6826 "backend_libs.builtin_ops.c"
                                  backend_libs__builtin_ops__HeadVar__2_2 = backend_libs__builtin_ops__HeadVar__2__tmp_copy_2;
#line 6828 "backend_libs.builtin_ops.c"
                                  backend_libs__builtin_ops__HeadVar__1_1 = backend_libs__builtin_ops__HeadVar__1__tmp_copy_1;
#line 6830 "backend_libs.builtin_ops.c"
                                }
#line 6832 "backend_libs.builtin_ops.c"
                                continue;
#line 6834 "backend_libs.builtin_ops.c"
                              }
#line 135 "builtin_ops.m"
                          }
#line 135 "builtin_ops.m"
                      }
#line 135 "builtin_ops.m"
                  }
#line 135 "builtin_ops.m"
                else
#line 135 "builtin_ops.m"
                  {
#line 135 "builtin_ops.m"
                    MR_Word backend_libs__builtin_ops__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 1)));
#line 135 "builtin_ops.m"
                    MR_Word backend_libs__builtin_ops__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 2)));
#line 135 "builtin_ops.m"
                    MR_Word backend_libs__builtin_ops__V_11_11;
#line 135 "builtin_ops.m"
                    MR_Word backend_libs__builtin_ops__V_12_12;

#line 135 "builtin_ops.m"
                    backend_libs__builtin_ops__succeeded = ((((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 135 "builtin_ops.m"
                    if (backend_libs__builtin_ops__succeeded)
#line 135 "builtin_ops.m"
                      {
#line 135 "builtin_ops.m"
                        backend_libs__builtin_ops__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 1)));
#line 135 "builtin_ops.m"
                        backend_libs__builtin_ops__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 2)));
#line 6865 "backend_libs.builtin_ops.c"
                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_9_9 == backend_libs__builtin_ops__V_11_11);
#line 135 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 6869 "backend_libs.builtin_ops.c"
                          {
#line 6871 "backend_libs.builtin_ops.c"
                            /* direct tailcall eliminated */
#line 6873 "backend_libs.builtin_ops.c"
                            {
#line 6875 "backend_libs.builtin_ops.c"
                              MR_Word backend_libs__builtin_ops__HeadVar__1__tmp_copy_1 = backend_libs__builtin_ops__V_10_10;
#line 6877 "backend_libs.builtin_ops.c"
                              MR_Word backend_libs__builtin_ops__HeadVar__2__tmp_copy_2 = backend_libs__builtin_ops__V_12_12;

#line 6880 "backend_libs.builtin_ops.c"
                              backend_libs__builtin_ops__HeadVar__2_2 = backend_libs__builtin_ops__HeadVar__2__tmp_copy_2;
#line 6882 "backend_libs.builtin_ops.c"
                              backend_libs__builtin_ops__HeadVar__1_1 = backend_libs__builtin_ops__HeadVar__1__tmp_copy_1;
#line 6884 "backend_libs.builtin_ops.c"
                            }
#line 6886 "backend_libs.builtin_ops.c"
                            continue;
#line 6888 "backend_libs.builtin_ops.c"
                          }
#line 135 "builtin_ops.m"
                      }
#line 135 "builtin_ops.m"
                  }
#line 135 "builtin_ops.m"
        return backend_libs__builtin_ops__succeeded;
#line 135 "builtin_ops.m"
      }
#line 135 "builtin_ops.m"
      break;
#line 135 "builtin_ops.m"
    }
#line 135 "builtin_ops.m"
}

#line 129 "builtin_ops.m"
void MR_CALL 
backend_libs__builtin_ops____Compare____simple_code_1_0(
#line 129 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__TypeInfo_for_T_56,
#line 129 "builtin_ops.m"
  MR_Word * backend_libs__builtin_ops__HeadVar__1_1,
#line 129 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__2_2,
#line 129 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__3_3)
#line 129 "builtin_ops.m"
{
#line 129 "builtin_ops.m"
  {
#line 129 "builtin_ops.m"
    MR_bool backend_libs__builtin_ops__succeeded;
#line 129 "builtin_ops.m"
    MR_Integer backend_libs__builtin_ops__CastX_54 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;
#line 129 "builtin_ops.m"
    MR_Integer backend_libs__builtin_ops__CastY_55 = (MR_Integer) backend_libs__builtin_ops__HeadVar__3_3;

#line 129 "builtin_ops.m"
    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastX_54 == backend_libs__builtin_ops__CastY_55);
#line 129 "builtin_ops.m"
    if (backend_libs__builtin_ops__succeeded)
#line 6931 "backend_libs.builtin_ops.c"
      *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 0;
#line 129 "builtin_ops.m"
    else
#line 129 "builtin_ops.m"
      if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 129 "builtin_ops.m"
        {
#line 129 "builtin_ops.m"
          MR_Word backend_libs__builtin_ops__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 1)));
#line 129 "builtin_ops.m"
          MR_Box backend_libs__builtin_ops__V_64_64 = (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0));

#line 129 "builtin_ops.m"
          if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 129 "builtin_ops.m"
            {
#line 129 "builtin_ops.m"
              MR_Box backend_libs__builtin_ops__V_6_6 = (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0));
#line 129 "builtin_ops.m"
              MR_Word backend_libs__builtin_ops__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 1)));
#line 129 "builtin_ops.m"
              MR_Word backend_libs__builtin_ops__V_8_8;

#line 129 "builtin_ops.m"
              {
#line 129 "builtin_ops.m"
                mercury__builtin__compare_3_p_0(backend_libs__builtin_ops__TypeInfo_for_T_56, &backend_libs__builtin_ops__V_8_8, backend_libs__builtin_ops__V_64_64, backend_libs__builtin_ops__V_6_6);
              }
#line 6960 "backend_libs.builtin_ops.c"
              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_8_8 == (MR_Integer) 0);
#line 129 "builtin_ops.m"
              backend_libs__builtin_ops__succeeded = !(backend_libs__builtin_ops__succeeded);
#line 129 "builtin_ops.m"
              if (backend_libs__builtin_ops__succeeded)
#line 129 "builtin_ops.m"
                *backend_libs__builtin_ops__HeadVar__1_1 = backend_libs__builtin_ops__V_8_8;
#line 129 "builtin_ops.m"
              else
#line 129 "builtin_ops.m"
                {
#line 129 "builtin_ops.m"
                  backend_libs__builtin_ops____Compare____simple_expr_1_0(backend_libs__builtin_ops__TypeInfo_for_T_56, backend_libs__builtin_ops__HeadVar__1_1, backend_libs__builtin_ops__V_63_63, backend_libs__builtin_ops__V_7_7);
#line 129 "builtin_ops.m"
                  return;
                }
#line 129 "builtin_ops.m"
            }
#line 129 "builtin_ops.m"
          else
#line 129 "builtin_ops.m"
            if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 6983 "backend_libs.builtin_ops.c"
              *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 129 "builtin_ops.m"
            else
#line 129 "builtin_ops.m"
              if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6989 "backend_libs.builtin_ops.c"
                *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 129 "builtin_ops.m"
              else
#line 6993 "backend_libs.builtin_ops.c"
                *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 129 "builtin_ops.m"
        }
#line 129 "builtin_ops.m"
      else
#line 129 "builtin_ops.m"
        if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3))))
#line 129 "builtin_ops.m"
          {
#line 129 "builtin_ops.m"
            MR_Word backend_libs__builtin_ops__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));

#line 129 "builtin_ops.m"
            if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 7008 "backend_libs.builtin_ops.c"
              *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 129 "builtin_ops.m"
            else
#line 129 "builtin_ops.m"
              if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 129 "builtin_ops.m"
                {
#line 129 "builtin_ops.m"
                  MR_Word backend_libs__builtin_ops__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)));

#line 129 "builtin_ops.m"
                  {
#line 129 "builtin_ops.m"
                    mercury__list____Compare____list_1_0(backend_libs__builtin_ops__TypeInfo_for_T_56, backend_libs__builtin_ops__HeadVar__1_1, backend_libs__builtin_ops__V_65_65, backend_libs__builtin_ops__V_53_53);
#line 129 "builtin_ops.m"
                    return;
                  }
#line 129 "builtin_ops.m"
                }
#line 129 "builtin_ops.m"
              else
#line 129 "builtin_ops.m"
                if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7032 "backend_libs.builtin_ops.c"
                  *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 129 "builtin_ops.m"
                else
#line 7036 "backend_libs.builtin_ops.c"
                  *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 129 "builtin_ops.m"
          }
#line 129 "builtin_ops.m"
        else
#line 129 "builtin_ops.m"
          if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 129 "builtin_ops.m"
            {
#line 129 "builtin_ops.m"
              MR_Box backend_libs__builtin_ops__V_66_66 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 1));
#line 129 "builtin_ops.m"
              MR_Box backend_libs__builtin_ops__V_67_67 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0));

#line 129 "builtin_ops.m"
              if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 7053 "backend_libs.builtin_ops.c"
                *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 129 "builtin_ops.m"
              else
#line 129 "builtin_ops.m"
                if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 7059 "backend_libs.builtin_ops.c"
                  *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 129 "builtin_ops.m"
                else
#line 129 "builtin_ops.m"
                  if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 129 "builtin_ops.m"
                    {
#line 129 "builtin_ops.m"
                      MR_Box backend_libs__builtin_ops__V_25_25 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0));
#line 129 "builtin_ops.m"
                      MR_Box backend_libs__builtin_ops__V_26_26 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 1));
#line 129 "builtin_ops.m"
                      MR_Word backend_libs__builtin_ops__V_27_27;

#line 129 "builtin_ops.m"
                      {
#line 129 "builtin_ops.m"
                        mercury__builtin__compare_3_p_0(backend_libs__builtin_ops__TypeInfo_for_T_56, &backend_libs__builtin_ops__V_27_27, backend_libs__builtin_ops__V_67_67, backend_libs__builtin_ops__V_25_25);
                      }
#line 7079 "backend_libs.builtin_ops.c"
                      backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_27_27 == (MR_Integer) 0);
#line 129 "builtin_ops.m"
                      backend_libs__builtin_ops__succeeded = !(backend_libs__builtin_ops__succeeded);
#line 129 "builtin_ops.m"
                      if (backend_libs__builtin_ops__succeeded)
#line 129 "builtin_ops.m"
                        *backend_libs__builtin_ops__HeadVar__1_1 = backend_libs__builtin_ops__V_27_27;
#line 129 "builtin_ops.m"
                      else
#line 129 "builtin_ops.m"
                        {
#line 129 "builtin_ops.m"
                          mercury__builtin__compare_3_p_0(backend_libs__builtin_ops__TypeInfo_for_T_56, backend_libs__builtin_ops__HeadVar__1_1, backend_libs__builtin_ops__V_66_66, backend_libs__builtin_ops__V_26_26);
#line 129 "builtin_ops.m"
                          return;
                        }
#line 129 "builtin_ops.m"
                    }
#line 129 "builtin_ops.m"
                  else
#line 7100 "backend_libs.builtin_ops.c"
                    *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 129 "builtin_ops.m"
            }
#line 129 "builtin_ops.m"
          else
#line 129 "builtin_ops.m"
            {
#line 129 "builtin_ops.m"
              MR_Word backend_libs__builtin_ops__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));

#line 129 "builtin_ops.m"
              if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 7113 "backend_libs.builtin_ops.c"
                *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 129 "builtin_ops.m"
              else
#line 129 "builtin_ops.m"
                if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 7119 "backend_libs.builtin_ops.c"
                  *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 129 "builtin_ops.m"
                else
#line 129 "builtin_ops.m"
                  if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7125 "backend_libs.builtin_ops.c"
                    *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 129 "builtin_ops.m"
                  else
#line 129 "builtin_ops.m"
                    {
#line 129 "builtin_ops.m"
                      MR_Word backend_libs__builtin_ops__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)));

#line 129 "builtin_ops.m"
                      {
#line 129 "builtin_ops.m"
                        backend_libs__builtin_ops____Compare____simple_expr_1_0(backend_libs__builtin_ops__TypeInfo_for_T_56, backend_libs__builtin_ops__HeadVar__1_1, backend_libs__builtin_ops__V_68_68, backend_libs__builtin_ops__V_41_41);
#line 129 "builtin_ops.m"
                        return;
                      }
#line 129 "builtin_ops.m"
                    }
#line 129 "builtin_ops.m"
            }
#line 129 "builtin_ops.m"
  }
#line 129 "builtin_ops.m"
}

#line 129 "builtin_ops.m"
MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____simple_code_1_0(
#line 129 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__TypeInfo_for_T_17,
#line 129 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__1_1,
#line 129 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__2_2)
#line 129 "builtin_ops.m"
{
#line 129 "builtin_ops.m"
  {
#line 129 "builtin_ops.m"
    MR_bool backend_libs__builtin_ops__succeeded;
#line 129 "builtin_ops.m"
    MR_Integer backend_libs__builtin_ops__CastX_15 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 129 "builtin_ops.m"
    MR_Integer backend_libs__builtin_ops__CastY_16 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 129 "builtin_ops.m"
    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastX_15 == backend_libs__builtin_ops__CastY_16);
#line 129 "builtin_ops.m"
    if (backend_libs__builtin_ops__succeeded)
#line 129 "builtin_ops.m"
      backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 129 "builtin_ops.m"
    else
#line 129 "builtin_ops.m"
      if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 129 "builtin_ops.m"
        {
#line 129 "builtin_ops.m"
          MR_Box backend_libs__builtin_ops__V_3_3 = (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 0));
#line 129 "builtin_ops.m"
          MR_Word backend_libs__builtin_ops__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 1)));
#line 129 "builtin_ops.m"
          MR_Box backend_libs__builtin_ops__V_5_5;
#line 129 "builtin_ops.m"
          MR_Word backend_libs__builtin_ops__V_6_6;

#line 129 "builtin_ops.m"
          backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 129 "builtin_ops.m"
          if (backend_libs__builtin_ops__succeeded)
#line 129 "builtin_ops.m"
            {
#line 129 "builtin_ops.m"
              backend_libs__builtin_ops__V_5_5 = (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0));
#line 129 "builtin_ops.m"
              backend_libs__builtin_ops__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 1)));
#line 7201 "backend_libs.builtin_ops.c"
              {
#line 7203 "backend_libs.builtin_ops.c"
                backend_libs__builtin_ops__succeeded = mercury__builtin__unify_2_p_0(backend_libs__builtin_ops__TypeInfo_for_T_17, backend_libs__builtin_ops__V_3_3, backend_libs__builtin_ops__V_5_5);
              }
#line 129 "builtin_ops.m"
              if (backend_libs__builtin_ops__succeeded)
#line 7208 "backend_libs.builtin_ops.c"
                {
#line 7210 "backend_libs.builtin_ops.c"
                  return backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____simple_expr_1_0(backend_libs__builtin_ops__TypeInfo_for_T_17, backend_libs__builtin_ops__V_4_4, backend_libs__builtin_ops__V_6_6);
                }
#line 129 "builtin_ops.m"
            }
#line 129 "builtin_ops.m"
        }
#line 129 "builtin_ops.m"
      else
#line 129 "builtin_ops.m"
        if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
#line 129 "builtin_ops.m"
          {
#line 129 "builtin_ops.m"
            MR_Word backend_libs__builtin_ops__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 0)));
#line 129 "builtin_ops.m"
            MR_Word backend_libs__builtin_ops__V_14_14;

#line 129 "builtin_ops.m"
            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 129 "builtin_ops.m"
            if (backend_libs__builtin_ops__succeeded)
#line 129 "builtin_ops.m"
              {
#line 129 "builtin_ops.m"
                backend_libs__builtin_ops__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));
#line 7236 "backend_libs.builtin_ops.c"
                {
#line 7238 "backend_libs.builtin_ops.c"
                  return backend_libs__builtin_ops__succeeded = mercury__list____Unify____list_1_0(backend_libs__builtin_ops__TypeInfo_for_T_17, backend_libs__builtin_ops__V_13_13, backend_libs__builtin_ops__V_14_14);
                }
#line 129 "builtin_ops.m"
              }
#line 129 "builtin_ops.m"
          }
#line 129 "builtin_ops.m"
        else
#line 129 "builtin_ops.m"
          if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 129 "builtin_ops.m"
            {
#line 129 "builtin_ops.m"
              MR_Box backend_libs__builtin_ops__V_7_7 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 0));
#line 129 "builtin_ops.m"
              MR_Box backend_libs__builtin_ops__V_8_8 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 1));
#line 129 "builtin_ops.m"
              MR_Box backend_libs__builtin_ops__V_9_9;
#line 129 "builtin_ops.m"
              MR_Box backend_libs__builtin_ops__V_10_10;

#line 129 "builtin_ops.m"
              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 129 "builtin_ops.m"
              if (backend_libs__builtin_ops__succeeded)
#line 129 "builtin_ops.m"
                {
#line 129 "builtin_ops.m"
                  backend_libs__builtin_ops__V_9_9 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0));
#line 129 "builtin_ops.m"
                  backend_libs__builtin_ops__V_10_10 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 1));
#line 7270 "backend_libs.builtin_ops.c"
                  {
#line 7272 "backend_libs.builtin_ops.c"
                    backend_libs__builtin_ops__succeeded = mercury__builtin__unify_2_p_0(backend_libs__builtin_ops__TypeInfo_for_T_17, backend_libs__builtin_ops__V_7_7, backend_libs__builtin_ops__V_9_9);
                  }
#line 129 "builtin_ops.m"
                  if (backend_libs__builtin_ops__succeeded)
#line 7277 "backend_libs.builtin_ops.c"
                    {
#line 7279 "backend_libs.builtin_ops.c"
                      return backend_libs__builtin_ops__succeeded = mercury__builtin__unify_2_p_0(backend_libs__builtin_ops__TypeInfo_for_T_17, backend_libs__builtin_ops__V_8_8, backend_libs__builtin_ops__V_10_10);
                    }
#line 129 "builtin_ops.m"
                }
#line 129 "builtin_ops.m"
            }
#line 129 "builtin_ops.m"
          else
#line 129 "builtin_ops.m"
            {
#line 129 "builtin_ops.m"
              MR_Word backend_libs__builtin_ops__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 0)));
#line 129 "builtin_ops.m"
              MR_Word backend_libs__builtin_ops__V_12_12;

#line 129 "builtin_ops.m"
              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 129 "builtin_ops.m"
              if (backend_libs__builtin_ops__succeeded)
#line 129 "builtin_ops.m"
                {
#line 129 "builtin_ops.m"
                  backend_libs__builtin_ops__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));
#line 7303 "backend_libs.builtin_ops.c"
                  {
#line 7305 "backend_libs.builtin_ops.c"
                    return backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____simple_expr_1_0(backend_libs__builtin_ops__TypeInfo_for_T_17, backend_libs__builtin_ops__V_11_11, backend_libs__builtin_ops__V_12_12);
                  }
#line 129 "builtin_ops.m"
                }
#line 129 "builtin_ops.m"
            }
#line 129 "builtin_ops.m"
    return backend_libs__builtin_ops__succeeded;
#line 129 "builtin_ops.m"
  }
#line 129 "builtin_ops.m"
}

#line 109 "builtin_ops.m"
void MR_CALL 
backend_libs__builtin_ops____Compare____scalar_array_elem_type_0_0(
#line 109 "builtin_ops.m"
  MR_Word * backend_libs__builtin_ops__HeadVar__1_1,
#line 109 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__2_2,
#line 109 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__3_3)
#line 109 "builtin_ops.m"
{
#line 109 "builtin_ops.m"
  {
#line 109 "builtin_ops.m"
    MR_bool backend_libs__builtin_ops__succeeded;
#line 109 "builtin_ops.m"
    MR_Integer backend_libs__builtin_ops__Cast_HeadVar1_4 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;
#line 109 "builtin_ops.m"
    MR_Integer backend_libs__builtin_ops__Cast_HeadVar2_5 = (MR_Integer) backend_libs__builtin_ops__HeadVar__3_3;

#line 109 "builtin_ops.m"
    {
#line 109 "builtin_ops.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__builtin_ops__HeadVar__1_1, backend_libs__builtin_ops__Cast_HeadVar1_4, backend_libs__builtin_ops__Cast_HeadVar2_5);
#line 109 "builtin_ops.m"
      return;
    }
#line 109 "builtin_ops.m"
  }
#line 109 "builtin_ops.m"
}

#line 109 "builtin_ops.m"
MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____scalar_array_elem_type_0_0(
#line 109 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__2_1,
#line 109 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__2_2)
#line 109 "builtin_ops.m"
{
#line 7360 "backend_libs.builtin_ops.c"
  {
#line 7362 "backend_libs.builtin_ops.c"
    MR_bool backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__HeadVar__2_1 == backend_libs__builtin_ops__HeadVar__2_2);

#line 7365 "backend_libs.builtin_ops.c"
    return backend_libs__builtin_ops__succeeded;
#line 7367 "backend_libs.builtin_ops.c"
  }
#line 109 "builtin_ops.m"
}

#line 44 "builtin_ops.m"
void MR_CALL 
backend_libs__builtin_ops____Compare____binary_op_0_0(
#line 44 "builtin_ops.m"
  MR_Word * backend_libs__builtin_ops__HeadVar__1_1,
#line 44 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__2_2,
#line 44 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__3_3)
#line 44 "builtin_ops.m"
{
#line 44 "builtin_ops.m"
  {
#line 44 "builtin_ops.m"
    MR_bool backend_libs__builtin_ops__succeeded;
#line 44 "builtin_ops.m"
    MR_Integer backend_libs__builtin_ops__CastX_9 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;
#line 44 "builtin_ops.m"
    MR_Integer backend_libs__builtin_ops__CastY_10 = (MR_Integer) backend_libs__builtin_ops__HeadVar__3_3;

#line 44 "builtin_ops.m"
    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastX_9 == backend_libs__builtin_ops__CastY_10);
#line 44 "builtin_ops.m"
    if (backend_libs__builtin_ops__succeeded)
#line 7396 "backend_libs.builtin_ops.c"
      *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 0;
#line 44 "builtin_ops.m"
    else
#line 44 "builtin_ops.m"
      {
#line 44 "builtin_ops.m"
        MR_Integer backend_libs__builtin_ops__V_4_4;
#line 44 "builtin_ops.m"
        MR_Integer backend_libs__builtin_ops__V_5_5;

#line 44 "builtin_ops.m"
        {
#line 44 "builtin_ops.m"
          backend_libs__builtin_ops____Index____binary_op_0_0(backend_libs__builtin_ops__HeadVar__2_2, &backend_libs__builtin_ops__V_4_4);
        }
#line 44 "builtin_ops.m"
        {
#line 44 "builtin_ops.m"
          backend_libs__builtin_ops____Index____binary_op_0_0(backend_libs__builtin_ops__HeadVar__3_3, &backend_libs__builtin_ops__V_5_5);
        }
#line 44 "builtin_ops.m"
        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_4_4 < backend_libs__builtin_ops__V_5_5);
#line 44 "builtin_ops.m"
        if (backend_libs__builtin_ops__succeeded)
#line 7421 "backend_libs.builtin_ops.c"
          *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "builtin_ops.m"
        else
#line 44 "builtin_ops.m"
          {
#line 44 "builtin_ops.m"
            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_4_4 > backend_libs__builtin_ops__V_5_5);
#line 44 "builtin_ops.m"
            if (backend_libs__builtin_ops__succeeded)
#line 7431 "backend_libs.builtin_ops.c"
              *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "builtin_ops.m"
            else
#line 44 "builtin_ops.m"
              {
#line 44 "builtin_ops.m"
                MR_Word backend_libs__builtin_ops__V_6_6;

#line 44 "builtin_ops.m"
                if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 44 "builtin_ops.m"
                  {
#line 44 "builtin_ops.m"
                    backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 44 "builtin_ops.m"
                    backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 44 "builtin_ops.m"
                  }
#line 44 "builtin_ops.m"
                else
#line 44 "builtin_ops.m"
                  if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 44 "builtin_ops.m"
                    {
#line 44 "builtin_ops.m"
                      backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 44 "builtin_ops.m"
                      backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 44 "builtin_ops.m"
                    }
#line 44 "builtin_ops.m"
                  else
#line 44 "builtin_ops.m"
                    if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 44 "builtin_ops.m"
                      {
#line 44 "builtin_ops.m"
                        backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 44 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 44 "builtin_ops.m"
                      }
#line 44 "builtin_ops.m"
                    else
#line 44 "builtin_ops.m"
                      if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 44 "builtin_ops.m"
                        {
#line 44 "builtin_ops.m"
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 44 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 44 "builtin_ops.m"
                        }
#line 44 "builtin_ops.m"
                      else
#line 44 "builtin_ops.m"
                        if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 39)))))
#line 44 "builtin_ops.m"
                          {
#line 44 "builtin_ops.m"
                            backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 44 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 44 "builtin_ops.m"
                          }
#line 44 "builtin_ops.m"
                        else
#line 44 "builtin_ops.m"
                          if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 40)))))
#line 44 "builtin_ops.m"
                            {
#line 44 "builtin_ops.m"
                              backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 44 "builtin_ops.m"
                              backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 44 "builtin_ops.m"
                            }
#line 44 "builtin_ops.m"
                          else
#line 44 "builtin_ops.m"
                            if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 44 "builtin_ops.m"
                              {
#line 44 "builtin_ops.m"
                                backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 44 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 44 "builtin_ops.m"
                              }
#line 44 "builtin_ops.m"
                            else
#line 44 "builtin_ops.m"
                              if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 30)))))
#line 44 "builtin_ops.m"
                                {
#line 44 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 44 "builtin_ops.m"
                                  backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 44 "builtin_ops.m"
                                }
#line 44 "builtin_ops.m"
                              else
#line 44 "builtin_ops.m"
                                if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 31)))))
#line 44 "builtin_ops.m"
                                  {
#line 44 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 44 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 44 "builtin_ops.m"
                                  }
#line 44 "builtin_ops.m"
                                else
#line 44 "builtin_ops.m"
                                  if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 38)))))
#line 44 "builtin_ops.m"
                                    {
#line 44 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 44 "builtin_ops.m"
                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 44 "builtin_ops.m"
                                    }
#line 44 "builtin_ops.m"
                                  else
#line 44 "builtin_ops.m"
                                    if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 36)))))
#line 44 "builtin_ops.m"
                                      {
#line 44 "builtin_ops.m"
                                        backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 44 "builtin_ops.m"
                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 44 "builtin_ops.m"
                                      }
#line 44 "builtin_ops.m"
                                    else
#line 44 "builtin_ops.m"
                                      if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 34)))))
#line 44 "builtin_ops.m"
                                        {
#line 44 "builtin_ops.m"
                                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 44 "builtin_ops.m"
                                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 44 "builtin_ops.m"
                                        }
#line 44 "builtin_ops.m"
                                      else
#line 44 "builtin_ops.m"
                                        if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 35)))))
#line 44 "builtin_ops.m"
                                          {
#line 44 "builtin_ops.m"
                                            backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 44 "builtin_ops.m"
                                            backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 44 "builtin_ops.m"
                                          }
#line 44 "builtin_ops.m"
                                        else
#line 44 "builtin_ops.m"
                                          if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 33)))))
#line 44 "builtin_ops.m"
                                            {
#line 44 "builtin_ops.m"
                                              backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 44 "builtin_ops.m"
                                              backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 44 "builtin_ops.m"
                                            }
#line 44 "builtin_ops.m"
                                          else
#line 44 "builtin_ops.m"
                                            if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 28)))))
#line 44 "builtin_ops.m"
                                              {
#line 44 "builtin_ops.m"
                                                backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 44 "builtin_ops.m"
                                                backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 44 "builtin_ops.m"
                                              }
#line 44 "builtin_ops.m"
                                            else
#line 44 "builtin_ops.m"
                                              if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 32)))))
#line 44 "builtin_ops.m"
                                                {
#line 44 "builtin_ops.m"
                                                  backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 44 "builtin_ops.m"
                                                  backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 44 "builtin_ops.m"
                                                }
#line 44 "builtin_ops.m"
                                              else
#line 44 "builtin_ops.m"
                                                if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 27)))))
#line 44 "builtin_ops.m"
                                                  {
#line 44 "builtin_ops.m"
                                                    backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 44 "builtin_ops.m"
                                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 44 "builtin_ops.m"
                                                  }
#line 44 "builtin_ops.m"
                                                else
#line 44 "builtin_ops.m"
                                                  if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 29)))))
#line 44 "builtin_ops.m"
                                                    {
#line 44 "builtin_ops.m"
                                                      backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 44 "builtin_ops.m"
                                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 44 "builtin_ops.m"
                                                    }
#line 44 "builtin_ops.m"
                                                  else
#line 44 "builtin_ops.m"
                                                    if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 37)))))
#line 44 "builtin_ops.m"
                                                      {
#line 44 "builtin_ops.m"
                                                        backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 44 "builtin_ops.m"
                                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 44 "builtin_ops.m"
                                                      }
#line 44 "builtin_ops.m"
                                                    else
#line 44 "builtin_ops.m"
                                                      if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 44 "builtin_ops.m"
                                                        {
#line 44 "builtin_ops.m"
                                                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 44 "builtin_ops.m"
                                                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 44 "builtin_ops.m"
                                                        }
#line 44 "builtin_ops.m"
                                                      else
#line 44 "builtin_ops.m"
                                                        if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 44 "builtin_ops.m"
                                                          {
#line 44 "builtin_ops.m"
                                                            backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 44 "builtin_ops.m"
                                                            backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 44 "builtin_ops.m"
                                                          }
#line 44 "builtin_ops.m"
                                                        else
#line 44 "builtin_ops.m"
                                                          if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 25)))))
#line 44 "builtin_ops.m"
                                                            {
#line 44 "builtin_ops.m"
                                                              backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 44 "builtin_ops.m"
                                                              backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 44 "builtin_ops.m"
                                                            }
#line 44 "builtin_ops.m"
                                                          else
#line 44 "builtin_ops.m"
                                                            if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 23)))))
#line 44 "builtin_ops.m"
                                                              {
#line 44 "builtin_ops.m"
                                                                backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 44 "builtin_ops.m"
                                                                backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 44 "builtin_ops.m"
                                                              }
#line 44 "builtin_ops.m"
                                                            else
#line 44 "builtin_ops.m"
                                                              if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 24)))))
#line 44 "builtin_ops.m"
                                                                {
#line 44 "builtin_ops.m"
                                                                  backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 44 "builtin_ops.m"
                                                                  backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 44 "builtin_ops.m"
                                                                }
#line 44 "builtin_ops.m"
                                                              else
#line 44 "builtin_ops.m"
                                                                if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 22)))))
#line 44 "builtin_ops.m"
                                                                  {
#line 44 "builtin_ops.m"
                                                                    backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 44 "builtin_ops.m"
                                                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 44 "builtin_ops.m"
                                                                  }
#line 44 "builtin_ops.m"
                                                                else
#line 44 "builtin_ops.m"
                                                                  if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 44 "builtin_ops.m"
                                                                    {
#line 44 "builtin_ops.m"
                                                                      backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 44 "builtin_ops.m"
                                                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 44 "builtin_ops.m"
                                                                    }
#line 44 "builtin_ops.m"
                                                                  else
#line 44 "builtin_ops.m"
                                                                    if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 44 "builtin_ops.m"
                                                                      {
#line 44 "builtin_ops.m"
                                                                        backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 44 "builtin_ops.m"
                                                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 44 "builtin_ops.m"
                                                                      }
#line 44 "builtin_ops.m"
                                                                    else
#line 44 "builtin_ops.m"
                                                                      if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 44 "builtin_ops.m"
                                                                        {
#line 44 "builtin_ops.m"
                                                                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 44 "builtin_ops.m"
                                                                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 44 "builtin_ops.m"
                                                                        }
#line 44 "builtin_ops.m"
                                                                      else
#line 44 "builtin_ops.m"
                                                                        if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 44 "builtin_ops.m"
                                                                          {
#line 44 "builtin_ops.m"
                                                                            backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 44 "builtin_ops.m"
                                                                            backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 44 "builtin_ops.m"
                                                                          }
#line 44 "builtin_ops.m"
                                                                        else
#line 44 "builtin_ops.m"
                                                                          if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 44 "builtin_ops.m"
                                                                            {
#line 44 "builtin_ops.m"
                                                                              backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 44 "builtin_ops.m"
                                                                              backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 44 "builtin_ops.m"
                                                                            }
#line 44 "builtin_ops.m"
                                                                          else
#line 44 "builtin_ops.m"
                                                                            if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 44 "builtin_ops.m"
                                                                              {
#line 44 "builtin_ops.m"
                                                                                backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 44 "builtin_ops.m"
                                                                                backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 44 "builtin_ops.m"
                                                                              }
#line 44 "builtin_ops.m"
                                                                            else
#line 44 "builtin_ops.m"
                                                                              if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 21)))))
#line 44 "builtin_ops.m"
                                                                                {
#line 44 "builtin_ops.m"
                                                                                  backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 44 "builtin_ops.m"
                                                                                  backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 44 "builtin_ops.m"
                                                                                }
#line 44 "builtin_ops.m"
                                                                              else
#line 44 "builtin_ops.m"
                                                                                if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15)))))
#line 44 "builtin_ops.m"
                                                                                  {
#line 44 "builtin_ops.m"
                                                                                    backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 44 "builtin_ops.m"
                                                                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 44 "builtin_ops.m"
                                                                                  }
#line 44 "builtin_ops.m"
                                                                                else
#line 44 "builtin_ops.m"
                                                                                  if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 20)))))
#line 44 "builtin_ops.m"
                                                                                    {
#line 44 "builtin_ops.m"
                                                                                      backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 44 "builtin_ops.m"
                                                                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 44 "builtin_ops.m"
                                                                                    }
#line 44 "builtin_ops.m"
                                                                                  else
#line 44 "builtin_ops.m"
                                                                                    if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 18)))))
#line 44 "builtin_ops.m"
                                                                                      {
#line 44 "builtin_ops.m"
                                                                                        backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 44 "builtin_ops.m"
                                                                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 44 "builtin_ops.m"
                                                                                      }
#line 44 "builtin_ops.m"
                                                                                    else
#line 44 "builtin_ops.m"
                                                                                      if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 19)))))
#line 44 "builtin_ops.m"
                                                                                        {
#line 44 "builtin_ops.m"
                                                                                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 44 "builtin_ops.m"
                                                                                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 44 "builtin_ops.m"
                                                                                        }
#line 44 "builtin_ops.m"
                                                                                      else
#line 44 "builtin_ops.m"
                                                                                        if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17)))))
#line 44 "builtin_ops.m"
                                                                                          {
#line 44 "builtin_ops.m"
                                                                                            backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 44 "builtin_ops.m"
                                                                                            backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 44 "builtin_ops.m"
                                                                                          }
#line 44 "builtin_ops.m"
                                                                                        else
#line 44 "builtin_ops.m"
                                                                                          if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)))))
#line 44 "builtin_ops.m"
                                                                                            {
#line 44 "builtin_ops.m"
                                                                                              backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 44 "builtin_ops.m"
                                                                                              backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 44 "builtin_ops.m"
                                                                                            }
#line 44 "builtin_ops.m"
                                                                                          else
#line 44 "builtin_ops.m"
                                                                                            if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 44 "builtin_ops.m"
                                                                                              {
#line 44 "builtin_ops.m"
                                                                                                backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 44 "builtin_ops.m"
                                                                                                backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 44 "builtin_ops.m"
                                                                                              }
#line 44 "builtin_ops.m"
                                                                                            else
#line 44 "builtin_ops.m"
                                                                                              if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 44 "builtin_ops.m"
                                                                                                {
#line 44 "builtin_ops.m"
                                                                                                  backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 44 "builtin_ops.m"
                                                                                                  backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 44 "builtin_ops.m"
                                                                                                }
#line 44 "builtin_ops.m"
                                                                                              else
#line 44 "builtin_ops.m"
                                                                                                if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 26)))))
#line 44 "builtin_ops.m"
                                                                                                  {
#line 44 "builtin_ops.m"
                                                                                                    backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 44 "builtin_ops.m"
                                                                                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 44 "builtin_ops.m"
                                                                                                  }
#line 44 "builtin_ops.m"
                                                                                                else
#line 44 "builtin_ops.m"
                                                                                                  {
#line 44 "builtin_ops.m"
                                                                                                    MR_Word backend_libs__builtin_ops__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));
#line 44 "builtin_ops.m"
                                                                                                    MR_Word backend_libs__builtin_ops__V_8_8;

#line 44 "builtin_ops.m"
                                                                                                    backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 44 "builtin_ops.m"
                                                                                                    if (backend_libs__builtin_ops__succeeded)
#line 44 "builtin_ops.m"
                                                                                                      {
#line 44 "builtin_ops.m"
                                                                                                        backend_libs__builtin_ops__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)));
#line 44 "builtin_ops.m"
                                                                                                        {
#line 44 "builtin_ops.m"
                                                                                                          backend_libs__builtin_ops____Compare____array_elem_type_0_0(&backend_libs__builtin_ops__V_6_6, backend_libs__builtin_ops__V_7_7, backend_libs__builtin_ops__V_8_8);
                                                                                                        }
#line 44 "builtin_ops.m"
                                                                                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 44 "builtin_ops.m"
                                                                                                      }
#line 44 "builtin_ops.m"
                                                                                                  }
#line 44 "builtin_ops.m"
                if (backend_libs__builtin_ops__succeeded)
#line 44 "builtin_ops.m"
                  *backend_libs__builtin_ops__HeadVar__1_1 = backend_libs__builtin_ops__V_6_6;
#line 44 "builtin_ops.m"
                else
#line 44 "builtin_ops.m"
                  {
#line 44 "builtin_ops.m"
                    mercury__private_builtin__compare_error_0_p_0();
#line 44 "builtin_ops.m"
                    return;
                  }
#line 44 "builtin_ops.m"
              }
#line 44 "builtin_ops.m"
          }
#line 44 "builtin_ops.m"
      }
#line 44 "builtin_ops.m"
  }
#line 44 "builtin_ops.m"
}

#line 44 "builtin_ops.m"
void MR_CALL 
backend_libs__builtin_ops____Index____binary_op_0_0(
#line 44 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__1_1,
#line 44 "builtin_ops.m"
  MR_Integer * backend_libs__builtin_ops__HeadVar__2_2)
#line 44 "builtin_ops.m"
{
#line 44 "builtin_ops.m"
  {
#line 44 "builtin_ops.m"
    MR_bool backend_libs__builtin_ops__succeeded;

#line 44 "builtin_ops.m"
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 7998 "backend_libs.builtin_ops.c"
      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 7;
#line 44 "builtin_ops.m"
    else
#line 44 "builtin_ops.m"
      if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 8004 "backend_libs.builtin_ops.c"
        *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 8;
#line 44 "builtin_ops.m"
      else
#line 44 "builtin_ops.m"
        if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 8010 "backend_libs.builtin_ops.c"
          *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 9;
#line 44 "builtin_ops.m"
        else
#line 44 "builtin_ops.m"
          if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 8016 "backend_libs.builtin_ops.c"
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 14;
#line 44 "builtin_ops.m"
          else
#line 44 "builtin_ops.m"
            if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 39)))))
#line 8022 "backend_libs.builtin_ops.c"
              *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 40;
#line 44 "builtin_ops.m"
            else
#line 44 "builtin_ops.m"
              if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 40)))))
#line 8028 "backend_libs.builtin_ops.c"
                *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 41;
#line 44 "builtin_ops.m"
              else
#line 44 "builtin_ops.m"
                if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 8034 "backend_libs.builtin_ops.c"
                  *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 12;
#line 44 "builtin_ops.m"
                else
#line 44 "builtin_ops.m"
                  if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 30)))))
#line 8040 "backend_libs.builtin_ops.c"
                    *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 31;
#line 44 "builtin_ops.m"
                  else
#line 44 "builtin_ops.m"
                    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 31)))))
#line 8046 "backend_libs.builtin_ops.c"
                      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 32;
#line 44 "builtin_ops.m"
                    else
#line 44 "builtin_ops.m"
                      if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 38)))))
#line 8052 "backend_libs.builtin_ops.c"
                        *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 39;
#line 44 "builtin_ops.m"
                      else
#line 44 "builtin_ops.m"
                        if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 36)))))
#line 8058 "backend_libs.builtin_ops.c"
                          *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 37;
#line 44 "builtin_ops.m"
                        else
#line 44 "builtin_ops.m"
                          if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 34)))))
#line 8064 "backend_libs.builtin_ops.c"
                            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 35;
#line 44 "builtin_ops.m"
                          else
#line 44 "builtin_ops.m"
                            if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 35)))))
#line 8070 "backend_libs.builtin_ops.c"
                              *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 36;
#line 44 "builtin_ops.m"
                            else
#line 44 "builtin_ops.m"
                              if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 33)))))
#line 8076 "backend_libs.builtin_ops.c"
                                *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 34;
#line 44 "builtin_ops.m"
                              else
#line 44 "builtin_ops.m"
                                if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 28)))))
#line 8082 "backend_libs.builtin_ops.c"
                                  *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 29;
#line 44 "builtin_ops.m"
                                else
#line 44 "builtin_ops.m"
                                  if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 32)))))
#line 8088 "backend_libs.builtin_ops.c"
                                    *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 33;
#line 44 "builtin_ops.m"
                                  else
#line 44 "builtin_ops.m"
                                    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 27)))))
#line 8094 "backend_libs.builtin_ops.c"
                                      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 28;
#line 44 "builtin_ops.m"
                                    else
#line 44 "builtin_ops.m"
                                      if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 29)))))
#line 8100 "backend_libs.builtin_ops.c"
                                        *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 30;
#line 44 "builtin_ops.m"
                                      else
#line 44 "builtin_ops.m"
                                        if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 37)))))
#line 8106 "backend_libs.builtin_ops.c"
                                          *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 38;
#line 44 "builtin_ops.m"
                                        else
#line 44 "builtin_ops.m"
                                          if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 8112 "backend_libs.builtin_ops.c"
                                            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 0;
#line 44 "builtin_ops.m"
                                          else
#line 44 "builtin_ops.m"
                                            if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 8118 "backend_libs.builtin_ops.c"
                                              *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 3;
#line 44 "builtin_ops.m"
                                            else
#line 44 "builtin_ops.m"
                                              if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 25)))))
#line 8124 "backend_libs.builtin_ops.c"
                                                *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 26;
#line 44 "builtin_ops.m"
                                              else
#line 44 "builtin_ops.m"
                                                if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 23)))))
#line 8130 "backend_libs.builtin_ops.c"
                                                  *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 24;
#line 44 "builtin_ops.m"
                                                else
#line 44 "builtin_ops.m"
                                                  if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 24)))))
#line 8136 "backend_libs.builtin_ops.c"
                                                    *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 25;
#line 44 "builtin_ops.m"
                                                  else
#line 44 "builtin_ops.m"
                                                    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 22)))))
#line 8142 "backend_libs.builtin_ops.c"
                                                      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 23;
#line 44 "builtin_ops.m"
                                                    else
#line 44 "builtin_ops.m"
                                                      if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 8148 "backend_libs.builtin_ops.c"
                                                        *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 4;
#line 44 "builtin_ops.m"
                                                      else
#line 44 "builtin_ops.m"
                                                        if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 8154 "backend_libs.builtin_ops.c"
                                                          *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 2;
#line 44 "builtin_ops.m"
                                                        else
#line 44 "builtin_ops.m"
                                                          if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 8160 "backend_libs.builtin_ops.c"
                                                            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 1;
#line 44 "builtin_ops.m"
                                                          else
#line 44 "builtin_ops.m"
                                                            if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 8166 "backend_libs.builtin_ops.c"
                                                              *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 10;
#line 44 "builtin_ops.m"
                                                            else
#line 44 "builtin_ops.m"
                                                              if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 8172 "backend_libs.builtin_ops.c"
                                                                *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 11;
#line 44 "builtin_ops.m"
                                                              else
#line 44 "builtin_ops.m"
                                                                if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 8178 "backend_libs.builtin_ops.c"
                                                                  *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 13;
#line 44 "builtin_ops.m"
                                                                else
#line 44 "builtin_ops.m"
                                                                  if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 21)))))
#line 8184 "backend_libs.builtin_ops.c"
                                                                    *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 22;
#line 44 "builtin_ops.m"
                                                                  else
#line 44 "builtin_ops.m"
                                                                    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15)))))
#line 8190 "backend_libs.builtin_ops.c"
                                                                      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 16;
#line 44 "builtin_ops.m"
                                                                    else
#line 44 "builtin_ops.m"
                                                                      if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 20)))))
#line 8196 "backend_libs.builtin_ops.c"
                                                                        *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 21;
#line 44 "builtin_ops.m"
                                                                      else
#line 44 "builtin_ops.m"
                                                                        if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 18)))))
#line 8202 "backend_libs.builtin_ops.c"
                                                                          *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 19;
#line 44 "builtin_ops.m"
                                                                        else
#line 44 "builtin_ops.m"
                                                                          if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 19)))))
#line 8208 "backend_libs.builtin_ops.c"
                                                                            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 20;
#line 44 "builtin_ops.m"
                                                                          else
#line 44 "builtin_ops.m"
                                                                            if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17)))))
#line 8214 "backend_libs.builtin_ops.c"
                                                                              *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 18;
#line 44 "builtin_ops.m"
                                                                            else
#line 44 "builtin_ops.m"
                                                                              if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)))))
#line 8220 "backend_libs.builtin_ops.c"
                                                                                *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 17;
#line 44 "builtin_ops.m"
                                                                              else
#line 44 "builtin_ops.m"
                                                                                if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 8226 "backend_libs.builtin_ops.c"
                                                                                  *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 5;
#line 44 "builtin_ops.m"
                                                                                else
#line 44 "builtin_ops.m"
                                                                                  if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 8232 "backend_libs.builtin_ops.c"
                                                                                    *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 6;
#line 44 "builtin_ops.m"
                                                                                  else
#line 44 "builtin_ops.m"
                                                                                    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 26)))))
#line 8238 "backend_libs.builtin_ops.c"
                                                                                      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 27;
#line 44 "builtin_ops.m"
                                                                                    else
#line 8242 "backend_libs.builtin_ops.c"
                                                                                      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 15;
#line 44 "builtin_ops.m"
  }
#line 44 "builtin_ops.m"
}

#line 44 "builtin_ops.m"
MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____binary_op_0_0(
#line 44 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__1_1,
#line 44 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__2_2)
#line 44 "builtin_ops.m"
{
#line 44 "builtin_ops.m"
  {
#line 44 "builtin_ops.m"
    MR_bool backend_libs__builtin_ops__succeeded;
#line 44 "builtin_ops.m"
    MR_Integer backend_libs__builtin_ops__CastX_87 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 44 "builtin_ops.m"
    MR_Integer backend_libs__builtin_ops__CastY_88 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 44 "builtin_ops.m"
    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastX_87 == backend_libs__builtin_ops__CastY_88);
#line 44 "builtin_ops.m"
    if (backend_libs__builtin_ops__succeeded)
#line 44 "builtin_ops.m"
      backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 44 "builtin_ops.m"
    else
#line 44 "builtin_ops.m"
      if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 44 "builtin_ops.m"
        {
#line 44 "builtin_ops.m"
          MR_Integer backend_libs__builtin_ops__CastX_17 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 44 "builtin_ops.m"
          MR_Integer backend_libs__builtin_ops__CastY_18 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 44 "builtin_ops.m"
          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_18 == backend_libs__builtin_ops__CastX_17);
#line 44 "builtin_ops.m"
        }
#line 44 "builtin_ops.m"
      else
#line 44 "builtin_ops.m"
        if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 44 "builtin_ops.m"
          {
#line 44 "builtin_ops.m"
            MR_Integer backend_libs__builtin_ops__CastX_19 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 44 "builtin_ops.m"
            MR_Integer backend_libs__builtin_ops__CastY_20 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 44 "builtin_ops.m"
            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_20 == backend_libs__builtin_ops__CastX_19);
#line 44 "builtin_ops.m"
          }
#line 44 "builtin_ops.m"
        else
#line 44 "builtin_ops.m"
          if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 44 "builtin_ops.m"
            {
#line 44 "builtin_ops.m"
              MR_Integer backend_libs__builtin_ops__CastX_21 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 44 "builtin_ops.m"
              MR_Integer backend_libs__builtin_ops__CastY_22 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 44 "builtin_ops.m"
              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_22 == backend_libs__builtin_ops__CastX_21);
#line 44 "builtin_ops.m"
            }
#line 44 "builtin_ops.m"
          else
#line 44 "builtin_ops.m"
            if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 44 "builtin_ops.m"
              {
#line 44 "builtin_ops.m"
                MR_Integer backend_libs__builtin_ops__CastX_31 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 44 "builtin_ops.m"
                MR_Integer backend_libs__builtin_ops__CastY_32 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 44 "builtin_ops.m"
                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_32 == backend_libs__builtin_ops__CastX_31);
#line 44 "builtin_ops.m"
              }
#line 44 "builtin_ops.m"
            else
#line 44 "builtin_ops.m"
              if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 39)))))
#line 44 "builtin_ops.m"
                {
#line 44 "builtin_ops.m"
                  MR_Integer backend_libs__builtin_ops__CastX_83 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 44 "builtin_ops.m"
                  MR_Integer backend_libs__builtin_ops__CastY_84 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 44 "builtin_ops.m"
                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_84 == backend_libs__builtin_ops__CastX_83);
#line 44 "builtin_ops.m"
                }
#line 44 "builtin_ops.m"
              else
#line 44 "builtin_ops.m"
                if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 40)))))
#line 44 "builtin_ops.m"
                  {
#line 44 "builtin_ops.m"
                    MR_Integer backend_libs__builtin_ops__CastX_85 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 44 "builtin_ops.m"
                    MR_Integer backend_libs__builtin_ops__CastY_86 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 44 "builtin_ops.m"
                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_86 == backend_libs__builtin_ops__CastX_85);
#line 44 "builtin_ops.m"
                  }
#line 44 "builtin_ops.m"
                else
#line 44 "builtin_ops.m"
                  if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 44 "builtin_ops.m"
                    {
#line 44 "builtin_ops.m"
                      MR_Integer backend_libs__builtin_ops__CastX_27 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 44 "builtin_ops.m"
                      MR_Integer backend_libs__builtin_ops__CastY_28 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 44 "builtin_ops.m"
                      backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_28 == backend_libs__builtin_ops__CastX_27);
#line 44 "builtin_ops.m"
                    }
#line 44 "builtin_ops.m"
                  else
#line 44 "builtin_ops.m"
                    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 30)))))
#line 44 "builtin_ops.m"
                      {
#line 44 "builtin_ops.m"
                        MR_Integer backend_libs__builtin_ops__CastX_65 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 44 "builtin_ops.m"
                        MR_Integer backend_libs__builtin_ops__CastY_66 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 44 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_66 == backend_libs__builtin_ops__CastX_65);
#line 44 "builtin_ops.m"
                      }
#line 44 "builtin_ops.m"
                    else
#line 44 "builtin_ops.m"
                      if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 31)))))
#line 44 "builtin_ops.m"
                        {
#line 44 "builtin_ops.m"
                          MR_Integer backend_libs__builtin_ops__CastX_67 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 44 "builtin_ops.m"
                          MR_Integer backend_libs__builtin_ops__CastY_68 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 44 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_68 == backend_libs__builtin_ops__CastX_67);
#line 44 "builtin_ops.m"
                        }
#line 44 "builtin_ops.m"
                      else
#line 44 "builtin_ops.m"
                        if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 38)))))
#line 44 "builtin_ops.m"
                          {
#line 44 "builtin_ops.m"
                            MR_Integer backend_libs__builtin_ops__CastX_81 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 44 "builtin_ops.m"
                            MR_Integer backend_libs__builtin_ops__CastY_82 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 44 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_82 == backend_libs__builtin_ops__CastX_81);
#line 44 "builtin_ops.m"
                          }
#line 44 "builtin_ops.m"
                        else
#line 44 "builtin_ops.m"
                          if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 36)))))
#line 44 "builtin_ops.m"
                            {
#line 44 "builtin_ops.m"
                              MR_Integer backend_libs__builtin_ops__CastX_77 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 44 "builtin_ops.m"
                              MR_Integer backend_libs__builtin_ops__CastY_78 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 44 "builtin_ops.m"
                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_78 == backend_libs__builtin_ops__CastX_77);
#line 44 "builtin_ops.m"
                            }
#line 44 "builtin_ops.m"
                          else
#line 44 "builtin_ops.m"
                            if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 34)))))
#line 44 "builtin_ops.m"
                              {
#line 44 "builtin_ops.m"
                                MR_Integer backend_libs__builtin_ops__CastX_73 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 44 "builtin_ops.m"
                                MR_Integer backend_libs__builtin_ops__CastY_74 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 44 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_74 == backend_libs__builtin_ops__CastX_73);
#line 44 "builtin_ops.m"
                              }
#line 44 "builtin_ops.m"
                            else
#line 44 "builtin_ops.m"
                              if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 35)))))
#line 44 "builtin_ops.m"
                                {
#line 44 "builtin_ops.m"
                                  MR_Integer backend_libs__builtin_ops__CastX_75 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 44 "builtin_ops.m"
                                  MR_Integer backend_libs__builtin_ops__CastY_76 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 44 "builtin_ops.m"
                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_76 == backend_libs__builtin_ops__CastX_75);
#line 44 "builtin_ops.m"
                                }
#line 44 "builtin_ops.m"
                              else
#line 44 "builtin_ops.m"
                                if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 33)))))
#line 44 "builtin_ops.m"
                                  {
#line 44 "builtin_ops.m"
                                    MR_Integer backend_libs__builtin_ops__CastX_71 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 44 "builtin_ops.m"
                                    MR_Integer backend_libs__builtin_ops__CastY_72 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 44 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_72 == backend_libs__builtin_ops__CastX_71);
#line 44 "builtin_ops.m"
                                  }
#line 44 "builtin_ops.m"
                                else
#line 44 "builtin_ops.m"
                                  if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 28)))))
#line 44 "builtin_ops.m"
                                    {
#line 44 "builtin_ops.m"
                                      MR_Integer backend_libs__builtin_ops__CastX_61 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 44 "builtin_ops.m"
                                      MR_Integer backend_libs__builtin_ops__CastY_62 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 44 "builtin_ops.m"
                                      backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_62 == backend_libs__builtin_ops__CastX_61);
#line 44 "builtin_ops.m"
                                    }
#line 44 "builtin_ops.m"
                                  else
#line 44 "builtin_ops.m"
                                    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 32)))))
#line 44 "builtin_ops.m"
                                      {
#line 44 "builtin_ops.m"
                                        MR_Integer backend_libs__builtin_ops__CastX_69 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 44 "builtin_ops.m"
                                        MR_Integer backend_libs__builtin_ops__CastY_70 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 44 "builtin_ops.m"
                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_70 == backend_libs__builtin_ops__CastX_69);
#line 44 "builtin_ops.m"
                                      }
#line 44 "builtin_ops.m"
                                    else
#line 44 "builtin_ops.m"
                                      if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 27)))))
#line 44 "builtin_ops.m"
                                        {
#line 44 "builtin_ops.m"
                                          MR_Integer backend_libs__builtin_ops__CastX_59 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 44 "builtin_ops.m"
                                          MR_Integer backend_libs__builtin_ops__CastY_60 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 44 "builtin_ops.m"
                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_60 == backend_libs__builtin_ops__CastX_59);
#line 44 "builtin_ops.m"
                                        }
#line 44 "builtin_ops.m"
                                      else
#line 44 "builtin_ops.m"
                                        if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 29)))))
#line 44 "builtin_ops.m"
                                          {
#line 44 "builtin_ops.m"
                                            MR_Integer backend_libs__builtin_ops__CastX_63 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 44 "builtin_ops.m"
                                            MR_Integer backend_libs__builtin_ops__CastY_64 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 44 "builtin_ops.m"
                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_64 == backend_libs__builtin_ops__CastX_63);
#line 44 "builtin_ops.m"
                                          }
#line 44 "builtin_ops.m"
                                        else
#line 44 "builtin_ops.m"
                                          if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 37)))))
#line 44 "builtin_ops.m"
                                            {
#line 44 "builtin_ops.m"
                                              MR_Integer backend_libs__builtin_ops__CastX_79 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 44 "builtin_ops.m"
                                              MR_Integer backend_libs__builtin_ops__CastY_80 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 44 "builtin_ops.m"
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_80 == backend_libs__builtin_ops__CastX_79);
#line 44 "builtin_ops.m"
                                            }
#line 44 "builtin_ops.m"
                                          else
#line 44 "builtin_ops.m"
                                            if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 44 "builtin_ops.m"
                                              {
#line 44 "builtin_ops.m"
                                                MR_Integer backend_libs__builtin_ops__CastX_3 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 44 "builtin_ops.m"
                                                MR_Integer backend_libs__builtin_ops__CastY_4 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 44 "builtin_ops.m"
                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_4 == backend_libs__builtin_ops__CastX_3);
#line 44 "builtin_ops.m"
                                              }
#line 44 "builtin_ops.m"
                                            else
#line 44 "builtin_ops.m"
                                              if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 44 "builtin_ops.m"
                                                {
#line 44 "builtin_ops.m"
                                                  MR_Integer backend_libs__builtin_ops__CastX_9 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 44 "builtin_ops.m"
                                                  MR_Integer backend_libs__builtin_ops__CastY_10 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 44 "builtin_ops.m"
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_10 == backend_libs__builtin_ops__CastX_9);
#line 44 "builtin_ops.m"
                                                }
#line 44 "builtin_ops.m"
                                              else
#line 44 "builtin_ops.m"
                                                if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 25)))))
#line 44 "builtin_ops.m"
                                                  {
#line 44 "builtin_ops.m"
                                                    MR_Integer backend_libs__builtin_ops__CastX_55 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 44 "builtin_ops.m"
                                                    MR_Integer backend_libs__builtin_ops__CastY_56 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 44 "builtin_ops.m"
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_56 == backend_libs__builtin_ops__CastX_55);
#line 44 "builtin_ops.m"
                                                  }
#line 44 "builtin_ops.m"
                                                else
#line 44 "builtin_ops.m"
                                                  if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 23)))))
#line 44 "builtin_ops.m"
                                                    {
#line 44 "builtin_ops.m"
                                                      MR_Integer backend_libs__builtin_ops__CastX_51 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 44 "builtin_ops.m"
                                                      MR_Integer backend_libs__builtin_ops__CastY_52 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 44 "builtin_ops.m"
                                                      backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_52 == backend_libs__builtin_ops__CastX_51);
#line 44 "builtin_ops.m"
                                                    }
#line 44 "builtin_ops.m"
                                                  else
#line 44 "builtin_ops.m"
                                                    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 24)))))
#line 44 "builtin_ops.m"
                                                      {
#line 44 "builtin_ops.m"
                                                        MR_Integer backend_libs__builtin_ops__CastX_53 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 44 "builtin_ops.m"
                                                        MR_Integer backend_libs__builtin_ops__CastY_54 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 44 "builtin_ops.m"
                                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_54 == backend_libs__builtin_ops__CastX_53);
#line 44 "builtin_ops.m"
                                                      }
#line 44 "builtin_ops.m"
                                                    else
#line 44 "builtin_ops.m"
                                                      if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 22)))))
#line 44 "builtin_ops.m"
                                                        {
#line 44 "builtin_ops.m"
                                                          MR_Integer backend_libs__builtin_ops__CastX_49 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 44 "builtin_ops.m"
                                                          MR_Integer backend_libs__builtin_ops__CastY_50 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 44 "builtin_ops.m"
                                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_50 == backend_libs__builtin_ops__CastX_49);
#line 44 "builtin_ops.m"
                                                        }
#line 44 "builtin_ops.m"
                                                      else
#line 44 "builtin_ops.m"
                                                        if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 44 "builtin_ops.m"
                                                          {
#line 44 "builtin_ops.m"
                                                            MR_Integer backend_libs__builtin_ops__CastX_11 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 44 "builtin_ops.m"
                                                            MR_Integer backend_libs__builtin_ops__CastY_12 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 44 "builtin_ops.m"
                                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_12 == backend_libs__builtin_ops__CastX_11);
#line 44 "builtin_ops.m"
                                                          }
#line 44 "builtin_ops.m"
                                                        else
#line 44 "builtin_ops.m"
                                                          if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 44 "builtin_ops.m"
                                                            {
#line 44 "builtin_ops.m"
                                                              MR_Integer backend_libs__builtin_ops__CastX_7 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 44 "builtin_ops.m"
                                                              MR_Integer backend_libs__builtin_ops__CastY_8 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 44 "builtin_ops.m"
                                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_8 == backend_libs__builtin_ops__CastX_7);
#line 44 "builtin_ops.m"
                                                            }
#line 44 "builtin_ops.m"
                                                          else
#line 44 "builtin_ops.m"
                                                            if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 44 "builtin_ops.m"
                                                              {
#line 44 "builtin_ops.m"
                                                                MR_Integer backend_libs__builtin_ops__CastX_5 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 44 "builtin_ops.m"
                                                                MR_Integer backend_libs__builtin_ops__CastY_6 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 44 "builtin_ops.m"
                                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_6 == backend_libs__builtin_ops__CastX_5);
#line 44 "builtin_ops.m"
                                                              }
#line 44 "builtin_ops.m"
                                                            else
#line 44 "builtin_ops.m"
                                                              if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 44 "builtin_ops.m"
                                                                {
#line 44 "builtin_ops.m"
                                                                  MR_Integer backend_libs__builtin_ops__CastX_23 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 44 "builtin_ops.m"
                                                                  MR_Integer backend_libs__builtin_ops__CastY_24 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 44 "builtin_ops.m"
                                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_24 == backend_libs__builtin_ops__CastX_23);
#line 44 "builtin_ops.m"
                                                                }
#line 44 "builtin_ops.m"
                                                              else
#line 44 "builtin_ops.m"
                                                                if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 44 "builtin_ops.m"
                                                                  {
#line 44 "builtin_ops.m"
                                                                    MR_Integer backend_libs__builtin_ops__CastX_25 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 44 "builtin_ops.m"
                                                                    MR_Integer backend_libs__builtin_ops__CastY_26 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 44 "builtin_ops.m"
                                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_26 == backend_libs__builtin_ops__CastX_25);
#line 44 "builtin_ops.m"
                                                                  }
#line 44 "builtin_ops.m"
                                                                else
#line 44 "builtin_ops.m"
                                                                  if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 44 "builtin_ops.m"
                                                                    {
#line 44 "builtin_ops.m"
                                                                      MR_Integer backend_libs__builtin_ops__CastX_29 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 44 "builtin_ops.m"
                                                                      MR_Integer backend_libs__builtin_ops__CastY_30 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 44 "builtin_ops.m"
                                                                      backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_30 == backend_libs__builtin_ops__CastX_29);
#line 44 "builtin_ops.m"
                                                                    }
#line 44 "builtin_ops.m"
                                                                  else
#line 44 "builtin_ops.m"
                                                                    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 21)))))
#line 44 "builtin_ops.m"
                                                                      {
#line 44 "builtin_ops.m"
                                                                        MR_Integer backend_libs__builtin_ops__CastX_47 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 44 "builtin_ops.m"
                                                                        MR_Integer backend_libs__builtin_ops__CastY_48 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 44 "builtin_ops.m"
                                                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_48 == backend_libs__builtin_ops__CastX_47);
#line 44 "builtin_ops.m"
                                                                      }
#line 44 "builtin_ops.m"
                                                                    else
#line 44 "builtin_ops.m"
                                                                      if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15)))))
#line 44 "builtin_ops.m"
                                                                        {
#line 44 "builtin_ops.m"
                                                                          MR_Integer backend_libs__builtin_ops__CastX_35 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 44 "builtin_ops.m"
                                                                          MR_Integer backend_libs__builtin_ops__CastY_36 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 44 "builtin_ops.m"
                                                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_36 == backend_libs__builtin_ops__CastX_35);
#line 44 "builtin_ops.m"
                                                                        }
#line 44 "builtin_ops.m"
                                                                      else
#line 44 "builtin_ops.m"
                                                                        if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 20)))))
#line 44 "builtin_ops.m"
                                                                          {
#line 44 "builtin_ops.m"
                                                                            MR_Integer backend_libs__builtin_ops__CastX_45 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 44 "builtin_ops.m"
                                                                            MR_Integer backend_libs__builtin_ops__CastY_46 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 44 "builtin_ops.m"
                                                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_46 == backend_libs__builtin_ops__CastX_45);
#line 44 "builtin_ops.m"
                                                                          }
#line 44 "builtin_ops.m"
                                                                        else
#line 44 "builtin_ops.m"
                                                                          if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 18)))))
#line 44 "builtin_ops.m"
                                                                            {
#line 44 "builtin_ops.m"
                                                                              MR_Integer backend_libs__builtin_ops__CastX_41 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 44 "builtin_ops.m"
                                                                              MR_Integer backend_libs__builtin_ops__CastY_42 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 44 "builtin_ops.m"
                                                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_42 == backend_libs__builtin_ops__CastX_41);
#line 44 "builtin_ops.m"
                                                                            }
#line 44 "builtin_ops.m"
                                                                          else
#line 44 "builtin_ops.m"
                                                                            if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 19)))))
#line 44 "builtin_ops.m"
                                                                              {
#line 44 "builtin_ops.m"
                                                                                MR_Integer backend_libs__builtin_ops__CastX_43 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 44 "builtin_ops.m"
                                                                                MR_Integer backend_libs__builtin_ops__CastY_44 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 44 "builtin_ops.m"
                                                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_44 == backend_libs__builtin_ops__CastX_43);
#line 44 "builtin_ops.m"
                                                                              }
#line 44 "builtin_ops.m"
                                                                            else
#line 44 "builtin_ops.m"
                                                                              if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17)))))
#line 44 "builtin_ops.m"
                                                                                {
#line 44 "builtin_ops.m"
                                                                                  MR_Integer backend_libs__builtin_ops__CastX_39 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 44 "builtin_ops.m"
                                                                                  MR_Integer backend_libs__builtin_ops__CastY_40 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 44 "builtin_ops.m"
                                                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_40 == backend_libs__builtin_ops__CastX_39);
#line 44 "builtin_ops.m"
                                                                                }
#line 44 "builtin_ops.m"
                                                                              else
#line 44 "builtin_ops.m"
                                                                                if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)))))
#line 44 "builtin_ops.m"
                                                                                  {
#line 44 "builtin_ops.m"
                                                                                    MR_Integer backend_libs__builtin_ops__CastX_37 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 44 "builtin_ops.m"
                                                                                    MR_Integer backend_libs__builtin_ops__CastY_38 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 44 "builtin_ops.m"
                                                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_38 == backend_libs__builtin_ops__CastX_37);
#line 44 "builtin_ops.m"
                                                                                  }
#line 44 "builtin_ops.m"
                                                                                else
#line 44 "builtin_ops.m"
                                                                                  if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 44 "builtin_ops.m"
                                                                                    {
#line 44 "builtin_ops.m"
                                                                                      MR_Integer backend_libs__builtin_ops__CastX_13 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 44 "builtin_ops.m"
                                                                                      MR_Integer backend_libs__builtin_ops__CastY_14 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 44 "builtin_ops.m"
                                                                                      backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_14 == backend_libs__builtin_ops__CastX_13);
#line 44 "builtin_ops.m"
                                                                                    }
#line 44 "builtin_ops.m"
                                                                                  else
#line 44 "builtin_ops.m"
                                                                                    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 44 "builtin_ops.m"
                                                                                      {
#line 44 "builtin_ops.m"
                                                                                        MR_Integer backend_libs__builtin_ops__CastX_15 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 44 "builtin_ops.m"
                                                                                        MR_Integer backend_libs__builtin_ops__CastY_16 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 44 "builtin_ops.m"
                                                                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_16 == backend_libs__builtin_ops__CastX_15);
#line 44 "builtin_ops.m"
                                                                                      }
#line 44 "builtin_ops.m"
                                                                                    else
#line 44 "builtin_ops.m"
                                                                                      if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 26)))))
#line 44 "builtin_ops.m"
                                                                                        {
#line 44 "builtin_ops.m"
                                                                                          MR_Integer backend_libs__builtin_ops__CastX_57 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 44 "builtin_ops.m"
                                                                                          MR_Integer backend_libs__builtin_ops__CastY_58 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 44 "builtin_ops.m"
                                                                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_58 == backend_libs__builtin_ops__CastX_57);
#line 44 "builtin_ops.m"
                                                                                        }
#line 44 "builtin_ops.m"
                                                                                      else
#line 44 "builtin_ops.m"
                                                                                        {
#line 44 "builtin_ops.m"
                                                                                          MR_Word backend_libs__builtin_ops__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 0)));
#line 44 "builtin_ops.m"
                                                                                          MR_Word backend_libs__builtin_ops__V_34_34;

#line 44 "builtin_ops.m"
                                                                                          backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 44 "builtin_ops.m"
                                                                                          if (backend_libs__builtin_ops__succeeded)
#line 44 "builtin_ops.m"
                                                                                            {
#line 44 "builtin_ops.m"
                                                                                              backend_libs__builtin_ops__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));
#line 8905 "backend_libs.builtin_ops.c"
                                                                                              {
#line 8907 "backend_libs.builtin_ops.c"
                                                                                                return backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____array_elem_type_0_0(backend_libs__builtin_ops__V_33_33, backend_libs__builtin_ops__V_34_34);
                                                                                              }
#line 44 "builtin_ops.m"
                                                                                            }
#line 44 "builtin_ops.m"
                                                                                        }
#line 44 "builtin_ops.m"
    return backend_libs__builtin_ops__succeeded;
#line 44 "builtin_ops.m"
  }
#line 44 "builtin_ops.m"
}

#line 105 "builtin_ops.m"
void MR_CALL 
backend_libs__builtin_ops____Compare____array_elem_type_0_0(
#line 105 "builtin_ops.m"
  MR_Word * backend_libs__builtin_ops__HeadVar__1_1,
#line 105 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__2_2,
#line 105 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__3_3)
#line 105 "builtin_ops.m"
{
#line 105 "builtin_ops.m"
  {
#line 105 "builtin_ops.m"
    MR_bool backend_libs__builtin_ops__succeeded;
#line 105 "builtin_ops.m"
    MR_Integer backend_libs__builtin_ops__CastX_12 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;
#line 105 "builtin_ops.m"
    MR_Integer backend_libs__builtin_ops__CastY_13 = (MR_Integer) backend_libs__builtin_ops__HeadVar__3_3;

#line 105 "builtin_ops.m"
    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastX_12 == backend_libs__builtin_ops__CastY_13);
#line 105 "builtin_ops.m"
    if (backend_libs__builtin_ops__succeeded)
#line 8945 "backend_libs.builtin_ops.c"
      *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 0;
#line 105 "builtin_ops.m"
    else
#line 105 "builtin_ops.m"
      if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 105 "builtin_ops.m"
        {
#line 105 "builtin_ops.m"
          MR_Word backend_libs__builtin_ops__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));

#line 105 "builtin_ops.m"
          if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 105 "builtin_ops.m"
            {
#line 105 "builtin_ops.m"
              MR_Word backend_libs__builtin_ops__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)));
#line 105 "builtin_ops.m"
              MR_Integer backend_libs__builtin_ops__V_18_18 = (MR_Integer) backend_libs__builtin_ops__V_16_16;
#line 105 "builtin_ops.m"
              MR_Integer backend_libs__builtin_ops__V_19_19 = (MR_Integer) backend_libs__builtin_ops__V_5_5;

#line 105 "builtin_ops.m"
              {
#line 105 "builtin_ops.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__builtin_ops__HeadVar__1_1, backend_libs__builtin_ops__V_18_18, backend_libs__builtin_ops__V_19_19);
#line 105 "builtin_ops.m"
                return;
              }
#line 105 "builtin_ops.m"
            }
#line 105 "builtin_ops.m"
          else
#line 8978 "backend_libs.builtin_ops.c"
            *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 105 "builtin_ops.m"
        }
#line 105 "builtin_ops.m"
      else
#line 105 "builtin_ops.m"
        {
#line 105 "builtin_ops.m"
          MR_Word backend_libs__builtin_ops__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));

#line 105 "builtin_ops.m"
          if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 8991 "backend_libs.builtin_ops.c"
            *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 105 "builtin_ops.m"
          else
#line 105 "builtin_ops.m"
            {
#line 105 "builtin_ops.m"
              MR_Word backend_libs__builtin_ops__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)));

#line 105 "builtin_ops.m"
              {
#line 105 "builtin_ops.m"
                mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__builtin_ops_scalar_common_1[0], backend_libs__builtin_ops__HeadVar__1_1, ((MR_Box) (backend_libs__builtin_ops__V_17_17)), ((MR_Box) (backend_libs__builtin_ops__V_11_11)));
#line 105 "builtin_ops.m"
                return;
              }
#line 105 "builtin_ops.m"
            }
#line 105 "builtin_ops.m"
        }
#line 105 "builtin_ops.m"
  }
#line 105 "builtin_ops.m"
}

#line 105 "builtin_ops.m"
MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____array_elem_type_0_0(
#line 105 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__1_1,
#line 105 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__2_2)
#line 105 "builtin_ops.m"
{
#line 105 "builtin_ops.m"
  {
#line 105 "builtin_ops.m"
    MR_bool backend_libs__builtin_ops__succeeded;
#line 105 "builtin_ops.m"
    MR_Integer backend_libs__builtin_ops__CastX_7 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 105 "builtin_ops.m"
    MR_Integer backend_libs__builtin_ops__CastY_8 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 105 "builtin_ops.m"
    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastX_7 == backend_libs__builtin_ops__CastY_8);
#line 105 "builtin_ops.m"
    if (backend_libs__builtin_ops__succeeded)
#line 105 "builtin_ops.m"
      backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 105 "builtin_ops.m"
    else
#line 105 "builtin_ops.m"
      if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 105 "builtin_ops.m"
        {
#line 105 "builtin_ops.m"
          MR_Word backend_libs__builtin_ops__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 0)));
#line 105 "builtin_ops.m"
          MR_Word backend_libs__builtin_ops__V_4_4;

#line 105 "builtin_ops.m"
          backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 105 "builtin_ops.m"
          if (backend_libs__builtin_ops__succeeded)
#line 105 "builtin_ops.m"
            {
#line 105 "builtin_ops.m"
              backend_libs__builtin_ops__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));
#line 9059 "backend_libs.builtin_ops.c"
              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_3_3 == backend_libs__builtin_ops__V_4_4);
#line 105 "builtin_ops.m"
            }
#line 105 "builtin_ops.m"
        }
#line 105 "builtin_ops.m"
      else
#line 105 "builtin_ops.m"
        {
#line 105 "builtin_ops.m"
          MR_Word backend_libs__builtin_ops__TypeInfo_9_9;
#line 105 "builtin_ops.m"
          MR_Word backend_libs__builtin_ops__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 0)));
#line 105 "builtin_ops.m"
          MR_Word backend_libs__builtin_ops__V_6_6;

#line 105 "builtin_ops.m"
          backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 105 "builtin_ops.m"
          if (backend_libs__builtin_ops__succeeded)
#line 105 "builtin_ops.m"
            {
#line 105 "builtin_ops.m"
              backend_libs__builtin_ops__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));
#line 9084 "backend_libs.builtin_ops.c"
              backend_libs__builtin_ops__TypeInfo_9_9 = (MR_Word) &backend_libs__builtin_ops_scalar_common_1[0];
#line 9086 "backend_libs.builtin_ops.c"
              {
#line 9088 "backend_libs.builtin_ops.c"
                return backend_libs__builtin_ops__succeeded = mercury__builtin__unify_2_p_0(backend_libs__builtin_ops__TypeInfo_9_9, ((MR_Box) (backend_libs__builtin_ops__V_5_5)), ((MR_Box) (backend_libs__builtin_ops__V_6_6)));
              }
#line 105 "builtin_ops.m"
            }
#line 105 "builtin_ops.m"
        }
#line 105 "builtin_ops.m"
    return backend_libs__builtin_ops__succeeded;
#line 105 "builtin_ops.m"
  }
#line 105 "builtin_ops.m"
}

#line 126 "builtin_ops.m"
MR_bool MR_CALL 
backend_libs__builtin_ops__translate_builtin_5_p_0(
#line 126 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__TypeInfo_for_T_13,
#line 126 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__FullyQualifiedModule_6,
#line 126 "builtin_ops.m"
  MR_String backend_libs__builtin_ops__PredName_7,
#line 126 "builtin_ops.m"
  MR_Integer backend_libs__builtin_ops__ProcId_8,
#line 126 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__Args_9,
#line 126 "builtin_ops.m"
  MR_Word * backend_libs__builtin_ops__Code_10)
#line 126 "builtin_ops.m"
{
#line 176 "builtin_ops.m"
  {
#line 176 "builtin_ops.m"
    MR_bool backend_libs__builtin_ops__succeeded;
#line 176 "builtin_ops.m"
    MR_Integer backend_libs__builtin_ops__ProcInt_11;
#line 176 "builtin_ops.m"
    MR_String backend_libs__builtin_ops__ModuleName_12;

#line 177 "builtin_ops.m"
    {
#line 177 "builtin_ops.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(backend_libs__builtin_ops__ProcId_8, &backend_libs__builtin_ops__ProcInt_11);
    }
#line 178 "builtin_ops.m"
    {
#line 178 "builtin_ops.m"
      backend_libs__builtin_ops__succeeded = mdbcomp__prim_data__is_std_lib_module_name_2_p_0(backend_libs__builtin_ops__FullyQualifiedModule_6, &backend_libs__builtin_ops__ModuleName_12);
    }
#line 176 "builtin_ops.m"
    if (backend_libs__builtin_ops__succeeded)
#line 179 "builtin_ops.m"
      {
#line 179 "builtin_ops.m"
        return backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_p_0(backend_libs__builtin_ops__ModuleName_12, backend_libs__builtin_ops__PredName_7, backend_libs__builtin_ops__ProcInt_11, backend_libs__builtin_ops__Args_9, backend_libs__builtin_ops__Code_10);
      }
#line 176 "builtin_ops.m"
    return backend_libs__builtin_ops__succeeded;
#line 176 "builtin_ops.m"
  }
#line 126 "builtin_ops.m"
}

void mercury__backend_libs__builtin_ops__init(void)
{
}

void mercury__backend_libs__builtin_ops__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_array_elem_type_0);
	MR_register_type_ctor_info(&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_binary_op_0);
	MR_register_type_ctor_info(&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0);
	MR_register_type_ctor_info(&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_simple_code_1);
	MR_register_type_ctor_info(&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_simple_expr_1);
	MR_register_type_ctor_info(&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_unary_op_0);
}

void mercury__backend_libs__builtin_ops__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module backend_libs.builtin_ops. */
